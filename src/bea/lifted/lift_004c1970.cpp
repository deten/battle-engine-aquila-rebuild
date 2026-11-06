// lifted from 004c1970 (vslot7, 235 bytes, 82 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c1970(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c1970;
L_004c1970:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c1971:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c1973:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c1974:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c1978:  // lea eax, [esi + 0x5c]
    eax = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c197b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c197d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c197e:  // push 0x1a
    t0 = 0x1au; esp -= 4; M32(esp) = t0;
L_004c1980:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1985u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1985:  // mov ecx, dword ptr [esi + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c1988:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1989:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_004c198b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c198d:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1992u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1992:  // mov edx, dword ptr [esi + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c1995:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1997:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c1998:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004c199a:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c199fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c199f:  // lea eax, [esi + 0x6c]
    eax = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c19a2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c19a4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c19a5:  // push 0x1d
    t0 = 0x1du; esp -= 4; M32(esp) = t0;
L_004c19a7:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c19acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c19ac:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c19af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c19b0:  // push 0x1e
    t0 = 0x1eu; esp -= 4; M32(esp) = t0;
L_004c19b2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c19b4:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c19b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c19b9:  // lea edx, [esi + 0x7c]
    edx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c19bc:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c19be:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c19bf:  // push 0x1f
    t0 = 0x1fu; esp -= 4; M32(esp) = t0;
L_004c19c1:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c19c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c19c6:  // lea eax, [esi + 0x84]
    eax = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c19cc:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c19ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c19cf:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004c19d1:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c19d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c19d6:  // mov ecx, dword ptr [esi + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004c19dc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c19dd:  // push 0x21
    t0 = 0x21u; esp -= 4; M32(esp) = t0;
L_004c19df:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c19e1:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c19e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c19e6:  // mov edx, dword ptr [esi + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c19ec:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c19ee:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c19ef:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_004c19f1:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c19f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c19f6:  // lea eax, [esi + 0x94]
    eax = (uint32_t)((uint32_t)(esi + 0x94u));
L_004c19fc:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c19fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c19ff:  // push 0x23
    t0 = 0x23u; esp -= 4; M32(esp) = t0;
L_004c1a01:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1a06u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1a06:  // mov ecx, dword ptr [esi + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x9cu)));
L_004c1a0c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1a0d:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004c1a0f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1a11:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1a16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1a16:  // mov edx, dword ptr [esi + 0xa0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004c1a1c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1a1e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c1a1f:  // push 0x25
    t0 = 0x25u; esp -= 4; M32(esp) = t0;
L_004c1a21:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1a26u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1a26:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004c1a2c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1a2e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c1a2f:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_004c1a31:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1a36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1a36:  // lea ecx, [esi + 0xa8]
    ecx = (uint32_t)((uint32_t)(esi + 0xa8u));
L_004c1a3c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1a3d:  // push 0x27
    t0 = 0x27u; esp -= 4; M32(esp) = t0;
L_004c1a3f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1a41:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1a46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1a46:  // mov edx, dword ptr [esi + 0xb0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xb0u)));
L_004c1a4c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1a4e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c1a4f:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004c1a51:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c1a56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c1a56:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c1a57:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c1a58:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c1970, 004c1970)
