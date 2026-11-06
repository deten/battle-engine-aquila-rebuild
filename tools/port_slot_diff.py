"""Compare the stack slots two generations of the same ports name.

    python -I tools/port_slot_diff.py OLD_DIR NEW_DIR

For every ap_<addr>.cpp present in both directories, the set of stack slots
the port names (`local_NN`, `xStack_NN`: NN bytes below the entry ESP) is
compared.  A port whose slot set changed between two decompiles had Ghidra's
stack depth drift (NOTES A1-15 class 18): the old decompile named one memory
slot two ways, or two slots one way, and the old port is suspect even though
it stays self-consistent inside its emulated frame.  Prints one line per
differing port (slots only in OLD, slots only in NEW, whether the old source
carried `&stack0x`), then a count.
"""
import glob, os, re, sys

NAME = re.compile(r'\b(?:local|[a-zA-Z]*Stack)_([0-9a-f]+)\b')


def slots(path):
    src = open(path, encoding='utf-8', errors='replace').read()
    src = re.sub(r'//[^\n]*', '', src)
    return {int(m, 16) for m in NAME.findall(src)}, 'stack0x' in src


def main():
    old, new = sys.argv[1], sys.argv[2]
    n = 0
    for p in sorted(glob.glob(os.path.join(old, 'ap_*.cpp'))):
        q = os.path.join(new, os.path.basename(p))
        if not os.path.exists(q):
            continue
        a, sa = slots(p)
        b, sb = slots(q)
        if a == b:
            continue
        n += 1
        print('%s: old-only %s | new-only %s%s' % (os.path.basename(p)[3:11],
              ' '.join('%x' % x for x in sorted(a - b)) or '-', ' '.join('%x' % x for x in sorted(b - a)) or '-',
              ' | old had &stack0x' if sa else ''))
    print('%d port(s) with a changed slot set' % n)


if __name__ == '__main__':
    main()
