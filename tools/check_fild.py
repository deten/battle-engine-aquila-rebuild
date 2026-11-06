"""Find ports that convert an integer to a float where the original reinterprets.

Ghidra prints `(float)x` both for a real int->float conversion (fild) and for
a same-size reinterpretation (an int-typed slot loaded with fld): 0x4fb3d0's
`(float)param_1[7]` is `flds 0x1c(%ebx)` in BEA.exe, but the port compiled it
as fild, so a unit's position came out as garbage and level 211 never ended
(2026-10-20).  The instruction count tells them apart: a port with more
fild/fiadd/fimul/... than its original is converting something the original
did not.

    python -I tools/check_fild.py [addr...]     (default: every src/bea/direct port)

Reads the compiled objects in build/CMakeFiles/zlib.dir/src/bea/direct and
the original's bytes from BEA.exe (objdump from MSYS2 MINGW32).
"""
import csv, glob, os, re, subprocess, sys
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OBJDUMP = r'C:\msys64\mingw32\bin\objdump.exe'
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
OBJ = os.path.join(ROOT, 'build', 'CMakeFiles', 'zlib.dir', 'src', 'bea', 'direct')
INT_X87 = re.compile(r'\tfi(ld|add|sub|subr|mul|div|divr|com|comp)\w*\s')


def sizes():
    out = {}
    with open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='') as f:
        for row in csv.reader(f):
            try:
                out[int(row[0], 16)] = int(row[3])
            except (ValueError, IndexError):
                pass
    return out


def count(lines):
    """(number of integer x87 ops, number of distinct (op, operand) pairs).  A port that converts the
    same slot twice where the original converted it once and kept the value (GCC reloads a frame
    slot after a store through a pointer) has more ops but no more distinct ones."""
    ops = [l.split('	')[-1].split('#')[0].strip() for l in lines if INT_X87.search(l)]
    return len(ops), len(set(ops))


def original(addr, size):
    out = subprocess.run([OBJDUMP, '-d', '--no-show-raw-insn', '--start-address=0x%x' % addr,
                          '--stop-address=0x%x' % (addr + size), EXE], capture_output=True, text=True).stdout
    return count(out.splitlines())


def port(addr):
    obj = os.path.join(OBJ, 'ap_%08x.cpp.obj' % addr)
    if not os.path.exists(obj):
        return None
    out = subprocess.run([OBJDUMP, '-d', '--no-show-raw-insn', obj], capture_output=True, text=True).stdout
    return count(out.splitlines())


def main():
    sz = sizes()
    argv = sys.argv[1:]
    exact = '--exact' in argv           # also report ports with fewer (a conversion lost)
    argv = [a for a in argv if a != '--exact']
    if argv:
        addrs = [int(a, 16) for a in argv]
    else:
        addrs = sorted(int(os.path.basename(p)[3:11], 16) for p in glob.glob(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_*.cpp')))
    bad = 0
    def one(a):
        if a not in sz:
            return a, None, None
        return a, original(a, sz[a]), port(a)
    with ThreadPoolExecutor(8) as ex:
        for a, o, p in ex.map(one, addrs):
            if o is None or p is None:
                continue
            # flagged when the port has more ops and more distinct ones (a slot the original never converted)
            if (p[0] > o[0] and p[1] > o[1]) or (exact and p[0] != o[0]):
                bad += 1
                print('%08x: port has %d integer x87 op(s) (%d distinct), original %d (%d distinct)' % (a, p[0], p[1], o[0], o[1]))
    print('%d port(s) with extra int->float conversions' % bad)
    sys.exit(1 if bad else 0)


if __name__ == '__main__':
    main()
