"""Ports whose float sums or products are grouped differently from the original.

Bug class 19: the x87 runs at the precision D3D leaves it (24-bit mantissa), so
every add and multiply rounds, and (a + b) + c differs from a + (b + c).
Ghidra prints a sum of three products in its own order (`z*z + y*y + x*x`
where the asm adds x*x + y*y first), and a port that keeps Ghidra's order
plays differently: the landing test of 2026-10-28 found four (0x478c20 triangle
hit test, 0x425760 basis normalise, 0x44a2d0 sun direction, plus 0x40d320 and
0x53c1d0 before).  The fingerprint (tools/fingerprint.py) counts x87 ops and
cannot see order.

This rebuilds the x87 expressions of both sides symbolically (objdump -M intel
of BEA.exe and of the port's object): a stack of expression trees; leaves are
memory operands named by what the address register holds (this, an argument,
a pointer loaded from one, a global), constants, and call results; a value
stored and loaded again is its tree.  Every chain of + / - (and of *) is then
keyed by its multiset of terms: when the original and the port both compute
the same terms but group them differently, that is reported.

    python -I tools/check_fp_order.py [addr ...]     (default: every built port)

Exit 1 if any port groups differently.
"""
import glob, os, re, subprocess, sys
from collections import Counter, defaultdict
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import fingerprint as fp            # noqa: E402  (objdump path, function table)

OBJDIR = fp.OBJDIR
LINE = re.compile(r'^\s*([0-9a-f]+):\t(\S+)\s*(.*?)\s*$')
MEMOP = re.compile(r'(?:(BYTE|WORD|DWORD|QWORD|TBYTE) PTR )?(?:ds:(0x[0-9a-f]+)|\[([^\]]+)\])')
REGS = ('eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp')
# --loose: a field through a register whose value is not tracked is named by its
# offset alone, and so is every tracked non-stack base: the port's compiler reloads
# `this` from a spill slot after a call where the original keeps it in esi, and the
# strict names then differ (CBomber::vslot66 0x4162e0, missed until 2026-10-29)
LOOSE = False
ARITH = {'fadd': '+', 'fsub': '-', 'fsubr': 'r-', 'fmul': '*', 'fdiv': '/', 'fdivr': 'r/'}


class State:
    def __init__(self):
        self.st = []                # x87 stack, st(0) last
        self.reg = {}               # register -> (base, offset)
        self.mem = {}               # memory label -> tree
        self.uniq = 0
        self.port = False
        self.pending = 0            # bytes pushed since the last call (its arguments)
        self.prologue = True        # before the first call or jump: pushes of ebx/esi/edi/ebp save them
        self.written = set()

    def copy(self):
        s = State()
        s.st, s.reg, s.mem, s.uniq, s.port = list(self.st), dict(self.reg), dict(self.mem), self.uniq, self.port
        s.pending, s.prologue, s.written = self.pending, self.prologue, set(self.written)
        return s


DEBUG = os.environ.get('BEA_FPDEBUG') == '1'


def show(n):
    if n[0] == 'L':
        return n[1]
    if len(n) == 3:
        return '(%s%s%s)' % (show(n[1]), n[0], show(n[2]))
    return '%s(%s)' % (n[0], show(n[1]))


def leaf(name):
    return ('L', name)


def parse_ptr(s, st):
    """(base, off) of an address expression `esp+0x18`, `eax+ecx*4+0x8`; base None if unknown"""
    base, off = None, 0
    for term in re.findall(r'[+-]?[^+-]+', s.replace(' ', '')):
        sign = -1 if term.startswith('-') else 1
        t = term.lstrip('+-')
        if '*' in t:
            return None, 0          # indexed: an array element, unnamed
        if t in REGS:
            if base is not None:
                return None, 0
            b = st.reg.get(t)
            if b is None:
                if not LOOSE or t in ('esp', 'ebp'):
                    return None, 0
                b = ('?', 0)
            base, off = b[0], off + b[1]
        else:
            try:
                off += sign * int(t, 16)
            except ValueError:
                return None, 0
    return base, off


def mem_label(ops, st):
    """the name of a memory operand, or None when it has none"""
    m = MEMOP.search(ops)
    if not m:
        return None
    if m.group(2):
        a = int(m.group(2), 16)
        # .rdata constants of BEA.exe; a port's own constants are relocated
        # from offset 0 of its object's .rdata
        if a < 0x400000 or 0x5d8000 <= a < 0x622000:
            return 'C'
        return 'g%x' % a
    base, off = parse_ptr(m.group(3), st)
    if base is None:
        return None
    if base == 'sp':
        if off >= 4:
            return 'arg%d+%x' % ((off - 4) // 4, (off - 4) % 4)
        return 'fr:sp:%d' % off if st.port else 'stk%d' % off
    if base.startswith('aligned'):
        return 'fr:%s:%d' % (base, off)
    if base == 'abs':
        return 'g%x' % off
    if LOOSE:
        return '+%x' % off
    return '%s+%x' % (base, off)


def fresh(st, what):
    st.uniq += 1
    return '%s%d' % (what, st.uniq)


def walk(lines, port):
    """records: list of trees stored, compared or returned"""
    insns = []
    for l in lines:
        m = LINE.match(l)
        if m:
            insns.append((int(m.group(1), 16), m.group(2), m.group(3)))
    if not insns:
        return []
    index = {a: i for i, (a, _, _) in enumerate(insns)}
    recs = []
    s0 = State()
    s0.port = port
    s0.reg['ecx'] = ('this', 0)
    s0.reg['esp'] = ('sp', 0)
    work, seen = [(0, s0)], set()

    def pop(st):
        return st.st.pop() if st.st else leaf('ret')

    def top(st, i=0):
        while len(st.st) <= i:
            st.st.insert(0, leaf('ret'))   # a call's x87 result
        return st.st[-1 - i]

    def setst(st, i, v):
        top(st, i)
        st.st[-1 - i] = v

    def sti(op):
        m = re.fullmatch(r'st(?:\((\d)\))?', op.strip())
        return int(m.group(1) or 0) if m else None

    while work:
        i, st = work.pop()
        while i < len(insns):
            a, mn, ops = insns[i]
            if a in seen:
                break
            seen.add(a)
            i += 1
            ops = re.sub(r'\s*<[^>]*>', '', ops)
            if DEBUG:
                print('%6x %-7s %-28s %s' % (a, mn, ops, '  '.join(show(t)[:70] for t in reversed(st.st[-3:]))))
            args = [o.strip() for o in re.split(r',(?![^\[]*\])', ops)] if ops else []
            if mn.startswith('f'):
                base = mn.rstrip('p') if mn not in ('fsubrp', 'fdivrp') else mn[:-1]
                if mn in ('fld', 'fild'):
                    k = sti(args[0]) if args else None
                    if k is not None:
                        st.st.append(top(st, k))
                    else:
                        lab = mem_label(ops, st)
                        if mn == 'fild':
                            st.st.append(('int', leaf(lab or fresh(st, 'm'))))
                        elif lab and lab in st.mem:
                            st.st.append(st.mem[lab])
                        else:
                            st.st.append(leaf(lab or fresh(st, 'm')))
                elif mn in ('fldz', 'fld1', 'fldpi', 'fldl2e', 'fldln2', 'fldlg2', 'fldl2t'):
                    st.st.append(leaf('C'))
                elif mn in ('fst', 'fstp', 'fist', 'fistp', 'fisttp'):
                    v = top(st)
                    k = sti(args[0]) if args else None
                    if k is not None:
                        setst(st, k, v)
                    else:
                        lab = mem_label(ops, st)
                        recs.append(v)
                        if lab and lab != 'C':
                            st.mem[lab] = v if mn in ('fst', 'fstp') else leaf(fresh(st, 'i'))
                    if mn.endswith('p'):
                        pop(st)
                elif base in ARITH:
                    o = ARITH[base]
                    k0 = sti(args[0]) if args else None
                    k1 = sti(args[1]) if len(args) > 1 else None
                    if args and k0 is None:            # memory operand: st0 op m
                        lab = mem_label(ops, st)
                        r = st.mem.get(lab) if lab else None
                        r = r or leaf(lab or fresh(st, 'm'))
                        if mn.startswith('fi'):
                            r = ('int', r)
                        dst, x, y = 0, top(st), r
                    elif k1 is not None and k0 != 0:   # st(i) op st
                        dst, x, y = k0, top(st, k0), top(st)
                    else:                              # st op st(i), or no operand: st(1) op st, pop
                        if not args:
                            dst, x, y = 1, top(st, 1), top(st)
                        else:
                            kk = k1 if k1 is not None else k0
                            dst, x, y = 0, top(st), top(st, kk)
                    if o.startswith('r'):
                        x, y, o = y, x, o[1:]
                    setst(st, dst, (o, x, y))
                    if mn.endswith('p') or not args:
                        pop(st)
                elif mn in ('fchs', 'fabs', 'fsqrt', 'fsin', 'fcos', 'frndint'):
                    setst(st, 0, (mn, top(st)))
                elif mn == 'fxch':
                    k = sti(args[0]) if args else 1
                    x, y = top(st), top(st, k)
                    setst(st, 0, y)
                    setst(st, k, x)
                elif mn.startswith(('fcom', 'fucom', 'ftst')):
                    recs.append(top(st))
                    k = sti(args[-1]) if args else (1 if mn.startswith(('fcom', 'fucom')) else None)
                    if k:                              # st compared with st(k): GCC's fcomip st,st(1)
                        recs.append(top(st, k))
                    if mn.endswith('pp'):
                        pop(st); pop(st)
                    elif mn.endswith('p'):
                        pop(st)
                elif mn in ('fpatan', 'fyl2x', 'fprem', 'fscale', 'fsincos', 'fptan', 'f2xm1'):
                    st.st = st.st[:-2] if mn in ('fpatan', 'fyl2x') else st.st
                    st.st.append(leaf(fresh(st, mn)))
                continue
            # integer side: track what the address registers hold
            dst = args[0] if args else ''
            if mn == 'call' or mn.startswith('j') or mn == 'ret':
                st.prologue = False
            elif st.prologue and dst in REGS and mn != 'push':
                st.written.add(dst)
            if mn == 'push':
                e = st.reg.get('esp')
                if e:
                    st.reg['esp'] = (e[0], e[1] - 4)
                if not (st.prologue and dst in ('ebx', 'esi', 'edi', 'ebp') and dst not in st.written):
                    st.pending += 4
            elif mn == 'pop':
                if dst in REGS:
                    st.reg.pop(dst, None)
                e = st.reg.get('esp')
                if e:
                    st.reg['esp'] = (e[0], e[1] + 4)
            elif mn in ('call',):
                st.st = []
                for r in ('eax', 'ecx', 'edx'):
                    st.reg.pop(r, None)
                # a thiscall/stdcall callee pops its arguments (`ret N`): VC6
                # leaves it at that, GCC re-reserves them with `sub esp, N`;
                # a cdecl call is followed by `add esp, N`.  Without this the
                # stack names drifted by N after every such call (0x401ec0,
                # Vec3 set, pops 0xc), so sums of locals set by it went unseen
                nxt = insns[i] if i < len(insns) else None
                e = st.reg.get('esp')
                if e and nxt and nxt[1] == 'sub' and nxt[2].replace(' ', '').startswith('esp,'):
                    try:
                        st.reg['esp'] = (e[0], e[1] + int(nxt[2].split(',')[1].strip(), 16))
                    except ValueError:
                        pass
                elif e and not (nxt and nxt[1] == 'add' and nxt[2].replace(' ', '').startswith('esp,')):
                    st.reg['esp'] = (e[0], e[1] + st.pending)
                st.pending = 0
            elif mn in ('ret', 'jmp') and (mn == 'ret' or '[' in ops or not re.match(r'^(0x)?[0-9a-f]+$', ops.split()[0] if ops else '')):
                # (BEA.exe's direct targets print as 0x429329, the port objects' without
                # 0x: the original's paths ended at every jmp and paired other branches)
                if st.st:
                    recs.append(st.st[-1])
                break
            elif mn == 'jmp':
                t = int(ops.split()[0], 16)
                if t in index:
                    i = index[t]
                    continue
                break
            elif mn.startswith('j') or mn.startswith('loop'):
                try:
                    t = int(ops.split()[0], 16)
                except ValueError:
                    t = None
                if t in index:
                    work.append((index[t], st.copy()))
            elif dst in REGS:
                src = args[1] if len(args) > 1 else ''
                if mn == 'mov' and src in REGS:
                    v = st.reg.get(src)
                    if v:
                        st.reg[dst] = v
                    else:
                        st.reg.pop(dst, None)
                elif mn == 'mov' and '[' in src or (mn == 'mov' and 'ds:' in src):
                    lab = mem_label(src, st)
                    st.reg[dst] = ('*' + lab, 0) if lab else (fresh(st, 'u'), 0)
                elif mn == 'mov' and re.fullmatch(r'0x[0-9a-f]+', src):
                    st.reg[dst] = ('abs', int(src, 16))
                elif mn == 'lea':
                    m = re.search(r'\[([^\]]+)\]', src)
                    b, o = parse_ptr(m.group(1), st) if m else (None, 0)
                    st.reg[dst] = (b, o) if b else (fresh(st, 'u'), 0)
                elif mn in ('add', 'sub') and re.fullmatch(r'0x[0-9a-f]+', src) and dst in st.reg:
                    b, o = st.reg[dst]
                    st.reg[dst] = (b, o + (int(src, 16) if mn == 'add' else -int(src, 16)))
                elif mn in ('cmp', 'test'):
                    pass
                elif dst == 'esp' and mn == 'and':
                    st.reg['esp'] = (fresh(st, 'aligned'), 0)
                else:
                    st.reg[dst] = (fresh(st, 'u'), 0)
            elif mn in ('mov', 'movl') and '[' in dst:
                lab = mem_label(dst, st)
                if lab:
                    # a dword copied through a register keeps its name: VC6 copies a
                    # vector to the stack by `mov edx, [ecx]; mov [esp+4], edx` and
                    # sums the copy, the port reads the source (0x4cba90's squared
                    # distance in another order went unseen until 2026-10-30)
                    v = st.reg.get(args[1]) if len(args) > 1 else None
                    if v and v[1] == 0 and v[0].startswith('*'):
                        st.mem[lab] = st.mem.get(v[0][1:]) or leaf(v[0][1:])
                    else:
                        st.mem[lab] = leaf(fresh(st, 'w'))
            if dst == 'esp' and mn == 'mov' and len(args) > 1 and args[1] == 'ebp':
                pass
    return recs


def chains(t, out):
    """every + / - chain and * chain of tree t: (kind, key = sorted terms, shape)"""
    # negation is exact, so a sign is moved out of a product and into a sum's
    # term sign: GCC folds -(a)*-(a) to a*a where the original keeps both fchs
    # (0x47a0b0, missed until 2026-10-31)
    def terms(n, kind, sign, acc):
        if n[0] in ('+', '-') and kind == '+':
            terms(n[1], kind, sign, acc)
            terms(n[2], kind, sign if n[0] == '+' else -sign, acc)
        elif n[0] == '*' and kind == '*':
            terms(n[1], kind, sign, acc)
            terms(n[2], kind, sign, acc)
        elif n[0] == 'fchs' and len(n) == 2:
            terms(n[1], kind, -sign, acc)
        else:
            acc.append((sign if kind == '+' else 1, shape(n)))
    def unneg(n):
        neg = False
        while n[0] == 'fchs' and len(n) == 2:
            n, neg = n[1], not neg
        return n, neg
    def shape(n):
        if n[0] == 'L':
            return n[1]
        if n[0] == '*':
            (x, nx), (y, ny) = unneg(n[1]), unneg(n[2])
            a, b = sorted((shape(x), shape(y)))
            s = '(%s*%s)' % (a, b)
            return 'fchs(%s)' % s if nx != ny else s
        if n[0] == '+':
            a, b = sorted((shape(n[1]), shape(n[2])))
            return '(%s%s%s)' % (a, n[0], b)
        if len(n) == 3:
            return '(%s%s%s)' % (shape(n[1]), n[0], shape(n[2]))
        return '%s(%s)' % (n[0], shape(n[1]))
    def visit(n, parent):
        if n[0] == 'L':
            return
        kind = '+' if n[0] in ('+', '-') else '*' if n[0] == '*' else None
        pk = '+' if parent in ('+', '-') else '*' if parent == '*' else None
        if kind and kind != pk:
            acc = []
            terms(n, kind, 1, acc)
            if len(acc) >= 3:
                out.append((kind, tuple(sorted(acc)), shape(n)))
        for c in n[1:]:
            if isinstance(c, tuple):
                visit(c, n[0])
    visit(t, None)


def orig_lines(addr, size):
    out = subprocess.run([fp.OBJDUMP, '-d', '-M', 'intel', '--no-show-raw-insn', '--start-address=0x%x' % addr,
                          '--stop-address=0x%x' % (addr + size), fp.EXE], capture_output=True, text=True).stdout
    return out.splitlines()


def port_lines(addr):
    for sub in ('direct', 'verified', 'autoport'):
        p = os.path.join(OBJDIR, sub, 'ap_%08x.cpp.obj' % addr)
        if os.path.exists(p):
            out = subprocess.run([fp.OBJDUMP, '-d', '-M', 'intel', '--no-show-raw-insn', p], capture_output=True, text=True).stdout
            lines, inside = [], False
            for l in out.splitlines():
                if re.match(r'^[0-9a-f]+ <', l):
                    inside = re.search(r'<_?_?Z?\w*ap_%08x' % addr, l) is not None
                    continue
                if inside:
                    lines.append(l)
            return lines
    return None


def leaves(t, out):
    if t[0] == 'L':
        out.add(t[1])
    else:
        for c in t[1:]:
            if isinstance(c, tuple):
                leaves(c, out)
    return out


def rename(t, m):
    if t[0] == 'L':
        return ('L', m.get(t[1], t[1]))
    return tuple(rename(c, m) if isinstance(c, tuple) else c for c in t)


def calibrate(otrees, ptrees, o):
    """The port keeps the original's stack locals in its own frame (emulate_frame's
    bea_frame_, or plain locals) at an unknown distance from the original's
    entry esp: name each port frame slot as the original slot it stands for, by
    the shift that makes the most float chains of the two sides match (a sum of
    stack locals in another order, 0x440510 CCylinder::vslot4, was invisible to
    both modes until 2026-10-30)"""
    from collections import Counter
    ostk = set()
    for t in otrees:
        leaves(t, ostk)
    ooffs = sorted(int(x[3:]) for x in ostk if x.startswith('stk'))
    pl = set()
    for t in ptrees:
        leaves(t, pl)
    okeys = {(k, key) for k, key, _ in o}
    bases = defaultdict(list)
    for x in pl:
        if x.startswith('fr:'):
            _, b, off = x.split(':')
            bases[b].append(int(off))
    m = {}
    for b, offs in sorted(bases.items()):
        offs = sorted(offs)
        diffs = Counter(po - oo for po in offs for oo in ooffs)
        best, bestn = None, -1
        for d, _ in diffs.most_common(8):
            mm = dict(m)
            mm.update({'fr:%s:%d' % (b, po): 'stk%d' % (po - d) for po in offs})
            p = []
            for t in ptrees:
                chains(rename(t, mm), p)
            n = sum((k, key) in okeys for k, key, _ in p)
            if n > bestn:
                best, bestn = mm, n
        if best is not None:
            m = best
    return [rename(t, m) for t in ptrees]


def check(addr):
    fn = fp.funcs().get(addr)
    pl = port_lines(addr)
    if not fn or pl is None:
        return None
    o, p = [], []
    otrees = walk(orig_lines(addr, fn[1]), False)
    ptrees = walk(pl, True)
    for t in otrees:
        chains(t, o)
    ptrees = calibrate(otrees, ptrees, o)
    for t in ptrees:
        chains(t, p)
    pk = defaultdict(set)
    for kind, key, shape in p:
        pk[(kind, key)].add(shape)
    bad = []
    for kind, key, shape in o:
        got = pk.get((kind, key))
        if got and shape not in got:
            bad.append((shape, sorted(got)))
    return bad


def main():
    global LOOSE
    args = sys.argv[1:]
    if '--loose' in args:
        LOOSE = True
        args.remove('--loose')
    addrs = [int(a, 16) for a in args]
    if not addrs:
        for sub in ('direct', 'verified', 'autoport'):
            for p in glob.glob(os.path.join(OBJDIR, sub, 'ap_*.cpp.obj')):
                # an object whose source is gone (the port went back to the pool) is not in the DLL
                if os.path.exists(os.path.join(ROOT, 'src', 'bea', sub, os.path.basename(p)[:-4])):
                    addrs.append(int(re.search(r'ap_([0-9a-f]{8})', p).group(1), 16))
    n = 0
    fp.funcs()      # load the table before the threads: one filling it lazily let the others see it half full
    with ThreadPoolExecutor(8) as ex:
        for addr, bad in zip(addrs, ex.map(check, addrs)):
            if bad:
                n += 1
                seen = set()
                for shape, got in bad:
                    if shape in seen:
                        continue
                    seen.add(shape)
                    print('%08x: original %s' % (addr, shape))
                    print('          port     %s' % ' | '.join(got))
    print('%d of %d ports group float sums or products differently' % (n, len(addrs)))
    sys.exit(1 if n else 0)


if __name__ == '__main__':
    main()
