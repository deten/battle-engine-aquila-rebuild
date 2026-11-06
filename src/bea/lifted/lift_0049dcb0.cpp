// lifted from 0049dcb0 (FUN_0049dcb0, 22 bytes, 8 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0049dcb0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0049dcb0;
L_0049dcb0:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0049dcb4:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0049dcba:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049dcbc:  // jle 0x49dcc5
    if ((f.zf || f.sf != f.of)) goto L_0049dcc5;
L_0049dcbe:  // fmul dword ptr [esp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4u)));
L_0049dcc2:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049dcc3:  // jne 0x49dcbe
    if (!f.zf) goto L_0049dcbe;
L_0049dcc5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0049dcb0, 0049dcb0)
