// lifted from 00503dd0 (FUN_00503dd0, 250 bytes, 96 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00503dd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00503dd0;
L_00503dd0:  // sub esp, 0x100
    t0 = lsub<32>(esp, 0x100u, f);
    esp = (uint32_t)(t0);
L_00503dd6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00503dd9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00503ddb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00503ddc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00503ddd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00503dde:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00503ddf:  // mov edi, 0x662b2c
    edi = (uint32_t)(0x662b2cu);
L_00503de4:  // mov ebp, dword ptr [esp + 0x114]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x114u)));
L_00503deb:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00503ded:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00503def:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00503df1:  // mov ebx, dword ptr [esp + 0x118]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x118u)));
L_00503df8:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00503dfa:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00503dfc:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_00503dfe:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00503e01:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00503e03:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00503e05:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00503e08:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00503e0a:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00503e0c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00503e0e:  // je 0x503ebf
    if (f.zf) goto L_00503ebf;
L_00503e14:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503e15:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00503e19:  // push 0x63d0e8
    t0 = 0x63d0e8u; esp -= 4; M32(esp) = t0;
L_00503e1e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503e1f:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00503e24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00503e24:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00503e27:  // mov esi, 0x634074
    esi = (uint32_t)(0x634074u);
L_00503e2c:  // mov eax, dword ptr [esi - 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xfffffffcu)));
L_00503e2f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00503e31:  // jne 0x503e56
    if (!f.zf) goto L_00503e56;
L_00503e33:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_00503e35:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00503e38:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00503e3a:  // jne 0x503e56
    if (!f.zf) goto L_00503e56;
L_00503e3c:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00503e3e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00503e40:  // je 0x503e56
    if (f.zf) goto L_00503e56;
L_00503e42:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503e43:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503e44:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00503e48:  // push 0x63d0e0
    t0 = 0x63d0e0u; esp -= 4; M32(esp) = t0;
L_00503e4d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503e4e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00503e53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00503e53:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00503e56:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_00503e59:  // cmp esi, 0x634554
    t0 = lsub<32>(esi, 0x634554u, f);
L_00503e5f:  // jb 0x503e2c
    if (f.cf) goto L_00503e2c;
L_00503e61:  // lea edi, [esp + 0x10]
    edi = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503e65:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00503e68:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00503e6a:  // add ebx, 4
    t0 = ladd<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_00503e6d:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00503e6f:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00503e71:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00503e73:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00503e75:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00503e77:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_00503e79:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00503e7c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00503e7e:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00503e80:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00503e81:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00503e84:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00503e86:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00503e88:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00503e8b:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00503e8d:  // mov edi, 0x622d9c
    edi = (uint32_t)(0x622d9cu);
L_00503e92:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00503e95:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00503e97:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00503e99:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00503e9b:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00503e9d:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00503e9f:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_00503ea1:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00503ea4:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00503ea6:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00503ea8:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00503ea9:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00503eac:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00503eae:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00503eb0:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00503eb3:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00503eb5:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00503eb7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00503eb9:  // jne 0x503e14
    if (!f.zf) goto L_00503e14;
L_00503ebf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00503ec0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00503ec1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00503ec2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00503ec3:  // add esp, 0x100
    t0 = ladd<32>(esp, 0x100u, f);
    esp = (uint32_t)(t0);
L_00503ec9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00503dd0, 00503dd0)
