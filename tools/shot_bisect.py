"""Find the ports that change what the game draws.

The outcome gate (gated_batch / behaviour_bisect) sees level outcomes and
their game clock, not pixels: on 2026-10-22 the port's level 100 drew a
striped structure in place of the sky dome, a blown-out sun and an empty
radar while every outcome still matched.  Under the fixed clock the frame
presented at a given game clock is the same in every run (test_harness.cpp
BEA_SHOTCLOCK writes it as a BMP), so the original's frame is the oracle:
a prefix search over the installed hooks (behaviour_bisect.search) finds the
first hook whose enabling changes the frame by more than --tol of its
pixels; it is disabled and the search repeats until the frame matches.

    python -I tools/shot_bisect.py --level 100 --clock 60 [--tol 0.01] [--max 6] [--secs 60]

Needs tools/all_hooks_now.txt-style knowledge of every hook: taken from
behaviour_bisect.all_hooks() (the newest full-run log).
"""
import argparse, os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb        # noqa: E402
import shot_diff                     # noqa: E402

GAME = bb.GAME
SCRATCH = bb.SCRATCH
SHOTS = os.path.join(SCRATCH, 'shots')


def diff_fraction(a, b):
    try:
        wa, ha, rowa, pa = shot_diff.read_bmp(a)
        wb, hb, rowb, pb = shot_diff.read_bmp(b)
    except (OSError, AssertionError):
        return 1.0
    if (wa, ha) != (wb, hb):
        return 1.0
    n = 0
    for y in range(ha):
        base = y * rowa
        for x in range(wa):
            i = base + 3 * x
            if pa[i] != pb[i] or pa[i + 1] != pb[i + 1] or pa[i + 2] != pb[i + 2]:
                n += 1
    return n / float(wa * ha)


class Oracle:
    def __init__(self, level, clock, secs, tol):
        self.level, self.clock, self.secs, self.tol = level, clock, secs, tol
        self.ref = None
        os.makedirs(SHOTS, exist_ok=True)

    def shot(self, enabled, hooks, inst, tag):
        """run with only `enabled` on; returns the BMP path, or 'CRASH'/None"""
        on = set(enabled)
        with open(os.path.join(GAME, 'bea_hook_disable%d.txt' % inst), 'w') as f:
            f.writelines('%08x\n' % h for h in hooks if h not in on)
        bmp = os.path.join(SHOTS, '%s.bmp' % tag)
        log = os.path.join(SHOTS, '%s.log' % tag)
        if os.path.exists(bmp):
            os.remove(bmp)
        env = dict(os.environ, BEA_ENDEXIT='1', BEA_SHOTCLOCK=str(self.clock), BEA_SHOTFILE=bmp.replace('/', '\\'))
        subprocess.run(['powershell', '-ExecutionPolicy', 'Bypass', '-File', os.path.join(ROOT, 'tools', 'smoke_test.ps1'),
                        '-Seconds', str(self.secs), '-Instance', str(inst), '-TimeScale', '1', '-FixedStep', '0.016667',
                        '-EndClock', str(self.clock + 3), '-SaveLog', log,
                        '-GameArgs', '-forcewindowed -skipfmv -level %s' % self.level],
                       cwd=ROOT, env=env, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        text = open(log, errors='replace').read() if os.path.exists(log) else ''
        if 'CRASH code' in text or re.search(r'EXIT code=[1-9]', text):
            return 'CRASH'
        return bmp if os.path.exists(bmp) else None

    def run(self, level, enabled, hooks, inst, secs, tag):
        """behaviour_bisect.run's contract: 'same' when the frame matches the original's"""
        r = self.shot(enabled, hooks, inst, tag)
        if r in ('CRASH', None):
            return r
        frac = diff_fraction(self.ref, r)
        print('    %s: %.2f%% of pixels differ' % (tag, 100 * frac), flush=True)
        return 'same' if frac <= self.tol else 'differs %.1f%%' % (100 * frac)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--level', required=True)
    ap.add_argument('--clock', type=float, default=60)
    ap.add_argument('--tol', type=float, default=0.01, help='fraction of differing pixels still "the same"')
    ap.add_argument('--max', type=int, default=6)
    ap.add_argument('--secs', type=int, default=60)
    a = ap.parse_args()
    hooks = bb.all_hooks()
    print('%d hooks' % len(hooks), flush=True)
    o = Oracle(a.level, a.clock, a.secs, a.tol)
    o.ref = o.shot([], hooks, 1, 'ref_orig')
    if o.ref in ('CRASH', None):
        sys.exit('no reference frame from the original (%s)' % o.ref)
    bb.run = o.run                     # search() calls bb.run
    disabled = []
    for k in range(a.max):
        order = [h for h in hooks if h not in disabled]
        r = o.run(a.level, order, hooks, 2, a.secs, 'all_on_%d' % k)
        print('all on (minus %d): %s' % (len(disabled), r), flush=True)
        if r == 'same':
            break
        i = bb.search(a.level, 'same', hooks, order, [], a.secs, 'sb%d' % k)
        culprit = order[i]
        alone = o.run(a.level, [culprit], hooks, 1, a.secs, 'alone_%08x' % culprit)
        print('culprit %08x (alone: %s)' % (culprit, alone), flush=True)
        disabled.append(culprit)
    print('RESULT: frame-changing ports: ' + ' '.join('%08x' % c for c in disabled))


if __name__ == '__main__':
    main()
