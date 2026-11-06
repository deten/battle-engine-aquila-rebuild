"""Port functions in batches behind the full gate: static checks, then the
fixed-clock outcome of every level compared with a baseline, with a bisect of
the batch when a level changes.

    python -I tools/gated_batch.py --pool DIR [--count 40] [--secs 120] [--max-batches N]

DIR holds autoport --direct output for functions not yet replaced (see NOTES
A1-14: `autoport.py --direct --list all.txt --out DIR`, game addresses below
0x55a420, minus tools/direct_blocklist.txt).  Each round:
  1. the next --count smallest candidates are copied into src/bea/direct;
  2. direct_batch.build_check_install() builds and runs check_ret, varargs,
     st0, ecx, eh_try, fild, fingerprint and check_uninit; offenders are
     quarantined and the build repeated;
  3. every level in SCRATCH/baseline.json is played idle under the fixed clock
     (two instances at a time) and its `text@clock` compared with the baseline
     (behaviour_bisect.same: same text, clock within --tol);
  4. a level that differs is bisected over the batch (behaviour_bisect.search
     with the rest of the hooks forced on); the culprit is quarantined with the
     level's name, the DLL rebuilt, the level replayed; up to 3 culprits;
  5. the batch is committed.
Logs to SCRATCH/gated_batch_<time>.log.  Stops when the pool is empty, a
build fails twice in a row, or --max-batches rounds are done.
"""
import argparse, csv, glob, json, os, re, shutil, subprocess, sys, threading, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))      # append: tools/bisect.py shadows the stdlib module
import direct_batch as d                           # noqa: E402
import behaviour_bisect as bb                      # noqa: E402

SCRATCH = os.environ.get('BEA_SCRATCH', os.path.join(ROOT, 'testdata'))
LOG = None


def log(msg):
    line = time.strftime('%H:%M:%S ') + msg
    print(line, flush=True)
    if LOG:
        LOG.write(line + '\n'); LOG.flush()


def level_num(l):
    """sort key of a level name: '100', '300r' (a replay), 'menu1', 'frame'"""
    m = re.match(r'\d+', l)
    return int(m.group()) if m else (0 if l == 'frame' else 9999)


# Per-level clock tolerances (SCRATCH/tolerances.json, {"411": 5.0}): level 411's
# outcome time drifts a little with every port that touches its physics -
# 179.75 with none, 178.7 with the first 1,247, 177.8 with 2,494, 176.x with
# all 3,741 (2026-10-27, a bisect found no single culprit, only pairs) - and
# had left the default tolerance; its text is still checked exactly.
LEVEL_TOL = {}


def tol_for(lv):
    return float(LEVEL_TOL.get(str(lv), DEFAULT_TOL[0]))


DEFAULT_TOL = [2.0]


def same_outcome(got, want, lv=None):
    # bb.run returns None for "no outcome within the time and no crash": that
    # is the "none in Ns" of the baseline (round 1 on 2026-10-21 bisected level
    # 100 for nothing because None was taken as a change)
    if got is None:
        got = 'none'
    if (got or '').startswith('none') and (want or '').startswith('none'):
        return True
    saved = bb.TOL
    bb.TOL = tol_for(lv) if lv is not None else saved
    try:
        return bb.same(got, want)
    finally:
        bb.TOL = saved


def severity(got, want):
    """which differing level to bisect first: a crash, then a different
    outcome text, then a clock difference (the smallest signal)"""
    if got == 'CRASH':
        return 0
    gt, wt = str(got).rsplit('@', 1)[0], str(want).rsplit('@', 1)[0]
    if gt != wt:
        return 1 if not wt.startswith('none') else 2      # an outcome the original reaches is the clearer signal
    return 3


FRAME_LEVEL, FRAME_CLOCK, FRAME_TOL = '100', 60.0, 0.002
FRAME_REF = os.path.join(SCRATCH, 'ref_frame_100_60.bmp')     # the original's back buffer at that clock


def frame_outcome(hooks, inst=1, tag='frame_on', universe=None):
    """'same' when the port's level-100 frame at clock 60 matches the original's
    within FRAME_TOL of the pixels, else 'differs N%' / 'CRASH' (NOTES A1-15:
    the outcome gate cannot see rendering; six ports drew a striped sky and an
    empty radar while every level matched, 2026-10-22)"""
    import shot_bisect as sbm
    o = sbm.Oracle(FRAME_LEVEL, FRAME_CLOCK, 45, FRAME_TOL)
    o.ref = FRAME_REF
    # `universe`: every hook of the DLL, so the ones not in `hooks` are
    # disabled (without it the batch-less check ran the batch too and
    # always agreed with the batch run: round 8 of run 11 skipped a real
    # frame change, 2026-10-23)
    return o.run(FRAME_LEVEL, hooks, universe or hooks, inst, 45, tag)


def frame_search(hooks, order, forced, label):
    """bisect the batch with the frame as the oracle (behaviour_bisect.search
    with the shot oracle in place of its run)"""
    import shot_bisect as sbm
    o = sbm.Oracle(FRAME_LEVEL, FRAME_CLOCK, 45, FRAME_TOL)
    o.ref = FRAME_REF
    saved = bb.run
    bb.run = o.run
    try:
        return bb.search('frame', 'same', hooks, order, forced, 45, label)
    finally:
        bb.run = saved


PARALLEL = [2]      # game instances at a time (--parallel)
RUN_LEN = {}        # level -> game clock of its baseline outcome (the run's length)


def play_levels(levels, hooks, secs):
    """{level: outcome} with PARALLEL instances at a time (all hooks on), the
    longest runs first so the last ones do not straggle alone"""
    out, lock = {}, threading.Lock()
    todo = sorted(levels, key=lambda l: -RUN_LEN.get(l, 320.0))

    def worker(inst):
        while True:
            with lock:
                if not todo:
                    return
                lv = todo.pop(0)
            got = bb.run(lv, hooks, hooks, inst, secs, 'on_%s' % lv)
            with lock:
                out[lv] = got
                log('  level %s -> %s' % (lv, got or 'none in %ds' % secs))
    ths = [threading.Thread(target=worker, args=(i,)) for i in range(1, min(PARALLEL[0], len(todo)) + 1)]
    for th in ths: th.start()
    for th in ths: th.join()
    return out


def rebuild_gated(batch):
    """build with gates; quarantine offenders from the batch; returns the surviving batch or None"""
    for _ in range(6):
        err = d.build_check_install()
        if not err:
            return batch
        log('  gate: ' + err[:200])
        reason, _, rest = err.partition(':')
        addrs = [int(x, 16) for x in rest.split() if len(x) == 8]
        outside = [a for a in addrs if a not in batch]
        if outside:
            # a gate refusing a port that is not in this batch is a problem
            # with the gate or the tree, not with the batch: never quarantine
            # it (2026-10-21: check_ecx with CRT convention rows took 55)
            log('  gate names ports outside the batch (%s): stopping' % ' '.join('%08x' % x for x in outside[:8]))
            sys.exit(2)
        if not addrs or reason in ('build failed', 'fix_floatbits failed'):
            # a build error names no port: drop the whole batch's untracked files
            return None
        d.quarantine(addrs, reason.strip())
        batch = [a for a in batch if a not in addrs]
        if not batch:
            return []
    return None


def group_by_levels(cands, cov, count):
    """--targeted: order the candidates so the first `count` (the next batch)
    share levels: greedily, the one adding the fewest levels to the batch's
    union (then the smallest).  A batch of ten unrelated ports would need
    nearly every level; ten that one replay alone runs need one."""
    def lv(c):
        if c[1] not in cov['universe']:
            return set(cov['levels'])            # unknown: every level
        return {l for l, s in cov['levels'].items() if c[1] in s}
    rest = sorted(cands, key=lambda c: (len(lv(c)), c[0]))
    out, union = [], set()
    while rest and len(out) < count * 2:          # a margin for the compile pre-checks
        best = min(rest, key=lambda c: (len(union | lv(c)), c[0]))
        rest.remove(best)
        out.append(best)
        union |= lv(best)
    return out + rest


def reject(p):
    """keep a pool file the loop cannot use (a hand fix is work: 2026-10-28 lost nine)"""
    dst = os.path.join(os.path.dirname(p), '_rejected')
    os.makedirs(dst, exist_ok=True)
    shutil.move(p, os.path.join(dst, os.path.basename(p)))


def commit(batch, note):
    r = d.sh('python -I tools/progress.py')
    prog = r.stdout.strip().splitlines()[-1] if r.stdout.strip() else ''
    msg = ('Phase 1: gated batch of %d direct ports (%s)\n\n%s\n\nGate: static checks, fingerprint, check_uninit, '
           'fixed-clock outcome of every level against the baseline (tools/gated_batch.py).\n' % (len(batch), prog, note))
    d.sh('git add -A')
    subprocess.run(['git', '-c', 'core.quotepath=off', 'commit', '-q', '-F', '-'], input=msg, text=True, cwd=ROOT)
    log('  committed: ' + prog)
    # SCRATCH/all_hooks_now.txt is how play.ps1 -Original, record_level.ps1 and shot_bisect turn every
    # port off; a port missing from it stays on (2026-10-28).  hooked_addrs() reads BEA_HOOK lines only:
    # the installed list (a log's) adds the lifted functions and BEA_PARITY_HOOK ports (2026-10-31)
    with open(os.path.join(SCRATCH, 'all_hooks_now.txt'), 'w') as f:
        f.writelines('%08x\n' % a for a in sorted((set(d.hooked_addrs()) | set(bb.all_hooks())) - set(bb.KEEP)))


def main():
    global LOG
    ap = argparse.ArgumentParser()
    ap.add_argument('--pool', required=True)
    ap.add_argument('--count', type=int, default=40)
    ap.add_argument('--secs', type=int, default=120)
    ap.add_argument('--tol', type=float, default=2.0)
    ap.add_argument('--max-batches', type=int, default=100)
    ap.add_argument('--baseline', default=os.path.join(SCRATCH, 'baseline.json'))
    ap.add_argument('--parallel', type=int, default=2, help='game instances at a time')
    ap.add_argument('--targeted', action='store_true',
                    help='play only the levels whose coverage (SCRATCH/level_coverage.json, tools/level_coverage.py) runs a port of the batch')
    a = ap.parse_args()
    PARALLEL[0] = a.parallel
    os.makedirs(SCRATCH, exist_ok=True)
    # one loop at a time: two ran concurrently on 2026-10-21 (a kill missed
    # the Windows python), replaced each other's DLL under running games and
    # quarantined 55 good ports between them
    lock = os.path.join(SCRATCH, 'gated_batch.lock')
    if os.path.exists(lock) and time.time() - os.path.getmtime(lock) < 6 * 3600:
        sys.exit('another gated_batch seems to run (%s is %d min old); remove it if not' % (lock, (time.time() - os.path.getmtime(lock)) // 60))
    open(lock, 'w').write(str(os.getpid()))
    import atexit
    atexit.register(lambda: os.path.exists(lock) and os.remove(lock))
    LOG = open(os.path.join(SCRATCH, 'gated_batch_%s.log' % time.strftime('%Y%m%d_%H%M%S')), 'a', encoding='utf-8')
    bb.WITH_CLOCK, bb.TOL = True, a.tol
    DEFAULT_TOL[0] = a.tol
    try:
        LEVEL_TOL.update(json.load(open(os.path.join(SCRATCH, 'tolerances.json'))))
    except (OSError, ValueError):
        pass
    baseline = json.load(open(a.baseline))
    # level names: '100'..'700', and recorded playthroughs such as '300r'
    # (behaviour_bisect.replays, SCRATCH/replays.json)
    levels = sorted(baseline, key=lambda l: (level_num(l), l))
    for lv, want in baseline.items():
        m = re.search(r'@([0-9.]+)$', str(want))
        RUN_LEN[lv] = float(m.group(1)) if m else 320.0
    cov = None
    if a.targeted:
        c = json.load(open(os.path.join(SCRATCH, 'level_coverage.json')))
        cov = {'universe': {int(x, 16) for x in c['universe']},
               'levels': {lv: {int(x, 16) for x in s} for lv, s in c['levels'].items()}}
        missing = [lv for lv in levels if lv not in cov['levels']]
        if missing:
            sys.exit('level_coverage.json lacks levels %s: rerun tools/level_coverage.py' % ' '.join(missing))
    baseline['frame'] = 'same'                         # the frame check (frame_outcome) matches the original's shot
    sizes = {int(r['address'], 16): int(r['size']) for r in
             csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace'))}
    fails = 0
    solo = set()       # ports of a batch that failed to build: retried one at a time
    pause = os.path.join(SCRATCH, 'gated_batch.pause')
    for rnd in range(1, a.max_batches + 1):
        # a round boundary is the only moment the tree, tools/ and ghidra_out
        # may change under the loop (a Ghidra re-export, a generator change):
        # `touch SCRATCH/gated_batch.pause` holds the next round until the
        # file is removed (2026-10-21)
        while os.path.exists(pause):
            log('paused (%s exists)' % pause)
            while os.path.exists(pause):
                time.sleep(15)
            log('resumed')
        have, block = d.hooked_addrs(), d.blocklist()
        cands = []
        open(lock, 'w').write(str(os.getpid()))           # keep the lock fresh
        for p in glob.glob(os.path.join(a.pool, 'ap_*.cpp')):
            addr = int(os.path.basename(p)[3:11], 16)
            if addr in have or addr in block or os.path.exists(os.path.join(d.DIRECT, os.path.basename(p))):
                continue                                   # replaced already: never overwrite a port in place
            # a candidate whose call arity the asm disputes stays in the pool
            # for a reading: 0x4f34a0 (the original pushes a register it never
            # set) and 0x411aa0 (a dropped out-buffer) each cost a bisect
            if '@autoport-arity' in open(p, encoding='utf-8', errors='replace').read():
                continue
            cands.append((sizes.get(addr, 1 << 30), addr, p))
        cands.sort()
        if not cands:
            log('pool exhausted'); break
        # a candidate that does not compile on its own would sink the whole
        # batch's build (round 1 on 2026-10-21): check each one first
        batch = []
        if cov is not None:
            cands = group_by_levels(cands, cov, a.count)
        if solo & {addr for _, addr, _ in cands}:
            cands = [c for c in cands if c[1] in solo] + [c for c in cands if c[1] not in solo]
        for size, addr, p in cands:
            if len(batch) >= (1 if addr in solo or (batch and batch[0][1] in solo) else a.count):
                break
            chk = subprocess.run([r'C:\msys64\usr\bin\bash.exe', '-lc',
                                  "cd '%s' && g++ -fsyntax-only -std=gnu++17 -m32 -mfpmath=387 -fpermissive -w -I src "
                                  "-I third_party/minhook/include '%s'" % (ROOT.replace('\\', '/'), p.replace('\\', '/'))],
                                 capture_output=True, text=True, env=dict(os.environ, MSYSTEM='MINGW32'))
            if chk.returncode != 0:
                log('  %08x does not compile on its own: moved to the pool\'s _rejected' % addr)
                reject(p)
                continue
            # fix_floatbits runs on the whole tree before the build: a port it
            # cannot handle fails the batch's build (0x523bc0, 2026-10-28)
            ff = subprocess.run([sys.executable, '-I', os.path.join(ROOT, 'tools', 'fix_floatbits.py'), '--check', p],
                                capture_output=True, text=True, cwd=ROOT)
            nf = re.search(r'(\d+) not fixable', ff.stdout)
            if not nf or int(nf.group(1)):
                log('  %08x: fix_floatbits cannot handle it (%s): moved to the pool\'s _rejected'
                    % (addr, (ff.stdout.strip().splitlines() or ['no output'])[-1][:120]))
                reject(p)
                continue
            batch.append((size, addr, p))
        if not batch:
            log('pool exhausted'); break
        log('round %d: batch of %d (sizes %d..%d), %d left in the pool' % (rnd, len(batch), batch[0][0], batch[-1][0], len(cands) - len(batch)))
        for _, addr, p in batch:
            shutil.copy(p, os.path.join(d.DIRECT, 'ap_%08x.cpp' % addr))
        addrs = [addr for _, addr, _ in batch]
        survivors = rebuild_gated(addrs)
        if survivors is None:
            log('  build failed: batch withdrawn')
            for addr in addrs:
                f = os.path.join(d.DIRECT, 'ap_%08x.cpp' % addr)
                if os.path.exists(f) and addr not in have:
                    os.remove(f)
            if len(addrs) > 1:
                # one port sank the build (0x523bc0 took nine hand-fixed ports
                # with it on 2026-10-28): retry each one on its own
                solo.update(addrs)
                log('  retrying its %d ports one at a time' % len(addrs))
                continue
            fails += 1
            reject(os.path.join(a.pool, 'ap_%08x.cpp' % addrs[0]))      # never retry a port that cannot build
            if fails >= 2:
                log('two builds failed in a row: stopping'); break
            continue
        fails = 0
        if not survivors:
            log('  every port of the batch was quarantined by the gates'); continue
        hooks = bb.all_hooks()
        run_lv = levels
        if cov is not None:
            if all(s in cov['universe'] for s in survivors):
                # a level that never enters a port of the batch cannot be
                # changed by it: coverage was taken with the same runs
                run_lv = [lv for lv in levels if cov['levels'][lv] & set(survivors)]
                log('  targeted: %d of %d levels run a port of the batch%s'
                    % (len(run_lv), len(levels), '' if run_lv else ' (none: static gates only)'))
            else:
                log('  targeted: %s not in the coverage universe: every level'
                    % ' '.join('%08x' % s for s in survivors if s not in cov['universe']))
        outcomes = play_levels(run_lv, hooks, a.secs)
        if PARALLEL[0] > 1:
            # a recorded replay can play out differently under the load of
            # other instances (800r at 4 instances, 2026-10-29; alone it
            # matched twice): a level that differs is played again alone
            # before it counts
            for lv in [l for l in run_lv if not same_outcome(outcomes.get(l), baseline[l], l)]:
                solo_out = bb.run(lv, hooks, hooks, 1, a.secs, 'solo_%d_%s' % (rnd, lv))
                log('  level %s again alone -> %s' % (lv, solo_out or 'none in %ds' % a.secs))
                outcomes[lv] = solo_out
        if os.path.exists(FRAME_REF) and FRAME_LEVEL in run_lv:
            outcomes['frame'] = frame_outcome(hooks)
            log('  frame (level %s clock %g) -> %s' % (FRAME_LEVEL, FRAME_CLOCK, outcomes['frame']))
            if outcomes['frame'] != 'same':
                # the bisect assumes the tree without the batch draws the
                # original's frame; when it does not, it blames the batch's
                # first port every time (run 10 round 1, 2026-10-23: the live
                # tree differed by 0.72%, three good ports were quarantined and
                # seven withdrawn).  Check the batch-less tree first.
                base = frame_outcome([h for h in hooks if h not in set(survivors)], inst=2, tag='frame_base_%d' % rnd,
                                     universe=sorted(set(hooks) | set(survivors)))
                if base != 'same':
                    log('  the tree without the batch already differs (%s): frame check skipped this round' % base)
                    outcomes['frame'] = 'same'
        # the same for the levels: a level the tree without the batch already
        # plays differently (the live tree drifted: quarantines of 2026-10-27
        # moved level 411 from 177.6 to 176.x, outside the tolerance) is not
        # the batch's doing; its bisect would blame the batch's first port
        # every time (run 14 round 1 quarantined three good ports)
        drift = [lv for lv in run_lv if not same_outcome(outcomes.get(lv), baseline[lv], lv)]
        if drift:
            uni = sorted(set(hooks) | set(survivors))
            base_hooks = [h for h in hooks if h not in set(survivors)]
            for lv in drift:
                b = bb.run(lv, base_hooks, uni, 2, a.secs, 'base_%d_%s' % (rnd, lv))
                if not same_outcome(b, baseline[lv], lv):
                    log('  level %s: the tree without the batch already differs (%s): not counted against the batch; LIVE TREE DRIFT' % (lv, b))
                    outcomes[lv] = baseline[lv]
        checks = run_lv + (['frame'] if 'frame' in outcomes else [])
        culprits = []
        for attempt in range(3):
            bad = [lv for lv in checks if not same_outcome(outcomes.get(lv), baseline[lv], lv)]
            if not bad:
                break
            lv = min(bad, key=lambda l: (severity(outcomes.get(l), baseline[l]), level_num(l)))
            log('  attempt %d: %d check(s) differ (%s); %s: %s (baseline %s): bisecting the batch'
                % (attempt + 1, len(bad), ' '.join(bad), lv, outcomes[lv], baseline[lv]))
            hooks = bb.all_hooks()
            order = list(survivors)                        # the batch itself, in pool order
            forced = [h for h in hooks if h not in set(survivors)]
            hooks = sorted(set(hooks) | set(survivors))     # the disable list covers the batch even if no log listed it yet
            if lv == 'frame':
                i = frame_search(hooks, order, forced, 'gb%d_frame' % rnd)
            else:
                saved_tol, bb.TOL = bb.TOL, tol_for(lv)
                i = bb.search(lv, baseline[lv], hooks, order, forced, a.secs, 'gb%d_%s' % (rnd, lv))
                bb.TOL = saved_tol
            culprit = order[i]
            log('  culprit %08x' % culprit)
            d.quarantine([culprit], 'gated_batch: %s %s (baseline %s)' % (lv if lv == 'frame' else 'level ' + lv, outcomes[lv], baseline[lv]))
            culprits.append(culprit)
            survivors = [s for s in survivors if s != culprit]
            if rebuild_gated(survivors) is None:
                log('  rebuild failed after quarantine'); break
            outcomes.update(play_levels([l for l in bad if l != 'frame'], bb.all_hooks(), a.secs))
            if 'frame' in bad:
                outcomes['frame'] = frame_outcome(bb.all_hooks(), tag='frame_on_%d' % attempt)
                log('  frame -> %s' % outcomes['frame'])
        bad = [lv for lv in checks if not same_outcome(outcomes.get(lv), baseline[lv], lv)]
        if bad:
            log('  levels still differ after 3 culprits: %s; withdrawing the rest of the batch' % ' '.join(bad))
            for addr in survivors:
                f = os.path.join(d.DIRECT, 'ap_%08x.cpp' % addr)
                if os.path.exists(f):
                    shutil.move(f, os.path.join(d.QUAR, 'ap_%08x.cpp' % addr))
            with open(d.BLOCK, 'a') as f:
                for addr in survivors:
                    f.write('%08x gated_batch: withdrawn with its batch (levels %s)\n' % (addr, ' '.join(bad)))
            if rebuild_gated([]) is None:
                log('  rebuild failed after withdrawal: stopping'); break
            commit([], 'batch %d withdrawn: %d culprits quarantined, levels %s still differed' % (rnd, len(culprits), ' '.join(bad)))
            continue
        commit(survivors, 'batch %d: %d ports kept, %d quarantined by the gates, %d by the level bisect (%s)'
               % (rnd, len(survivors), len(addrs) - len(survivors) - len(culprits), len(culprits),
                  ' '.join('%08x' % c for c in culprits) or 'none'))


if __name__ == '__main__':
    main()
