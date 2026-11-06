// lifted from 004f1330 (vslot9, 1369 bytes, 372 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f1330(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f1330;
L_004f1330:  // sub esp, 0x68
    t0 = lsub<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_004f1333:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f1334:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f1336:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f1337:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f133a:  // test byte ptr [edi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(edi + 0x2cu)) & 0x4u, f);
L_004f133e:  // jne 0x4f1881
    if (!f.zf) goto L_004f1881;
L_004f1344:  // mov eax, dword ptr [edi + 0x2c0]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x2c0u)));
L_004f134a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f134b:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004f134e:  // je 0x4f14c8
    if (f.zf) goto L_004f14c8;
L_004f1354:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f1355:  // je 0x4f13c2
    if (f.zf) goto L_004f13c2;
L_004f1357:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f1358:  // jne 0x4f1862
    if (!f.zf) goto L_004f1862;
L_004f135e:  // fld dword ptr [edi + 0x2e4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x2e4u)));
L_004f1364:  // fsub dword ptr [edi + 0x2d4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x2d4u)));
L_004f136a:  // fld dword ptr [edi + 0x2e8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x2e8u)));
L_004f1370:  // fsub dword ptr [edi + 0x2d8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x2d8u)));
L_004f1376:  // fld dword ptr [edi + 0x2ec]
    lpush(x, (long double)F32((uint32_t)(edi + 0x2ecu)));
L_004f137c:  // fsub dword ptr [edi + 0x2dc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x2dcu)));
L_004f1382:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f1384:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f1386:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004f1388:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004f138a:  // mov dword ptr [edi + 0x2d0], 0x3f860a92
    M32((uint32_t)(edi + 0x2d0u)) = (uint32_t)(0x3f860a92u);
L_004f1394:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f1396:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004f1398:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004f139a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f139c:  // fcomp dword ptr [0x5d8bc0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bc0u)));
    lpop(x);
L_004f13a2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f13a4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f13a6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f13a8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f13ab:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f13ad:  // je 0x4f1862
    if (f.zf) goto L_004f1862;
L_004f13b3:  // mov dword ptr [edi + 0x2c0], 0
    M32((uint32_t)(edi + 0x2c0u)) = (uint32_t)(0x0u);
L_004f13bd:  // jmp 0x4f1862
    goto L_004f1862;
L_004f13c2:  // lea ebx, [edi + 0x2e4]
    ebx = (uint32_t)((uint32_t)(edi + 0x2e4u));
L_004f13c8:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004f13d0:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004f13d4:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004f13d6:  // mov dword ptr [esp + 0x18], 0x41a00000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x41a00000u);
L_004f13de:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f13e2:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004f13e4:  // mov dword ptr [esp + 0x1c], 0x40a00000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x40a00000u);
L_004f13ec:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f13f0:  // mov dword ptr [edi + 0x2cc], 0
    M32((uint32_t)(edi + 0x2ccu)) = (uint32_t)(0x0u);
L_004f13fa:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004f13fd:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f1401:  // mov dword ptr [edi + 0x2d0], 0x3fef7642
    M32((uint32_t)(edi + 0x2d0u)) = (uint32_t)(0x3fef7642u);
L_004f140b:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004f140e:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004f1411:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f1414:  // mov ecx, dword ptr [eax + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x214u)));
L_004f141a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f141c:  // je 0x4f1862
    if (f.zf) goto L_004f1862;
L_004f1422:  // fld qword ptr [0x5df4e0]
    lpush(x, (long double)F64((uint32_t)(0x5df4e0u)));
L_004f1428:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004f142a:  // mov dword ptr [edi + 0x2c0], 2
    M32((uint32_t)(edi + 0x2c0u)) = (uint32_t)(0x2u);
L_004f1434:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004f143c:  // mov dword ptr [esp + 0x18], 0x41a00000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x41a00000u);
L_004f1444:  // mov dword ptr [esp + 0x1c], 0xc2200000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xc2200000u);
L_004f144c:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004f1452:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f1454:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f1457:  // jne 0x4f147f
    if (!f.zf) goto L_004f147f;
L_004f1459:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004f145f:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004f1467:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f1469:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004f146f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004f1473:  // fmul dword ptr [0x5df4d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df4d8u)));
L_004f1479:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f147d:  // jmp 0x4f1481
    goto L_004f1481;
L_004f147f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f1481:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f1483:  // call 0x4f1220
    t0 = 0x004f1220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f1488u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f1488:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004f148c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f148e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f1492:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004f1496:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f1498:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004f149c:  // mov dword ptr [ebx], ecx
    M32((uint32_t)(ebx)) = (uint32_t)(ecx);
L_004f149e:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f14a2:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004f14a6:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004f14aa:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f14ae:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f14b0:  // mov dword ptr [ebx + 4], edx
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(edx);
L_004f14b3:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f14b7:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f14bb:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_004f14be:  // mov dword ptr [ebx + 0xc], ecx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(ecx);
L_004f14c1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f14c3:  // jmp 0x4f1862
    goto L_004f1862;
L_004f14c8:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004f14cb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f14cd:  // je 0x4f155c
    if (f.zf) goto L_004f155c;
L_004f14d3:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004f14d7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f14d9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f14da:  // call 0x4f0ba0
    t0 = 0x004f0ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f14dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f14df:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004f14e2:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004f14e6:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004f14e9:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004f14ec:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004f14f0:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004f14f3:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004f14f7:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_004f14fb:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004f14fd:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_004f1501:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f1505:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004f1509:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f150d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004f1511:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004f1515:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004f1517:  // fchs 
    ST(0) = -ST(0);
L_004f1519:  // fsub dword ptr [edi + 0x114]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x114u)));
L_004f151f:  // fstp dword ptr [edi + 0x2cc]
    F32((uint32_t)(edi + 0x2ccu)) = lf32(ST(0));
    lpop(x);
L_004f1525:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f152au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f152a:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_004f152e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f1534:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f1536:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f1539:  // jne 0x4f154a
    if (!f.zf) goto L_004f154a;
L_004f153b:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004f153f:  // fdiv dword ptr [esp + 0xc]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f1543:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f1548u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f1548:  // jmp 0x4f1550
    goto L_004f1550;
L_004f154a:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004f1550:  // fsub dword ptr [edi + 0x118]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x118u)));
L_004f1556:  // fstp dword ptr [edi + 0x2d0]
    F32((uint32_t)(edi + 0x2d0u)) = lf32(ST(0));
    lpop(x);
L_004f155c:  // fld dword ptr [edi + 0x2e4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x2e4u)));
L_004f1562:  // fsub dword ptr [edi + 0x2d4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x2d4u)));
L_004f1568:  // fld dword ptr [edi + 0x2e8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x2e8u)));
L_004f156e:  // fsub dword ptr [edi + 0x2d8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x2d8u)));
L_004f1574:  // fld dword ptr [edi + 0x2ec]
    lpush(x, (long double)F32((uint32_t)(edi + 0x2ecu)));
L_004f157a:  // fsub dword ptr [edi + 0x2dc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x2dcu)));
L_004f1580:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f1582:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f1584:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004f1586:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004f1588:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f158a:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004f158c:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004f158e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f1590:  // fcomp dword ptr [0x5d8bc0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bc0u)));
    lpop(x);
L_004f1596:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f1598:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f159a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f159c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f159f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f15a1:  // je 0x4f16e4
    if (f.zf) goto L_004f16e4;
L_004f15a7:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004f15ad:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f15b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f15b2:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004f15b8:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004f15ba:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f15bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f15bf:  // and ebx, 0x8000ffff
    t0 = llog<32>(ebx & 0x8000ffffu, f);
    ebx = (uint32_t)(t0);
L_004f15c5:  // jns 0x4f15cf
    if (!f.sf) goto L_004f15cf;
L_004f15c7:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004f15c8:  // or ebx, 0xffff0000
    t0 = llog<32>(ebx | 0xffff0000u, f);
    ebx = (uint32_t)(t0);
L_004f15ce:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004f15cf:  // mov dword ptr [esp + 0xc], ebx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ebx);
L_004f15d3:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004f15d8:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004f15dc:  // fmul dword ptr [0x5df4d4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df4d4u)));
L_004f15e2:  // fsub dword ptr [0x5d85d4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d4u)));
L_004f15e8:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f15ec:  // jns 0x4f15f5
    if (!f.sf) goto L_004f15f5;
L_004f15ee:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f15ef:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004f15f4:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f15f5:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004f15f9:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004f15ff:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004f1603:  // fmul dword ptr [0x5db1ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1ecu)));
L_004f1609:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004f160f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004f1613:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f1618u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f1618:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004f161d:  // jns 0x4f1626
    if (!f.sf) goto L_004f1626;
L_004f161f:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f1620:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004f1625:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f1626:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004f162a:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004f162e:  // fmul dword ptr [0x5df4d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df4d0u)));
L_004f1634:  // fadd dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004f163a:  // fchs 
    ST(0) = -ST(0);
L_004f163c:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f1640:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004f1644:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004f1648:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f164a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f164c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004f164e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004f1650:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f1652:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004f1656:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004f165a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f165c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004f165e:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004f1660:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f1662:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004f1668:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f166a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f166d:  // jne 0x4f1693
    if (!f.zf) goto L_004f1693;
L_004f166f:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004f1675:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004f1679:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f167b:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f167f:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004f1683:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f1685:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004f1689:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004f168d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f168f:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f1693:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f1695:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f1697:  // call 0x4f1220
    t0 = 0x004f1220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f169cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f169c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004f16a0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f16a2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f16a6:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004f16aa:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f16ac:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004f16b0:  // mov dword ptr [edi + 0x2e4], eax
    M32((uint32_t)(edi + 0x2e4u)) = (uint32_t)(eax);
L_004f16b6:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f16ba:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004f16be:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004f16c2:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f16c6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f16c8:  // mov dword ptr [edi + 0x2e8], ecx
    M32((uint32_t)(edi + 0x2e8u)) = (uint32_t)(ecx);
L_004f16ce:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f16d2:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f16d6:  // mov dword ptr [edi + 0x2ec], edx
    M32((uint32_t)(edi + 0x2ecu)) = (uint32_t)(edx);
L_004f16dc:  // mov dword ptr [edi + 0x2f0], eax
    M32((uint32_t)(edi + 0x2f0u)) = (uint32_t)(eax);
L_004f16e2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f16e4:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f16e7:  // mov eax, dword ptr [ecx + 0x214]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x214u)));
L_004f16ed:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f16ef:  // jne 0x4f16fb
    if (!f.zf) goto L_004f16fb;
L_004f16f1:  // mov dword ptr [edi + 0x2c0], 1
    M32((uint32_t)(edi + 0x2c0u)) = (uint32_t)(0x1u);
L_004f16fb:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f16fe:  // mov edx, dword ptr [ecx + 0x164]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x164u)));
L_004f1704:  // mov eax, dword ptr [edx + 0x19c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x19cu)));
L_004f170a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f170c:  // je 0x4f1859
    if (f.zf) goto L_004f1859;
L_004f1712:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004f1715:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f1717:  // je 0x4f1859
    if (f.zf) goto L_004f1859;
L_004f171d:  // call 0x4fd760
    t0 = 0x004fd760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f1722u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f1722:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f1724:  // je 0x4f1776
    if (f.zf) goto L_004f1776;
L_004f1726:  // fld dword ptr [esi + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4cu)));
L_004f1729:  // fsub dword ptr [esi + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x50u)));
L_004f172c:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004f172e:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_004f1734:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f1736:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f1739:  // jne 0x4f174d
    if (!f.zf) goto L_004f174d;
L_004f173b:  // fld dword ptr [esi + 0x50]
    lpush(x, (long double)F32((uint32_t)(esi + 0x50u)));
L_004f173e:  // fsub dword ptr [esi + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x48u)));
L_004f1741:  // fmul dword ptr [0x5dbfa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbfa0u)));
L_004f1747:  // fadd dword ptr [esi + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4cu)));
L_004f174a:  // fstp dword ptr [esi + 0x4c]
    F32((uint32_t)(esi + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004f174d:  // fld dword ptr [esi + 0x58]
    lpush(x, (long double)F32((uint32_t)(esi + 0x58u)));
L_004f1750:  // fsub dword ptr [esi + 0x5c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x5cu)));
L_004f1753:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004f1755:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_004f175b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f175d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f1760:  // jne 0x4f178c
    if (!f.zf) goto L_004f178c;
L_004f1762:  // fld dword ptr [esi + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x5cu)));
L_004f1765:  // fsub dword ptr [esi + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x54u)));
L_004f1768:  // fmul dword ptr [0x5dbfa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbfa0u)));
L_004f176e:  // fadd dword ptr [esi + 0x58]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x58u)));
L_004f1771:  // fstp dword ptr [esi + 0x58]
    F32((uint32_t)(esi + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004f1774:  // jmp 0x4f178c
    goto L_004f178c;
L_004f1776:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f1778:  // call 0x4ffe00
    t0 = 0x004ffe00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f177du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f177d:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004f1780:  // lea edx, [esi + 0x34]
    edx = (uint32_t)((uint32_t)(esi + 0x34u));
L_004f1783:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f1784:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f1786:  // call dword ptr [eax + 0x168]
    t0 = M32((uint32_t)(eax + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f178cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f178c:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f178f:  // mov ecx, dword ptr [esi + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4cu)));
L_004f1792:  // fld dword ptr [esi + 0x34]
    lpush(x, (long double)F32((uint32_t)(esi + 0x34u)));
L_004f1795:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_004f1798:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004f179b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f179d:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004f17a1:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004f17a5:  // fld dword ptr [esi + 0x38]
    lpush(x, (long double)F32((uint32_t)(esi + 0x38u)));
L_004f17a8:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f17ab:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f17af:  // fld dword ptr [esi + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x3cu)));
L_004f17b2:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004f17b5:  // mov eax, dword ptr [esi + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x58u)));
L_004f17b8:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004f17bc:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004f17be:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004f17c0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f17c1:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004f17c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f17c6:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_004f17ca:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f17cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f17cf:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004f17d3:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004f17d7:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004f17db:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004f17df:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004f17e2:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004f17e5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f17e7:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004f17eb:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004f17ef:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004f17f3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f17f4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f17f5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f17f7:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004f17fb:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004f17ff:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004f1803:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004f1807:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004f180b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f180d:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004f1811:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004f1815:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f1817:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004f181b:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004f181f:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004f1823:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004f1827:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004f182b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f182d:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004f1831:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004f1835:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f1837:  // fadd dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004f183a:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004f183e:  // fadd dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004f1841:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004f1845:  // fadd dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004f1848:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004f184c:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004f1850:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004f1854:  // call 0x4fb650
    t0 = 0x004fb650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f1859u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f1859:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f185b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f185d:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f1860u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f1860:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f1862:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004f1866:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004f186b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f186c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f186e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f1870:  // push 0x672fd0
    t0 = 0x672fd0u; esp -= 4; M32(esp) = t0;
L_004f1875:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f1876:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_004f187b:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f1880u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f1880:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f1881:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f1882:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f1883:  // add esp, 0x68
    t0 = ladd<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_004f1886:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f1330, 004f1330)
