// lifted from 00464b30 (FUN_00464b30, 134 bytes, 33 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00464b30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00464b30;
L_00464b30:  // mov eax, dword ptr [0x8a9694]
    eax = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_00464b35:  // sub esp, 0x190
    t0 = lsub<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_00464b3b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464b3c:  // mov eax, dword ptr [esp + 0x198]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_00464b43:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464b44:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464b49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464b49:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_00464b4d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464b4e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00464b4f:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464b54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464b54:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00464b57:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00464b5c:  // mov dword ptr [0x677614], 0
    M32((uint32_t)(0x677614u)) = (uint32_t)(0x0u);
L_00464b66:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464b68:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00464b6a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464b6c:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00464b6e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464b70:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00464b72:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464b77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464b77:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00464b7b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464b7c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00464b7d:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00464b82:  // push 0x43c80000
    t0 = 0x43c80000u; esp -= 4; M32(esp) = t0;
L_00464b87:  // push 0x43700000
    t0 = 0x43700000u; esp -= 4; M32(esp) = t0;
L_00464b8c:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00464b91:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_00464b96:  // call 0x44d390
    t0 = 0x0044d390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464b9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464b9b:  // mov dword ptr [0x677630], 0
    M32((uint32_t)(0x677630u)) = (uint32_t)(0x0u);
L_00464ba5:  // mov dword ptr [0x677634], 0
    M32((uint32_t)(0x677634u)) = (uint32_t)(0x0u);
L_00464baf:  // add esp, 0x190
    t0 = ladd<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_00464bb5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00464b30, 00464b30)
