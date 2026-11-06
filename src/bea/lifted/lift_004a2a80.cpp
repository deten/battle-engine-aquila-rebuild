// lifted from 004a2a80 (FUN_004a2a80, 1385 bytes, 413 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a2a80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a2a80;
L_004a2a80:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004a2a86:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a2a88:  // push 0x5d35d8
    t0 = 0x5d35d8u; esp -= 4; M32(esp) = t0;
L_004a2a8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2a8e:  // mov eax, 0x2204
    eax = (uint32_t)(0x2204u);
L_004a2a93:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004a2a9a:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2a9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2a9f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2aa0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a2aa1:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004a2aa3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a2aa4:  // mov eax, dword ptr [ebp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004a2aa7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2aa9:  // jne 0x4a2fcf
    if (!f.zf) goto L_004a2fcf;
L_004a2aaf:  // mov ebx, dword ptr [esp + 0x2220]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2220u)));
L_004a2ab6:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004a2aba:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2abb:  // push 0x62f7b8
    t0 = 0x62f7b8u; esp -= 4; M32(esp) = t0;
L_004a2ac0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2ac1:  // mov dword ptr [ebp + 0xc], 1
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(0x1u);
L_004a2ac8:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2acdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2acd:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2ad0:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004a2ad4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2ad5:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2adau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2ada:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a2add:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004a2ae2:  // push 0x708
    t0 = 0x708u; esp -= 4; M32(esp) = t0;
L_004a2ae7:  // push 0x62f590
    t0 = 0x62f590u; esp -= 4; M32(esp) = t0;
L_004a2aec:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004a2aee:  // push 0x134
    t0 = 0x134u; esp -= 4; M32(esp) = t0;
L_004a2af3:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2af8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2af8:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004a2afc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2afe:  // mov dword ptr [esp + 0x2218], 0
    M32((uint32_t)(esp + 0x2218u)) = (uint32_t)(0x0u);
L_004a2b09:  // je 0x4a2b16
    if (f.zf) goto L_004a2b16;
L_004a2b0b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a2b0d:  // call 0x547d70
    t0 = 0x00547d70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2b12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2b12:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004a2b14:  // jmp 0x4a2b18
    goto L_004a2b18;
L_004a2b16:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004a2b18:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004a2b1b:  // lea eax, [esp + 0x110]
    eax = (uint32_t)((uint32_t)(esp + 0x110u));
L_004a2b22:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2b23:  // push 0x62f7a0
    t0 = 0x62f7a0u; esp -= 4; M32(esp) = t0;
L_004a2b28:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2b29:  // mov dword ptr [esp + 0x2224], 0xffffffff
    M32((uint32_t)(esp + 0x2224u)) = (uint32_t)(0xffffffffu);
L_004a2b34:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2b39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2b39:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2b3c:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004a2b43:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004a2b45:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2b46:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2b48:  // call 0x547dc0
    t0 = 0x00547dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2b4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2b4d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2b4f:  // jne 0x4a2b70
    if (!f.zf) goto L_004a2b70;
L_004a2b51:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004a2b53:  // je 0x4a2fcf
    if (f.zf) goto L_004a2fcf;
L_004a2b59:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2b5b:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2b60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2b60:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a2b61:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004a2b66:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2b6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2b6b:  // jmp 0x4a2fcf
    goto L_004a2fcf;
L_004a2b70:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a2b71:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2b78:  // push 0x62f790
    t0 = 0x62f790u; esp -= 4; M32(esp) = t0;
L_004a2b7d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2b7e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2b83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2b83:  // lea edi, [esp + 0x21c]
    edi = (uint32_t)((uint32_t)(esp + 0x21cu));
L_004a2b8a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2b8d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2b8f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a2b92:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2b94:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2b96:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2b97:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2b9e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2b9f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2ba0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2ba2:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2ba7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2ba7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2ba8:  // lea ecx, [esp + 0x218]
    ecx = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2baf:  // push 0x622dbc
    t0 = 0x622dbcu; esp -= 4; M32(esp) = t0;
L_004a2bb4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2bb5:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2bbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2bba:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2bc1:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2bc4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2bc6:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2bc9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2bcb:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2bcd:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2bce:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2bd5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2bd6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2bd7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2bd9:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2bdeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2bde:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2be5:  // push 0x62f784
    t0 = 0x62f784u; esp -= 4; M32(esp) = t0;
L_004a2bea:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2beb:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2bf0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2bf0:  // lea edi, [esp + 0x21c]
    edi = (uint32_t)((uint32_t)(esp + 0x21cu));
L_004a2bf7:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2bfa:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2bfc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a2bff:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2c01:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2c03:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2c04:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2c05:  // lea ecx, [esp + 0x218]
    ecx = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2c0c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2c0d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2c0f:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2c14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2c14:  // push 0x81
    t0 = 0x81u; esp -= 4; M32(esp) = t0;
L_004a2c19:  // lea edx, [esp + 0x218]
    edx = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2c20:  // push 0x62f738
    t0 = 0x62f738u; esp -= 4; M32(esp) = t0;
L_004a2c25:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2c26:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2c2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2c2b:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2c32:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2c35:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2c37:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2c3a:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2c3c:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2c3e:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2c3f:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2c46:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2c47:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2c48:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2c4a:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2c4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2c4f:  // mov ebx, 0x9c2dd0
    ebx = (uint32_t)(0x9c2dd0u);
L_004a2c54:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2c55:  // lea ecx, [esp + 0x218]
    ecx = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2c5c:  // push 0x622dbc
    t0 = 0x622dbcu; esp -= 4; M32(esp) = t0;
L_004a2c61:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2c62:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2c67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2c67:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2c6e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2c71:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2c73:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2c76:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2c78:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2c7a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2c7b:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2c82:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2c83:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2c84:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2c86:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2c8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2c8b:  // add ebx, 0x20
    t0 = ladd<32>(ebx, 0x20u, f);
    ebx = (uint32_t)(t0);
L_004a2c8e:  // cmp ebx, 0x9c3df0
    t0 = lsub<32>(ebx, 0x9c3df0u, f);
L_004a2c94:  // jl 0x4a2c54
    if ((f.sf != f.of)) goto L_004a2c54;
L_004a2c96:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004a2c99:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004a2c9b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2c9d:  // je 0x4a2ca6
    if (f.zf) goto L_004a2ca6;
L_004a2c9f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004a2ca1:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004a2ca2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2ca4:  // jne 0x4a2c9f
    if (!f.zf) goto L_004a2c9f;
L_004a2ca6:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2cad:  // push 0x62f77c
    t0 = 0x62f77cu; esp -= 4; M32(esp) = t0;
L_004a2cb2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2cb3:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2cb8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2cb8:  // lea edi, [esp + 0x21c]
    edi = (uint32_t)((uint32_t)(esp + 0x21cu));
L_004a2cbf:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2cc2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2cc4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a2cc7:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2cc9:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2ccb:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2ccc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2ccd:  // lea ecx, [esp + 0x218]
    ecx = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2cd4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2cd5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2cd7:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2cdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2cdc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2cdd:  // lea edx, [esp + 0x218]
    edx = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2ce4:  // push 0x62f738
    t0 = 0x62f738u; esp -= 4; M32(esp) = t0;
L_004a2ce9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2cea:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2cefu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2cef:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2cf6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2cf9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2cfb:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2cfe:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2d00:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2d02:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2d03:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2d0a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2d0b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2d0c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2d0e:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2d13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2d13:  // mov edi, dword ptr [ebp]
    edi = (uint32_t)(M32((uint32_t)(ebp)));
L_004a2d16:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004a2d18:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004a2d1a:  // je 0x4a2d2c
    if (f.zf) goto L_004a2d2c;
L_004a2d1c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2d1d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a2d1e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004a2d20:  // call 0x4a2660
    t0 = 0x004a2660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2d25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2d25:  // mov edi, dword ptr [edi]
    edi = (uint32_t)(M32((uint32_t)(edi)));
L_004a2d27:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004a2d28:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004a2d2a:  // jne 0x4a2d1c
    if (!f.zf) goto L_004a2d1c;
L_004a2d2c:  // mov eax, dword ptr [ebp + 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004a2d2f:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004a2d31:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2d33:  // je 0x4a2d40
    if (f.zf) goto L_004a2d40;
L_004a2d35:  // mov eax, dword ptr [eax + 0x208]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x208u)));
L_004a2d3b:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004a2d3c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2d3e:  // jne 0x4a2d35
    if (!f.zf) goto L_004a2d35;
L_004a2d40:  // lea ecx, [esp + 0x214]
    ecx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2d47:  // push 0x62f770
    t0 = 0x62f770u; esp -= 4; M32(esp) = t0;
L_004a2d4c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2d4d:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2d52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2d52:  // lea edi, [esp + 0x21c]
    edi = (uint32_t)((uint32_t)(esp + 0x21cu));
L_004a2d59:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2d5c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2d5e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a2d61:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2d63:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2d65:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2d66:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2d6d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2d6e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2d6f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2d71:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2d76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2d76:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a2d77:  // lea eax, [esp + 0x218]
    eax = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2d7e:  // push 0x62f738
    t0 = 0x62f738u; esp -= 4; M32(esp) = t0;
L_004a2d83:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2d84:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2d89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2d89:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2d90:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2d93:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2d95:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2d98:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2d9a:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2d9c:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2d9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2d9e:  // lea ecx, [esp + 0x218]
    ecx = (uint32_t)((uint32_t)(esp + 0x218u));
L_004a2da5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2da6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2da8:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2dadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2dad:  // mov ebx, dword ptr [ebp + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004a2db0:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004a2db2:  // je 0x4a2ef8
    if (f.zf) goto L_004a2ef8;
L_004a2db8:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2dbf:  // push 0x62f768
    t0 = 0x62f768u; esp -= 4; M32(esp) = t0;
L_004a2dc4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2dc5:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2dcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2dca:  // lea edi, [esp + 0x21c]
    edi = (uint32_t)((uint32_t)(esp + 0x21cu));
L_004a2dd1:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2dd4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2dd6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a2dd9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2ddb:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2ddd:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2dde:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2de5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2de6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2de7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2de9:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2deeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2dee:  // lea ecx, [ebx + 8]
    ecx = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004a2df1:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2df8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2df9:  // push 0x622dbc
    t0 = 0x622dbcu; esp -= 4; M32(esp) = t0;
L_004a2dfe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2dff:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2e04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2e04:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2e0b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2e0e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2e10:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2e13:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2e15:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2e17:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2e18:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2e1f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2e20:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2e21:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2e23:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2e28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2e28:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_004a2e2a:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2e31:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2e32:  // push 0x62f738
    t0 = 0x62f738u; esp -= 4; M32(esp) = t0;
L_004a2e37:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2e38:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2e3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2e3d:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2e44:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2e47:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2e49:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2e4c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2e4e:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2e50:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2e51:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2e58:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2e59:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2e5a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2e5c:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2e61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2e61:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004a2e64:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2e6b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2e6c:  // push 0x62f738
    t0 = 0x62f738u; esp -= 4; M32(esp) = t0;
L_004a2e71:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2e72:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2e77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2e77:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2e7e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2e81:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2e83:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2e86:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2e88:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2e8a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2e8b:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2e92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2e93:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2e94:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2e96:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2e9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2e9b:  // mov eax, dword ptr [ebx + 0x20c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x20cu)));
L_004a2ea1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2ea3:  // je 0x4a2eb4
    if (f.zf) goto L_004a2eb4;
L_004a2ea5:  // lea ecx, [esp + 0x214]
    ecx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2eac:  // push 0x62f710
    t0 = 0x62f710u; esp -= 4; M32(esp) = t0;
L_004a2eb1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2eb2:  // jmp 0x4a2ec1
    goto L_004a2ec1;
L_004a2eb4:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2ebb:  // push 0x62f70c
    t0 = 0x62f70cu; esp -= 4; M32(esp) = t0;
L_004a2ec0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2ec1:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2ec6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2ec6:  // lea edi, [esp + 0x21c]
    edi = (uint32_t)((uint32_t)(esp + 0x21cu));
L_004a2ecd:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2ed0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2ed2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a2ed5:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2ed7:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2ed9:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2eda:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2ee1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2ee2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2ee3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2ee5:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2eeau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2eea:  // mov ebx, dword ptr [ebx + 0x208]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x208u)));
L_004a2ef0:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004a2ef2:  // jne 0x4a2db8
    if (!f.zf) goto L_004a2db8;
L_004a2ef8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2efa:  // call 0x548c00
    t0 = 0x00548c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2effu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2eff:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004a2f01:  // je 0x4a2f15
    if (f.zf) goto L_004a2f15;
L_004a2f03:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2f05:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2f0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2f0a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a2f0b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004a2f10:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2f15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2f15:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004a2f18:  // push 0x77a
    t0 = 0x77au; esp -= 4; M32(esp) = t0;
L_004a2f1d:  // push 0x62f590
    t0 = 0x62f590u; esp -= 4; M32(esp) = t0;
L_004a2f22:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a2f23:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004a2f25:  // push 0x134
    t0 = 0x134u; esp -= 4; M32(esp) = t0;
L_004a2f2a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004a2f2f:  // mov dword ptr [ebp + 8], eax
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(eax);
L_004a2f32:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2f37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2f37:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004a2f3b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a2f3d:  // mov dword ptr [esp + 0x221c], 1
    M32((uint32_t)(esp + 0x221cu)) = (uint32_t)(0x1u);
L_004a2f48:  // je 0x4a2f55
    if (f.zf) goto L_004a2f55;
L_004a2f4a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a2f4c:  // call 0x547d70
    t0 = 0x00547d70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2f51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2f51:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004a2f53:  // jmp 0x4a2f57
    goto L_004a2f57;
L_004a2f55:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004a2f57:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004a2f59:  // push 0x62f750
    t0 = 0x62f750u; esp -= 4; M32(esp) = t0;
L_004a2f5e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2f60:  // mov dword ptr [esp + 0x2224], 0xffffffff
    M32((uint32_t)(esp + 0x2224u)) = (uint32_t)(0xffffffffu);
L_004a2f6b:  // call 0x547dc0
    t0 = 0x00547dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2f70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2f70:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004a2f73:  // lea edx, [esp + 0x214]
    edx = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2f7a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2f7b:  // push 0x62f738
    t0 = 0x62f738u; esp -= 4; M32(esp) = t0;
L_004a2f80:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2f81:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2f86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2f86:  // lea edi, [esp + 0x220]
    edi = (uint32_t)((uint32_t)(esp + 0x220u));
L_004a2f8d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2f90:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2f92:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2f95:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2f97:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2f99:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a2f9a:  // lea eax, [esp + 0x214]
    eax = (uint32_t)((uint32_t)(esp + 0x214u));
L_004a2fa1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2fa2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2fa3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2fa5:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2faau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2faa:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2fac:  // call 0x548c00
    t0 = 0x00548c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2fb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2fb1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004a2fb3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a2fb4:  // je 0x4a2fc8
    if (f.zf) goto L_004a2fc8;
L_004a2fb6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a2fb8:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2fbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2fbd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a2fbe:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004a2fc3:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2fc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2fc8:  // mov dword ptr [ebp + 0xc], 0
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(0x0u);
L_004a2fcf:  // mov ecx, dword ptr [esp + 0x2210]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2210u)));
L_004a2fd6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a2fd7:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004a2fd8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a2fd9:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004a2fe0:  // add esp, 0x2210
    t0 = ladd<32>(esp, 0x2210u, f);
    esp = (uint32_t)(t0);
L_004a2fe6:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004a2a80, 004a2a80)
