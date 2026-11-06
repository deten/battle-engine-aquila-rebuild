// lifted from 004c4920 (vslot7, 142 bytes, 52 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c4920(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c4920;
L_004c4920:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c4921:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c4923:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c4924:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c4928:  // lea eax, [esi + 0x5c]
    eax = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c492b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c492d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c492e:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_004c4930:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4935u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4935:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c4938:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c4939:  // push 0x5d
    t0 = 0x5du; esp -= 4; M32(esp) = t0;
L_004c493b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c493d:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4942u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4942:  // lea edx, [esi + 0x6c]
    edx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c4945:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4947:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c4948:  // push 0x5e
    t0 = 0x5eu; esp -= 4; M32(esp) = t0;
L_004c494a:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c494fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c494f:  // lea eax, [esi + 0x74]
    eax = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c4952:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4954:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c4955:  // push 0x5f
    t0 = 0x5fu; esp -= 4; M32(esp) = t0;
L_004c4957:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c495cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c495c:  // mov ecx, dword ptr [esi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c495f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c4960:  // push 0x60
    t0 = 0x60u; esp -= 4; M32(esp) = t0;
L_004c4962:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4964:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4969u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4969:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c496f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4971:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c4972:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_004c4974:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4979u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4979:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004c497f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4981:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c4982:  // push 0x62
    t0 = 0x62u; esp -= 4; M32(esp) = t0;
L_004c4984:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4989u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4989:  // lea ecx, [esi + 0x88]
    ecx = (uint32_t)((uint32_t)(esi + 0x88u));
L_004c498f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c4990:  // push 0x63
    t0 = 0x63u; esp -= 4; M32(esp) = t0;
L_004c4992:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4994:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4999u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4999:  // mov edx, dword ptr [esi + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c499f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c49a1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c49a2:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004c49a4:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c49a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c49a9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c49aa:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c49ab:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c4920, 004c4920)
