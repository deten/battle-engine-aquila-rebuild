"""Synthetic in-game calls of methods no test reaches (BEA_SNAP_SYNTH,
platform/snapdiff.cpp; 2026-11-01).

    python -I tools/synth_live.py LEVEL[,LEVEL...] ADDR... [--clock 40] [--inst 1] [--secs 900]

The installed DLL must hold the ports (e.g. build_pool/zlib.dll for the lift
pool).  At game clock --clock of each level, every listed method is called on
up to three live objects of its classes with a few argument patterns; the
original and the port run on the same memory and their effects are compared,
then the memory goes back.  Prints per method: trials that matched, differed,
faulted; verdict "same" needs two matching trials and no difference over all
levels (a fault in the original is no evidence either way).
"""
import argparse, collections, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb        # noqa: E402
import synth_check as sc             # noqa: E402
import offline_check as oc           # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('levels')
    ap.add_argument('addr', nargs='+')
    ap.add_argument('--clock', default='40')
    ap.add_argument('--inst', type=int, default=1)
    ap.add_argument('--secs', type=int, default=900)
    a = ap.parse_args()
    addrs = [int(x, 16) for x in a.addr]
    lst = os.path.join(bb.SCRATCH, 'synth_%d.txt' % a.inst)
    with open(lst, 'w') as f:
        for x in addrs:
            vs = sorted({v for v, _ in sc.vtables_of(x)})[:8]
            if vs:
                f.write('%08x %d %s\n' % (x, sc.stack_args(x), ' '.join('%08x' % v for v in vs)))
    os.environ['BEA_SNAP_SYNTH'] = lst.replace('/', '\\')
    os.environ['BEA_SNAP_SYNTH_CLOCK'] = a.clock
    bb.WITH_CLOCK = True
    hooks = bb.all_hooks()
    st = collections.defaultdict(collections.Counter)
    note = {}
    for lv in a.levels.split(','):
        tag = 'synth_%s_%d' % (lv, a.inst)
        got = bb.run(lv, hooks, hooks, a.inst, a.secs, tag)
        log = os.path.join(bb.SCRATCH, 'bbis_%s.log' % tag)
        cur = None
        for line in open(log, errors='replace'):
            m = re.search(r'snap: synth ([0-9a-f]{8}) this', line)
            if m:
                if cur is not None:
                    st[cur]['no result'] += 1        # the previous trial never reported (a hang ends the run)
                cur = int(m.group(1), 16)
                continue
            m = re.search(r'snap: synth ([0-9a-f]{8}) no object', line)
            if m:
                st[int(m.group(1), 16)]['no object in ' + lv] += 1
                continue
            m = re.search(r'snap: synth fault (\w+) at (\w+) in ([0-9a-f]{8})', line)
            if m:
                st[int(m.group(3), 16)]["timeout" if m.group(1) == "0000dead" else "fault"] += 1
                note.setdefault(int(m.group(3), 16), 'fault %s at %s' % (m.group(1), m.group(2)))
                cur = None
                continue
            m = re.search(r'snap: ([0-9a-f]{8}) call \d+ clock [0-9.]+: (\d+) differing run\(s\), \d+ byte\(s\); eax orig (\w+) port (\w+)', line)
            if m and cur == int(m.group(1), 16):
                x = cur
                eq = int(m.group(3), 16) ^ int(m.group(4), 16)
                if int(m.group(2)):
                    st[x]['differ'] += 1
                    note.setdefault(x, line.split('snap:', 1)[1].strip()[:160])
                elif eq & oc.eax_mask(x):
                    st[x]['eax differs'] += 1
                    note.setdefault(x, 'eax %s vs %s' % (m.group(3), m.group(4)))
                else:
                    st[x]['same'] += 1
                cur = None
        if cur is not None:
            st[cur]['no result'] += 1
        print('level %s: %s' % (lv, got), flush=True)
    for x in addrs:
        s = st.get(x, collections.Counter())
        v = 'DIFFERS' if s['differ'] else 'EAX' if s['eax differs'] else 'same' if s['same'] >= 2 and not s['no result'] else 'not judged'
        print('%08x  %s  -> %s%s' % (x, dict(s), v, '  - ' + note[x] if x in note and v != 'same' else ''))


if __name__ == '__main__':
    main()
