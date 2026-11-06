// lifted from 00447b10 (vslot120, 63 bytes, 22 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00447b10(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00447b10;
L_00447b10:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00447b11:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00447b13:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00447b14:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00447b16:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00447b19:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00447b1b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00447b1d:  // push 0x628ab0
    t0 = 0x628ab0u; esp -= 4; M32(esp) = t0;
L_00447b22:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00447b24:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447b27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447b27:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00447b29:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447b2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447b2e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00447b2f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00447b31:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447b37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447b37:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00447b38:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00447b3d:  // mov dword ptr [esi + 0x27c], 5
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x5u);
L_00447b47:  // call 0x50b020
    t0 = 0x0050b020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447b4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447b4c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00447b4d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00447b4e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00447b10, 00447b10)
