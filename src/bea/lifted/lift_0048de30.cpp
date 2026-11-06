// lifted from 0048de30 (FUN_0048de30, 82 bytes, 18 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048de30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048de30;
L_0048de30:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0048de33:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0048de37:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048de3b:  // mov dword ptr [esp], 0x62d804
    M32((uint32_t)(esp)) = (uint32_t)(0x62d804u);
L_0048de43:  // mov dword ptr [esp + 4], 0x62d800
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(0x62d800u);
L_0048de4b:  // mov dword ptr [esp + 8], 0x62d7f8
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x62d7f8u);
L_0048de53:  // mov dword ptr [esp + 0xc], 0x62d7f0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x62d7f0u);
L_0048de5b:  // mov dword ptr [esp + 0x10], 0x62d7e8
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x62d7e8u);
L_0048de63:  // mov ecx, dword ptr [esp + eax*4]
    ecx = (uint32_t)(M32((uint32_t)(esp + eax * 4u)));
L_0048de67:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048de6b:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_0048de71:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048de72:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048de73:  // push 0x62d7d0
    t0 = 0x62d7d0u; esp -= 4; M32(esp) = t0;
L_0048de78:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048de79:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048de7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048de7e:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_0048de81:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0048de30, 0048de30)
