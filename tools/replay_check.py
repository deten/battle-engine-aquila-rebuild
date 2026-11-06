"""Does a recorded playthrough replay the way it was played?

Replays a recording (a SCRATCH/replays.json name) on the original game (every
port off) and compares the replay's checkpoints with the recording's: the
`inputsync` lines test_harness.cpp logs every BEA_INPUTSYNC frames while
recording and replaying (input-read counts, the player's position and health
and, since 2026-10-29, the game thread's rand() seed).  Prints the first
checkpoint that differs and what changed in it.

    python -I tools/replay_check.py 100w [--inst 5] [--endclock 300]

The recording's log is the recording with .log for .rec (record_level.ps1
copies it there).  The level-100 win of 2026-10-29 replayed exactly until
249 s, then its player stopped 3 frames early against something the
checkpoints did not show; the rand() seed is there to catch the world parting
before the player does.
"""
import argparse, json, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb

SYNC = re.compile(r'inputsync: play frame (\d+) device0 (\d+) device1 (\d+) cursor (\d+) clock (\S+)'
                  r' be (\S+ \S+ \S+) hp (\S+)(?: rnd (\w+))?')
FIELDS = ('device0', 'device1', 'cursor', 'clock', 'be', 'hp', 'rnd')


def checkpoints(path):
    out = {}
    for line in open(path, errors='replace'):
        m = SYNC.search(line)
        if m:
            out[int(m.group(1))] = dict(zip(FIELDS, m.groups()[1:]))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('name', help='a SCRATCH/replays.json entry')
    ap.add_argument('--inst', type=int, default=5)
    ap.add_argument('--endclock', help='stop the replay at this game clock (default: the entry\'s)')
    ap.add_argument('--secs', type=int, default=900)
    a = ap.parse_args()
    rp = bb.replays().get(a.name)
    if not rp:
        sys.exit('%s: not in replays.json' % a.name)
    rec = checkpoints(re.sub(r'\.rec$', '.log', rp['file']))
    if len(rec) < 2:
        sys.exit('the recording\'s log has no checkpoints')
    frames = sorted(rec)
    os.environ['BEA_INPUTSYNC'] = str(frames[1] - frames[0])
    if a.endclock:
        bb.TIME_ARGS = list(bb.TIME_ARGS)
        bb.TIME_ARGS[bb.TIME_ARGS.index('-EndClock') + 1] = a.endclock
        rp = dict(rp)
        rp.pop('endclock', None)
        p = os.path.join(bb.SCRATCH, 'replays.json')
        allr = json.load(open(p))
        allr['_check'] = rp
        json.dump(allr, open(p, 'w'), indent=1)
        name = '_check'
    else:
        name = a.name
    bb.WITH_CLOCK = True
    tag = 'rcheck_%s' % a.name
    got = bb.run(name, [], bb.all_hooks(), a.inst, a.secs, tag)
    rep = checkpoints(os.path.join(bb.SCRATCH, 'bbis_%s.log' % tag))
    print('replay outcome: %s; %d recorded checkpoints, %d replayed' % (got, len(rec), len(rep)))
    for f in frames:
        if f not in rep:
            print('replay ended before frame %d (recording goes on to %d)' % (f, frames[-1]))
            return
        r, p = rec[f], rep[f]
        diff = [k for k in FIELDS if r[k] is not None and p[k] is not None and r[k] != p[k]]
        if diff:
            print('first difference at play frame %d (clock %s): %s' % (f, r['clock'], ', '.join(diff)))
            for g in [x for x in frames if x in rep and abs(x - f) <= 3 * (frames[1] - frames[0])]:
                print('  %6d rec  %s' % (g, ' '.join('%s' % rec[g][k] for k in FIELDS)))
                print('  %6d rep  %s' % (g, ' '.join('%s' % rep[g][k] for k in FIELDS)))
            return
    print('every checkpoint matches (%d frames)' % frames[-1])


if __name__ == '__main__':
    main()
