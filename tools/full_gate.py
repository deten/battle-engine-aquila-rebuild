"""The full gate in one go: every level test (SCRATCH/baseline.json, outcome@clock) in a
second game folder and every menu tour (tools/menu_scripts with a baseline) in the main game
folder at the same time, four game instances in all (2026-11-03: levels then tours one after
the other took 1 h 45 min; side by side about 1 h 15 min).

    python -I tools/full_gate.py [--level-instances 3] [--level-dir game2]

Both folders get build/zlib.dll first.  The tours stay in the main folder: their oracle shots
were taken there, and the original's cursor in fe_pause, fe_multiplayer, sess_campaign and
sess_win lands elsewhere when the game runs from a second folder (same files, other
path; 2026-11-03).  Prints the levels that differ and the tours that differ; exit code 1 if
any did.

    python -I tools/full_gate.py --quick [0x421db0,0x4934f0 | auto]

The quick gate (2026-11-03) plays only the tests that run the functions given (default
"auto": the port files new or changed since HEAD), from the coverage maps
(level_coverage.py, menu_test.py coverage), plus the canaries below. A port can only
change a test that enters it. It refuses when other source changed (the harness, the
hook loader, lift_rt, the build): those reach every test, so they need the full gate,
as does a batch before it counts as done.
"""
import argparse, json, os, re, shutil, subprocess, sys, threading

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAIN = os.path.join(ROOT, 'Battle Engine Aquila')
sys.path.insert(0, os.path.join(ROOT, 'tools'))
os.environ.setdefault('BEA_SCRATCH', os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'testdata'))
LEVEL_DIR = next((sys.argv[i + 1] for i, x in enumerate(sys.argv[:-1]) if x == '--level-dir'), os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'game2'))
os.environ['BEA_GAMEDIR'] = LEVEL_DIR          # behaviour_bisect.GAME, read at import
import gated_batch as gb, behaviour_bisect as bb  # noqa: E402


def tour_names():
    import menu_test as mt
    base = mt.load_baseline()
    scripts = {f[:-4] for f in os.listdir(os.path.join(ROOT, 'tools', 'menu_scripts'))}
    return sorted(n for n in base if n in scripts and not n.startswith('x_'))


# always in a quick gate: tests that caught problems before (stale stack bytes 524w and
# 110r, float order 742w, 311r's guide, the credits, a race) and the front end
CANARY_LEVELS = ['110r', '211w', '311r', '521g', '524w', '742w', '800c', '901s']
# (fe_goodies_art is out: its art pages fade and change on real time, and two runs of
# the original differ by up to 98000 pixels at one frame; fe_goodies covers those menus)
CANARY_TOURS = ['fe_main', 'fe_goodies', 'fe_multiplayer', 'mp_laser']
PORT_DIRS = ('src/bea/lifted/', 'src/bea/direct/', 'src/bea/verified/')


def changed_files():
    r = subprocess.run(['git', 'status', '--porcelain', '--untracked-files=all'], cwd=ROOT,
                       capture_output=True, text=True)
    return [l[3:].strip().strip('"') for l in r.stdout.splitlines() if l.strip()]


def quick_selection(arg, levels, tours):
    """(levels, tours, reasons) the quick gate plays for the functions in arg"""
    files = changed_files()
    shared = [f for f in files if (f.startswith('src/') or f.startswith('CMakeLists') or f.startswith('cmake'))
              and not f.startswith(PORT_DIRS)]
    if arg == 'auto':
        addrs = sorted({int(m.group(1), 16) for f in files if f.startswith(PORT_DIRS)
                        for m in [re.search(r'_([0-9a-fA-F]{8})\.(?:cpp|inc)$', f)] if m})
    else:
        addrs = sorted(int(x, 16) for x in arg.replace(' ', '').split(',') if x)
    why = ['functions: %s' % (' '.join('%08x' % x for x in addrs) or 'none')]
    if shared:
        why.append('SHARED CODE CHANGED (%s): needs the full gate' % ', '.join(shared[:6]))
    pick = []
    for kind, names, canary, path in (('levels', levels, CANARY_LEVELS, 'level_coverage.json'),
                                      ('tours', tours, CANARY_TOURS, 'tour_coverage.json')):
        try:
            m = json.load(open(os.path.join(bb.SCRATCH, path)))
        except (OSError, ValueError):
            m = {'universe': [], kind: {}}
            why.append('no %s: every one of the %s' % (path, kind))
        universe, per = {int(x, 16) for x in m['universe']}, {k: {int(x, 16) for x in v} for k, v in m[kind].items()}
        sel = {n for n in names if n in canary}
        new = [n for n in names if n not in per]
        if new:
            sel |= set(new)
            why.append('%s not in %s yet: %s' % (kind, path, ' '.join(new)))
        for x in addrs:
            if x not in universe:
                sel |= set(names)
                why.append('%08x not counted in %s: every one of the %s' % (x, path, kind))
            else:
                ran = [n for n in names if x in per.get(n, ())]
                sel |= set(ran)
                why.append('%08x runs in %d %s%s' % (x, len(ran), kind, (': ' + ' '.join(ran[:12])) if ran else ''))
        pick.append([n for n in names if n in sel])
    return pick[0], pick[1], why, bool(shared)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--level-instances', type=int, default=3)
    ap.add_argument('--level-dir', default=os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'game2'))
    ap.add_argument('--secs', type=int, default=1200)
    ap.add_argument('--quick', nargs='?', const='auto', help='only the tests that run these functions (and the canaries)')
    ap.add_argument('--force-quick', action='store_true', help='a quick gate although other source changed')
    ap.add_argument('--dry-run', action='store_true', help='print the tests it would play, and stop')
    a = ap.parse_args()
    base = json.load(open(os.path.join(bb.SCRATCH, 'baseline.json')))
    levels, tour_list = list(base), tour_names()
    if a.quick:
        levels, tour_list, why, shared = quick_selection(a.quick, levels, tour_list)
        for w in why:
            print('quick: ' + w, flush=True)
        if shared and not a.force_quick:
            print('quick gate refused: run the full gate (or --force-quick)', flush=True)
            sys.exit(2)
        print('quick: %d of %d levels, %d of %d tours' % (len(levels), len(base), len(tour_list), len(tour_names())),
              flush=True)
    if a.dry_run:
        print('levels: %s\ntours: %s' % (' '.join(levels), ' '.join(tour_list)))
        return
    for d in (MAIN, a.level_dir):
        shutil.copy(os.path.join(ROOT, 'build', 'zlib.dll'), os.path.join(d, 'zlib.dll'))

    out = {}

    def tours():
        env = dict(os.environ, BEA_GAMEDIR=MAIN)
        if not tour_list:
            return
        r = subprocess.run([sys.executable, '-I', os.path.join(ROOT, 'tools', 'menu_test.py'), 'check'] + tour_list,
                           cwd=ROOT, env=env, capture_output=True, text=True)
        out['tours'] = [l for l in r.stdout.splitlines()
                        if ':' in l and 'shots match' not in l and not l.startswith(('coverage', 'RESULT'))]
        print(r.stdout.splitlines()[-1] if r.stdout else r.stderr[-500:], flush=True)

    t = threading.Thread(target=tours)
    t.start()

    gb.PARALLEL[0] = a.level_instances
    bb.WITH_CLOCK, bb.TOL = True, 2.5
    gb.DEFAULT_TOL[0] = 2.5
    try:
        gb.LEVEL_TOL.update(json.load(open(os.path.join(bb.SCRATCH, 'tolerances.json'))))
    except (OSError, ValueError):
        pass
    for lv in base:
        m = re.search(r'@([0-9.]+)$', str(base[lv]))
        gb.RUN_LEN[lv] = float(m.group(1)) if m else 320.0
    res = gb.play_levels(levels, bb.all_hooks(), a.secs)
    bad = [lv for lv in levels if not gb.same_outcome(res.get(lv), base[lv], lv)]
    print('levels: %d of %d match; differ: %s' % (len(levels) - len(bad), len(levels),
          {lv: (res.get(lv), base[lv]) for lv in bad} or 'none'), flush=True)
    t.join()
    print('tours: %s' % ('; '.join(out.get('tours', [])) or 'all match'), flush=True)
    sys.exit(1 if bad or out.get('tours') else 0)


if __name__ == '__main__':
    main()
