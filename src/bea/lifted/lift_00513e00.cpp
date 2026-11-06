// lifted from 00513e00 (FUN_00513e00, 31 bytes, 10 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00513e00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00513e00;
L_00513e00:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00513e01:  // mov eax, dword ptr [ecx + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x32ea0u)));
L_00513e07:  // lea edx, [esp]
    edx = (uint32_t)((uint32_t)(esp));
L_00513e0b:  // mov dword ptr [esp], 0
    M32((uint32_t)(esp)) = (uint32_t)(0x0u);
L_00513e13:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00513e14:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00513e16:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00513e17:  // call dword ptr [ecx + 0x118]
    t0 = M32((uint32_t)(ecx + 0x118u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00513e1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00513e1d:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00513e1e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00513e00, 00513e00)
