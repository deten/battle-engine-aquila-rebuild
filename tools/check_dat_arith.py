"""Ports that scale `&DAT_x + n` differently from the decompiler.

Ghidra's `&DAT_x + n` counts n in elements of the type Ghidra has at x: bytes
for undefined (no data defined) or 1-byte data, 4-byte steps for an
undefined4.  autoport.py declares DAT_x from its use (int when unsure), so a
byte offset in the decompile became 4n bytes in the port: 0x4f7d30 returned
another text buffer than it filled, and the Load Game screen rejected the
person's save as invalid (tools/menu_test.py, 2026-10-28); the split-screen
menu items (CSCModeMenuItem, 0x516c-byte player records) wrote 4x past them.

Ghidra's types come from tools/ghidra/DumpDataTypes.java, run over every
address used this way in ghidra_out/decompiled.c and the ports
(tools/dat_arith_addrs.txt -> tools/dat_arith_types.txt).  For a port's
`&DAT_x +/- ...` (not already cast to a byte pointer) the declared element
size must equal Ghidra's.

    python -I tools/check_dat_arith.py [--fix] [FILES]

--fix rewrites a mismatching `&DAT_x` in such an expression as
`((uint8_t *)&DAT_x)` when Ghidra's element is a byte, keeping the
expression's byte arithmetic; other mismatches are only reported.
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TSIZE = {'int': 4, 'uint': 4, 'undefined4': 4, 'float': 4, 'uint32_t': 4, 'int32_t': 4, 'dword': 4, 'pointer': 4,
         'short': 2, 'ushort': 2, 'undefined2': 2, 'word': 2,
         'char': 1, 'byte': 1, 'undefined1': 1, 'undefined': 1, 'bool': 1, 'uchar': 1, 'uint8_t': 1, 'none': 1,
         'double': 8, 'longlong': 8, 'undefined8': 8}
ARITH = re.compile(r'(?<![\w)*])&(_?DAT_([0-9a-f]{8}))(?=\s*[+-][^+-=])')


def ghidra_sizes():
    out = {}
    for l in open(os.path.join(ROOT, 'tools', 'dat_arith_types.txt')):
        a, t, n = l.split()
        # an array's element ("float[4]"), a pointer, or the plain type's length
        base = t.split('[')[0]
        out[a] = TSIZE.get(base, int(n) if '[' not in t else None) if not t.endswith('*') else 4
    return out


def main():
    fix = '--fix' in sys.argv
    files = [a for a in sys.argv[1:] if not a.startswith('--')] or sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', '**', 'ap_*.cpp'), recursive=True))
    gs = ghidra_sizes()
    bad = 0
    for f in files:
        s = open(f).read()
        decl = {m.group(1): m.group(2).strip() for m in re.finditer(r'#define (_?DAT_[0-9a-f]{8}) GLOBAL_AT\(([^,]+),', s)}
        hits = []
        for m in ARITH.finditer(s):
            tok, a = m.group(1), m.group(2)
            t = decl.get(tok)
            want = gs.get(a)
            have = 8 if t and t.endswith('*') and False else TSIZE.get(t.rstrip(' *'), None) if t and not t.endswith('*') else 4
            if want is None:
                print('%s: %s no Ghidra type listed (rerun DumpDataTypes)' % (os.path.basename(f), tok)); continue
            if have != want:
                line = s[:m.start()].count('\n') + 1
                print('%s:%d: %s declared %s (%s bytes), Ghidra element %d bytes' % (os.path.relpath(f, ROOT), line, tok, t, have, want))
                hits.append((m, want))
        bad += len(hits)
        if fix and hits:
            for m, want in reversed(hits):
                if want == 1:
                    s = s[:m.start()] + '((uint8_t *)&%s)' % m.group(1) + s[m.end():]
            open(f, 'w').write(s)
    print('%d mismatches' % bad)
    sys.exit(1 if bad else 0)


if __name__ == '__main__':
    main()
