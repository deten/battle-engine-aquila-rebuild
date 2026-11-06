"""Infer calling convention and stack-argument count for every game function.

Writes ghidra_out/conventions.csv: address,convention,argc,uses_ecx,ret_pop
Convention: __thiscall (ECX read before written, callee pops), __stdcall
(callee pops, no ECX), __cdecl (no pop); argc from `ret N` or, for cdecl,
from the highest [esp+K] argument slot read.  Usage: python -I tools/conventions.py
"""
import csv, os, re
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
pe = pefile.PE(os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe'))
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
md = Cs(CS_ARCH_X86, CS_MODE_32)


import glob


def body_uses_this(addr):
    files = glob.glob(os.path.join(ROOT, 'ghidra_out', 'per_function', '%08x_*.c' % addr))
    if not files:
        return True
    src = open(files[0], encoding='utf-8', errors='replace').read()
    body = src[src.find('{'):]
    return re.search(r'\bthis\b', body) is not None


def tail_targets(addr, size):
    """Targets of the jumps that leave a function with no `ret` (a destructor
    that resets its vtables and jumps to the base destructor, a dispatcher
    that jumps to one of two handlers), or None if it has a `ret`, an
    indirect jump, or no exit jump."""
    ins = list(md.disasm(bytes(img[addr - base: addr - base + size]), addr))
    out = set()
    for i in ins:
        if i.mnemonic == 'ret':
            return None
        if i.mnemonic.startswith('j'):
            if not i.op_str.startswith('0x'):
                return None
            t = int(i.op_str, 16)
            if not (addr <= t < addr + size):
                out.add(t)
    return out or None


def analyse(addr, size, tail_pop=None):
    ins = list(md.disasm(bytes(img[addr - base: addr - base + size]), addr))
    pops = set()
    for i in ins:
        if i.mnemonic == 'ret':
            pops.add(int(i.op_str, 16) if i.op_str.startswith('0x') else (int(i.op_str) if i.op_str else 0))
    if not pops and tail_pop is not None:
        pops = {tail_pop}       # leaves through tail jumps: pops what its targets pop
    if len(pops) != 1:
        return None
    pop = pops.pop()
    # ECX read before any write (linear scan is good enough for a prologue)
    uses_ecx = False
    for i in ins:
        ops = i.op_str
        writes_ecx = re.match(r'(ecx|cx|cl|ch)\b', ops) and i.mnemonic in ('mov', 'lea', 'xor', 'pop', 'movzx', 'movsx', 'or', 'and') and not re.match(r'(ecx|cx|cl|ch), .*\b(ecx|cx|cl|ch)\b', ops)
        reads_ecx = re.search(r'\becx\b|\bcx\b|\bcl\b|\bch\b', ops) and not (writes_ecx and not re.search(r',.*\b(ecx|cx|cl|ch)\b', ops))
        if i.mnemonic == 'xor' and ops in ('ecx, ecx',):
            writes_ecx, reads_ecx = True, False
        # VC6 reserves a local slot with `push ecx` (= sub esp,4): that is not
        # a read of `this` unless the pushed value feeds a call right away
        if i.mnemonic == 'push' and ops == 'ecx':
            k = ins.index(i)
            nxt = [q for q in ins[k + 1:k + 4] if q.mnemonic != 'push']
            if not (nxt and nxt[0].mnemonic == 'call'):
                # a reserved slot.  This used to ask the decompile whether the
                # body mentions `this` (body_uses_this), but that regex held
                # backspace characters instead of \b and never matched; fixed on
                # 2026-10-27 it flipped nine functions (0x40f260, 0x42e880,
                # 0x42ee90, 0x430e60, 0x4bdff0, 0x4ee8f0, 0x5042f0, 0x505ae0,
                # 0x543f50) to __thiscall, and every one of them only reserves the
                # slot (`push ecx` ... `lea eax, [esp + 8]` as an out-buffer) and
                # is live and right as cdecl/stdcall.  So: not a read.
                reads_ecx = False
        if reads_ecx:
            uses_ecx = True
            break
        if writes_ecx:
            break
        if i.mnemonic in ('call', 'jmp', 'ret'):
            break
    depth = 0
    max_arg = 0
    for i in ins:
        m, o = i.mnemonic, i.op_str
        if m == 'push': depth += 4
        elif m == 'pop': depth -= 4
        elif m == 'sub' and o.startswith('esp, '): depth += int(o[5:], 0)
        elif m == 'add' and o.startswith('esp, '): depth -= int(o[5:], 0)
        for mm in re.finditer(r'\[esp \+ (0x[0-9a-f]+|\d+)\]', o):
            k = int(mm.group(1), 0)
            if k >= depth + 4:
                max_arg = max(max_arg, (k - depth - 4) // 4 + 1)
        if m == 'ret':
            break
    # EDX (or EAX) read before being written = a register-passed argument
    # (VC6 fastcall-style optimisation for internal functions): unsupported
    for reg in ('edx', 'eax'):
        for i in ins:
            ops = i.op_str
            dst = ops.split(', ')[0] if ', ' in ops else ops
            reads = re.search(r'\b' + reg + r'\b', ops) and not (i.mnemonic in ('mov', 'lea', 'xor', 'pop', 'movzx', 'movsx') and dst == reg and not re.search(r',.*\b' + reg + r'\b', ops))
            if i.mnemonic == 'xor' and ops == reg + ', ' + reg:
                reads = False
            # `or edx, 0xffffffff` sets -1 whatever edx held: a write
            if i.mnemonic == 'or' and ops == reg + ', 0xffffffff':
                break
            # one-operand mul/imul write EDX:EAX, cdq writes EDX (0x506010:
            # magic-number division, then `sar edx, 5` reads the product)
            if reg == 'edx' and (i.mnemonic == 'cdq' or (i.mnemonic in ('mul', 'imul') and ', ' not in ops)):
                break
            if i.mnemonic == 'call':
                break
            if reads and reg == 'edx':
                return 'custom', 0, uses_ecx, pop
            if reads and reg == 'eax' and i.mnemonic not in ('push',):
                return 'custom', 0, uses_ecx, pop
            if dst == reg and i.mnemonic in ('mov', 'lea', 'xor', 'pop', 'movzx', 'movsx', 'setne', 'sete', 'cdq'):
                break
            if i.mnemonic == 'ret':
                break
    if uses_ecx:
        return '__thiscall', (pop // 4 if pop else max_arg), True, pop
    if pop:
        return '__stdcall', pop // 4, False, pop
    return '__cdecl', max_arg, False, 0


rows = []
_no_row = []
for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
    a = int(r['address'], 16)
    if not (0x401000 <= a < 0x55a420) or r["is_thunk"] == "true":   # game only: CRT rows made check_ecx flag 55 good ports (2026-10-21)
        continue
    res = analyse(a, int(r['size']))
    if res:
        rows.append((a,) + res)
    else:
        _no_row.append((a, int(r['size'])))
# functions that end in tail jumps take the ret_pop their targets agree on
# (callers' stack arguments pass straight through a tail jump); a few rounds
# for chains of such functions
for _round in range(3):
    _pop_of = {row[0]: row[4] for row in rows}
    _left = []
    for a, sz in _no_row:
        tt = tail_targets(a, sz)
        tp = {_pop_of.get(t) for t in tt} if tt else {None}
        res = analyse(a, sz, tail_pop=tp.pop()) if len(tp) == 1 and None not in tp else None
        if res:
            rows.append((a,) + res)
        else:
            _left.append((a, sz))
    _no_row = _left
rows.sort()
with open(os.environ.get('BEA_CONV_OUT') or os.path.join(ROOT, 'ghidra_out', 'conventions.csv'), 'w', newline='\n') as f:
    f.write('address,convention,argc,uses_ecx,ret_pop,varargs\n')
    # cdecl argument counts from the call sites: the `add esp, N` that follows
    # `call X` is exact, where the callee-side scan misses arguments read
    # through an exception frame or after a call (0x42fa80: Ghidra then
    # printed its caller with the argument dropped, NOTES A1-8 rule 21)
    site_argc = {}
    _sz = {int(r['address'], 16): int(r['size']) for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace'))}
    for a2, conv2, argc2, ecx2, pop2 in rows:
        ins2 = list(md.disasm(bytes(img[a2 - base: a2 - base + _sz[a2]]), a2))
        for k2, i2 in enumerate(ins2):
            if i2.mnemonic == 'call' and i2.op_str.startswith('0x'):
                t = int(i2.op_str, 16)
                n = 0
                # the stack adjustment may come a few instructions later
                for q in ins2[k2 + 1:k2 + 4]:
                    if q.mnemonic == 'add' and q.op_str.startswith('esp, '):
                        n = int(q.op_str[5:], 0) // 4
                        break
                    if q.mnemonic == 'pop' and q.op_str == 'ecx':
                        n = 1
                        break
                    if q.mnemonic in ('push', 'call', 'ret', 'jmp') or q.op_str.startswith('esp'):
                        break
                site_argc.setdefault(t, set()).add(n)
    # varargs: call sites clean up different amounts; argc = the fixed part (min).
    # This also catches fixed-arity functions whose callers VC6 cleans up in
    # pairs (`add esp, 0x78` after two calls of 0x555be0, 15 dwords each) or
    # later: those need a conv_overrides row (0x555be0 and 0x5563d0 were taken
    # for varargs with a short fixed part and every port of their callers
    # dropped the last argument, a sprite's trailing 1.0f: the frame oracle,
    # 2026-10-23); a dividing rule cannot tell them from a real printf.
    varargs = {t for t, ns in site_argc.items() if len(ns) > 1}
    rows = [(a2, conv2, ((min(n for n in site_argc[a2] if n > 0) if a2 in varargs else max(argc2, max(site_argc.get(a2, {0}))))
                         if conv2 == '__cdecl' else argc2), ecx2, pop2)
            for a2, conv2, argc2, ecx2, pop2 in rows]
    # hand-verified overrides (tools/conv_overrides.csv) replace the analysis
    ov = {}
    ovp = os.path.join(ROOT, 'tools', 'conv_overrides.csv')
    if os.path.exists(ovp):
        for r in csv.DictReader(open(ovp)):
            ov[int(r['address'], 16)] = (r['convention'], int(r['argc']), int(r['uses_ecx']), int(r['ret_pop']))
    for a, conv, argc, ecx, pop in rows:
        if a in ov:
            conv, argc, ecx, pop = ov[a]
            varargs.discard(a)                 # a hand-verified row is not varargs
        f.write('%08x,%s,%d,%d,%d,%d\n' % (a, conv, argc, int(ecx), pop, 1 if (a in varargs and conv == '__cdecl') else 0))
from collections import Counter
print(len(rows), Counter(r[1] for r in rows))
