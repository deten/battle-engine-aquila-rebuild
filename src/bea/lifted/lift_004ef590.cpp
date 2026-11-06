// lifted from 004ef590 (vslot3, 1042 bytes, 262 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ef590(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ef590;
L_004ef590:  // sub esp, 0x6c
    t0 = lsub<32>(esp, 0x6cu, f);
    esp = (uint32_t)(t0);
L_004ef593:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ef594:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ef595:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004ef597:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ef599:  // mov ecx, dword ptr [edi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ef59c:  // test byte ptr [ecx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x2cu)) & 0x4u, f);
L_004ef5a0:  // jne 0x4ef98f
    if (!f.zf) goto L_004ef98f;
L_004ef5a6:  // mov eax, dword ptr [ecx + 0x114]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x114u)));
L_004ef5ac:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ef5ad:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004ef5b3:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004ef5b7:  // mov eax, dword ptr [ecx + 0x250]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x250u)));
L_004ef5bd:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004ef5c1:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_004ef5c4:  // mov dword ptr [esp + 0x28], ebx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebx);
L_004ef5c8:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_004ef5cc:  // mov dword ptr [esp + 0x30], ebx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebx);
L_004ef5d0:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_004ef5d4:  // ja 0x4ef7b4
    if ((!f.cf && !f.zf)) goto L_004ef7b4;
L_004ef5da:  // jmp dword ptr [eax*4 + 0x4ef9a4]
    t0 = M32((uint32_t)(eax * 4u + 0x4ef9a4u));
    switch (t0) {
    case 0x004ef5e1u: goto L_004ef5e1;
    case 0x004ef68eu: goto L_004ef68e;
    case 0x004ef730u: goto L_004ef730;
    case 0x004ef76fu: goto L_004ef76f;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004ef5e1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ef5e5:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004ef5eb:  // mov dword ptr [esp + 0x14], 0x3d490fdb
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3d490fdbu);
L_004ef5f3:  // fcomp dword ptr [ecx + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x24u)));
    lpop(x);
L_004ef5f6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef5f8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef5fb:  // je 0x4ef633
    if (f.zf) goto L_004ef633;
L_004ef5fd:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ef601:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ef609:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ef60d:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ef615:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ef619:  // mov dword ptr [esp + 0x20], 0x3b83126f
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3b83126fu);
L_004ef621:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004ef625:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ef629:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004ef62d:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004ef631:  // jmp 0x4ef667
    goto L_004ef667;
L_004ef633:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ef637:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ef63f:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ef643:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ef64b:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ef64f:  // mov dword ptr [esp + 0x20], 0x3a83126f
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3a83126fu);
L_004ef657:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004ef65b:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ef65f:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004ef663:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004ef667:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ef66b:  // fadd dword ptr [0x5db254]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db254u)));
L_004ef671:  // fcomp dword ptr [ecx + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x24u)));
    lpop(x);
L_004ef674:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef676:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef679:  // je 0x4ef7b8
    if (f.zf) goto L_004ef7b8;
L_004ef67f:  // mov dword ptr [ecx + 0x250], 0
    M32((uint32_t)(ecx + 0x250u)) = (uint32_t)(0x0u);
L_004ef689:  // jmp 0x4ef7b8
    goto L_004ef7b8;
L_004ef68e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ef692:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004ef698:  // mov dword ptr [esp + 0x14], 0xbd490fdb
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xbd490fdbu);
L_004ef6a0:  // fcomp dword ptr [ecx + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x24u)));
    lpop(x);
L_004ef6a3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef6a5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef6a8:  // je 0x4ef6e0
    if (f.zf) goto L_004ef6e0;
L_004ef6aa:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ef6ae:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ef6b6:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ef6ba:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ef6c2:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ef6c6:  // mov dword ptr [esp + 0x20], 0xbb83126f
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xbb83126fu);
L_004ef6ce:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004ef6d2:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ef6d6:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004ef6da:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004ef6de:  // jmp 0x4ef714
    goto L_004ef714;
L_004ef6e0:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ef6e4:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ef6ec:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ef6f0:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ef6f8:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ef6fc:  // mov dword ptr [esp + 0x20], 0xba83126f
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xba83126fu);
L_004ef704:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004ef708:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ef70c:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004ef710:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004ef714:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_004ef717:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_004ef71b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef71d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef720:  // je 0x4ef7b8
    if (f.zf) goto L_004ef7b8;
L_004ef726:  // call 0x4ef0f0
    t0 = 0x004ef0f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ef72bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ef72b:  // jmp 0x4ef7b8
    goto L_004ef7b8;
L_004ef730:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ef734:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004ef737:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ef73b:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ef743:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ef747:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ef74f:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ef753:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004ef757:  // fmul dword ptr [0x5df460]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df460u)));
L_004ef75d:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004ef761:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004ef765:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ef769:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004ef76d:  // jmp 0x4ef7b8
    goto L_004ef7b8;
L_004ef76f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ef773:  // fadd dword ptr [0x5db254]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db254u)));
L_004ef779:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ef77d:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ef785:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004ef78d:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ef791:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004ef794:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ef798:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004ef79c:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004ef7a0:  // fmul dword ptr [0x5df460]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df460u)));
L_004ef7a6:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004ef7aa:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ef7ae:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004ef7b2:  // jmp 0x4ef7b8
    goto L_004ef7b8;
L_004ef7b4:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004ef7b8:  // mov edx, dword ptr [edi + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x1cu)));
L_004ef7bb:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004ef7bd:  // je 0x4ef93e
    if (f.zf) goto L_004ef93e;
L_004ef7c3:  // mov ecx, dword ptr [edi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ef7c6:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004ef7ca:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004ef7cd:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004ef7d0:  // fld dword ptr [edi + 0xc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xcu)));
L_004ef7d3:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004ef7d6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ef7d8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ef7da:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004ef7dc:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ef7de:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ef7e0:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004ef7e4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ef7e6:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ef7e8:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_004ef7ee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef7f0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ef7f3:  // jne 0x4ef93a
    if (!f.zf) goto L_004ef93a;
L_004ef7f9:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004ef7fb:  // cmp edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
L_004ef7fe:  // fchs 
    ST(0) = -ST(0);
L_004ef800:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004ef804:  // jne 0x4ef84e
    if (!f.zf) goto L_004ef84e;
L_004ef806:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef80a:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004ef810:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_004ef814:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004ef81a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef81c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ef81f:  // jne 0x4ef82f
    if (!f.zf) goto L_004ef82f;
L_004ef821:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef825:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004ef82b:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004ef82f:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef833:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_004ef839:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef83b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef83e:  // je 0x4ef84e
    if (f.zf) goto L_004ef84e;
L_004ef840:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef844:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004ef84a:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004ef84e:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef852:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ef856:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004ef85c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef85e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef861:  // je 0x4ef882
    if (f.zf) goto L_004ef882;
L_004ef863:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef867:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004ef86d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef86f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ef872:  // jne 0x4ef882
    if (!f.zf) goto L_004ef882;
L_004ef874:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ef876:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef87a:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004ef880:  // jmp 0x4ef8b0
    goto L_004ef8b0;
L_004ef882:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ef886:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004ef88c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef88e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ef891:  // jne 0x4ef8b0
    if (!f.zf) goto L_004ef8b0;
L_004ef893:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef897:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004ef89d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef89f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef8a2:  // je 0x4ef8b0
    if (f.zf) goto L_004ef8b0;
L_004ef8a4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ef8a6:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ef8aa:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004ef8b0:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_004ef8b4:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004ef8b6:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_004ef8bc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ef8be:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ef8c1:  // je 0x4ef93e
    if (f.zf) goto L_004ef93e;
L_004ef8c3:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ef8c5:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ef8c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ef8c8:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_004ef8ce:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004ef8d2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ef8d4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ef8d6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ef8d7:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004ef8d9:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004ef8dd:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ef8e1:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ef8e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ef8e6:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004ef8ea:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ef8ee:  // mov ecx, dword ptr [edi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ef8f1:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004ef8f6:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004ef8fa:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ef8fe:  // mov dword ptr [ecx + 0x174], 0x3f800000
    M32((uint32_t)(ecx + 0x174u)) = (uint32_t)(0x3f800000u);
L_004ef908:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004ef90c:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004ef910:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ef914:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004ef918:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ef91c:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ef920:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004ef924:  // fadd dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004ef928:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004ef92c:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004ef930:  // fadd dword ptr [esp + 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x40u)));
L_004ef934:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004ef938:  // jmp 0x4ef93e
    goto L_004ef93e;
L_004ef93a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ef93c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ef93e:  // mov ecx, dword ptr [edi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ef941:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004ef945:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ef949:  // add ecx, 0x120
    t0 = ladd<32>(ecx, 0x120u, f);
    ecx = (uint32_t)(t0);
L_004ef94f:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004ef953:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_004ef95b:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ef95d:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ef961:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004ef965:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004ef968:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ef96b:  // mov eax, dword ptr [edi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ef96e:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004ef972:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004ef976:  // add eax, 0x14c
    t0 = ladd<32>(eax, 0x14cu, f);
    eax = (uint32_t)(t0);
L_004ef97b:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ef97d:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004ef97f:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004ef983:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004ef986:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004ef989:  // mov dword ptr [eax + 0xc], esi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(esi);
L_004ef98c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ef98d:  // jne 0x4ef99c
    if (!f.zf) goto L_004ef99c;
L_004ef98f:  // mov edx, dword ptr [edi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ef992:  // mov dword ptr [edx + 0x174], 0
    M32((uint32_t)(edx + 0x174u)) = (uint32_t)(0x0u);
L_004ef99c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ef99d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ef99e:  // add esp, 0x6c
    t0 = ladd<32>(esp, 0x6cu, f);
    esp = (uint32_t)(t0);
L_004ef9a1:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004ef590, 004ef590)
