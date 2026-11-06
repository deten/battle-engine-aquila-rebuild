"""List functions that are safe to shadow-test: no exception frame, no stores
to absolute addresses, no indirect calls, and every direct callee is itself in
the safe set (computed to a fixpoint).  Already-replaced functions count as
safe callees only if they are themselves in the set (they are called through
their original address, which is hooked).

Callees that write are allowed when they are shadow-safe themselves and every
argument the caller hands them is sandboxed (NOTES A1-8 rule 11).

Usage: python -I tools/candidates.py [--max-size N] [--readonly-callees] > list.txt
"""
import csv, glob, os, re, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
pe = pefile.PE(os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe'))
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
md = Cs(CS_ARCH_X86, CS_MODE_32)
GAME_LO, GAME_HI = 0x401000, 0x55A420
max_size = int(sys.argv[sys.argv.index('--max-size') + 1]) if '--max-size' in sys.argv else 600

hooked = set()
for path in glob.glob(os.path.join(ROOT, 'src', '**', '*.cpp'), recursive=True) + glob.glob(os.path.join(ROOT, 'src', '**', '*.inc'), recursive=True):
    for m in re.finditer(r'BEA_HOOK(?:_T|_TRIVIAL)?\(\s*(0x[0-9A-Fa-f]+)', open(path, encoding='utf-8', errors='replace').read()):
        hooked.add(int(m.group(1), 16))

info = {}
for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
    a = int(r['address'], 16)
    s = int(r['size'])
    if not (GAME_LO <= a < GAME_HI) or r['is_thunk'] == 'true':
        continue
    ins = list(md.disasm(bytes(img[a - base: a - base + s]), a))
    seh = any('fs:' in i.op_str for i in ins)
    gstore = any(i.mnemonic in ('mov', 'movs', 'fst', 'fstp', 'fistp', 'or', 'and', 'inc', 'dec', 'add', 'sub', 'xor', 'stos') and re.match(r'(?:\w+ ptr )?\[0x[0-9a-f]+\]', i.op_str) for i in ins)
    indirect = any(i.mnemonic == 'call' and not i.op_str.startswith('0x') for i in ins)
    repop = any(i.mnemonic.startswith('rep') for i in ins)
    callees = set(int(i.op_str, 16) for i in ins if i.mnemonic == 'call' and i.op_str.startswith('0x'))
    # tail jumps leave the function without a `call`; they are calls too
    for i in ins:
        if i.mnemonic == 'jmp' and i.op_str.startswith('0x'):
            t = int(i.op_str, 16)
            if not (a <= t < a + s):
                callees.add(t)
    # indirect jumps are tail calls through a pointer, except switch tables
    # (`jmp dword ptr [reg*4 + table]`), which Ghidra decompiles as a switch
    if any(i.mnemonic == 'jmp' and not i.op_str.startswith('0x')
           and not re.fullmatch(r'dword ptr \[e[a-z]{2}\*4 \+ 0x[0-9a-f]+\]', i.op_str) for i in ins):
        indirect = True
    # "deep write": a store through a register that was loaded from memory
    # (a pointer chased out of this/args) - the port would mutate shared
    # structures before the original runs.  Direct registers: ecx (this),
    # esp/ebp, and registers loaded straight from a stack argument.
    direct = {'ecx', 'esp', 'ebp'}
    deep = False
    # call sites: (target, args_direct).  args_direct means ECX and every
    # pushed argument is a sandboxed value (this, a stack argument, a stack
    # address or an immediate), so a callee that writes only through its own
    # this/arguments can only touch sandbox memory.
    sites = []
    pushes_ok = True
    for i in ins:
        m, o = i.mnemonic, i.op_str
        if m == 'push':
            if (re.fullmatch(r'0x[0-9a-f]+', o) and 0x400000 <= int(o, 16) < 0xa00000) or                     not (re.fullmatch(r'0x[0-9a-f]+|\d+', o) or o in direct
                    or re.fullmatch(r'dword ptr \[(esp|ebp) \+ (0x[0-9a-f]+|\d+)\]', o)):
                pushes_ok = False
        if m == 'call' or (m == 'jmp' and o.startswith('0x') and not (a <= int(o, 16) < a + s)):
            if o.startswith('0x'):
                sites.append((int(o, 16), pushes_ok and 'ecx' in direct))
            pushes_ok = True
            if m == 'call':
                # caller-saved registers hold callee results afterwards: not direct
                direct -= {'eax', 'ecx', 'edx'}
            continue
        if m in ('call', 'jmp', 'ret', 'je', 'jne', 'jg', 'jl', 'jge', 'jle', 'ja', 'jb', 'jae', 'jbe', 'js', 'jns'):
            pass
        dst = o.split(', ')[0] if ', ' in o else o
        src = o.split(', ', 1)[1] if ', ' in o else ''
        if m in ('mov', 'movzx', 'movsx', 'lea') and re.fullmatch(r'e[a-d]x|esi|edi|ebp', dst):
            mm = re.fullmatch(r'(?:\w+ ptr )?\[([^\]]+)\]', src)
            if m == 'lea' and mm:
                basereg = mm.group(1).split(' ')[0]
                direct.discard(dst) if basereg not in direct else direct.add(dst)
            elif mm:
                if re.fullmatch(r'esp \+ (0x[0-9a-f]+|\d+)', mm.group(1)) and dst != 'ebp':
                    direct.add(dst)          # loaded from a stack argument/local: a direct value
                else:
                    direct.discard(dst)      # loaded from memory: a chased pointer
            elif re.fullmatch(r'e[a-d]x|esi|edi|ebp', src):
                direct.add(dst) if src in direct else direct.discard(dst)
            elif re.fullmatch(r'0x[0-9a-f]+', src) and 0x400000 <= int(src, 16) < 0xa00000:
                direct.discard(dst)          # address of a global: not sandboxed
            else:
                direct.add(dst)              # immediate
        elif re.fullmatch(r'e[a-d]x|esi|edi', dst) and m in ('add', 'sub', 'and', 'or', 'xor', 'inc', 'dec', 'neg', 'imul', 'shl', 'shr', 'sar'):
            pass
        elif m == 'pop' and re.fullmatch(r'e[a-d]x|esi|edi|ebp', dst):
            direct.discard(dst)
        if m in ('mov', 'movs', 'fst', 'fstp', 'fistp', 'or', 'and', 'inc', 'dec', 'add', 'sub', 'xor', 'stos', 'movsd', 'movsb')                 and re.match(r'(?:\w+ ptr )?\[', dst):
            mm = re.match(r'(?:\w+ ptr )?\[([a-z]+)', dst)
            if mm and mm.group(1) not in direct:
                deep = True
    # any store to memory other than the function's own stack frame
    stores = False
    for i in ins:
        m, o = i.mnemonic, i.op_str
        dst = o.split(', ')[0] if ', ' in o else o
        if m in ('mov', 'movs', 'fst', 'fstp', 'fistp', 'fist', 'or', 'and', 'inc', 'dec', 'add', 'sub', 'xor', 'stos', 'movsd', 'movsb', 'neg', 'not', 'shl', 'shr', 'sar')                 and re.match(r'(?:\w+ ptr )?\[', dst) and not re.match(r'(?:\w+ ptr )?\[(esp|ebp)\b', dst):
            stores = True
            break
        if m in ('push',) and re.match(r'(?:\w+ ptr )?\[', o):
            pass
    info[a] = dict(sites=sites, size=s, seh=seh, gstore=gstore, indirect=indirect, rep=repop, deep=deep, stores=stores, callees=callees, name=r['name'], ns=r['namespace'])

# read-only helpers (no memory stores, no SEH, only read-only callees): the
# only callees a shadow port may invoke, since they cannot leak a sandbox
# pointer into real game state
readonly = set(a for a, d in info.items() if not d['seh'] and not d['stores'] and not d['indirect'] and not d['rep'] and not d['callees'])
while True:
    added = 0
    for a, d in info.items():
        if a in readonly or d['seh'] or d['stores'] or d['indirect'] or d['rep']:
            continue
        if all(c in readonly for c in d['callees']):
            readonly.add(a)
            added += 1
    if not added:
        break
# shadow-safe functions (fixpoint): no SEH / global stores / indirect calls /
# rep / deep writes, and every callee is either read-only or itself
# shadow-safe and handed only sandboxed values (see `sites`).
base_ok = set(a for a, d in info.items() if not d['seh'] and not d['gstore'] and not d['indirect'] and not d['rep'] and not d['deep'])
safe = set()
while True:
    added = 0
    for a in base_ok:
        if a in safe:
            continue
        d = info[a]
        if all(c in readonly for c in d['callees']) or (
                all(c in readonly or (c in safe and ok) for c, ok in d['sites'])
                and set(c for c, _ in d['sites']) >= d['callees']):
            safe.add(a)
            added += 1
    if not added:
        break
if '--readonly-callees' in sys.argv:   # the old, stricter rule 7
    safe = set(a for a in base_ok if all(c in readonly for c in info[a]['callees']))
cands = sorted(a for a in safe if a not in hooked and info[a]['size'] <= max_size)
with_calls = [a for a in cands if info[a]['callees']]
print('# safe set %d, unhooked candidates <= %d bytes: %d (%d with calls), bytes %d' % (len(safe), max_size, len(cands), len(with_calls), sum(info[a]['size'] for a in cands)), file=sys.stderr)
for a in cands:
    print('%08x %d %s %s' % (a, info[a]['size'], info[a]['ns'], info[a]['name']))
