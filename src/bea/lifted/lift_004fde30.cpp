// lifted from 004fde30 (FUN_004fde30, 62 bytes, 22 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fde30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fde30;
L_004fde30:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fde31:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004fde33:  // mov eax, dword ptr [esi + 0x244]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x244u)));
L_004fde39:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fde3b:  // jne 0x4fde6c
    if (!f.zf) goto L_004fde6c;
L_004fde3d:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004fde40:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fde41:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004fde43:  // mov dword ptr [esi + 0x244], 3
    M32((uint32_t)(esi + 0x244u)) = (uint32_t)(0x3u);
L_004fde4d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004fde4f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fde51:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004fde53:  // push 0x6239cc
    t0 = 0x6239ccu; esp -= 4; M32(esp) = t0;
L_004fde58:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fde5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fde5b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004fde5d:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fde62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fde62:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fde63:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fde65:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fde6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fde6b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fde6c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fde6d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004fde30, 004fde30)
