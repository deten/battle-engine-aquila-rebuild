"""Ports with a Ghidra stack local that cannot exist: it lies in the prologue's
saved-register slots or below the whole frame.

Ghidra's stack-depth tracking drifts across indirect calls whose callee pops
its arguments (thiscall vtable calls): in 0x49f820 the vcalls before
`lea ecx, [esp+0x14]` left Ghidra 0x14 bytes short, so the out-vector a vcall
fills became `&local_24` (the slot of the pushed EDI) and the float the
original reads from it after the call was resolved to an unrelated local
(level 311 "Forseti buildings" at 218.2, 2026-10-21, NOTES A1-15 bug class 18).
A drift that stays uniform keeps a port self-consistent; one that puts a name
outside the locals area is an error for certain, and that is all this flags.

The prologue is read from the disassembly: `push <callee-saved reg>` are saves
(a push of a register the function already wrote is an argument and ends the
prologue), `push ecx/eax/edx` before the first call allocate slots, `sub esp, N`
is the locals area.  Slot NN is NN bytes below the entry ESP (Ghidra's
local_NN / xStack_NN).  SEH frames (`mov fs:[0], esp`) are skipped.

    python -I tools/check_frame.py [FILES]   (default: src/bea/direct/ap_*.cpp)

Prints `addr: local_NN ...` per offending port; exit 1 if any.
"""
import csv, glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))        # append: tools/bisect.py shadows the stdlib
import autoport                                     # noqa: E402

NAME = re.compile(r'\b((?:local|[a-zA-Z]*Stack)_([0-9a-f]+))\b')
SAVED = ('ebx', 'esi', 'edi', 'ebp')
_sizes = None


def size_of(addr):
    global _sizes
    if _sizes is None:
        _sizes = {}
        for r in csv.reader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='')):
            try:
                _sizes[int(r[0], 16)] = int(r[3])
            except (ValueError, IndexError):
                pass
    return _sizes.get(addr)


def frame(addr):
    """(saved, total, seh, aligned): the slots of the saved registers, the
    frame's depth after the prologue, whether the function installs an SEH
    frame, and whether it aligns ESP (slots then depend on the caller)"""
    size = size_of(addr)
    if not size:
        return None
    ins = list(autoport.disasm_cached(addr, size))
    seh = any('fs:[0]' in i.op_str for i in ins[:12])
    aligned = any(i.mnemonic == 'and' and i.op_str.startswith('esp, ') for i in ins[:8])   # `and esp, -8`: slots move
    depth, saved, written = 0, [], set()
    # argument space below the frame: a struct passed by value (`sub esp, N`
    # after the prologue, 0x4e81d0) that Ghidra names as locals (0x5515e0's
    # local_58..local_84 are a 48-byte argument), and pushed arguments it
    # shows as xStack_NN
    extra = 0
    for k, i in enumerate(ins):
        if k > 0 and i.mnemonic == 'sub' and i.op_str.startswith('esp, ') and any(j.mnemonic == 'call' for j in ins[:k]):
            extra = max(extra, int(i.op_str[5:], 0))
    for i in ins:
        m, o = i.mnemonic, i.op_str
        if m == 'push' and o in SAVED and o not in written:
            depth += 4; saved.append(depth)
        elif m == 'push' and o in ('ecx', 'eax', 'edx') and o not in written:
            depth += 4                                  # a local slot (`push ecx` for 4 bytes)
        elif m == 'sub' and o.startswith('esp, '):
            depth += int(o[5:], 0)
        elif m == 'mov' and o == 'ebp, esp':
            pass
        elif m in ('mov', 'lea', 'xor', 'movzx', 'movsx') and re.match(r'e[a-z]{2},', o):
            written.add(o[:3])
        elif m in ('mov', 'fld', 'flds', 'fld1', 'fldz', 'xor', 'test', 'cmp', 'and', 'or') and 'esp' not in o.split(',')[0]:
            pass                                        # loads and register setup interleaved with the saves
        else:
            break
    return saved, depth + extra, seh, aligned


def check(path):
    addr = int(os.path.basename(path)[3:11], 16)
    src = open(path, encoding='utf-8', errors='replace').read()
    src = re.sub(r'//[^\n]*', '', src)
    names = {}
    for m in NAME.finditer(src):
        names.setdefault(int(m.group(2), 16), m.group(1))
    if not names:
        return []
    fr = frame(addr)
    if not fr:
        return []
    saved, total, seh, aligned = fr
    if seh or aligned or total == 0:
        return []
    bad = []
    for nn in sorted(names):
        slot = (nn + 3) & ~3                            # byte/word locals are named by their own offset
        if slot > total or slot in saved:
            bad.append(names[nn])
    # a drifted name is harmless when it is the only local: the port's emulated
    # frame holds the buffer and nothing else reads that memory (0x4e81d0)
    if bad and len(bad) == len(names):
        return []
    return bad


def main():
    files = [a for a in sys.argv[1:] if not a.startswith('--')] or sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_*.cpp')))
    n = 0
    for p in files:
        bad = check(p)
        if bad:
            n += 1
            print('%s: %s' % (os.path.basename(p)[3:11], ' '.join(bad)))
    print('%d port(s) name a stack slot outside the locals area' % n)
    sys.exit(1 if n else 0)


if __name__ == '__main__':
    main()
