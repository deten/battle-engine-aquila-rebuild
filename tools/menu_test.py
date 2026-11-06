"""Scripted front-end tests: menu screens compared pixel for pixel by frame.

Every other test starts with `-level N` and never shows the front end (the
CFEP* menus: 1,535 ports no test ran were mostly there, NOTES A1-17).  A menu
script is a list of timed inputs posted to the game window from the main menu
on (test_harness.cpp BEA_REPLAY, phase-0 `M` lines: the front end reads the
mouse and keys from window messages only), with back-buffer shots at chosen
frames (BEA_SHOTFRAMES) and an exit at a fixed frame (BEA_ENDFRAME).  Under the
fixed clock a front-end frame is the same in every run of the original, so the
original's shots are the oracle: a port that changes a menu shows up as a
different picture, not only as a crash.

Script lines (tools/menu_scripts/<name>.txt; '#' starts a comment):
    wait N              advance the frame cursor by N frames
    click X Y           move to (X, Y) in 640x480 client terms, press and release the left button
    move X Y            mouse move only
    key NAME            press and release a key (up down left right enter esc space tab, or a letter)
    hold NAME N         hold a key down for N frames (Windows' auto-repeat included), then release it
    resize W H          resize the game window's client area to W x H, as dragging its frame does
    shot                back-buffer shot at the current frame
    level N             start level N (`-level N`) instead of the front end; frames then count
                        from the start of play (BEA_SHOTPLAY), as a playthrough recording does
    end                 the run ends here (default: 60 frames after the last line)
    exclusive           the script writes a saved game: never run two of it at once (the other
                        instance would find the save and ask to overwrite it)
    card VVVV:DDDD[:DRV] the adapter reports that vendor, device (and driver version): the game applies
                        that card's cardid.txt tweaks (test_harness.cpp BEA_FAKECARD)
    tolerance N         a shot matches when at most N pixels differ from the original's (kept in
                        <name>_oracle): the GPU's multisample anti-aliasing varies at polygon edges
                        between two runs of the original (90 pixels, 2026-10-28)

    python -I tools/menu_test.py baseline NAME        record the original's shots (all ports off)
    python -I tools/menu_test.py check NAME [NAME..]  all installed ports on, compare with the baseline
    python -I tools/menu_test.py bisect NAME          find the port(s) behind a differing shot
    python -I tools/menu_test.py png FILE.bmp         a PNG next to it (to look at a shot)
"""
import json, os, re, shutil, struct, subprocess, sys, zlib

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb        # noqa: E402

GAME = bb.GAME
SCRATCH = bb.SCRATCH
SCRIPTS = os.path.join(ROOT, 'tools', 'menu_scripts')
OUT = os.path.join(SCRATCH, 'menu')
STEP = '0.016667'

WM_MOUSEMOVE, WM_LBUTTONDOWN, WM_LBUTTONUP, WM_KEYDOWN, WM_KEYUP = 0x200, 0x201, 0x202, 0x100, 0x101
KEYS = {'up': (0x26, 0x48, True), 'down': (0x28, 0x50, True), 'left': (0x25, 0x4b, True), 'right': (0x27, 0x4d, True),
        'enter': (0x0d, 0x1c, False), 'esc': (0x1b, 0x01, False), 'space': (0x20, 0x39, False), 'tab': (0x09, 0x0f, False),
        'backspace': (0x08, 0x0e, False), 'shift': (0x10, 0x2a, False),
        'f8': (0x77, 0x42, False)}
SCANS = dict(zip('qwertyuiop', range(0x10, 0x1a)), **dict(zip('asdfghjkl', range(0x1e, 0x27))),
             **dict(zip('zxcvbnm', range(0x2c, 0x33))))


def script_card(name):
    for l in open(os.path.join(SCRIPTS, name + '.txt')):
        w = l.split('#')[0].split()
        if w[:1] == ['card']:
            return w[1]
    return None


def script_tolerance(name):
    for l in open(os.path.join(SCRIPTS, name + '.txt')):
        w = l.split('#')[0].split()
        if w[:1] == ['tolerance']:
            return int(w[1])
    return 0


def pixels_differ(a, b):
    """how many pixels of two 24-bit BMPs differ (all of them if the sizes do)"""
    try:
        x, y = open(a, 'rb').read(), open(b, 'rb').read()
    except OSError:
        return 1 << 30
    if x[18:26] != y[18:26]:
        return 1 << 30
    off = struct.unpack_from('<I', x, 10)[0]
    return sum(1 for i in range(off, len(x) - 2, 3) if x[i:i + 3] != y[i:i + 3])


def shot_matches(name, r, frame, want):
    """a run's shot at frame matches the baseline: the same hash, or within the script's tolerance"""
    got = r['shots'].get(int(frame))
    if got == want:
        return True
    tol = script_tolerance(name)
    return bool(tol and got and pixels_differ(os.path.join(r['dir'], 'shot_%d.bmp' % int(frame)),
                                              os.path.join(OUT, name + '_oracle', 'shot_%d.bmp' % int(frame))) <= tol)


def is_exclusive(name):
    return any(l.split('#')[0].split() == ['exclusive'] for l in open(os.path.join(SCRIPTS, name + '.txt')))


def script_goodies(name):
    """a script's `goodies N` line: every goodie raised to state N (test_harness.cpp BEA_GOODIES)"""
    for l in open(os.path.join(SCRIPTS, name + '.txt')):
        w = l.split('#')[0].split()
        if w[:1] == ['goodies']:
            return w[1]
    return None


def script_env(name):
    """a script's `env NAME VALUE` lines: harness switches for its runs (e.g. env BEA_MPMAPS 1)"""
    out = {}
    for l in open(os.path.join(SCRIPTS, name + '.txt')):
        w = l.split('#')[0].split()
        if w[:1] == ['env'] and len(w) == 3:
            out[w[1]] = w[2]
    return out


def script_level(name):
    """the level a script starts (its `level N` line), or None for the front end"""
    for l in open(os.path.join(SCRIPTS, name + '.txt')):
        w = l.split('#')[0].split()
        if w[:1] == ['level']:
            return w[1]
    return None


def key_code(k):
    k = k.lower()
    if k in KEYS:
        return KEYS[k]
    return ord(k.upper()), SCANS[k], False


def compile_script(name):
    """(rec text, shot frames, end frame) of tools/menu_scripts/<name>.txt"""
    frame, lines, shots, end = 1, [], [], None
    recording = None
    # in a level, input lines are phase 1 (`N`, frames from the start of play) after a `P` mark
    tag = 'N' if script_level(name) else 'M'
    for raw in open(os.path.join(SCRIPTS, name + '.txt')):
        w = raw.split('#')[0].split()
        if not w:
            continue
        op = w[0]
        if op == 'wait':
            frame += int(w[1])
        elif op in ('click', 'move'):
            lp = (int(w[2]) << 16) | int(w[1])
            lines.append('M %d %x 0 %x' % (frame, WM_MOUSEMOVE, lp))
            if op == 'click':
                lines.append('M %d %x 1 %x' % (frame + 2, WM_LBUTTONDOWN, lp))
                lines.append('M %d %x 0 %x' % (frame + 4, WM_LBUTTONUP, lp))
                frame += 4
        elif op in ('key', 'hold'):
            vk, scan, ext = key_code(w[1])
            n = 3 if op == 'key' else int(w[2])
            lp = 1 | (scan << 16) | (0x1000000 if ext else 0)
            lines.append('%s %d %x %x %x' % (tag, frame, WM_KEYDOWN, vk, lp))
            for f in range(frame + 30, frame + n, 3):       # auto-repeat after the usual delay
                lines.append('%s %d %x %x %x' % (tag, f, WM_KEYDOWN, vk, lp | 0x40000000))
            lines.append('%s %d %x %x %x' % (tag, frame + n, WM_KEYUP, vk, lp | 0xc0000000))
            frame += n
        elif op == 'resize':
            # test_harness.cpp REPLAY_RESIZE: done by the harness, not posted to the game
            lines.append('%s %d %x %x %x' % (tag, frame, 0x8bea, int(w[1]), int(w[2])))
        elif op == 'shot':
            shots.append(frame)
        elif op == 'end':
            end = int(w[1]) if len(w) > 1 else frame
        elif op == 'recording':
            # a person's recording (record_level.ps1 -Level menu) as the tour's input; its
            # frames count from launch, so `shotat N` / `end N` name launch frames too
            recording = w[1] if os.path.isabs(w[1]) else os.path.join(SCRATCH, w[1])
        elif op == 'shotat':
            shots.extend(int(x) for x in w[1:])
        elif op in ('exclusive', 'level', 'tolerance', 'card', 'goodies', 'env'):
            pass
        else:
            sys.exit('%s: unknown line %r' % (name, raw))
    if recording:
        return open(recording, errors='replace').read(), sorted(set(shots)), end or max(shots) + 60
    return ('P 0\n' if tag == 'N' else '') + '\n'.join(lines) + '\n', sorted(set(shots)), end or frame + 60


SAVES = os.path.join(GAME, 'savegames')
SAVES_KEEP = os.path.join(SCRATCH, 'user_profile', 'savegames_backup')


def restore_saves():
    """The person's saved games (a copy kept in SAVES_KEEP) are what every run
    starts from: the Load Game screen lists them, and a script that saves must
    not leave its save behind for the next run or the person."""
    if not os.path.isdir(SAVES_KEEP):
        return
    os.makedirs(SAVES, exist_ok=True)
    keep = set(os.listdir(SAVES_KEEP))
    for f in os.listdir(SAVES):
        if f not in keep:
            os.remove(os.path.join(SAVES, f))
    for f in keep:
        src, dst = os.path.join(SAVES_KEEP, f), os.path.join(SAVES, f)
        if not os.path.exists(dst) or open(src, 'rb').read() != open(dst, 'rb').read():
            shutil.copy2(src, dst)


def game_args(level):
    """the game's switches; BEA_WITH_SOUND / BEA_WITH_FMV turn sound and videos on (captures only)"""
    a = '-forcewindowed' + ('' if os.environ.get('BEA_WITH_FMV') else ' -skipfmv') + ('' if os.environ.get('BEA_WITH_SOUND') else ' -nosound')
    # BEA_EXTRA_ARGS (the caller's environment): more switches, e.g. -testeur (the dev byte 0x662f3e)
    return a + (' -level ' + level if level else '') + (' ' + os.environ['BEA_EXTRA_ARGS'] if os.environ.get('BEA_EXTRA_ARGS') else '')


def run(name, enabled, hooks, inst, tag, end=None):
    """Run a script; returns {'shots': {frame: hash}, 'crash': bool, 'log': path}.
    end: stop at that frame instead (only the shots before it are taken)."""
    level = script_level(name)
    if not level:              # a level started by `-level N` neither reads nor writes saved games
        restore_saves()
    rec, shots, send = compile_script(name)
    if end:
        shots = [f for f in shots if f < end]
    else:
        end = send
    d = os.path.join(OUT, tag)
    os.makedirs(d, exist_ok=True)
    for f in os.listdir(d):
        if f.endswith('.bmp'):
            os.remove(os.path.join(d, f))
    rp = os.path.join(d, name + '.rec')
    open(rp, 'w').write(rec)
    on = set(enabled)
    with open(os.path.join(GAME, 'bea_hook_disable%d.txt' % inst), 'w') as f:
        f.writelines('%08x\n' % h for h in hooks if h not in on)
    log = os.path.join(d, 'hook.log')
    env = dict(os.environ, BEA_REPLAY=rp, BEA_SHOTFRAMES=','.join(map(str, shots)), BEA_ENDFRAME=str(end),
               BEA_SHOTFILE=os.path.join(d, 'shot.bmp').replace('/', '\\'))
    if level:
        env['BEA_SHOTPLAY'] = '1'
    if script_card(name):
        env['BEA_FAKECARD'] = script_card(name)
    if script_goodies(name):
        env['BEA_GOODIES'] = script_goodies(name)
    env.update(script_env(name))
    # a generous real-time cap: the original runs the front end at a few hundred frames a second
    secs = 30 + end // 30 + (60 if level else 0)
    subprocess.run(['powershell', '-ExecutionPolicy', 'Bypass', '-File', os.path.join(ROOT, 'tools', 'smoke_test.ps1'),
                    '-Seconds', str(secs), '-Instance', str(inst), '-TimeScale', '1', '-FixedStep', STEP,
                    '-SaveLog', log, '-GameDir', GAME, '-GameArgs', game_args(level)],
                   cwd=ROOT, env=env, stdout=open(os.path.join(d, 'smoke.out'), 'w'), stderr=subprocess.STDOUT)
    if not level:
        restore_saves()
    text = open(log, errors='replace').read() if os.path.exists(log) else ''
    got = {int(m.group(1)): m.group(2) for m in re.finditer(r'shot: clock \S+ frame (\d+) \S+ fmt \d+ hash (\w+)', text)}
    # the log's frame is the count after the shot's frame; key by the requested frames, in order
    hashes = dict(zip(shots, [got[k] for k in sorted(got)]))
    crash = 'CRASH code' in text or bool(re.search(r'EXIT code=[1-9]', text)) or 'endframe:' not in text
    return {'shots': hashes, 'crash': crash, 'log': log, 'dir': d, 'want': shots}


def baseline_path():
    return os.path.join(SCRATCH, 'menu_baseline.json')


def load_baseline():
    try:
        return json.load(open(baseline_path()))
    except (OSError, ValueError):
        return {}


def all_hooks():
    # every hook in the source tree (as gated_batch sees them); a saved list goes stale as ports are
    # added, and a port missing from it stays on in "original" runs (2026-10-28: the day's new 0x540010
    # crashed the Load Game tours in the original too)
    import direct_batch
    return [h for h in sorted(direct_batch.hooked_addrs()) if h not in bb.KEEP]


def to_png(bmp):
    d = open(bmp, 'rb').read()
    off, w, h = struct.unpack_from('<I', d, 10)[0], struct.unpack_from('<i', d, 18)[0], struct.unpack_from('<i', d, 22)[0]
    row = (w * 3 + 3) & ~3
    raw = bytearray()
    for y in range(abs(h) - 1, -1, -1) if h > 0 else range(abs(h)):
        r = d[off + y * row: off + y * row + 3 * w]
        raw.append(0)
        for x in range(w):
            raw += bytes((r[3 * x + 2], r[3 * x + 1], r[3 * x]))
    def chunk(t, b):
        return struct.pack('>I', len(b)) + t + b + struct.pack('>I', zlib.crc32(t + b) & 0xffffffff)
    png = b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', w, abs(h), 8, 2, 0, 0, 0)) \
        + chunk(b'IDAT', zlib.compress(bytes(raw), 6)) + chunk(b'IEND', b'')
    out = bmp[:-4] + '.png'
    open(out, 'wb').write(png)
    return out


def main():
    cmd, names = sys.argv[1], sys.argv[2:]
    if cmd == 'png':
        for n in names:
            print(to_png(n))
        return
    hooks = all_hooks()
    base = load_baseline()
    if cmd == 'baseline':
        # two runs of the original must agree before their shots become the oracle
        for n in names:
            import threading
            res = {}
            ths = [threading.Thread(target=lambda i=i: res.__setitem__(i, run(n, [], hooks, i, '%s_orig%d' % (n, i)))) for i in (1, 2)]
            for t in ths:
                t.start()
                if is_exclusive(n):
                    t.join()
            for t in ths: t.join()
            a, b = res[1], res[2]
            print('%s: original runs %s / %s, %d shots' % (n, 'crash' if a['crash'] else 'ok', 'crash' if b['crash'] else 'ok', len(a['shots'])))
            tol = script_tolerance(n)
            same = [f for f in a['want'] if a['shots'].get(f) and (a['shots'].get(f) == b['shots'].get(f) or tol and
                    pixels_differ(os.path.join(a['dir'], 'shot_%d.bmp' % f), os.path.join(b['dir'], 'shot_%d.bmp' % f)) <= tol)]
            for f in a['want']:
                print('  frame %5d  %s %s %s' % (f, a['shots'].get(f), b['shots'].get(f), '' if f in same else 'DIFFER'))
            if a['crash'] or b['crash'] or len(same) != len(a['want']):
                print('  not stored: the original is not repeatable here')
                continue
            base[n] = {str(f): a['shots'][f] for f in same}
            if tol:     # the original's pictures, for the pixel count
                od = os.path.join(OUT, n + '_oracle')
                os.makedirs(od, exist_ok=True)
                for f in same:
                    shutil.copy2(os.path.join(a['dir'], 'shot_%d.bmp' % f), od)
            json.dump(base, open(baseline_path(), 'w'), indent=1)
            for f in a['want']:
                to_png(os.path.join(a['dir'], 'shot_%d.bmp' % f))
            print('  stored; PNGs in %s' % a['dir'])
    elif cmd == 'look':
        # writing a script: run up to two in the original at once and make PNGs of their shots
        import threading
        res = {}
        ths = [threading.Thread(target=lambda i=i, n=n: res.__setitem__(n, run(n, [], hooks, i, '%s_look' % n)))
               for i, n in enumerate(names[:2], 1)]
        for t in ths: t.start()
        for t in ths: t.join()
        for n, r in res.items():
            print('%s: %s, shots %s' % (n, 'crash' if r['crash'] else 'ok', ' '.join(map(str, sorted(r['shots'])))))
            for f in r['want']:
                b = os.path.join(r['dir'], 'shot_%d.bmp' % f)
                if os.path.exists(b):
                    to_png(b)
            print('  ' + r['dir'])
    elif cmd == 'bisect':
        # prefix search over the hook list (as behaviour_bisect.search): the
        # smallest k such that the first k hooks on change the shot at --frame
        # (default: the first one the full port gets wrong); runs end there
        import argparse, threading
        ap = argparse.ArgumentParser()
        ap.add_argument('name')
        ap.add_argument('--frame', type=int)
        ap.add_argument('--skip', default='', help='hooks kept off (comma-separated hex: culprits found already)')
        a = ap.parse_args(names)
        want = base[a.name]
        skip = {int(x, 16) for x in a.skip.split(',') if x}
        order = [h for h in hooks if h not in skip]
        frame = a.frame
        if not frame:
            r = run(a.name, order, hooks, 1, '%s_bis' % a.name)
            bad = sorted(int(f) for f in want if not shot_matches(a.name, r, f, want[f]))
            if not bad:
                print('RESULT: all shots match with %d hooks on' % len(order)); return
            frame = bad[0]
        key = str(frame)
        print('%s: searching %d hooks for the change at frame %d' % (a.name, len(order), frame), flush=True)

        def ok(k, inst):
            r = run(a.name, order[:k], hooks, inst, '%s_bis%d' % (a.name, inst), end=frame + 1)
            return shot_matches(a.name, r, frame, want[key])
        lo, hi = 0, len(order)
        par = not is_exclusive(a.name)
        while hi - lo > 1:
            if par:
                k1, k2 = lo + max(1, (hi - lo) // 3), lo + max(2, 2 * (hi - lo) // 3)
                ks = [k for k in (k1, k2) if lo < k < hi]
            else:
                ks = [lo + (hi - lo) // 2]
            res = {}
            ths = [threading.Thread(target=lambda k=k, i=i: res.__setitem__(k, ok(k, i))) for i, k in enumerate(ks, 1)]
            for t in ths: t.start()
            for t in ths: t.join()
            print('  ' + '  '.join('first %d -> %s' % (k, 'same' if res[k] else 'DIFFERS') for k in ks), flush=True)
            for k in ks:
                if not res[k]:
                    hi = k; break
                lo = k
        c = order[hi - 1]
        print('culprit: %08x (index %d)' % (c, hi - 1), flush=True)
        r = run(a.name, [c], hooks, 1, '%s_bis1' % a.name, end=frame + 1)
        print('  %08x alone -> %s' % (c, 'same' if shot_matches(a.name, r, frame, want[key]) else 'DIFFERS'))
    elif cmd == 'check':
        bad = 0
        for n in names or sorted(base):
            r = run(n, hooks, hooks, 1, '%s_port' % n)
            want = base[n]
            diff = [f for f in want if not shot_matches(n, r, f, want[f])]
            bad += bool(diff) or r['crash']
            print('%s: %s%s' % (n, 'CRASH ' if r['crash'] else '', 'differs at frames %s' % ','.join(diff) if diff else 'all %d shots match' % len(want)))
            for f in diff:
                b = os.path.join(r['dir'], 'shot_%s.bmp' % f)
                if os.path.exists(b):
                    to_png(b)
        # what the tours add to the tests: ported functions they ran that no
        # level test runs (SCRATCH/never_run.txt, from the coverage survey)
        try:
            never = {int(l.split()[0], 16) for l in open(os.path.join(SCRATCH, 'never_run.txt')) if l.strip()}
            ran = set()
            for n in names or sorted(base):
                for m in re.finditer(r'called\+:([0-9a-f ]+)', open(os.path.join(OUT, '%s_port' % n, 'hook.log'), errors='replace').read()):
                    ran.update(int(x, 16) for x in m.group(1).split())
            print('coverage: the tours ran %d ports, %d of the %d no level test runs' % (len(ran), len(ran & never), len(never)))
        except OSError:
            pass
        print('RESULT: %d differ' % bad)
    elif cmd == 'coverage':
        # which game functions each tour runs (level_coverage.py's map for the tours):
        # every port on, BEA_COVERAGE thunks on the rest; "called+" (ports) and "ucalled+"
        # (the rest) from the log.  Writes SCRATCH/tour_coverage.json for full_gate.py --quick
        # (2026-11-03); universe: the functions the run counted
        import direct_batch, coverage_unported
        hooked = direct_batch.hooked_addrs()
        universe = sorted(x for x in coverage_unported.functions() if x not in hooked)
        lst = os.path.join(SCRATCH, 'tour_coverage_universe.txt')
        open(lst, 'w').write(''.join('%08x\n' % x for x in universe))
        os.environ['BEA_COVERAGE'] = lst.replace('/', '\\')
        per = {}
        for n in names or sorted(base):
            if n.startswith('x_'):
                continue
            r = run(n, hooks, hooks, 1, '%s_cov' % n)
            s = set()
            for m in re.finditer(r'u?called\+:([0-9a-f ]+)', open(r['log'], errors='replace').read()):
                s.update(m.group(1).split())
            per[n] = sorted(s)
            print('  tour %-16s %4d functions ran%s' % (n, len(s), ' (CRASH)' if r['crash'] else ''), flush=True)
        json.dump({'universe': ['%08x' % x for x in sorted(set(universe) | set(hooks))], 'tours': per},
                  open(os.path.join(SCRATCH, 'tour_coverage.json'), 'w'), indent=1)
        union = set().union(*map(set, per.values())) if per else set()
        print('%d functions run in some tour' % len(union))


if __name__ == '__main__':
    main()
