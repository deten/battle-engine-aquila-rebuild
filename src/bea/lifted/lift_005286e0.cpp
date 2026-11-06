// lifted from 005286e0 (FUN_005286e0, 958 bytes, 300 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005286e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005286e0;
L_005286e0:  // sub esp, 0x1b0
    t0 = lsub<32>(esp, 0x1b0u, f);
    esp = (uint32_t)(t0);
L_005286e6:  // mov ecx, dword ptr [0x8889f0]
    ecx = (uint32_t)(M32((uint32_t)(0x8889f0u)));
L_005286ec:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005286ed:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005286ee:  // push 0x64bdcc
    t0 = 0x64bdccu; esp -= 4; M32(esp) = t0;
L_005286f3:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_005286f6:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_005286f9:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_005286fb:  // mov ecx, dword ptr [esp + 0x1c0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1c0u)));
L_00528702:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00528703:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00528706:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00528709:  // lea esi, [eax*4 + 0x855bb4]
    esi = (uint32_t)((uint32_t)(eax * 4u + 0x855bb4u));
L_00528710:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00528714:  // call 0x55e490
    t0 = 0x0055e490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528719u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528719:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0052871b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052871e:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00528720:  // je 0x528a83
    if (f.zf) goto L_00528a83;
L_00528726:  // mov al, byte ptr [ebp + 0xc]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xcu))) & 0xffu);
L_00528729:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052872a:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_0052872c:  // mov byte ptr [esp + 0xf], 0
    M8((uint32_t)(esp + 0xfu)) = (uint8_t)(0x0u);
L_00528731:  // mov byte ptr [esp + 0xd], 0
    M8((uint32_t)(esp + 0xdu)) = (uint8_t)(0x0u);
L_00528736:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00528738:  // mov byte ptr [esp + 0xe], 0
    M8((uint32_t)(esp + 0xeu)) = (uint8_t)(0x0u);
L_0052873d:  // jne 0x528a70
    if (!f.zf) goto L_00528a70;
L_00528743:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00528744:  // mov dl, byte ptr [0x662b2c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x662b2cu))) & 0xffu);
L_0052874a:  // mov ecx, 0x31
    ecx = (uint32_t)(0x31u);
L_0052874f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00528751:  // lea edi, [esp + 0x31]
    edi = (uint32_t)((uint32_t)(esp + 0x31u));
L_00528755:  // mov byte ptr [esp + 0x30], dl
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)((edx & 0xffu));
L_00528759:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0052875a:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0052875c:  // stosw word ptr es:[edi], ax
    M16(edi) = (uint16_t)eax; edi += 2;
L_0052875e:  // stosb byte ptr es:[edi], al
    M8(edi) = (uint8_t)eax; edi += 1;
L_0052875f:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00528763:  // push 0xc7
    t0 = 0xc7u; esp -= 4; M32(esp) = t0;
L_00528768:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00528769:  // call 0x55fc5d
    t0 = 0x0055fc5du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052876eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052876e:  // mov al, byte ptr [esp + 0x3c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x3cu))) & 0xffu);
L_00528772:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00528775:  // cmp al, 0x2f
    t0 = lsub<8>((eax & 0xffu), 0x2fu, f);
L_00528777:  // jne 0x528786
    if (!f.zf) goto L_00528786;
L_00528779:  // cmp byte ptr [esp + 0x31], 0x2f
    t0 = lsub<8>(M8((uint32_t)(esp + 0x31u)), 0x2fu, f);
L_0052877e:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_00528784:  // jmp 0x52879e
    goto L_0052879e;
L_00528786:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00528788:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_0052878e:  // cmp al, 0xd
    t0 = lsub<8>((eax & 0xffu), 0xdu, f);
L_00528790:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_00528796:  // cmp al, 0xa
    t0 = lsub<8>((eax & 0xffu), 0xau, f);
L_00528798:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_0052879e:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_005287a2:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005287a4:  // je 0x528848
    if (f.zf) goto L_00528848;
L_005287aa:  // mov edi, 0x64bdc4
    edi = (uint32_t)(0x64bdc4u);
L_005287af:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005287b2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005287b4:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005287b6:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005287b8:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005287b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005287ba:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_005287be:  // push 0x64bdc4
    t0 = 0x64bdc4u; esp -= 4; M32(esp) = t0;
L_005287c3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005287c4:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005287c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005287c9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_005287cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005287ce:  // jne 0x528848
    if (!f.zf) goto L_00528848;
L_005287d0:  // mov edi, 0x64bdc4
    edi = (uint32_t)(0x64bdc4u);
L_005287d5:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005287d8:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005287da:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005287dc:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005287dd:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_005287e1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005287e2:  // push 0x64bdc0
    t0 = 0x64bdc0u; esp -= 4; M32(esp) = t0;
L_005287e7:  // lea eax, [esp + ecx + 0x38]
    eax = (uint32_t)((uint32_t)(esp + ecx + 0x38u));
L_005287eb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005287ec:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005287f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005287f1:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_005287f4:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005287f7:  // sete al
    eax = (eax & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_005287fa:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005287fc:  // je 0x528848
    if (f.zf) goto L_00528848;
L_005287fe:  // mov al, byte ptr [esp + 0x12]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x12u))) & 0xffu);
L_00528802:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00528804:  // je 0x52880e
    if (f.zf) goto L_0052880e;
L_00528806:  // mov al, byte ptr [esp + 0x11]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x11u))) & 0xffu);
L_0052880a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052880c:  // jne 0x52883c
    if (!f.zf) goto L_0052883c;
L_0052880e:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00528812:  // mov edx, dword ptr [esi + 0x42c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x42cu)));
L_00528818:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0052881a:  // sete al
    eax = (eax & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_0052881d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052881f:  // mov byte ptr [esp + 0x11], al
    M8((uint32_t)(esp + 0x11u)) = (uint8_t)((eax & 0xffu));
L_00528823:  // je 0x52883c
    if (f.zf) goto L_0052883c;
L_00528825:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00528829:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052882a:  // push 0x64bda8
    t0 = 0x64bda8u; esp -= 4; M32(esp) = t0;
L_0052882f:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00528834:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528839u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528839:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052883c:  // mov byte ptr [esp + 0x12], 1
    M8((uint32_t)(esp + 0x12u)) = (uint8_t)(0x1u);
L_00528841:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00528843:  // jmp 0x528a65
    goto L_00528a65;
L_00528848:  // mov edi, 0x64bd9c
    edi = (uint32_t)(0x64bd9cu);
L_0052884d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00528850:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00528852:  // mov byte ptr [esp + 0x12], 0
    M8((uint32_t)(esp + 0x12u)) = (uint8_t)(0x0u);
L_00528857:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00528859:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0052885b:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0052885c:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00528860:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00528861:  // push 0x64bd9c
    t0 = 0x64bd9cu; esp -= 4; M32(esp) = t0;
L_00528866:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00528867:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052886cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052886c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052886f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00528871:  // jne 0x52889c
    if (!f.zf) goto L_0052889c;
L_00528873:  // mov edi, 0x64bd9c
    edi = (uint32_t)(0x64bd9cu);
L_00528878:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0052887b:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0052887d:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0052887f:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00528880:  // lea ecx, [esp + ecx + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + ecx + 0x30u));
L_00528884:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00528885:  // push 0x64bd88
    t0 = 0x64bd88u; esp -= 4; M32(esp) = t0;
L_0052888a:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052888f:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528894:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00528897:  // jmp 0x528a65
    goto L_00528a65;
L_0052889c:  // mov edi, 0x64bd80
    edi = (uint32_t)(0x64bd80u);
L_005288a1:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005288a4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005288a6:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_005288aa:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005288ac:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005288ae:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005288af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005288b0:  // push 0x64bd80
    t0 = 0x64bd80u; esp -= 4; M32(esp) = t0;
L_005288b5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005288b6:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005288bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005288bb:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_005288be:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005288c0:  // jne 0x52890a
    if (!f.zf) goto L_0052890a;
L_005288c2:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_005288c6:  // mov edi, 0x64bd80
    edi = (uint32_t)(0x64bd80u);
L_005288cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005288cc:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005288cf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005288d1:  // push 0x64bdc0
    t0 = 0x64bdc0u; esp -= 4; M32(esp) = t0;
L_005288d6:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005288d8:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005288da:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005288db:  // lea ecx, [esp + ecx + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + ecx + 0x38u));
L_005288df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005288e0:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005288e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005288e5:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_005288e8:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005288eb:  // sete al
    eax = (eax & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_005288ee:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005288f0:  // je 0x52890a
    if (f.zf) goto L_0052890a;
L_005288f2:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005288f6:  // mov eax, dword ptr [esi + 0x428]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x428u)));
L_005288fc:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_005288fe:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00528900:  // sete byte ptr [esp + 0x13]
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(f.zf);
L_00528905:  // jmp 0x528a65
    goto L_00528a65;
L_0052890a:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0052890e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00528910:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_00528916:  // mov al, byte ptr [esp + 0x11]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x11u))) & 0xffu);
L_0052891a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052891c:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_00528922:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_00528926:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0052892a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052892b:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0052892f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00528930:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00528934:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00528935:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00528936:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0052893a:  // push 0x64bd68
    t0 = 0x64bd68u; esp -= 4; M32(esp) = t0;
L_0052893f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00528940:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528945u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528945:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00528948:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_0052894b:  // jne 0x528992
    if (!f.zf) goto L_00528992;
L_0052894d:  // mov eax, dword ptr [esi + 0x424]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x424u)));
L_00528953:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00528957:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00528959:  // jl 0x52896b
    if ((f.sf != f.of)) goto L_0052896b;
L_0052895b:  // jne 0x52898b
    if (!f.zf) goto L_0052898b;
L_0052895d:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00528961:  // mov ecx, dword ptr [esi + 0x420]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x420u)));
L_00528967:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_00528969:  // ja 0x52898b
    if ((!f.cf && !f.zf)) goto L_0052898b;
L_0052896b:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0052896f:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00528971:  // jg 0x528841
    if ((!f.zf && f.sf == f.of)) goto L_00528841;
L_00528977:  // jne 0x52898b
    if (!f.zf) goto L_0052898b;
L_00528979:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0052897d:  // mov ecx, dword ptr [esi + 0x420]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x420u)));
L_00528983:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00528985:  // jae 0x528841
    if (!f.cf) goto L_00528841;
L_0052898b:  // xor bl, bl
    t0 = llog<8>((ebx & 0xffu) ^ (ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0052898d:  // jmp 0x528a65
    goto L_00528a65;
L_00528992:  // mov al, byte ptr [esp + 0x11]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x11u))) & 0xffu);
L_00528996:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00528998:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_0052899e:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_005289a0:  // je 0x528a65
    if (f.zf) goto L_00528a65;
L_005289a6:  // mov edi, 0x64bd60
    edi = (uint32_t)(0x64bd60u);
L_005289ab:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005289ae:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005289b0:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005289b2:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005289b4:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005289b5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005289b6:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_005289ba:  // push 0x64bd60
    t0 = 0x64bd60u; esp -= 4; M32(esp) = t0;
L_005289bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005289c0:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005289c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005289c5:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_005289c8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005289ca:  // jne 0x528a65
    if (!f.zf) goto L_00528a65;
L_005289d0:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_005289d4:  // lea eax, [esp + 0xf8]
    eax = (uint32_t)((uint32_t)(esp + 0xf8u));
L_005289db:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005289dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005289dd:  // mov edi, 0x64bd60
    edi = (uint32_t)(0x64bd60u);
L_005289e2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005289e5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005289e7:  // push 0x64bd58
    t0 = 0x64bd58u; esp -= 4; M32(esp) = t0;
L_005289ec:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005289ee:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005289f0:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005289f1:  // lea ecx, [esp + ecx + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + ecx + 0x3cu));
L_005289f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005289f6:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005289fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005289fb:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_005289fe:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00528a01:  // jne 0x528a65
    if (!f.zf) goto L_00528a65;
L_00528a03:  // mov esi, dword ptr [0x89c018]
    esi = (uint32_t)(M32((uint32_t)(0x89c018u)));
L_00528a09:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00528a0b:  // je 0x528a61
    if (f.zf) goto L_00528a61;
L_00528a0d:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00528a10:  // lea eax, [esp + 0xf8]
    eax = (uint32_t)((uint32_t)(esp + 0xf8u));
L_00528a17:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00528a18:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00528a19:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528a1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528a1e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00528a21:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00528a23:  // je 0x528a2e
    if (f.zf) goto L_00528a2e;
L_00528a25:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00528a28:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00528a2a:  // jne 0x528a0d
    if (!f.zf) goto L_00528a0d;
L_00528a2c:  // jmp 0x528a61
    goto L_00528a61;
L_00528a2e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00528a30:  // je 0x528a61
    if (f.zf) goto L_00528a61;
L_00528a32:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00528a36:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00528a39:  // lea ecx, [esp + 0x100]
    ecx = (uint32_t)((uint32_t)(esp + 0x100u));
L_00528a40:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00528a43:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00528a44:  // push 0x64bd40
    t0 = 0x64bd40u; esp -= 4; M32(esp) = t0;
L_00528a49:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00528a4e:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528a53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528a53:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00528a57:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00528a59:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00528a5c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00528a5e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00528a5f:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528a61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528a61:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00528a65:  // test byte ptr [ebp + 0xc], 0x10
    t0 = llog<8>(M8((uint32_t)(ebp + 0xcu)) & 0x10u, f);
L_00528a69:  // je 0x528744
    if (f.zf) goto L_00528744;
L_00528a6f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00528a70:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00528a71:  // call 0x55e4a3
    t0 = 0x0055e4a3u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528a76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528a76:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00528a79:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00528a7a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00528a7b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00528a7c:  // add esp, 0x1b0
    t0 = ladd<32>(esp, 0x1b0u, f);
    esp = (uint32_t)(t0);
L_00528a82:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00528a83:  // push 0x64bd24
    t0 = 0x64bd24u; esp -= 4; M32(esp) = t0;
L_00528a88:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00528a8d:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00528a92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00528a92:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00528a95:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00528a96:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00528a97:  // add esp, 0x1b0
    t0 = ladd<32>(esp, 0x1b0u, f);
    esp = (uint32_t)(t0);
L_00528a9d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005286e0, 005286e0)
