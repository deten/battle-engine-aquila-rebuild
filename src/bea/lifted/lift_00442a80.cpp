// lifted from 00442a80 (FUN_00442a80, 51 bytes, 22 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00442a80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00442a80;
L_00442a80:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00442a81:  // mov dword ptr [ecx + 0x1c], 1
    M32((uint32_t)(ecx + 0x1cu)) = (uint32_t)(0x1u);
L_00442a88:  // mov esi, dword ptr [ecx + 0x24]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00442a8b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00442a8d:  // je 0x442a93
    if (f.zf) goto L_00442a93;
L_00442a8f:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00442a91:  // jmp 0x442a95
    goto L_00442a95;
L_00442a93:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00442a95:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00442a97:  // je 0x442ab1
    if (f.zf) goto L_00442ab1;
L_00442a99:  // call 0x442a80
    t0 = 0x00442a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00442a9eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00442a9e:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00442aa1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00442aa3:  // je 0x442aa9
    if (f.zf) goto L_00442aa9;
L_00442aa5:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00442aa7:  // jmp 0x442aab
    goto L_00442aab;
L_00442aa9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00442aab:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00442aad:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00442aaf:  // jne 0x442a99
    if (!f.zf) goto L_00442a99;
L_00442ab1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00442ab2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00442a80, 00442a80)
