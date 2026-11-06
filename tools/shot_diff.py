"""Compare two back-buffer shots (24-bit BMPs from BEA_SHOTCLOCK, test_harness.cpp).

    python -I tools/shot_diff.py A.bmp B.bmp [OUT.bmp]

Prints the number of differing pixels, the bounding box of the difference and
the mean absolute channel difference; with OUT.bmp writes a mask (differing
pixels white) to look at.  Exit 1 when the images differ.
"""
import struct, sys


def read_bmp(path):
    d = open(path, 'rb').read()
    off, w, h, bpp = struct.unpack_from('<I', d, 10)[0], struct.unpack_from('<i', d, 18)[0], struct.unpack_from('<i', d, 22)[0], struct.unpack_from('<H', d, 28)[0]
    assert bpp == 24, bpp
    row = (w * 3 + 3) & ~3
    return w, abs(h), row, d[off:off + row * abs(h)]


def main():
    a, b = read_bmp(sys.argv[1]), read_bmp(sys.argv[2])
    if a[:2] != b[:2]:
        print('sizes differ: %dx%d vs %dx%d' % (a[0], a[1], b[0], b[1])); sys.exit(1)
    w, h, row = a[0], a[1], a[2]
    pa, pb = a[3], b[3]
    n, total, x0, y0, x1, y1 = 0, 0, w, h, -1, -1
    mask = bytearray(row * h) if len(sys.argv) > 3 else None
    for y in range(h):
        base = y * row
        for x in range(w):
            i = base + 3 * x
            d = abs(pa[i] - pb[i]) + abs(pa[i + 1] - pb[i + 1]) + abs(pa[i + 2] - pb[i + 2])
            if d:
                n += 1; total += d
                x0, y0, x1, y1 = min(x0, x), min(y0, y), max(x1, x), max(y1, y)
                if mask is not None:
                    mask[i] = mask[i + 1] = mask[i + 2] = 255
    if n == 0:
        print('identical (%dx%d)' % (w, h)); return
    print('%d of %d pixels differ (%.2f%%), box x %d..%d y %d..%d (rows from the bottom), mean channel diff %.1f'
          % (n, w * h, 100.0 * n / (w * h), x0, x1, y0, y1, total / (3.0 * n)))
    if mask is not None:
        src = open(sys.argv[1], 'rb').read()
        off = struct.unpack_from('<I', src, 10)[0]
        open(sys.argv[3], 'wb').write(src[:off] + bytes(mask))
    sys.exit(1)


if __name__ == '__main__':
    main()
