// lifted from 004157c0 (vslot83, 52 bytes, 19 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004157c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004157c0;
L_004157c0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004157c1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004157c3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004157c4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004157c6:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004157c9:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004157cb:  // mov dword ptr [esi + 0x1f0], 0
    M32((uint32_t)(esi + 0x1f0u)) = (uint32_t)(0x0u);
L_004157d5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004157d7:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004157d9:  // push 0x6239d8
    t0 = 0x6239d8u; esp -= 4; M32(esp) = t0;
L_004157de:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004157e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004157e1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004157e3:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004157e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004157e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004157e9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004157eb:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004157f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004157f1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004157f2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004157f3:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004157c0, 004157c0)
