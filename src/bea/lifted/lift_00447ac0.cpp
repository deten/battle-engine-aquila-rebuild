// lifted from 00447ac0 (vslot119, 73 bytes, 23 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00447ac0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00447ac0;
L_00447ac0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00447ac1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00447ac3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00447ac4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00447ac5:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00447aca:  // mov dword ptr [esi + 0x27c], 3
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x3u);
L_00447ad4:  // mov dword ptr [esi + 0x290], 0
    M32((uint32_t)(esi + 0x290u)) = (uint32_t)(0x0u);
L_00447ade:  // call 0x50b010
    t0 = 0x0050b010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447ae3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447ae3:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00447ae6:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00447ae8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00447aea:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00447aec:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00447aee:  // push 0x628aa4
    t0 = 0x628aa4u; esp -= 4; M32(esp) = t0;
L_00447af3:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447af6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447af6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00447af8:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447afdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447afd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00447afe:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00447b00:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00447b06u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00447b06:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00447b07:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00447b08:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00447ac0, 00447ac0)
