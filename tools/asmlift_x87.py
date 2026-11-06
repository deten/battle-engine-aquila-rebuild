"""x87 emitters of tools/asmlift.py, decoded from the opcode bytes (the
operand order of the reversed forms - fsubr/fdivr in DC and DE - is easy to
misread from text).  The model is lift_rt.h's LX87: ST(i), lpush, lpop, lcom;
the arithmetic is GCC's long double on the hardware, under the game's control
word, so each operation rounds as the original's did."""
from capstone.x86 import X86_OP_MEM

PREFIXES = {0x26, 0x2e, 0x36, 0x3e, 0x64, 0x65, 0x66, 0x67, 0xf2, 0xf3}
ARITH = {0: '+', 1: '*', 4: '-', 5: 'r-', 6: '/', 7: 'r/'}


def apply(op, a, b):
    """a op b, or b op a for a reversed form"""
    if op.startswith('r'):
        a, b, op = b, a, op[1:]
    return '(%s) %s (%s)' % (a, op, b)


class X87:
    def x87(self, x):
        from asmlift_ops import Refuse
        bs = bytes(x.bytes)
        k = 0
        while k < len(bs) and bs[k] in PREFIXES:
            k += 1
        if k + 1 >= len(bs):
            raise Refuse('x87 encoding at %08x' % x.address)
        opc, modrm = bs[k], bs[k + 1]
        sub, i = (modrm >> 3) & 7, modrm & 7
        if modrm >= 0xc0:
            return self.x87_reg(x, opc, modrm, sub, i)
        mem = next((op for op in x.operands if op.type == X86_OP_MEM), None)
        if mem is None:
            raise Refuse('x87 memory form at %08x' % x.address)
        a = self.addr(x, mem)
        o = self.o
        if opc in (0xd8, 0xdc):                     # st0 op m32 / m64
            src = '(long double)%s(%s)' % ('F32' if opc == 0xd8 else 'F64', a)
            if sub in (2, 3):
                o('lcom(x, ST(0), %s);' % src)
                if sub == 3:
                    o('lpop(x);')
            else:
                o('ST(0) = %s;' % apply(ARITH[sub], 'ST(0)', src))
        elif opc in (0xda, 0xde):                   # st0 op m32int / m16int
            src = '(long double)(int32_t)M32(%s)' % a if opc == 0xda else '(long double)(int16_t)M16(%s)' % a
            if sub in (2, 3):
                o('lcom(x, ST(0), %s);' % src)
                if sub == 3:
                    o('lpop(x);')
            else:
                o('ST(0) = %s;' % apply(ARITH[sub], 'ST(0)', src))
        elif opc == 0xd9:
            if sub == 0:
                o('lpush(x, (long double)F32(%s));' % a)
            elif sub in (2, 3):
                o('F32(%s) = lf32(ST(0));' % a)
                if sub == 3:
                    o('lpop(x);')
            else:
                raise Refuse('instruction %s' % x.mnemonic)
        elif opc == 0xdd:
            if sub == 0:
                o('lpush(x, (long double)F64(%s));' % a)
            elif sub in (2, 3):
                o('F64(%s) = lf64(ST(0));' % a)
                if sub == 3:
                    o('lpop(x);')
            elif sub == 7:
                o('M16(%s) = lift_sw(x);' % a)
            else:
                raise Refuse('instruction %s' % x.mnemonic)
        elif opc == 0xdb:
            if sub == 0:
                o('lpush(x, (long double)(int32_t)M32(%s));' % a)
            elif sub in (2, 3):
                o('M32(%s) = (uint32_t)lfist32(ST(0));' % a)
                if sub == 3:
                    o('lpop(x);')
            elif sub == 5:
                o('lpush(x, lf80(%s));' % a)
            elif sub == 7:
                o('lsf80(%s, ST(0)); lpop(x);' % a)
            else:
                raise Refuse('instruction %s' % x.mnemonic)
        elif opc == 0xdf:
            if sub == 0:
                o('lpush(x, (long double)(int16_t)M16(%s));' % a)
            elif sub in (2, 3):
                o('M16(%s) = (uint16_t)lfist16(ST(0));' % a)
                if sub == 3:
                    o('lpop(x);')
            elif sub == 5:
                o('lpush(x, (long double)(int64_t)M64(%s));' % a)
            elif sub == 7:
                o('M64(%s) = (uint64_t)lfist64(ST(0)); lpop(x);' % a)
            else:
                raise Refuse('instruction %s' % x.mnemonic)
        else:
            raise Refuse('instruction %s' % x.mnemonic)

    def x87_reg(self, x, opc, modrm, sub, i):
        from asmlift_ops import Refuse
        o = self.o
        if opc == 0xd8:                             # st0 = st0 op st(i)
            if sub in (2, 3):
                o('lcom(x, ST(0), ST(%d));' % i)
                if sub == 3:
                    o('lpop(x);')
            else:
                o('ST(0) = %s;' % apply(ARITH[sub], 'ST(0)', 'ST(%d)' % i))
        elif opc in (0xdc, 0xde):                   # st(i) = st(i) op st0, DE pops
            if opc == 0xde and modrm == 0xd9:
                o('lcom(x, ST(0), ST(1)); lpop(x); lpop(x);')
                return
            # Intel: DC/DE E0+i is fsubr st(i),st0 (st0 - sti), E8+i fsub (sti - st0); F0/F8 the same for fdiv
            rev = {0: '+', 1: '*', 4: 'r-', 5: '-', 6: 'r/', 7: '/'}
            if sub not in rev:
                raise Refuse('instruction %s' % x.mnemonic)
            o('ST(%d) = %s;' % (i, apply(rev[sub], 'ST(%d)' % i, 'ST(0)')))
            if opc == 0xde:
                o('lpop(x);')
        elif opc == 0xd9:
            if sub == 0:
                o('v0 = ST(%d); lpush(x, v0);' % i)
            elif sub == 1:
                o('v0 = ST(0); ST(0) = ST(%d); ST(%d) = v0;' % (i, i))
            else:
                simple = {0xe0: 'ST(0) = -ST(0);', 0xe1: 'ST(0) = __builtin_fabsl(ST(0));',
                          0xe4: 'lcom(x, ST(0), 0.0L);', 0xe8: 'lpush(x, 1.0L);', 0xee: 'lpush(x, 0.0L);',
                          0xfa: 'ST(0) = lfsqrt(ST(0));', 0xfe: 'ST(0) = lfsin(ST(0));', 0xff: 'ST(0) = lfcos(ST(0));',
                          0xfc: 'ST(0) = lfrnd(ST(0));', 0xf3: 'v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;',
                          0xf2: 'ST(0) = lfptan(ST(0)); lpush(x, 1.0L);', 0xd0: ''}
                if modrm not in simple:
                    raise Refuse('instruction %s' % x.mnemonic)
                if simple[modrm]:
                    o(simple[modrm])
        elif opc == 0xdd:
            if sub in (2, 3):
                o('ST(%d) = ST(0);' % i)
                if sub == 3:
                    o('lpop(x);')
            elif sub in (4, 5):                     # fucom / fucomp st(i)
                o('lcom(x, ST(0), ST(%d));' % i)
                if sub == 5:
                    o('lpop(x);')
            else:
                raise Refuse('instruction %s' % x.mnemonic)
        elif opc == 0xda and modrm == 0xe9:         # fucompp
            o('lcom(x, ST(0), ST(1)); lpop(x); lpop(x);')
        elif opc == 0xdf and modrm == 0xe0:         # fnstsw ax
            o('eax = (eax & 0xffff0000u) | lift_sw(x);')
        else:
            raise Refuse('instruction %s' % x.mnemonic)
