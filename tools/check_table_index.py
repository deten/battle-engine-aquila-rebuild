"""Ports that index a global table with a different element size than the
original.

0x515970 reads the key-state byte of a scan code (`mov al, [ecx +
0x888c94]`); its port `(&DAT_00888c94)[param_1]` had DAT typed int, so it
read the dword at 0x888c94 + 4*key - another key's state.  Shadow testing
passed it 417,054 times because the idle test runs press no keys; the first
recorded playthrough lost level 300 at 43.5 s instead of 133.5 s (2026-10-23).

For every `(&DAT_x)[i]` in a port, the element size of DAT_x's declared type
is compared with the scale the original uses where it names that address
(`[reg*N + 0xADDR]`, no scale = 1).  A difference is a port reading or writing
the wrong element.

    python -I tools/check_table_index.py [FILES]   (default: every src/bea/**/ap_*.cpp)

Prints `addr: DAT_x type T, original scale N` per finding; exit 1 if any.
"""
import csv, glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import autoport                                     # noqa: E402

TSIZE = {'int': 4, 'uint': 4, 'undefined4': 4, 'float': 4, 'uint32_t': 4, 'int32_t': 4, 'dword': 4,
         'short': 2, 'ushort': 2, 'undefined2': 2, 'word': 2,
         'char': 1, 'byte': 1, 'undefined1': 1, 'undefined': 1, 'bool': 1, 'uchar': 1, 'uint8_t': 1,
         'double': 8, 'longlong': 8, 'undefined8': 8}


def sizes():
    out = {}
    for r in csv.reader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='')):
        try:
            out[int(r[0], 16)] = int(r[3])
        except (ValueError, IndexError):
            pass
    return out


def check(path, fsize):
    s = open(path, encoding='utf-8', errors='replace').read()
    defs = dict(re.findall(r'#define (\w+) GLOBAL_AT\(([\w ]+?\**), 0x[0-9a-f]+\)', s))
    a = int(os.path.basename(path)[3:11], 16)
    ins = None
    found = []
    for m in re.finditer(r'\(&(DAT_([0-9a-f]{8}))\)\[', s):
        name, addr = m.group(1), int(m.group(2), 16)
        t = (defs.get(name) or '').strip()
        es = TSIZE.get(t)
        if not es:
            continue
        if ins is None:
            ins = list(autoport.disasm_cached(a, fsize.get(a, 0)))
        # the original's element size: the access width where it reads or
        # writes `[... + ADDR]` (a pre-multiplied index - 0x513af0's
        # `[eax*8 + 0x8557f4]` for record 15*i - keeps the dword width), and
        # for a `lea` of the table base its index scale
        widths, lea_scales = set(), set()
        for i in ins:
            mm = re.search(r'(byte|word|dword|qword) ptr \[(?:[a-z]{3} \+ )?[a-z]{3}(?:\*\d)? \+ 0x%x\]' % addr, i.op_str)
            if mm:
                widths.add({'byte': 1, 'word': 2, 'dword': 4, 'qword': 8}[mm.group(1)])
                continue
            mm = re.search(r'\[(?:[a-z]{3} \+ )?[a-z]{3}(?:\*(\d))? \+ 0x%x\]' % addr, i.op_str)
            if mm and i.mnemonic == 'lea':
                lea_scales.add(int(mm.group(1) or 1))
        if widths and es not in widths and not (es == 4 and 'float' in t and 4 in widths):
            found.append('%s type %s, original accesses %s byte(s)' % (name, t, '/'.join(map(str, sorted(widths)))))
        elif not widths and lea_scales and es not in lea_scales:
            found.append('%s type %s, original table base indexed by %s' % (name, t, '/'.join(map(str, sorted(lea_scales)))))
    return found


def main():
    files = [x for x in sys.argv[1:] if not x.startswith('--')] or \
        sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', '**', 'ap_*.cpp'), recursive=True))
    fsize = sizes()
    n = 0
    for p in files:
        f = check(p, fsize)
        if f:
            n += 1
            print('%s: %s  (%s)' % (os.path.basename(p)[3:11], '; '.join(sorted(set(f))), os.path.relpath(p, ROOT)))
    print('%d port(s) index a global table with another element size than the original' % n)
    sys.exit(1 if n else 0)


if __name__ == '__main__':
    main()
