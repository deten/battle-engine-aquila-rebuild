"""Give a port's float32 literals their `f` suffix after the fact.

Ghidra prints a 4-byte float constant as a short decimal ("-0.7853982"); as a
C double literal it is not the original's value: -0.7853982 is below the
float -pi/4 (0xbf490fdb), so `-0.7853982 < fVar3` was true where the original
found the angle equal, and level 400 ended differently with 0x5099a0 alone
(2026-10-20, differential hook).  autoport adds the suffix when the literal's
float value is one the x87 code loads; ports generated before the sign was
matched loosely (the `-` is a separate token) lack it.  This applies the same
rule to existing ports.

    python -I tools/fix_floatlit.py [--check] [FILE.cpp...]   (default: src/bea/direct and src/bea/verified)
"""
import glob, os, re, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))   # append: tools/bisect.py would shadow the stdlib module
import autoport  # noqa: E402

LIT = re.compile(r'(?<![\w.])\d+\.\d+(?:[eE][-+]?\d+)?(?![\w.])')


def fix(path, check):
    addr = int(os.path.basename(path)[3:11], 16)
    size = autoport.FUNC_SIZES.get(addr) if hasattr(autoport, 'FUNC_SIZES') else None
    if size is None:
        import csv
        for r in csv.reader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='')):
            try:
                if int(r[0], 16) == addr:
                    size = int(r[3])
                    break
            except (ValueError, IndexError):
                pass
    if not size:
        return 0
    consts = autoport.analyse_asm(addr, size)[6]
    float_abs = {abs(c) for c in consts}
    if not float_abs:
        return 0
    src = open(path, encoding='utf-8', errors='replace').read()
    head, sep, body = src.partition('\n{\n')          # only the function body
    if not sep:
        return 0
    n = [0]
    def sub(m):
        lit = m.group(0)
        try:
            f = struct.unpack('<f', struct.pack('<f', float(lit)))[0]
        except (ValueError, OverflowError):
            return lit
        if abs(f) in float_abs:
            n[0] += 1
            return lit + 'f'
        return lit
    body2 = LIT.sub(sub, body)
    if n[0] and not check:
        open(path, 'w', encoding='utf-8').write(head + sep + body2)
    return n[0]


def main():
    argv = sys.argv[1:]
    check = '--check' in argv
    files = [a for a in argv if not a.startswith('--')]
    if not files:
        files = sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_*.cpp'))
                       + glob.glob(os.path.join(ROOT, 'src', 'bea', 'verified', 'ap_*.cpp')))
    total, nfiles = 0, 0
    for p in files:
        k = fix(p, check)
        if k:
            nfiles += 1
            total += k
            print('%s: %d literal(s)' % (os.path.relpath(p, ROOT), k))
    print('%d literal(s) in %d file(s)%s' % (total, nfiles, ' would change' if check else ' suffixed'))
    sys.exit(1 if check and total else 0)


if __name__ == '__main__':
    main()
