"""Menu tours with movies on (BEA_WITH_FMV=1, plus whatever BEA_* is in the environment):
the original twice and the ports twice, four instances at once (exclusive scripts one at a
time), in the main game folder. Prints, per tour, crashes and the shots that differ.

    python -I fmv_test.py NAME [NAME...]
"""
import os, shutil, sys, threading
os.environ['BEA_WITH_FMV'] = '1'
os.environ.setdefault('BEA_SCRATCH', os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'testdata'))
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import menu_test as mt  # noqa: E402

shutil.copy(os.path.join(ROOT, 'build', 'zlib.dll'), os.path.join(mt.GAME, 'zlib.dll'))
hooks = mt.all_hooks()
for name in sys.argv[1:]:
    runs = [('orig1', [], 1), ('orig2', [], 2), ('port1', hooks, 3), ('port2', hooks, 4)]
    out = {}

    def one(tag, en, inst):
        out[tag] = mt.run(name, en, hooks, inst, 'fmv_%s_%s' % (name, tag))
    if mt.is_exclusive(name):
        for r in runs:
            one(*r)
    else:
        ts = [threading.Thread(target=one, args=r) for r in runs]
        for t in ts:
            t.start()
        for t in ts:
            t.join()
    ref = out['orig1']['shots']
    line = []
    for tag in ('orig1', 'orig2', 'port1', 'port2'):
        r = out[tag]
        diff = [f for f in r['want'] if r['shots'].get(f) != ref.get(f)]
        line.append('%s %s%s' % (tag, 'CRASH ' if r['crash'] else '', ('differs at ' + ','.join(map(str, diff))) if diff else 'same'))
    print('%s: %d shots; %s' % (name, len(ref), '; '.join(line)), flush=True)
