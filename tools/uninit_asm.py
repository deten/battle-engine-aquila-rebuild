"""Reads of an original function's own stack frame that may come before any
write: the game's own uninitialised reads, which see whatever earlier code
left there.  With ports the leftovers differ (other frames, other depths),
so such a read can change an outcome: 0x446150's guide threshold (311,
2026-10-31) and 0x402fa0's frame under the bombers (800c, 742).

    python -I tools/uninit_asm.py ADDR...

Follows the control flow with the ESP offset of tools/callsites.py.  A slot
counts as written on a path once an instruction stores to it; an address
taken with `lea` makes the slot (16 bytes from it) written after the next
call, as a callee may fill it.  At a merge a slot is written only if every
incoming path wrote it.  Prints each read of a slot below the entry ESP that
some path reaches unwritten.
"""
import os, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import fingerprint as fp                                      # noqa: E402
import callsites as cs                                        # noqa: E402
from asmlift import decode                                    # noqa: E402
from capstone.x86 import X86_OP_MEM, X86_OP_REG, X86_OP_IMM   # noqa: E402


def esp_offsets(addr):
    """ESP below the entry ESP before each instruction (callsites.sites' walk)"""
    fn = fp.funcs()[addr]
    nxt = min((b for b in fp.funcs() if b > addr), default=addr + fn[1])
    insns, tables = decode(addr, max(fn[1], nxt - addr))
    order = sorted(insns)
    # rerun the walk, recording the offset at each instruction
    offs = {}
    orig = cs.sites.__code__
    out, _ = cs.sites(addr)          # validates the walk
    # a second, local walk: same rules, kept simple (no calls' pops guessed differently)
    return insns, tables, order


def analyse(addr):
    insns, tables, order = esp_offsets(addr)
    nexti = {a: order[i + 1] for i, a in enumerate(order[:-1])}
    # per instruction: (esp offset, ebp offset, written set, pending escaped set)
    state = {addr: (0, None, frozenset(), frozenset())}
    work = [addr]
    reported = {}
    seen_pass = {}
    while work:
        a = work.pop()
        o, ebp, wr, esc = state[a]
        x = insns[a]
        m = x.mnemonic
        ops = x.operands

        def slot(op):
            mem = op.mem
            base = x.reg_name(mem.base) if mem.base else None
            if mem.index:
                return None
            if base == 'esp':
                return o - mem.disp            # bytes below the entry ESP (positive: inside the frame)
            if base == 'ebp' and ebp is not None:
                return ebp - mem.disp
            return None

        def width(op):
            return op.size or 4

        # which memory operands are read and which written
        STORE = {'mov', 'fstp', 'fst', 'fistp', 'fist', 'fnstsw', 'fnstcw', 'fstsw', 'fstcw', 'movsd', 'stosd', 'pop'}
        NOREAD = STORE | {'lea'}
        reads, writes = [], []
        for i, op in enumerate(ops):
            if op.type != X86_OP_MEM:
                continue
            if m == 'lea':
                continue
            first = i == 0
            if first and (m in STORE or m.startswith('set')):
                writes.append(op)
            elif first and m in ('cmp', 'test', 'push', 'call', 'jmp') or m.startswith('j'):
                reads.append(op)
            elif first and len(ops) == 1 and m.startswith('f'):
                reads.append(op)                # fld / fadd / fcomp m ... read
            elif first and len(ops) >= 1:
                reads.append(op); writes.append(op)   # read-modify-write (add [m], r / inc [m])
            else:
                reads.append(op)
        for op in reads:
            s = slot(op)
            if s is None or s <= 0:
                continue
            need = set(range(s, s - width(op), -1))
            if not need <= wr:
                reported.setdefault(a, (s, width(op), x.mnemonic + ' ' + x.op_str))
        nw = set(wr)
        for op in writes:
            s = slot(op)
            if s is not None and s > 0:
                nw |= set(range(s, s - width(op), -1))
        if m == 'push':
            nw |= set(range(o + 4, o, -1))
        if m == 'lea' and ops[1].type == X86_OP_MEM:
            s = slot(ops[1])
            if s is not None and s > 0:
                esc = esc | frozenset(range(s, s - 16, -1))
        if m == 'call':
            nw |= esc
            esc = frozenset()
        # esp tracking (as callsites.sites)
        no, nebp = o, ebp
        if m == 'push':
            no += 4
        elif m == 'pop':
            no -= 4
            if ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'ebp':
                nebp = None
        elif m in ('sub', 'add') and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'esp' and ops[1].type == X86_OP_IMM:
            no += ops[1].imm if m == 'sub' else -ops[1].imm
        elif m == 'mov' and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'ebp' and ops[1].type == X86_OP_REG \
                and x.reg_name(ops[1].reg) == 'esp':
            nebp = o
        elif m == 'leave' and ebp is not None:
            no, nebp = ebp - 4, None
        if m == 'call':
            tgt = ops[0].imm if ops[0].type == X86_OP_IMM else None
            pops = cs.callee_pops(tgt) if tgt else None
            if pops is None and ops[0].type == X86_OP_MEM and ops[0].mem.base:
                pops = cs.vslot_pops(ops[0].mem.disp)
            no -= pops or 0
        if m in ('ret', 'int3', 'hlt'):
            succ = []
        elif m == 'jmp':
            succ = [ops[0].imm] if ops[0].type == X86_OP_IMM and ops[0].imm in insns else tables.get(a, [])
        elif m.startswith('j'):
            succ = [ops[0].imm, nexti.get(a)] if ops[0].type == X86_OP_IMM and ops[0].imm in insns else [nexti.get(a)]
        else:
            succ = [nexti.get(a)]
        st_w = frozenset(nw)
        for s_ in succ:
            if s_ is None or s_ not in insns:
                continue
            if s_ in state:
                po, pebp, pw, pesc = state[s_]
                merged = pw & st_w
                if merged != pw:
                    state[s_] = (po, pebp, merged, pesc | esc)
                    work.append(s_)
                continue
            state[s_] = (no, nebp, st_w, frozenset(esc))
            work.append(s_)
    return reported


def main():
    for h in sys.argv[1:]:
        addr = int(h, 16)
        rep = analyse(addr)
        for a in sorted(rep):
            s, w, t = rep[a]
            print('%08x  %08x  reads entry-0x%x (%d bytes) maybe unset: %s' % (addr, a, s, w, t))
        print('%08x: %d reads' % (addr, len(rep)))


if __name__ == '__main__':
    main()
