"""The calls an original function makes, with the stack depth at each.

For a port that keeps stack parity (src/bea/parity.h): the original's ESP
at every call, as an offset below the function's entry ESP (where the return
address is), so the port can make the same call at the same depth.

    python -I tools/callsites.py 46cdf0 [--table]

Follows the control flow from the entry, tracking ESP through push/pop,
add/sub esp, an EBP frame and __alloca_probe; a callee's own `ret N` says
how much it pops.  An indirect call (a virtual one) pops what was pushed
since the previous call unless an `add esp` follows (cdecl); such sites are
marked '?'.  --table prints the C table the port registers.
"""
import argparse, os, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if os.path.join(ROOT, 'tools') not in sys.path:
    sys.path.append(os.path.join(ROOT, 'tools'))
import fingerprint as fp                                      # noqa: E402
from capstone import Cs, CS_ARCH_X86, CS_MODE_32              # noqa: E402
from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_OP_REG   # noqa: E402
from asmlift import decode                                    # noqa: E402

MD = Cs(CS_ARCH_X86, CS_MODE_32)
MD.detail = True
_pops = {}


def callee_pops(a):
    """bytes the function at a pops with its ret (None: unknown)"""
    if a in _pops:
        return _pops[a]
    r = None
    b = a
    for _ in range(4):                      # a thunk: `[mov ecx, imm;] jmp f`
        x = next(MD.disasm(fp.exe_bytes(b, 16), b), None)
        if x is not None and x.mnemonic == 'mov' and x.operands[0].type == X86_OP_REG:
            b += x.size
            continue
        if x is not None and x.mnemonic == 'jmp' and x.operands[0].type == X86_OP_IMM:
            a = b = x.operands[0].imm
            continue
        break
    fn = fp.funcs().get(a)
    if fn:
        nxt = min((b for b in fp.funcs() if b > a), default=a + fn[1])
        try:
            insns, _ = decode(a, max(fn[1], nxt - a))
            rets = {(x.operands[0].imm if x.operands else 0) for x in insns.values() if x.mnemonic == 'ret'}
            if len(rets) == 1:
                r = rets.pop()
        except Exception:
            r = None
    _pops[a] = r
    return r


def is_save(insns, order, a, reg):
    """`push reg` at a saves the register rather than passing it: in address
    order the register is written before anything reads it and before the
    next call (`push ebx / mov ebx, [edx+8]` at 0x480f7c; an argument's
    register is read again or the call comes first).  Only a guess for the
    pushes before an indirect call, whose pops nothing else tells."""
    i = order.index(a) + 1
    if MD.reg_name(reg) not in ('ebx', 'esi', 'edi', 'ebp'):
        # eax, ecx and edx are scratch: nothing saves them. `push edx / lea edx, [esp+0x34] /
        # push edx / push eax / call [ecx+0xc]` (0x516d30, CreateSoundBuffer) pushes 4 arguments
        return False
    if MD.reg_name(reg) in ('ebx', 'esi', 'edi', 'ebp'):
        # a callee-saved register pushed before the function wrote it holds the caller's
        # value: a save (0x4ec2f0's prologue pushes ebx and esi, first used after a call)
        def writes(x):
            try:
                return any(MD.reg_name(r) == MD.reg_name(reg) for r in x.regs_access()[1])
            except Exception:
                return True
        if not any(writes(insns[b]) for b in order[:i - 1]):
            return True
    for b in order[i:i + 40]:
        x = insns[b]
        if x.mnemonic in ('call', 'ret'):
            return False
        try:
            rd, wr = x.regs_access()
        except Exception:
            return False
        if x.mnemonic == 'xor' and len(x.operands) == 2 and x.operands[0].type == X86_OP_REG \
                and x.operands[1].type == X86_OP_REG and x.operands[0].reg == x.operands[1].reg:
            rd = [r for r in rd if r != x.operands[0].reg]   # xor r, r reads nothing
        if any(MD.reg_name(r) == MD.reg_name(reg) for r in rd):
            return False
        if any(MD.reg_name(r) == MD.reg_name(reg) for r in wr):
            return True
    return False


_slot_pops = None


def vslot_pops(off):
    """bytes a virtual call through vtable offset off pops: what every
    implementation of that slot (ghidra_out/vtable_slots_by_function.csv)
    agrees on, else None.  The pushes since the previous call are no guide:
    a saved register pushed between two calls looks like an argument
    (0x480ed0's `push ebx`, 0x480c90's prologue)."""
    global _slot_pops
    if _slot_pops is None:
        import csv
        by = {}
        for r in csv.DictReader(open(os.path.join(ROOT, 'ghidra_out', 'vtable_slots_by_function.csv'))):
            by.setdefault(int(r['slot']), set()).add(int(r['function_va'], 16))
        _slot_pops = by
    pops = {callee_pops(f) for f in _slot_pops.get(off // 4, ())}
    return pops.pop() if len(pops) == 1 and None not in pops else None


def sites(addr):
    fn = fp.funcs()[addr]
    nxt = min((b for b in fp.funcs() if b > addr), default=addr + fn[1])
    insns, tables = decode(addr, max(fn[1], nxt - addr))
    order = sorted(insns)
    nexti = {a: order[i + 1] for i, a in enumerate(order[:-1])}
    # state per instruction: (esp offset, ebp offset or None, bytes pushed since the last call, eax constant)
    state = {addr: (0, None, 0, None)}
    work = [addr]
    out = {}
    conflicts = []
    saved_ebp = {}      # stack offset -> the frame EBP pushed there (0x4ec2f0 saves its frame
                        # pointer, uses EBP for `this`, and pops it back before `mov esp, ebp`)
    while work:
        a = work.pop()
        o, ebp, pend, eaxc = state[a]
        x = insns[a]
        m = x.mnemonic
        ops = x.operands
        succ = []
        nxt_a = nexti.get(a)
        if m == 'push':
            o += 4
            frame_save = ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'ebp' and ebp is not None
            if not frame_save and not (ops[0].type == X86_OP_REG and is_save(insns, order, a, ops[0].reg)):
                pend += 4
            if frame_save:
                saved_ebp[o] = ebp
        elif m == 'pop':
            if ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'ebp':
                # the slot it was pushed to; or the one frame EBP saved, if offsets drifted
                # over a long function (7 KB of 0x4ec2f0)
                ebp = saved_ebp.get(o, next(iter(saved_ebp.values())) if len(set(saved_ebp.values())) == 1 else None)
            o -= 4; pend = max(0, pend - 4)
        elif m in ('pushal', 'pushad'):
            o += 32
        elif m in ('popal', 'popad'):
            o -= 32
        elif m in ('pushfd', 'pushfl'):
            o += 4
        elif m in ('popfd', 'popfl'):
            o -= 4
        elif m in ('sub', 'add') and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'esp':
            if ops[1].type != X86_OP_IMM:
                raise SystemExit('%08x: %s %s' % (a, m, x.op_str))
            o += ops[1].imm if m == 'sub' else -ops[1].imm
            pend = 0
        elif m == 'mov' and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'ebp' \
                and ops[1].type == X86_OP_REG and x.reg_name(ops[1].reg) == 'esp':
            ebp = o
        elif m == 'mov' and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'esp':
            if ops[1].type == X86_OP_REG and x.reg_name(ops[1].reg) == 'ebp' and ebp is not None:
                o = ebp
            else:
                raise SystemExit('%08x: mov esp, %s' % (a, x.op_str))
        elif m == 'lea' and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'esp':
            mem = ops[1].mem
            base = x.reg_name(mem.base) if mem.base else None
            if base == 'esp':
                o -= mem.disp
            elif base == 'ebp' and ebp is not None:
                o = ebp - mem.disp
            else:
                raise SystemExit('%08x: lea esp, %s' % (a, x.op_str))
        elif m == 'leave':
            if ebp is None:
                raise SystemExit('%08x: leave without a frame' % a)
            o = ebp - 4; ebp = None
        elif m == 'mov' and ops[0].type == X86_OP_REG and x.reg_name(ops[0].reg) == 'eax' and ops[1].type == X86_OP_IMM:
            eaxc = ops[1].imm
        if m == 'call':
            tgt = ops[0].imm if ops[0].type == X86_OP_IMM else None
            vt = None
            if ops[0].type == X86_OP_MEM and ops[0].mem.base:
                vt = ops[0].mem.disp
            iat = ops[0].type == X86_OP_MEM and not ops[0].mem.base and not ops[0].mem.index
            nx = insns.get(nxt_a)
            cdecl_next = nx is not None and nx.mnemonic == 'add' and nx.operands[0].type == X86_OP_REG \
                and nx.reg_name(nx.operands[0].reg) == 'esp'
            pops, sure = None, True
            if tgt == 0x0055def0:               # __alloca_probe (VC6's _chkstk)
                pops = -(eaxc or 0)          # __alloca_probe: ESP -= EAX
            elif tgt is not None:
                pops = callee_pops(tgt)
            elif vt is not None:
                pops = vslot_pops(vt)
            if pops is None:
                pops = 0 if cdecl_next else pend
                sure = False
            key = ('d', tgt) if tgt is not None else ('v', vt) if vt is not None else ('i', ops[0].mem.disp if iat else None)
            out[a] = (key, o, a + x.size, pend, sure)
            o -= pops
            pend = 0
        if m in ('ret', 'int3', 'hlt'):
            succ = []
        elif m == 'jmp':
            succ = [ops[0].imm] if ops[0].type == X86_OP_IMM and ops[0].imm in insns else tables.get(a, [])
            if ops[0].type == X86_OP_IMM and ops[0].imm not in insns and ops[0].imm in fp.funcs():
                # a tail jump: the target runs at this ESP, which must be the entry's (BEA_PAR_TAIL)
                if o != 0:
                    conflicts.append((a, ops[0].imm, 0, o))
                out[a] = (('d', ops[0].imm), -4, 0, 0, True)
        elif m.startswith('j'):
            succ = [ops[0].imm, nxt_a] if ops[0].imm in insns else [nxt_a]
        else:
            succ = [nxt_a]
        for s in succ:
            if s is None or s not in insns:
                continue
            st = (o, ebp, pend, eaxc if m not in ('call',) else None)
            if s in state:
                if state[s][0] != o:
                    conflicts.append((a, s, state[s][0], o))
                continue
            state[s] = st
            work.append(s)
    return out, conflicts


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addr', nargs='+')
    ap.add_argument('--table', action='store_true')
    a = ap.parse_args()
    for h in a.addr:
        addr = int(h, 16)
        out, conflicts = sites(addr)
        for c in conflicts:
            print('// CONFLICT at %08x -> %08x: %d vs %d' % c)
        body = min((o for _, o, _, _, _ in out.values() if o != -4), default=0)
        if a.table:
            print("// tools/callsites.py %x --table: the original's calls (kind, target or vtable offset," % addr)
            print('// ESP below the entry ESP, return address; BEA_PAR_TAIL: a tail jump); between calls its ESP is entry - 0x%x' % body)
            print('static const BeaParSite par_%08x[] = {' % addr)
            for s in sorted(out):
                (kind, k), o, ra, pend, sure = out[s]
                kk = {'d': 'BEA_PAR_DIRECT', 'v': 'BEA_PAR_VCALL', 'i': 'BEA_PAR_IMPORT'}[kind]
                if o == -4:
                    print('    {%s, 0x%08x, BEA_PAR_TAIL, 0},   // %08x: jmp' % (kk, k or 0, s))
                    continue
                print('    {%s, 0x%08x, 0x%x, 0x%08x},%s   // %08x' % (kk, k or 0, o, ra, '' if sure else ' /* pops guessed */', s))
            print('    {0, 0, 0, 0}};')
            print('BEA_PARITY_HOOK(0x%08x, %08x, ap_%08x, 0x%x, par_%08x)' % (addr, addr, addr, body, addr))
        else:
            for s in sorted(out):
                (kind, k), o, ra, pend, sure = out[s]
                print('%08x call %s %-10s esp-0x%-4x args %-3d ra %08x%s' % (s, kind, '%08x' % k if k is not None else '?', o, pend, ra, '' if sure else '  ?'))


if __name__ == '__main__':
    main()
