"""Find the port behind one differing tour shot, under the current environment (e.g. movies on):
four runs at a time, each with all ports on except a quarter of the candidates (the original
for those), stopped just after the frame. A run whose shot matches WANT has the culprit
among its originals.

    python -I tools/tour_shot_bisect.py TOUR FRAME WANT_HASH [CANDIDATES_FILE]   (default: every hook)
"""
import os, shutil, sys, threading
os.environ.setdefault('BEA_SCRATCH', os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'testdata'))
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import menu_test as mt  # noqa: E402

name, frame, want = sys.argv[1], int(sys.argv[2]), sys.argv[3]
shutil.copy(os.path.join(ROOT, 'build', 'zlib.dll'), os.path.join(mt.GAME, 'zlib.dll'))
hooks = mt.all_hooks()
BASE = os.environ.get('SB_BASE')     # the all-ports hash at FRAME
cand = [int(x, 16) for x in open(sys.argv[4]).read().split()] if len(sys.argv) > 4 else list(hooks)
step = 0
while len(cand) > 1:
    step += 1
    parts = [cand[i::4] for i in range(4)] if len(cand) >= 4 else [[c] for c in cand]
    out = {}

    def one(k, off):
        r = mt.run(name, [h for h in hooks if h not in set(off)], hooks, k + 1, 'sb_%s_%d' % (name, k), end=frame + 5)
        out[k] = r
    ts = [threading.Thread(target=one, args=(k, p)) for k, p in enumerate(parts)]
    for t in ts:
        t.start()
    for t in ts:
        t.join()
    got = {k: out[k]['shots'].get(frame) for k in out}
    print('step %d: %d candidates; %s' % (step, len(cand), ', '.join('%d off -> %s%s' % (
        len(parts[k]), got[k], ' CRASH' if out[k]['crash'] else '') for k in sorted(got))), flush=True)
    hit = [k for k in got if got[k] == want and not out[k]['crash']]
    if not hit and BASE:     # no quarter restores it: follow the one quarter that changes the picture
        hit = [k for k in got if got[k] != BASE and not out[k]['crash']]
    if len(hit) != 1:
        print('no single quarter restores the shot (%d do): several ports, or noise; stopping' % len(hit))
        print('candidates left: ' + ' '.join('%08x' % c for c in cand))
        sys.exit(1)
    cand = parts[hit[0]]
print('culprit: %08x' % cand[0])
r = mt.run(name, [h for h in hooks if h != cand[0]], hooks, 1, 'sb_%s_alone' % name, end=frame + 5)
print('%08x alone off -> %s (want %s)' % (cand[0], r['shots'].get(frame), want))
