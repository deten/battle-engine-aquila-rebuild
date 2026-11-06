"""Run the in-game snapshot differ on one or more ports (platform/snapdiff.cpp).

    python -I tools/snapdiff.py ADDR [ADDR ...] [--level 100] [--from 1] [--to 40] [--secs 60]
                                [--build] [--pool DIR] [--instance 1]

At calls from..to of each function the original and the port run on the same
memory and their effects are compared; the log's `snap:` lines name the
first differing bytes, and a summary per function follows.  Several functions
are screened in one run: while one comparison runs, the others go to their
originals.  The level is played as the gated loop plays it (behaviour_bisect.run:
recorded replays such as 611r included).

The ports must be compiled into the DLL: with --build each port that is not
in src/bea/direct is copied in from --pool DIR (or the quarantine,
tools/direct_quarantine) for the build (tools/build.sh + install) and removed
again afterwards (the next regular build drops it from the DLL).  Needs the
game free: do not run while the gated loop plays (the build replaces its DLL).
"""
import argparse, os, re, shutil, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SCRATCH = os.environ.get('BEA_SCRATCH', os.path.join(ROOT, 'build'))
sys.path.append(os.path.join(ROOT, 'tools'))


def sh(cmd):
    return subprocess.run(cmd, shell=True, cwd=ROOT, capture_output=True, text=True)


def summary(text, addrs):
    """{addr: (compared, clean, eax_differs, max_runs)} from a log"""
    out = {a: [0, 0, 0, 0] for a in addrs}
    for m in re.finditer(r'snap: ([0-9a-f]{8}) call \d+ clock [-0-9.]+: (\d+) differing run\(s\), \d+ byte\(s\); eax orig ([0-9a-f]{8}) port ([0-9a-f]{8})', text):
        a = int(m.group(1), 16)
        if a not in out:
            continue
        s = out[a]
        runs = int(m.group(2))
        s[0] += 1
        s[1] += runs == 0
        s[2] += m.group(3) != m.group(4)
        s[3] = max(s[3], runs)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addr', nargs='+')
    ap.add_argument('--level', default='100')
    ap.add_argument('--from', dest='first', type=int, default=1)
    ap.add_argument('--to', type=int, default=40)
    ap.add_argument('--secs', type=int, default=60)
    ap.add_argument('--build', action='store_true')
    ap.add_argument('--pool', help='where --build finds ports that are not in the tree (default: the quarantine)')
    ap.add_argument('--instance', type=int, default=1)
    ap.add_argument('--quiet', action='store_true', help='only the summary')
    a = ap.parse_args()
    addrs = [int(x, 16) for x in a.addr]
    copied = []
    if a.build:
        for addr in addrs:
            live = os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_%08x.cpp' % addr)
            if os.path.exists(live):
                continue
            src = os.path.join(a.pool or os.path.join(ROOT, 'tools', 'direct_quarantine'), 'ap_%08x.cpp' % addr)
            if not os.path.exists(src):
                for f in copied: os.remove(f)
                sys.exit('no port for %08x in src/bea/direct or %s' % (addr, os.path.dirname(src)))
            shutil.copy(src, live); copied.append(live)
        if copied:
            print('copied %d port(s) into the tree for the build' % len(copied), flush=True)
        r = sh('python -I tools/fix_floatbits.py && bash tools/build.sh && bash tools/install_hook.sh install')
        if r.returncode != 0:
            print(r.stdout[-2000:], r.stderr[-2000:])
            for f in copied: os.remove(f)
            sys.exit('build failed')
        print('built and installed', flush=True)
    else:
        missing = [x for x in addrs if not os.path.exists(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_%08x.cpp' % x))
                   and not os.path.exists(os.path.join(ROOT, 'src', 'bea', 'lifted', 'lift_%08x.cpp' % x))]   # (lifted: BEA_LIFT=1)
        if missing:
            sys.exit('not in the tree: %s; use --build' % ' '.join('%08x' % x for x in missing))
    import behaviour_bisect as bb
    os.environ['BEA_SNAP'] = ';'.join('%x,%d,%d' % (x, a.first, a.to) for x in addrs)
    hooks = bb.all_hooks()
    hooks = sorted(set(hooks) | set(addrs))
    tag = 'snap_%s_%08x%s' % (a.level, addrs[0], '_%d' % len(addrs) if len(addrs) > 1 else '')
    bb.run(a.level, hooks, hooks, a.instance, a.secs, tag)
    log = os.path.join(SCRATCH, 'bbis_%s.log' % tag)
    text = open(log, errors='replace').read() if os.path.exists(log) else ''
    if not a.quiet:
        lines = [l for l in text.splitlines() if 'snap' in l]
        print('\n'.join(l[:200] for l in lines[:160]))
    if 'CRASH code' in text:
        print('(the run crashed: see %s)' % log)
    print('per function: calls compared, identical, eax differs, most differing runs in one call')
    for addr, (n, clean, eaxd, mx) in summary(text, addrs).items():
        verdict = 'not called' if n == 0 else 'identical' if clean == n else 'DIFFERS'
        print('  %08x  %3d compared  %3d identical  %3d eax  %5d max runs   %s' % (addr, n, clean, eaxd, mx, verdict))
    for f in copied:
        os.remove(f)
    if copied:
        print('removed the copied port(s) from the tree (the DLL keeps them until the next build)')


if __name__ == '__main__':
    main()
