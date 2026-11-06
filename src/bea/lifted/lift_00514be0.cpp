// lifted from 00514be0 (FUN_00514be0, 721 bytes, 239 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00514be0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00514be0;
L_00514be0:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00514be4:  // sub esp, 0x208
    t0 = lsub<32>(esp, 0x208u, f);
    esp = (uint32_t)(t0);
L_00514bea:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514bec:  // je 0x514bf4
    if (f.zf) goto L_00514bf4;
L_00514bee:  // mov dword ptr [eax], 0xffffffff
    M32((uint32_t)(eax)) = (uint32_t)(0xffffffffu);
L_00514bf4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00514bf5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00514bf6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00514bf7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00514bf8:  // push 0x63df94
    t0 = 0x63df94u; esp -= 4; M32(esp) = t0;
L_00514bfd:  // call 0x55f347
    t0 = 0x0055f347u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514c02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514c02:  // mov edi, 0x63df94
    edi = (uint32_t)(0x63df94u);
L_00514c07:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514c0a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514c0c:  // lea edx, [esp + 0x118]
    edx = (uint32_t)((uint32_t)(esp + 0x118u));
L_00514c13:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514c15:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00514c17:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00514c19:  // mov ebx, dword ptr [esp + 0x224]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x224u)));
L_00514c20:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00514c22:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00514c24:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00514c26:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00514c27:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00514c2a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00514c2c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00514c2e:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00514c31:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00514c33:  // call 0x4f7d30
    t0 = 0x004f7d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514c38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514c38:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00514c3a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514c3d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514c3f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00514c42:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514c44:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00514c46:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00514c48:  // lea edx, [esp + 0x114]
    edx = (uint32_t)((uint32_t)(esp + 0x114u));
L_00514c4f:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00514c51:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00514c53:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00514c55:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514c58:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514c5a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00514c5c:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00514c5d:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00514c60:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00514c62:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00514c64:  // lea edx, [esp + 0x114]
    edx = (uint32_t)((uint32_t)(esp + 0x114u));
L_00514c6b:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00514c6e:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00514c70:  // mov edi, 0x63df8c
    edi = (uint32_t)(0x63df8cu);
L_00514c75:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514c78:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514c7a:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00514c7c:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00514c7e:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00514c80:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00514c82:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00514c84:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514c87:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514c89:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00514c8b:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00514c8c:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00514c8f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00514c91:  // mov eax, dword ptr [esp + 0x228]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x228u)));
L_00514c98:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00514c9a:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00514c9d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514c9f:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00514ca1:  // jne 0x514cd7
    if (!f.zf) goto L_00514cd7;
L_00514ca3:  // lea eax, [esp + 0x114]
    eax = (uint32_t)((uint32_t)(esp + 0x114u));
L_00514caa:  // push 0x629038
    t0 = 0x629038u; esp -= 4; M32(esp) = t0;
L_00514caf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514cb0:  // call 0x55e490
    t0 = 0x0055e490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514cb5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514cb5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00514cb8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514cba:  // je 0x514cd7
    if (f.zf) goto L_00514cd7;
L_00514cbc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514cbd:  // call 0x55e4a3
    t0 = 0x0055e4a3u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514cc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514cc2:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00514cc5:  // mov eax, 6
    eax = (uint32_t)(0x6u);
L_00514cca:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00514ccb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00514ccc:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00514ccd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00514cce:  // add esp, 0x208
    t0 = ladd<32>(esp, 0x208u, f);
    esp = (uint32_t)(t0);
L_00514cd4:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00514cd7:  // lea ecx, [esp + 0x114]
    ecx = (uint32_t)((uint32_t)(esp + 0x114u));
L_00514cde:  // push 0x63316c
    t0 = 0x63316cu; esp -= 4; M32(esp) = t0;
L_00514ce3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00514ce4:  // call 0x55e490
    t0 = 0x0055e490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514ce9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514ce9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00514cec:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514cee:  // je 0x514d64
    if (f.zf) goto L_00514d64;
L_00514cf0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514cf1:  // call 0x55e4a3
    t0 = 0x0055e4a3u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514cf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514cf6:  // push 0x8898e0
    t0 = 0x8898e0u; esp -= 4; M32(esp) = t0;
L_00514cfb:  // push 0x63df7c
    t0 = 0x63df7cu; esp -= 4; M32(esp) = t0;
L_00514d00:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00514d08:  // call 0x55f5ee
    t0 = 0x0055f5eeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514d0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514d0d:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00514d10:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00514d13:  // mov dword ptr [0x8898d8], eax
    M32((uint32_t)(0x8898d8u)) = (uint32_t)(eax);
L_00514d18:  // je 0x514d64
    if (f.zf) goto L_00514d64;
L_00514d1a:  // test byte ptr [0x8898e0], 0x16
    t0 = llog<8>(M8((uint32_t)(0x8898e0u)) & 0x16u, f);
L_00514d21:  // je 0x514d76
    if (f.zf) goto L_00514d76;
L_00514d23:  // push 0x8898e0
    t0 = 0x8898e0u; esp -= 4; M32(esp) = t0;
L_00514d28:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514d29:  // call 0x55f6bb
    t0 = 0x0055f6bbu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514d2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514d2e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00514d31:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514d33:  // jne 0x514d56
    if (!f.zf) goto L_00514d56;
L_00514d35:  // test byte ptr [0x8898e0], 0x16
    t0 = llog<8>(M8((uint32_t)(0x8898e0u)) & 0x16u, f);
L_00514d3c:  // je 0x514d76
    if (f.zf) goto L_00514d76;
L_00514d3e:  // mov edx, dword ptr [0x8898d8]
    edx = (uint32_t)(M32((uint32_t)(0x8898d8u)));
L_00514d44:  // push 0x8898e0
    t0 = 0x8898e0u; esp -= 4; M32(esp) = t0;
L_00514d49:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00514d4a:  // call 0x55f6bb
    t0 = 0x0055f6bbu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514d4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514d4f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00514d52:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514d54:  // je 0x514d35
    if (f.zf) goto L_00514d35;
L_00514d56:  // mov eax, dword ptr [0x8898d8]
    eax = (uint32_t)(M32((uint32_t)(0x8898d8u)));
L_00514d5b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514d5c:  // call 0x55f783
    t0 = 0x0055f783u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514d61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514d61:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00514d64:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00514d65:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00514d66:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00514d67:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00514d6c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00514d6d:  // add esp, 0x208
    t0 = ladd<32>(esp, 0x208u, f);
    esp = (uint32_t)(t0);
L_00514d73:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00514d76:  // mov edi, 0x8898f4
    edi = (uint32_t)(0x8898f4u);
L_00514d7b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514d7e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514d80:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00514d84:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514d86:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00514d88:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00514d8a:  // lea ebp, [esp + 0x14]
    ebp = (uint32_t)((uint32_t)(esp + 0x14u));
L_00514d8e:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00514d90:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00514d92:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00514d94:  // sub ebp, 4
    t0 = lsub<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_00514d97:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00514d9a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00514d9c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00514d9e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514da0:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00514da3:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00514da5:  // lea edi, [esp + 0x14]
    edi = (uint32_t)((uint32_t)(esp + 0x14u));
L_00514da9:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514dac:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514dae:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00514db0:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00514db1:  // mov byte ptr [ecx + ebp], al
    M8((uint32_t)(ecx + ebp)) = (uint8_t)((eax & 0xffu));
L_00514db4:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00514db8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00514db9:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514dbeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514dbe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514dbf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00514dc0:  // call 0x5d04ec
    t0 = 0x005d04ecu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514dc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514dc5:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00514dc8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514dca:  // je 0x514e73
    if (f.zf) goto L_00514e73;
L_00514dd0:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00514dd4:  // mov edx, dword ptr [0x8898d8]
    edx = (uint32_t)(M32((uint32_t)(0x8898d8u)));
L_00514dda:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00514ddb:  // push 0x8898e0
    t0 = 0x8898e0u; esp -= 4; M32(esp) = t0;
L_00514de0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00514de1:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00514de5:  // call 0x55f6bb
    t0 = 0x0055f6bbu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514deau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514dea:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00514ded:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514def:  // jne 0x514e67
    if (!f.zf) goto L_00514e67;
L_00514df1:  // test byte ptr [0x8898e0], 0x16
    t0 = llog<8>(M8((uint32_t)(0x8898e0u)) & 0x16u, f);
L_00514df8:  // je 0x514e13
    if (f.zf) goto L_00514e13;
L_00514dfa:  // mov eax, dword ptr [0x8898d8]
    eax = (uint32_t)(M32((uint32_t)(0x8898d8u)));
L_00514dff:  // push 0x8898e0
    t0 = 0x8898e0u; esp -= 4; M32(esp) = t0;
L_00514e04:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514e05:  // call 0x55f6bb
    t0 = 0x0055f6bbu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514e0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514e0a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00514e0d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514e0f:  // jne 0x514e67
    if (!f.zf) goto L_00514e67;
L_00514e11:  // jmp 0x514df1
    goto L_00514df1;
L_00514e13:  // mov edi, 0x8898f4
    edi = (uint32_t)(0x8898f4u);
L_00514e18:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514e1b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514e1d:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00514e21:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514e23:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00514e25:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00514e27:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00514e29:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00514e2b:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00514e2d:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00514e30:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00514e32:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00514e34:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514e36:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00514e39:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00514e3b:  // lea edi, [esp + 0x14]
    edi = (uint32_t)((uint32_t)(esp + 0x14u));
L_00514e3f:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00514e42:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00514e44:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00514e46:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00514e47:  // mov byte ptr [ecx + ebp], al
    M8((uint32_t)(ecx + ebp)) = (uint8_t)((eax & 0xffu));
L_00514e4a:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00514e4e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00514e4f:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514e54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514e54:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514e55:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00514e56:  // call 0x5d04ec
    t0 = 0x005d04ecu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514e5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514e5b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00514e5e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00514e60:  // je 0x514e73
    if (f.zf) goto L_00514e73;
L_00514e62:  // jmp 0x514dd0
    goto L_00514dd0;
L_00514e67:  // mov edx, dword ptr [0x8898d8]
    edx = (uint32_t)(M32((uint32_t)(0x8898d8u)));
L_00514e6d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00514e6e:  // jmp 0x514d5c
    goto L_00514d5c;
L_00514e73:  // mov eax, dword ptr [esp + 0x224]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x224u)));
L_00514e7a:  // cmp dword ptr [eax], 0
    t0 = lsub<32>(M32((uint32_t)(eax)), 0x0u, f);
L_00514e7d:  // je 0x514e85
    if (f.zf) goto L_00514e85;
L_00514e7f:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00514e83:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00514e85:  // mov eax, dword ptr [0x8898d8]
    eax = (uint32_t)(M32((uint32_t)(0x8898d8u)));
L_00514e8a:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00514e8d:  // je 0x514ea2
    if (f.zf) goto L_00514ea2;
L_00514e8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00514e90:  // call 0x55f783
    t0 = 0x0055f783u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00514e95u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00514e95:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00514e98:  // mov dword ptr [0x8898d8], 0xffffffff
    M32((uint32_t)(0x8898d8u)) = (uint32_t)(0xffffffffu);
L_00514ea2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00514ea3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00514ea4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00514ea5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514ea7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00514ea8:  // add esp, 0x208
    t0 = ladd<32>(esp, 0x208u, f);
    esp = (uint32_t)(t0);
L_00514eae:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00514be0, 00514be0)
