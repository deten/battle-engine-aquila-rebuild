// lifted from 0042a7b0 (FUN_0042a7b0, 1400 bytes, 489 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042a7b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042a7b0;
L_0042a7b0:  // sub esp, 0x1c
    t0 = lsub<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a7b3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042a7b4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042a7b5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042a7b6:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0042a7ba:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a7bb:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0042a7bd:  // push 0x2e
    t0 = 0x2eu; esp -= 4; M32(esp) = t0;
L_0042a7bf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042a7c0:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0042a7c4:  // call 0x55e2d0
    t0 = 0x0055e2d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a7c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a7c9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a7cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042a7ce:  // je 0x42a7d8
    if (f.zf) goto L_0042a7d8;
L_0042a7d0:  // lea ebp, [eax + 1]
    ebp = (uint32_t)((uint32_t)(eax + 0x1u));
L_0042a7d3:  // mov byte ptr [eax], 0
    M8((uint32_t)(eax)) = (uint8_t)(0x0u);
L_0042a7d6:  // jmp 0x42a7da
    goto L_0042a7da;
L_0042a7d8:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0042a7da:  // mov ebx, dword ptr [edi + 0x2398]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x2398u)));
L_0042a7e0:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0042a7e2:  // je 0x42a7fc
    if (f.zf) goto L_0042a7fc;
L_0042a7e4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042a7e5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042a7e6:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a7ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a7eb:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a7ee:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042a7f0:  // je 0x42a814
    if (f.zf) goto L_0042a814;
L_0042a7f2:  // mov ebx, dword ptr [ebx + 0xac]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_0042a7f8:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0042a7fa:  // jne 0x42a7e4
    if (!f.zf) goto L_0042a7e4;
L_0042a7fc:  // push 0x624b84
    t0 = 0x624b84u; esp -= 4; M32(esp) = t0;
L_0042a801:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a802:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a807u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a807:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a80a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a80b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a80c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a80d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a80e:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a811:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a814:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0042a816:  // je 0x42a7fc
    if (f.zf) goto L_0042a7fc;
L_0042a818:  // mov al, byte ptr [ebx + 0xa8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0xa8u))) & 0xffu);
L_0042a81e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0042a820:  // je 0x42a83a
    if (f.zf) goto L_0042a83a;
L_0042a822:  // push 0x625224
    t0 = 0x625224u; esp -= 4; M32(esp) = t0;
L_0042a827:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a828:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a82du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a82d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a830:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a831:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a832:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a833:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a834:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a837:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a83a:  // mov eax, dword ptr [ebx + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa0u)));
L_0042a840:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042a842:  // jne 0x42a871
    if (!f.zf) goto L_0042a871;
L_0042a844:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042a848:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042a849:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a84eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a84e:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a854:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042a857:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042a85c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a85d:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_0042a85f:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a864u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a864:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a867:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a868:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a869:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a86a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a86b:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a86e:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a871:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0042a874:  // jne 0x42a87d
    if (!f.zf) goto L_0042a87d;
L_0042a876:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042a87a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042a87b:  // jmp 0x42a849
    goto L_0042a849;
L_0042a87d:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0042a880:  // jne 0x42a8d6
    if (!f.zf) goto L_0042a8d6;
L_0042a882:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042a886:  // mov al, byte ptr [edx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx))) & 0xffu);
L_0042a888:  // cmp al, 0x54
    t0 = lsub<8>((eax & 0xffu), 0x54u, f);
L_0042a88a:  // je 0x42a8b5
    if (f.zf) goto L_0042a8b5;
L_0042a88c:  // cmp al, 0x74
    t0 = lsub<8>((eax & 0xffu), 0x74u, f);
L_0042a88e:  // je 0x42a8b5
    if (f.zf) goto L_0042a8b5;
L_0042a890:  // cmp al, 0x31
    t0 = lsub<8>((eax & 0xffu), 0x31u, f);
L_0042a892:  // je 0x42a8b5
    if (f.zf) goto L_0042a8b5;
L_0042a894:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a89a:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042a89f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a8a0:  // mov byte ptr [eax], 0
    M8((uint32_t)(eax)) = (uint8_t)(0x0u);
L_0042a8a3:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a8a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a8a8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a8ab:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a8ac:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a8ad:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a8ae:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a8af:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a8b2:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a8b5:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a8bb:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042a8c0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a8c1:  // mov byte ptr [ecx], 1
    M8((uint32_t)(ecx)) = (uint8_t)(0x1u);
L_0042a8c4:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a8c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a8c9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a8cc:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a8cd:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a8ce:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a8cf:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a8d0:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a8d3:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a8d6:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0042a8d9:  // jne 0x42a91c
    if (!f.zf) goto L_0042a91c;
L_0042a8db:  // mov edi, dword ptr [esp + 0x34]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042a8df:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042a8e2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042a8e4:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042a8e9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042a8eb:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042a8ed:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042a8ef:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0042a8f1:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042a8f3:  // mov edi, dword ptr [ebx + 0xa4]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a8f9:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042a8fc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042a8fe:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0042a900:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042a903:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042a905:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0042a909:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a90a:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a90fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a90f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a912:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a913:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a914:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a915:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a916:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a919:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a91c:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_0042a91f:  // je 0x42a9c8
    if (f.zf) goto L_0042a9c8;
L_0042a925:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_0042a928:  // jne 0x42aa9f
    if (!f.zf) goto L_0042aa9f;
L_0042a92e:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0042a930:  // jne 0x42a9b6
    if (!f.zf) goto L_0042a9b6;
L_0042a936:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0042a93a:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_0042a93e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042a93f:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0042a943:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0042a947:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042a948:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042a949:  // push 0x62508c
    t0 = 0x62508cu; esp -= 4; M32(esp) = t0;
L_0042a94e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042a94f:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a954u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a954:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0042a957:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0042a95a:  // je 0x42a978
    if (f.zf) goto L_0042a978;
L_0042a95c:  // push 0x6251ec
    t0 = 0x6251ecu; esp -= 4; M32(esp) = t0;
L_0042a961:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_0042a966:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a96bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a96b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a96e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a96f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a970:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a971:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a972:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a975:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a978:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a97e:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042a982:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042a987:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a988:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0042a98a:  // mov edx, dword ptr [ebx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a990:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0042a994:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0042a997:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a99d:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0042a9a1:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0042a9a4:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a9a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a9a9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a9ac:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a9ad:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a9ae:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a9af:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a9b0:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a9b3:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a9b6:  // push 0x6251e8
    t0 = 0x6251e8u; esp -= 4; M32(esp) = t0;
L_0042a9bb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042a9bc:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a9c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a9c1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a9c4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042a9c6:  // jne 0x42a9f5
    if (!f.zf) goto L_0042a9f5;
L_0042a9c8:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042a9cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042a9cd:  // call 0x55e1c4
    t0 = 0x0055e1c4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a9d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a9d2:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042a9d8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042a9db:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_0042a9dd:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042a9e2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042a9e3:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a9e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a9e8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a9eb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042a9ec:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042a9ed:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042a9ee:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042a9ef:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042a9f2:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a9f5:  // push 0x6251e4
    t0 = 0x6251e4u; esp -= 4; M32(esp) = t0;
L_0042a9fa:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042a9fb:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa00:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042aa03:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042aa05:  // jne 0x42aa35
    if (!f.zf) goto L_0042aa35;
L_0042aa07:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042aa0b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042aa0c:  // call 0x55e1c4
    t0 = 0x0055e1c4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa11:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042aa17:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042aa1a:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0042aa1d:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042aa22:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042aa23:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa28:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042aa2b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042aa2c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042aa2d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042aa2e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042aa2f:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042aa32:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042aa35:  // push 0x6251e0
    t0 = 0x6251e0u; esp -= 4; M32(esp) = t0;
L_0042aa3a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042aa3b:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa40:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042aa43:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042aa45:  // jne 0x42aa75
    if (!f.zf) goto L_0042aa75;
L_0042aa47:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042aa4b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042aa4c:  // call 0x55e1c4
    t0 = 0x0055e1c4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa51:  // mov edx, dword ptr [ebx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042aa57:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042aa5a:  // fstp dword ptr [edx + 8]
    F32((uint32_t)(edx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0042aa5d:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042aa62:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042aa63:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa68:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042aa6b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042aa6c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042aa6d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042aa6e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042aa6f:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042aa72:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042aa75:  // push 0x6251a8
    t0 = 0x6251a8u; esp -= 4; M32(esp) = t0;
L_0042aa7a:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_0042aa7f:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa84u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa84:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042aa87:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042aa8c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042aa8d:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aa92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aa92:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042aa95:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042aa96:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042aa97:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042aa98:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042aa99:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042aa9c:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042aa9f:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_0042aaa2:  // jne 0x42ad10
    if (!f.zf) goto L_0042ad10;
L_0042aaa8:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0042aaaa:  // jne 0x42ab9c
    if (!f.zf) goto L_0042ab9c;
L_0042aab0:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_0042aab4:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042aab8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042aab9:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042aabd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042aabe:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042aac2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042aac3:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042aac7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042aac8:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042aacc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042aacd:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042aad1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042aad2:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_0042aad6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042aad7:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0042aadb:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0042aadf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042aae0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042aae1:  // push 0x62518c
    t0 = 0x62518cu; esp -= 4; M32(esp) = t0;
L_0042aae6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042aae7:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042aaecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042aaec:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0042aaef:  // cmp eax, 9
    t0 = lsub<32>(eax, 0x9u, f);
L_0042aaf2:  // je 0x42ab10
    if (f.zf) goto L_0042ab10;
L_0042aaf4:  // push 0x625138
    t0 = 0x625138u; esp -= 4; M32(esp) = t0;
L_0042aaf9:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_0042aafe:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ab03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ab03:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ab06:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ab07:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ab08:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ab09:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ab0a:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042ab0d:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042ab10:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab16:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042ab1a:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042ab1f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042ab20:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0042ab22:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab28:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0042ab2c:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_0042ab2f:  // mov edx, dword ptr [ebx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab35:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0042ab39:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0042ab3c:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab42:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0042ab46:  // mov dword ptr [ecx + 0x10], edx
    M32((uint32_t)(ecx + 0x10u)) = (uint32_t)(edx);
L_0042ab49:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab4f:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0042ab53:  // mov dword ptr [eax + 0x14], ecx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(ecx);
L_0042ab56:  // mov edx, dword ptr [ebx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab5c:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0042ab60:  // mov dword ptr [edx + 0x18], eax
    M32((uint32_t)(edx + 0x18u)) = (uint32_t)(eax);
L_0042ab63:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab69:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0042ab6d:  // mov dword ptr [ecx + 0x20], edx
    M32((uint32_t)(ecx + 0x20u)) = (uint32_t)(edx);
L_0042ab70:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab76:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0042ab7a:  // mov dword ptr [eax + 0x24], ecx
    M32((uint32_t)(eax + 0x24u)) = (uint32_t)(ecx);
L_0042ab7d:  // mov edx, dword ptr [ebx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ab83:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0042ab87:  // mov dword ptr [edx + 0x28], eax
    M32((uint32_t)(edx + 0x28u)) = (uint32_t)(eax);
L_0042ab8a:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ab8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ab8f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ab92:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ab93:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ab94:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ab95:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ab96:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042ab99:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042ab9c:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042ab9e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042aba1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042aba3:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042aba5:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042aba7:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042aba8:  // cmp ecx, 2
    t0 = lsub<32>(ecx, 0x2u, f);
L_0042abab:  // je 0x42abc9
    if (f.zf) goto L_0042abc9;
L_0042abad:  // push 0x6250e0
    t0 = 0x6250e0u; esp -= 4; M32(esp) = t0;
L_0042abb2:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_0042abb7:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042abbcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042abbc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042abbf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042abc0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042abc1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042abc2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042abc3:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042abc6:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042abc9:  // mov al, byte ptr [ebp]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp))) & 0xffu);
L_0042abcc:  // cmp al, 0x31
    t0 = lsub<8>((eax & 0xffu), 0x31u, f);
L_0042abce:  // je 0x42ac1a
    if (f.zf) goto L_0042ac1a;
L_0042abd0:  // cmp al, 0x78
    t0 = lsub<8>((eax & 0xffu), 0x78u, f);
L_0042abd2:  // je 0x42ac1a
    if (f.zf) goto L_0042ac1a;
L_0042abd4:  // cmp al, 0x58
    t0 = lsub<8>((eax & 0xffu), 0x58u, f);
L_0042abd6:  // je 0x42ac1a
    if (f.zf) goto L_0042ac1a;
L_0042abd8:  // cmp al, 0x32
    t0 = lsub<8>((eax & 0xffu), 0x32u, f);
L_0042abda:  // je 0x42ac13
    if (f.zf) goto L_0042ac13;
L_0042abdc:  // cmp al, 0x79
    t0 = lsub<8>((eax & 0xffu), 0x79u, f);
L_0042abde:  // je 0x42ac13
    if (f.zf) goto L_0042ac13;
L_0042abe0:  // cmp al, 0x59
    t0 = lsub<8>((eax & 0xffu), 0x59u, f);
L_0042abe2:  // je 0x42ac13
    if (f.zf) goto L_0042ac13;
L_0042abe4:  // cmp al, 0x33
    t0 = lsub<8>((eax & 0xffu), 0x33u, f);
L_0042abe6:  // je 0x42ac0c
    if (f.zf) goto L_0042ac0c;
L_0042abe8:  // cmp al, 0x7a
    t0 = lsub<8>((eax & 0xffu), 0x7au, f);
L_0042abea:  // je 0x42ac0c
    if (f.zf) goto L_0042ac0c;
L_0042abec:  // cmp al, 0x5a
    t0 = lsub<8>((eax & 0xffu), 0x5au, f);
L_0042abee:  // je 0x42ac0c
    if (f.zf) goto L_0042ac0c;
L_0042abf0:  // push 0x6250c8
    t0 = 0x6250c8u; esp -= 4; M32(esp) = t0;
L_0042abf5:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_0042abfa:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042abffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042abff:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ac02:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ac03:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ac04:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ac05:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ac06:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042ac09:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042ac0c:  // mov esi, 3
    esi = (uint32_t)(0x3u);
L_0042ac11:  // jmp 0x42ac1f
    goto L_0042ac1f;
L_0042ac13:  // mov esi, 2
    esi = (uint32_t)(0x2u);
L_0042ac18:  // jmp 0x42ac1f
    goto L_0042ac1f;
L_0042ac1a:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_0042ac1f:  // mov al, byte ptr [ebp + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x1u))) & 0xffu);
L_0042ac22:  // cmp al, 0x31
    t0 = lsub<8>((eax & 0xffu), 0x31u, f);
L_0042ac24:  // je 0x42acda
    if (f.zf) goto L_0042acda;
L_0042ac2a:  // cmp al, 0x78
    t0 = lsub<8>((eax & 0xffu), 0x78u, f);
L_0042ac2c:  // je 0x42acda
    if (f.zf) goto L_0042acda;
L_0042ac32:  // cmp al, 0x58
    t0 = lsub<8>((eax & 0xffu), 0x58u, f);
L_0042ac34:  // je 0x42acda
    if (f.zf) goto L_0042acda;
L_0042ac3a:  // cmp al, 0x32
    t0 = lsub<8>((eax & 0xffu), 0x32u, f);
L_0042ac3c:  // je 0x42aca4
    if (f.zf) goto L_0042aca4;
L_0042ac3e:  // cmp al, 0x79
    t0 = lsub<8>((eax & 0xffu), 0x79u, f);
L_0042ac40:  // je 0x42aca4
    if (f.zf) goto L_0042aca4;
L_0042ac42:  // cmp al, 0x59
    t0 = lsub<8>((eax & 0xffu), 0x59u, f);
L_0042ac44:  // je 0x42aca4
    if (f.zf) goto L_0042aca4;
L_0042ac46:  // cmp al, 0x33
    t0 = lsub<8>((eax & 0xffu), 0x33u, f);
L_0042ac48:  // je 0x42ac6e
    if (f.zf) goto L_0042ac6e;
L_0042ac4a:  // cmp al, 0x7a
    t0 = lsub<8>((eax & 0xffu), 0x7au, f);
L_0042ac4c:  // je 0x42ac6e
    if (f.zf) goto L_0042ac6e;
L_0042ac4e:  // cmp al, 0x5a
    t0 = lsub<8>((eax & 0xffu), 0x5au, f);
L_0042ac50:  // je 0x42ac6e
    if (f.zf) goto L_0042ac6e;
L_0042ac52:  // push 0x6250ac
    t0 = 0x6250acu; esp -= 4; M32(esp) = t0;
L_0042ac57:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_0042ac5c:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ac61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ac61:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ac64:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ac65:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ac66:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ac67:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ac68:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042ac6b:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042ac6e:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042ac72:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042ac73:  // call 0x55e1c4
    t0 = 0x0055e1c4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ac78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ac78:  // mov edx, dword ptr [ebx + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042ac7e:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0042ac82:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042ac85:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0042ac88:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042ac8d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042ac8e:  // fstp dword ptr [edx + esi - 8]
    F32((uint32_t)(edx + esi + 0xfffffff8u)) = lf32(ST(0));
    lpop(x);
L_0042ac92:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ac97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ac97:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ac9a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ac9b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ac9c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ac9d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ac9e:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042aca1:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042aca4:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042aca8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042aca9:  // call 0x55e1c4
    t0 = 0x0055e1c4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042acaeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042acae:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042acb4:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0042acb8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042acbb:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0042acbe:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042acc3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042acc4:  // fstp dword ptr [ecx + esi - 0xc]
    F32((uint32_t)(ecx + esi + 0xfffffff4u)) = lf32(ST(0));
    lpop(x);
L_0042acc8:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042accdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042accd:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042acd0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042acd1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042acd2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042acd3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042acd4:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042acd7:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042acda:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0042acde:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042acdf:  // call 0x55e1c4
    t0 = 0x0055e1c4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ace4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ace4:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0042acea:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0042acee:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042acf1:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0042acf4:  // push 0x625220
    t0 = 0x625220u; esp -= 4; M32(esp) = t0;
L_0042acf9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042acfa:  // fstp dword ptr [eax + esi - 0x10]
    F32((uint32_t)(eax + esi + 0xfffffff0u)) = lf32(ST(0));
    lpop(x);
L_0042acfe:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ad03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ad03:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ad06:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ad07:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ad08:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ad09:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ad0a:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042ad0d:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042ad10:  // push 0x62509c
    t0 = 0x62509cu; esp -= 4; M32(esp) = t0;
L_0042ad15:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042ad16:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042ad1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042ad1b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ad1e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ad1f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ad20:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ad21:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ad22:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0042ad25:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0042a7b0, 0042a7b0)
