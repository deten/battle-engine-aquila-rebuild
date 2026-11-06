// lifted from 00479630 (FUN_00479630, 311 bytes, 113 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00479630(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00479630;
L_00479630:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00479634:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_00479638:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047963b:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0047963d:  // fsub dword ptr [ecx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx)));
L_0047963f:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00479642:  // fsub dword ptr [ecx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x4u)));
L_00479645:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00479648:  // fsub dword ptr [ecx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x8u)));
L_0047964b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047964d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047964f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00479651:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00479653:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00479655:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00479657:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00479659:  // fld st(5)
    v0 = ST(5); lpush(x, v0);
L_0047965b:  // fmul st(6)
    ST(0) = (ST(0)) * (ST(6));
L_0047965d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047965f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00479661:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00479663:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00479665:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0047966b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047966d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00479670:  // jne 0x47968a
    if (!f.zf) goto L_0047968a;
L_00479672:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00479678:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047967a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047967c:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047967e:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00479680:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00479682:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00479684:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00479686:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00479688:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047968a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047968c:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0047968e:  // fchs 
    ST(0) = -ST(0);
L_00479690:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479694:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_00479697:  // fchs 
    ST(0) = -ST(0);
L_00479699:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0047969d:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_004796a0:  // fchs 
    ST(0) = -ST(0);
L_004796a2:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_004796a6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004796a8:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004796ac:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004796ae:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004796b0:  // fld dword ptr [esp]
    lpush(x, (long double)F32((uint32_t)(esp)));
L_004796b4:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004796b6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004796b8:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004796bc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004796be:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004796c0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004796c2:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004796c6:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004796ca:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004796ce:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004796d2:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004796d6:  // fmul dword ptr [esp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4u)));
L_004796da:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004796dc:  // fld dword ptr [esp]
    lpush(x, (long double)F32((uint32_t)(esp)));
L_004796e0:  // fmul dword ptr [esp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp)));
L_004796e4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004796e6:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004796ea:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004796ee:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004796f0:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004796f2:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004796f8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004796fa:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004796fd:  // je 0x47970b
    if (f.zf) goto L_0047970b;
L_004796ff:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00479701:  // fld dword ptr [0x5d8be0]
    lpush(x, (long double)F32((uint32_t)(0x5d8be0u)));
L_00479707:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047970a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0047970b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0047970d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00479711:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00479715:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_00479719:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0047971f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00479721:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00479724:  // je 0x479707
    if (f.zf) goto L_00479707;
L_00479726:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00479728:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047972c:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00479730:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00479736:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00479738:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047973b:  // jne 0x479701
    if (!f.zf) goto L_00479701;
L_0047973d:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_00479740:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_00479743:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_00479745:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00479747:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_00479749:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047974b:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0047974d:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_0047974f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00479751:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00479753:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_00479755:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00479757:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00479759:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047975b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047975d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047975f:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_00479763:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00479766:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00479630, 00479630)
