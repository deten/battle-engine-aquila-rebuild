"""Existing direct ports whose calls push fewer arguments than the original's
(autoport.check_call_arity on the port's body; NOTES A1-15, 0x411aa0).

    python -I tools/check_arity.py [FILE.cpp...]     (default: src/bea/direct)
"""
import glob, os, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))   # append: tools/bisect.py shadows the stdlib module
import autoport


def main():
    files = sys.argv[1:] or sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_*.cpp')))
    import csv
    sizes = {}
    for r in csv.reader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='')):
        try:
            sizes[int(r[0], 16)] = int(r[3])
        except (ValueError, IndexError):
            pass
    n = 0
    for p in files:
        addr = int(os.path.basename(p)[3:11], 16)
        src = open(p, encoding='utf-8', errors='replace').read()
        head, sep, body = src.partition('\n{\n')
        if not sep or addr not in sizes:
            continue
        note = autoport.check_call_arity(addr, sizes[addr], body)
        if note:
            n += 1
            print('%08x: %s' % (addr, note))
    print('%d port(s) with a call arity below the asm' % n)
    sys.exit(1 if n else 0)


if __name__ == '__main__':
    main()
