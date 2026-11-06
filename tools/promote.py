"""Promote auto-ported functions that agreed with the original in shadow mode.

Reads Battle Engine Aquila/bea_shadow_report.txt (lines: addr calls mismatches
detail, appended per run), sums the runs, and for every function with
calls >= --min-calls and zero mismatches rewrites src/bea/autoport/ap_<addr>.cpp
so that the port replaces the original (BEA_HOOK) and moves it to
src/bea/verified/.  Functions with mismatches are listed for manual review.

Usage: python -I tools/promote.py [--min-calls 20] [--dry-run]
"""
import argparse, collections, os, re, shutil

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
import glob
REPORTS = glob.glob(os.path.join(ROOT, 'Battle Engine Aquila', 'bea_shadow_report*.txt'))
SRC = os.path.join(ROOT, 'src', 'bea', 'autoport')
DST = os.path.join(ROOT, 'src', 'bea', 'verified')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--min-calls', type=int, default=20)
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()
    calls = collections.Counter()
    mism = collections.Counter()
    detail = {}
    lines = []
    for rp in REPORTS:
        lines += open(rp).read().splitlines()
    for line in lines:
        t = line.split(None, 3)
        if len(t) < 3:
            continue
        addr = int(t[0], 16)
        calls[addr] += int(t[1])
        mism[addr] += int(t[2])
        if int(t[2]) and addr not in detail:
            detail[addr] = t[3].strip() if len(t) > 3 else ''
    os.makedirs(DST, exist_ok=True)
    promoted, unverified, failed = [], [], []
    for path in sorted(os.listdir(SRC)):
        m = re.match(r'ap_([0-9a-f]{8})\.cpp$', path)
        if not m:
            continue
        addr = int(m.group(1), 16)
        if mism[addr]:
            failed.append((addr, calls[addr], mism[addr], detail.get(addr, '')))
            continue
        if calls[addr] < a.min_calls:
            unverified.append((addr, calls[addr]))
            continue
        src = open(os.path.join(SRC, path)).read()
        fn = 'ap_%08x' % addr
        if '@autoport-eax other' in src:
            failed.append((addr, calls[addr], 0, 'void port but EAX live in original: needs return-value review'))
            continue
        new = re.sub(r'// @autoport-registration\nBEA_HOOKS\(BEA_SHADOW_HOOK\(0x%08x, sh_%08x, ap_%08x_orig\)\);' % (addr, addr, addr),
                     '// @autoport-registration (verified: %d shadow calls, 0 mismatches)\nBEA_HOOKS(BEA_HOOK(0x%08x, %s));' % (calls[addr], addr, fn), src)
        new = new.replace('// @autoport-mode shadow', '// @autoport-mode verified')
        # drop the shadow stub so the verified file has no dead code
        new = re.sub(r'static void\* ap_%08x_orig = nullptr;\n.*?\n}\n\n' % addr, '', new, flags=re.S)
        new = new.replace('#include "bea/shadow.h"\n', '')
        new = re.sub(r'#define BEA_LOOP_GUARD\(c\) .*', '#define BEA_LOOP_GUARD(c) (c)', new)
        if new == src:
            failed.append((addr, calls[addr], 0, 'registration pattern not found'))
            continue
        promoted.append(addr)
        if not a.dry_run:
            open(os.path.join(DST, path), 'w').write(new)
            os.remove(os.path.join(SRC, path))
    print('promoted %d, unverified (too few calls) %d, mismatching %d' % (len(promoted), len(unverified), len(failed)))
    for addr, c, mm, d in failed[:40]:
        print('  MISMATCH %08x calls=%d mismatches=%d %s' % (addr, c, mm, d))


if __name__ == '__main__':
    main()
