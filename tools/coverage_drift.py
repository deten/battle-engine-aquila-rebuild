"""Did the coverage runs play as recorded?  A run that left its recorded path (a stray
click in its window, a crash) maps the wrong functions, and full_gate.py --quick would
then skip a test that does run a function.  Compares each level's outcome in
level_coverage.py's logs (SCRATCH/bbis_cov_<level>.log) with baseline.json, and each
tour's shots in menu_test.py coverage's runs (menu/<tour>_cov) with the tour baseline.

    python -I tools/coverage_drift.py [--rerun]

--rerun plays the drifted ones again (levels one at a time in BEA_GAMEDIR, tours in
the main folder) and replaces their entries in the maps (2026-11-03).
"""
import argparse, json, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
os.environ.setdefault('BEA_SCRATCH', os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'testdata'))

import behaviour_bisect as bb  # noqa: E402
import gated_batch as gb       # noqa: E402
import menu_test as mt         # noqa: E402


def level_outcome(lv):
    p = os.path.join(bb.SCRATCH, 'bbis_cov_%s.log' % lv)
    text = open(p, errors='replace').read() if os.path.exists(p) else ''
    m = re.search(r'outcome: \w+ .*"(.*)"\)', text)
    if not m:
        return 'CRASH' if 'CRASH code' in text or re.search(r'EXIT code=[1-9]', text) else None
    c = re.search(r'outcome: \w+ .*clock ([0-9.]+)', text)
    return '%s@%.1f' % (m.group(1), float(c.group(1))) if c else m.group(1)


def tour_drift(n, want):
    d = os.path.join(mt.OUT, '%s_cov' % n)
    log = os.path.join(d, 'hook.log')
    text = open(log, errors='replace').read() if os.path.exists(log) else ''
    shots = sorted(int(f) for f in want)
    got = {int(m.group(1)): m.group(2) for m in re.finditer(r'shot: clock \S+ frame (\d+) \S+ fmt \d+ hash (\w+)', text)}
    r = {'shots': dict(zip(shots, [got[k] for k in sorted(got)])), 'dir': d}
    return [f for f in want if not mt.shot_matches(n, r, f, want[f])]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--rerun', action='store_true')
    a = ap.parse_args()
    bb.WITH_CLOCK, bb.TOL = True, 2.5
    gb.DEFAULT_TOL[0] = 2.5
    try:
        gb.LEVEL_TOL.update(json.load(open(os.path.join(bb.SCRATCH, 'tolerances.json'))))
    except (OSError, ValueError):
        pass
    base = json.load(open(os.path.join(bb.SCRATCH, 'baseline.json')))
    bad_lv = [lv for lv in sorted(base) if not gb.same_outcome(level_outcome(lv), base[lv], lv)]
    for lv in bad_lv:
        print('level %s: %s, recorded %s' % (lv, level_outcome(lv), base[lv]))
    tbase = mt.load_baseline()
    tours = sorted(n for n in tbase if os.path.exists(os.path.join(ROOT, 'tools', 'menu_scripts', n + '.txt'))
                   and not n.startswith('x_'))
    bad_t = [n for n in tours if tour_drift(n, tbase[n])]
    for n in bad_t:
        print('tour %s: shots differ at %s' % (n, ','.join(tour_drift(n, tbase[n]))))
    print('drifted: %d of %d levels, %d of %d tours' % (len(bad_lv), len(base), len(bad_t), len(tours)))
    if not a.rerun or not (bad_lv or bad_t):
        return
    import subprocess
    if bad_lv:
        # level_coverage.py on those levels alone: its map keeps the other entries
        subprocess.run([sys.executable, '-I', os.path.join(ROOT, 'tools', 'level_coverage.py'), '--parallel', '1',
                        '--only', ','.join(bad_lv)], cwd=ROOT)
    if bad_t:
        tc = os.path.join(bb.SCRATCH, 'tour_coverage.json')
        old = json.load(open(tc))
        env = dict(os.environ, BEA_GAMEDIR=os.path.join(ROOT, 'Battle Engine Aquila'))
        subprocess.run([sys.executable, '-I', os.path.join(ROOT, 'tools', 'menu_test.py'), 'coverage'] + bad_t,
                       cwd=ROOT, env=env)
        new = json.load(open(tc))
        old['tours'].update(new['tours'])
        json.dump(old, open(tc, 'w'), indent=1)
    print('rerun; check again with: python -I tools/coverage_drift.py')


if __name__ == '__main__':
    main()
