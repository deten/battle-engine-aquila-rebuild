"""Compare each port's machine code with the original's, feature by feature.

A port that crashes nothing can still play differently (2026-10-20: 0x4fb3d0
converted where the original reinterpreted, 0x506010 turned a float into an
integer by value).  The compiled port and the original function must agree on
what they do, even though GCC and VC6 schedule it differently, so this compares
features that an optimiser keeps and a wrong port changes:

  calls   absolute code addresses used (call targets, function values),
          thunks resolved; CRT/import targets the port may replace are soft
  globals absolute data addresses read or written
  consts  float constants (values, read from .rdata of either side;
          0.0/1.0 and c vs 1/c for powers of two are ignored)
  x87     integer x87 ops (fild...), fsqrt/fsin/fcos/fpatan counts,
          8/10-byte float loads and stores to non-stack memory
  stores  non-stack integer store widths              (soft)
  fields  displacements of non-stack memory operands  (soft)

    python -I tools/fingerprint.py [--all] [--soft] [--json out] [addr...]

Default: every src/bea/direct port whose object is built; --all adds
src/bea/verified (the shadow-tested ports: the noise baseline).  Prints one
line per port with a hard difference, then a summary.  Exit 1 if any hard
difference.  Reads the objects under build/CMakeFiles/zlib.dir and BEA.exe
with MSYS2 MINGW32 objdump.
"""
import csv, glob, json, os, re, struct, subprocess, sys
from collections import Counter
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OBJDUMP = r'C:\msys64\mingw32\bin\objdump.exe'
EXE = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
OBJDIR = os.path.join(ROOT, 'build', 'CMakeFiles', 'zlib.dir', 'src', 'bea')
TEXT = (0x401000, 0x5d7f9d)
RDATA = (0x5d8000, 0x5d8000 + 0x4985c)
DATA_END = 0x661000
IAT_END = 0x5d83c4          # the import address table (objdump -p: entry c); ports call imports through their own
FTOL = 0x55e128

INSN = re.compile(r'^\s*([0-9a-f]+):\t(\S+)\s*(.*?)\s*$')
RELOC = re.compile(r'^\s*([0-9a-f]+):\s+(dir32|DISP32|rel32|R_\S+)\s+(\S+)')
MEM = re.compile(r'(?:(-?0x[0-9a-f]+|-?\d+))?\((%\w+)?(?:,(%\w+)(?:,\d)?)?\)')   # disp(base,index,scale)
ABS = re.compile(r'(?<![\w$(])0x([0-9a-f]{6})(?![\w(])')                       # bare absolute address operand
IMM = re.compile(r'\$0x([0-9a-f]+)')
X87_SKIP = {'fnstsw', 'fnstcw', 'fldcw', 'fxch', 'fwait', 'fnclex', 'fninit', 'fldenv', 'fnstenv', 'fnsave', 'frstor'}
REG_W = {'l': 4, 'w': 2, 'b': 1}
REG8 = {'%al', '%bl', '%cl', '%dl', '%ah', '%bh', '%ch', '%dh'}
REG16 = {'%ax', '%bx', '%cx', '%dx', '%si', '%di', '%bp', '%sp'}

_exe = None
_funcs = None


def exe_bytes(addr, n):
    global _exe
    if _exe is None:
        _exe = open(EXE, 'rb').read()
    for va, raw, size in ((0x401000, 0x1000, 0x1d6f9d), (0x5d8000, 0x1d8000, 0x4985c), (0x622000, 0x222000, 0x3f000)):
        if va <= addr < va + size:
            off = addr - va + raw
            return _exe[off:off + n]
    return b''


def funcs():
    """address -> (name, size, is_thunk) from ghidra_out/functions.csv"""
    global _funcs
    if _funcs is None:
        _funcs = {}
        with open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), newline='') as f:
            for row in csv.reader(f):
                try:
                    _funcs[int(row[0], 16)] = (row[1], int(row[3]), row[6] == 'true')
                except (ValueError, IndexError):
                    pass
    return _funcs


def resolve_thunk(a):
    fn = funcs().get(a)
    if fn and fn[2]:
        m = re.match(r'thunk_FUN_([0-9a-f]{8})$', fn[0])
        if m:
            return int(m.group(1), 16)
        b = exe_bytes(a, 5)
        if b[:1] == b'\xe9':
            return (a + 5 + struct.unpack('<i', b[1:5])[0]) & 0xffffffff
        return None                     # jmp [import]: not an absolute target
    return a


def soft_call(a):
    """a target the port may legitimately replace (CRT function, import thunk)"""
    fn = funcs().get(a)
    return fn is None or not fn[0].startswith('FUN_')


def float_value(data, width):
    if width == 4 and len(data) >= 4:
        return struct.unpack('<f', data[:4])[0]
    if width == 8 and len(data) >= 8:
        return struct.unpack('<d', data[:8])[0]
    if width == 10 and len(data) >= 10:
        # x87 extended: 64-bit mantissa, 15-bit exponent
        mant, se = struct.unpack('<QH', data[:10])
        exp = se & 0x7fff
        if exp == 0 and mant == 0:
            return 0.0
        v = mant / 2.0 ** 63 * 2.0 ** (exp - 16383)
        return -v if se & 0x8000 else v
    return None


def norm_const(v):
    """canonical form of a float constant: 0/1 ignored, c and 1/c same for powers of two"""
    if v is None or v != v or v in (0.0, 1.0, -1.0):
        return None
    a = abs(v)
    m, e = (a, 0)
    try:
        import math
        m, e = math.frexp(a)
    except (OverflowError, ValueError):
        return round(v, 6)
    if m == 0.5 and e < 1:       # 2^-k: compare as 2^k
        a = 1.0 / a
    return round(a, 6)           # sign dropped: GCC turns `x + 25 != 0` into `x != -25`


class Features:
    def __init__(self):
        self.calls = set()      # absolute code addresses (hard)
        self.softcalls = set()  # CRT targets etc. (soft)
        self.icalls = 0
        self.globals = set()
        self.consts = set()
        self.x87 = Counter()
        self.stores = Counter()
        self.fields = set()
        self.ftol = 0
        self.tail = None        # original only: features of the code past Ghidra's size

    def diff(self, port):
        """hard and soft differences between self (original) and port"""
        hard, soft = [], []
        o, p = self, port
        t = o.tail or Features()
        miss = o.calls - p.calls - p.softcalls
        extra = p.calls - o.calls - o.softcalls - t.calls - t.softcalls
        if miss:
            hard.append('calls-' + ','.join('%x' % a for a in sorted(miss)))
        if extra:
            hard.append('calls+' + ','.join('%x' % a for a in sorted(extra)))
        sm = o.softcalls - p.calls - p.softcalls
        if sm:
            soft.append('crtcalls-' + ','.join('%x' % a for a in sorted(sm)))
        gm, gx = o.globals - p.globals, p.globals - o.globals - t.globals
        # an address within 256 bytes of one the other side uses is the same
        # object addressed differently (GCC ends a 48-byte copy at its end,
        # 0x4952a0 keeps `&DAT_0062dd20 - 0xdc` as 0x62dc44)
        near = lambda a, other: any(abs(a - b) <= 256 for b in other)
        gm_soft = {a for a in gm if near(a, p.globals)}
        gx_soft = {a for a in gx if near(a, o.globals)}
        gm, gx = gm - gm_soft, gx - gx_soft
        # Ghidra folds a read of .rdata into the value (0x4241a0 reads 16 at
        # 0x5db5f8; the port multiplies by 16): a missing .rdata read is soft
        gm_ro = {a for a in gm if a < RDATA[1]}
        gm -= gm_ro
        if gm_ro:
            soft.append('rodata-' + ','.join('%x' % a for a in sorted(gm_ro)))
        if gm:
            hard.append('globals-' + ','.join('%x' % a for a in sorted(gm)))
        if gx:
            hard.append('globals+' + ','.join('%x' % a for a in sorted(gx)))
        if gm_soft or gx_soft:
            soft.append('globals~' + ','.join('%x' % a for a in sorted(gm_soft | gx_soft)))
        cm, cx = o.consts - p.consts, p.consts - o.consts
        if cm:
            hard.append('consts-' + ','.join('%g' % c for c in sorted(cm)))
        if cx:
            soft.append('consts+' + ','.join('%g' % c for c in sorted(cx)))
        if p.x87['fild'] > o.x87['fild']:
            hard.append('fild %d>%d' % (p.x87['fild'], o.x87['fild']))
        elif p.x87['fild'] < o.x87['fild']:
            soft.append('fild %d<%d' % (p.x87['fild'], o.x87['fild']))
        # Ghidra folds an operation on constants (SQRT(2.0) is a number in the
        # port), so fewer is soft; more is a computation the original lacks
        for k in ('fsqrt', 'fsin', 'fcos', 'fpatan', 'fprem'):
            if p.x87[k] != o.x87[k]:
                (hard if p.x87[k] > o.x87[k] else soft).append('%s %d!=%d' % (k, p.x87[k], o.x87[k]))
        for k in ('fchs', 'fabs', 'frndint'):
            if p.x87[k] != o.x87[k]:
                soft.append('%s %d!=%d' % (k, p.x87[k], o.x87[k]))
        oi, pi = o.x87['fistp'] + o.ftol, p.x87['fistp']
        if pi != oi:
            (hard if pi > oi else soft).append('fistp %d!=%d' % (pi, oi))
        for k in ('fld8', 'fld10', 'fstp8', 'fstp10'):
            if p.x87[k] > o.x87[k]:
                hard.append('%s %d>%d' % (k, p.x87[k], o.x87[k]))
        # a 4-byte float load the original does not make: an integer slot read
        # through a float pointer (0x4fcc30's contact count at +0x80; GCC folded
        # the `(int)f < 1` so no fistp showed).  Soft: GCC also copies floats
        # with fld/fstp where VC6 used mov.
        for k in ('fld4', 'fstp4'):
            if p.x87[k] > o.x87[k]:
                soft.append('%s %d>%d' % (k, p.x87[k], o.x87[k]))
        for w in (1, 2, 4):
            if p.stores[w] != o.stores[w]:
                soft.append('store%d %d!=%d' % (w, p.stores[w], o.stores[w]))
        fm = o.fields - p.fields
        if fm:
            soft.append('fields-%d' % len(fm))
        return hard, soft


def parse(lines, stack_regs, rdata_reader, is_port):
    """Features of one function's AT&T disassembly.

    stack_regs: base registers that address the stack (excluded from stores,
    fields, float widths).  rdata_reader(addr_or_offset, width) -> bytes of a
    float constant.  For a port the relocation lines name the .rdata section.
    """
    F = Features()
    pending_reloc = None
    insns = []
    for ln in lines:
        m = RELOC.match(ln)
        if m and '\t' not in ln.split(':', 1)[1][:1]:
            if insns:
                insns[-1][3].append(m.group(3))
            continue
        m = INSN.match(ln)
        if m:
            insns.append([int(m.group(1), 16), m.group(2), m.group(3), []])
    for off, mn, ops, relocs in insns:
        # ---- calls and code references
        if mn == 'call':
            if ops.startswith('*'):
                F.icalls += 1
            else:
                m = re.match(r'(?:0x)?([0-9a-f]+)', ops)
                if m and not is_port:
                    t = resolve_thunk(int(m.group(1), 16))
                    if t is not None:
                        if t == FTOL:
                            F.ftol += 1
                        elif soft_call(t):
                            F.softcalls.add(t)
                        else:
                            F.calls.add(t)
            continue
        if mn.startswith('j') and not is_port:
            m = re.match(r'(?:0x)?([0-9a-f]+)', ops)
            if m:
                t = int(m.group(1), 16)
                if t in funcs() and t != cur_start(insns):
                    t = resolve_thunk(t)      # tail call
                    if t is not None:
                        (F.softcalls if soft_call(t) else F.calls).add(t)
            continue
        if mn.startswith('j') or mn in ('lea', 'nop', 'xchg'):
            if mn != 'lea':
                continue
        for m in IMM.finditer(ops):
            v = int(m.group(1), 16)
            if TEXT[0] <= v < TEXT[1]:
                if not is_port:
                    v = resolve_thunk(v) or v       # a thunk passed as a value (0x44afa0)
                if soft_call(v):
                    F.softcalls.add(v)
                else:
                    F.calls.add(v)
            elif RDATA[0] <= v < DATA_END:
                F.globals.add(v)
        # ---- memory operands
        mem = MEM.search(ops)
        absm = None                     # an absolute data address operand (or address-of immediate)
        if mem and mem.group(1):
            d = disp_of(ops)
            if IAT_END <= d < DATA_END:
                absm = d                # DAT[reg] / DAT[,index,4]: GCC addresses a global table so
        if absm is None and not (mem and mem.group(2)):
            am = ABS.search(ops.replace('$', ' '))
            if am and IAT_END <= int(am.group(1), 16) < DATA_END:
                absm = int(am.group(1), 16)
        base = mem.group(2) if mem else None
        is_stack = base in stack_regs if base else False
        if mem and base and not is_stack and mem.group(1) and absm is None:
            F.fields.add(int(mem.group(1), 16) if 'x' in mem.group(1) else int(mem.group(1)))
        if absm is not None and mem and (mem.group(2) or mem.group(3)):
            F.globals.add(absm)         # an indexed global is a table, never a float constant
            absm = None
        # x87
        if mn.startswith('f') and mn not in X87_SKIP:
            is_int = mn.startswith('fi') and mn not in ('finit',)
            has_mem = bool(mem or absm or relocs)
            width = {'s': 4, 'l': 8, 't': 10}.get(mn[-1], 0) if has_mem and not is_int else 0
            is_const = (absm is not None and RDATA[0] <= absm < RDATA[1]) or any(r.startswith('.rdata') for r in relocs)
            if is_int and not mn.startswith('fist'):
                F.x87['fild'] += 1
            elif mn.startswith('fistp') or mn.startswith('fisttp'):
                F.x87['fistp'] += 1
            elif mn.startswith('fist'):
                F.x87['fist'] += 1
            elif mn.startswith('fld') and mn not in ('fld1', 'fldz', 'fldpi', 'fldl2e', 'fldl2t', 'fldlg2', 'fldln2'):
                if width and has_mem and not is_stack and not is_const:
                    F.x87['fld%d' % width] += 1
            elif mn.startswith('fst'):
                if width and has_mem and not is_stack and not is_const:
                    F.x87['fstp%d' % width] += 1
                if ops == '%st(0)':
                    F.x87['fpop'] += 1
            elif mn in ('fsqrt', 'fsin', 'fcos', 'fpatan', 'fprem', 'fchs', 'fabs', 'frndint'):
                F.x87[mn] += 1
            # float constants: absolute .rdata operand (original) or .rdata reloc (port)
            if width and is_const:
                if absm is not None:
                    data = rdata_reader(absm, width)
                else:
                    r = [r for r in relocs if r.startswith('.rdata')][0]
                    m2 = re.search(r'\+0x([0-9a-f]+)', r)
                    disp = int(m2.group(1), 16) if m2 else disp_of(ops)
                    data = rdata_reader(disp, width)
                v = norm_const(float_value(data, width))
                if v is not None:
                    F.consts.add(v)
            elif absm is not None and not relocs:
                F.globals.add(absm)
            continue
        if absm is not None and not relocs:
            F.globals.add(absm)
        # ---- integer stores to non-stack memory
        if mn.startswith('mov') and ',' in ops and not mn.startswith('movs') and not mn.startswith('movz'):
            src, dst = ops.rsplit(',', 1)
            dm = MEM.search(dst)
            if (dm and dm.group(2) and dm.group(2) not in stack_regs) or (not dm and ABS.search(dst)):
                if src in REG8:
                    w = 1
                elif src in REG16:
                    w = 2
                elif src.startswith('%'):
                    w = 4
                else:
                    w = REG_W.get(mn[-1], 4)
                F.stores[w] += 1
    return F


def cur_start(insns):
    return insns[0][0] if insns else -1


def disp_of(ops):
    """the displacement of a memory operand: `0x68`, `0x68(,%eax,8)`, `-0x10(%ebp)`"""
    m = re.search(r'(?<![\w$%])(-?0x[0-9a-f]+|-?\d+)(?=\(|$|,)', ops)
    if not m:
        return 0
    s = m.group(1)
    return int(s, 16) if 'x' in s else int(s)


def original(addr, size):
    out = subprocess.run([OBJDUMP, '-d', '--no-show-raw-insn', '--start-address=0x%x' % addr,
                          '--stop-address=0x%x' % (addr + size), EXE], capture_output=True, text=True).stdout
    lines = [l for l in out.splitlines() if INSN.match(l)]
    stack = {'%esp'}
    head = ' '.join(l for l in lines[:4])
    if 'mov    %esp,%ebp' in head:
        stack.add('%ebp')
    F = parse(lines, stack, exe_bytes, False)
    F.calls.discard(addr)               # recursion
    # Ghidra's size is the main range; a body may go on past it (0x46ff10
    # calls 0x4e0300 at +475 of 445).  What the gap up to the next function
    # mentions is not "missing" in the port and not "extra" when the port has it.
    starts = sorted(funcs())
    import bisect
    i = bisect.bisect_right(starts, addr)
    nxt = starts[i] if i < len(starts) else addr + size
    if nxt > addr + size and nxt - (addr + size) <= 0x800:
        out = subprocess.run([OBJDUMP, '-d', '--no-show-raw-insn', '--start-address=0x%x' % (addr + size),
                              '--stop-address=0x%x' % nxt, EXE], capture_output=True, text=True).stdout
        tail = parse([l for l in out.splitlines() if INSN.match(l)], stack, exe_bytes, False)
        F.tail = tail
    return F


def port(addr):
    obj = None
    for sub in ('direct', 'verified'):
        p = os.path.join(OBJDIR, sub, 'ap_%08x.cpp.obj' % addr)
        if os.path.exists(p):
            obj = p
            break
    if not obj:
        return None
    out = subprocess.run([OBJDUMP, '-dr', '--no-show-raw-insn', obj], capture_output=True, text=True).stdout
    # only the ap_ function: from its label to the next label
    lines, inside = [], False
    for l in out.splitlines():
        if re.match(r'^[0-9a-f]+ <', l):
            inside = ('ap_%08x' % addr) in l
            continue
        if inside:
            lines.append(l)
    def section(name):
        dump = subprocess.run([OBJDUMP, '-s', '-j', name, obj], capture_output=True, text=True).stdout
        data = bytearray()
        for l in dump.splitlines():
            m = re.match(r'^ ([0-9a-f]{4,8}) ((?:[0-9a-f]{2,8} ?){1,4})', l)
            if m:
                data += bytes.fromhex(m.group(2).replace(' ', ''))
        return data
    rdata = section('.rdata')
    def reader(off, width):
        return bytes(rdata[off:off + width])
    F = parse(lines, {'%esp', '%ebp'}, reader, True)
    # Addresses the object keeps as data: callees of bea_guard objects (set
    # by the static initialiser in .text.startup, loaded from memory), and
    # constants GCC stores from .rdata with SSE moves (0x42f2b0's vtable
    # pointer and the 0 after it went out as one movq).  Take the code and
    # data addresses the whole object mentions, less the port's own (the
    # registrar) and the hook descriptor's.
    words = set()
    for m in IMM.finditer(out):
        words.add(int(m.group(1), 16))
    for sec in (rdata, section('.data')):
        for i in range(0, len(sec) - 3, 4):
            words.add(struct.unpack_from('<I', sec, i)[0])
    for v in words:
        if TEXT[0] <= v < TEXT[1] and v != addr:
            (F.softcalls if soft_call(v) else F.calls).add(v)
        elif RDATA[0] <= v < DATA_END and not (RDATA[0] <= v < IAT_END):
            F.globals.add(v)
    F.calls.discard(addr)
    return F


def main():
    argv = sys.argv[1:]
    want_all = '--all' in argv
    show_soft = '--soft' in argv
    jout = None
    if '--json' in argv:
        jout = argv[argv.index('--json') + 1]
        argv.remove(jout)
    argv = [a for a in argv if not a.startswith('--')]
    fn = funcs()
    # reviewed differences that are not port bugs: tools/fingerprint_allow.txt, `addr reason`
    allow = {}
    try:
        for line in open(os.path.join(ROOT, 'tools', 'fingerprint_allow.txt')):
            tok = line.split(None, 1)
            if tok and not tok[0].startswith('#'):
                allow[int(tok[0], 16)] = tok[1].strip() if len(tok) > 1 else ''
    except OSError:
        pass
    if argv:
        addrs = [int(a, 16) for a in argv]
    else:
        dirs = ['direct'] + (['verified'] if want_all else [])
        addrs = sorted(int(os.path.basename(p)[3:11], 16)
                       for d in dirs for p in glob.glob(os.path.join(ROOT, 'src', 'bea', d, 'ap_*.cpp')))
    def one(a):
        if a not in fn:
            return a, None, None
        p = port(a)
        if p is None:
            return a, None, None
        return a, original(a, fn[a][1]), p
    results = {}
    nhard = 0
    with ThreadPoolExecutor(8) as ex:
        for a, o, p in ex.map(one, addrs):
            if o is None:
                continue
            hard, soft = o.diff(p)
            if a in allow and hard:
                soft, hard = soft + ['allowed: ' + ' '.join(hard)], []
            results['%08x' % a] = {'hard': hard, 'soft': soft}
            if hard:
                nhard += 1
                print('%08x: %s%s' % (a, ' '.join(hard), ('  [' + ' '.join(soft) + ']') if show_soft and soft else ''))
            elif show_soft and soft:
                print('%08x: ok  [%s]' % (a, ' '.join(soft)))
    print('%d of %d ports with a hard difference' % (nhard, len(results)))
    if jout:
        json.dump(results, open(jout, 'w'), indent=1)
    sys.exit(1 if nhard else 0)


if __name__ == '__main__':
    main()
