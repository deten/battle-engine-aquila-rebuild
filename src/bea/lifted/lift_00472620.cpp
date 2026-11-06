// lifted from 00472620 (FUN_00472620, 40 bytes, 11 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00472620(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00472620;
L_00472620:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_00472624:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00472627:  // jne 0x472636
    if (!f.zf) goto L_00472636;
L_00472629:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0047262d:  // mov dword ptr [ecx + 0x290], eax
    M32((uint32_t)(ecx + 0x290u)) = (uint32_t)(eax);
L_00472633:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00472636:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00472639:  // jne 0x472645
    if (!f.zf) goto L_00472645;
L_0047263b:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0047263f:  // mov dword ptr [ecx + 0x294], edx
    M32((uint32_t)(ecx + 0x294u)) = (uint32_t)(edx);
L_00472645:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00472620, 00472620)
