// lifted from 00478510 (FUN_00478510, 1797 bytes, 528 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00478510(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00478510;
L_00478510:  // sub esp, 0xcc
    t0 = lsub<32>(esp, 0xccu, f);
    esp = (uint32_t)(t0);
L_00478516:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00478517:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00478518:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00478519:  // mov esi, dword ptr [esp + 0xdc]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xdcu)));
L_00478520:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00478521:  // mov edi, dword ptr [esp + 0xe4]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xe4u)));
L_00478528:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478529:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_00478531:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_00478534:  // fsub dword ptr [esi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x8u)));
L_00478537:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047853a:  // fld dword ptr [edi + 4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x4u)));
L_0047853d:  // fsub dword ptr [esi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x4u)));
L_00478540:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478541:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478544:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_00478546:  // fsub dword ptr [esi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi)));
L_00478548:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478549:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_00478550:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478553:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478558u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478558:  // mov ebx, dword ptr [esp + 0xe8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_0047855f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478560:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_00478563:  // fsub dword ptr [esi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x8u)));
L_00478566:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478569:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_0047856c:  // fsub dword ptr [esi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x4u)));
L_0047856f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478570:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478573:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00478575:  // fsub dword ptr [esi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi)));
L_00478577:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478578:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_0047857f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478582:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478587u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478587:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0047858e:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_00478592:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_00478599:  // fmul dword ptr [esp + 0x8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8cu)));
L_004785a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004785a1:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004785a3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004785a6:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004785ad:  // fmul dword ptr [esp + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x90u)));
L_004785b4:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_004785bb:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_004785c2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004785c3:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004785c5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004785c8:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004785cf:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_004785d6:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004785dd:  // fmul dword ptr [esp + 0x98]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x98u)));
L_004785e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004785e5:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004785e9:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004785eb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004785ee:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004785f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004785f3:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004785f7:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004785fb:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004785fd:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004785ff:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00478601:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00478603:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00478605:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00478609:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0047860d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047860f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00478611:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00478613:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00478615:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0047861b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047861d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00478620:  // jne 0x478646
    if (!f.zf) goto L_00478646;
L_00478622:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00478628:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047862c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047862e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00478632:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00478636:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00478638:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0047863c:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00478640:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00478642:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00478646:  // mov eax, dword ptr [esp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_0047864d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047864f:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00478653:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00478656:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0047865a:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0047865d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047865f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00478663:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00478665:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00478667:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_0047866d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047866f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00478672:  // jne 0x478681
    if (!f.zf) goto L_00478681;
L_00478674:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00478675:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00478676:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00478677:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00478679:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047867a:  // add esp, 0xcc
    t0 = ladd<32>(esp, 0xccu, f);
    esp = (uint32_t)(t0);
L_00478680:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00478681:  // mov ebp, dword ptr [esp + 0xec]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_00478688:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478689:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0047868c:  // fsub dword ptr [ebp + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x8u)));
L_0047868f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478692:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00478695:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_00478698:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478699:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047869c:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_0047869e:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004786a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004786a2:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004786a9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004786ac:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004786b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004786b1:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004786b5:  // fmul dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb0u)));
L_004786bc:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004786c0:  // fmul dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb4u)));
L_004786c7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004786c9:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004786d0:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004786d4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004786d6:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_004786dc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004786de:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004786e1:  // jne 0x4786f0
    if (!f.zf) goto L_004786f0;
L_004786e3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004786e4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004786e5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004786e6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004786e8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004786e9:  // add esp, 0xcc
    t0 = ladd<32>(esp, 0xccu, f);
    esp = (uint32_t)(t0);
L_004786ef:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004786f0:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004786f4:  // fmul dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf4u)));
L_004786fb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004786fc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004786ff:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00478703:  // fmul dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf8u)));
L_0047870a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047870b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047870e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00478712:  // fmul dword ptr [esp + 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xfcu)));
L_00478719:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047871a:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0047871e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478721:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478726u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478726:  // fld dword ptr [ebp + 8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x8u)));
L_00478729:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0047872d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047872e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478731:  // fld dword ptr [ebp + 4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x4u)));
L_00478734:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00478738:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478739:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047873c:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_0047873f:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00478743:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478744:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_00478748:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047874b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478750u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478750:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00478753:  // fsub dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x5cu)));
L_00478757:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478758:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047875b:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_0047875e:  // fsub dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x5cu)));
L_00478762:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478763:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478766:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00478768:  // fsub dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x5cu)));
L_0047876c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047876d:  // lea ecx, [esp + 0xc8]
    ecx = (uint32_t)((uint32_t)(esp + 0xc8u));
L_00478774:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478777:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047877cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047877c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00478780:  // fmul dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc0u)));
L_00478787:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0047878b:  // fmul dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc4u)));
L_00478792:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00478794:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_0047879b:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0047879f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004787a1:  // fcomp dword ptr [0x5d8570]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8570u)));
    lpop(x);
L_004787a7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004787a9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004787ac:  // jne 0x4789e7
    if (!f.zf) goto L_004789e7;
L_004787b2:  // lea eax, [esp + 0x9c]
    eax = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004787b9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004787ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004787bb:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004787bf:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004787c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004787c4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004787c6:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004787cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004787cb:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004787cf:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004787d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004787d4:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004787d8:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004787ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004787dd:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004787e1:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004787e5:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004787e9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004787ea:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004787ee:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004787f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004787f3:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004787f9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004787fb:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004787fe:  // je 0x47880c
    if (f.zf) goto L_0047880c;
L_00478800:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00478802:  // mov dword ptr [esp + 0x10], 0xbf800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xbf800000u);
L_0047880a:  // jmp 0x47881a
    goto L_0047881a;
L_0047880c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00478810:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00478812:  // fchs 
    ST(0) = -ST(0);
L_00478814:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00478818:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047881a:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0047881e:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00478822:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478823:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478826:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0047882a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0047882e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047882f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478832:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00478836:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047883a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047883b:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_0047883f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478842:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478847u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478847:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0047884b:  // fadd dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x5cu)));
L_0047884f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478850:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478853:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00478857:  // fadd dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x5cu)));
L_0047885b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047885c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047885f:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00478863:  // fadd dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x5cu)));
L_00478867:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478868:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0047886c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047886f:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478874u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478874:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00478878:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0047887c:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00478880:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00478884:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00478888:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_0047888c:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_00478890:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_00478894:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00478898:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047889a:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0047889c:  // fcomp qword ptr [0x5d87d8]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87d8u)));
    lpop(x);
L_004788a2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004788a4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004788a7:  // je 0x4788b1
    if (f.zf) goto L_004788b1;
L_004788a9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004788ab:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004788b1:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004788b5:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004788b9:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004788bd:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004788c1:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004788c5:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004788c9:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004788cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004788ce:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004788cf:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004788d3:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004788d7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004788d8:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_004788dc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004788dd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004788de:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_004788e2:  // call 0x479020
    t0 = 0x00479020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004788e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004788e7:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004788ea:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004788ec:  // jne 0x47899d
    if (!f.zf) goto L_0047899d;
L_004788f2:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_004788f6:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004788fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004788fe:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004788ff:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00478900:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00478901:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478902:  // call 0x479200
    t0 = 0x00479200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478907u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478907:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00478909:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0047890c:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_00478910:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00478913:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00478914:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_00478918:  // mov ecx, dword ptr [esp + 0xf4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_0047891f:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00478922:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_00478926:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00478928:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0047892b:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0047892f:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00478933:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00478936:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0047893a:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0047893d:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_00478941:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00478944:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_0047894b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047894c:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00478950:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00478954:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478959u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478959:  // lea edx, [esp + 0x68]
    edx = (uint32_t)((uint32_t)(esp + 0x68u));
L_0047895d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047895e:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_00478962:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00478963:  // lea ecx, [esp + 0xd4]
    ecx = (uint32_t)((uint32_t)(esp + 0xd4u));
L_0047896a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047896b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047896c:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00478970:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478975u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478975:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00478977:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047897cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047897c:  // mov edx, dword ptr [esp + 0xf4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_00478983:  // lea eax, [esp + 0x68]
    eax = (uint32_t)((uint32_t)(esp + 0x68u));
L_00478987:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00478988:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_0047898f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00478990:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478991:  // call 0x479630
    t0 = 0x00479630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478996u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478996:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0047899a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0047899d:  // lea edx, [esp + 0xcc]
    edx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004789a4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004789a5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004789a6:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004789aa:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004789afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004789af:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004789b1:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004789b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004789b6:  // fsub dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xf4u)));
L_004789bd:  // mov esi, dword ptr [esp + 0xf8]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_004789c4:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004789c9:  // fcomp dword ptr [0x5dae90]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dae90u)));
    lpop(x);
L_004789cf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004789d1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004789d4:  // je 0x478b58
    if (f.zf) goto L_00478b58;
L_004789da:  // mov dword ptr [esi + 0xc8], edi
    M32((uint32_t)(esi + 0xc8u)) = (uint32_t)(edi);
L_004789e0:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004789e2:  // jmp 0x478b84
    goto L_00478b84;
L_004789e7:  // mov ecx, dword ptr [esp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_004789ee:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004789f0:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004789f4:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004789f7:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004789fb:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004789fe:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00478a02:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_00478a06:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00478a09:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00478a0d:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00478a11:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00478a15:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00478a17:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00478a19:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00478a1d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00478a1f:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00478a21:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00478a23:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00478a25:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00478a27:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00478a29:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00478a2b:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00478a31:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00478a33:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00478a36:  // jne 0x478a5c
    if (!f.zf) goto L_00478a5c;
L_00478a38:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00478a3e:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00478a42:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00478a44:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00478a48:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00478a4c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00478a4e:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00478a52:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00478a56:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00478a58:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00478a5c:  // lea ecx, [esp + 0x9c]
    ecx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_00478a63:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00478a64:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478a65:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00478a69:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00478a6b:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478a70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478a70:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00478a72:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478a77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478a77:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00478a7b:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_00478a7f:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00478a83:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00478a84:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478a89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478a89:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_00478a8d:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_00478a91:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00478a95:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00478a96:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00478a9a:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478a9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478a9f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00478aa5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00478aa7:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00478aaa:  // je 0x478ab8
    if (f.zf) goto L_00478ab8;
L_00478aac:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00478aae:  // mov dword ptr [esp + 0x10], 0xbf800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xbf800000u);
L_00478ab6:  // jmp 0x478ac6
    goto L_00478ac6;
L_00478ab8:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00478abc:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00478abe:  // fchs 
    ST(0) = -ST(0);
L_00478ac0:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00478ac4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00478ac6:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00478aca:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00478ace:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478acf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478ad2:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00478ad6:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00478ada:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478adb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478ade:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00478ae2:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00478ae6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478ae7:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00478aeb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00478aee:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478af3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478af3:  // lea ecx, [esp + 0x68]
    ecx = (uint32_t)((uint32_t)(esp + 0x68u));
L_00478af7:  // lea edx, [esp + 0x9c]
    edx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_00478afe:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00478aff:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00478b00:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00478b04:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478b09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478b09:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00478b0b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00478b0f:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00478b13:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_00478b17:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00478b1a:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_00478b1e:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00478b21:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00478b25:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_00478b29:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00478b2c:  // mov ecx, dword ptr [esp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_00478b33:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_00478b37:  // call 0x477ba0
    t0 = 0x00477ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478b3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478b3c:  // fcomp dword ptr [esp + 0x64]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x64u)));
    lpop(x);
L_00478b40:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00478b42:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00478b45:  // je 0x478894
    if (f.zf) goto L_00478894;
L_00478b4b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00478b4c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00478b4d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00478b4e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00478b50:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00478b51:  // add esp, 0xcc
    t0 = ladd<32>(esp, 0xccu, f);
    esp = (uint32_t)(t0);
L_00478b57:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00478b58:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00478b5c:  // fcomp qword ptr [0x5dbc68]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5dbc68u)));
    lpop(x);
L_00478b62:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00478b64:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00478b67:  // jne 0x478ba3
    if (!f.zf) goto L_00478ba3;
L_00478b69:  // mov ecx, dword ptr [esp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_00478b70:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00478b75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00478b75:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00478b79:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00478b7b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00478b7e:  // jne 0x478ba3
    if (!f.zf) goto L_00478ba3;
L_00478b80:  // mov ecx, dword ptr [esp + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_00478b84:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_00478b8a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00478b8c:  // je 0x478bb0
    if (f.zf) goto L_00478bb0;
L_00478b8e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00478b92:  // fcomp dword ptr [esi + 0xc4]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0xc4u)));
    lpop(x);
L_00478b98:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00478b9a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00478b9d:  // jne 0x478bb0
    if (!f.zf) goto L_00478bb0;
L_00478b9f:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00478ba1:  // je 0x478bb0
    if (f.zf) goto L_00478bb0;
L_00478ba3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00478ba4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00478ba5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00478ba6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00478ba8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00478ba9:  // add esp, 0xcc
    t0 = ladd<32>(esp, 0xccu, f);
    esp = (uint32_t)(t0);
L_00478baf:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00478bb0:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00478bb4:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00478bb8:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_00478bbe:  // mov dword ptr [esi + 0xc4], eax
    M32((uint32_t)(esi + 0xc4u)) = (uint32_t)(eax);
L_00478bc4:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00478bc8:  // mov dword ptr [esi + 0xa8], edi
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(edi);
L_00478bce:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00478bd0:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00478bd4:  // mov dword ptr [esi + 0x94], edi
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(edi);
L_00478bda:  // add esi, 0xd4
    t0 = ladd<32>(esi, 0xd4u, f);
    esi = (uint32_t)(t0);
L_00478be0:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_00478be3:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00478be7:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00478bea:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00478bee:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00478bf1:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00478bf5:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00478bf9:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_00478bfb:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00478bff:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_00478c02:  // mov dword ptr [esi + 8], eax
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(eax);
L_00478c05:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00478c07:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00478c08:  // mov dword ptr [esi + 0xc], ecx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ecx);
L_00478c0b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00478c0c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00478c0d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00478c0e:  // add esp, 0xcc
    t0 = ladd<32>(esp, 0xccu, f);
    esp = (uint32_t)(t0);
L_00478c14:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00478510, 00478510)
