"""Compare two probe files (onslaught-ce's `P <frame> <NAME> <hex>` format): the original
game's (tools/ce_export.py) and a port run's (BEA_PORT_PROBES). Prints the first frame and
fields that differ, decoded where the field is known, and how many sampled frames match.

    python -I tools/ce_probe_compare.py ORIGINAL.probes PORT.probes [--fields EVT,POS,...]
"""
import argparse, struct

FLOATS = {'EVT': 'f', 'FT': 'f', 'POS': 'fff', 'LIFE': 'ff'}
INTS = {'EVN': 'I', 'SC': 'I', 'LVL': 'I'}


def load(path, fields):
    d = {}
    for line in open(path):
        p = line.split()
        if len(p) == 4 and p[0] == 'P' and (not fields or p[2] in fields):
            d.setdefault(int(p[1]), {})[p[2]] = p[3]
    return d


def decode(name, hexs):
    b = bytes.fromhex(hexs)
    fmt = FLOATS.get(name) or INTS.get(name)
    if fmt and len(b) == 4 * len(fmt):
        return ' '.join(('%.4f' % v) if isinstance(v, float) else str(v) for v in struct.unpack('<' + fmt, b))
    return hexs


ap = argparse.ArgumentParser()
ap.add_argument('original')
ap.add_argument('port')
ap.add_argument('--fields', default='', help='comma-separated probe names to compare (default: all in both)')
a = ap.parse_args()
fields = set(f for f in a.fields.split(',') if f)
o, p = load(a.original, fields), load(a.port, fields)
frames = sorted(set(o) & set(p))
same = 0
for f in frames:
    diff = [n for n in sorted(set(o[f]) & set(p[f])) if o[f][n] != p[f][n]]
    if diff:
        print('first difference at frame %d (%d earlier sampled frames match):' % (f, same))
        for n in diff:
            print('  %-5s original %s' % (n, decode(n, o[f][n])))
            print('  %-5s port     %s' % ('', decode(n, p[f][n])))
        break
    same += 1
else:
    print('all %d sampled frames match' % same)
only = sorted(set(o) ^ set(p))
if only:
    print('frames in only one file: %d (first %d)' % (len(only), only[0]))
