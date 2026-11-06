"""In parity ports (#define BEA_PARITY), put the emulated original frame on the
game stack where the original has it (bea_par_local, src/bea/parity.h).

    python -I tools/parity_frames.py [--dry]

autoport's emulate_frame writes `alignas(16) uint8_t bea_frame_[N] = {};` with
Ghidra's local_X at bea_frame_ + N - X, i.e. at the original's entry ESP - X.
In a parity body the frame becomes entry ESP - N .. - 1 itself, not cleared:
what the port and its callees write there stays behind as the original's
leftovers, and an uninitialised read sees what the original would
(2026-10-31, 0x4162e0's vector under 800c).
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PAT = re.compile(r'^(\s*)alignas\(16\) uint8_t bea_frame_\[(0x[0-9a-fA-F]+|\d+)\] = \{\};([^\n]*)$', re.M)


def main():
    dry = '--dry' in sys.argv
    n = 0
    for p in sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', '*', '*.cpp'))):
        s = open(p, encoding='utf-8').read()
        if '#define BEA_PARITY' not in s or 'bea_par_local<uint8_t>' in s:
            continue
        m = PAT.search(s)
        if not m:
            continue
        ind, size, rest = m.group(1), m.group(2), m.group(3)
        new = ('%salignas(16) uint8_t bea_frame_own_[%s] = {};%s\n'
               '%s// parity: the original frame itself, entry ESP - %s .. - 1 (tools/parity_frames.py)\n'
               '%suint8_t *bea_frame_ = bea_par_local<uint8_t>(%s, bea_frame_own_);' % (ind, size, rest, ind, size, ind, size))
        s = s[:m.start()] + new + s[m.end():]
        if len(PAT.findall(s)):
            print('more than one frame, skipped:', p)
            continue
        if not dry:
            open(p, 'w', encoding='utf-8').write(s)
        n += 1
        print(os.path.relpath(p, ROOT).replace('\\', '/'))
    print(n, 'frames placed')


if __name__ == '__main__':
    main()
