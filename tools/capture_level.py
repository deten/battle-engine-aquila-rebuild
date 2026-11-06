"""Record calls of the original game for tools/offline_check.py (BEA_CAPTURE,
src/bea/platform/capture.cpp): play a level (or a recorded replay) with every
port off and every registered function's chosen calls captured.

    python -I tools/capture_level.py LEVEL [--endclock 60] [--at 1,6,30,150,750,3750,18750] [--only FILE] [--extra FILE] [--inst 1]

The captures go to SCRATCH/captures/<LEVEL>/ (captures.bin, pages.bin).
"""
import argparse, os, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('level')
    ap.add_argument('--endclock', help='stop at this game clock (default: the level\'s usual end)')
    ap.add_argument('--at', help='which calls of each function, counted from the start of play')
    ap.add_argument('--only', help='file of hex addresses: capture only these')
    ap.add_argument('--extra', help='file of hex addresses of functions without a port to capture as well')
    ap.add_argument('--inst', type=int, default=1)
    ap.add_argument('--name', help='the capture directory (default: the level)')
    ap.add_argument('--secs', type=int, default=1800)
    a = ap.parse_args()
    out = os.path.join(bb.SCRATCH, 'captures', a.name or a.level)
    os.makedirs(out, exist_ok=True)
    os.environ['BEA_CAPTURE'] = out.replace('/', '\\')
    if a.at:
        os.environ['BEA_CAPTURE_AT'] = a.at
    if a.only:
        os.environ['BEA_CAPTURE_SET'] = os.path.abspath(a.only)
    if a.extra:
        os.environ['BEA_CAPTURE_EXTRA'] = os.path.abspath(a.extra)
    if a.endclock:
        bb.TIME_ARGS = list(bb.TIME_ARGS)
        bb.TIME_ARGS[bb.TIME_ARGS.index('-EndClock') + 1] = a.endclock
        rp = bb.replays().get(a.level)
        if rp and 'endclock' in rp:
            import json
            p = os.path.join(bb.SCRATCH, 'replays.json')
            allr = json.load(open(p))
            r = dict(rp); r.pop('endclock')
            allr['_capture_' + a.level] = r      # (one per level: captures run in parallel)
            json.dump(allr, open(p, 'w'), indent=1)
            a.level = '_capture_' + a.level
    bb.WITH_CLOCK = True
    hooks = bb.all_hooks()
    tag = 'capture_%s' % os.path.basename(out)
    got = bb.run(a.level, [], hooks, a.inst, a.secs, tag)
    log = os.path.join(bb.SCRATCH, 'bbis_%s.log' % tag)
    lines = [l.rstrip() for l in open(log, errors='replace') if 'capture:' in l or 'CRASH' in l]
    print('\n'.join(lines[-6:]))
    print('outcome %s; captures in %s (%d MB)' % (got, out, sum(os.path.getsize(os.path.join(out, f)) for f in os.listdir(out)) >> 20))


if __name__ == '__main__':
    main()
