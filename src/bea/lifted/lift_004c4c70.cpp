// lifted from 004c4c70 (vslot7, 124 bytes, 50 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c4c70(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c4c70;
L_004c4c70:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c4c71:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c4c73:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c4c74:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c4c78:  // mov eax, dword ptr [esi + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x5cu)));
L_004c4c7b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c4c7d:  // je 0x4c4c8c
    if (f.zf) goto L_004c4c8c;
L_004c4c7f:  // add eax, 0x24
    t0 = ladd<32>(eax, 0x24u, f);
    eax = (uint32_t)(t0);
L_004c4c82:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4c84:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c4c85:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_004c4c87:  // call 0x4f5d10
    t0 = 0x004f5d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4c8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4c8c:  // mov eax, dword ptr [esi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_004c4c8f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4c91:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c4c92:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004c4c94:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4c99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4c99:  // mov ecx, dword ptr [esi + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c4c9c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c4c9d:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_004c4c9f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4ca1:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4ca6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4ca6:  // mov edx, dword ptr [esi + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c4ca9:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4cab:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c4cac:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_004c4cae:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4cb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4cb3:  // mov eax, dword ptr [esi + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_004c4cb6:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4cb8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c4cb9:  // push 0x66
    t0 = 0x66u; esp -= 4; M32(esp) = t0;
L_004c4cbb:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4cc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4cc0:  // mov ecx, dword ptr [esi + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_004c4cc3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c4cc4:  // push 0x67
    t0 = 0x67u; esp -= 4; M32(esp) = t0;
L_004c4cc6:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4cc8:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4ccdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4ccd:  // mov edx, dword ptr [esi + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x6cu)));
L_004c4cd0:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4cd2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c4cd3:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_004c4cd5:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4cdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4cda:  // mov eax, dword ptr [esi + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004c4cdd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4cdf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c4ce0:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_004c4ce2:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4ce7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4ce7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c4ce8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c4ce9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c4c70, 004c4c70)
