// lifted from 004d1f90 (FUN_004d1f90, 61 bytes, 21 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d1f90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d1f90;
L_004d1f90:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d1f91:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d1f93:  // cmp dword ptr [esi + 0x27c], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x27cu)), 0x1u, f);
L_004d1f9a:  // jne 0x4d1fcb
    if (!f.zf) goto L_004d1fcb;
L_004d1f9c:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004d1f9f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d1fa0:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004d1fa2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d1fa4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d1fa6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d1fa8:  // push 0x624420
    t0 = 0x624420u; esp -= 4; M32(esp) = t0;
L_004d1fad:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d1fb0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d1fb0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d1fb2:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d1fb7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d1fb7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1fb8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d1fba:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d1fc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d1fc0:  // mov dword ptr [esi + 0x27c], 2
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x2u);
L_004d1fca:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d1fcb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d1fcc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004d1f90, 004d1f90)
