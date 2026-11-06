// lifted from 004c59e0 (vslot7, 345 bytes, 119 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c59e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c59e0;
L_004c59e0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c59e1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c59e3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c59e4:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c59e8:  // mov eax, dword ptr [esi + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x5cu)));
L_004c59eb:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c59ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c59ee:  // push 0x3f
    t0 = 0x3fu; esp -= 4; M32(esp) = t0;
L_004c59f0:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c59f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c59f5:  // mov ecx, dword ptr [esi + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_004c59f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c59f9:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_004c59fb:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c59fd:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a02:  // mov edx, dword ptr [esi + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c5a05:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a07:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c5a08:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_004c5a0a:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a0f:  // mov eax, dword ptr [esi + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c5a12:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c5a14:  // je 0x4c5a20
    if (f.zf) goto L_004c5a20;
L_004c5a16:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5a17:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_004c5a19:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a1b:  // call 0x4f5d10
    t0 = 0x004f5d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a20:  // mov eax, dword ptr [esi + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6cu)));
L_004c5a23:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a25:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5a26:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004c5a28:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a2d:  // mov ecx, dword ptr [esi + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_004c5a30:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5a31:  // push 0x74
    t0 = 0x74u; esp -= 4; M32(esp) = t0;
L_004c5a33:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a35:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a3a:  // lea edx, [esi + 0x74]
    edx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c5a3d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a3f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c5a40:  // push 0x6b
    t0 = 0x6bu; esp -= 4; M32(esp) = t0;
L_004c5a42:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a47:  // lea eax, [esi + 0x7c]
    eax = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c5a4a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a4c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5a4d:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_004c5a4f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a54:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c5a5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5a5b:  // push 0x6d
    t0 = 0x6du; esp -= 4; M32(esp) = t0;
L_004c5a5d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a5f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a64:  // lea edx, [esi + 0x8c]
    edx = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004c5a6a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a6c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c5a6d:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_004c5a6f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a74:  // mov eax, dword ptr [esi + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x94u)));
L_004c5a7a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a7c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5a7d:  // push 0x6f
    t0 = 0x6fu; esp -= 4; M32(esp) = t0;
L_004c5a7f:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a84u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a84:  // mov ecx, dword ptr [esi + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x98u)));
L_004c5a8a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5a8b:  // push 0x70
    t0 = 0x70u; esp -= 4; M32(esp) = t0;
L_004c5a8d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a8f:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5a94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5a94:  // lea edx, [esi + 0x9c]
    edx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004c5a9a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5a9c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c5a9d:  // push 0x71
    t0 = 0x71u; esp -= 4; M32(esp) = t0;
L_004c5a9f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5aa4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5aa4:  // lea eax, [esi + 0xa4]
    eax = (uint32_t)((uint32_t)(esi + 0xa4u));
L_004c5aaa:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5aac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5aad:  // push 0x72
    t0 = 0x72u; esp -= 4; M32(esp) = t0;
L_004c5aaf:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5ab4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5ab4:  // lea ecx, [esi + 0xac]
    ecx = (uint32_t)((uint32_t)(esi + 0xacu));
L_004c5aba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5abb:  // push 0x73
    t0 = 0x73u; esp -= 4; M32(esp) = t0;
L_004c5abd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5abf:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5ac4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5ac4:  // mov edx, dword ptr [esi + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004c5aca:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5acc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c5acd:  // push 0x75
    t0 = 0x75u; esp -= 4; M32(esp) = t0;
L_004c5acf:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5ad4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5ad4:  // mov eax, dword ptr [esi + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_004c5ada:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5adc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5add:  // push 0x76
    t0 = 0x76u; esp -= 4; M32(esp) = t0;
L_004c5adf:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5ae4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5ae4:  // lea ecx, [esi + 0xdc]
    ecx = (uint32_t)((uint32_t)(esi + 0xdcu));
L_004c5aea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5aeb:  // push 0x77
    t0 = 0x77u; esp -= 4; M32(esp) = t0;
L_004c5aed:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5aef:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5af4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5af4:  // lea edx, [esi + 0xbc]
    edx = (uint32_t)((uint32_t)(esi + 0xbcu));
L_004c5afa:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5afc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c5afd:  // push 0x78
    t0 = 0x78u; esp -= 4; M32(esp) = t0;
L_004c5aff:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5b04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5b04:  // lea eax, [esi + 0xc4]
    eax = (uint32_t)((uint32_t)(esi + 0xc4u));
L_004c5b0a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5b0c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5b0d:  // push 0x79
    t0 = 0x79u; esp -= 4; M32(esp) = t0;
L_004c5b0f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5b14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5b14:  // lea ecx, [esi + 0xcc]
    ecx = (uint32_t)((uint32_t)(esi + 0xccu));
L_004c5b1a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5b1b:  // push 0x7a
    t0 = 0x7au; esp -= 4; M32(esp) = t0;
L_004c5b1d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5b1f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5b24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5b24:  // add esi, 0xd4
    t0 = ladd<32>(esi, 0xd4u, f);
    esi = (uint32_t)(t0);
L_004c5b2a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5b2c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c5b2d:  // push 0x7b
    t0 = 0x7bu; esp -= 4; M32(esp) = t0;
L_004c5b2f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c5b34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c5b34:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c5b35:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c5b36:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c59e0, 004c59e0)
