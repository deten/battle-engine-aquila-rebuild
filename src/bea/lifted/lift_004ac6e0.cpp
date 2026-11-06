// lifted from 004ac6e0 (vslot3, 2122 bytes, 585 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ac6e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ac6e0;
L_004ac6e0:  // sub esp, 0xb8
    t0 = lsub<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004ac6e6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ac6e7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ac6e8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ac6e9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ac6ea:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004ac6ec:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ac6ee:  // mov dword ptr [esp + 0x68], ebp
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ebp);
L_004ac6f2:  // mov ecx, dword ptr [edi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x14u)));
L_004ac6f5:  // mov eax, dword ptr [edi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ac6f8:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_004ac6fa:  // mov dword ptr [esp + 0x84], eax
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(eax);
L_004ac701:  // mov dword ptr [edi + 0x18], ebp
    M32((uint32_t)(edi + 0x18u)) = (uint32_t)(ebp);
L_004ac704:  // je 0x4acf1b
    if (f.zf) goto L_004acf1b;
L_004ac70a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ac70c:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac70fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac70f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ac711:  // je 0x4acf1b
    if (f.zf) goto L_004acf1b;
L_004ac717:  // mov esi, dword ptr [esp + 0xd8]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_004ac71e:  // mov dword ptr [esi + 0x80], ebp
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebp);
L_004ac724:  // mov ecx, dword ptr [edi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x14u)));
L_004ac727:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004ac729:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac72cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac72c:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004ac730:  // mov eax, dword ptr [edi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x14u)));
L_004ac733:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ac736:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ac738:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac73bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac73b:  // mov ebx, dword ptr [esp + 0xd0]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_004ac742:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_004ac746:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004ac74b:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ac74f:  // mov dword ptr [esi + 0xa8], eax
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(eax);
L_004ac755:  // fld dword ptr [ebx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x10u)));
L_004ac758:  // fsub dword ptr [ebx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx)));
L_004ac75a:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004ac75e:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_004ac761:  // fsub dword ptr [ebx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004ac764:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004ac768:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004ac76c:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004ac770:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_004ac773:  // fsub dword ptr [ebx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004ac776:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004ac77a:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004ac77e:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004ac782:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004ac786:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004ac78a:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_004ac78e:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_004ac792:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004ac794:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ac796:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004ac79a:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004ac79d:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004ac7a1:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004ac7a4:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004ac7a8:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004ac7aa:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004ac7ad:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004ac7b1:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_004ac7b3:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004ac7b7:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004ac7ba:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004ac7be:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004ac7c1:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004ac7c5:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004ac7c8:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004ac7cc:  // cmp dword ptr [esi + 0xa8], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0xa8u)), eax, f);
L_004ac7d2:  // jne 0x4acd7b
    if (!f.zf) goto L_004acd7b;
L_004ac7d8:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ac7dc:  // mov dword ptr [esi + 0xa8], ebp
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(ebp);
L_004ac7e2:  // mov dword ptr [esi + 0xc8], ebp
    M32((uint32_t)(esi + 0xc8u)) = (uint32_t)(ebp);
L_004ac7e8:  // mov dword ptr [esp + 0x38], ebp
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebp);
L_004ac7ec:  // cmp dword ptr [ecx + 0x15c], ebp
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x15cu)), ebp, f);
L_004ac7f2:  // jle 0x4acb07
    if ((f.zf || f.sf != f.of)) goto L_004acb07;
L_004ac7f8:  // mov dword ptr [esp + 0x3c], ebp
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebp);
L_004ac7fc:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ac800:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004ac804:  // mov eax, dword ptr [edx + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x160u)));
L_004ac80a:  // mov ebp, dword ptr [eax + ecx*4]
    ebp = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_004ac80d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ac80f:  // call 0x4b0cd0
    t0 = 0x004b0cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac814u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac814:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ac816:  // je 0x4acada
    if (f.zf) goto L_004acada;
L_004ac81c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ac81e:  // call 0x4b0cd0
    t0 = 0x004b0cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac823u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac823:  // cmp dword ptr [eax + 0x8c], 1
    t0 = lsub<32>(M32((uint32_t)(eax + 0x8cu)), 0x1u, f);
L_004ac82a:  // jne 0x4acada
    if (!f.zf) goto L_004acada;
L_004ac830:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004ac834:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_004ac83c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004ac83e:  // je 0x4ac868
    if (f.zf) goto L_004ac868;
L_004ac840:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ac842:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_004ac846:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ac847:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ac848:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac84bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac84b:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004ac84f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ac850:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ac852:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac855u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac855:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ac857:  // je 0x4ac868
    if (f.zf) goto L_004ac868;
L_004ac859:  // jle 0x4ac868
    if ((f.zf || f.sf != f.of)) goto L_004ac868;
L_004ac85b:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004ac85d:  // je 0x4ac865
    if (f.zf) goto L_004ac865;
L_004ac85f:  // mov ebp, dword ptr [ebp + 0x9c]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x9cu)));
L_004ac865:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ac866:  // jne 0x4ac85b
    if (!f.zf) goto L_004ac85b;
L_004ac868:  // test byte ptr [esp + 0x64], 1
    t0 = llog<8>(M8((uint32_t)(esp + 0x64u)) & 0x1u, f);
L_004ac86d:  // jne 0x4acada
    if (!f.zf) goto L_004acada;
L_004ac873:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004ac875:  // je 0x4acada
    if (f.zf) goto L_004acada;
L_004ac87b:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004ac880:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_004ac884:  // mov eax, dword ptr [edi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_004ac887:  // mov ebx, dword ptr [esp + 0x70]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004ac88b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ac88d:  // je 0x4ac8a4
    if (f.zf) goto L_004ac8a4;
L_004ac88f:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ac893:  // fld dword ptr [eax + ecx + 0x70]
    lpush(x, (long double)F32((uint32_t)(eax + ecx + 0x70u)));
L_004ac897:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004ac89d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ac89f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ac8a2:  // je 0x4ac8b6
    if (f.zf) goto L_004ac8b6;
L_004ac8a4:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004ac8a8:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ac8ac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ac8ad:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ac8ae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ac8af:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ac8b1:  // call 0x4ad600
    t0 = 0x004ad600u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac8b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac8b6:  // mov eax, dword ptr [edi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_004ac8b9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ac8bb:  // jne 0x4ac8e5
    if (!f.zf) goto L_004ac8e5;
L_004ac8bd:  // mov ecx, dword ptr [edi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_004ac8c0:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ac8c4:  // fld dword ptr [edx + ecx + 0x70]
    lpush(x, (long double)F32((uint32_t)(edx + ecx + 0x70u)));
L_004ac8c8:  // fcomp dword ptr [esp + 0x70]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x70u)));
    lpop(x);
L_004ac8cc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ac8ce:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ac8d1:  // je 0x4ac8e5
    if (f.zf) goto L_004ac8e5;
L_004ac8d3:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004ac8d7:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ac8db:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ac8dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ac8dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ac8de:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ac8e0:  // call 0x4ad600
    t0 = 0x004ad600u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac8e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac8e5:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ac8e9:  // mov edx, dword ptr [edi + 0x24]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_004ac8ec:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004ac8f0:  // fsub dword ptr [eax + edx + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + edx + 0x60u)));
L_004ac8f4:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004ac8f6:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004ac8fa:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004ac8fe:  // fsub dword ptr [eax + 0x64]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x64u)));
L_004ac901:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_004ac905:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004ac909:  // fsub dword ptr [eax + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x68u)));
L_004ac90c:  // fst dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
L_004ac910:  // fmul dword ptr [eax + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x58u)));
L_004ac913:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004ac917:  // fmul dword ptr [eax + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x54u)));
L_004ac91a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac91c:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004ac920:  // fmul dword ptr [eax + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x50u)));
L_004ac923:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac925:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004ac929:  // fmul dword ptr [eax + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x48u)));
L_004ac92c:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004ac930:  // fmul dword ptr [eax + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x44u)));
L_004ac933:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac935:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004ac939:  // fmul dword ptr [eax + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x40u)));
L_004ac93c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac93e:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004ac942:  // fmul dword ptr [eax + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x38u)));
L_004ac945:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004ac949:  // fmul dword ptr [eax + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x34u)));
L_004ac94c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac94e:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004ac952:  // fmul dword ptr [eax + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x30u)));
L_004ac955:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac957:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_004ac95e:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_004ac965:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_004ac96c:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004ac970:  // fmul dword ptr [eax + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x58u)));
L_004ac973:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004ac977:  // fmul dword ptr [eax + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x54u)));
L_004ac97a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac97c:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ac980:  // fmul dword ptr [eax + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x50u)));
L_004ac983:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac985:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004ac989:  // fmul dword ptr [eax + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x48u)));
L_004ac98c:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004ac990:  // fmul dword ptr [eax + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x44u)));
L_004ac993:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac995:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ac999:  // fmul dword ptr [eax + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x40u)));
L_004ac99c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac99e:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004ac9a2:  // fmul dword ptr [eax + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x38u)));
L_004ac9a5:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004ac9a9:  // fmul dword ptr [eax + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x34u)));
L_004ac9ac:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac9ae:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ac9b2:  // fmul dword ptr [eax + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x30u)));
L_004ac9b5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ac9b7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ac9b9:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_004ac9c0:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_004ac9c7:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_004ac9ce:  // call 0x4b0cd0
    t0 = 0x004b0cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ac9d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ac9d3:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004ac9da:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004ac9df:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004ac9e1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ac9e2:  // jne 0x4aca12
    if (!f.zf) goto L_004aca12;
L_004ac9e4:  // mov edx, dword ptr [esp + 0xd8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_004ac9eb:  // lea ecx, [esp + 0x9c]
    ecx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004ac9f2:  // add edx, 0x14
    t0 = ladd<32>(edx, 0x14u, f);
    edx = (uint32_t)(t0);
L_004ac9f5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ac9f6:  // lea edx, [esp + 0xb0]
    edx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_004ac9fd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ac9fe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ac9ff:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aca00:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004aca01:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004aca03:  // call 0x4ac140
    t0 = 0x004ac140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aca08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aca08:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004aca0a:  // jne 0x4aca40
    if (!f.zf) goto L_004aca40;
L_004aca0c:  // mov dword ptr [esp + 0x34], ebx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebx);
L_004aca10:  // jmp 0x4aca51
    goto L_004aca51;
L_004aca12:  // mov ecx, dword ptr [esp + 0xd8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_004aca19:  // lea edx, [esp + 0x9c]
    edx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004aca20:  // add ecx, 0x14
    t0 = ladd<32>(ecx, 0x14u, f);
    ecx = (uint32_t)(t0);
L_004aca23:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aca24:  // lea ecx, [esp + 0xb0]
    ecx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_004aca2b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aca2c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aca2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aca2e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004aca2f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004aca31:  // call 0x4ac4a0
    t0 = 0x004ac4a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aca36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aca36:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004aca38:  // jne 0x4aca40
    if (!f.zf) goto L_004aca40;
L_004aca3a:  // mov dword ptr [esp + 0x34], ebx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebx);
L_004aca3e:  // jmp 0x4aca51
    goto L_004aca51;
L_004aca40:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004aca44:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aca46:  // je 0x4acad3
    if (f.zf) goto L_004acad3;
L_004aca4c:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004aca51:  // mov eax, dword ptr [esi + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xd0u)));
L_004aca57:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aca59:  // jne 0x4acdbf
    if (!f.zf) goto L_004acdbf;
L_004aca5f:  // mov eax, dword ptr [esi + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xccu)));
L_004aca65:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aca67:  // jne 0x4acad3
    if (!f.zf) goto L_004acad3;
L_004aca69:  // mov edx, dword ptr [esi + 0xe4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xe4u)));
L_004aca6f:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004aca75:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_004aca7d:  // mov ecx, dword ptr [edx + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x88u)));
L_004aca83:  // mov dword ptr [esi + eax*4 + 0x68], ecx
    M32((uint32_t)(esi + eax * 4u + 0x68u)) = (uint32_t)(ecx);
L_004aca87:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004aca8d:  // mov eax, dword ptr [esi + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_004aca93:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004aca99:  // mov dword ptr [esi + edx*4 + 0xac], eax
    M32((uint32_t)(esi + edx * 4u + 0xacu)) = (uint32_t)(eax);
L_004acaa0:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004acaa4:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004acaa8:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004acaaa:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004acaae:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004acab1:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004acab5:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004acab8:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004acabe:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004acabf:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004acac2:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004acac4:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004acac7:  // mov dword ptr [esi + 0x80], edx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(edx);
L_004acacd:  // jge 0x4acdce
    if ((f.sf == f.of)) goto L_004acdce;
L_004acad3:  // mov ebx, dword ptr [esp + 0xd0]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_004acada:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004acade:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004acae2:  // mov ebp, dword ptr [esp + 0x3c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004acae6:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004acae7:  // mov edx, dword ptr [ecx + 0x15c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x15cu)));
L_004acaed:  // add ebp, 0x74
    t0 = ladd<32>(ebp, 0x74u, f);
    ebp = (uint32_t)(t0);
L_004acaf0:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004acaf2:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_004acaf6:  // mov dword ptr [esp + 0x3c], ebp
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebp);
L_004acafa:  // jl 0x4ac7fc
    if ((f.sf != f.of)) goto L_004ac7fc;
L_004acb00:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004acb02:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004acb07:  // cmp dword ptr [esi + 0xa8], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0xa8u)), eax, f);
L_004acb0d:  // je 0x4acb1b
    if (f.zf) goto L_004acb1b;
L_004acb0f:  // cmp dword ptr [esi + 0xc8], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0xc8u)), eax, f);
L_004acb15:  // jne 0x4acd69
    if (!f.zf) goto L_004acd69;
L_004acb1b:  // cmp dword ptr [esi + 0xcc], ebp
    t0 = lsub<32>(M32((uint32_t)(esi + 0xccu)), ebp, f);
L_004acb21:  // je 0x4acf1d
    if (f.zf) goto L_004acf1d;
L_004acb27:  // mov edx, dword ptr [esi + 0xe4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xe4u)));
L_004acb2d:  // mov dword ptr [esi + 0xa8], eax
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(eax);
L_004acb33:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004acb39:  // mov ecx, dword ptr [edx + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x88u)));
L_004acb3f:  // mov dword ptr [esi + eax*4 + 0x68], ecx
    M32((uint32_t)(esi + eax * 4u + 0x68u)) = (uint32_t)(ecx);
L_004acb43:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004acb49:  // mov eax, dword ptr [esi + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_004acb4f:  // mov dword ptr [esi + edx*4 + 0xac], eax
    M32((uint32_t)(esi + edx * 4u + 0xacu)) = (uint32_t)(eax);
L_004acb56:  // mov ecx, dword ptr [esi + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xe4u)));
L_004acb5c:  // mov eax, dword ptr [edi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_004acb5f:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004acb65:  // mov ebp, dword ptr [ecx + 0x88]
    ebp = (uint32_t)(M32((uint32_t)(ecx + 0x88u)));
L_004acb6b:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004acb6f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004acb71:  // je 0x4acb91
    if (f.zf) goto L_004acb91;
L_004acb73:  // lea ecx, [ebp*8]
    ecx = (uint32_t)((uint32_t)(ebp * 8u));
L_004acb7a:  // sub ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_004acb7c:  // lea edx, [ebp + ecx*4]
    edx = (uint32_t)((uint32_t)(ebp + ecx * 4u));
L_004acb80:  // fld dword ptr [eax + edx*4 + 0x70]
    lpush(x, (long double)F32((uint32_t)(eax + edx * 4u + 0x70u)));
L_004acb84:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004acb8a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004acb8c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004acb8f:  // je 0x4acba3
    if (f.zf) goto L_004acba3;
L_004acb91:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004acb95:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004acb99:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004acb9a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004acb9b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004acb9c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004acb9e:  // call 0x4ad600
    t0 = 0x004ad600u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004acba3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004acba3:  // mov eax, dword ptr [edi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_004acba6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004acba8:  // jne 0x4acbdb
    if (!f.zf) goto L_004acbdb;
L_004acbaa:  // mov ecx, dword ptr [edi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_004acbad:  // lea edx, [ebp*8]
    edx = (uint32_t)((uint32_t)(ebp * 8u));
L_004acbb4:  // sub edx, ebp
    t0 = lsub<32>(edx, ebp, f);
    edx = (uint32_t)(t0);
L_004acbb6:  // lea eax, [ebp + edx*4]
    eax = (uint32_t)((uint32_t)(ebp + edx * 4u));
L_004acbba:  // fld dword ptr [ecx + eax*4 + 0x70]
    lpush(x, (long double)F32((uint32_t)(ecx + eax * 4u + 0x70u)));
L_004acbbe:  // fcomp dword ptr [esp + 0x60]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x60u)));
    lpop(x);
L_004acbc2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004acbc4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004acbc7:  // je 0x4acbdb
    if (f.zf) goto L_004acbdb;
L_004acbc9:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004acbcd:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004acbd1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004acbd2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004acbd3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004acbd4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004acbd6:  // call 0x4ad600
    t0 = 0x004ad600u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004acbdbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004acbdb:  // mov eax, dword ptr [edi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_004acbde:  // lea ecx, [ebp*8]
    ecx = (uint32_t)((uint32_t)(ebp * 8u));
L_004acbe5:  // sub ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_004acbe7:  // lea edx, [ebp + ecx*4]
    edx = (uint32_t)((uint32_t)(ebp + ecx * 4u));
L_004acbeb:  // fld dword ptr [eax + edx*4 + 8]
    lpush(x, (long double)F32((uint32_t)(eax + edx * 4u + 0x8u)));
L_004acbef:  // fmul dword ptr [esi + 0x8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8cu)));
L_004acbf5:  // fld dword ptr [eax + edx*4 + 4]
    lpush(x, (long double)F32((uint32_t)(eax + edx * 4u + 0x4u)));
L_004acbf9:  // fmul dword ptr [esi + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x88u)));
L_004acbff:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_004acc02:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acc04:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_004acc0a:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004acc0c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acc0e:  // fld dword ptr [eax + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + 0x10u)));
L_004acc11:  // fmul dword ptr [esi + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x84u)));
L_004acc17:  // fld dword ptr [eax + 0x18]
    lpush(x, (long double)F32((uint32_t)(eax + 0x18u)));
L_004acc1a:  // fmul dword ptr [esi + 0x8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8cu)));
L_004acc20:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acc22:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_004acc25:  // fmul dword ptr [esi + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x88u)));
L_004acc2b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acc2d:  // fstp dword ptr [esp + 0xbc]
    F32((uint32_t)(esp + 0xbcu)) = lf32(ST(0));
    lpop(x);
L_004acc34:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_004acc37:  // fmul dword ptr [esi + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x84u)));
L_004acc3d:  // fld dword ptr [eax + 0x28]
    lpush(x, (long double)F32((uint32_t)(eax + 0x28u)));
L_004acc40:  // fmul dword ptr [esi + 0x8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8cu)));
L_004acc46:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acc48:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_004acc4b:  // fmul dword ptr [esi + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x88u)));
L_004acc51:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acc53:  // fstp dword ptr [esp + 0xc0]
    F32((uint32_t)(esp + 0xc0u)) = lf32(ST(0));
    lpop(x);
L_004acc5a:  // fadd dword ptr [eax + 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x60u)));
L_004acc5d:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004acc64:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_004acc6b:  // fadd dword ptr [eax + 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x64u)));
L_004acc6e:  // mov ecx, dword ptr [esp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004acc75:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_004acc7c:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004acc83:  // fadd dword ptr [eax + 0x68]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x68u)));
L_004acc86:  // mov edx, dword ptr [esp + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004acc8d:  // mov dword ptr [esi + 0x84], ecx
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(ecx);
L_004acc93:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004acc9a:  // mov dword ptr [esi + 0x88], edx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(edx);
L_004acca0:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004acca7:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004accae:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004accb2:  // mov dword ptr [esi + 0x8c], eax
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(eax);
L_004accb8:  // mov dword ptr [esi + 0x90], ecx
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(ecx);
L_004accbe:  // mov ecx, dword ptr [esp + 0xd4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd4u)));
L_004accc5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004accc6:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_004accca:  // mov edx, dword ptr [ecx + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_004acccd:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004accd1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004accd2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004accd3:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004accd7:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004accda:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004accdc:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004accdf:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004acce1:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004acce5:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004acce8:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004accec:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004accef:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004accf2:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004accf4:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004accf8:  // mov edx, dword ptr [esp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004accff:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004acd01:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004acd08:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004acd09:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004acd0c:  // mov edx, dword ptr [esp + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004acd13:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004acd16:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004acd18:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004acd1b:  // call 0x4acf30
    t0 = 0x004acf30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004acd20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004acd20:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004acd22:  // je 0x4acde0
    if (f.zf) goto L_004acde0;
L_004acd28:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004acd2c:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004acd30:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004acd34:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004acd38:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acd3a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004acd3e:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004acd42:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acd44:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004acd4a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004acd4c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004acd4f:  // jne 0x4ace46
    if (!f.zf) goto L_004ace46;
L_004acd55:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004acd5b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004acd5c:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004acd5e:  // mov dword ptr [esi + 0x80], eax
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(eax);
L_004acd64:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004acd69:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004acd6d:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004acd6e:  // cmp ecx, 6
    t0 = lsub<32>(ecx, 0x6u, f);
L_004acd71:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_004acd75:  // jl 0x4ac7cc
    if ((f.sf != f.of)) goto L_004ac7cc;
L_004acd7b:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004acd7f:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_004acd81:  // je 0x4acf0c
    if (f.zf) goto L_004acf0c;
L_004acd87:  // cmp dword ptr [esi + 0xc8], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0xc8u)), eax, f);
L_004acd8d:  // jne 0x4aceac
    if (!f.zf) goto L_004aceac;
L_004acd93:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004acd97:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004acd9b:  // mov dword ptr [ebx + 0x10], edx
    M32((uint32_t)(ebx + 0x10u)) = (uint32_t)(edx);
L_004acd9e:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004acda2:  // mov dword ptr [ebx + 0x14], ecx
    M32((uint32_t)(ebx + 0x14u)) = (uint32_t)(ecx);
L_004acda5:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004acda9:  // mov dword ptr [ebx + 0x18], edx
    M32((uint32_t)(ebx + 0x18u)) = (uint32_t)(edx);
L_004acdac:  // mov dword ptr [ebx + 0x1c], ecx
    M32((uint32_t)(ebx + 0x1cu)) = (uint32_t)(ecx);
L_004acdaf:  // mov dword ptr [ebx + 0x20], eax
    M32((uint32_t)(ebx + 0x20u)) = (uint32_t)(eax);
L_004acdb2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004acdb3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004acdb4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004acdb5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004acdb6:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004acdbc:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004acdbf:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004acdc1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004acdc2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004acdc3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004acdc4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004acdc5:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004acdcb:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004acdce:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004acdd3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004acdd4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004acdd5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004acdd6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004acdd7:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004acddd:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004acde0:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004acde4:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004acde8:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004acdec:  // mov dword ptr [ebx + 0x10], eax
    M32((uint32_t)(ebx + 0x10u)) = (uint32_t)(eax);
L_004acdef:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004acdf3:  // mov dword ptr [ebx + 0x14], ecx
    M32((uint32_t)(ebx + 0x14u)) = (uint32_t)(ecx);
L_004acdf6:  // mov dword ptr [ebx + 0x18], edx
    M32((uint32_t)(ebx + 0x18u)) = (uint32_t)(edx);
L_004acdf9:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004ace01:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ace05:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004ace07:  // mov dword ptr [ebx + 0x1c], eax
    M32((uint32_t)(ebx + 0x1cu)) = (uint32_t)(eax);
L_004ace0a:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ace12:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ace16:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ace18:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ace20:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ace24:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004ace27:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ace2b:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ace2e:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004ace31:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004ace36:  // mov dword ptr [ebx + 0x20], eax
    M32((uint32_t)(ebx + 0x20u)) = (uint32_t)(eax);
L_004ace39:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ace3a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ace3b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ace3c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ace3d:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004ace43:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ace46:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004ace4a:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ace4e:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004ace52:  // mov dword ptr [ebx + 0x10], ecx
    M32((uint32_t)(ebx + 0x10u)) = (uint32_t)(ecx);
L_004ace55:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004ace59:  // mov dword ptr [ebx + 0x14], edx
    M32((uint32_t)(ebx + 0x14u)) = (uint32_t)(edx);
L_004ace5c:  // mov dword ptr [ebx + 0x18], eax
    M32((uint32_t)(ebx + 0x18u)) = (uint32_t)(eax);
L_004ace5f:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004ace67:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ace6b:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004ace6d:  // mov dword ptr [ebx + 0x1c], ecx
    M32((uint32_t)(ebx + 0x1cu)) = (uint32_t)(ecx);
L_004ace70:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ace78:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ace7c:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004ace7e:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ace86:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ace8a:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004ace8d:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ace91:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004ace94:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004ace99:  // mov dword ptr [ebx + 0x20], eax
    M32((uint32_t)(ebx + 0x20u)) = (uint32_t)(eax);
L_004ace9c:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004ace9f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004acea0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004acea1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004acea2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004acea3:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004acea9:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004aceac:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004aceb0:  // fadd dword ptr [esp + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x50u)));
L_004aceb4:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004aceb8:  // mov dword ptr [ebx + 0x20], eax
    M32((uint32_t)(ebx + 0x20u)) = (uint32_t)(eax);
L_004acebb:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004acebf:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004acec3:  // fadd dword ptr [esp + 0x54]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x54u)));
L_004acec7:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004acecb:  // mov dword ptr [ebx + 0x10], edx
    M32((uint32_t)(ebx + 0x10u)) = (uint32_t)(edx);
L_004acece:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004aced2:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004aced6:  // fadd dword ptr [esp + 0x58]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x58u)));
L_004aceda:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004acede:  // mov dword ptr [ebx + 0x14], edx
    M32((uint32_t)(ebx + 0x14u)) = (uint32_t)(edx);
L_004acee1:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004acee5:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004acee9:  // mov dword ptr [ebx + 0x18], edx
    M32((uint32_t)(ebx + 0x18u)) = (uint32_t)(edx);
L_004aceec:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004acef0:  // mov dword ptr [ebx + 0x1c], edx
    M32((uint32_t)(ebx + 0x1cu)) = (uint32_t)(edx);
L_004acef3:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004acef5:  // mov dword ptr [edx], esi
    M32((uint32_t)(edx)) = (uint32_t)(esi);
L_004acef7:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004acefb:  // mov dword ptr [edx + 4], esi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(esi);
L_004acefe:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004acf02:  // mov dword ptr [edx + 8], esi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(esi);
L_004acf05:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004acf09:  // mov dword ptr [edx + 0xc], esi
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(esi);
L_004acf0c:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004acf0e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004acf0f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004acf10:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004acf11:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004acf12:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004acf18:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004acf1b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004acf1d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004acf1e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004acf1f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004acf20:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004acf21:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_004acf27:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004ac6e0, 004ac6e0)
