// lifted from 005398d0 (FUN_005398d0, 53 bytes, 12 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005398d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005398d0;
L_005398d0:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_005398d2:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_005398d4:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_005398d7:  // mov dword ptr [eax + 0x20c], ecx
    M32((uint32_t)(eax + 0x20cu)) = (uint32_t)(ecx);
L_005398dd:  // mov dword ptr [eax], 0x5e4f1c
    M32((uint32_t)(eax)) = (uint32_t)(0x5e4f1cu);
L_005398e3:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_005398e6:  // mov dword ptr [eax + 0x214], ecx
    M32((uint32_t)(eax + 0x214u)) = (uint32_t)(ecx);
L_005398ec:  // mov dword ptr [eax + 0x218], ecx
    M32((uint32_t)(eax + 0x218u)) = (uint32_t)(ecx);
L_005398f2:  // mov dword ptr [eax + 0x21c], ecx
    M32((uint32_t)(eax + 0x21cu)) = (uint32_t)(ecx);
L_005398f8:  // mov dword ptr [eax + 0x224], ecx
    M32((uint32_t)(eax + 0x224u)) = (uint32_t)(ecx);
L_005398fe:  // mov dword ptr [eax + 0x210], ecx
    M32((uint32_t)(eax + 0x210u)) = (uint32_t)(ecx);
L_00539904:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005398d0, 005398d0)
