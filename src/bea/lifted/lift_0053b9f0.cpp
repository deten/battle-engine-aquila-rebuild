// lifted from 0053b9f0 (vslot3, 35 bytes, 11 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053b9f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053b9f0;
L_0053b9f0:  // mov dword ptr [ecx + 0x10], 0x3f000000
    M32((uint32_t)(ecx + 0x10u)) = (uint32_t)(0x3f000000u);
L_0053b9f7:  // lea eax, [ecx + 0x18]
    eax = (uint32_t)((uint32_t)(ecx + 0x18u));
L_0053b9fa:  // mov ecx, 0x32
    ecx = (uint32_t)(0x32u);
L_0053b9ff:  // mov edx, 0xbf800000
    edx = (uint32_t)(0xbf800000u);
L_0053ba04:  // mov dword ptr [eax - 4], edx
    M32((uint32_t)(eax + 0xfffffffcu)) = (uint32_t)(edx);
L_0053ba07:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0053ba09:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0053ba0c:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0053ba0f:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0053ba10:  // jne 0x53ba04
    if (!f.zf) goto L_0053ba04;
L_0053ba12:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0053b9f0, 0053b9f0)
