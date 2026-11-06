// lifted from 0044aab0 (vslot9, 359 bytes, 103 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0044aab0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0044aab0;
L_0044aab0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0044aab2:  // push 0x5d247b
    t0 = 0x5d247bu; esp -= 4; M32(esp) = t0;
L_0044aab7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0044aabd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044aabe:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0044aac5:  // sub esp, 0x428
    t0 = lsub<32>(esp, 0x428u, f);
    esp = (uint32_t)(t0);
L_0044aacb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0044aacc:  // mov ebx, dword ptr [esp + 0x43c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x43cu)));
L_0044aad3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044aad4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044aad5:  // mov esi, dword ptr [ebx + 0x70]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x70u)));
L_0044aad8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044aad9:  // or esi, 0x120
    t0 = llog<32>(esi | 0x120u, f);
    esi = (uint32_t)(t0);
L_0044aadf:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_0044aae4:  // mov dword ptr [ebx + 0x70], esi
    M32((uint32_t)(ebx + 0x70u)) = (uint32_t)(esi);
L_0044aae7:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_0044aaec:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_0044aaf1:  // mov dword ptr [ebx + 0x7c], eax
    M32((uint32_t)(ebx + 0x7cu)) = (uint32_t)(eax);
L_0044aaf4:  // mov dword ptr [ebx + 0x80], eax
    M32((uint32_t)(ebx + 0x80u)) = (uint32_t)(eax);
L_0044aafa:  // push 0x403f40
    t0 = 0x403f40u; esp -= 4; M32(esp) = t0;
L_0044aaff:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044ab00:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0044ab04:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_0044ab09:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0044ab0b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044ab0c:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044ab11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044ab11:  // mov dword ptr [esp + 0x434], esi
    M32((uint32_t)(esp + 0x434u)) = (uint32_t)(esi);
L_0044ab18:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0044ab1a:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_0044ab1c:  // mov dword ptr [esp + 0x440], eax
    M32((uint32_t)(esp + 0x440u)) = (uint32_t)(eax);
L_0044ab23:  // je 0x44ab31
    if (f.zf) goto L_0044ab31;
L_0044ab25:  // lea ecx, [ebp + 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0044ab28:  // mov dword ptr [esp + 0x418], ecx
    M32((uint32_t)(esp + 0x418u)) = (uint32_t)(ecx);
L_0044ab2f:  // jmp 0x44ab38
    goto L_0044ab38;
L_0044ab31:  // mov dword ptr [esp + 0x418], eax
    M32((uint32_t)(esp + 0x418u)) = (uint32_t)(eax);
L_0044ab38:  // mov edi, 0x628cf0
    edi = (uint32_t)(0x628cf0u);
L_0044ab3d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0044ab40:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0044ab42:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0044ab46:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0044ab48:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0044ab4a:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0044ab4c:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0044ab50:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0044ab52:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0044ab54:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0044ab56:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0044ab59:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0044ab5b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0044ab5d:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0044ab60:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0044ab62:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0044ab66:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044ab67:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044ab6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044ab6c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0044ab6f:  // mov dword ptr [ebp + 0x30], eax
    M32((uint32_t)(ebp + 0x30u)) = (uint32_t)(eax);
L_0044ab72:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044ab74:  // je 0x44ab82
    if (f.zf) goto L_0044ab82;
L_0044ab76:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0044ab78:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0044ab7c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044ab7d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0044ab7f:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044ab82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044ab82:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0044ab83:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0044ab85:  // call 0x4011e0
    t0 = 0x004011e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044ab8au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044ab8a:  // push 0x628cd4
    t0 = 0x628cd4u; esp -= 4; M32(esp) = t0;
L_0044ab8f:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_0044ab94:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044ab99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044ab99:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044ab9b:  // je 0x44abdb
    if (f.zf) goto L_0044abdb;
L_0044ab9d:  // mov ecx, dword ptr [0x672fb8]
    ecx = (uint32_t)(M32((uint32_t)(0x672fb8u)));
L_0044aba3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0044aba5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0044aba7:  // add ebp, 0xe0
    t0 = ladd<32>(ebp, 0xe0u, f);
    ebp = (uint32_t)(t0);
L_0044abad:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0044abb0:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0044abb2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044abb3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044abb4:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0044abb6:  // mov ecx, dword ptr [0x672fbc]
    ecx = (uint32_t)(M32((uint32_t)(0x672fbcu)));
L_0044abbc:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0044abbf:  // mov ecx, dword ptr [0x672fc0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fc0u)));
L_0044abc5:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_0044abc8:  // mov ecx, dword ptr [0x672fc4]
    ecx = (uint32_t)(M32((uint32_t)(0x672fc4u)));
L_0044abce:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0044abd1:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_0044abd6:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044abdbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044abdb:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_0044abe0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0044abe2:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0044abe6:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_0044abeb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0044abec:  // mov dword ptr [esp + 0x450], 0xffffffff
    M32((uint32_t)(esp + 0x450u)) = (uint32_t)(0xffffffffu);
L_0044abf7:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044abfcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044abfc:  // mov ecx, dword ptr [esp + 0x438]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x438u)));
L_0044ac03:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044ac04:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044ac05:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044ac06:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0044ac0d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044ac0e:  // add esp, 0x434
    t0 = ladd<32>(esp, 0x434u, f);
    esp = (uint32_t)(t0);
L_0044ac14:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0044aab0, 0044aab0)
