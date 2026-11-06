"""List ports whose original function has a VC6 try/catch (not just an unwind
frame).  tools/autoport.py strips the EH frame (NOTES A1-11) on the
assumption that the game never throws; but VC6 `catch (...)` also catches
structured exceptions, so an original with a try block survives an access
violation inside it while the port does not (2026-10-19: level 500 crashed
in 0x4cb5c0 under the port of 0x4cb3d0, whose original has a try block).

The handler stub is `mov eax, FuncInfo; jmp ___CxxFrameHandler`; FuncInfo is
{magic, maxState, pUnwindMap, nTryBlocks, pTryBlockMap, ...}.
    python -I tools/check_eh_try.py [dirs or files...]   (default src/bea/*)
Prints "<addr> tries=<n>" for each port whose original has try blocks.
"""
import glob
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
PER_FN = os.path.join(ROOT, 'ghidra_out', 'per_function')


def _reader():
    f = open(EXE, 'rb').read()
    pe = struct.unpack_from('<I', f, 0x3c)[0]
    n = struct.unpack_from('<H', f, pe + 6)[0]
    opt = struct.unpack_from('<H', f, pe + 20)[0]
    base = struct.unpack_from('<I', f, pe + 24 + 28)[0]
    sec = pe + 24 + opt

    def read(va, size):
        for i in range(n):
            s = sec + 40 * i
            vs, va0, rs, ro = struct.unpack_from('<IIII', f, s + 8)
            if va0 <= va - base < va0 + rs:
                o = va - base - va0 + ro
                return f[o:o + size]
        return None
    return read


def try_blocks(addr, read):
    """Number of try blocks of the original at addr, or None (no EH frame)."""
    src = glob.glob(os.path.join(PER_FN, '%08x_*.c' % addr))
    if not src:
        return None
    t = open(src[0], errors='replace').read()
    m = re.search(r'= &LAB_([0-9a-f]{8});', t)
    if not m or 'ExceptionList' not in t:
        return None
    stub = read(int(m.group(1), 16), 10)
    if not stub or stub[0] != 0xb8:
        return None
    funcinfo = struct.unpack_from('<I', stub, 1)[0]
    fi = read(funcinfo, 20)
    if not fi or struct.unpack_from('<I', fi, 0)[0] != 0x19930520:
        return None
    return struct.unpack_from('<I', fi, 12)[0]


def main():
    read = _reader()
    paths = []
    for p in sys.argv[1:] or glob.glob(os.path.join(ROOT, 'src', 'bea', '*')):
        paths += glob.glob(os.path.join(p, 'ap_*.cpp')) if not p.endswith('.cpp') else [p]
    bad = 0
    for p in sorted(paths):
        m = re.match(r'ap_([0-9a-f]{8})\.cpp$', os.path.basename(p))
        if not m:
            continue
        addr = int(m.group(1), 16)
        n = try_blocks(addr, read)
        if n:
            print('%08x tries=%d %s' % (addr, n, os.path.relpath(p, ROOT).replace(os.sep, '/')))
            bad += 1
    print('%d port(s) of functions with try blocks' % bad)
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
