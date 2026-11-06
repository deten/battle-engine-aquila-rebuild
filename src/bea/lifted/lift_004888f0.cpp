// lifted from 004888f0 (FUN_004888f0, 369 bytes, 127 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004888f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004888f0;
L_004888f0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004888f6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004888f8:  // push 0x5d2e06
    t0 = 0x5d2e06u; esp -= 4; M32(esp) = t0;
L_004888fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004888fe:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00488905:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00488906:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0048890a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048890b:  // mov esi, dword ptr [0x67a678]
    esi = (uint32_t)(M32((uint32_t)(0x67a678u)));
L_00488911:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00488912:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00488916:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00488918:  // je 0x488978
    if (f.zf) goto L_00488978;
L_0048891a:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048891e:  // lea eax, [esi + 4]
    eax = (uint32_t)((uint32_t)(esi + 0x4u));
L_00488921:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00488922:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00488923:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00488928u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00488928:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0048892b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048892d:  // jne 0x488972
    if (!f.zf) goto L_00488972;
L_0048892f:  // cmp edi, dword ptr [esi + 0x24]
    t0 = lsub<32>(edi, M32((uint32_t)(esi + 0x24u)), f);
L_00488932:  // jne 0x488965
    if (!f.zf) goto L_00488965;
L_00488934:  // cmp dword ptr [esi + 0x34], ebp
    t0 = lsub<32>(M32((uint32_t)(esi + 0x34u)), ebp, f);
L_00488937:  // jne 0x488965
    if (!f.zf) goto L_00488965;
L_00488939:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0048893d:  // mov eax, dword ptr [esi + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x40u)));
L_00488940:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_00488942:  // jne 0x488965
    if (!f.zf) goto L_00488965;
L_00488944:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00488948:  // mov ecx, dword ptr [esi + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x44u)));
L_0048894b:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0048894d:  // jne 0x488965
    if (!f.zf) goto L_00488965;
L_0048894f:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00488953:  // mov eax, dword ptr [esi + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x48u)));
L_00488956:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00488958:  // jne 0x488965
    if (!f.zf) goto L_00488965;
L_0048895a:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0048895e:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00488961:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_00488963:  // je 0x4889be
    if (f.zf) goto L_004889be;
L_00488965:  // push 0x62d410
    t0 = 0x62d410u; esp -= 4; M32(esp) = t0;
L_0048896a:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048896fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048896f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00488972:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_00488974:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00488976:  // jne 0x48891a
    if (!f.zf) goto L_0048891a;
L_00488978:  // push 0x29
    t0 = 0x29u; esp -= 4; M32(esp) = t0;
L_0048897a:  // push 0x62d3f0
    t0 = 0x62d3f0u; esp -= 4; M32(esp) = t0;
L_0048897f:  // push 0x39
    t0 = 0x39u; esp -= 4; M32(esp) = t0;
L_00488981:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_00488983:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00488988:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048898du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048898d:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00488991:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00488993:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0048899b:  // je 0x4889aa
    if (f.zf) goto L_004889aa;
L_0048899d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048899f:  // call 0x542a30
    t0 = 0x00542a30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004889a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004889a4:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004889a6:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004889a8:  // jne 0x4889d2
    if (!f.zf) goto L_004889d2;
L_004889aa:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004889ac:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004889b0:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004889b7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004889b8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004889b9:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004889ba:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004889bd:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004889be:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004889c0:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004889c4:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004889cb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004889cc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004889cd:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004889ce:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004889d1:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004889d2:  // mov ecx, dword ptr [0x67a678]
    ecx = (uint32_t)(M32((uint32_t)(0x67a678u)));
L_004889d8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004889da:  // je 0x4889ee
    if (f.zf) goto L_004889ee;
L_004889dc:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004889de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004889e0:  // je 0x4889ea
    if (f.zf) goto L_004889ea;
L_004889e2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004889e4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004889e6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004889e8:  // jne 0x4889e2
    if (!f.zf) goto L_004889e2;
L_004889ea:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004889ec:  // jmp 0x4889f4
    goto L_004889f4;
L_004889ee:  // mov dword ptr [0x67a678], edx
    M32((uint32_t)(0x67a678u)) = (uint32_t)(edx);
L_004889f4:  // mov dword ptr [edx + 0x24], edi
    M32((uint32_t)(edx + 0x24u)) = (uint32_t)(edi);
L_004889f7:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004889fb:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004889fe:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00488a00:  // mov dword ptr [edx], 0
    M32((uint32_t)(edx)) = (uint32_t)(0x0u);
L_00488a06:  // lea esi, [edx + 4]
    esi = (uint32_t)((uint32_t)(edx + 0x4u));
L_00488a09:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00488a0b:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00488a0d:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00488a0f:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_00488a13:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00488a15:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00488a17:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00488a1b:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00488a1e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00488a20:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00488a22:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00488a26:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00488a29:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00488a2b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00488a2f:  // mov dword ptr [edx + 0x30], eax
    M32((uint32_t)(edx + 0x30u)) = (uint32_t)(eax);
L_00488a32:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00488a36:  // mov dword ptr [edx + 0x40], ecx
    M32((uint32_t)(edx + 0x40u)) = (uint32_t)(ecx);
L_00488a39:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00488a3d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00488a3e:  // mov dword ptr [edx + 0x48], ecx
    M32((uint32_t)(edx + 0x48u)) = (uint32_t)(ecx);
L_00488a41:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00488a45:  // mov dword ptr [edx + 0x44], eax
    M32((uint32_t)(edx + 0x44u)) = (uint32_t)(eax);
L_00488a48:  // mov dword ptr [edx + 0x34], ebp
    M32((uint32_t)(edx + 0x34u)) = (uint32_t)(ebp);
L_00488a4b:  // mov dword ptr [edx + 0x38], 0
    M32((uint32_t)(edx + 0x38u)) = (uint32_t)(0x0u);
L_00488a52:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00488a53:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00488a55:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00488a5c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00488a5d:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00488a60:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004888f0, 004888f0)
