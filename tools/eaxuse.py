"""Does anybody use the value a function leaves in EAX?

For a function whose decompile says `void` but whose code leaves something in
EAX at `ret` (tools/autoport.py "eax other"), scan every direct call site in
BEA.exe: after the `call`, is EAX read before it is written?  Virtual
functions (vslot names) are also reached through vtables, so for those the
slot's sibling implementations are checked: if any sibling returns a value
(non-void decompile signature) the slot is treated as value-returning.

CLI: python -I tools/eaxuse.py <addr_hex>...   (prints used/unused and why)
API: eax_used(addr) -> (bool used, str reason)
"""
import csv, functools, os, re, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
_pe = pefile.PE(os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe'))
_base = _pe.OPTIONAL_HEADER.ImageBase
_img = _pe.get_memory_mapped_image()
_md = Cs(CS_ARCH_X86, CS_MODE_32)
_md.detail = False


@functools.lru_cache(None)
def _functions():
    out = {}
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
        out[int(r['address'], 16)] = (int(r['size']), r['name'], r['namespace'], r['signature'])
    return out


@functools.lru_cache(None)
def _callers():
    out = {}
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'calls.csv'))):
        try:
            out.setdefault(int(r['callee'], 16), set()).add(int(r['caller'], 16))
        except ValueError:
            pass
    return out


@functools.lru_cache(None)
def _slots():
    """function va -> (class, slot); and (class, slot) -> [function vas]"""
    by_fn, by_slot = {}, {}
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'vtable_slots_by_function.csv'))):
        va = int(r['function_va'], 16)
        key = (r['class'], int(r['slot']))
        by_fn.setdefault(va, set()).add(key)
        by_slot.setdefault(key, set()).add(va)
    return by_fn, by_slot


def _disasm(addr, size):
    return list(_md.disasm(bytes(_img[addr - _base: addr - _base + size]), addr))


_EAX = re.compile(r'\b(eax|ax|al|ah)\b')


def _reads_eax(i):
    m, o = i.mnemonic, i.op_str
    if not _EAX.search(o):
        return m in ('cdq', 'cwde', 'cbw', 'mul', 'imul', 'div', 'idiv', 'stosd', 'stosb', 'stosw', 'sahf')
    dst, _, src = o.partition(', ')
    if _EAX.search(src) or '[' in dst and _EAX.search(dst):
        return True
    # destination operand that is also read: cmp/test/push/rmw
    if m in ('cmp', 'test', 'push', 'add', 'sub', 'adc', 'sbb', 'and', 'or', 'xor', 'inc', 'dec', 'neg', 'not',
             'shl', 'shr', 'sar', 'rol', 'ror', 'imul', 'cmovne', 'cmove', 'cmovg', 'cmovl', 'cmovge', 'cmovle', 'cmova', 'cmovb') \
            and _EAX.match(dst):
        return not (m == 'xor' and dst == src)
    return False


def _writes_eax(i):
    m, o = i.mnemonic, i.op_str
    if m == 'call':
        return True
    dst = o.partition(', ')[0]
    return bool(_EAX.match(dst)) and '[' not in dst and m not in ('cmp', 'test', 'push')


def _used_after(caller, size, target, budget=60):
    """True if some path after a `call target` in `caller` reads EAX before
    writing it (or runs off the budget: unknown counts as used)."""
    ins = _disasm(caller, size)
    idx = {i.address: k for k, i in enumerate(ins)}
    sites = [k for k, i in enumerate(ins) if i.mnemonic == 'call' and i.op_str == '0x%x' % target]
    if not sites:
        return None
    for s in sites:
        work = [s + 1]
        seen = set()
        while work:
            k = work.pop()
            steps = 0
            while k < len(ins) and k not in seen and steps < budget:
                seen.add(k)
                i = ins[k]
                steps += 1
                if _reads_eax(i):
                    return True
                if _writes_eax(i):
                    break
                if i.mnemonic == 'ret':
                    break
                if i.mnemonic == 'jmp':
                    t = int(i.op_str, 16) if i.op_str.startswith('0x') else None
                    if t in idx:
                        k = idx[t]
                        continue
                    return True       # indirect / tail jump: unknown
                if i.mnemonic.startswith('j') and i.op_str.startswith('0x'):
                    t = int(i.op_str, 16)
                    if t in idx:
                        work.append(idx[t])
                k += 1
            else:
                if steps >= budget:
                    return True
    return False


def _value_like(addr, size):
    ins = _disasm(addr, size)
    for k, i in enumerate(ins):
        if i.mnemonic != 'ret':
            continue
        for j in range(k - 1, -1, -1):
            p = ins[j]
            if p.mnemonic in ('jmp', 'ret'):
                break
            if p.mnemonic == 'call':
                break          # a trailing call is not evidence of a computed return value
            if _writes_eax(p):
                # consumed by a store into memory afterwards = setter, not a return value
                if any(q.mnemonic == 'mov' and q.op_str.endswith(', eax') and '[' in q.op_str for q in ins[j + 1:k]):
                    break
                return True
    return False


def eax_used(addr):
    fns = _functions()
    if addr not in fns:
        return True, 'unknown function'
    by_fn, by_slot = _slots()
    if addr in by_fn:
        # Ghidra types `return 0` stubs as void, so sibling signatures are not
        # enough: a sibling whose code leaves a computed value in EAX at some
        # `ret` makes the slot value-returning.
        if _value_like(addr, fns[addr][0]):
            return True, 'virtual and leaves a computed value in EAX'
        # implementations shared by many unrelated slots (the `return 0` /
        # empty stubs, NOTES A0-3) say nothing about this slot
        shared = {f for f, keys in by_fn.items() if len({k[1] for k in keys}) >= 3}
        for key in by_fn[addr]:
            for sib in by_slot.get(key, ()):
                if sib == addr or sib not in fns or sib in shared:
                    continue
                if _value_like(sib, fns[sib][0]):
                    return True, 'virtual slot %s:%d sibling %08x leaves a value in EAX' % (key[0], key[1], sib)
    for c in sorted(_callers().get(addr, ())):
        if c not in fns:
            return True, 'caller %08x unknown' % c
        r = _used_after(c, fns[c][0], addr)
        if r is None:
            continue
        if r:
            return True, 'caller %08x reads EAX after the call' % c
    n = len(_callers().get(addr, ()))
    if n == 0 and addr not in by_fn:
        return True, 'no known callers'
    return False, '%d direct caller(s) overwrite EAX before reading it%s' % (n, '; virtual slot siblings are void' if addr in by_fn else '')


if __name__ == '__main__':
    for a in sys.argv[1:]:
        u, why = eax_used(int(a, 16))
        print('%s %s: %s' % (a, 'USED' if u else 'unused', why))
