"""Make ports keep stack parity (src/bea/parity.h): compile with BEA_PARITY and
register with BEA_PARITY_HOOK and the call-site table tools/callsites.py
derives from the original.

    python -I tools/parity_convert.py ADDR... [--note TEXT] [--dry]

A port qualifies when its file registers `BEA_HOOKS(BEA_HOOK(0x<addr>,
ap_<addr>));` and the table has no conflict.  The 106 ports whose original
leaves through a tail jump were the first use (2026-10-31): the jump's target
runs at the original's entry ESP, a port's call ran it deeper, and a callee
with a large unset frame (0x402fa0 under 0x47beb0) read other stack leftovers.
"""
import argparse, glob, io, os, re, sys
from contextlib import redirect_stdout

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import callsites                                              # noqa: E402


def table(addr):
    buf = io.StringIO()
    sys.argv = ['callsites.py', '%x' % addr, '--table']
    with redirect_stdout(buf):
        callsites.main()
    return buf.getvalue()


def convert(addr, note, dry):
    files = [p for p in glob.glob(os.path.join(ROOT, 'src', 'bea', '*', '*.cpp'))
             if re.search(r'BEA_HOOK\(\s*0x%08x\s*,' % addr, open(p, encoding='utf-8', errors='replace').read(), re.I)]
    if len(files) != 1:
        return 'skip: %d files register it' % len(files)
    p = files[0]
    s = open(p, encoding='utf-8').read()
    reg = re.search(r'^BEA_HOOKS\(BEA_HOOK\(0x%08x, (ap_%08x)\)\);[ \t]*$' % (addr, addr), s, re.M | re.I)
    if not reg:
        return 'skip: registration is not the plain BEA_HOOKS(BEA_HOOK(addr, ap_addr)) line'
    if '#define BEA_PARITY' in s:
        return 'skip: already parity'
    t = table(addr)
    if 'CONFLICT' in t:
        return 'skip: ' + ' '.join(l for l in t.splitlines() if 'CONFLICT' in l)
    inc = re.search(r'^#include "bea/ghidra_compat.h"$', s, re.M)
    if not inc:
        return 'skip: no ghidra_compat include'
    s = s[:inc.start()] + '// @parity %s\n#define BEA_PARITY   // stack parity: see the registration\n' % note + s[inc.start():]
    reg = re.search(r'^BEA_HOOKS\(BEA_HOOK\(0x%08x, (ap_%08x)\)\);[ \t]*$' % (addr, addr), s, re.M | re.I)
    s = s[:reg.start()] + t.rstrip('\n') + s[reg.end():]
    if not dry:
        open(p, 'w', encoding='utf-8').write(s)
    return 'ok ' + os.path.relpath(p, ROOT).replace('\\', '/')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addr', nargs='+')
    ap.add_argument('--note', default='2026-10-31: the original tail-jumps; its target runs at the entry ESP')
    ap.add_argument('--dry', action='store_true')
    a = ap.parse_args()
    for h in a.addr:
        addr = int(h, 16)
        try:
            r = convert(addr, a.note, a.dry)
        except SystemExit as e:
            r = 'skip: %s' % e
        except Exception as e:
            r = 'skip: %s: %s' % (type(e).__name__, e)
        print('%08x %s' % (addr, r))


if __name__ == '__main__':
    main()
