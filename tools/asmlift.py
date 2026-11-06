"""Lift an original function, instruction by instruction, into C (2026-10-30).

    python -I tools/asmlift.py ADDR...            write src/bea/lifted/lift_ADDR.cpp
    python -I tools/asmlift.py --check ADDR...    only say whether each can be lifted
    python -I tools/asmlift.py --survey FILE      the same for a file of addresses, reasons counted

The output keeps the original's semantics, not its structure: registers are
locals, flags follow the instruction set, the x87 stack is the hardware's own
arithmetic on 80-bit values under the game's control word, every memory
access (the stack included) is the original's, and calls run on the game
stack (src/bea/lifted/lift_rt.h).  Instruction emitters: asmlift_int.py,
asmlift_x87.py.  Refused: fs: accesses (SEH frames), instructions with no
emitter, indirect jumps without a readable table, undecodable code.
"""
import os, struct, sys
from collections import Counter

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if os.path.join(ROOT, 'tools') not in sys.path:
    sys.path.append(os.path.join(ROOT, 'tools'))      # (appended: tools/bisect.py shadows the stdlib's)
import fingerprint as fp                                      # noqa: E402
from capstone import Cs, CS_ARCH_X86, CS_MODE_32              # noqa: E402
from capstone.x86 import X86_OP_IMM, X86_OP_MEM               # noqa: E402
from asmlift_ops import Refuse, Ops                           # noqa: E402

OUT = os.path.join(ROOT, 'src', 'bea', 'lifted')
HARNESS = {0x00423bc0, 0x005159e0}     # ParseArgs (windowed mode), Platform_GetTime: platform/test_harness.cpp
MD = Cs(CS_ARCH_X86, CS_MODE_32)
MD.detail = True


def decode(entry, size):
    """the function's instructions, followed by control flow from the entry,
    and its jump tables: ({address: insn}, {jmp address: [targets]})"""
    lo, hi = entry, entry + size
    insns, tables, work = {}, {}, [entry]
    while work:
        a = work.pop()
        while a not in insns:
            if not lo <= a < hi:
                raise Refuse('code outside the function at %08x' % a)
            x = next(MD.disasm(fp.exe_bytes(a, 16), a), None)
            if x is None:
                raise Refuse('cannot decode %08x' % a)
            insns[a] = x
            m = x.mnemonic
            if m in ('ret', 'int3', 'hlt'):
                break
            if m.startswith('j'):
                op = x.operands[0]
                if op.type == X86_OP_IMM:
                    if lo <= op.imm < hi:
                        work.append(op.imm)
                    if m == 'jmp':
                        break
                elif m == 'jmp':
                    if op.type == X86_OP_MEM and op.mem.base == 0 and op.mem.index and op.mem.scale == 4:
                        ents = []
                        for k in range(512):
                            raw = fp.exe_bytes(op.mem.disp + 4 * k, 4)
                            e = struct.unpack('<I', raw)[0] if len(raw) == 4 else 0
                            if not lo <= e < hi:
                                break
                            ents.append(e)
                        if not ents:
                            raise Refuse('jump table at %08x unreadable' % a)
                        tables[a] = ents
                        work.extend(ents)
                    break
                else:
                    raise Refuse('%s with a register operand at %08x' % (m, a))
            a += x.size
    return insns, tables


def lift(addr):
    """the C++ source of the lifted function"""
    fn = fp.funcs().get(addr)
    if not fn:
        raise Refuse('not in the function table')
    if addr in HARNESS:
        raise Refuse('hooked by the test harness')
    # up to the next function's entry: Ghidra's size leaves out the chunks it split
    # off (0x417190's last call is past its 439 bytes)
    nxt = min((b for b in fp.funcs() if b > addr), default=addr + fn[1])
    insns, tables = decode(addr, max(fn[1], nxt - addr))
    ops = Ops(addr, insns, tables)
    body = ops.body()
    h = '%08x' % addr
    out = ['// lifted from %08x (%s, %d bytes, %d instructions) by tools/asmlift.py' % (addr, fn[0], fn[1], len(insns)),
           '// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.',
           '#include "bea/lifted/lift_rt.h"',
           '',
           'extern "C" void lift_b_%s(LiftCtx* c)' % h,
           '{',
           '    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];',
           '    LF f = {0, 0, 0, 0};',
           '    LX87 x;',
           '    lift_x87_in(c, x);' if ops.fpu else '    (void)x;',
           '    uint32_t t0 = 0, t1 = 0;',
           '    long double v0 = 0, v1 = 0;',
           '    (void)t0; (void)t1; (void)v0; (void)v1;',
           '    goto L_%s;' % h]
    out += body
    out += ['}', '', '%s(0x%s, %s)' % ('LIFT_FUNCTION' if ops.fpu else 'LIFT_FUNCTION_NF', h, h), '']
    return '\n'.join(out)


def main():
    args = sys.argv[1:]
    check = '--check' in args
    survey = '--survey' in args
    args = [a for a in args if not a.startswith('--')]
    if survey:
        addrs = [int(l.split()[0], 16) for l in open(args[0]) if l.strip()]
    else:
        addrs = [int(a, 16) for a in args]
    why = Counter()
    ok = 0
    for a in addrs:
        try:
            src = lift(a)
        except Refuse as e:
            why[str(e).split(' at ')[0]] += 1
            if not survey:
                print('%08x: refused: %s' % (a, e))
            continue
        ok += 1
        if check or survey:
            if not survey:
                print('%08x: can be lifted' % a)
            continue
        os.makedirs(OUT, exist_ok=True)
        p = os.path.join(OUT, 'lift_%08x.cpp' % a)
        open(p, 'w').write(src)
        print('%08x: %s' % (a, os.path.relpath(p, ROOT)))
    if survey:
        print('%d of %d can be lifted' % (ok, len(addrs)))
        for k, n in why.most_common(30):
            print('  %4d  %s' % (n, k))


if __name__ == '__main__':
    main()
