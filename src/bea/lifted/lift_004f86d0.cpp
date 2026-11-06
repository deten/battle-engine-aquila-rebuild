// lifted from 004f86d0 (vslot9, 2850 bytes, 825 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f86d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f86d0;
L_004f86d0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004f86d6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004f86d8:  // push 0x5d557d
    t0 = 0x5d557du; esp -= 4; M32(esp) = t0;
L_004f86dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f86de:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004f86e5:  // sub esp, 0x6c
    t0 = lsub<32>(esp, 0x6cu, f);
    esp = (uint32_t)(t0);
L_004f86e8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f86e9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f86ea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f86eb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f86ec:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004f86f3:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004f86f5:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004f86fa:  // mov eax, dword ptr [edi + 0x3b4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3b4u)));
L_004f8700:  // mov ecx, dword ptr [edi + 0x3bc]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3bcu)));
L_004f8706:  // mov dword ptr [edi + 0x6c], eax
    M32((uint32_t)(edi + 0x6cu)) = (uint32_t)(eax);
L_004f8709:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004f870b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f870d:  // mov dword ptr [ebx + 0x164], ecx
    M32((uint32_t)(ebx + 0x164u)) = (uint32_t)(ecx);
L_004f8713:  // mov dword ptr [ebx + 0x224], 0
    M32((uint32_t)(ebx + 0x224u)) = (uint32_t)(0x0u);
L_004f871d:  // je 0x4f8b35
    if (f.zf) goto L_004f8b35;
L_004f8723:  // cmp dword ptr [eax + 0xe0], 7
    t0 = lsub<32>(M32((uint32_t)(eax + 0xe0u)), 0x7u, f);
L_004f872a:  // je 0x4f8811
    if (f.zf) goto L_004f8811;
L_004f8730:  // push 0xc0
    t0 = 0xc0u; esp -= 4; M32(esp) = t0;
L_004f8735:  // push 0x633b6c
    t0 = 0x633b6cu; esp -= 4; M32(esp) = t0;
L_004f873a:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_004f873c:  // push 0x428
    t0 = 0x428u; esp -= 4; M32(esp) = t0;
L_004f8741:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f8746:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f874bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f874b:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004f874d:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_004f8751:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f8753:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_004f875e:  // je 0x4f8781
    if (f.zf) goto L_004f8781;
L_004f8760:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004f8765:  // push 0x403f40
    t0 = 0x403f40u; esp -= 4; M32(esp) = t0;
L_004f876a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f876b:  // lea edx, [ebp + 8]
    edx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004f876e:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004f8773:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f8774:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8779u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8779:  // mov dword ptr [ebp + 0x424], esi
    M32((uint32_t)(ebp + 0x424u)) = (uint32_t)(esi);
L_004f877f:  // jmp 0x4f8783
    goto L_004f8783;
L_004f8781:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004f8783:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004f8785:  // mov dword ptr [esp + 0x84], 0xffffffff
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0xffffffffu);
L_004f8790:  // je 0x4f8797
    if (f.zf) goto L_004f8797;
L_004f8792:  // lea eax, [ebx + 8]
    eax = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004f8795:  // jmp 0x4f8799
    goto L_004f8799;
L_004f8797:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8799:  // mov dword ptr [ebp + 0x408], eax
    M32((uint32_t)(ebp + 0x408u)) = (uint32_t)(eax);
L_004f879f:  // mov dword ptr [ebp + 4], esi
    M32((uint32_t)(ebp + 0x4u)) = (uint32_t)(esi);
L_004f87a2:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f87a8:  // mov eax, dword ptr [eax + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_004f87ab:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f87ad:  // je 0x4f87cf
    if (f.zf) goto L_004f87cf;
L_004f87af:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004f87b1:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004f87b4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f87b6:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004f87b8:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004f87ba:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004f87bc:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004f87be:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004f87c0:  // lea edi, [ebp + 8]
    edi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004f87c3:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004f87c6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f87c8:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004f87ca:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004f87cd:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004f87cf:  // mov eax, dword ptr [ebp + 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004f87d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f87d3:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f87d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f87d8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f87db:  // mov dword ptr [ebx + 0x30], eax
    M32((uint32_t)(ebx + 0x30u)) = (uint32_t)(eax);
L_004f87de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f87e0:  // je 0x4f87ed
    if (f.zf) goto L_004f87ed;
L_004f87e2:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004f87e4:  // lea ecx, [ebp + 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004f87e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f87e8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f87ea:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f87edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f87ed:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f87ef:  // je 0x4f8811
    if (f.zf) goto L_004f8811;
L_004f87f1:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004f87f6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f87f8:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004f87fb:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004f8800:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8801:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8806u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8806:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f8807:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f880c:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8811u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8811:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f8817:  // add eax, 0x3c
    t0 = ladd<32>(eax, 0x3cu, f);
    eax = (uint32_t)(t0);
L_004f881a:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f881c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f881e:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004f8822:  // je 0x4f8828
    if (f.zf) goto L_004f8828;
L_004f8824:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8826:  // jmp 0x4f882a
    goto L_004f882a;
L_004f8828:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f882a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f882c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004f882e:  // je 0x4f8a24
    if (f.zf) goto L_004f8a24;
L_004f8834:  // mov ebp, dword ptr [esp + 0x8c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004f883b:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004f883e:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004f8840:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8841:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f8842:  // call 0x50f6d0
    t0 = 0x0050f6d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8847u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8847:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004f8849:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f884c:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004f884e:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_004f8852:  // je 0x4f8a07
    if (f.zf) goto L_004f8a07;
L_004f8858:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f885b:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004f885d:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004f8861:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_004f8865:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f8866:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f8868:  // mov dword ptr [esp + 0x2c], 1
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x1u);
L_004f8870:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004f8874:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8877u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8877:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f887a:  // mov dword ptr [edi + 0xac], eax
    M32((uint32_t)(edi + 0xacu)) = (uint32_t)(eax);
L_004f8880:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f8883:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f8885:  // je 0x4f89fb
    if (f.zf) goto L_004f89fb;
L_004f888b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f888d:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8890u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8890:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f8892:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f8894:  // je 0x4f89fb
    if (f.zf) goto L_004f89fb;
L_004f889a:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f88a0:  // fld dword ptr [eax + 0xbc]
    lpush(x, (long double)F32((uint32_t)(eax + 0xbcu)));
L_004f88a6:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f88ac:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f88ae:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f88b1:  // jne 0x4f89fb
    if (!f.zf) goto L_004f89fb;
L_004f88b7:  // mov esi, dword ptr [esi + 8]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f88ba:  // lea eax, [esi - 1]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_004f88bd:  // cmp eax, 8
    t0 = lsub<32>(eax, 0x8u, f);
L_004f88c0:  // ja 0x4f891f
    if ((!f.cf && !f.zf)) goto L_004f891f;
L_004f88c2:  // jmp dword ptr [eax*4 + 0x4f91f4]
    t0 = M32((uint32_t)(eax * 4u + 0x4f91f4u));
    switch (t0) {
    case 0x004f88c9u: goto L_004f88c9;
    case 0x004f88d2u: goto L_004f88d2;
    case 0x004f88dbu: goto L_004f88db;
    case 0x004f88e4u: goto L_004f88e4;
    case 0x004f88edu: goto L_004f88ed;
    case 0x004f88f6u: goto L_004f88f6;
    case 0x004f88ffu: goto L_004f88ff;
    case 0x004f8908u: goto L_004f8908;
    case 0x004f8911u: goto L_004f8911;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004f88c9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f88cb:  // push 0x633b64
    t0 = 0x633b64u; esp -= 4; M32(esp) = t0;
L_004f88d0:  // jmp 0x4f8918
    goto L_004f8918;
L_004f88d2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f88d4:  // push 0x633b5c
    t0 = 0x633b5cu; esp -= 4; M32(esp) = t0;
L_004f88d9:  // jmp 0x4f8918
    goto L_004f8918;
L_004f88db:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f88dd:  // push 0x633b54
    t0 = 0x633b54u; esp -= 4; M32(esp) = t0;
L_004f88e2:  // jmp 0x4f8918
    goto L_004f8918;
L_004f88e4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f88e6:  // push 0x633b4c
    t0 = 0x633b4cu; esp -= 4; M32(esp) = t0;
L_004f88eb:  // jmp 0x4f8918
    goto L_004f8918;
L_004f88ed:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f88ef:  // push 0x633b44
    t0 = 0x633b44u; esp -= 4; M32(esp) = t0;
L_004f88f4:  // jmp 0x4f8918
    goto L_004f8918;
L_004f88f6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f88f8:  // push 0x633b3c
    t0 = 0x633b3cu; esp -= 4; M32(esp) = t0;
L_004f88fd:  // jmp 0x4f8918
    goto L_004f8918;
L_004f88ff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f8901:  // push 0x633b34
    t0 = 0x633b34u; esp -= 4; M32(esp) = t0;
L_004f8906:  // jmp 0x4f8918
    goto L_004f8918;
L_004f8908:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f890a:  // push 0x633b2c
    t0 = 0x633b2cu; esp -= 4; M32(esp) = t0;
L_004f890f:  // jmp 0x4f8918
    goto L_004f8918;
L_004f8911:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f8913:  // push 0x633b24
    t0 = 0x633b24u; esp -= 4; M32(esp) = t0;
L_004f8918:  // call 0x4aa820
    t0 = 0x004aa820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f891du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f891d:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004f891f:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f8921:  // je 0x4f89fb
    if (f.zf) goto L_004f89fb;
L_004f8927:  // lea esi, [ebp + 0xdc]
    esi = (uint32_t)((uint32_t)(ebp + 0xdcu));
L_004f892d:  // mov edi, 0x62dd20
    edi = (uint32_t)(0x62dd20u);
L_004f8932:  // mov cl, byte ptr [esi]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_004f8934:  // mov dl, byte ptr [edi]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi))) & 0xffu);
L_004f8936:  // mov al, cl
    eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_004f8938:  // cmp cl, dl
    t0 = lsub<8>((ecx & 0xffu), (edx & 0xffu), f);
L_004f893a:  // jne 0x4f895a
    if (!f.zf) goto L_004f895a;
L_004f893c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004f893e:  // je 0x4f8956
    if (f.zf) goto L_004f8956;
L_004f8940:  // mov dl, byte ptr [esi + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_004f8943:  // mov cl, byte ptr [edi + 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x1u))) & 0xffu);
L_004f8946:  // mov al, dl
    eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004f8948:  // cmp dl, cl
    t0 = lsub<8>((edx & 0xffu), (ecx & 0xffu), f);
L_004f894a:  // jne 0x4f895a
    if (!f.zf) goto L_004f895a;
L_004f894c:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004f894f:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_004f8952:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004f8954:  // jne 0x4f8932
    if (!f.zf) goto L_004f8932;
L_004f8956:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8958:  // jmp 0x4f895f
    goto L_004f895f;
L_004f895a:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004f895c:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004f895f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8961:  // je 0x4f89db
    if (f.zf) goto L_004f89db;
L_004f8963:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_004f8965:  // lea eax, [ebp + 0xdc]
    eax = (uint32_t)((uint32_t)(ebp + 0xdcu));
L_004f896b:  // push 0x633b18
    t0 = 0x633b18u; esp -= 4; M32(esp) = t0;
L_004f8970:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8971:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8976u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8976:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f8979:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f897b:  // je 0x4f89db
    if (f.zf) goto L_004f89db;
L_004f897d:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004f897f:  // lea esi, [ebp + 0xdc]
    esi = (uint32_t)((uint32_t)(ebp + 0xdcu));
L_004f8985:  // push 0x62dd18
    t0 = 0x62dd18u; esp -= 4; M32(esp) = t0;
L_004f898a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f898b:  // call 0x55e560
    t0 = 0x0055e560u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8990u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8990:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f8993:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8995:  // je 0x4f89ab
    if (f.zf) goto L_004f89ab;
L_004f8997:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_004f8999:  // push 0x633b0c
    t0 = 0x633b0cu; esp -= 4; M32(esp) = t0;
L_004f899e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f899f:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f89a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f89a4:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f89a7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f89a9:  // jne 0x4f89e9
    if (!f.zf) goto L_004f89e9;
L_004f89ab:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f89af:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004f89b4:  // mov dword ptr [ebx + 0x224], eax
    M32((uint32_t)(ebx + 0x224u)) = (uint32_t)(eax);
L_004f89ba:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f89bb:  // mov dword ptr [ecx + 0x98], eax
    M32((uint32_t)(ecx + 0x98u)) = (uint32_t)(eax);
L_004f89c1:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004f89c5:  // call 0x44adb0
    t0 = 0x0044adb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f89cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f89ca:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f89cd:  // mov dword ptr [ebx + 0x220], ebp
    M32((uint32_t)(ebx + 0x220u)) = (uint32_t)(ebp);
L_004f89d3:  // mov dword ptr [ebx + 0xf4], edx
    M32((uint32_t)(ebx + 0xf4u)) = (uint32_t)(edx);
L_004f89d9:  // jmp 0x4f89e9
    goto L_004f89e9;
L_004f89db:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f89df:  // mov dword ptr [eax + 0x94], 1
    M32((uint32_t)(eax + 0x94u)) = (uint32_t)(0x1u);
L_004f89e9:  // mov ebp, dword ptr [ebp + 0x98]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004f89ef:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f89f1:  // jne 0x4f8927
    if (!f.zf) goto L_004f8927;
L_004f89f7:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f89fb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f89fc:  // lea ecx, [ebx + 0x17c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x17cu));
L_004f8a02:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8a07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8a07:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f8a0b:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004f8a0e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8a10:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004f8a14:  // je 0x4f8a1a
    if (f.zf) goto L_004f8a1a;
L_004f8a16:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004f8a18:  // jmp 0x4f8a1c
    goto L_004f8a1c;
L_004f8a1a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f8a1c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f8a1e:  // jne 0x4f883b
    if (!f.zf) goto L_004f883b;
L_004f8a24:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f8a2a:  // add eax, 0x4c
    t0 = ladd<32>(eax, 0x4cu, f);
    eax = (uint32_t)(t0);
L_004f8a2d:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8a2f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8a31:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004f8a35:  // je 0x4f8a3b
    if (f.zf) goto L_004f8a3b;
L_004f8a37:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8a39:  // jmp 0x4f8a3d
    goto L_004f8a3d;
L_004f8a3b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8a3d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8a3f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004f8a43:  // je 0x4f8b1c
    if (f.zf) goto L_004f8b1c;
L_004f8a49:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f8a4d:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f8a50:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8a52:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f8a53:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8a54:  // call 0x50f970
    t0 = 0x0050f970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8a59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8a59:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004f8a5b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f8a5e:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f8a60:  // je 0x4f8afb
    if (f.zf) goto L_004f8afb;
L_004f8a66:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004f8a6d:  // mov edx, dword ptr [ebp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_004f8a70:  // lea ecx, [ebp + 0x10]
    ecx = (uint32_t)((uint32_t)(ebp + 0x10u));
L_004f8a73:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8a74:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8a76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8a76:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8a78:  // mov edi, 0x662b2c
    edi = (uint32_t)(0x662b2cu);
L_004f8a7d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004f8a80:  // mov dword ptr [ebp + 0xb4], eax
    M32((uint32_t)(ebp + 0xb4u)) = (uint32_t)(eax);
L_004f8a86:  // mov dword ptr [ebp + 0x70], eax
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(eax);
L_004f8a89:  // mov dword ptr [ebp + 0x5c], eax
    M32((uint32_t)(ebp + 0x5cu)) = (uint32_t)(eax);
L_004f8a8c:  // mov dword ptr [ebp + 0x3bc], 1
    M32((uint32_t)(ebp + 0x3bcu)) = (uint32_t)(0x1u);
L_004f8a96:  // lea edx, [ebp + 0xbc]
    edx = (uint32_t)((uint32_t)(ebp + 0xbcu));
L_004f8a9c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004f8a9e:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004f8aa0:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004f8aa2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f8aa3:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004f8aa5:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004f8aa7:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004f8aa9:  // lea edx, [ebp + 0x1bc]
    edx = (uint32_t)((uint32_t)(ebp + 0x1bcu));
L_004f8aaf:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004f8ab2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f8ab4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f8ab6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8ab8:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004f8abb:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004f8abd:  // mov edi, 0x662b2c
    edi = (uint32_t)(0x662b2cu);
L_004f8ac2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004f8ac5:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004f8ac7:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004f8ac9:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004f8acb:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004f8acd:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004f8acf:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004f8ad1:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004f8ad4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f8ad6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f8ad8:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004f8adb:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004f8add:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004f8ae1:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004f8ae4:  // lea ecx, [ebx + 0x18c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x18cu));
L_004f8aea:  // mov dword ptr [ebp + 0x3d4], ebx
    M32((uint32_t)(ebp + 0x3d4u)) = (uint32_t)(ebx);
L_004f8af0:  // mov dword ptr [ebp + 0x3e8], eax
    M32((uint32_t)(ebp + 0x3e8u)) = (uint32_t)(eax);
L_004f8af6:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8afbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8afb:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f8aff:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004f8b02:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8b04:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004f8b08:  // je 0x4f8b0e
    if (f.zf) goto L_004f8b0e;
L_004f8b0a:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8b0c:  // jmp 0x4f8b10
    goto L_004f8b10;
L_004f8b0e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8b10:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8b12:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004f8b16:  // jne 0x4f8a49
    if (!f.zf) goto L_004f8a49;
L_004f8b1c:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f8b22:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004f8b29:  // mov ecx, dword ptr [eax + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xc0u)));
L_004f8b2f:  // mov dword ptr [ebx + 0xf8], ecx
    M32((uint32_t)(ebx + 0xf8u)) = (uint32_t)(ecx);
L_004f8b35:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f8b36:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004f8b38:  // call 0x4011e0
    t0 = 0x004011e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8b3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8b3d:  // mov eax, dword ptr [edi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x60u)));
L_004f8b40:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8b42:  // jne 0x4f8b87
    if (!f.zf) goto L_004f8b87;
L_004f8b44:  // mov edx, dword ptr [edi + 0x44]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x44u)));
L_004f8b47:  // mov eax, dword ptr [edi + 0x48]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x48u)));
L_004f8b4a:  // mov ecx, dword ptr [edi + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x4cu)));
L_004f8b4d:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004f8b51:  // lea edx, [ebx + 0x114]
    edx = (uint32_t)((uint32_t)(ebx + 0x114u));
L_004f8b57:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004f8b5b:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004f8b5f:  // mov esi, edx
    esi = (uint32_t)(edx);
L_004f8b61:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004f8b65:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004f8b69:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004f8b6d:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_004f8b6f:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_004f8b72:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_004f8b75:  // lea esi, [ebx + 0x120]
    esi = (uint32_t)((uint32_t)(ebx + 0x120u));
L_004f8b7b:  // mov dword ptr [ebx + 0x120], eax
    M32((uint32_t)(ebx + 0x120u)) = (uint32_t)(eax);
L_004f8b81:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_004f8b84:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_004f8b87:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f8b8d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8b8f:  // je 0x4f8fa7
    if (f.zf) goto L_004f8fa7;
L_004f8b95:  // mov ebp, dword ptr [eax + 0x5c]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x5cu)));
L_004f8b98:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f8b9a:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_004f8b9e:  // je 0x4f8ba5
    if (f.zf) goto L_004f8ba5;
L_004f8ba0:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004f8ba3:  // jmp 0x4f8ba7
    goto L_004f8ba7;
L_004f8ba5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8ba7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8ba9:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004f8bad:  // je 0x4f8dc5
    if (f.zf) goto L_004f8dc5;
L_004f8bb3:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8bb5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8bb6:  // call 0x50fa40
    t0 = 0x0050fa40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8bbbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8bbb:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004f8bbd:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f8bc0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f8bc2:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004f8bc6:  // je 0x4f8da7
    if (f.zf) goto L_004f8da7;
L_004f8bcc:  // push 0x135
    t0 = 0x135u; esp -= 4; M32(esp) = t0;
L_004f8bd1:  // push 0x633b6c
    t0 = 0x633b6cu; esp -= 4; M32(esp) = t0;
L_004f8bd6:  // push 0x59
    t0 = 0x59u; esp -= 4; M32(esp) = t0;
L_004f8bd8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004f8bda:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f8bdf:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8be4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8be4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8be6:  // je 0x4f8bf0
    if (f.zf) goto L_004f8bf0;
L_004f8be8:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_004f8bee:  // jmp 0x4f8bf2
    goto L_004f8bf2;
L_004f8bf0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8bf2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f8bf3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f8bf5:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004f8bf9:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8bfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8bfe:  // push 0x139
    t0 = 0x139u; esp -= 4; M32(esp) = t0;
L_004f8c03:  // push 0x633b6c
    t0 = 0x633b6cu; esp -= 4; M32(esp) = t0;
L_004f8c08:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_004f8c0a:  // push 0x3c0
    t0 = 0x3c0u; esp -= 4; M32(esp) = t0;
L_004f8c0f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f8c14:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8c19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8c19:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004f8c1b:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_004f8c1f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f8c21:  // mov dword ptr [esp + 0x84], 1
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x1u);
L_004f8c2c:  // je 0x4f8c49
    if (f.zf) goto L_004f8c49;
L_004f8c2e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f8c30:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8c35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8c35:  // mov dword ptr [esi], 0x5dc1c0
    M32((uint32_t)(esi)) = (uint32_t)(0x5dc1c0u);
L_004f8c3b:  // mov dword ptr [esi + 0x3bc], 0
    M32((uint32_t)(esi + 0x3bcu)) = (uint32_t)(0x0u);
L_004f8c45:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_004f8c47:  // jmp 0x4f8c4b
    goto L_004f8c4b;
L_004f8c49:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004f8c4b:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f8c4f:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004f8c51:  // lea eax, [esp + 0x4c]
    eax = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004f8c55:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004f8c59:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8c5a:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004f8c5d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f8c5e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8c5f:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004f8c61:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004f8c63:  // mov dword ptr [esp + 0x94], 0xffffffff
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0xffffffffu);
L_004f8c6e:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8c74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8c74:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004f8c78:  // lea ecx, [ebp + 4]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4u));
L_004f8c7b:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004f8c82:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f8c84:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004f8c88:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004f8c8b:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004f8c8f:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f8c92:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004f8c96:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f8c99:  // mov eax, dword ptr [edi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x60u)));
L_004f8c9c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8c9e:  // jne 0x4f8cca
    if (!f.zf) goto L_004f8cca;
L_004f8ca0:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004f8ca4:  // mov dword ptr [ebp + 0x60], 0
    M32((uint32_t)(ebp + 0x60u)) = (uint32_t)(0x0u);
L_004f8cab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f8cac:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004f8cb0:  // call 0x44adb0
    t0 = 0x0044adb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8cb5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8cb5:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004f8cb9:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004f8cbd:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004f8cc1:  // mov dword ptr [ebp + 0x44], edx
    M32((uint32_t)(ebp + 0x44u)) = (uint32_t)(edx);
L_004f8cc4:  // mov dword ptr [ebp + 0x48], eax
    M32((uint32_t)(ebp + 0x48u)) = (uint32_t)(eax);
L_004f8cc7:  // mov dword ptr [ebp + 0x4c], ecx
    M32((uint32_t)(ebp + 0x4cu)) = (uint32_t)(ecx);
L_004f8cca:  // mov edx, dword ptr [edi + 0xa0]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xa0u)));
L_004f8cd0:  // mov dword ptr [ebp + 0xa0], edx
    M32((uint32_t)(ebp + 0xa0u)) = (uint32_t)(edx);
L_004f8cd6:  // mov ecx, dword ptr [0x855400]
    ecx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_004f8cdc:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_004f8cde:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004f8ce0:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f8ce2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8ce4:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004f8ce7:  // je 0x4f8ced
    if (f.zf) goto L_004f8ced;
L_004f8ce9:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8ceb:  // jmp 0x4f8cef
    goto L_004f8cef;
L_004f8ced:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8cef:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8cf1:  // je 0x4f8d15
    if (f.zf) goto L_004f8d15;
L_004f8cf3:  // cmp edx, esi
    t0 = lsub<32>(edx, esi, f);
L_004f8cf5:  // je 0x4f8d17
    if (f.zf) goto L_004f8d17;
L_004f8cf7:  // mov ecx, dword ptr [0x855400]
    ecx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_004f8cfd:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004f8cfe:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004f8d01:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f8d04:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8d06:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004f8d09:  // je 0x4f8d0f
    if (f.zf) goto L_004f8d0f;
L_004f8d0b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f8d0d:  // jmp 0x4f8d11
    goto L_004f8d11;
L_004f8d0f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8d11:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8d13:  // jne 0x4f8cf3
    if (!f.zf) goto L_004f8cf3;
L_004f8d15:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8d17:  // mov dword ptr [ebp + 0x3bc], eax
    M32((uint32_t)(ebp + 0x3bcu)) = (uint32_t)(eax);
L_004f8d1d:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004f8d24:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f8d25:  // mov ecx, dword ptr [eax + 0x3ac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x3acu)));
L_004f8d2b:  // lea edi, [eax + 0x2ac]
    edi = (uint32_t)((uint32_t)(eax + 0x2acu));
L_004f8d31:  // mov dword ptr [ebp + 0x3ac], ecx
    M32((uint32_t)(ebp + 0x3acu)) = (uint32_t)(ecx);
L_004f8d37:  // mov edx, dword ptr [eax + 0x3b0]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x3b0u)));
L_004f8d3d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004f8d40:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8d42:  // mov dword ptr [ebp + 0x3b0], edx
    M32((uint32_t)(ebp + 0x3b0u)) = (uint32_t)(edx);
L_004f8d48:  // lea edx, [ebp + 0x2ac]
    edx = (uint32_t)((uint32_t)(ebp + 0x2acu));
L_004f8d4e:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004f8d50:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004f8d52:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004f8d54:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004f8d56:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004f8d58:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004f8d5a:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004f8d5d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f8d5f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f8d61:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004f8d64:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004f8d66:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f8d6a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f8d6c:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8d6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8d6f:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f8d73:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f8d76:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f8d77:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f8d7b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f8d7c:  // call 0x428b50
    t0 = 0x00428b50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8d81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8d81:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f8d85:  // lea ecx, [ebx + 0x19c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x19cu));
L_004f8d8b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f8d8c:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8d91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8d91:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f8d92:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f8d97:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8d9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8d9c:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004f8da0:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004f8da7:  // mov ebp, dword ptr [ebp + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004f8daa:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f8dac:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_004f8db0:  // je 0x4f8db7
    if (f.zf) goto L_004f8db7;
L_004f8db2:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004f8db5:  // jmp 0x4f8db9
    goto L_004f8db9;
L_004f8db7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f8db9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8dbb:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004f8dbf:  // jne 0x4f8bb3
    if (!f.zf) goto L_004f8bb3;
L_004f8dc5:  // push 0x15b
    t0 = 0x15bu; esp -= 4; M32(esp) = t0;
L_004f8dca:  // push 0x633b6c
    t0 = 0x633b6cu; esp -= 4; M32(esp) = t0;
L_004f8dcf:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004f8dd1:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004f8dd3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f8dd8:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8dddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8ddd:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004f8ddf:  // mov dword ptr [esp + 0x8c], esi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(esi);
L_004f8de6:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f8de8:  // mov dword ptr [esp + 0x84], 2
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x2u);
L_004f8df3:  // je 0x4f8e05
    if (f.zf) goto L_004f8e05;
L_004f8df5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f8df7:  // mov dword ptr [esi + 4], 0
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x0u);
L_004f8dfe:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8e03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8e03:  // jmp 0x4f8e07
    goto L_004f8e07;
L_004f8e05:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f8e07:  // mov dword ptr [ebx + 0x1ac], esi
    M32((uint32_t)(ebx + 0x1acu)) = (uint32_t)(esi);
L_004f8e0d:  // mov dword ptr [esi + 4], 0
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x0u);
L_004f8e14:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f8e1a:  // mov dword ptr [esp + 0x84], 0xffffffff
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0xffffffffu);
L_004f8e25:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004f8e2a:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_004f8e2d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f8e2f:  // je 0x4f8ee3
    if (f.zf) goto L_004f8ee3;
L_004f8e35:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f8e38:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f8e3a:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_004f8e3e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f8e40:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f8e42:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8e43:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004f8e47:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8e48:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f8e49:  // push 0x633b04
    t0 = 0x633b04u; esp -= 4; M32(esp) = t0;
L_004f8e4e:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8e51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8e51:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004f8e55:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f8e5b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f8e5d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f8e60:  // je 0x4f8e84
    if (f.zf) goto L_004f8e84;
L_004f8e62:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004f8e66:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f8e6c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f8e6e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f8e71:  // je 0x4f8e84
    if (f.zf) goto L_004f8e84;
L_004f8e73:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004f8e77:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f8e7d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f8e7f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f8e82:  // jne 0x4f8ee3
    if (!f.zf) goto L_004f8ee3;
L_004f8e84:  // push 0x164
    t0 = 0x164u; esp -= 4; M32(esp) = t0;
L_004f8e89:  // push 0x633b6c
    t0 = 0x633b6cu; esp -= 4; M32(esp) = t0;
L_004f8e8e:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004f8e90:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004f8e92:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f8e97:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8e9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8e9c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004f8e9e:  // mov dword ptr [esp + 0x8c], esi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(esi);
L_004f8ea5:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f8ea7:  // mov dword ptr [esp + 0x84], 3
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x3u);
L_004f8eb2:  // je 0x4f8ec4
    if (f.zf) goto L_004f8ec4;
L_004f8eb4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f8eb6:  // mov dword ptr [esi + 4], 0
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x0u);
L_004f8ebd:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8ec2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8ec2:  // jmp 0x4f8ec6
    goto L_004f8ec6;
L_004f8ec4:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f8ec6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f8ec7:  // lea ecx, [ebx + 0x1b4]
    ecx = (uint32_t)((uint32_t)(ebx + 0x1b4u));
L_004f8ecd:  // mov dword ptr [esp + 0x88], 0xffffffff
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0xffffffffu);
L_004f8ed8:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8eddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8edd:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004f8ede:  // jmp 0x4f8e35
    goto L_004f8e35;
L_004f8ee3:  // mov ecx, dword ptr [ebx + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f8ee9:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004f8eee:  // mov eax, dword ptr [ecx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_004f8ef1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f8ef3:  // je 0x4f8fa7
    if (f.zf) goto L_004f8fa7;
L_004f8ef9:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f8efc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f8efe:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_004f8f02:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f8f04:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f8f06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8f07:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004f8f0b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f8f0c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f8f0d:  // push 0x633afc
    t0 = 0x633afcu; esp -= 4; M32(esp) = t0;
L_004f8f12:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8f15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8f15:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004f8f19:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f8f1f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f8f21:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f8f24:  // je 0x4f8f48
    if (f.zf) goto L_004f8f48;
L_004f8f26:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004f8f2a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f8f30:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f8f32:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f8f35:  // je 0x4f8f48
    if (f.zf) goto L_004f8f48;
L_004f8f37:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004f8f3b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f8f41:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f8f43:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f8f46:  // jne 0x4f8fa7
    if (!f.zf) goto L_004f8fa7;
L_004f8f48:  // push 0x16f
    t0 = 0x16fu; esp -= 4; M32(esp) = t0;
L_004f8f4d:  // push 0x633b6c
    t0 = 0x633b6cu; esp -= 4; M32(esp) = t0;
L_004f8f52:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004f8f54:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004f8f56:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f8f5b:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8f60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8f60:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004f8f62:  // mov dword ptr [esp + 0x8c], esi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(esi);
L_004f8f69:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f8f6b:  // mov dword ptr [esp + 0x84], 4
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x4u);
L_004f8f76:  // je 0x4f8f88
    if (f.zf) goto L_004f8f88;
L_004f8f78:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f8f7a:  // mov dword ptr [esi + 4], 0
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x0u);
L_004f8f81:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8f86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8f86:  // jmp 0x4f8f8a
    goto L_004f8f8a;
L_004f8f88:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f8f8a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f8f8b:  // lea ecx, [ebx + 0x1c4]
    ecx = (uint32_t)((uint32_t)(ebx + 0x1c4u));
L_004f8f91:  // mov dword ptr [esp + 0x88], 0xffffffff
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0xffffffffu);
L_004f8f9c:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8fa1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8fa1:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004f8fa2:  // jmp 0x4f8ef9
    goto L_004f8ef9;
L_004f8fa7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f8fa8:  // mov ecx, 0x8550d0
    ecx = (uint32_t)(0x8550d0u);
L_004f8fad:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8fb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8fb2:  // mov ecx, dword ptr [edi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xa0u)));
L_004f8fb8:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f8fba:  // mov dword ptr [ebx + 0x138], ecx
    M32((uint32_t)(ebx + 0x138u)) = (uint32_t)(ecx);
L_004f8fc0:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004f8fc2:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f8fc5:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f8fc7:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8fcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8fca:  // cmp ebp, dword ptr [eax + 0x15c]
    t0 = lsub<32>(ebp, M32((uint32_t)(eax + 0x15cu)), f);
L_004f8fd0:  // jge 0x4f905b
    if ((f.sf == f.of)) goto L_004f905b;
L_004f8fd6:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f8fd9:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f8fdb:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f8fdeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f8fde:  // mov ecx, dword ptr [eax + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004f8fe4:  // mov edi, 0x62dd20
    edi = (uint32_t)(0x62dd20u);
L_004f8fe9:  // mov esi, dword ptr [ecx + ebp*4]
    esi = (uint32_t)(M32((uint32_t)(ecx + ebp * 4u)));
L_004f8fec:  // add esi, 0xdc
    t0 = ladd<32>(esi, 0xdcu, f);
    esi = (uint32_t)(t0);
L_004f8ff2:  // mov dl, byte ptr [edi]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi))) & 0xffu);
L_004f8ff4:  // mov cl, byte ptr [esi]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_004f8ff6:  // mov al, dl
    eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004f8ff8:  // cmp dl, cl
    t0 = lsub<8>((edx & 0xffu), (ecx & 0xffu), f);
L_004f8ffa:  // jne 0x4f901a
    if (!f.zf) goto L_004f901a;
L_004f8ffc:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004f8ffe:  // je 0x4f9016
    if (f.zf) goto L_004f9016;
L_004f9000:  // mov cl, byte ptr [edi + 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x1u))) & 0xffu);
L_004f9003:  // mov dl, byte ptr [esi + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_004f9006:  // mov al, cl
    eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_004f9008:  // cmp cl, dl
    t0 = lsub<8>((ecx & 0xffu), (edx & 0xffu), f);
L_004f900a:  // jne 0x4f901a
    if (!f.zf) goto L_004f901a;
L_004f900c:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_004f900f:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004f9012:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004f9014:  // jne 0x4f8ff2
    if (!f.zf) goto L_004f8ff2;
L_004f9016:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f9018:  // jmp 0x4f901f
    goto L_004f901f;
L_004f901a:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004f901c:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004f901f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9021:  // jne 0x4f9053
    if (!f.zf) goto L_004f9053;
L_004f9023:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f9026:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9028:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f902bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f902b:  // mov eax, dword ptr [eax + 0x160]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004f9031:  // lea edx, [ebx + 0x1f8]
    edx = (uint32_t)((uint32_t)(ebx + 0x1f8u));
L_004f9037:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f903a:  // add ecx, 0x60
    t0 = ladd<32>(ecx, 0x60u, f);
    ecx = (uint32_t)(t0);
L_004f903d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f903f:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004f9041:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004f9044:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004f9047:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004f904a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004f904d:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004f9050:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004f9053:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004f9054:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f9056:  // jmp 0x4f8fc2
    goto L_004f8fc2;
L_004f905b:  // mov ecx, dword ptr [ebx + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x148u)));
L_004f9061:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004f9063:  // je 0x4f906e
    if (f.zf) goto L_004f906e;
L_004f9065:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9067:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9068:  // call dword ptr [edx + 0x110]
    t0 = M32((uint32_t)(edx + 0x110u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f906eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f906e:  // mov ecx, dword ptr [ebx + 0x178]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x178u)));
L_004f9074:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004f9076:  // je 0x4f907d
    if (f.zf) goto L_004f907d;
L_004f9078:  // call 0x444660
    t0 = 0x00444660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f907du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f907d:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f9083:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004f9085:  // je 0x4f90cb
    if (f.zf) goto L_004f90cb;
L_004f9087:  // mov eax, dword ptr [eax + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xb0u)));
L_004f908d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f908e:  // call 0x50dc20
    t0 = 0x0050dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9093u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9093:  // mov eax, dword ptr [ebx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x138u)));
L_004f9099:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f909c:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004f909e:  // je 0x4f90b8
    if (f.zf) goto L_004f90b8;
L_004f90a0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f90a1:  // jne 0x4f90cb
    if (!f.zf) goto L_004f90cb;
L_004f90a3:  // mov ecx, dword ptr [ebx + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f90a9:  // mov eax, dword ptr [ecx + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xe0u)));
L_004f90af:  // inc dword ptr [eax*4 + 0x855228]
    t0 = linc<32>(M32((uint32_t)(eax * 4u + 0x855228u)), f);
    M32((uint32_t)(eax * 4u + 0x855228u)) = (uint32_t)(t0);
L_004f90b6:  // jmp 0x4f90cb
    goto L_004f90cb;
L_004f90b8:  // mov edx, dword ptr [ebx + 0x164]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004f90be:  // mov eax, dword ptr [edx + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xe0u)));
L_004f90c4:  // inc dword ptr [eax*4 + 0x8551c0]
    t0 = linc<32>(M32((uint32_t)(eax * 4u + 0x8551c0u)), f);
    M32((uint32_t)(eax * 4u + 0x8551c0u)) = (uint32_t)(t0);
L_004f90cb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f90cc:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004f90ce:  // call 0x4fb280
    t0 = 0x004fb280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f90d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f90d3:  // mov dword ptr [ebx + 0x228], esi
    M32((uint32_t)(ebx + 0x228u)) = (uint32_t)(esi);
L_004f90d9:  // mov dword ptr [ebx + 0x22c], esi
    M32((uint32_t)(ebx + 0x22cu)) = (uint32_t)(esi);
L_004f90df:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004f90e1:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f90e4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f90e6:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f90e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f90e9:  // cmp ebp, dword ptr [eax + 0x15c]
    t0 = lsub<32>(ebp, M32((uint32_t)(eax + 0x15cu)), f);
L_004f90ef:  // jge 0x4f914e
    if ((f.sf == f.of)) goto L_004f914e;
L_004f90f1:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004f90f4:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f90f6:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f90f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f90f9:  // mov eax, dword ptr [eax + 0x160]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004f90ff:  // mov eax, dword ptr [eax + ebp*4]
    eax = (uint32_t)(M32((uint32_t)(eax + ebp * 4u)));
L_004f9102:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004f9104:  // je 0x4f9149
    if (f.zf) goto L_004f9149;
L_004f9106:  // lea esi, [eax + 0xdc]
    esi = (uint32_t)((uint32_t)(eax + 0xdcu));
L_004f910c:  // push 0x633af4
    t0 = 0x633af4u; esp -= 4; M32(esp) = t0;
L_004f9111:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9112:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9117u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9117:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f911a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f911c:  // jne 0x4f912d
    if (!f.zf) goto L_004f912d;
L_004f911e:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004f911f:  // mov dword ptr [ebx + 0x228], 1
    M32((uint32_t)(ebx + 0x228u)) = (uint32_t)(0x1u);
L_004f9129:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f912b:  // jmp 0x4f90e1
    goto L_004f90e1;
L_004f912d:  // push 0x633ae8
    t0 = 0x633ae8u; esp -= 4; M32(esp) = t0;
L_004f9132:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9133:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9138u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9138:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f913b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f913d:  // jne 0x4f9149
    if (!f.zf) goto L_004f9149;
L_004f913f:  // mov dword ptr [ebx + 0x22c], 1
    M32((uint32_t)(ebx + 0x22cu)) = (uint32_t)(0x1u);
L_004f9149:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004f914a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f914c:  // jmp 0x4f90e1
    goto L_004f90e1;
L_004f914e:  // mov eax, dword ptr [ebx + 0x148]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x148u)));
L_004f9154:  // mov dword ptr [ebx + 0x230], esi
    M32((uint32_t)(ebx + 0x230u)) = (uint32_t)(esi);
L_004f915a:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004f915c:  // mov dword ptr [ebx + 0x244], esi
    M32((uint32_t)(ebx + 0x244u)) = (uint32_t)(esi);
L_004f9162:  // mov dword ptr [ebx + 0x23c], esi
    M32((uint32_t)(ebx + 0x23cu)) = (uint32_t)(esi);
L_004f9168:  // mov dword ptr [ebx + 0x238], esi
    M32((uint32_t)(ebx + 0x238u)) = (uint32_t)(esi);
L_004f916e:  // mov dword ptr [ebx + 0x234], esi
    M32((uint32_t)(ebx + 0x234u)) = (uint32_t)(esi);
L_004f9174:  // mov dword ptr [ebx + 0x240], esi
    M32((uint32_t)(ebx + 0x240u)) = (uint32_t)(esi);
L_004f917a:  // mov dword ptr [ebx + 0x248], esi
    M32((uint32_t)(ebx + 0x248u)) = (uint32_t)(esi);
L_004f9180:  // jne 0x4f91b7
    if (!f.zf) goto L_004f91b7;
L_004f9182:  // mov eax, dword ptr [ebx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x138u)));
L_004f9188:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004f918b:  // je 0x4f9192
    if (f.zf) goto L_004f9192;
L_004f918d:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004f9190:  // jne 0x4f919d
    if (!f.zf) goto L_004f919d;
L_004f9192:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9193:  // mov ecx, 0x8550c0
    ecx = (uint32_t)(0x8550c0u);
L_004f9198:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f919du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f919d:  // mov eax, dword ptr [ebx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x138u)));
L_004f91a3:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004f91a5:  // je 0x4f91ac
    if (f.zf) goto L_004f91ac;
L_004f91a7:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004f91aa:  // jne 0x4f91b7
    if (!f.zf) goto L_004f91b7;
L_004f91ac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f91ad:  // mov ecx, 0x8550b0
    ecx = (uint32_t)(0x8550b0u);
L_004f91b2:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f91b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f91b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f91b8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f91b9:  // lea ecx, [esp + 0x94]
    ecx = (uint32_t)((uint32_t)(esp + 0x94u));
L_004f91c0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f91c1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f91c2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f91c3:  // push 0xfa3
    t0 = 0xfa3u; esp -= 4; M32(esp) = t0;
L_004f91c8:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004f91cd:  // mov dword ptr [esp + 0xa4], 0xbf800000
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(0xbf800000u);
L_004f91d8:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f91ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f91dd:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004f91e1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f91e2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f91e3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004f91e4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f91e5:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004f91ec:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_004f91ef:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f86d0, 004f86d0)
