"""Which unported functions does each test level run?  The map behind
gated_batch.py --targeted.

    python -I tools/level_coverage.py [--parallel N] [--secs 120]

Every level of SCRATCH/baseline.json is played exactly as the gated loop plays
it (behaviour_bisect.run: the same arguments, fixed clock, recorded replays,
every port on), with BEA_COVERAGE listing the game functions not ported yet:
the DLL counts each through a thunk and logs "ucalled+: addr" the first time
it runs (hooks.cpp install_coverage).  Writes SCRATCH/level_coverage.json:
{"universe": [the listed addresses], "levels": {level: [addresses it ran]}}.
Since 2026-11-03 the ports' own "called+" lines count too, and the universe holds
them, so the map covers every game function (full_gate.py --quick reads it, with
menu_test.py coverage's tour_coverage.json).

A port can only change a level that enters it, so the loop may skip the
others.  The map stays valid while ports are added (the remaining functions
are a subset of the universe); a port outside the universe makes the loop
play every level.  Rerun it when a test level or replay is added or changed.
"""
import argparse, json, os, re, sys, threading

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
SCRATCH = os.environ.get('BEA_SCRATCH', os.path.join(ROOT, 'build'))

import behaviour_bisect as bb          # noqa: E402
import coverage_unported as cu         # noqa: E402
import direct_batch as d               # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--parallel', type=int, default=2)
    ap.add_argument('--secs', type=int, default=1200)      # (wall clock: 120 cut long levels short)
    ap.add_argument('--only', help='these levels (comma-separated) again; their entries replace those in the map')
    a = ap.parse_args()
    baseline = json.load(open(os.path.join(SCRATCH, 'baseline.json')))
    hooked = d.hooked_addrs()
    universe = sorted(x for x in cu.functions() if x not in hooked)
    lst = os.path.join(SCRATCH, 'level_coverage_universe.txt')
    open(lst, 'w').write(''.join('%08x\n' % x for x in universe))
    os.environ['BEA_COVERAGE'] = lst.replace('/', '\\')
    print('%d unported game functions listed; %d levels' % (len(universe), len(baseline)), flush=True)
    hooks = bb.all_hooks()
    wanted = sorted(a.only.split(',')) if a.only else sorted(baseline)
    todo, lock, per = list(wanted), threading.Lock(), {}

    def worker(inst):
        while True:
            with lock:
                if not todo:
                    return
                lv = todo.pop(0)
            bb.run(lv, hooks, hooks, inst, a.secs, 'cov_%s' % lv)
            s = set()
            p = os.path.join(SCRATCH, 'bbis_cov_%s.log' % lv)
            for line in open(p, errors='replace') if os.path.exists(p) else []:
                m = re.search(r'u?called\+:(.*)', line)    # (ports log "called+", the thunks "ucalled+")
                if m:
                    s.update(re.findall(r'\b([0-9a-f]{8})\b', m.group(1)))
            with lock:
                per[lv] = sorted(s)
                print('  level %-5s %4d unported functions ran' % (lv, len(s)), flush=True)
    ths = [threading.Thread(target=worker, args=(i,)) for i in range(1, a.parallel + 1)]
    for th in ths: th.start()
    for th in ths: th.join()
    if any(not per.get(lv) for lv in wanted):
        print('warning: no coverage lines for %s' % ' '.join(lv for lv in wanted if not per.get(lv)), flush=True)
    path = os.path.join(SCRATCH, 'level_coverage.json')
    out = {'universe': ['%08x' % x for x in sorted(set(universe) | set(hooks) | hooked)], 'levels': per}
    if a.only:
        out = json.load(open(path))
        out['levels'].update(per)
    json.dump(out, open(path, 'w'), indent=1)
    union = set().union(*map(set, per.values())) if per else set()
    print('%d of %d unported functions run in some level' % (len(union), len(universe)))


if __name__ == '__main__':
    main()
