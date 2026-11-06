// lifted from 004fa4b0 (vslot77, 847 bytes, 284 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fa4b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fa4b0;
L_004fa4b0:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004fa4b2:  // sub esp, 0x38
    t0 = lsub<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_004fa4b5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fa4b6:  // mov esi, dword ptr [esp + 0x40]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004fa4ba:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fa4bb:  // mov edi, dword ptr [esp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004fa4bf:  // call dword ptr [eax + 0x60]
    t0 = M32((uint32_t)(eax + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa4c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa4c2:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa4c4:  // fcomp dword ptr [edi]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi)));
    lpop(x);
L_004fa4c6:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004fa4ca:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa4cc:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fa4cf:  // jne 0x4fa5bb
    if (!f.zf) goto L_004fa5bb;
L_004fa4d5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fa4d7:  // fmul dword ptr [ecx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx)));
L_004fa4d9:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004fa4dd:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004fa4df:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa4e1:  // fcom dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
L_004fa4e7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa4e9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa4ec:  // je 0x4fa507
    if (f.zf) goto L_004fa507;
L_004fa4ee:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fa4f0:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004fa4f6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa4f8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa4fb:  // jne 0x4fa507
    if (!f.zf) goto L_004fa507;
L_004fa4fd:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fa4ff:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa505:  // jmp 0x4fa52b
    goto L_004fa52b;
L_004fa507:  // fcom dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
L_004fa50d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa50f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa512:  // jne 0x4fa52d
    if (!f.zf) goto L_004fa52d;
L_004fa514:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fa516:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004fa51c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa51e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa521:  // je 0x4fa52d
    if (f.zf) goto L_004fa52d;
L_004fa523:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fa525:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa52b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fa52d:  // fsubrp st(1)
    ST(1) = (ST(0)) - (ST(1));
    lpop(x);
L_004fa52f:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004fa531:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004fa533:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004fa539:  // fcom dword ptr [esp + 0x44]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x44u)));
L_004fa53d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa53f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa542:  // jne 0x4fa54a
    if (!f.zf) goto L_004fa54a;
L_004fa544:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa546:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004fa54a:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa54c:  // fcomp dword ptr [edi]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi)));
    lpop(x);
L_004fa54e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa550:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa553:  // je 0x4fa56c
    if (f.zf) goto L_004fa56c;
L_004fa555:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004fa557:  // fsub dword ptr [esi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi)));
L_004fa559:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004fa55f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa561:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa564:  // je 0x4fa583
    if (f.zf) goto L_004fa583;
L_004fa566:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_004fa568:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004fa56a:  // jmp 0x4fa58b
    goto L_004fa58b;
L_004fa56c:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa56e:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004fa570:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004fa576:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa578:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa57b:  // jne 0x4fa583
    if (!f.zf) goto L_004fa583;
L_004fa57d:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_004fa57f:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004fa581:  // jmp 0x4fa58b
    goto L_004fa58b;
L_004fa583:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa585:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004fa587:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004fa589:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa58b:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa58d:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004fa593:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa595:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa597:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa59a:  // jne 0x4fa5a4
    if (!f.zf) goto L_004fa5a4;
L_004fa59c:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa5a2:  // jmp 0x4fa5b9
    goto L_004fa5b9;
L_004fa5a4:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_004fa5aa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa5ac:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa5af:  // je 0x4fa5bb
    if (f.zf) goto L_004fa5bb;
L_004fa5b1:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa5b3:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa5b9:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004fa5bb:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004fa5be:  // fcomp dword ptr [edi + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0x4u)));
    lpop(x);
L_004fa5c1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa5c3:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fa5c6:  // jne 0x4fa613
    if (!f.zf) goto L_004fa613;
L_004fa5c8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fa5ca:  // fmul dword ptr [ecx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x4u)));
L_004fa5cd:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004fa5d1:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004fa5d4:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004fa5d7:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004fa5d9:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004fa5db:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004fa5dd:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004fa5e3:  // fcom dword ptr [esp + 0x44]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x44u)));
L_004fa5e7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa5e9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa5ec:  // jne 0x4fa5f4
    if (!f.zf) goto L_004fa5f4;
L_004fa5ee:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa5f0:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004fa5f4:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004fa5f7:  // fcomp dword ptr [edi + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0x4u)));
    lpop(x);
L_004fa5fa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa5fc:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa5ff:  // jne 0x4fa60d
    if (!f.zf) goto L_004fa60d;
L_004fa601:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004fa604:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004fa606:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004fa609:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa60b:  // jmp 0x4fa613
    goto L_004fa613;
L_004fa60d:  // fadd dword ptr [esi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4u)));
L_004fa610:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004fa613:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa616:  // fcomp dword ptr [edi + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0x8u)));
    lpop(x);
L_004fa619:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa61b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fa61e:  // jne 0x4fa722
    if (!f.zf) goto L_004fa722;
L_004fa624:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fa626:  // fmul dword ptr [ecx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x8u)));
L_004fa629:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004fa62d:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004fa630:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa633:  // fcom dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
L_004fa639:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa63b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa63e:  // je 0x4fa659
    if (f.zf) goto L_004fa659;
L_004fa640:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fa642:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004fa648:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa64a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa64d:  // jne 0x4fa659
    if (!f.zf) goto L_004fa659;
L_004fa64f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fa651:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa657:  // jmp 0x4fa67d
    goto L_004fa67d;
L_004fa659:  // fcom dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
L_004fa65f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa661:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa664:  // jne 0x4fa67f
    if (!f.zf) goto L_004fa67f;
L_004fa666:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fa668:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004fa66e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa670:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa673:  // je 0x4fa67f
    if (f.zf) goto L_004fa67f;
L_004fa675:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fa677:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa67d:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fa67f:  // fsubrp st(1)
    ST(1) = (ST(0)) - (ST(1));
    lpop(x);
L_004fa681:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004fa683:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004fa685:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004fa68b:  // fcom dword ptr [esp + 0x44]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x44u)));
L_004fa68f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa691:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa694:  // jne 0x4fa69c
    if (!f.zf) goto L_004fa69c;
L_004fa696:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa698:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004fa69c:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa69f:  // fcomp dword ptr [edi + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0x8u)));
    lpop(x);
L_004fa6a2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa6a4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa6a7:  // je 0x4fa6c4
    if (f.zf) goto L_004fa6c4;
L_004fa6a9:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004fa6ac:  // fsub dword ptr [esi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x8u)));
L_004fa6af:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004fa6b5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa6b7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa6ba:  // je 0x4fa6df
    if (f.zf) goto L_004fa6df;
L_004fa6bc:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_004fa6bf:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004fa6c2:  // jmp 0x4fa6e9
    goto L_004fa6e9;
L_004fa6c4:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa6c7:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_004fa6ca:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004fa6d0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa6d2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa6d5:  // jne 0x4fa6df
    if (!f.zf) goto L_004fa6df;
L_004fa6d7:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_004fa6da:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004fa6dd:  // jmp 0x4fa6e9
    goto L_004fa6e9;
L_004fa6df:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa6e2:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004fa6e4:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004fa6e7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa6e9:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa6ec:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004fa6f2:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa6f5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa6f7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa6fa:  // jne 0x4fa707
    if (!f.zf) goto L_004fa707;
L_004fa6fc:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa702:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004fa705:  // jmp 0x4fa724
    goto L_004fa724;
L_004fa707:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_004fa70d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa70f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa712:  // je 0x4fa724
    if (f.zf) goto L_004fa724;
L_004fa714:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa717:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fa71d:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004fa720:  // jmp 0x4fa724
    goto L_004fa724;
L_004fa722:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa724:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fa727:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004fa729:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fa72b:  // fcos 
    ST(0) = lfcos(ST(0));
L_004fa72d:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004fa730:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_004fa734:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004fa738:  // fsin 
    ST(0) = lfsin(ST(0));
L_004fa73a:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004fa73e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fa740:  // fcos 
    ST(0) = lfcos(ST(0));
L_004fa742:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004fa746:  // fsin 
    ST(0) = lfsin(ST(0));
L_004fa748:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004fa74c:  // fcos 
    ST(0) = lfcos(ST(0));
L_004fa74e:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004fa752:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004fa756:  // fsin 
    ST(0) = lfsin(ST(0));
L_004fa758:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fa75a:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004fa75c:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004fa760:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004fa764:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fa766:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004fa76a:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004fa76c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004fa770:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004fa774:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004fa778:  // fchs 
    ST(0) = -ST(0);
L_004fa77a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004fa77e:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fa780:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004fa784:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_004fa788:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004fa78c:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004fa78e:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004fa792:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004fa794:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004fa798:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004fa79c:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004fa7a0:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004fa7a4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004fa7a6:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004fa7aa:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004fa7ae:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004fa7b2:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004fa7b6:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fa7b8:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004fa7bc:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004fa7c0:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004fa7c4:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004fa7c6:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004fa7ca:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004fa7ce:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004fa7d0:  // fchs 
    ST(0) = -ST(0);
L_004fa7d2:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004fa7d6:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004fa7da:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fa7dc:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004fa7e0:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004fa7e4:  // mov edi, dword ptr [esp + 0x50]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004fa7e8:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004fa7ed:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004fa7f1:  // lea esi, [esp + 0x10]
    esi = (uint32_t)((uint32_t)(esp + 0x10u));
L_004fa7f5:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004fa7f7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fa7f8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fa7f9:  // add esp, 0x38
    t0 = ladd<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_004fa7fc:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004fa4b0, 004fa4b0)
