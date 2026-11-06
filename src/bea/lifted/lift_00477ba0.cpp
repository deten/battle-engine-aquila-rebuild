// lifted from 00477ba0 (FUN_00477ba0, 31 bytes, 15 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00477ba0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00477ba0;
L_00477ba0:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_00477ba3:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_00477ba6:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_00477ba8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00477baa:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00477bac:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00477bae:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00477bb0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00477bb2:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00477bb4:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00477bb6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00477bb8:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00477bba:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00477bbc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00477bbe:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00477ba0, 00477ba0)
