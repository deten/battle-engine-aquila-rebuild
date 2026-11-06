// lifted from 0046b950 (FUN_0046b950, 315 bytes, 95 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0046b950(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0046b950;
L_0046b950:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0046b952:  // push 0x5d276b
    t0 = 0x5d276bu; esp -= 4; M32(esp) = t0;
L_0046b957:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0046b95d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046b95e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0046b965:  // sub esp, 0x428
    t0 = lsub<32>(esp, 0x428u, f);
    esp = (uint32_t)(t0);
L_0046b96b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046b96c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046b96d:  // mov ebp, dword ptr [esp + 0x440]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x440u)));
L_0046b974:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0046b976:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0046b978:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046b979:  // lea eax, [ebx + 4]
    eax = (uint32_t)((uint32_t)(ebx + 0x4u));
L_0046b97c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046b97d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0046b97f:  // lea esi, [ebp + 0x10]
    esi = (uint32_t)((uint32_t)(ebp + 0x10u));
L_0046b982:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0046b984:  // lea edi, [ebx + 0x14]
    edi = (uint32_t)((uint32_t)(ebx + 0x14u));
L_0046b987:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0046b98a:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_0046b98f:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0046b992:  // push 0x403f40
    t0 = 0x403f40u; esp -= 4; M32(esp) = t0;
L_0046b997:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0046b99a:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0046b99d:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0046b9a1:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0046b9a4:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_0046b9a7:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0046b9ac:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0046b9ae:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_0046b9b3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046b9b4:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_0046b9b9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046b9ba:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046b9bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046b9bf:  // mov dword ptr [esp + 0x434], esi
    M32((uint32_t)(esp + 0x434u)) = (uint32_t)(esi);
L_0046b9c6:  // lea edi, [ebp + 0x40]
    edi = (uint32_t)((uint32_t)(ebp + 0x40u));
L_0046b9c9:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0046b9cc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046b9ce:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0046b9d2:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0046b9d4:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0046b9d6:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0046b9d8:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0046b9dc:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0046b9de:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0046b9e0:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0046b9e2:  // mov dword ptr [esp + 0x418], ebx
    M32((uint32_t)(esp + 0x418u)) = (uint32_t)(ebx);
L_0046b9e9:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0046b9ec:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0046b9ee:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046b9f0:  // mov dword ptr [esp + 0x440], 0
    M32((uint32_t)(esp + 0x440u)) = (uint32_t)(0x0u);
L_0046b9fb:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0046b9fe:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0046ba00:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0046ba04:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046ba05:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046ba0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046ba0a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0046ba0c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0046ba0f:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0046ba11:  // mov dword ptr [ebx + 0x58], eax
    M32((uint32_t)(ebx + 0x58u)) = (uint32_t)(eax);
L_0046ba14:  // je 0x46ba38
    if (f.zf) goto L_0046ba38;
L_0046ba16:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0046ba18:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0046ba1c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046ba1d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046ba1f:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046ba22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046ba22:  // mov ecx, dword ptr [ebx + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_0046ba25:  // lea eax, [ebx + 0x44]
    eax = (uint32_t)((uint32_t)(ebx + 0x44u));
L_0046ba28:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046ba29:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046ba2b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0046ba2d:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046ba30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046ba30:  // fstp dword ptr [ebx + 0x48]
    F32((uint32_t)(ebx + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0046ba33:  // mov dword ptr [ebx + 0x4c], esi
    M32((uint32_t)(ebx + 0x4cu)) = (uint32_t)(esi);
L_0046ba36:  // jmp 0x46ba41
    goto L_0046ba41;
L_0046ba38:  // mov dword ptr [ebx + 0x48], esi
    M32((uint32_t)(ebx + 0x48u)) = (uint32_t)(esi);
L_0046ba3b:  // mov dword ptr [ebx + 0x4c], esi
    M32((uint32_t)(ebx + 0x4cu)) = (uint32_t)(esi);
L_0046ba3e:  // mov dword ptr [ebx + 0x44], esi
    M32((uint32_t)(ebx + 0x44u)) = (uint32_t)(esi);
L_0046ba41:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_0046ba46:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046ba48:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0046ba4c:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_0046ba51:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046ba52:  // mov dword ptr [ebx + 0x50], 1
    M32((uint32_t)(ebx + 0x50u)) = (uint32_t)(0x1u);
L_0046ba59:  // mov dword ptr [ebx + 0x54], 0xc8
    M32((uint32_t)(ebx + 0x54u)) = (uint32_t)(0xc8u);
L_0046ba60:  // mov dword ptr [esp + 0x450], 0xffffffff
    M32((uint32_t)(esp + 0x450u)) = (uint32_t)(0xffffffffu);
L_0046ba6b:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046ba70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046ba70:  // mov ecx, dword ptr [esp + 0x438]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x438u)));
L_0046ba77:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0046ba78:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046ba79:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046ba7a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046ba7b:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0046ba82:  // add esp, 0x434
    t0 = ladd<32>(esp, 0x434u, f);
    esp = (uint32_t)(t0);
L_0046ba88:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0046b950, 0046b950)
