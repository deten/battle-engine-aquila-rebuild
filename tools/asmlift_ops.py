"""Instruction emitters of tools/asmlift.py: operands, integer instructions,
control flow and calls.  The x87 ones are in asmlift_x87.py (a mixin)."""
from capstone.x86 import X86_OP_REG, X86_OP_IMM, X86_OP_MEM
from asmlift_x87 import X87


class Refuse(Exception):
    pass


R32 = ('eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi')
R16 = {'ax': 'eax', 'cx': 'ecx', 'dx': 'edx', 'bx': 'ebx', 'sp': 'esp', 'bp': 'ebp', 'si': 'esi', 'di': 'edi'}
R8L = {'al': 'eax', 'cl': 'ecx', 'dl': 'edx', 'bl': 'ebx'}
R8H = {'ah': 'eax', 'ch': 'ecx', 'dh': 'edx', 'bh': 'ebx'}
COND = {
    'e': 'f.zf', 'ne': '!f.zf', 'z': 'f.zf', 'nz': '!f.zf',
    'l': '(f.sf != f.of)', 'ge': '(f.sf == f.of)', 'le': '(f.zf || f.sf != f.of)', 'g': '(!f.zf && f.sf == f.of)',
    'b': 'f.cf', 'ae': '!f.cf', 'be': '(f.cf || f.zf)', 'a': '(!f.cf && !f.zf)',
    's': 'f.sf', 'ns': '!f.sf', 'o': 'f.of', 'no': '!f.of',
}
SYNC_OUT = ('c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; '
            'c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x);')
SYNC_IN = ('eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; '
           'esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);')
MASK = {1: '0xffu', 2: '0xffffu', 4: '0xffffffffu'}


class Ops(X87):
    def __init__(self, entry, insns, tables):
        self.entry, self.insns, self.tables = entry, insns, tables
        self.out = []
        # no x87 instruction: the x87 state stays in the hardware (lift_enter_nf, lift_call_nf)
        self.fpu = any(x.mnemonic.startswith('f') for x in insns.values())

    def sync_out(self):
        return SYNC_OUT if self.fpu else SYNC_OUT.replace(' lift_x87_out(c, x);', '')

    def sync_in(self):
        return SYNC_IN if self.fpu else SYNC_IN.replace(' lift_x87_in(c, x);', '')

    def o(self, s):
        self.out.append('    ' + s)

    def body(self):
        addrs = sorted(self.insns)
        for i, a in enumerate(addrs):
            x = self.insns[a]
            self.out.append('L_%08x:  // %s %s' % (a, x.mnemonic, x.op_str))
            self.emit(x)
            nxt = a + x.size
            ends = x.mnemonic in ('ret', 'jmp', 'int3', 'hlt')
            if not ends and (i + 1 == len(addrs) or addrs[i + 1] != nxt):
                if nxt in self.insns:
                    self.o('goto L_%08x;' % nxt)
                else:
                    raise Refuse('falls out of the decoded code at %08x' % nxt)
        return self.out

    # -- operands -----------------------------------------------------------
    def is_fs(self, x, op):
        return op.type == X86_OP_MEM and op.mem.segment and x.reg_name(op.mem.segment) == 'fs'

    def addr(self, x, op, fs_ok=False):
        m = op.mem
        if m.segment and not (fs_ok and x.reg_name(m.segment) == 'fs'):
            raise Refuse('segment register at %08x' % x.address)
        parts = []
        if m.base:
            parts.append(self.r32(x, x.reg_name(m.base)))
        if m.index:
            r = self.r32(x, x.reg_name(m.index))
            parts.append(r if m.scale == 1 else '%s * %du' % (r, m.scale))
        if m.disp or not parts:
            parts.append('0x%xu' % (m.disp & 0xffffffff))
        return '(uint32_t)(' + ' + '.join(parts) + ')'

    def r32(self, x, r):
        if r not in R32:
            raise Refuse('address register %s at %08x' % (r, x.address))
        return r

    def rd(self, x, op):
        if op.type == X86_OP_IMM:
            return '0x%xu' % (op.imm & ((1 << (8 * op.size)) - 1))
        if self.is_fs(x, op):
            if op.size != 4:
                raise Refuse('fs: access of %d bytes' % op.size)
            return 'lift_fsrd(%s)' % self.addr(x, op, True)
        if op.type == X86_OP_MEM:
            return {1: 'M8', 2: 'M16', 4: 'M32'}[op.size] + '(%s)' % self.addr(x, op)
        r = x.reg_name(op.reg)
        if r in R32:
            return r
        if r in R16:
            return '(%s & 0xffffu)' % R16[r]
        if r in R8L:
            return '(%s & 0xffu)' % R8L[r]
        if r in R8H:
            return '((%s >> 8) & 0xffu)' % R8H[r]
        raise Refuse('register %s at %08x' % (r, x.address))

    def wr(self, x, op, v):
        if self.is_fs(x, op):
            if op.size != 4:
                raise Refuse('fs: access of %d bytes' % op.size)
            self.o('lift_fswr(%s, (uint32_t)(%s));' % (self.addr(x, op, True), v))
            return
        if op.type == X86_OP_MEM:
            self.o('%s(%s) = (%s)(%s);' % ({1: 'M8', 2: 'M16', 4: 'M32'}[op.size], self.addr(x, op),
                                            {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t'}[op.size], v))
            return
        r = x.reg_name(op.reg)
        if r in R32:
            self.o('%s = (uint32_t)(%s);' % (r, v))
        elif r in R16:
            self.o('%s = (%s & 0xffff0000u) | ((uint32_t)(%s) & 0xffffu);' % (R16[r], R16[r], v))
        elif r in R8L:
            self.o('%s = (%s & 0xffffff00u) | ((uint32_t)(%s) & 0xffu);' % (R8L[r], R8L[r], v))
        elif r in R8H:
            self.o('%s = (%s & 0xffff00ffu) | (((uint32_t)(%s) & 0xffu) << 8);' % (R8H[r], R8H[r], v))
        else:
            raise Refuse('register %s at %08x' % (r, x.address))

    # -- control flow -------------------------------------------------------
    def tail(self, target):
        return '{ c->target = %s; %s return; }' % (target, self.sync_out())

    def goto(self, t):
        return 'goto L_%08x;' % t if t in self.insns else self.tail('0x%08xu' % t)

    # -- dispatch -----------------------------------------------------------
    def emit(self, x):
        m = x.mnemonic
        if m.startswith('f'):
            return self.x87(x)
        if m.startswith('rep') or m in ('stosb', 'stosw', 'stosd', 'movsb', 'movsw', 'movsd'):
            return self.string(x)
        if m.startswith('j') and m != 'jmp':
            cc = m[1:]
            if cc not in COND:
                raise Refuse('instruction %s' % m)
            self.o('if (%s) %s' % (COND[cc], self.goto(x.operands[0].imm)))
            return
        if m.startswith('set') and m[3:] in COND:
            self.wr(x, x.operands[0], COND[m[3:]])
            return
        h = getattr(self, 'i_' + m, None)
        if h is None:
            raise Refuse('instruction %s' % m)
        h(x)

    # -- integer --------------------------------------------------------------
    def i_nop(self, x):
        pass

    def i_mov(self, x):
        self.wr(x, x.operands[0], self.rd(x, x.operands[1]))

    def i_movsx(self, x):
        d, s = x.operands
        t = {1: 'int8_t', 2: 'int16_t'}[s.size]
        self.wr(x, d, '(uint32_t)(int32_t)(%s)(%s)' % (t, self.rd(x, s)))

    def i_movzx(self, x):
        self.wr(x, x.operands[0], self.rd(x, x.operands[1]))

    def i_lea(self, x):
        self.wr(x, x.operands[0], self.addr(x, x.operands[1]))

    def i_xchg(self, x):
        a, b = x.operands
        self.o('t0 = %s; t1 = %s;' % (self.rd(x, a), self.rd(x, b)))
        self.wr(x, a, 't1')
        self.wr(x, b, 't0')

    def i_push(self, x):
        op = x.operands[0]
        if op.size != 4:
            raise Refuse('push of %d bytes' % op.size)
        v = '0x%xu' % (op.imm & 0xffffffff) if op.type == X86_OP_IMM else self.rd(x, op)
        self.o('t0 = %s; esp -= 4; M32(esp) = t0;' % v)

    def i_pop(self, x):
        op = x.operands[0]
        if op.size != 4 or (op.type == X86_OP_REG and x.reg_name(op.reg) == 'esp'):
            raise Refuse('pop form at %08x' % x.address)
        self.o('t0 = M32(esp); esp += 4;')
        self.wr(x, op, 't0')

    def binop(self, x, fn, write=True):
        d, s = x.operands
        n = d.size * 8
        self.o('t0 = %s<%d>(%s, %s, f);' % (fn, n, self.rd(x, d), self.rd(x, s)))
        if write:
            self.wr(x, d, 't0')

    def i_add(self, x): self.binop(x, 'ladd')
    def i_adc(self, x): self.binop(x, 'ladc')
    def i_sub(self, x): self.binop(x, 'lsub')
    def i_sbb(self, x): self.binop(x, 'lsbb')
    def i_cmp(self, x): self.binop(x, 'lsub', False)

    def logic(self, x, op, write=True):
        d, s = x.operands
        self.o('t0 = llog<%d>(%s %s %s, f);' % (d.size * 8, self.rd(x, d), op, self.rd(x, s)))
        if write:
            self.wr(x, d, 't0')

    def i_and(self, x): self.logic(x, '&')
    def i_or(self, x): self.logic(x, '|')
    def i_xor(self, x): self.logic(x, '^')
    def i_test(self, x): self.logic(x, '&', False)

    def unop(self, x, fn):
        d = x.operands[0]
        self.o('t0 = %s<%d>(%s, f);' % (fn, d.size * 8, self.rd(x, d)))
        self.wr(x, d, 't0')

    def i_inc(self, x): self.unop(x, 'linc')
    def i_dec(self, x): self.unop(x, 'ldec')
    def i_neg(self, x): self.unop(x, 'lneg')

    def i_not(self, x):
        d = x.operands[0]
        self.wr(x, d, '~%s' % self.rd(x, d))

    def shift(self, x, fn):
        d = x.operands[0]
        n = self.rd(x, x.operands[1]) if len(x.operands) > 1 else '1u'
        self.o('t0 = %s<%d>(%s, %s, f);' % (fn, d.size * 8, self.rd(x, d), n))
        self.wr(x, d, 't0')

    def i_shl(self, x): self.shift(x, 'lshl')
    def i_sal(self, x): self.shift(x, 'lshl')
    def i_shr(self, x): self.shift(x, 'lshr')
    def i_sar(self, x): self.shift(x, 'lsar')

    def i_imul(self, x):
        ops = x.operands
        if len(ops) == 1:
            if ops[0].size != 4:
                raise Refuse('imul of %d bytes' % ops[0].size)
            self.o('{ int64_t w = (int64_t)(int32_t)eax * (int32_t)%s; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32);'
                   ' f.cf = f.of = w != (int64_t)(int32_t)eax; }' % self.rd(x, ops[0]))
        elif len(ops) == 2:
            self.o('t0 = limul32(%s, %s, f);' % (self.rd(x, ops[0]), self.rd(x, ops[1])))
            self.wr(x, ops[0], 't0')
        else:
            self.o('t0 = limul32(%s, 0x%xu, f);' % (self.rd(x, ops[1]), ops[2].imm & 0xffffffff))
            self.wr(x, ops[0], 't0')

    def i_mul(self, x):
        op = x.operands[0]
        if op.size != 4:
            raise Refuse('mul of %d bytes' % op.size)
        self.o('{ uint64_t w = (uint64_t)eax * %s; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }' % self.rd(x, op))

    def i_idiv(self, x):
        op = x.operands[0]
        if op.size != 4:
            raise Refuse('idiv of %d bytes' % op.size)
        self.o('{ int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)%s;'
               ' eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n %% d); }' % self.rd(x, op))

    def i_div(self, x):
        op = x.operands[0]
        if op.size != 4:
            raise Refuse('div of %d bytes' % op.size)
        self.o('{ uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = %s;'
               ' eax = (uint32_t)(n / d); edx = (uint32_t)(n %% d); }' % self.rd(x, op))

    def i_cdq(self, x):
        self.o('edx = (uint32_t)((int32_t)eax >> 31);')

    def i_rdtsc(self, x):
        self.o('__asm__ volatile("rdtsc" : "=a"(eax), "=d"(edx));')

    # -- strings (the direction flag is clear in VC6 code) -----------------
    def string(self, x):
        m = x.mnemonic
        rep = m.startswith('rep ') or m.startswith('repne ') or m.startswith('repe ')
        base = m.split()[-1]
        k = {'b': 1, 'w': 2, 'd': 4}.get(base[-1])
        acc = {1: 'M8', 2: 'M16', 4: 'M32'}.get(k)
        if base.startswith('movs'):
            step = '%s(edi) = %s(esi); esi += %d; edi += %d;' % (acc, acc, k, k)
        elif base.startswith('stos'):
            v = {1: '(uint8_t)eax', 2: '(uint16_t)eax', 4: 'eax'}[k]
            step = '%s(edi) = %s; edi += %d;' % (acc, v, k)
        elif base == 'scasb' and m.startswith('repne'):
            self.o('while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }')
            return
        elif base == 'cmpsb' and m.startswith('repe'):
            self.o('while (ecx) { ecx--; t0 = M8(esi); t1 = M8(edi); esi += 1; edi += 1; lsub<8>(t0, t1, f); if (!f.zf) break; }')
            return
        else:
            raise Refuse('instruction %s' % m)
        self.o(('while (ecx) { %s ecx--; }' % step) if rep else step)

    # -- calls, jumps, returns ----------------------------------------------
    def target(self, x, op):
        if op.type == X86_OP_IMM:
            return '0x%08xu' % op.imm
        return self.rd(x, op)

    def i_call(self, x):
        self.o('t0 = %s; %s %s(c, t0, 0x%08xu); %s' % (self.target(x, x.operands[0]), self.sync_out(),
                                                       'lift_call' if self.fpu else 'lift_call_nf', x.address + x.size, self.sync_in()))

    def i_jmp(self, x):
        op = x.operands[0]
        if op.type == X86_OP_IMM:
            self.o(self.goto(op.imm))
            return
        self.o('t0 = %s;' % self.rd(x, op))
        ents = self.tables.get(x.address)
        if ents:
            self.o('switch (t0) {')
            for e in sorted(set(ents)):
                self.o('case 0x%08xu: goto L_%08x;' % (e, e))
            self.o('}')
        self.o(self.tail('t0'))

    def i_ret(self, x):
        n = x.operands[0].imm if x.operands else 0
        self.o('c->target = M32(esp); esp += %du; %s return;' % (4 + n, self.sync_out()))
