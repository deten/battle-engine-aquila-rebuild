// lifted from 004cc8a0 (vslot4, 51 bytes, 16 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cc8a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cc8a0;
L_004cc8a0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004cc8a4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cc8a5:  // mov esi, dword ptr [ecx + 0x80]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x80u)));
L_004cc8ab:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cc8ad:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cc8af:  // jne 0x4cc8b7
    if (!f.zf) goto L_004cc8b7;
L_004cc8b1:  // mov dword ptr [ecx + 0x80], edx
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(edx);
L_004cc8b7:  // cmp dword ptr [ecx + 0x84], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x84u)), eax, f);
L_004cc8bd:  // jne 0x4cc8c5
    if (!f.zf) goto L_004cc8c5;
L_004cc8bf:  // mov dword ptr [ecx + 0x84], edx
    M32((uint32_t)(ecx + 0x84u)) = (uint32_t)(edx);
L_004cc8c5:  // mov esi, dword ptr [ecx + 0x60]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x60u)));
L_004cc8c8:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cc8ca:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cc8cb:  // jne 0x4cc8d0
    if (!f.zf) goto L_004cc8d0;
L_004cc8cd:  // mov dword ptr [ecx + 0x60], edx
    M32((uint32_t)(ecx + 0x60u)) = (uint32_t)(edx);
L_004cc8d0:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cc8a0, 004cc8a0)
