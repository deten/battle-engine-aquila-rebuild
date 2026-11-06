"""Name a BEA_PROFILE histogram (hooks.cpp profile_thread): samples per module, and the
top functions - BEA.exe's by ghidra_out/functions.csv, our DLL's by its symbol table
(build/zlib.dll: ap_*, lift_*, hand-written), other modules by name only.

    python -I tools/profile_report.py bea_profile1.txt [--dll build/zlib.dll] [--top 30]
"""
import argparse, bisect, collections, os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import fingerprint as fp  # noqa: E402

NM = 'C:/msys64/mingw32/bin/nm.exe'


def dll_symbols(dll):
    """[(offset from the image base, name)] of the DLL's text symbols, sorted"""
    out = subprocess.run([NM, '-C', dll], capture_output=True, text=True).stdout
    base = None
    syms = []
    for line in out.splitlines():
        m = re.match(r'([0-9a-f]{8}) ([tT]) (.+)$', line)
        if m:
            syms.append((int(m.group(1), 16), m.group(3)))
        m = re.match(r'([0-9a-f]{8}) [A-Za-z] _*(?:ImageBase|image_base__)$', line)   # (-C strips one underscore)
        if m:
            base = int(m.group(1), 16)
    base = base or 0x10000000
    return sorted((a - base, n) for a, n in syms)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('hist')
    ap.add_argument('--dll', default=os.path.join(ROOT, 'build', 'zlib.dll'))
    ap.add_argument('--top', type=int, default=30)
    a = ap.parse_args()
    rows = []
    for line in open(a.hist):
        w = line.split()
        if len(w) >= 4:
            rows.append((int(w[0], 16), int(w[1]), w[2], int(w[3], 16)))
    total = sum(r[1] for r in rows)
    mods = collections.Counter()
    for addr, n, mod, off in rows:
        mods[mod.lower()] += n
    print('%d samples' % total)
    for mod, n in mods.most_common(10):
        print('  %5.1f%%  %s' % (100.0 * n / total, mod))
    funcs = fp.funcs()
    starts = sorted(funcs)
    syms = dll_symbols(a.dll)
    soffs = [s[0] for s in syms]
    by = collections.Counter()
    for addr, n, mod, off in rows:
        m = mod.lower()
        if m == 'bea.exe':
            i = bisect.bisect_right(starts, addr) - 1
            key = 'BEA.exe  %08x %s' % (starts[i], funcs[starts[i]][0]) if i >= 0 else 'BEA.exe ?'
        elif m == 'zlib.dll':
            i = bisect.bisect_right(soffs, off) - 1
            key = 'zlib.dll %s' % (syms[i][1][:70] if i >= 0 else '?')
        else:
            key = m
        by[key] += n
    print('top functions:')
    for k, n in by.most_common(a.top):
        print('  %5.1f%%  %s' % (100.0 * n / total, k))


if __name__ == '__main__':
    main()
