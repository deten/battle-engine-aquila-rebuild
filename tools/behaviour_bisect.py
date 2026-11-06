"""Find the port that changes how a level plays out (not a crash).

A level whose unmodified game reaches a fixed outcome by itself (idle player)
is the oracle: e.g. level 211 is lost ("Firebase was destroyed") 43-45 s
after play starts, every time, while with all ports in it never is
(2026-10-20).  Prefix search over the installed hooks, in log order: find the
smallest k such that enabling only the first k hooks loses the outcome; hook
k is a culprit (possibly needing partners among the first k-1, reported by a
second search with hook k forced on).  Two game instances test two split
points per round, so each round keeps a third of the range.

    python -I tools/behaviour_bisect.py --level 211 --expect "Firebase was destroyed" [--secs 80]

Needs BEA_ENDEXIT=1 behaviour (set here) so a run ends at its outcome.
"""
import argparse, glob, os, re, subprocess, sys, threading

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
# BEA_GAMEDIR: a copy of the game folder, so a second build can run beside the first (2026-10-31)
GAME = os.environ.get('BEA_GAMEDIR') or os.path.join(ROOT, 'Battle Engine Aquila')
SCRATCH = os.environ.get('BEA_SCRATCH', os.path.join(ROOT, 'testdata'))
KEEP = {0x00423bc0, 0x005159e0}   # harness hooks (hooks.cpp never skips them)
# the fixed-step clock (test_harness.cpp): a run's outcome then depends on the
# hooks alone.  Level 211's original loses at game clock 200.000 every time;
# with the ports it lost at 309.550 twice (2026-10-20)
TIME_ARGS = ['-TimeScale', '1', '-FixedStep', '0.016667', '-EndClock', '320']   # no outcome by game clock 320 -> 'none@320.0' (311 ends at 287.85)
WITH_CLOCK = False     # set when --expect carries '@clock'
PAIR = False           # --pair: both instances run the same split point (nondeterministic culprits)
TOL = 1.0              # --tol: game-clock tolerance when --expect carries '@clock'


def same(r, e):
    """r (a run's result) matches the expectation e: same text, clock within TOL"""
    if r == e or (r in (None, 'none') and e in (None, 'none')):   # --expect none: run() reports 'none'
        return True
    if r is None or e is None or '@' not in str(r) or '@' not in str(e):
        return False
    rt, rc = str(r).rsplit('@', 1)
    et, ec = str(e).rsplit('@', 1)
    try:
        return rt == et and abs(float(rc) - float(ec)) <= TOL
    except ValueError:
        return False


def restore_saves():
    """the kept copy of the person's saved games back in the game folder (as menu_test does)"""
    keep = os.path.join(SCRATCH, 'user_profile', 'savegames_backup')
    saves = os.path.join(GAME, 'savegames')
    if not os.path.isdir(keep):
        return
    import shutil
    os.makedirs(saves, exist_ok=True)
    kept = set(os.listdir(keep))
    for f in os.listdir(saves):
        if f not in kept:
            os.remove(os.path.join(saves, f))
    for f in kept:
        src, dst = os.path.join(keep, f), os.path.join(saves, f)
        if not os.path.exists(dst) or open(src, 'rb').read() != open(dst, 'rb').read():
            shutil.copy2(src, dst)


def all_hooks():
    """Installed hooks in registry order, from the newest soak log that has them."""
    # the newest log of a run with every hook on: the installed DLL's list
    # (not the game folder's bea_hook<n>.log: a search run leaves partial lists there)
    logs = (glob.glob(os.path.join(ROOT, 'build', 'soak_*.log')) + glob.glob(os.path.join(SCRATCH, 'afk', 'ab_port_*.log'))
            + glob.glob(os.path.join(SCRATCH, 'afk', 'det_port_*.log')) + glob.glob(os.path.join(SCRATCH, 'bbis_on*.log')))
    logs.sort(key=os.path.getmtime, reverse=True)
    # of the last few full-list logs, the longest: a log from before a batch
    # was restored would hide the restored hooks from the search
    best = []
    for log in logs[:8]:
        hooks = [int(m, 16) for m in re.findall(r'\] hook  ([0-9a-f]{8}) ', open(log, errors='replace').read())]
        if len(hooks) > max(1000, len(best)):
            best = hooks
    if best:
        return [h for h in best if h not in KEEP]
    sys.exit('no soak log with the hook list in build/')


def replays():
    """recorded playthroughs usable as levels: SCRATCH/replays.json maps a name
    ('300r') to {"level": "300", "file": "<recording>"}; such a run replays the
    person's input (BEA_REPLAY, test_harness.cpp) without sound"""
    p = os.path.join(SCRATCH, 'replays.json')
    try:
        import json
        r = json.load(open(p))
        for v in r.values():            # paths in the file are relative to the test data folder
            for k in ('file', 'options'):
                if k in v and not os.path.isabs(v[k]):
                    v[k] = os.path.join(SCRATCH, v[k])
        return r
    except (OSError, ValueError):
        return {}


def run(level, enabled, hooks, inst, secs, tag):
    """True if the expected outcome happened (behaves like the original)."""
    on = set(enabled)
    with open(os.path.join(GAME, 'bea_hook_disable%d.txt' % inst), 'w') as f:
        f.writelines('%08x\n' % h for h in hooks if h not in on)
    log = os.path.join(SCRATCH, 'bbis_%s.log' % tag)
    env = dict(os.environ, BEA_ENDEXIT='1')
    # -nosound: a radio message lasts as long as its voice line plays in real
    # time; with sound the idle 211 lost at 190-198 s run to run (2026-10-31,
    # after the audio output changed; 200.000 before) and at 183.4 every time
    # without it
    args = '-forcewindowed -skipfmv -nosound -level %s' % level
    time_args = TIME_ARGS
    rp = replays().get(str(level))
    if rp:
        env['BEA_REPLAY'] = rp['file']
        # "sync"/"cheat": the recording was made with BEA_SYNCJOBS=1 /
        # BEA_CHEAT=1 (tools/record_level.ps1 since 2026-10-29); its replays
        # need the same switches to play out as the person played
        # "mouse0": "x,y", the game's mouse position at the start of play
        # (recordings made before 2026-10-30 lack the "S" line that holds it)
        if 'mouse0' in rp:
            env['BEA_MOUSE0'] = rp['mouse0']
        # the invert-Y switches the recording started with (saved options can set
        # them; the replays run without that file), from its log's "controls:" line
        try:
            m = re.search(r'controls: invert walker (\d) (\d) jet (\d) (\d)',
                          open(re.sub(r'\.rec$', '.log', rp['file']), errors='replace').read())
            if m:
                env['BEA_INVERT'] = ' '.join(m.groups())
        except OSError:
            pass
        # "options": the defaultoptions.bea the recording was made with
        # (record_level.ps1 keeps it beside the recording as .options)
        opt = rp.get('options') or re.sub(r'\.rec$', '.options', rp['file'])
        if os.path.exists(opt):
            env['BEA_OPTIONS_FILE'] = opt
        # "mp1": recorded with BEA_MP_ONEPLAYER=1 (multiplayer input on player 1 alone)
        if rp.get('mp1'):
            env['BEA_MP_ONEPLAYER'] = '1'
        # "goodies": recorded with -Goodies (BEA_GOODIES=3, every goodie unlocked)
        # "keepgoing": recorded with -KeepGoing - the replay runs past the outcome (to "secs")
        if rp.get('keepgoing'):
            env.pop('BEA_ENDEXIT', None)
        # "allmaps": recorded with -AllMaps (BEA_MPMAPS=1)
        if rp.get('allmaps'):
            env['BEA_MPMAPS'] = '1'
        if rp.get('goodies'):
            env['BEA_GOODIES'] = '3'
        if rp.get('sync'):
            env['BEA_SYNCJOBS'] = '1'
        if rp.get('cheat'):
            # "early": recorded before 2026-10-30, when the cheat began with the
            # loading frames; "cheat_clock" is then the game clock it began at
            env['BEA_CHEAT'] = rp['cheat'] if isinstance(rp['cheat'], str) else '1'
            if 'cheat_clock' in rp:
                env['BEA_CHEAT_CLOCK'] = str(rp['cheat_clock'])
        # "protect": unit type names that take no damage (BEA_PROTECT,
        # test_harness.cpp): a variant of a recorded win in which, say, every
        # transport survives, reaching endings the recording itself did not
        if rp.get('protect'):
            env['BEA_PROTECT'] = rp['protect']
        # "client": the window size the game saw while recording (an enlarged
        # play window: GetClientRect answered the shown size, and the mouse is
        # mapped through it); without it a level-500 replay aimed elsewhere
        if 'client' in rp:
            env['BEA_REPLAY_CLIENT'] = rp['client']
        # "level": "menu" replays a session from the main menu (the New Game
        # crash of 2026-10-23); "secs" caps such a run, which has no outcome
        args = '-forcewindowed -skipfmv -nosound' + ('' if rp['level'] == 'menu' else ' -level %s' % rp['level'])
        if rp['level'] == 'menu':
            restore_saves()          # the saved games the recording started from (record_level.ps1 -Level menu)
        secs = min(secs, int(rp.get('secs', secs)))
        # "endclock": a playthrough longer than the idle runs' 320 s (level 500: 360.4)
        if 'endclock' in rp:
            time_args = list(TIME_ARGS)
            time_args[time_args.index('-EndClock') + 1] = str(rp['endclock'])
    # BEA_WITH_SOUND / BEA_WITH_FMV: captures of the sound, music and video code
    # (offline_check needs no exact replay; a test run keeps both off)
    if os.environ.get('BEA_WITH_SOUND'):
        args = args.replace(' -nosound', '')
    if os.environ.get('BEA_WITH_FMV'):
        args = args.replace(' -skipfmv', '')
    if os.environ.get('BEA_EXTRA_ARGS'):            # more of the game's switches (e.g. -nomusic), as menu_test.py takes them
        args += ' ' + os.environ['BEA_EXTRA_ARGS']
    subprocess.run(['powershell', '-ExecutionPolicy', 'Bypass', '-File', os.path.join(ROOT, 'tools', 'smoke_test.ps1'),
                    '-Seconds', str(secs), '-Instance', str(inst), *time_args, '-SaveLog', log, '-GameDir', GAME,
                    '-GameArgs', args],
                   cwd=ROOT, env=env, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    text = open(log, errors='replace').read() if os.path.exists(log) else ''
    m = re.search(r'outcome: \w+ .*"(.*)"\)', text)   # the lost-message text
    crash = 'CRASH code' in text or re.search(r'EXIT code=[1-9]', text)
    if not m:
        return 'CRASH' if crash else None
    # with the fixed clock the game time of the outcome is exact: "--expect
    # 'Firebase was destroyed@200.0'" asks for it too (to a tenth of a second)
    c = re.search(r'outcome: \w+ .*clock ([0-9.]+)', text)
    return '%s@%.1f' % (m.group(1), float(c.group(1))) if c and WITH_CLOCK else m.group(1)


def search(level, expect, hooks, order, forced, secs, label):
    """Smallest k such that forced + order[:k] loses the expected outcome."""
    lo, hi = 0, len(order)          # invariant: order[:lo] keeps the outcome, order[:hi] loses it
    rnd = 0
    while hi - lo > 1:
        rnd += 1
        res = {}
        def t(k, inst, key=None):
            res[key or k] = run(level, list(forced) + order[:k], hooks, inst, secs, '%s_r%d_%d_%d' % (label, rnd, k, inst))
        if PAIR:
            # determinism search: one split point, both instances run it; they
            # must agree with each other and with the expectation
            k1, k2 = lo + (hi - lo) // 2, None
            ths = [threading.Thread(target=t, args=(k1, 1, 'a')), threading.Thread(target=t, args=(k1, 2, 'b'))]
            for th in ths: th.start()
            for th in ths: th.join()
            res = {k1: res['a'] if res['a'] == res['b'] else 'DIFF(%s | %s)' % (res['a'], res['b'])}
        else:
            k1 = lo + max(1, (hi - lo) // 3)
            k2 = lo + max(2, 2 * (hi - lo) // 3) if hi - lo > 2 else None
            ths = [threading.Thread(target=t, args=(k1, 1))]
            if k2 and k2 < hi:
                ths.append(threading.Thread(target=t, args=(k2, 2)))
            for th in ths: th.start()
            for th in ths: th.join()
        for k in sorted(res):
            print('  %s round %d: first %d hooks -> %s' % (label, rnd, k, res[k]), flush=True)
        if not same(res[k1], expect):
            hi = k1
        elif k2 in res and not same(res[k2], expect):
            lo, hi = k1, k2
        else:
            lo = max(res)
    return hi - 1                   # index of the culprit in order


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--level', required=True)
    ap.add_argument('--expect', required=True, help="lost-message text the original reaches, or 'none' "
                    "(the original has no outcome within --secs)")
    ap.add_argument('--secs', type=int, default=80)
    ap.add_argument('--tol', type=float, default=1.0, help='game-clock tolerance for text@clock expectations')
    ap.add_argument('--pair', action='store_true', help='run each split point in both instances; a culprit is '
                    'also a hook that makes the two runs disagree (nondeterminism)')
    ap.add_argument('--only', help='file of hook addresses: search only these, every other hook stays on '
                    '(e.g. the ports a batch added)')
    a = ap.parse_args()
    if a.expect == 'none':
        a.expect = None
    global WITH_CLOCK, PAIR, TOL
    TOL = a.tol
    WITH_CLOCK = bool(a.expect and '@' in a.expect)
    PAIR = a.pair
    hooks = all_hooks()
    print('%d hooks' % len(hooks), flush=True)
    order, forced = hooks, []
    if a.only:
        only = {int(x, 16) for x in re.findall(r'[0-9a-f]{6,8}', open(a.only).read())}
        order = [h for h in hooks if h in only]
        forced = [h for h in hooks if h not in only]
        print('searching %d of them' % len(order), flush=True)
        # sanity: all suspects off keeps the outcome, all on loses it
        res = {}
        ths = [threading.Thread(target=lambda: res.__setitem__('off', run(a.level, forced, hooks, 1, a.secs, 'off'))),
               threading.Thread(target=lambda: res.__setitem__('on', run(a.level, hooks, hooks, 2, a.secs, 'on')))]
        for th in ths: th.start()
        for th in ths: th.join()
        print('  suspects off -> %s; all on -> %s' % (res['off'], res['on']), flush=True)
        if not same(res['off'], a.expect):
            sys.exit('RESULT: the suspects are not the cause (outcome lost with them off)')
        if same(res['on'], a.expect):
            sys.exit('RESULT: no regression with all hooks on')
    i = search(a.level, a.expect, hooks, order, forced, a.secs, 'p1')
    culprit = order[i]
    print('culprit: %08x (index %d)' % (culprit, i), flush=True)
    # with --only, "alone" means with every non-suspect on
    alone = run(a.level, list(forced) + [culprit], hooks, 1, a.secs, 'alone')
    if PAIR:
        alone2 = run(a.level, list(forced) + [culprit], hooks, 2, a.secs, 'alone2')
        if alone2 != alone:
            alone = 'DIFF(%s | %s)' % (alone, alone2)
    print('  %08x alone -> %s' % (culprit, alone), flush=True)
    if not same(alone, a.expect):
        print('RESULT: %08x alone changes the outcome' % culprit)
        return
    j = search(a.level, a.expect, hooks, order[:i], list(forced) + [culprit], a.secs, 'p2')
    print('RESULT: %08x needs partner %08x' % (culprit, order[j]))


if __name__ == '__main__':
    main()
