// lifted from 00549290 (FUN_00549290, 32 bytes, 7 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00549290(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00549290;
L_00549290:  // movsx eax, byte ptr [0x9c2bc8]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x9c2bc8u))));
L_00549297:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00549298:  // je 0x5492a5
    if (f.zf) goto L_005492a5;
L_0054929a:  // add ecx, 0x214
    t0 = ladd<32>(ecx, 0x214u, f);
    ecx = (uint32_t)(t0);
L_005492a0:  // jmp 0x4a2190
    { c->target = 0x004a2190u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_005492a5:  // add ecx, 0x13ac
    t0 = ladd<32>(ecx, 0x13acu, f);
    ecx = (uint32_t)(t0);
L_005492ab:  // jmp 0x4a2190
    { c->target = 0x004a2190u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
}

LIFT_FUNCTION_NF(0x00549290, 00549290)
