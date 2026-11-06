// lifted from 004ee410 (FUN_004ee410, 1164 bytes, 349 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ee410(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ee410;
L_004ee410:  // sub esp, 0x2c
    t0 = lsub<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004ee413:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004ee417:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004ee41b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ee41c:  // mov esi, dword ptr [esp + 0x3c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ee420:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_004ee423:  // fsub dword ptr [ecx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x4u)));
L_004ee426:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004ee42a:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004ee42d:  // fsub dword ptr [ecx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x8u)));
L_004ee430:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004ee434:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_004ee437:  // fsub dword ptr [ecx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x8u)));
L_004ee43a:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ee43e:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004ee441:  // fsub dword ptr [ecx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x4u)));
L_004ee444:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004ee448:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004ee44c:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004ee450:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004ee454:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ee458:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004ee45a:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004ee45c:  // fsub dword ptr [ecx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx)));
L_004ee45e:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004ee462:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_004ee464:  // fsub dword ptr [ecx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx)));
L_004ee466:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004ee46a:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004ee46e:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ee472:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004ee476:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004ee47a:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004ee47c:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004ee480:  // fmul dword ptr [esp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4u)));
L_004ee484:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004ee488:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004ee48c:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004ee48e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee490:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ee492:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee494:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ee496:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ee498:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ee49a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee49c:  // fld st(5)
    v0 = ST(5); lpush(x, v0);
L_004ee49e:  // fmul st(6)
    ST(0) = (ST(0)) * (ST(6));
L_004ee4a0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee4a2:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ee4a4:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004ee4a6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee4a8:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ee4ae:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee4b0:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ee4b3:  // jne 0x4ee4c7
    if (!f.zf) goto L_004ee4c7;
L_004ee4b5:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ee4bb:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee4bd:  // fmulp st(4)
    ST(4) = (ST(4)) * (ST(0));
    lpop(x);
L_004ee4bf:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee4c1:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_004ee4c3:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004ee4c5:  // jmp 0x4ee4c9
    goto L_004ee4c9;
L_004ee4c7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee4c9:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004ee4cd:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ee4d1:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004ee4d5:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004ee4d9:  // fsub dword ptr [esp + 0x44]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x44u)));
L_004ee4dd:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004ee4e1:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004ee4e5:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_004ee4e9:  // fst dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
L_004ee4ed:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ee4ef:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004ee4f3:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ee4f5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee4f7:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ee4fb:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004ee4fd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee4ff:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee501:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004ee503:  // fcomp dword ptr [0x5d8cb0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cb0u)));
    lpop(x);
L_004ee509:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee50b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ee50e:  // je 0x4ee51f
    if (f.zf) goto L_004ee51f;
L_004ee510:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee512:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee514:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee516:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee518:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ee51a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ee51b:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004ee51e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ee51f:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004ee521:  // fmul dword ptr [ecx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx)));
L_004ee523:  // fchs 
    ST(0) = -ST(0);
L_004ee525:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004ee527:  // fmul dword ptr [ecx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x4u)));
L_004ee52a:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004ee52c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ee52e:  // fmul dword ptr [ecx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x8u)));
L_004ee531:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004ee533:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004ee537:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ee539:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee53b:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004ee53f:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004ee541:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee543:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004ee547:  // fmul st(5)
    ST(0) = (ST(0)) * (ST(5));
L_004ee549:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee54b:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004ee54d:  // fchs 
    ST(0) = -ST(0);
L_004ee54f:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ee553:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee555:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee557:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee559:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee55b:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ee55f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004ee565:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee567:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ee56a:  // jne 0x4ee518
    if (!f.zf) goto L_004ee518;
L_004ee56c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ee570:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004ee576:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee578:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ee57b:  // je 0x4ee518
    if (f.zf) goto L_004ee518;
L_004ee57d:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004ee581:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ee585:  // fadd dword ptr [esp + 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x40u)));
L_004ee589:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004ee58d:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ee591:  // fadd dword ptr [esp + 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x44u)));
L_004ee595:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004ee599:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ee59d:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ee5a1:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ee5a5:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ee5a9:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004ee5ab:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004ee5ad:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004ee5b1:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_004ee5b4:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_004ee5b8:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004ee5bc:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_004ee5c0:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004ee5c4:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_004ee5c7:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ee5cb:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ee5cf:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_004ee5d3:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004ee5d7:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004ee5db:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004ee5df:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ee5e3:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004ee5e7:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004ee5eb:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004ee5ef:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_004ee5f3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee5f5:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004ee5f9:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004ee5fd:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_004ee601:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee603:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ee605:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ee60b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee60d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ee610:  // jne 0x4ee636
    if (!f.zf) goto L_004ee636;
L_004ee612:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ee618:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004ee61c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ee61e:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004ee622:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee624:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_004ee628:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004ee62c:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004ee630:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004ee634:  // jmp 0x4ee638
    goto L_004ee638;
L_004ee636:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee638:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_004ee63a:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004ee63c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004ee640:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_004ee643:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_004ee647:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ee64b:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_004ee64e:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ee652:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ee656:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ee65a:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_004ee65e:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004ee662:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004ee666:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ee66a:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ee66e:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ee672:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004ee676:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ee67a:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ee67e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee680:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ee684:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004ee688:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_004ee68c:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_004ee690:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee692:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ee694:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ee69a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee69c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ee69f:  // jne 0x4ee6c5
    if (!f.zf) goto L_004ee6c5;
L_004ee6a1:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ee6a7:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ee6ab:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ee6ad:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004ee6b1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee6b3:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004ee6b7:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004ee6bb:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ee6bf:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004ee6c3:  // jmp 0x4ee6c7
    goto L_004ee6c7;
L_004ee6c5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee6c7:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004ee6c9:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004ee6cb:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004ee6cf:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ee6d3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee6d5:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004ee6d8:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_004ee6dc:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004ee6e0:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ee6e4:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004ee6e8:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ee6ec:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004ee6ef:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ee6f3:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ee6f7:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004ee6fb:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004ee6ff:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ee703:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ee707:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ee70b:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004ee70f:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ee713:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee715:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ee719:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004ee71d:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004ee721:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee723:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ee725:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ee72b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee72d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ee730:  // jne 0x4ee752
    if (!f.zf) goto L_004ee752;
L_004ee732:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ee738:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ee73c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ee73e:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004ee742:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee744:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004ee748:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004ee74c:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ee750:  // jmp 0x4ee758
    goto L_004ee758;
L_004ee752:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ee754:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004ee758:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004ee75c:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004ee760:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004ee764:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_004ee768:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee76a:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004ee76e:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004ee772:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee774:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004ee778:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ee77a:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ee77e:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ee782:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_004ee786:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee788:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004ee78c:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004ee790:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee792:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004ee796:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004ee79a:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ee79e:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_004ee7a2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee7a4:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004ee7a8:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004ee7ac:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee7ae:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ee7b2:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004ee7b6:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004ee7bc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee7be:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ee7c1:  // jne 0x4ee7cd
    if (!f.zf) goto L_004ee7cd;
L_004ee7c3:  // mov dword ptr [esp + 0x3c], 0x3f800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x3f800000u);
L_004ee7cb:  // jmp 0x4ee7e6
    goto L_004ee7e6;
L_004ee7cd:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004ee7d1:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_004ee7d7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee7d9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ee7dc:  // je 0x4ee7e6
    if (f.zf) goto L_004ee7e6;
L_004ee7de:  // mov dword ptr [esp + 0x3c], 0xbf800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0xbf800000u);
L_004ee7e6:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004ee7ea:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004ee7f0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee7f2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ee7f5:  // jne 0x4ee801
    if (!f.zf) goto L_004ee801;
L_004ee7f7:  // mov dword ptr [esp + 0x34], 0x3f800000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x3f800000u);
L_004ee7ff:  // jmp 0x4ee81a
    goto L_004ee81a;
L_004ee801:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004ee805:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_004ee80b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee80d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ee810:  // je 0x4ee81a
    if (f.zf) goto L_004ee81a;
L_004ee812:  // mov dword ptr [esp + 0x34], 0xbf800000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xbf800000u);
L_004ee81a:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ee81e:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004ee824:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee826:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ee829:  // jne 0x4ee835
    if (!f.zf) goto L_004ee835;
L_004ee82b:  // mov dword ptr [esp + 0x38], 0x3f800000
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x3f800000u);
L_004ee833:  // jmp 0x4ee84e
    goto L_004ee84e;
L_004ee835:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ee839:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_004ee83f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee841:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ee844:  // je 0x4ee84e
    if (f.zf) goto L_004ee84e;
L_004ee846:  // mov dword ptr [esp + 0x38], 0xbf800000
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0xbf800000u);
L_004ee84e:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ee852:  // call 0x55f380
    t0 = 0x0055f380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ee857u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ee857:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_004ee85b:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004ee85f:  // call 0x55f380
    t0 = 0x0055f380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ee864u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ee864:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_004ee868:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee86a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004ee86e:  // call 0x55f380
    t0 = 0x0055f380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ee873u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ee873:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_004ee877:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ee879:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004ee87f:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004ee881:  // fcomp qword ptr [0x5df3f8]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5df3f8u)));
    lpop(x);
L_004ee887:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ee889:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ee88c:  // je 0x4ee518
    if (f.zf) goto L_004ee518;
L_004ee892:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004ee897:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ee898:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004ee89b:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004ee410, 004ee410)
