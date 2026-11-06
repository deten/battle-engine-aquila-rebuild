// lifted from 004dea50 (vslot9, 423 bytes, 123 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004dea50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004dea50;
L_004dea50:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004dea56:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004dea58:  // push 0x5d4b92
    t0 = 0x5d4b92u; esp -= 4; M32(esp) = t0;
L_004dea5d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dea5e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004dea65:  // sub esp, 0xc
    t0 = lsub<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004dea68:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_004dea6d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dea6e:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004dea72:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004dea73:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004dea74:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004dea75:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004dea77:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004dea79:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dea7a:  // mov dword ptr [esi + 0x24c], edi
    M32((uint32_t)(esi + 0x24cu)) = (uint32_t)(edi);
L_004dea80:  // mov edx, dword ptr [ebx + 0x70]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x70u)));
L_004dea83:  // mov dword ptr [ebx + 0x7c], eax
    M32((uint32_t)(ebx + 0x7cu)) = (uint32_t)(eax);
L_004dea86:  // mov dword ptr [ebx + 0x80], eax
    M32((uint32_t)(ebx + 0x80u)) = (uint32_t)(eax);
L_004dea8c:  // mov eax, dword ptr [ebx + 0x3bc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x3bcu)));
L_004dea92:  // or edx, 0x20
    t0 = llog<32>(edx | 0x20u, f);
    edx = (uint32_t)(t0);
L_004dea95:  // mov dword ptr [ebx + 0x70], edx
    M32((uint32_t)(ebx + 0x70u)) = (uint32_t)(edx);
L_004dea98:  // mov dword ptr [eax + 0x1a0], 1
    M32((uint32_t)(eax + 0x1a0u)) = (uint32_t)(0x1u);
L_004deaa2:  // call 0x47c730
    t0 = 0x0047c730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deaa7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deaa7:  // cmp dword ptr [esi + 0x214], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x214u)), edi, f);
L_004deaad:  // je 0x4dead2
    if (f.zf) goto L_004dead2;
L_004deaaf:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004deab2:  // mov ebp, dword ptr [esi]
    ebp = (uint32_t)(M32((uint32_t)(esi)));
L_004deab4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004deab6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004deab8:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004deaba:  // push 0x63223c
    t0 = 0x63223cu; esp -= 4; M32(esp) = t0;
L_004deabf:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deac2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deac2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004deac4:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deac9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deac9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004deaca:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004deacc:  // call dword ptr [ebp + 0xf0]
    t0 = M32((uint32_t)(ebp + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dead2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dead2:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004dead4:  // push 0x63221c
    t0 = 0x63221cu; esp -= 4; M32(esp) = t0;
L_004dead9:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_004deadb:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004deadd:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004deae2:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deae7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deae7:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004deaeb:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004deaed:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_004deaf1:  // je 0x4deb10
    if (f.zf) goto L_004deb10;
L_004deaf3:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_004deaf5:  // je 0x4deb04
    if (f.zf) goto L_004deb04;
L_004deaf7:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_004deafa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004deafb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004deafd:  // call 0x49c5d0
    t0 = 0x0049c5d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deb02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deb02:  // jmp 0x4deb12
    goto L_004deb12;
L_004deb04:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004deb06:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004deb07:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004deb09:  // call 0x49c5d0
    t0 = 0x0049c5d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deb0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deb0e:  // jmp 0x4deb12
    goto L_004deb12;
L_004deb10:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004deb12:  // push 0x21
    t0 = 0x21u; esp -= 4; M32(esp) = t0;
L_004deb14:  // push 0x63221c
    t0 = 0x63221cu; esp -= 4; M32(esp) = t0;
L_004deb19:  // or ebp, 0xffffffff
    t0 = llog<32>(ebp | 0xffffffffu, f);
    ebp = (uint32_t)(t0);
L_004deb1c:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004deb1e:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004deb20:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004deb25:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004deb29:  // mov dword ptr [esi + 0x70], eax
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(eax);
L_004deb2c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deb31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deb31:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004deb35:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004deb37:  // mov dword ptr [esp + 0x24], 1
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x1u);
L_004deb3f:  // je 0x4deb4b
    if (f.zf) goto L_004deb4b;
L_004deb41:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004deb42:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004deb44:  // call 0x4f1ec0
    t0 = 0x004f1ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deb49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deb49:  // jmp 0x4deb4d
    goto L_004deb4d;
L_004deb4b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004deb4d:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_004deb4f:  // push 0x63221c
    t0 = 0x63221cu; esp -= 4; M32(esp) = t0;
L_004deb54:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_004deb56:  // push 0x60
    t0 = 0x60u; esp -= 4; M32(esp) = t0;
L_004deb58:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004deb5d:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004deb61:  // mov dword ptr [esi + 0x208], eax
    M32((uint32_t)(esi + 0x208u)) = (uint32_t)(eax);
L_004deb67:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deb6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deb6c:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004deb6e:  // mov dword ptr [esp + 0x2c], edi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edi);
L_004deb72:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004deb74:  // mov dword ptr [esp + 0x24], 2
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x2u);
L_004deb7c:  // je 0x4deb8f
    if (f.zf) goto L_004deb8f;
L_004deb7e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004deb7f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004deb80:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004deb82:  // call 0x4fe710
    t0 = 0x004fe710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004deb87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004deb87:  // mov dword ptr [edi], 0x5dec9c
    M32((uint32_t)(edi)) = (uint32_t)(0x5dec9cu);
L_004deb8d:  // jmp 0x4deb91
    goto L_004deb91;
L_004deb8f:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004deb91:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004deb99:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004deb9d:  // lea eax, [esi + 0x12c]
    eax = (uint32_t)((uint32_t)(esi + 0x12cu));
L_004deba3:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004debab:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004debaf:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004debb7:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004debb9:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004debbd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004debbe:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_004debc2:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004debc5:  // mov dword ptr [esi + 0x13c], edi
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(edi);
L_004debcb:  // mov dword ptr [esi + 0xf4], 0
    M32((uint32_t)(esi + 0xf4u)) = (uint32_t)(0x0u);
L_004debd5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004debd8:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_004debdd:  // call 0x50b010
    t0 = 0x0050b010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004debe2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004debe2:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004debe6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004debe7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004debe8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004debe9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004debea:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004debf1:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004debf4:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004dea50, 004dea50)
