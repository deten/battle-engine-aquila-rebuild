// lifted from 004c2ca0 (vslot7, 133 bytes, 52 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c2ca0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c2ca0;
L_004c2ca0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c2ca1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c2ca3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c2ca4:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c2ca8:  // mov eax, dword ptr [esi + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x5cu)));
L_004c2cab:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2cad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2cae:  // push 0x3f
    t0 = 0x3fu; esp -= 4; M32(esp) = t0;
L_004c2cb0:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2cb5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2cb5:  // mov ecx, dword ptr [esi + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_004c2cb8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2cb9:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_004c2cbb:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2cbd:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2cc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2cc2:  // mov edx, dword ptr [esi + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c2cc5:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2cc7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2cc8:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_004c2cca:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2ccfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2ccf:  // mov eax, dword ptr [esi + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c2cd2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2cd4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2cd5:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_004c2cd7:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2cdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2cdc:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c2cdf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2ce0:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004c2ce2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2ce4:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2ce9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2ce9:  // mov edx, dword ptr [esi + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004c2cec:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2cee:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2cef:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_004c2cf1:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2cf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2cf6:  // mov eax, dword ptr [esi + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_004c2cf9:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2cfb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2cfc:  // push 0x44
    t0 = 0x44u; esp -= 4; M32(esp) = t0;
L_004c2cfe:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2d03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2d03:  // mov ecx, dword ptr [esi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c2d06:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2d07:  // push 0x45
    t0 = 0x45u; esp -= 4; M32(esp) = t0;
L_004c2d09:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2d0b:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2d10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2d10:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c2d16:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2d18:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2d19:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004c2d1b:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2d20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2d20:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c2d21:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c2d22:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c2ca0, 004c2ca0)
