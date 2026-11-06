// lifted from 0050d7a0 (FUN_0050d7a0, 35 bytes, 10 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050d7a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050d7a0;
L_0050d7a0:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0050d7a4:  // lea eax, [ecx + 0x20c]
    eax = (uint32_t)((uint32_t)(ecx + 0x20cu));
L_0050d7aa:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_0050d7af:  // cmp dword ptr [eax + 0x10], edx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x10u)), edx, f);
L_0050d7b2:  // jne 0x50d7ba
    if (!f.zf) goto L_0050d7ba;
L_0050d7b4:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_0050d7ba:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0050d7bd:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0050d7be:  // jne 0x50d7af
    if (!f.zf) goto L_0050d7af;
L_0050d7c0:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0050d7a0, 0050d7a0)
