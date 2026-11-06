"""Ports that read a stack local Ghidra never writes.

Ghidra sometimes drops a store to a stack slot and keeps the read: 0x4ff4f0
(CUnitAI::vslot4) stored dx with `fstps 0x18(%esp)` and the decompilation
read `fStack_18` without ever assigning it; the port's zeroed frame gave 0, and
the x term of a distance check vanished (level 511, 2026-10-21).  0x4505b0
lost three such stores.  A local that is read but never assigned, and whose
address is never taken (a callee could fill it), is such a drop.

    python -I tools/check_uninit.py [FILE.cpp...]     (default: src/bea/direct)
Prints `addr: name ...`; exit 1 if any.
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TYPES = r'(?:float|double|float10|int|uint|undefined4|short|ushort|char|byte|bool|undefined2|undefined1|undefined)'
DECL = re.compile(r'^\s*' + TYPES + r'\s*&?\s*((?:local|[a-z]+Stack)_[0-9a-f]+)\s*(?:=[^;]*)?;\s*$')
FRAME_REF = re.compile(r'^\s*' + TYPES + r'\s*&((?:local|[a-z]+Stack)_[0-9a-f]+)\s*=\s*\*reinterpret_cast')
ASSIGN_OPS = r'(?:=[^=]|\+=|-=|\*=|/=|\|=|&=|<<=|>>=|\+\+|--)'


def check(path, text=None):
    src = text if text is not None else open(path, encoding='utf-8', errors='replace').read()
    head, sep, body = src.partition('\n{\n')
    if not sep:
        return []
    names = set()
    uses = []
    for line in body.splitlines():
        m = FRAME_REF.match(line) or DECL.match(line)
        if m:
            names.add(m.group(1))
            continue
        uses.append(line)
    uses = '\n'.join(uses)
    # A callee given the address of one local may fill the slots above it (a
    # vector or matrix Ghidra split into named floats: emulate_frame keeps the
    # layout, NOTES A1-13).  Slot NN lies NN bytes below the frame top, so a
    # local with a smaller NN than some address-taken local may be written
    # that way; only locals below every taken address are certain drops.
    def off(n):
        return int(n.rsplit('_', 1)[1], 16)
    taken = [off(n) for n in names if re.search(r'&\s*' + n + r'\b', uses)
             or re.search(r'\(\s*&?' + n + r'\s*\)\s*\[', uses)]
    arrays = [off(n) for n in names if re.search(r'\b' + n + r'\s*\[', uses)]
    taken += arrays
    floor = max(taken) if taken else -1
    bad = []
    for n in sorted(names):
        if not re.search(r'(?<![\w.>])' + n + r'\b', uses):
            continue                                        # never used
        if re.search(r'&\s*' + n + r'\b', uses):             # address taken: a callee may write it
            continue
        if off(n) <= floor:
            continue                                        # may be filled through another local's address
        if re.search(r'(?<![\w.>])' + n + r'\b\s*(?:\[[^\]]*\]\s*)?' + ASSIGN_OPS, uses):
            continue                                        # assigned somewhere
        if re.search(r'(?:\+\+|--)\s*' + n + r'\b', uses):
            continue
        bad.append(n)
    return bad



def written_slots(addr):
    """(stores, floor): the Ghidra local offsets NN the original's code stores to
    (slot NN is NN bytes below the entry ESP), and the largest NN whose address
    a `lea reg, [esp+K]` takes (a callee may write anything from there up)."""
    stores, _, floor = slot_accesses(addr)
    return stores, floor


def slot_accesses(addr, trace=None):
    """(stores, accessed, floor): the local slots NN the original stores to, every
    slot it touches by an esp/ebp-relative operand (reads, stores and `lea`), and
    the largest NN whose address a `lea` takes.  Walks linearly with the
    push/pop/sub/add esp tracking of autoport.analyse_asm; a call pops what was
    pushed since the previous call unless an `add esp, N` follows (VC6)."""
    import csv
    sys.path.append(os.path.join(ROOT, 'tools'))        # append: tools/bisect.py shadows the stdlib
    import autoport
    size = None
    for r in csv.reader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='')):
        try:
            if int(r[0], 16) == addr:
                size = int(r[3]); break
        except (ValueError, IndexError):
            pass
    if not size:
        return set(), set(), -1
    depth, ebp_frame, frame_depth = 0, False, 0
    stores, accessed, floor = set(), set(), -1
    READS = ('cmp', 'test', 'push', 'call', 'jmp', 'fld', 'fild', 'fcom', 'fcomp', 'fcoms', 'fcompp', 'fucom', 'fadd', 'fsub',
             'fmul', 'fdiv', 'fsubr', 'fdivr', 'fiadd', 'fisub', 'fimul', 'fidiv', 'lea', 'movzx', 'movsx', 'imul', 'bt')
    def num(t):
        return int(t, 0)          # 0x.., decimal, and negative immediates (`add esp, -0xc`)
    ins = list(autoport.disasm_cached(addr, size))
    pending = 0          # bytes pushed since the last call: a thiscall/stdcall callee pops them
    base_depth = None    # the depth after the prologue: every path returns to it
    written = set()      # registers assigned so far: a `push edi` of one is an argument, not a register save
    for idx, i in enumerate(ins):
        m, o = i.mnemonic, i.op_str
        if base_depth is None and (m == 'call' or m.startswith('j') or m == 'ret'):
            # the prologue is over at the first call or jump; the register
            # saves in it (MSVC interleaves them with moves: 0x447bb0 has
            # `push ebx; push esi; mov esi, ecx; push edi`) were left out of
            # `pending`, an argument pushed before the first call (0x49f820:
            # `mov edi, [esp+0x28]; push edi; call`) was counted in it
            base_depth = depth - pending
        if m == 'push':
            depth += 4
            if base_depth is not None or o not in ('ebx', 'esi', 'edi', 'ebp') or o in written:
                pending += 4
        elif base_depth is None and m in ('mov', 'lea', 'xor', 'movzx', 'movsx') and re.match(r'e[a-z]{2},', o):
            written.add(o[:3])
        elif m == 'pop':
            depth -= 4
        elif m == 'sub' and o.startswith('esp, '):
            depth += num(o[5:])
            # after the prologue, `sub esp, N` is argument space (a struct passed
            # by value, 0x4e81d0's 16 bytes) that the callee pops like pushes
            pending = pending + num(o[5:]) if base_depth is not None else 0
        elif m == 'add' and o.startswith('esp, '):
            depth -= num(o[5:])
            pending = 0
        elif (m, o) == ('mov', 'ebp, esp'):
            ebp_frame, frame_depth = True, depth
        elif m == 'call':
            # VC6: the callee pops its arguments unless the caller follows with
            # `add esp, N` (cdecl, the CRT); deferred cleanups are rare
            nxt = ins[idx + 1] if idx + 1 < len(ins) else None
            if not (nxt and nxt.mnemonic == 'add' and nxt.op_str.startswith('esp, ')):
                depth -= pending
            pending = 0
        if m == 'ret':
            depth, pending = (base_depth if base_depth is not None else 0), 0   # the next block is another path
            continue
        dst = o.split(',')[0]
        # every esp/ebp-relative operand (the source too: check_frame compares
        # the port's local_NN names with the slots the code really touches)
        for opnd, is_dst in ((dst, True), (o[len(dst) + 1:].strip(), False)):
            mm = (re.search(r'\[esp \+ (?:[a-z]{2,3}\*?\d? \+ )?(0x[0-9a-f]+|\d+)\]', opnd)
                  or re.fullmatch(r'.*\[esp(?: \+ [a-z]{2,3}\*?\d?)?\]', opnd))
            k = None
            if mm:
                k = num(mm.group(1)) if mm.groups() and mm.group(1) else 0
                nn = depth - k
            elif ebp_frame:
                me = re.search(r'\[ebp - (0x[0-9a-f]+|\d+)\]', opnd)
                if me:
                    k = num(me.group(1)); nn = frame_depth + k
            if k is None or nn <= 0:
                continue                 # an argument or the return address, not a local
            if trace is not None:
                trace.append((i.address, depth, m, o, nn))
            accessed.add(nn)
            if m == 'lea':
                floor = max(floor, nn)
            elif is_dst and (not m.startswith(READS) and ',' in o or m.startswith(('fstp', 'fst', 'fistp', 'fist', 'pop'))):
                stores.add(nn)
    return stores, accessed, floor


def check_asm(path, bad):
    """keep only the never-written locals whose slot the original stores to
    (a dropped store); the others are garbage the original copies too (A1-6)"""
    addr = int(os.path.basename(path)[3:11], 16)
    stores, floor = written_slots(addr)
    out = []
    for n in bad:
        nn = int(n.rsplit('_', 1)[1], 16)
        if nn in stores and nn > floor:
            out.append(n)
    return out


def main():
    files = [a for a in sys.argv[1:] if not a.startswith('--')] or sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_*.cpp')))
    n = 0
    for p in files:
        bad = check_asm(p, check(p)) if '--all' not in sys.argv else check(p)
        if bad:
            n += 1
            print('%s: %s' % (os.path.basename(p)[3:11], ' '.join(bad)))
    print('%d port(s) read a local never written' % n)
    sys.exit(1 if n else 0)


if __name__ == '__main__':
    main()
