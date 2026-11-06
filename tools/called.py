"""How many installed replacements did the soaks actually run?

The hook DLL logs "hook  <addr> <name>" for every installed replacement and,
in test runs, "called+: <addr> ..." for replacements entered since the last
heartbeat (hooks.cpp counting thunks).  This merges the soak logs
(default build/soak_*.log) and prints the totals per kind: the src/bea
directory holding ap_<addr>.cpp (direct, autoport, ...), else hand-written.
    python -I tools/called.py [logs...] [--never FILE]
--never writes the addresses no log saw called, one per line, with names.
"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


_DIRS = {}
for _p in glob.glob(os.path.join(ROOT, 'src', 'bea', '*', 'ap_*.cpp')):
    _DIRS[int(os.path.basename(_p)[3:11], 16)] = os.path.basename(os.path.dirname(_p))


def kind(addr):
    # src/bea/direct, src/bea/autoport, ...; everything else is hand-written
    return _DIRS.get(addr, 'hand-written')


def main():
    args = sys.argv[1:]
    never_out = None
    if '--never' in args:
        i = args.index('--never')
        never_out = args[i + 1]
        del args[i:i + 2]
    logs = args or sorted(glob.glob(os.path.join(ROOT, 'build', 'soak_*.log')))
    installed, called = {}, set()
    for p in logs:
        for line in open(p, errors='replace'):
            m = re.search(r'\] hook  ([0-9a-f]{8}) (\S+)', line)
            if m:
                installed[int(m.group(1), 16)] = m.group(2)
                continue
            m = re.search(r'\] called\+:(.*)', line)
            if m:
                called.update(int(x, 16) for x in m.group(1).split())
    if not installed:
        print('no "hook" lines in %d log(s)' % len(logs))
        return 1
    totals = {}
    for a, n in installed.items():
        t = totals.setdefault(kind(a), [0, 0])
        t[1] += 1
        t[0] += a in called
    hit = sum(t[0] for t in totals.values())
    print('called during the soaks: %d / %d installed replacements (%.1f%%), %d log(s)'
          % (hit, len(installed), 100.0 * hit / len(installed), len(logs)))
    for k in sorted(totals):
        h, n = totals[k]
        print('  %-12s %5d / %5d (%.1f%%)' % (k, h, n, 100.0 * h / n))
    if never_out:
        with open(never_out, 'w') as f:
            for a in sorted(installed):
                if a not in called:
                    f.write('%08x %s\n' % (a, installed[a]))
    return 0


if __name__ == '__main__':
    sys.exit(main())
