// lifted from 00464bc0 (FUN_00464bc0, 142 bytes, 42 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00464bc0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00464bc0;
L_00464bc0:  // sub esp, 0x200
    t0 = lsub<32>(esp, 0x200u, f);
    esp = (uint32_t)(t0);
L_00464bc6:  // mov eax, dword ptr [esp + 0x208]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x208u)));
L_00464bcd:  // mov word ptr [esp], 0
    M16((uint32_t)(esp)) = (uint16_t)(0x0u);
L_00464bd4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00464bd6:  // mov eax, dword ptr [0x8a9694]
    eax = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_00464bdb:  // je 0x464bf1
    if (f.zf) goto L_00464bf1;
L_00464bdd:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00464bde:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464bdf:  // push 0xa0
    t0 = 0xa0u; esp -= 4; M32(esp) = t0;
L_00464be4:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464be9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464be9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464bea:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_00464bee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464bef:  // jmp 0x464c03
    goto L_00464c03;
L_00464bf1:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00464bf2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464bf3:  // push 0x9e
    t0 = 0x9eu; esp -= 4; M32(esp) = t0;
L_00464bf8:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464bfdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464bfd:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_00464c01:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464c02:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00464c03:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464c08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464c08:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00464c0b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00464c10:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00464c12:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00464c14:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464c16:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00464c18:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464c1a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00464c1c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464c21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464c21:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00464c25:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464c26:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00464c27:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00464c2c:  // push 0x43960000
    t0 = 0x43960000u; esp -= 4; M32(esp) = t0;
L_00464c31:  // push 0x43700000
    t0 = 0x43700000u; esp -= 4; M32(esp) = t0;
L_00464c36:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00464c3b:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_00464c40:  // call 0x44d390
    t0 = 0x0044d390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464c45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464c45:  // add esp, 0x200
    t0 = ladd<32>(esp, 0x200u, f);
    esp = (uint32_t)(t0);
L_00464c4b:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00464bc0, 00464bc0)
