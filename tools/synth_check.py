"""Synthetic calls for functions no test runs (2026-11-01).

tools/offline_check.py compares a port with the original from states the game
really called the function in.  Virtual methods that no level reaches have no
such state; this builds one: the memory of a real capture (taken with
BEA_CAPTURE_PHEAP=copy, so the whole process heap is there), `this` set to an
object of a class whose vtable holds the method (found by its vptr in that
heap), and a few argument patterns.  The original and the port then run from
the same state in the emulator and their results are compared as
offline_check compares them.  There is no game result to check the emulated
original against, so this is weaker evidence than a real capture; a function
counts as verified when at least two trials ran to the end on both sides and
none differed.

    python -I tools/synth_check.py CAPDIR ADDR... [--dll build_pool/zlib.dll] [-v]
"""
import argparse, collections, csv, mmap, os, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import offline_check as oc          # noqa: E402

PAGE = oc.PAGE


def vtables_of(addr):
    """vptr values whose table holds addr: (vptr, slot)"""
    vt = {}
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'rtti_classes.csv'))):
        vt[(r['class'], int(r['this_offset']))] = int(r['vtable_va'], 16)
    out = set()
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'vtable_slots_by_function.csv'))):
        if int(r['function_va'], 16) == addr:
            v = vt.get((r['class'], int(r['this_offset'])))
            if v:
                out.add((v, int(r['slot'])))
    return sorted(out)


def stack_args(addr):
    """the number of stack arguments from Ghidra's signature (this excluded)"""
    fn = oc.fp.funcs().get(addr) if hasattr(oc, 'fp') else None
    for row in csv.reader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='')):
        if row and row[0].lower() == '%08x' % addr:
            sig = row[-1]
            inner = sig[sig.find('(') + 1:sig.rfind(')')].strip()
            if not inner or inner == 'void':
                return 0
            n = inner.count(',') + 1
            return n - 1 if row[9] == '__thiscall' else n
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capdir')
    ap.add_argument('addr', nargs='+')
    ap.add_argument('--dll', default=os.path.join(ROOT, 'build_pool', 'zlib.dll'))
    ap.add_argument('--objects', type=int, default=3, help='objects tried per vtable')
    ap.add_argument('-v', action='store_true')
    a = ap.parse_args()
    syms = oc.port_symbols(a.dll)
    rp = os.path.join(a.capdir, 'regions.txt')
    dll_base = None
    for line in open(rp, errors='replace'):
        f = line.split(None, 6)
        if len(f) == 7 and f[2] == 'img' and os.path.basename(f[6].strip()).lower() == 'zlib.dll':
            dll_base = int(f[4], 16)
            break
    emu = oc.Emu(a.dll, oc.Foreign(rp), dll_base)
    delta = emu.dll.base - emu.dll.pref
    if delta:
        syms = {k: v + delta for k, v in syms.items()}
        for k in oc.LIFT_BOUNDS:
            oc.LIFT_BOUNDS[k] += delta
    pf = open(os.path.join(a.capdir, 'pages.bin'), 'rb')
    pm = mmap.mmap(pf.fileno(), 0, access=mmap.ACCESS_READ)
    # the base state: the capture with the most memory
    base = max(oc.read_captures(a.capdir), key=lambda c: len(c['pages']))
    mem = {p: bytes(pm[b:b + PAGE]) for p, b, _ in base['stack'] + base['pages']}
    stackpages = {p for p, _, _ in base['stack']}
    heap = sorted(p for p in mem if p not in stackpages and not (emu.exe.base <= p < emu.exe.end))
    print('base state: call %d of %08x, %d pages (%d outside the stack and BEA.exe)' % (
        base['ordinal'], base['addr'], len(mem), len(heap)), flush=True)
    vptr_at = collections.defaultdict(list)
    for p in heap:
        d = mem[p]
        for o in range(0, PAGE, 4):
            v = struct.unpack_from('<I', d, o)[0]
            if 0x5d0000 <= v < 0x622000:
                vptr_at[v].append(p + o)
    esp = base['regs_in'][4]
    bad = 0
    for h in a.addr:
        addr = int(h, 16)
        if addr not in syms:
            print('%08x  no port in %s' % (addr, a.dll))
            continue
        nargs = stack_args(addr)
        objs = []
        for v, slot in vtables_of(addr):
            objs += vptr_at.get(v, [])[:a.objects]
        if not objs:
            print('%08x  no object of its classes in the heap: not judged' % addr)
            continue
        pats = [[0] * nargs, [1 + i for i in range(nargs)], [0x3f800000] * nargs, [objs[0]] * nargs]
        if nargs == 0:
            pats = [[]]
        st = collections.Counter()
        first = None
        for obj in objs:
            for args in pats:
                cap = dict(base)
                regs = list(base['regs_in'])
                regs[1] = obj                        # ecx (REGS: eax ecx edx ebx esp ebp esi edi)
                cap['regs_in'] = regs
                before = dict(mem)
                sp = esp & ~(PAGE - 1)
                if args:
                    blob = struct.pack('<%dI' % len(args), *args)
                    page = bytearray(before[sp] + before.get(sp + PAGE, b'\0' * PAGE))
                    off = esp - sp + 4
                    page[off:off + len(blob)] = blob
                    before[sp] = bytes(page[:PAGE])
                    if sp + PAGE in before:
                        before[sp + PAGE] = bytes(page[PAGE:])
                try:
                    o = emu.run(cap, addr, before)
                except oc.Untestable as e:
                    st['original untestable'] += 1
                    first = first or 'original: %s' % e
                    continue
                o['stackpages'] = stackpages
                try:
                    p = emu.run(cap, syms[addr], before)
                except oc.Untestable as e:
                    st['port untestable'] += 1
                    first = first or 'port: %s' % e
                    continue
                p['stackpages'] = stackpages
                d = oc.compare(o, p, o['regs'][4], 'memory', ('ecx', 'edx'), eax=oc.eax_mask(addr),
                               args=oc.cdecl_arg_bytes(addr))
                extra = sorted(set(p['missing']) - set(o['missing']))
                if extra:
                    d.append('port touched %d page(s) the original did not' % len(extra))
                if d and all(x.startswith('eax ') for x in d):
                    st['eax only'] += 1
                    first = first or 'eax: ' + d[0]
                elif d:
                    st['differ'] += 1
                    first = first or '; '.join(d[:3])
                    if a.v:
                        print('%08x this=%08x args=%s: %s' % (addr, obj, args, '; '.join(d[:4])))
                else:
                    st['same'] += 1
        verdict = 'DIFFERS' if st['differ'] else 'EAX ONLY' if st['eax only'] else \
            'same' if st['same'] >= 2 else 'not judged'
        bad += verdict == 'DIFFERS'
        print('%08x  %d objects, %d args: %s  -> %s%s' % (addr, len(objs), nargs, dict(st), verdict,
                                                          '  - ' + first if first and verdict != 'same' else ''), flush=True)
    sys.exit(1 if bad else 0)


if __name__ == '__main__':
    main()
