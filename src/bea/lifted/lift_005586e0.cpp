// lifted from 005586e0 (FUN_005586e0, 398 bytes, 142 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005586e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005586e0;
L_005586e0:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_005586e3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005586e4:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_005586e6:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_005586ea:  // mov dword ptr [esp + 0xc], esi
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(esi);
L_005586ee:  // mov eax, dword ptr [esi + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_005586f4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005586f5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005586f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005586f8:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005586fa:  // call dword ptr [ecx + 0x44]
    t0 = M32((uint32_t)(ecx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005586fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005586fd:  // mov eax, dword ptr [esi + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_00558703:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558705:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00558709:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055870b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0055870d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0055870e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558710:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558711:  // call dword ptr [ecx + 0x4c]
    t0 = M32((uint32_t)(ecx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558714u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558714:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00558716:  // jl 0x558867
    if ((f.sf != f.of)) goto L_00558867;
L_0055871c:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00558720:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00558724:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00558725:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00558726:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00558728:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0055872b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055872c:  // push 0x3a1
    t0 = 0x3a1u; esp -= 4; M32(esp) = t0;
L_00558731:  // push 0x65269c
    t0 = 0x65269cu; esp -= 4; M32(esp) = t0;
L_00558736:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00558738:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0055873b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0055873d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055873e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00558743:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00558747:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055874cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055874c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0055874e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00558750:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00558752:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00558756:  // jle 0x55882b
    if ((f.zf || f.sf != f.of)) goto L_0055882b;
L_0055875c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0055875e:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00558760:  // jle 0x558818
    if ((f.zf || f.sf != f.of)) goto L_00558818;
L_00558766:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0055876a:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_0055876d:  // je 0x5587e5
    if (f.zf) goto L_005587e5;
L_0055876f:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_00558772:  // je 0x5587e5
    if (f.zf) goto L_005587e5;
L_00558774:  // cmp eax, 0x17
    t0 = lsub<32>(eax, 0x17u, f);
L_00558777:  // jne 0x5587a2
    if (!f.zf) goto L_005587a2;
L_00558779:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0055877d:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00558781:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_00558784:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00558786:  // mov edx, dword ptr [ecx + edi*2]
    edx = (uint32_t)(M32((uint32_t)(ecx + edi * 2u)));
L_00558789:  // lea eax, [ecx + edi*2]
    eax = (uint32_t)((uint32_t)(ecx + edi * 2u));
L_0055878c:  // mov cl, byte ptr [ecx + edi*2]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + edi * 2u))) & 0xffu);
L_0055878f:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00558791:  // shr eax, 5
    t0 = lshr<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_00558794:  // shr edx, 0xb
    t0 = lshr<32>(edx, 0xbu, f);
    edx = (uint32_t)(t0);
L_00558797:  // shl cl, 3
    t0 = lshl<8>((ecx & 0xffu), 0x3u, f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0055879a:  // shl al, 2
    t0 = lshl<8>((eax & 0xffu), 0x2u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0055879d:  // shl dl, 3
    t0 = lshl<8>((edx & 0xffu), 0x3u, f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005587a0:  // jmp 0x558802
    goto L_00558802;
L_005587a2:  // cmp eax, 0x19
    t0 = lsub<32>(eax, 0x19u, f);
L_005587a5:  // jne 0x5587d0
    if (!f.zf) goto L_005587d0;
L_005587a7:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005587ab:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005587af:  // imul edx, ebx
    t0 = limul32(edx, ebx, f);
    edx = (uint32_t)(t0);
L_005587b2:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_005587b4:  // mov edx, dword ptr [eax + edi*2]
    edx = (uint32_t)(M32((uint32_t)(eax + edi * 2u)));
L_005587b7:  // mov cl, byte ptr [eax + edi*2]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + edi * 2u))) & 0xffu);
L_005587ba:  // lea eax, [eax + edi*2]
    eax = (uint32_t)((uint32_t)(eax + edi * 2u));
L_005587bd:  // mov eax, edx
    eax = (uint32_t)(edx);
L_005587bf:  // shr eax, 5
    t0 = lshr<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_005587c2:  // shr edx, 0xa
    t0 = lshr<32>(edx, 0xau, f);
    edx = (uint32_t)(t0);
L_005587c5:  // shl cl, 3
    t0 = lshl<8>((ecx & 0xffu), 0x3u, f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005587c8:  // shl al, 3
    t0 = lshl<8>((eax & 0xffu), 0x3u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005587cb:  // shl dl, 3
    t0 = lshl<8>((edx & 0xffu), 0x3u, f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005587ce:  // jmp 0x558802
    goto L_00558802;
L_005587d0:  // push 0x6528ac
    t0 = 0x6528acu; esp -= 4; M32(esp) = t0;
L_005587d5:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005587dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005587da:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_005587dd:  // xor cl, cl
    t0 = llog<8>((ecx & 0xffu) ^ (ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005587df:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005587e1:  // xor dl, dl
    t0 = llog<8>((edx & 0xffu) ^ (edx & 0xffu), f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005587e3:  // jmp 0x558802
    goto L_00558802;
L_005587e5:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005587e9:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005587ed:  // imul ecx, ebx
    t0 = limul32(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_005587f0:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_005587f2:  // mov eax, dword ptr [edx + edi*4]
    eax = (uint32_t)(M32((uint32_t)(edx + edi * 4u)));
L_005587f5:  // lea edx, [edx + edi*4]
    edx = (uint32_t)((uint32_t)(edx + edi * 4u));
L_005587f8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005587fa:  // mov dl, byte ptr [edx]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx))) & 0xffu);
L_005587fc:  // shr ecx, 0x10
    t0 = lshr<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_005587ff:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00558802:  // mov byte ptr [esi], cl
    M8((uint32_t)(esi)) = (uint8_t)((ecx & 0xffu));
L_00558804:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00558805:  // mov byte ptr [esi], al
    M8((uint32_t)(esi)) = (uint8_t)((eax & 0xffu));
L_00558807:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00558808:  // mov byte ptr [esi], dl
    M8((uint32_t)(esi)) = (uint8_t)((edx & 0xffu));
L_0055880a:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0055880b:  // mov byte ptr [esi], 0
    M8((uint32_t)(esi)) = (uint8_t)(0x0u);
L_0055880e:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0055880f:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00558810:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_00558812:  // jl 0x558766
    if ((f.sf != f.of)) goto L_00558766;
L_00558818:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0055881c:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0055881d:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_0055881f:  // jl 0x55875c
    if ((f.sf != f.of)) goto L_0055875c;
L_00558825:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00558829:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0055882b:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0055882f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558831:  // mov eax, dword ptr [eax + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xb8u)));
L_00558837:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558838:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0055883a:  // call dword ptr [ecx + 0x50]
    t0 = M32((uint32_t)(ecx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055883du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055883d:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00558841:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00558845:  // lea eax, [edx*4]
    eax = (uint32_t)((uint32_t)(edx * 4u));
L_0055884c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055884d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055884e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0055884f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00558850:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00558851:  // call 0x4f3110
    t0 = 0x004f3110u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558856u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558856:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00558859:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0055885e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0055885f:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558864u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558864:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00558865:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00558866:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00558867:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00558868:  // add esp, 0x34
    t0 = ladd<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_0055886b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005586e0, 005586e0)
