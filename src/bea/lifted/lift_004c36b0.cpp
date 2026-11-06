// lifted from 004c36b0 (vslot10, 2636 bytes, 705 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c36b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c36b0;
L_004c36b0:  // sub esp, 0xf0
    t0 = lsub<32>(esp, 0xf0u, f);
    esp = (uint32_t)(t0);
L_004c36b6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c36b7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c36b8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c36b9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c36ba:  // mov edi, dword ptr [esp + 0x104]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x104u)));
L_004c36c1:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004c36c3:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004c36c5:  // mov dword ptr [esp + 0x94], esi
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(esi);
L_004c36cc:  // cmp dword ptr [edi + 0x88], esi
    t0 = lsub<32>(M32((uint32_t)(edi + 0x88u)), esi, f);
L_004c36d2:  // jne 0x4c36e5
    if (!f.zf) goto L_004c36e5;
L_004c36d4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c36d5:  // call 0x4c35d0
    t0 = 0x004c35d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c36dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c36da:  // mov dword ptr [esp + 0x94], 1
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0x1u);
L_004c36e5:  // cmp dword ptr [ebx + 0x80], esi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x80u)), esi, f);
L_004c36eb:  // je 0x4c36ff
    if (f.zf) goto L_004c36ff;
L_004c36ed:  // fld dword ptr [0x9c63f8]
    lpush(x, (long double)F32((uint32_t)(0x9c63f8u)));
L_004c36f3:  // fmul dword ptr [0x5dbbfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbbfcu)));
L_004c36f9:  // fadd dword ptr [edi + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x50u)));
L_004c36fc:  // fstp dword ptr [edi + 0x50]
    F32((uint32_t)(edi + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c36ff:  // fld dword ptr [ebx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x7cu)));
L_004c3702:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004c3708:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c370a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004c370d:  // jne 0x4c377f
    if (!f.zf) goto L_004c377f;
L_004c370f:  // mov eax, dword ptr [edi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004c3715:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004c3717:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004c3719:  // jle 0x4c377f
    if ((f.zf || f.sf != f.of)) goto L_004c377f;
L_004c371b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c371d:  // mov ecx, dword ptr [edi + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x88u)));
L_004c3723:  // cmp dword ptr [eax + ecx + 0x24], esi
    t0 = lsub<32>(M32((uint32_t)(eax + ecx + 0x24u)), esi, f);
L_004c3727:  // je 0x4c3771
    if (f.zf) goto L_004c3771;
L_004c3729:  // fld dword ptr [0x9c63f8]
    lpush(x, (long double)F32((uint32_t)(0x9c63f8u)));
L_004c372f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c3731:  // fmul dword ptr [eax + ecx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx + 0x10u)));
L_004c3735:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004c373c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c373e:  // fmul dword ptr [eax + ecx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx + 0x14u)));
L_004c3742:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004c3749:  // fmul dword ptr [eax + ecx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx + 0x18u)));
L_004c374d:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004c3754:  // fadd dword ptr [eax + ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + ecx)));
L_004c3757:  // fstp dword ptr [eax + ecx]
    F32((uint32_t)(eax + ecx)) = lf32(ST(0));
    lpop(x);
L_004c375a:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004c3761:  // fadd dword ptr [eax + ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + ecx + 0x4u)));
L_004c3765:  // fstp dword ptr [eax + ecx + 4]
    F32((uint32_t)(eax + ecx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004c3769:  // fadd dword ptr [eax + ecx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + ecx + 0x8u)));
L_004c376d:  // fstp dword ptr [eax + ecx + 8]
    F32((uint32_t)(eax + ecx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004c3771:  // mov ecx, dword ptr [edi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004c3777:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004c3778:  // add eax, 0x28
    t0 = ladd<32>(eax, 0x28u, f);
    eax = (uint32_t)(t0);
L_004c377b:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_004c377d:  // jl 0x4c371d
    if ((f.sf != f.of)) goto L_004c371d;
L_004c377f:  // mov eax, dword ptr [ebx + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_004c3785:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004c3787:  // je 0x4c4080
    if (f.zf) goto L_004c4080;
L_004c378d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004c378e:  // jne 0x4c40d7
    if (!f.zf) goto L_004c40d7;
L_004c3794:  // fld dword ptr [edi + 0x74]
    lpush(x, (long double)F32((uint32_t)(edi + 0x74u)));
L_004c3797:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_004c379d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c379f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c37a2:  // jne 0x4c40d7
    if (!f.zf) goto L_004c40d7;
L_004c37a8:  // fld dword ptr [edi + 0x60]
    lpush(x, (long double)F32((uint32_t)(edi + 0x60u)));
L_004c37ab:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_004c37b1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c37b3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c37b6:  // jne 0x4c37cc
    if (!f.zf) goto L_004c37cc;
L_004c37b8:  // fild dword ptr [ebx + 0x9c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x9cu)));
L_004c37be:  // fcomp dword ptr [edi + 0x60]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0x60u)));
    lpop(x);
L_004c37c1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c37c3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c37c6:  // je 0x4c40d7
    if (f.zf) goto L_004c40d7;
L_004c37cc:  // mov eax, dword ptr [edi + 0x58]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x58u)));
L_004c37cf:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004c37d1:  // je 0x4c40d7
    if (f.zf) goto L_004c40d7;
L_004c37d7:  // lea ecx, [edi + 0x38]
    ecx = (uint32_t)((uint32_t)(edi + 0x38u));
L_004c37da:  // mov edx, dword ptr [edi + 0x38]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x38u)));
L_004c37dd:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004c37e1:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004c37e4:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004c37e8:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004c37eb:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004c37ef:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004c37f2:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004c37f6:  // mov ecx, dword ptr [eax + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xa0u)));
L_004c37fc:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004c37fe:  // je 0x4c3877
    if (f.zf) goto L_004c3877;
L_004c3800:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004c3804:  // fmul dword ptr [eax + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x18u)));
L_004c3807:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004c380b:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_004c380e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3810:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004c3814:  // fmul dword ptr [eax + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x10u)));
L_004c3817:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3819:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004c381d:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004c3821:  // fmul dword ptr [eax + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x28u)));
L_004c3824:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004c3828:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_004c382b:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004c382f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3831:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004c3835:  // fmul dword ptr [eax + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x20u)));
L_004c3838:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c383a:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_004c383e:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004c3842:  // fmul dword ptr [eax + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x38u)));
L_004c3845:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004c3849:  // fmul dword ptr [eax + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x34u)));
L_004c384c:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004c3850:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3852:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004c3856:  // fmul dword ptr [eax + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x30u)));
L_004c3859:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004c385d:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_004c3861:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004c3865:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3867:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004c386b:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004c386f:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004c3873:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004c3877:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004c387b:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004c387d:  // mov ecx, dword ptr [edi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004c3883:  // lea edx, [ecx - 2]
    edx = (uint32_t)((uint32_t)(ecx + 0xfffffffeu));
L_004c3886:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004c388a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004c388e:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004c3891:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004c3895:  // mov edx, dword ptr [edi + 0x88]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x88u)));
L_004c389b:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004c389f:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004c38a3:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004c38a6:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004c38aa:  // fld dword ptr [eax + 0x90]
    lpush(x, (long double)F32((uint32_t)(eax + 0x90u)));
L_004c38b0:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_004c38b4:  // fld dword ptr [eax + 0x94]
    lpush(x, (long double)F32((uint32_t)(eax + 0x94u)));
L_004c38ba:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004c38be:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004c38c5:  // fld dword ptr [eax + 0x98]
    lpush(x, (long double)F32((uint32_t)(eax + 0x98u)));
L_004c38cb:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_004c38cf:  // cmp dword ptr [ebx + 0xa8], esi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xa8u)), esi, f);
L_004c38d5:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_004c38dc:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004c38e0:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004c38e4:  // fdiv dword ptr [esp + 0x34]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x34u)));
L_004c38e8:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004c38ec:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004c38f3:  // fdiv dword ptr [esp + 0x34]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x34u)));
L_004c38f7:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_004c38fb:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004c3902:  // fdiv dword ptr [esp + 0x34]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x34u)));
L_004c3906:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004c390a:  // je 0x4c3ad0
    if (f.zf) goto L_004c3ad0;
L_004c3910:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004c3916:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004c391a:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_004c3920:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_004c3928:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c392a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c392e:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004c3932:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_004c3938:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004c393c:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_004c3940:  // fsubr st(1)
    ST(0) = (ST(1)) - (ST(0));
L_004c3942:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004c3946:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004c394a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c394c:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c3950:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c3954:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c3958:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c395c:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_004c3960:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004c3964:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3966:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004c396a:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004c396e:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_004c3972:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004c3976:  // mov dword ptr [esp + 0x5c], eax
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(eax);
L_004c397a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c397c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004c397e:  // fcom dword ptr [0x5d8570]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8570u)));
L_004c3984:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c3986:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c3989:  // jne 0x4c39ad
    if (!f.zf) goto L_004c39ad;
L_004c398b:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c398f:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c3991:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c3995:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004c3999:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c399b:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004c399f:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004c39a3:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c39a5:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004c39a9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c39ab:  // jmp 0x4c39e7
    goto L_004c39e7;
L_004c39ad:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_004c39b5:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004c39b9:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_004c39c1:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_004c39c5:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004c39c9:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_004c39d1:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_004c39d5:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004c39d9:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_004c39dd:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004c39e1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c39e3:  // mov dword ptr [esp + 0x5c], eax
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(eax);
L_004c39e7:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004c39eb:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_004c39ef:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004c39f3:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_004c39f7:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004c39f9:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004c39fd:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004c3a01:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004c3a05:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004c3a09:  // fmul dword ptr [esp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x60u)));
L_004c3a0d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c3a11:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004c3a15:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004c3a17:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004c3a1b:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004c3a1f:  // fmul dword ptr [esp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x60u)));
L_004c3a23:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004c3a27:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004c3a2b:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c3a2f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004c3a33:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004c3a35:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004c3a39:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004c3a3d:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c3a41:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004c3a45:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c3a49:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004c3a4d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3a4f:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004c3a53:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c3a57:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004c3a5b:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004c3a5f:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004c3a63:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c3a65:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004c3a67:  // fcom dword ptr [0x5d8570]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8570u)));
L_004c3a6d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c3a6f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c3a72:  // jne 0x4c3a96
    if (!f.zf) goto L_004c3a96;
L_004c3a74:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004c3a78:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c3a7a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c3a7e:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004c3a82:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c3a84:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004c3a88:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c3a8c:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c3a8e:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c3a92:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c3a94:  // jmp 0x4c3ad0
    goto L_004c3ad0;
L_004c3a96:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004c3a9e:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c3aa2:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_004c3aaa:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004c3aae:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c3ab2:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004c3aba:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004c3abe:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004c3ac2:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004c3ac6:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004c3aca:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c3acc:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004c3ad0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c3ad2:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004c3ad4:  // mov word ptr [edi + 0x7e], si
    M16((uint32_t)(edi + 0x7eu)) = (uint16_t)((esi & 0xffffu));
L_004c3ad8:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_004c3adc:  // jle 0x4c4071
    if ((f.zf || f.sf != f.of)) goto L_004c4071;
L_004c3ae2:  // add edx, 0x20
    t0 = ladd<32>(edx, 0x20u, f);
    edx = (uint32_t)(t0);
L_004c3ae5:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_004c3ae9:  // jmp 0x4c3aef
    goto L_004c3aef;
L_004c3aeb:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004c3aef:  // mov edx, dword ptr [ebx + 0xa8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004c3af5:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004c3af7:  // je 0x4c3d58
    if (f.zf) goto L_004c3d58;
L_004c3afd:  // fild dword ptr [esp + 0x4c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4cu)));
L_004c3b01:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004c3b02:  // mov esi, dword ptr [ebx + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004c3b08:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004c3b0c:  // fidiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004c3b10:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c3b12:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c3b16:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c3b1a:  // jne 0x4c3b2b
    if (!f.zf) goto L_004c3b2b;
L_004c3b1c:  // mov ecx, dword ptr [ebx + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_004c3b22:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_004c3b26:  // jmp 0x4c3bd0
    goto L_004c3bd0;
L_004c3b2b:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004c3b31:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c3b33:  // jne 0x4c3b54
    if (!f.zf) goto L_004c3b54;
L_004c3b35:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c3b3b:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c3b3e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c3b3f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3b40:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c3b43:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3b44:  // lea edx, [esi + 0x6c]
    edx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c3b47:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3b48:  // lea eax, [esi + 0x64]
    eax = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c3b4b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3b4c:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004c3b4f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3b50:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c3b51:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c3b52:  // jmp 0x4c3bbe
    goto L_004c3bbe;
L_004c3b54:  // mov ecx, dword ptr [0x9c6400]
    ecx = (uint32_t)(M32((uint32_t)(0x9c6400u)));
L_004c3b5a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c3b5b:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004c3b5d:  // mov dword ptr [esp + 0x74], ecx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ecx);
L_004c3b61:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3b62:  // lea ecx, [esi + 0x88]
    ecx = (uint32_t)((uint32_t)(esi + 0x88u));
L_004c3b68:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3b6du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3b6d:  // mov eax, dword ptr [esi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c3b73:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004c3b77:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c3b79:  // je 0x4c3b8d
    if (f.zf) goto L_004c3b8d;
L_004c3b7b:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004c3b7d:  // je 0x4c3b8d
    if (f.zf) goto L_004c3b8d;
L_004c3b7f:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004c3b83:  // fsub dword ptr [edi + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x84u)));
L_004c3b89:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004c3b8d:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c3b93:  // mov ecx, dword ptr [esi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c3b96:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004c3b9a:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004c3b9e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c3b9f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3ba0:  // lea edx, [esi + 0x74]
    edx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c3ba3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3ba4:  // lea eax, [esi + 0x6c]
    eax = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c3ba7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3ba8:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c3bab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3bac:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004c3baf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3bb0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c3bb1:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3bb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3bb6:  // fdiv dword ptr [esp + 0x64]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x64u)));
L_004c3bba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3bbb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3bbe:  // call 0x4c0c70
    t0 = 0x004c0c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3bc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3bc3:  // fmul dword ptr [ebx + 0xac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0xacu)));
L_004c3bc9:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004c3bcc:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004c3bd0:  // mov esi, dword ptr [ebx + 0xb8]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xb8u)));
L_004c3bd6:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c3bd8:  // jne 0x4c3be5
    if (!f.zf) goto L_004c3be5;
L_004c3bda:  // fld dword ptr [ebx + 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0xb4u)));
L_004c3be0:  // jmp 0x4c3c86
    goto L_004c3c86;
L_004c3be5:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004c3beb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c3bed:  // jne 0x4c3c0e
    if (!f.zf) goto L_004c3c0e;
L_004c3bef:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c3bf5:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c3bf8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c3bf9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3bfa:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c3bfd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3bfe:  // lea edx, [esi + 0x6c]
    edx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c3c01:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3c02:  // lea eax, [esi + 0x64]
    eax = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c3c05:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3c06:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004c3c09:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3c0a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c3c0b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c3c0c:  // jmp 0x4c3c78
    goto L_004c3c78;
L_004c3c0e:  // mov ecx, dword ptr [0x9c6400]
    ecx = (uint32_t)(M32((uint32_t)(0x9c6400u)));
L_004c3c14:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c3c15:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004c3c17:  // mov dword ptr [esp + 0x78], ecx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ecx);
L_004c3c1b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3c1c:  // lea ecx, [esi + 0x88]
    ecx = (uint32_t)((uint32_t)(esi + 0x88u));
L_004c3c22:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3c27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3c27:  // mov eax, dword ptr [esi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c3c2d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c3c31:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c3c33:  // je 0x4c3c47
    if (f.zf) goto L_004c3c47;
L_004c3c35:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004c3c37:  // je 0x4c3c47
    if (f.zf) goto L_004c3c47;
L_004c3c39:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004c3c3d:  // fsub dword ptr [edi + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x84u)));
L_004c3c43:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004c3c47:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c3c4d:  // mov ecx, dword ptr [esi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c3c50:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004c3c54:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004c3c58:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c3c59:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3c5a:  // lea edx, [esi + 0x74]
    edx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c3c5d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3c5e:  // lea eax, [esi + 0x6c]
    eax = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c3c61:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3c62:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c3c65:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3c66:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004c3c69:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3c6a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c3c6b:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3c70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3c70:  // fdiv dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c3c74:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3c75:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3c78:  // call 0x4c0c70
    t0 = 0x004c0c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3c7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3c7d:  // fmul dword ptr [ebx + 0xb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0xb4u)));
L_004c3c83:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004c3c86:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c3c88:  // fsin 
    ST(0) = lfsin(ST(0));
L_004c3c8a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3c8b:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004c3c8f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c3c91:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004c3c95:  // fstp dword ptr [esp + 0xd4]
    F32((uint32_t)(esp + 0xd4u)) = lf32(ST(0));
    lpop(x);
L_004c3c9c:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c3ca0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c3ca2:  // fstp dword ptr [esp + 0xd8]
    F32((uint32_t)(esp + 0xd8u)) = lf32(ST(0));
    lpop(x);
L_004c3ca9:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004c3cad:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c3caf:  // fstp dword ptr [esp + 0xdc]
    F32((uint32_t)(esp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_004c3cb6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c3cb8:  // fcos 
    ST(0) = lfcos(ST(0));
L_004c3cba:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004c3cbe:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004c3cc2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c3cc4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3cc7:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004c3ccb:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c3ccd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3cce:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3cd1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3cd2:  // lea ecx, [esp + 0xfc]
    ecx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_004c3cd9:  // fmul dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x5cu)));
L_004c3cdd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3ce0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3ce5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3ce5:  // fld dword ptr [esp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf8u)));
L_004c3cec:  // fadd dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004c3cf3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3cf4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3cf7:  // fld dword ptr [esp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf8u)));
L_004c3cfe:  // fadd dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004c3d05:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3d06:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3d09:  // fld dword ptr [esp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf8u)));
L_004c3d10:  // fadd dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004c3d17:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3d18:  // lea ecx, [esp + 0xec]
    ecx = (uint32_t)((uint32_t)(esp + 0xecu));
L_004c3d1f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3d22:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3d27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3d27:  // mov edx, dword ptr [esp + 0xe0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xe0u)));
L_004c3d2e:  // mov eax, dword ptr [esp + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xe4u)));
L_004c3d35:  // mov ecx, dword ptr [esp + 0xe8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_004c3d3c:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004c3d40:  // mov edx, dword ptr [esp + 0xec]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004c3d47:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004c3d4b:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004c3d4f:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004c3d53:  // jmp 0x4c3e5e
    goto L_004c3e5e;
L_004c3d58:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004c3d5b:  // je 0x4c3e37
    if (f.zf) goto L_004c3e37;
L_004c3d61:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004c3d62:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004c3d64:  // je 0x4c3e37
    if (f.zf) goto L_004c3e37;
L_004c3d6a:  // mov eax, dword ptr [ebx + 0x78]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x78u)));
L_004c3d6d:  // mov dword ptr [esp + 0x78], eax
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(eax);
L_004c3d71:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3d76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3d76:  // mov ecx, dword ptr [ebx + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x78u)));
L_004c3d79:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c3d7e:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c3d83:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_004c3d8a:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_004c3d91:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3d96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3d96:  // mov edx, dword ptr [ebx + 0x78]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x78u)));
L_004c3d99:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c3d9e:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c3da3:  // mov dword ptr [esp + 0x9c], edx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edx);
L_004c3daa:  // mov dword ptr [esp + 0x7c], eax
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(eax);
L_004c3dae:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3db3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3db3:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c3db8:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c3dbd:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004c3dc1:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004c3dc5:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_004c3dcc:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c3dd2:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_004c3dd9:  // fild dword ptr [esp + 0x7c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x7cu)));
L_004c3ddd:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_004c3de4:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004c3de8:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_004c3def:  // fmul dword ptr [esp + 0x98]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x98u)));
L_004c3df6:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004c3dfa:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c3e00:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_004c3e07:  // fild dword ptr [esp + 0x80]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x80u)));
L_004c3e0e:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_004c3e15:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004c3e19:  // fmul dword ptr [esp + 0x78]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x78u)));
L_004c3e1d:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c3e23:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_004c3e2a:  // mov edx, dword ptr [esp + 0xa8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_004c3e31:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004c3e35:  // jmp 0x4c3e5e
    goto L_004c3e5e;
L_004c3e37:  // mov ecx, dword ptr [0x829e40]
    ecx = (uint32_t)(M32((uint32_t)(0x829e40u)));
L_004c3e3d:  // mov edx, dword ptr [0x829e44]
    edx = (uint32_t)(M32((uint32_t)(0x829e44u)));
L_004c3e43:  // mov eax, dword ptr [0x829e48]
    eax = (uint32_t)(M32((uint32_t)(0x829e48u)));
L_004c3e48:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004c3e4c:  // mov ecx, dword ptr [0x829e4c]
    ecx = (uint32_t)(M32((uint32_t)(0x829e4cu)));
L_004c3e52:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004c3e56:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004c3e5a:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004c3e5e:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004c3e62:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004c3e66:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004c3e6a:  // lea edx, [eax - 0x20]
    edx = (uint32_t)((uint32_t)(eax + 0xffffffe0u));
L_004c3e6d:  // mov dword ptr [eax + 4], 1
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x1u);
L_004c3e74:  // fst dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
L_004c3e7b:  // fstp dword ptr [esp + 0xc0]
    F32((uint32_t)(esp + 0xc0u)) = lf32(ST(0));
    lpop(x);
L_004c3e82:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004c3e86:  // fadd dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004c3e8a:  // mov ecx, dword ptr [esp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_004c3e91:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_004c3e93:  // fst dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
L_004c3e97:  // fstp dword ptr [esp + 0xc4]
    F32((uint32_t)(esp + 0xc4u)) = lf32(ST(0));
    lpop(x);
L_004c3e9e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004c3ea2:  // fadd dword ptr [esp + 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x40u)));
L_004c3ea6:  // mov ecx, dword ptr [esp + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_004c3ead:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004c3eb0:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004c3eb4:  // fstp dword ptr [esp + 0xc8]
    F32((uint32_t)(esp + 0xc8u)) = lf32(ST(0));
    lpop(x);
L_004c3ebb:  // mov ecx, dword ptr [esp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_004c3ec2:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_004c3ec5:  // mov ecx, dword ptr [esp + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_004c3ecc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3ecd:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004c3ed0:  // mov edx, dword ptr [edi + 0x74]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x74u)));
L_004c3ed3:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_004c3ed5:  // fld dword ptr [ebx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x7cu)));
L_004c3ed8:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004c3edc:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c3ede:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3ee1:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004c3ee5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c3ee7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3ee8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3eeb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3eec:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_004c3ef3:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004c3ef7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c3efa:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3effu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3eff:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004c3f03:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004c3f0a:  // add eax, -0x10
    t0 = ladd<32>(eax, 0xfffffff0u, f);
    eax = (uint32_t)(t0);
L_004c3f0d:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004c3f0f:  // mov edx, dword ptr [esp + 0x88]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004c3f16:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004c3f19:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004c3f20:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004c3f23:  // mov edx, dword ptr [esp + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004c3f2a:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004c3f2d:  // mov eax, dword ptr [esp + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004c3f34:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c3f36:  // je 0x4c4027
    if (f.zf) goto L_004c4027;
L_004c3f3c:  // mov esi, dword ptr [ebx + 0x94]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_004c3f42:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c3f44:  // je 0x4c4027
    if (f.zf) goto L_004c4027;
L_004c3f4a:  // mov ebp, dword ptr [esp + 0x4c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004c3f4e:  // cmp ebp, 1
    t0 = lsub<32>(ebp, 0x1u, f);
L_004c3f51:  // jle 0x4c402b
    if ((f.zf || f.sf != f.of)) goto L_004c402b;
L_004c3f57:  // mov eax, dword ptr [edi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004c3f5d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004c3f5e:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004c3f60:  // jge 0x4c402b
    if ((f.sf == f.of)) goto L_004c402b;
L_004c3f66:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c3f68:  // je 0x4c402b
    if (f.zf) goto L_004c402b;
L_004c3f6e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004c3f70:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c3f72:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3f75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3f75:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004c3f78:  // jne 0x4c3f8c
    if (!f.zf) goto L_004c3f8c;
L_004c3f7a:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004c3f7c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c3f7e:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3f81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3f81:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c3f83:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c3f85:  // jne 0x4c3f6e
    if (!f.zf) goto L_004c3f6e;
L_004c3f87:  // jmp 0x4c402b
    goto L_004c402b;
L_004c3f8c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c3f8e:  // je 0x4c402b
    if (f.zf) goto L_004c402b;
L_004c3f94:  // mov eax, dword ptr [edi + 0x58]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x58u)));
L_004c3f97:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c3f99:  // je 0x4c3faf
    if (f.zf) goto L_004c3faf;
L_004c3f9b:  // mov cx, word ptr [eax + 0xb6]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + 0xb6u))) & 0xffffu);
L_004c3fa2:  // or cx, 1
    t0 = llog<16>((ecx & 0xffffu) | 0x1u, f);
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_004c3fa6:  // je 0x4c3faf
    if (f.zf) goto L_004c3faf;
L_004c3fa8:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c3fad:  // jmp 0x4c3fb1
    goto L_004c3fb1;
L_004c3faf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c3fb1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3fb2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c3fb3:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004c3fb8:  // call 0x4cb5c0
    t0 = 0x004cb5c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c3fbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c3fbd:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c3fbf:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c3fc1:  // je 0x4c402b
    if (f.zf) goto L_004c402b;
L_004c3fc3:  // mov edx, dword ptr [esp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004c3fca:  // mov eax, dword ptr [esp + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004c3fce:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c3fd2:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_004c3fd9:  // mov dword ptr [esp + 0xb4], eax
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(eax);
L_004c3fe0:  // mov eax, dword ptr [esp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_004c3fe7:  // lea edx, [esi + 0x38]
    edx = (uint32_t)((uint32_t)(esi + 0x38u));
L_004c3fea:  // mov dword ptr [esp + 0xb8], ecx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(ecx);
L_004c3ff1:  // mov ecx, dword ptr [esp + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_004c3ff8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c3ff9:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004c3ffb:  // mov eax, dword ptr [esp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004c4002:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004c4005:  // mov ecx, dword ptr [esp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_004c400c:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004c400f:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004c4012:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004c4017:  // call 0x4cb920
    t0 = 0x004cb920u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c401cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c401c:  // mov ecx, dword ptr [esi + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x5cu)));
L_004c401f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c4020:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004c4022:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c4025u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c4025:  // jmp 0x4c402b
    goto L_004c402b;
L_004c4027:  // mov ebp, dword ptr [esp + 0x4c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004c402b:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004c402d:  // je 0x4c4053
    if (f.zf) goto L_004c4053;
L_004c402f:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004c4033:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004c4037:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004c403b:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004c403f:  // fadd dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004c4043:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004c4047:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004c404b:  // fadd dword ptr [esp + 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x40u)));
L_004c404f:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004c4053:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004c4057:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004c4058:  // add ecx, 0x28
    t0 = ladd<32>(ecx, 0x28u, f);
    ecx = (uint32_t)(t0);
L_004c405b:  // mov dword ptr [esp + 0x4c], ebp
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ebp);
L_004c405f:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004c4063:  // mov ecx, dword ptr [edi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004c4069:  // cmp ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
L_004c406b:  // jl 0x4c3aeb
    if ((f.sf != f.of)) goto L_004c3aeb;
L_004c4071:  // mov ax, word ptr [edi + 0x80]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edi + 0x80u))) & 0xffffu);
L_004c4078:  // dec ax
    t0 = ldec<16>((eax & 0xffffu), f);
    eax = (eax & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_004c407a:  // mov word ptr [edi + 0x7e], ax
    M16((uint32_t)(edi + 0x7eu)) = (uint16_t)((eax & 0xffffu));
L_004c407e:  // jmp 0x4c40d7
    goto L_004c40d7;
L_004c4080:  // cmp dword ptr [0x9c63fc], esi
    t0 = lsub<32>(M32((uint32_t)(0x9c63fcu)), esi, f);
L_004c4086:  // je 0x4c40d7
    if (f.zf) goto L_004c40d7;
L_004c4088:  // fld dword ptr [edi + 0x74]
    lpush(x, (long double)F32((uint32_t)(edi + 0x74u)));
L_004c408b:  // fst dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
L_004c408f:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_004c4095:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c4097:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c409a:  // jne 0x4c40cf
    if (!f.zf) goto L_004c40cf;
L_004c409c:  // fld dword ptr [edi + 0x60]
    lpush(x, (long double)F32((uint32_t)(edi + 0x60u)));
L_004c409f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004c40a5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c40a7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c40aa:  // jne 0x4c40bc
    if (!f.zf) goto L_004c40bc;
L_004c40ac:  // fild dword ptr [edi + 0x80]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edi + 0x80u)));
L_004c40b2:  // fcomp dword ptr [edi + 0x60]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0x60u)));
    lpop(x);
L_004c40b5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c40b7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c40ba:  // je 0x4c40cf
    if (f.zf) goto L_004c40cf;
L_004c40bc:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004c40c0:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004c40c2:  // lea ecx, [edi + 0x38]
    ecx = (uint32_t)((uint32_t)(edi + 0x38u));
L_004c40c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c40c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c40c7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c40c8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004c40ca:  // call dword ptr [edx + 0x4c]
    t0 = M32((uint32_t)(edx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c40cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c40cd:  // jmp 0x4c40d7
    goto L_004c40d7;
L_004c40cf:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004c40d1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c40d2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004c40d4:  // call dword ptr [edx + 0x50]
    t0 = M32((uint32_t)(edx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c40d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c40d7:  // mov ecx, dword ptr [ebx + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_004c40dd:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c40e2:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004c40e4:  // jne 0x4c40ed
    if (!f.zf) goto L_004c40ed;
L_004c40e6:  // mov ecx, dword ptr [edi + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x58u)));
L_004c40e9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c40eb:  // je 0x4c40ef
    if (f.zf) goto L_004c40ef;
L_004c40ed:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c40ef:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c40f0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c40f1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004c40f2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c40f3:  // add esp, 0xf0
    t0 = ladd<32>(esp, 0xf0u, f);
    esp = (uint32_t)(t0);
L_004c40f9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004c36b0, 004c36b0)
