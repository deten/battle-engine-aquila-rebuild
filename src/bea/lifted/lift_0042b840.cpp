// lifted from 0042b840 (FUN_0042b840, 381 bytes, 123 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042b840(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042b840;
L_0042b840:  // mov eax, 0x210c
    eax = (uint32_t)(0x210cu);
L_0042b845:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b84au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b84a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042b84b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b84c:  // mov ebp, dword ptr [esp + 0x2118]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2118u)));
L_0042b853:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042b854:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042b855:  // mov al, byte ptr [ebp + 0xb3c5]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xb3c5u))) & 0xffu);
L_0042b85b:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0042b85d:  // je 0x42b9b2
    if (f.zf) goto L_0042b9b2;
L_0042b863:  // mov ecx, dword ptr [esp + 0x2124]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2124u)));
L_0042b86a:  // lea eax, [esp + 0x2128]
    eax = (uint32_t)((uint32_t)(esp + 0x2128u));
L_0042b871:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042b872:  // lea edx, [esp + 0x120]
    edx = (uint32_t)((uint32_t)(esp + 0x120u));
L_0042b879:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042b87a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042b87b:  // call 0x55e38c
    t0 = 0x0055e38cu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b880u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b880:  // mov eax, dword ptr [ebp + 0xb3d0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb3d0u)));
L_0042b886:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042b889:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042b88b:  // je 0x42b8aa
    if (f.zf) goto L_0042b8aa;
L_0042b88d:  // push 0x6252cc
    t0 = 0x6252ccu; esp -= 4; M32(esp) = t0;
L_0042b892:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b897u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b897:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042b89a:  // lea eax, [esp + 0x11c]
    eax = (uint32_t)((uint32_t)(esp + 0x11cu));
L_0042b8a1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042b8a2:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b8a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b8a7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042b8aa:  // lea edi, [esp + 0x11c]
    edi = (uint32_t)((uint32_t)(esp + 0x11cu));
L_0042b8b1:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b8b4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b8b6:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0042b8b8:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0042b8ba:  // lea ebx, [ebp + 4]
    ebx = (uint32_t)((uint32_t)(ebp + 0x4u));
L_0042b8bd:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b8bf:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b8c1:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b8c2:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0042b8c6:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0042b8c8:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0042b8cc:  // jle 0x42b976
    if ((f.zf || f.sf != f.of)) goto L_0042b976;
L_0042b8d2:  // mov al, byte ptr [esp + esi + 0x11c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + esi + 0x11cu))) & 0xffu);
L_0042b8d9:  // cmp al, 0xa
    t0 = lsub<8>((eax & 0xffu), 0xau, f);
L_0042b8db:  // je 0x42b8e3
    if (f.zf) goto L_0042b8e3;
L_0042b8dd:  // mov byte ptr [edx + ebx], al
    M8((uint32_t)(edx + ebx)) = (uint8_t)((eax & 0xffu));
L_0042b8e0:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0042b8e1:  // jmp 0x42b958
    goto L_0042b958;
L_0042b8e3:  // mov byte ptr [edx + ebx], 0
    M8((uint32_t)(edx + ebx)) = (uint8_t)(0x0u);
L_0042b8e7:  // lea edx, [ebp + 0x1d84]
    edx = (uint32_t)((uint32_t)(ebp + 0x1d84u));
L_0042b8ed:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0042b8f5:  // mov ebp, 0x3b
    ebp = (uint32_t)(0x3bu);
L_0042b8fa:  // lea ebx, [edx - 0x80]
    ebx = (uint32_t)((uint32_t)(edx + 0xffffff80u));
L_0042b8fd:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b900:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0042b902:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b904:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b906:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b908:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b90a:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042b90c:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b90e:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042b910:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_0042b912:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b915:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b917:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042b919:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b91c:  // dec ebp
    t0 = ldec<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0042b91d:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b91f:  // jne 0x42b8fa
    if (!f.zf) goto L_0042b8fa;
L_0042b921:  // mov edi, 0x662b2c
    edi = (uint32_t)(0x662b2cu);
L_0042b926:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b929:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b92b:  // mov ebp, dword ptr [esp + 0x2120]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2120u)));
L_0042b932:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b934:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b936:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b938:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042b93c:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0042b93e:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b940:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042b944:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b947:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b949:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0042b94b:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0042b94f:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b952:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b954:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0042b958:  // lea edi, [esp + 0x11c]
    edi = (uint32_t)((uint32_t)(esp + 0x11cu));
L_0042b95f:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b962:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b964:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0042b965:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b967:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b969:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b96a:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0042b96e:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0042b970:  // jl 0x42b8d2
    if ((f.sf != f.of)) goto L_0042b8d2;
L_0042b976:  // mov eax, dword ptr [0x662f30]
    eax = (uint32_t)(M32((uint32_t)(0x662f30u)));
L_0042b97b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042b97d:  // je 0x42b9b2
    if (f.zf) goto L_0042b9b2;
L_0042b97f:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0042b981:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0042b983:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042b984:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0042b988:  // push 0x624d2c
    t0 = 0x624d2cu; esp -= 4; M32(esp) = t0;
L_0042b98d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042b98e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b993u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b993:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042b996:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0042b99a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042b99b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042b99c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0042b9a1:  // call 0x515db0
    t0 = 0x00515db0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b9a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b9a6:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0042b9a7:  // add edi, 0x80
    t0 = ladd<32>(edi, 0x80u, f);
    edi = (uint32_t)(t0);
L_0042b9ad:  // cmp esi, 0x14
    t0 = lsub<32>(esi, 0x14u, f);
L_0042b9b0:  // jl 0x42b983
    if ((f.sf != f.of)) goto L_0042b983;
L_0042b9b2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b9b3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b9b4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b9b5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b9b6:  // add esp, 0x210c
    t0 = ladd<32>(esp, 0x210cu, f);
    esp = (uint32_t)(t0);
L_0042b9bc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0042b840, 0042b840)
