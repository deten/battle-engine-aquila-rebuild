"""Bisect an intermittent failure: every probe runs the level REPEAT times
(two instances at a time) and fails if any run is not ALIVE with frames.

  python -I tools/flaky_bisect.py --suspects FILE --level 200 [--repeat 4] [--seconds 45]
  python -I tools/flaky_bisect.py --rate --level 200 [--disable FILE] [--repeat 6]

For crashes/hangs that tools/bisect.py cannot reproduce on demand (NOTES
A1-13, 2026-10-19: 0x446150 + 0x448930 hung level 200 in half of 90 s runs).
Install the build to test first (tools/build.sh, tools/install_hook.sh).

Ports outside the probed subset are disabled through bea_hook_disable<i>.txt.
"""
import argparse, os, re, subprocess, sys
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, 'Battle Engine Aquila')


def one(inst, disabled, level, seconds):
    with open(os.path.join(GAME, 'bea_hook_disable%d.txt' % inst), 'w') as f:
        f.write(''.join('%08x\n' % x for x in disabled))
    args = '-forcewindowed -skipfmv' + ('' if level == 'frontend' else ' -level %s' % level)
    try:
        r = subprocess.run(['powershell', '-ExecutionPolicy', 'Bypass', '-File', os.path.join(ROOT, 'tools', 'smoke_test.ps1'),
                            '-Seconds', str(seconds), '-Instance', str(inst), '-TimeScale', '4', '-GameArgs', args],
                           capture_output=True, text=True, timeout=seconds + 120)
    except subprocess.TimeoutExpired:
        return 'STALL'
    log = open(os.path.join(GAME, 'bea_hook%d.log' % inst), errors='replace').read()
    deltas = [int(x) for x in re.findall(r'heartbeat: frames=\d+ \(\+(\d+) in', log)]
    if 'ALIVE' in r.stdout and deltas and deltas[-1] > 0:
        return 'ok'
    hang = re.search(r'HANG eip=([0-9a-f]+)', log)
    m = re.search(r'EXITED after \d+s with code (-?\d+)', r.stdout)
    if m and os.environ.get('BEA_AUTOPILOT') and int(m.group(1)) in (0, 100) and 'CRASH code' not in log:
        return 'ok'     # the autopilot ended the mission and the game quit
    return 'HANG@' + hang.group(1) if hang else ('EXIT' if 'EXITED' in r.stdout else 'FAIL')


def probe(disabled, level, repeat, seconds):
    out = []
    with ThreadPoolExecutor(max_workers=2) as ex:
        for i in range(0, repeat, 2):
            futs = [ex.submit(one, k + 1, disabled, level, seconds) for k in range(min(2, repeat - i))]
            out += [f.result() for f in futs]
            if any(x != 'ok' for x in out):
                break                     # one failure is enough
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--suspects')
    ap.add_argument('--disable')
    ap.add_argument('--level', default='200')
    ap.add_argument('--repeat', type=int, default=4)
    ap.add_argument('--seconds', type=int, default=45)
    ap.add_argument('--rate', action='store_true')
    a = ap.parse_args()
    if a.rate:
        dis = [int(l.split()[0], 16) for l in open(a.disable) if l.strip()] if a.disable else []
        res = []
        with ThreadPoolExecutor(max_workers=2) as ex:
            for i in range(0, a.repeat, 2):
                res += [f.result() for f in [ex.submit(one, k + 1, dis, a.level, a.seconds) for k in range(min(2, a.repeat - i))]]
        print('rate: %s' % res, flush=True)
        return
    sus = [int(l.split()[0], 16) for l in open(a.suspects) if l.strip()]
    cur = list(sus)
    while len(cur) > 1:
        half_a, half_b = cur[:len(cur) // 2], cur[len(cur) // 2:]
        ra = probe(sorted(set(sus) - set(half_a)), a.level, a.repeat, a.seconds)
        print('  %d enabled (A): %s' % (len(half_a), ra), flush=True)
        if any(x != 'ok' for x in ra):
            cur = half_a
            continue
        rb = probe(sorted(set(sus) - set(half_b)), a.level, a.repeat, a.seconds)
        print('  %d enabled (B): %s' % (len(half_b), rb), flush=True)
        if any(x != 'ok' for x in rb):
            cur = half_b
            continue
        print('neither half fails alone in %d runs: interaction or missed; stopping with %d suspects' % (a.repeat, len(cur)), flush=True)
        break
    for i in (1, 2):
        try:
            os.remove(os.path.join(GAME, 'bea_hook_disable%d.txt' % i))
        except OSError:
            pass
    print('suspects left: ' + ' '.join('%08x' % x for x in cur), flush=True)


if __name__ == '__main__':
    main()
