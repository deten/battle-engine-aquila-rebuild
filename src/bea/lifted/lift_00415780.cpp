// lifted from 00415780 (vslot82, 62 bytes, 22 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00415780(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00415780;
L_00415780:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00415781:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00415783:  // mov eax, dword ptr [esi + 0x260]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x260u)));
L_00415789:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041578b:  // jne 0x4157bc
    if (!f.zf) goto L_004157bc;
L_0041578d:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00415790:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00415791:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00415793:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00415795:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00415797:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00415799:  // push 0x6239cc
    t0 = 0x6239ccu; esp -= 4; M32(esp) = t0;
L_0041579e:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004157a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004157a1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004157a3:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004157a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004157a8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004157a9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004157ab:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004157b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004157b1:  // mov dword ptr [esi + 0x260], 1
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(0x1u);
L_004157bb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004157bc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004157bd:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00415780, 00415780)
