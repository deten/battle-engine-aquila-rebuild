"""Find which hooks crash the game by search over bea_hook_disable<i>.txt.

Usage: python -I tools/bisect.py --candidates FILE [--args "-forcewindowed -skipfmv -level 200"]
                                 [--seconds 12] [--parallel 4] [--allow-exit]
  FILE: one hex address per line (first token).  All other hooks stay enabled.
Prints the culprit addresses and leaves bea_hook_disable.txt listing them.

Up to --parallel game instances run at once (tools/smoke_test.ps1 -Instance),
each with its own disable file, so one round of the search tests that many
subsets in the time of one launch.  A pass is "ALIVE with frames rendered";
an early clean exit counts only with --allow-exit (front-end runs).
"""
import argparse, functools, os, re, subprocess, sys
from concurrent.futures import ThreadPoolExecutor, as_completed

print = functools.partial(print, flush=True)
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, 'Battle Engine Aquila')
KEEP = {0x00423720, 0x00423bc0}      # heartbeat counter and the windowed harness: never bisected
ALLOW_EXIT = '--allow-exit' in sys.argv


def disable_path(inst):
    return os.path.join(GAME, 'bea_hook_disable%s.txt' % inst)


def cancel_path(inst):
    return os.path.join(GAME, 'bea_cancel%s.txt' % inst)


def run(disabled, args, seconds, inst='1'):
    """True if the game survives with `disabled` hooks turned off; None if the
    run was cancelled because a parallel probe had already failed."""
    with open(disable_path(inst), 'w') as f:
        f.write(''.join('%08x\n' % a for a in disabled))
    try:
        r = subprocess.run(['powershell', '-ExecutionPolicy', 'Bypass', '-File', os.path.join(ROOT, 'tools', 'smoke_test.ps1'),
                            '-Seconds', str(seconds), '-Instance', str(inst), '-TimeScale', os.environ.get('BEA_TIMESCALE', ''),
                            '-GameArgs', args], capture_output=True, text=True, timeout=seconds + 120)
    except subprocess.TimeoutExpired:
        # say which run hung: instance, game arguments, and whether a game
        # process is still around (2026-10-19 00:23: a stall with no disk events)
        import datetime
        left = subprocess.run(['tasklist', '/FI', 'IMAGENAME eq BEA.exe'], capture_output=True, text=True).stdout.strip().splitlines()[-1:]
        print('HARNESS STALLED: smoke test (instance %s, args %s) did not return within %ds at %s; BEA.exe: %s; aborting'
              % (inst, args, seconds + 120, datetime.datetime.now().strftime('%H:%M:%S'), left))
        sys.exit(3)
    out = r.stdout
    if 'KILL FAILED' in out:
        print('HARNESS STALLED: game process could not be killed; aborting (machine problem, not a port)')
        sys.exit(3)
    try:
        log = open(os.path.join(GAME, 'bea_hook%s.log' % inst), errors='replace').read()
    except OSError:
        log = out
    # alive means still rendering: the last heartbeat must show new frames
    # (a hang keeps the old total, so `frames > 0` alone is not enough)
    deltas = [int(x) for x in re.findall(r'heartbeat: frames=\d+ \(\+(\d+) in', log)]
    if 'CANCELLED' in out:
        return None
    if 'DEVICE LOST' in log:
        return None     # a locked session lost the D3D9 device: no verdict
    if 'ALIVE' in out:
        return bool(deltas) and deltas[-1] > 0
    m = re.search(r'EXITED after (\d+)s with code (-?\d+)', out)
    # with the autopilot a mission can end and the game quit (0 or 100)
    clean = m and int(m.group(2)) in ((0, 100) if os.environ.get('BEA_AUTOPILOT') else (0,))
    if clean and (ALLOW_EXIT or os.environ.get('BEA_AUTOPILOT')) and 'CRASH code' not in log:
        return True
    return False


def run_many(configs, args, seconds, parallel):
    """configs: list of disabled-sets, at most `parallel` of them; returns
    pass/fail/None in order.  The first failure cancels the probes still
    running (None): one failing part is all find_culprit needs, and a passing
    probe would otherwise hold the round for the full soak time."""
    assert len(configs) <= parallel
    insts = [str(k + 1) for k in range(len(configs))]
    with ThreadPoolExecutor(max_workers=parallel) as ex:
        futs = {ex.submit(run, d, args, seconds, i): i for d, i in zip(configs, insts)}
        for f in as_completed(futs):
            if f.result() is False:
                for i in insts:
                    if i != futs[f]:
                        open(cancel_path(i), 'w').close()
                break
        results = [f.result() for f in futs]
    for i in insts:
        try:
            os.remove(cancel_path(i))
        except OSError:
            pass
    return results


def minimise(cands, disabled_for, args, seconds, parallel):
    """A crash that needs several ports together (no half crashes alone;
    2026-10-18 batch 7 quarantined 57 ports as one set).  Recursive
    minimisation: with `bg` always enabled, if half A or half B fails on its
    own (probed in parallel) recurse into it; otherwise both halves are
    needed: minimise A with B enabled, then B with that part of A enabled.
    About 2*log2(n) probes per interacting port; returns the minimal set."""
    probes = [0]

    def fails(enabled_sets):
        probes[0] += len(enabled_sets)
        return run_many([disabled_for(e) for e in enabled_sets], args, seconds, parallel)

    def rec(s, bg):
        if len(s) <= 1:
            return list(s)
        a, b = s[:len(s) // 2], s[len(s) // 2:]
        res = fails([bg + a, bg + b])
        if res[0] is False:
            return rec(a, bg)
        if res[1] is False:
            return rec(b, bg)
        ma = rec(a, bg + b)
        return ma + rec(b, bg + ma)

    out = rec(list(cands), [])
    print('  minimised to %d port(s) after %d probes' % (len(out), probes[0]))
    return out


def find_culprit(cands, all_cands, bad, args, seconds, parallel):
    """cands crash when enabled together.  Narrow to one, keeping every other
    candidate (and the known-bad ones) disabled.  Each round probes up to
    `parallel` disjoint parts at once."""
    def disabled_for(subset):
        return sorted((set(all_cands) - set(subset)) | set(bad))
    while len(cands) > 1:
        k = min(parallel, len(cands))
        parts = [cands[i::k] for i in range(k)]
        results = run_many([disabled_for(p) for p in parts], args, seconds, parallel)
        failing = [p for p, ok in zip(parts, results) if ok is False]
        print('  round: %d parts of ~%d, %d failing' % (k, len(parts[0]), len(failing)))
        if failing:
            cands = min(failing, key=len)
            continue
        # no part crashes on its own: an interaction between parts, or a
        # crash that is not deterministic; re-probe the whole set once
        if not run(disabled_for(cands), args, seconds):
            print('  interaction: no part crashes alone but all together do; minimising the set')
            out = minimise(cands, disabled_for, args, seconds, parallel)
            # a real interaction is a handful of ports; a big "minimal" set
            # means the crash is not deterministic (2026-10-19 04:10: 32 ports
            # on level 200, the batch then passed its re-soak)
            if len(out) > 4:
                print('  minimised set of %d is too large for an interaction: treating the crash as flaky' % len(out))
                return []
            return out
        print('  flaky: the set passed on re-probe; no deterministic culprit')
        return []
    return cands


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--candidates', required=True)
    ap.add_argument('--args', default='-forcewindowed -skipfmv -level 200')
    ap.add_argument('--seconds', type=int, default=12)
    ap.add_argument('--parallel', type=int, default=int(os.environ.get('BEA_PARALLEL', '4')))
    ap.add_argument('--allow-exit', action='store_true')
    a = ap.parse_args()
    cands = sorted(set(int(l.split()[0], 16) for l in open(a.candidates) if l.strip()))
    cands = [c for c in cands if c not in KEEP]
    bad = []
    # baseline: with every candidate disabled the run must pass, otherwise the
    # failure is outside the candidate set
    if not run(cands, a.args, a.seconds):
        print('BASELINE FAILS with all %d candidates disabled: culprit is outside the candidate set' % len(cands))
        sys.exit(2)
    rounds = 0
    while True:
        print('probe: all %d candidates enabled (%d known bad disabled)' % (len(cands), len(bad)))
        if run(bad, a.args, a.seconds):
            print('PASS with %d candidates enabled' % len(cands))
            break
        c = find_culprit(cands, cands, bad, a.args, a.seconds, a.parallel)
        if not c:
            print('no deterministic culprit; stopping')
            break
        alone = run(sorted((set(cands) - set(c)) | set(bad)), a.args, a.seconds)
        if alone and len(c) == 1:
            print('culprit %08x passes alone: flaky; stopping' % c[0])
            break
        print('culprit(s): ' + ' '.join('%08x' % x for x in c) + ('' if not alone else '  (passes alone: interaction)'))
        bad += c
        cands = [x for x in cands if x not in c]
        rounds += 1
        if rounds > 12:
            print('giving up after 12 culprits')
            break
    for inst in range(1, a.parallel + 1):
        try:
            os.remove(disable_path(str(inst)))
        except OSError:
            pass
    with open(disable_path(''), 'w') as f:
        f.write(''.join('%08x\n' % x for x in bad))
    print('bad hooks: ' + ' '.join('%08x' % x for x in bad))


if __name__ == '__main__':
    main()
