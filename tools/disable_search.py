"""Find the smallest set of hooks whose disabling makes a level pass.

The dual of bisect.py.  bisect.py enables part of the candidates with the
rest disabled, which misses a port that only breaks next to other ports
(2026-10-19: level 700 crashed with every direct port on, bisect.py found 8
other culprits and then "no deterministic culprit", yet disabling 0x4ba4d0
alone fixed it).  Here every candidate stays enabled except the set being
probed:

    rec(s, bg): bg + s disabled passes; return a minimal part of s that,
    with bg disabled, still passes.  Probe bg+A and bg+B (in parallel): if
    one passes recurse into it, otherwise both halves hold a culprit:
    rec(A, bg+B), then rec(B, bg+that part of A).

A pass can be luck, so each found set is re-checked with --confirm runs.
    python -I tools/disable_search.py --candidates FILE --level 221 --seconds 25
Prints the culprits and writes them to bea_hook_disable.txt.
"""
import argparse
import os
import sys
from concurrent.futures import ThreadPoolExecutor

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import bisect as bs  # tools/bisect.py: run(), run_many(), disable_path()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--candidates', required=True)
    ap.add_argument('--level', required=True, help="level number or 'frontend'")
    ap.add_argument('--seconds', type=int, default=30)
    ap.add_argument('--confirm', type=int, default=2, help='re-runs of the final set')
    ap.add_argument('--parallel', type=int, default=int(os.environ.get('BEA_PARALLEL', '2')))
    a = ap.parse_args()
    args = '-forcewindowed -skipfmv' + ('' if a.level == 'frontend' else ' -level ' + a.level)
    cands = sorted(set(int(l.split()[0], 16) for l in open(a.candidates) if l.strip()))
    cands = [c for c in cands if c not in bs.KEEP]
    probes = [0]

    def passes(sets):
        # every probe runs to the end (bs.run_many cancels the others on the
        # first failure, but here a pass is the useful answer)
        probes[0] += len(sets)
        out = []
        for i in range(0, len(sets), a.parallel):
            chunk = sets[i:i + a.parallel]
            with ThreadPoolExecutor(max_workers=a.parallel) as ex:
                futs = [ex.submit(bs.run, sorted(s), args, a.seconds, str(k + 1)) for k, s in enumerate(chunk)]
                out += [f.result() is True for f in futs]
        return out

    if passes([[]])[0]:
        print('level %s passes with every candidate enabled' % a.level)
        return 0
    if not passes([cands])[0]:
        print('BASELINE FAILS with all %d candidates disabled: culprit is outside the candidate set' % len(cands))
        return 2

    def rec(s, bg):
        if len(s) <= 1:
            return list(s)
        h = len(s) // 2
        x, y = s[:h], s[h:]
        px, py = passes([bg + x, bg + y])
        if px:
            return rec(x, bg)
        if py:
            return rec(y, bg)
        mx = rec(x, bg + y)
        return mx + rec(y, bg + mx)

    found = rec(cands, [])
    print('minimal disable set after %d probes: %s' % (probes[0], ' '.join('%08x' % c for c in found)), flush=True)
    ok = passes([found] * a.confirm)
    print('confirm: %d / %d runs pass' % (sum(ok), len(ok)))
    for inst in range(1, a.parallel + 1):
        try:
            os.remove(bs.disable_path(str(inst)))
        except OSError:
            pass
    with open(bs.disable_path(''), 'w') as f:
        f.write(''.join('%08x\n' % c for c in found))
    print('bad hooks: ' + ' '.join('%08x' % c for c in found))
    return 0 if all(ok) else 1


if __name__ == '__main__':
    sys.exit(main())
