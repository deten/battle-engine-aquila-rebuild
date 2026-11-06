"""Ports that pass a float's bit pattern as an integer to a float parameter.

Ghidra prints a float constant pushed by the caller as its bits
(`FUN_00523cc0(0x43980000, ...)` for 304.0f).  Where the callee typedef
declares that parameter float, C++ converts the integer's value: 0x43980000
becomes 1134559232.0f.  The callee typedefs of 0x523cc0 (hit test) and the
old 14-argument 0x555be0 (sprite draw; 15 since conv_overrides 2026-10-23)
are such float prototypes (found by the menu tours, 2026-10-28).

For each call of a typedef'd callee, a hex literal of 0x10000 or more given
for a float / float10 / double parameter (or a `...` slot of a float-typed
prototype, which takes it as an int and is fine) is reported.

    python -I tools/check_float_literals.py [--fix] [FILES]

--fix wraps such an argument as `bea_fbits(0x...)` (ghidra_compat.h: the
float with those bits).
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TYPEDEF = re.compile(r'typedef\s+[^;]*?\(\s*\w*\s*\*\s*(FUN_[0-9a-f]{8})_t\)\s*\(([^;]*)\);')
HEX = re.compile(r'^\s*0x([0-9a-fA-F]+)\s*$')


def split_args(s, i):
    """args of the call whose '(' is at s[i]; returns (list of (start, end), index after ')')"""
    depth, start, out = 0, i + 1, []
    j = i
    while j < len(s):
        c = s[j]
        if c in '([{':
            depth += 1
        elif c in ')]}':
            depth -= 1
            if depth == 0:
                out.append((start, j))
                return out, j + 1
        elif c == ',' and depth == 1:
            out.append((start, j))
            start = j + 1
        j += 1
    return out, j


def check(path, fix):
    s = open(path).read()
    params = {}
    for m in TYPEDEF.finditer(s):
        params[m.group(1)] = [p.strip() for p in m.group(2).split(',')]
    hits = []
    for name, ps in params.items():
        for m in re.finditer(r'\b' + name + r'\s*\(', s):
            if s[m.start() - 1:m.start()] in ('_',) or s[m.end():m.end() + 3] == 'bea':
                pass
            args, _ = split_args(s, m.end() - 1)
            for k, (a, b) in enumerate(args):
                if k >= len(ps) or ps[k] not in ('float', 'float10', 'double'):
                    continue
                h = HEX.match(s[a:b])
                if h and int(h.group(1), 16) >= 0x10000:
                    hits.append((a, b, name, k))
    for a, b, name, k in hits:
        line = s[:a].count('\n') + 1
        print('%s:%d: %s arg %d %s is a float parameter' % (os.path.relpath(path, ROOT), line, name, k + 1, s[a:b].strip()))
    if fix and hits:
        for a, b, name, k in sorted(hits, reverse=True):
            s = s[:a] + 'bea_fbits(%s)' % s[a:b].strip() + s[b:]
        open(path, 'w').write(s)
    return len(hits)


def main():
    fix = '--fix' in sys.argv
    files = [a for a in sys.argv[1:] if not a.startswith('--')] or sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', '**', 'ap_*.cpp'), recursive=True))
    n = sum(check(f, fix) for f in files)
    print('%d float parameters given an integer bit pattern' % n)
    sys.exit(1 if n else 0)


if __name__ == '__main__':
    main()
