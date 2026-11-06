"""List ports that call a varargs game function (printf-style logger,
sprintf) with fewer arguments than the format string's % specifiers.

Ghidra often drops the variadic arguments of such calls (it only sees the
fixed parameters), so the port passes the format alone and the callee reads
stack garbage for each %s / %d (2026-10-19: level 221 crashed in the game's
_output via the logger 0x441740 called by 0x4bba10 with "...%2.8f...").
    python -I tools/check_varargs.py [files or dirs...]   (default: every port)
Prints one line per bad port: address, callee, specifiers vs. arguments.
"""
import glob
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')


def _string_reader():
    f = open(EXE, 'rb').read()
    pe = struct.unpack_from('<I', f, 0x3c)[0]
    n = struct.unpack_from('<H', f, pe + 6)[0]
    opt = struct.unpack_from('<H', f, pe + 20)[0]
    base = struct.unpack_from('<I', f, pe + 24 + 28)[0]
    sec = pe + 24 + opt

    def cstr(va):
        for i in range(n):
            s = sec + 40 * i
            vs, va0, rs, ro = struct.unpack_from('<IIII', f, s + 8)
            if va0 <= va - base < va0 + rs:
                o = va - base - va0 + ro
                return f[o:f.index(b'\0', o)].decode('latin1')
        return None
    return cstr


SPEC = re.compile(r'%(?!%)[-+ #0-9.*]*[hlL]?[a-zA-Z]')


def _short_calls():
    """{caller: {total argument count}} of call sites where the original itself
    passes fewer arguments than its format needs (written by the Ghidra
    script tools/ghidra/VarargOverrides.java): a port doing the same is
    faithful."""
    out = {}
    try:
        for l in open(os.path.join(ROOT, 'ghidra_out', 'vararg_short.txt')):
            t = l.split()
            if len(t) == 3:
                out.setdefault(t[0], set()).add(int(t[2]))
    except OSError:
        pass
    return out


def check(paths):
    cstr = _string_reader()
    short = _short_calls()
    bad = []
    for p in paths:
        t = open(p).read()
        variadic = set(re.findall(r'typedef \w+ \(\w+\* (FUN_\w+)_t\)\([^)]*\.\.\.\)', t))
        for fn in variadic:
            for m in re.finditer(r'\b%s\(([^;]*)\);' % fn, t):
                args = m.group(1)
                sm = re.search(r'\bs_\w*?_([0-9a-f]{8})\b', args)
                if not sm:
                    continue
                s = cstr(int(sm.group(1), 16))
                if s is None:
                    continue
                need = len(SPEC.findall(s))
                given = args[sm.end():].count(',')
                if need > given:
                    addr = re.search(r'ap_([0-9a-f]{8})', os.path.basename(p)).group(1)
                    if args.count(',') + 1 in short.get(addr, ()):
                        continue    # the original passes exactly as many
                    bad.append((addr, fn, need, given, s))
    return bad


def main():
    paths = []
    for p in sys.argv[1:] or [os.path.join(ROOT, 'src', 'bea', '*')]:
        paths += sorted(glob.glob(os.path.join(p, 'ap_*.cpp'))) if not p.endswith('.cpp') else [p]
    bad = check(paths)
    for addr, fn, need, given, s in bad:
        print('%s %s needs %d args, passes %d: %r' % (addr, fn, need, given, s[:60]))
    print('%d bad call(s) in %d port(s)' % (len(bad), len(set(b[0] for b in bad))))
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
