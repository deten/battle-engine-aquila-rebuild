// lifted from 0040f110 (FUN_0040f110, 37 bytes, 9 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0040f110(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0040f110;
L_0040f110:  // fld dword ptr [ecx + 0x60c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x60cu)));
L_0040f116:  // fadd dword ptr [0x5d85bc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85bcu)));
L_0040f11c:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_0040f122:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040f124:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040f127:  // je 0x40f134
    if (f.zf) goto L_0040f134;
L_0040f129:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040f12e:  // mov dword ptr [ecx + 0x60c], eax
    M32((uint32_t)(ecx + 0x60cu)) = (uint32_t)(eax);
L_0040f134:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0040f110, 0040f110)
