"""List ports that call an ECX-reading game function without passing ECX.

Ghidra sometimes types a callee __cdecl/__stdcall although its body reads
ECX (`in_ECX`, i.e. it is really __thiscall or takes a register argument).
A port then calls it through a cdecl/stdcall pointer and never sets ECX: it
only worked while ECX happened to hold the value a previous callee left
there, and any change in the port's code generation broke it (2026-10-20:
wrapping calls in bea_guard broke 0x409f70 -> 0x4145f0 at level load; 0x4cb3d0
called this way handed 0x4cb5c0 a garbage object: the level 500/700 crashes).
    python -I tools/check_ecx.py [dirs or files...]   (default: every port)
Prints "<port> <callee>(<convention>)".
"""
import csv
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def main():
    conv = {}
    for r in csv.reader(open(os.path.join(ROOT, 'ghidra_out', 'conventions.csv'))):
        if r and re.match(r'^[0-9a-f]{8}$', r[0]):
            conv[int(r[0], 16)] = r[1]
    uses_ecx = set()
    for p in glob.glob(os.path.join(ROOT, 'ghidra_out', 'per_function', '*.c')):
        t = open(p, errors='replace').read()
        if 'in_ECX' in t or '__thiscall' in t.split('{')[0]:
            uses_ecx.add(int(os.path.basename(p)[:8], 16))
    paths = []
    for p in sys.argv[1:] or [os.path.join(ROOT, 'src', 'bea', '*')]:
        paths += glob.glob(os.path.join(p, 'ap_*.cpp')) if not p.endswith('.cpp') else [p]
    bad = 0
    decl = re.compile(r'typedef .+? \((BEA_CDECL|BEA_STDCALL)\* (\w+)_t\)\(.*?\);\s*static (?:const bea_guard<\2_t> \2 = \{\(\2_t\)|\2_t const \2 = \(\2_t\))0x([0-9a-f]+)')
    for p in sorted(paths):
        m = re.match(r'ap_([0-9a-f]{8})\.cpp$', os.path.basename(p))
        if not m:
            continue
        for d in decl.finditer(open(p, errors='replace').read()):
            c = int(d.group(3), 16)
            if c in uses_ecx or conv.get(c) == '__thiscall':
                print('%s %08x(%s)' % (m.group(1), c, conv.get(c)))
                bad += 1
    print('%d call(s) to ECX-reading callees without ECX' % bad)
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
