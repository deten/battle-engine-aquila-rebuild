// lifted from 004ae0d0 (FUN_004ae0d0, 57 bytes, 23 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ae0d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ae0d0;
L_004ae0d0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ae0d1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004ae0d3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ae0d5:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004ae0d7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ae0d8:  // call 0x501280
    t0 = 0x00501280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ae0ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ae0dd:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ae0e0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004ae0e2:  // mov dword ptr [esi + 4], eax
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(eax);
L_004ae0e5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ae0e7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ae0e9:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004ae0eb:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004ae0ed:  // push 0x152
    t0 = 0x152u; esp -= 4; M32(esp) = t0;
L_004ae0f2:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ae0f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ae0f7:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004ae0fa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ae0fc:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004ae0fe:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004ae100:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_004ae102:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ae107u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ae107:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ae108:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004ae0d0, 004ae0d0)
