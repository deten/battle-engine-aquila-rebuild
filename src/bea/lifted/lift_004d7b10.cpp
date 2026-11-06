// lifted from 004d7b10 (vslot9, 334 bytes, 94 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d7b10(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d7b10;
L_004d7b10:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004d7b12:  // push 0x5d490b
    t0 = 0x5d490bu; esp -= 4; M32(esp) = t0;
L_004d7b17:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004d7b1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d7b1e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004d7b25:  // sub esp, 0x428
    t0 = lsub<32>(esp, 0x428u, f);
    esp = (uint32_t)(t0);
L_004d7b2b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d7b2c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d7b2d:  // mov ebp, dword ptr [esp + 0x440]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x440u)));
L_004d7b34:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d7b35:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_004d7b3a:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004d7b3f:  // mov esi, dword ptr [ebp + 0x70]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x70u)));
L_004d7b42:  // mov dword ptr [ebp + 0x7c], eax
    M32((uint32_t)(ebp + 0x7cu)) = (uint32_t)(eax);
L_004d7b45:  // or esi, 0x120
    t0 = llog<32>(esi | 0x120u, f);
    esi = (uint32_t)(t0);
L_004d7b4b:  // mov dword ptr [ebp + 0x80], eax
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(eax);
L_004d7b51:  // mov dword ptr [ebp + 0x70], esi
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(esi);
L_004d7b54:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004d7b59:  // push 0x403f40
    t0 = 0x403f40u; esp -= 4; M32(esp) = t0;
L_004d7b5e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d7b5f:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004d7b63:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004d7b68:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004d7b6a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d7b6b:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d7b70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d7b70:  // mov dword ptr [esp + 0x430], esi
    M32((uint32_t)(esp + 0x430u)) = (uint32_t)(esi);
L_004d7b77:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d7b79:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004d7b7b:  // mov dword ptr [esp + 0x43c], eax
    M32((uint32_t)(esp + 0x43cu)) = (uint32_t)(eax);
L_004d7b82:  // je 0x4d7b90
    if (f.zf) goto L_004d7b90;
L_004d7b84:  // lea ecx, [ebx + 8]
    ecx = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004d7b87:  // mov dword ptr [esp + 0x414], ecx
    M32((uint32_t)(esp + 0x414u)) = (uint32_t)(ecx);
L_004d7b8e:  // jmp 0x4d7b97
    goto L_004d7b97;
L_004d7b90:  // mov dword ptr [esp + 0x414], eax
    M32((uint32_t)(esp + 0x414u)) = (uint32_t)(eax);
L_004d7b97:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d7b98:  // mov edi, 0x628cf0
    edi = (uint32_t)(0x628cf0u);
L_004d7b9d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004d7ba0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d7ba2:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004d7ba4:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004d7ba6:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004d7ba8:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004d7bac:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004d7bb0:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004d7bb2:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004d7bb4:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004d7bb6:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004d7bb9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d7bbb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d7bbd:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004d7bc0:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004d7bc2:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d7bc6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d7bc7:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d7bccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d7bcc:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004d7bcf:  // mov dword ptr [ebx + 0x30], eax
    M32((uint32_t)(ebx + 0x30u)) = (uint32_t)(eax);
L_004d7bd2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d7bd4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d7bd5:  // je 0x4d7be3
    if (f.zf) goto L_004d7be3;
L_004d7bd7:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004d7bd9:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004d7bdd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d7bde:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d7be0:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d7be3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d7be3:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004d7be5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d7be7:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d7beau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d7bea:  // mov eax, dword ptr [ebp + 0x3ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x3acu)));
L_004d7bf0:  // fstp dword ptr [ebp + 0xa8]
    F32((uint32_t)(ebp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_004d7bf6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d7bf8:  // mov dword ptr [ebx + 0xe4], eax
    M32((uint32_t)(ebx + 0xe4u)) = (uint32_t)(eax);
L_004d7bfe:  // je 0x4d7c07
    if (f.zf) goto L_004d7c07;
L_004d7c00:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004d7c02:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d7c04:  // call dword ptr [eax + 0x58]
    t0 = M32((uint32_t)(eax + 0x58u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d7c07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d7c07:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d7c08:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d7c0a:  // mov dword ptr [ebx + 0xe8], 0x41c80000
    M32((uint32_t)(ebx + 0xe8u)) = (uint32_t)(0x41c80000u);
L_004d7c14:  // mov dword ptr [ebx + 0xe0], 1
    M32((uint32_t)(ebx + 0xe0u)) = (uint32_t)(0x1u);
L_004d7c1e:  // call 0x4011e0
    t0 = 0x004011e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d7c23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d7c23:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004d7c28:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d7c2a:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004d7c2e:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004d7c33:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d7c34:  // mov dword ptr [esp + 0x44c], 0xffffffff
    M32((uint32_t)(esp + 0x44cu)) = (uint32_t)(0xffffffffu);
L_004d7c3f:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d7c44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d7c44:  // mov ecx, dword ptr [esp + 0x434]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x434u)));
L_004d7c4b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d7c4c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d7c4d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d7c4e:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004d7c55:  // add esp, 0x434
    t0 = ladd<32>(esp, 0x434u, f);
    esp = (uint32_t)(t0);
L_004d7c5b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d7b10, 004d7b10)
