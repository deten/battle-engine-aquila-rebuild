// lifted from 004015e0 (vslot66, 794 bytes, 242 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004015e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004015e0;
L_004015e0:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004015e3:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004015e8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004015e9:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004015eb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004015ec:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004015ed:  // lea ebp, [ebx + 0x1c]
    ebp = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004015f0:  // mov dword ptr [ebx + 0xd8], eax
    M32((uint32_t)(ebx + 0xd8u)) = (uint32_t)(eax);
L_004015f6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004015f8:  // lea eax, [ebx + 0x8c]
    eax = (uint32_t)((uint32_t)(ebx + 0x8cu));
L_004015fe:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004015ff:  // lea esi, [ebx + 0x3c]
    esi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_00401602:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00401604:  // lea edi, [ebx + 0x9c]
    edi = (uint32_t)((uint32_t)(ebx + 0x9cu));
L_0040160a:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0040160c:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0040160f:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00401612:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00401615:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_00401618:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0040161b:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_0040161e:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00401623:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00401625:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00401628:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0040162b:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0040162d:  // je 0x40164f
    if (f.zf) goto L_0040164f;
L_0040162f:  // lea eax, [ebx + 0xc]
    eax = (uint32_t)((uint32_t)(ebx + 0xcu));
L_00401632:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00401634:  // je 0x40164f
    if (f.zf) goto L_0040164f;
L_00401636:  // mov dx, word ptr [ebx + 0x14]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebx + 0x14u))) & 0xffffu);
L_0040163a:  // mov ax, word ptr [ebx + 0x16]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebx + 0x16u))) & 0xffffu);
L_0040163e:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00401641:  // mov word ptr [esp + 0x18], dx
    M16((uint32_t)(esp + 0x18u)) = (uint16_t)((edx & 0xffffu));
L_00401646:  // mov word ptr [esp + 0x1a], ax
    M16((uint32_t)(esp + 0x1au)) = (uint16_t)((eax & 0xffffu));
L_0040164b:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0040164f:  // mov eax, dword ptr [0x662dd0]
    eax = (uint32_t)(M32((uint32_t)(0x662dd0u)));
L_00401654:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00401656:  // je 0x401757
    if (f.zf) goto L_00401757;
L_0040165c:  // test byte ptr [ebx + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(ebx + 0x34u)) & 0x10u, f);
L_00401660:  // je 0x4016cf
    if (f.zf) goto L_004016cf;
L_00401662:  // fld dword ptr [ebx + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x80u)));
L_00401668:  // fld dword ptr [ebx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x7cu)));
L_0040166b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040166d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040166f:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00401671:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00401673:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00401675:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00401677:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00401679:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0040167b:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0040167d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040167f:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00401683:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401686u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401686:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_0040168c:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00401690:  // fadd dword ptr [0x5d8580]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8580u)));
L_00401696:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0040169a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040169c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040169f:  // je 0x401757
    if (f.zf) goto L_00401757;
L_004016a5:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004016a7:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004016a9:  // call dword ptr [eax + 0x3c]
    t0 = M32((uint32_t)(eax + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004016acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004016ac:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004016af:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004016b1:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004016b3:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004016b6:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004016ba:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004016be:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004016c1:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004016c7:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004016ca:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004016cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004016cd:  // jmp 0x401744
    goto L_00401744;
L_004016cf:  // fld dword ptr [ebx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x84u)));
L_004016d5:  // fld dword ptr [ebx + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x80u)));
L_004016db:  // fld dword ptr [ebx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x7cu)));
L_004016de:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004016e0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004016e2:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004016e4:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004016e6:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004016e8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004016ea:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004016ec:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004016ee:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004016f0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004016f2:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004016f4:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004016f6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004016f8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004016fa:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004016fe:  // call dword ptr [eax + 0x3c]
    t0 = M32((uint32_t)(eax + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401701u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401701:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00401707:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0040170b:  // fadd dword ptr [0x5d8580]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8580u)));
L_00401711:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_00401715:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00401717:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040171a:  // je 0x401757
    if (f.zf) goto L_00401757;
L_0040171c:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0040171e:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00401720:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401723u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401723:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00401726:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00401728:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0040172a:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0040172d:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00401731:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_00401735:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00401738:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_0040173e:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00401741:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401744u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401744:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00401745:  // push 0x622c68
    t0 = 0x622c68u; esp -= 4; M32(esp) = t0;
L_0040174a:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0040174f:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401754u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401754:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00401757:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_0040175a:  // fadd dword ptr [ebx + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x7cu)));
L_0040175d:  // fstp dword ptr [ebp]
    F32((uint32_t)(ebp)) = lf32(ST(0));
    lpop(x);
L_00401760:  // fld dword ptr [ebx + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x80u)));
L_00401766:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_00401769:  // fstp dword ptr [ebp + 4]
    F32((uint32_t)(ebp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0040176c:  // fld dword ptr [ebx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x84u)));
L_00401772:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_00401775:  // fstp dword ptr [ebp + 8]
    F32((uint32_t)(ebp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00401778:  // mov ecx, dword ptr [0x6fbdfc]
    ecx = (uint32_t)(M32((uint32_t)(0x6fbdfcu)));
L_0040177e:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00401780:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_00401784:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00401786:  // call dword ptr [edx + 0xc0]
    t0 = M32((uint32_t)(edx + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040178cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040178c:  // fsubr dword ptr [esp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x14u))) - (ST(0));
L_00401790:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00401792:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00401794:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00401798:  // call dword ptr [eax + 0xb0]
    t0 = M32((uint32_t)(eax + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040179eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040179e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004017a0:  // je 0x401864
    if (f.zf) goto L_00401864;
L_004017a6:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_004017a8:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004017ad:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004017b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004017b2:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004017b4:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004017b6:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004017ba:  // call dword ptr [edx + 0xc0]
    t0 = M32((uint32_t)(edx + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004017c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004017c0:  // fsubr dword ptr [esp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x14u))) - (ST(0));
L_004017c4:  // fcom dword ptr [ebx + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x24u)));
L_004017c7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004017c9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004017cc:  // je 0x40184a
    if (f.zf) goto L_0040184a;
L_004017ce:  // mov al, byte ptr [ebx + 0x2c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x2cu))) & 0xffu);
L_004017d1:  // fstp dword ptr [ebx + 0x24]
    F32((uint32_t)(ebx + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004017d4:  // test al, 0x80
    t0 = llog<8>((eax & 0xffu) & 0x80u, f);
L_004017d6:  // je 0x40189d
    if (f.zf) goto L_0040189d;
L_004017dc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004017dd:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004017e1:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004017e6:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004017ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004017eb:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004017ef:  // fmul dword ptr [ebx + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x84u)));
L_004017f5:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004017f9:  // fmul dword ptr [ebx + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x80u)));
L_004017ff:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00401801:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00401805:  // fmul dword ptr [ebx + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x7cu)));
L_00401808:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040180a:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0040180e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00401810:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00401814:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00401818:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040181a:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0040181e:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00401822:  // fld dword ptr [ebx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x7cu)));
L_00401825:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_00401829:  // fstp dword ptr [ebx + 0x7c]
    F32((uint32_t)(ebx + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0040182c:  // fld dword ptr [ebx + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x80u)));
L_00401832:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_00401836:  // fstp dword ptr [ebx + 0x80]
    F32((uint32_t)(ebx + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0040183c:  // fld dword ptr [ebx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x84u)));
L_00401842:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00401844:  // fstp dword ptr [ebx + 0x84]
    F32((uint32_t)(ebx + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0040184a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040184c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00401850:  // fcomp dword ptr [ebx + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x24u)));
    lpop(x);
L_00401853:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00401855:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00401858:  // je 0x401864
    if (f.zf) goto L_00401864;
L_0040185a:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0040185c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0040185e:  // call dword ptr [edx + 0x114]
    t0 = M32((uint32_t)(edx + 0x114u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401864u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401864:  // cmp dword ptr [ebx + 0x18], esi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x18u)), esi, f);
L_00401867:  // je 0x401895
    if (f.zf) goto L_00401895;
L_00401869:  // lea ecx, [ebx + 0xc]
    ecx = (uint32_t)((uint32_t)(ebx + 0xcu));
L_0040186c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0040186e:  // je 0x401895
    if (f.zf) goto L_00401895;
L_00401870:  // lea eax, [ebx + 0x8c]
    eax = (uint32_t)((uint32_t)(ebx + 0x8cu));
L_00401876:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00401877:  // call 0x492ca0
    t0 = 0x00492ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040187cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040187c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040187e:  // je 0x401895
    if (f.zf) goto L_00401895;
L_00401880:  // mov ecx, dword ptr [ebx + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x38u)));
L_00401883:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00401885:  // je 0x401895
    if (f.zf) goto L_00401895;
L_00401887:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00401889:  // add ebx, 0x14
    t0 = ladd<32>(ebx, 0x14u, f);
    ebx = (uint32_t)(t0);
L_0040188c:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00401890:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00401891:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00401892:  // call dword ptr [eax + 0x14]
    t0 = M32((uint32_t)(eax + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401895u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401895:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00401896:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00401897:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00401898:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00401899:  // add esp, 0x30
    t0 = ladd<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0040189c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0040189d:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0040189f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004018a1:  // call dword ptr [eax + 0x110]
    t0 = M32((uint32_t)(eax + 0x110u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004018a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004018a7:  // fld dword ptr [ebx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x84u)));
L_004018ad:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004018af:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004018b1:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004018b3:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004018b7:  // call dword ptr [edx + 0xb4]
    t0 = M32((uint32_t)(edx + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004018bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004018bd:  // fadd dword ptr [0x5d8578]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8578u)));
L_004018c3:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004018c7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004018c9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004018cc:  // je 0x4018eb
    if (f.zf) goto L_004018eb;
L_004018ce:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004018d0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004018d2:  // call dword ptr [eax + 0xbc]
    t0 = M32((uint32_t)(eax + 0xbcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004018d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004018d8:  // fmul dword ptr [ebx + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x84u)));
L_004018de:  // fchs 
    ST(0) = -ST(0);
L_004018e0:  // fstp dword ptr [ebx + 0x84]
    F32((uint32_t)(ebx + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004018e6:  // jmp 0x40184c
    goto L_0040184c;
L_004018eb:  // mov dword ptr [ebx + 0x84], 0
    M32((uint32_t)(ebx + 0x84u)) = (uint32_t)(0x0u);
L_004018f5:  // jmp 0x40184c
    goto L_0040184c;
}

LIFT_FUNCTION(0x004015e0, 004015e0)
