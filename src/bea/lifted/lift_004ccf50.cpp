// lifted from 004ccf50 (vslot4, 21 bytes, 6 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ccf50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ccf50;
L_004ccf50:  // mov eax, dword ptr [ecx + 0x70]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x70u)));
L_004ccf53:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004ccf57:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004ccf59:  // jne 0x4ccf62
    if (!f.zf) goto L_004ccf62;
L_004ccf5b:  // mov dword ptr [ecx + 0x70], 0
    M32((uint32_t)(ecx + 0x70u)) = (uint32_t)(0x0u);
L_004ccf62:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004ccf50, 004ccf50)
