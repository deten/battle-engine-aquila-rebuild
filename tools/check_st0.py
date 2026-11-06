"""List ports that disagree with the original about x87 return values.

A game function that returns a float leaves it in ST(0); the original caller
then consumes it (fstp, fcomp, fmul ...), and a caller that ignores it still
pops it (`fstp st(0)`).  A port whose typedef declares such a callee as
returning an integer never pops it: after eight such calls the x87 register
stack overflows and every later load is a NaN (2026-10-20: STATUS_FLOAT_STACK_
CHECK traps in port code under BEA_FPTRAP, NaN hangs in the angle-wrap and
grid loops).  The reverse (a float10 typedef for a callee that returns
nothing in ST(0)) underflows the stack.

For each call in the original function this looks at the next instruction:
an x87 instruction that reads ST(0) without loading first means the callee
returned a float.
    python -I tools/check_st0.py [dirs or files...]   (default: every port)
Prints "<port> <callee> original=st0|int port=<typedef return>".
"""
import glob
import os
import re
import sys

sys.path.append(os.path.dirname(os.path.abspath(__file__)))   # after the stdlib: tools/bisect.py shadows bisect
import autoport as ap  # disasm_cached(), sizes from functions.csv

ROOT = ap.ROOT
# x87 instructions that consume ST(0) as an operand (not loads)
CONSUME = re.compile(r'^(fstp?|fist?p?|fisttp|fcomp?p?|fucomp?p?|fcomip?|fucomip?|ftst|fxam|fchs|fabs|fsqrt|fsin|fcos|'
                     r'fsincos|fptan|fpatan|frndint|fscale|fxtract|fprem1?|f2xm1|fyl2xp?1|'
                     r'fmulp?|faddp?|fsubr?p?|fdivr?p?|fxch|fimul|fiadd|fisubr?|fidivr?)$')


def call_returns_st0(ins, i):
    """True / False / None (undecidable): does the call at ins[i] leave a
    float in ST(0)?  The first x87 instruction after it, skipping integer
    work, consumes ST(0); a jump or call first means no; a load or `ret`
    first is undecidable."""
    for nxt in ins[i + 1:i + 9]:
        mn = nxt.mnemonic
        if mn.startswith('ret'):
            return None
        if mn == 'call' or mn.startswith('j'):
            return False
        if mn.startswith('f'):
            if mn == 'fld' and nxt.op_str.startswith('st('):
                return True      # `fld st(0)` copies the result (0x410c50 after 0x411aa0)
            if mn.startswith('fld') or mn.startswith('fild') or mn in ('fnstsw', 'fnstcw', 'fldcw', 'fwait', 'wait'):
                return None
            return bool(CONSUME.match(mn))
    return False


_CALLERS = None


def direct_callers():
    """callee -> [(caller, index of the call)] over every game function."""
    global _CALLERS
    if _CALLERS is None:
        _CALLERS = {}
        size = sizes()
        for a, s in size.items():
            if not (0x401000 <= a < 0x5d8000):
                continue
            ins = list(ap.disasm_cached(a, s))
            for k, x in enumerate(ins):
                if x.mnemonic == 'call' and re.fullmatch(r'0x[0-9a-f]+', x.op_str):
                    _CALLERS.setdefault(int(x.op_str, 16), []).append((a, k))
    return _CALLERS


def callers_say_st0(addr):
    """True / False from the original's direct callers (any caller that uses
    ST(0) after the call: a float; callers that all go on without reading it:
    none - VC6 never leaves a float unpopped), None when there are no direct
    callers or none of them is decidable."""
    size = sizes()
    votes = []
    for a, k in direct_callers().get(addr, []):
        votes.append(call_returns_st0(list(ap.disasm_cached(a, size[a])), k))
    if any(v is True for v in votes):
        return True
    if votes and all(v is False for v in votes):
        return False
    return None


PUSH1 = re.compile(r'^(fld|fild|fld1|fldz|fldpi|fldl2e|fldl2t|fldlg2|fldln2|fbld|fptan|fsincos|fxtract)$')
POP1 = re.compile(r'^(fstp|fistp|fisttp|fbstp|faddp|fsubp|fsubrp|fmulp|fdivp|fdivrp|fcomp|fucomp|fcomip|fucomip)$')
POP2 = re.compile(r'^(fcompp|fucompp)$')


def st0_at_ret(ins):
    """x87 stack depth at each `ret`, by a forward walk that carries the depth
    along jumps (calls count as 0: a float-returning callee is checked at its
    own call sites).  Returns the set of depths seen at `ret`."""
    depth_at = {}
    rets = set()
    depth = 0
    live = True          # falls through from the previous instruction
    for k, x in enumerate(ins):
        if x.mnemonic == 'call' and call_returns_st0(ins, k):
            depth += 1   # a float-returning callee (0x40e8e0: call 0x47eb80; fsub; fcomp)
        if not live:
            if x.address not in depth_at:
                continue  # unreachable from what we have walked
            depth = depth_at[x.address]
        elif x.address in depth_at:
            depth = max(depth, depth_at[x.address])
        mn = x.mnemonic
        live = True
        if PUSH1.match(mn):
            depth += 1
        elif POP1.match(mn) or (mn.startswith('f') and mn.endswith('p') and mn not in ('fwait',) and not mn.startswith('fld')):
            depth -= 1
        elif POP2.match(mn):
            depth -= 2
        if mn.startswith('j'):
            if x.op_str.startswith('0x'):
                depth_at.setdefault(int(x.op_str, 16), depth)
            if mn == 'jmp':
                live = False
        elif mn.startswith('ret'):
            rets.add(depth)
            live = False
    return rets


def sizes():
    import csv
    out = {}
    for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'functions.csv'), encoding='utf-8', errors='replace')):
        out[int(r['address'], 16)] = int(r['size'])
    return out


def main():
    paths = []
    for p in sys.argv[1:] or [os.path.join(ROOT, 'src', 'bea', '*')]:
        paths += glob.glob(os.path.join(p, 'ap_*.cpp')) if not p.endswith('.cpp') else [p]
    size = sizes()
    bad = 0
    for p in sorted(paths):
        m = re.match(r'ap_([0-9a-f]{8})\.cpp$', os.path.basename(p))
        if not m:
            continue
        addr = int(m.group(1), 16)
        t = open(p, errors='replace').read()
        # the port's own return: a float in ST(0) at `ret` in the original
        # must be a float return in the port (0x477ba0: Ghidra typed it void,
        # the shadow test compared memory and EAX and passed an empty body)
        if addr in size:
            rm = re.search(r'static\s+(.+?)\s+BEA_\w+\s+ap_%08x\s*\(' % addr, t)
            depths = st0_at_ret(list(ap.disasm_cached(addr, size[addr])))
            if rm and depths:
                own_st0 = rm.group(1).strip() in ('float10', 'float', 'double', 'long double', 'f80')
                orig_st0 = depths == {1}
                if orig_st0 != own_st0 and (depths == {1} or depths == {0}):
                    # the depth walk misreads some functions (0x411aa0 returns a
                    # float on every path, 27 "st0" ones have callers that never
                    # read one): the direct callers decide when they can, and
                    # only a mismatch they confirm is gated (direct_batch.py)
                    by_callers = callers_say_st0(addr)
                    if by_callers is not None:
                        orig_st0 = by_callers
                    if orig_st0 != own_st0:
                        print('%08x self original=%s port=%s (x87 depth at ret %s; %s)' % (
                            addr, 'st0' if orig_st0 else 'int', rm.group(1).strip(), sorted(depths),
                            'callers decide' if by_callers is not None else 'estimate only'))
                        bad += 1
        # callee address -> declared return type
        decl = {}
        for tm in re.finditer(r'typedef (.+?) \(\w+\* (\w+)_t\)\(.*?\);\s*static \2_t const \2 = \(\2_t\)0x([0-9a-f]+);', t):
            decl[int(tm.group(3), 16)] = tm.group(1).strip()
        if not decl or addr not in size:
            continue
        ins = list(ap.disasm_cached(addr, size[addr]))
        for i, x in enumerate(ins[:-1]):
            if x.mnemonic != 'call' or not x.op_str.startswith('0x'):
                continue
            callee = int(x.op_str, 16)
            if callee not in decl:
                continue
            # first x87 instruction after the call, skipping integer work
            # (`add esp, n`, moves); a control transfer before it means the
            # callee's ST(0) was not used; a load first, or `ret` (passing the
            # value on), is undecidable here and skipped
            st0 = None
            for nxt in ins[i + 1:i + 9]:
                mn = nxt.mnemonic
                if mn.startswith('ret'):
                    break
                if mn == 'call' or mn.startswith('j'):
                    st0 = False
                    break
                if mn.startswith('f'):
                    if mn == 'fld' and nxt.op_str.startswith('st('):
                        st0 = True
                        break
                    if mn.startswith('fld') or mn.startswith('fild') or mn in ('fnstsw', 'fnstcw', 'fldcw', 'fwait', 'wait'):
                        break
                    st0 = bool(CONSUME.match(mn))
                    break
            else:
                st0 = False
            if st0 is None:
                continue
            port_st0 = decl[callee] in ('float10', 'float', 'double', 'long double', 'f80')
            if st0 != port_st0:
                print('%08x %08x original=%s port=%s (next: %s %s)' % (addr, callee, 'st0' if st0 else 'int',
                                                                      decl[callee], nxt.mnemonic, nxt.op_str))
                bad += 1
    print('%d mismatching call(s)' % bad)
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
