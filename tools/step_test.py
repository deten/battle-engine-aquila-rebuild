"""Level tests at another fixed step (frame time) than the recordings' 1/60 s: the original
(BEA_HOOKS_OFF) and the ports, once each, two levels at a time (four instances) in
the second game folder (BEA_GAMEDIR, default game2/). A replay then plays out differently from its recording, but the
original and the ports must still play out alike. Prints outcome@clock for both.

    python -I step_test.py STEP LEVEL [LEVEL...]      (STEP in seconds, e.g. 0.033333)
"""
import os, shutil, sys, threading
os.environ.setdefault('BEA_GAMEDIR', os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'game2'))
os.environ.setdefault('BEA_SCRATCH', os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'testdata'))
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb  # noqa: E402
import menu_test as mt  # noqa: E402

step = sys.argv[1]
bb.WITH_CLOCK = True
bb.TIME_ARGS = [step if x == '0.016667' else x for x in bb.TIME_ARGS]
shutil.copy(os.path.join(ROOT, 'build', 'zlib.dll'), os.path.join(bb.GAME, 'zlib.dll'))
hooks = mt.all_hooks()
levels = sys.argv[2:]
lock = threading.Lock()


def one(level, which, inst, out):
    env_off = which == 'orig'
    # BEA_HOOKS_OFF is read from the environment at launch: set per thread under the lock
    with lock:
        if env_off:
            os.environ['BEA_HOOKS_OFF'] = '1'
        else:
            os.environ.pop('BEA_HOOKS_OFF', None)
        t = threading.Thread(target=lambda: out.__setitem__((level, which), bb.run(level, hooks, hooks, inst, 1500, 'step_%s_%s' % (level, which))))
        t.start()
        import time
        time.sleep(3)          # the launch has copied the environment
    return t


for i in range(0, len(levels), 2):
    out = {}
    ts = []
    for j, level in enumerate(levels[i:i + 2]):
        ts.append(one(level, 'orig', 2 * j + 1, out))
        ts.append(one(level, 'port', 2 * j + 2, out))
    for t in ts:
        t.join()
    for level in levels[i:i + 2]:
        o, p = out[(level, 'orig')], out[(level, 'port')]
        print('%s step %s: %s  original %s  ports %s' % ('SAME  ' if o == p else 'DIFFER', step, level, o, p), flush=True)
