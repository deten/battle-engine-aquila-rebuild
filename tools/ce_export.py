"""Recorded playthroughs -> onslaught-ce tapes and reference probes from the original game
(2026-11-06).

Each recording in testdata (replays.json) is replayed in the original game (all ports off)
under the fixed clock with BEA_SYNCJOBS=1 and BEA_FPSCLOCK=1, so the original repeats
itself exactly, and the harness writes:
  <out>/<test>.tape    the input as an onslaught-ce tape (BEA_TAPE_OUT; K/W/M lines by Present)
  <out>/<test>.probes  that port's state probes every 50 Presents (BEA_PROBES; P lines)
A port run of the tape with its probes on (BEA_PORT_TAPE, BEA_PORT_PROBES, the present clock
at the same step) can then be compared with tools/ce_probe_compare.py.

    python -I tools/ce_export.py OUTDIR [TEST ...]      (default: every recorded test)
"""
import os, shutil, sys, threading

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb  # noqa: E402

out = os.path.abspath(sys.argv[1])
os.makedirs(out, exist_ok=True)
tests = sys.argv[2:] or sorted(bb.replays())
bb.WITH_CLOCK = True
shutil.copy(os.path.join(ROOT, 'build', 'zlib.dll'), os.path.join(bb.GAME, 'zlib.dll'))
lock = threading.Lock()
results = {}


def one(test, inst):
    # the harness reads these at launch: set them for this run only, under the lock
    with lock:
        env = dict(os.environ, BEA_HOOKS_OFF='1', BEA_SYNCJOBS='1', BEA_FPSCLOCK='1',
                   BEA_TAPE_OUT=os.path.join(out, test + '.tape'), BEA_PROBES=os.path.join(out, test + '.probes'))
        saved = dict(os.environ)
        os.environ.clear()
        os.environ.update(env)
        t = threading.Thread(target=lambda: results.__setitem__(test, bb.run(test, [], [], inst, 1500, 'ce_' + test)))
        t.start()
        import time
        time.sleep(3)           # the launch has copied the environment
        os.environ.clear()
        os.environ.update(saved)
    return t


pending = list(tests)
while pending:
    n = int(os.environ.get('CE_EXPORT_INSTANCES', '2'))      # game instances at once (each its own number)
    batch, pending = pending[:n], pending[n:]
    ts = [one(t, k + 1) for k, t in enumerate(batch)]
    for t in ts:
        t.join()
    for t in batch:
        print('%-8s %s' % (t, results.get(t)), flush=True)
