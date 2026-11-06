// lifted from 004ccba0 (vslot4, 38 bytes, 11 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ccba0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ccba0;
L_004ccba0:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004ccba4:  // lea eax, [ecx + 0x5c]
    eax = (uint32_t)((uint32_t)(ecx + 0x5cu));
L_004ccba7:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_004ccbac:  // cmp dword ptr [eax], edx
    t0 = lsub<32>(M32((uint32_t)(eax)), edx, f);
L_004ccbae:  // jne 0x4ccbbd
    if (!f.zf) goto L_004ccbbd;
L_004ccbb0:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_004ccbb6:  // mov dword ptr [eax + 0x10], 0
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(0x0u);
L_004ccbbd:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004ccbc0:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004ccbc1:  // jne 0x4ccbac
    if (!f.zf) goto L_004ccbac;
L_004ccbc3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004ccba0, 004ccba0)
