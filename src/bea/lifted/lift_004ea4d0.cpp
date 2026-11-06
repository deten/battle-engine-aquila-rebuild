// lifted from 004ea4d0 (vslot66, 675 bytes, 231 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ea4d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ea4d0;
L_004ea4d0:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea4d3:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ea4d7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ea4d8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ea4d9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ea4da:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ea4db:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004ea4dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ea4de:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_004ea4e2:  // call 0x452b60
    t0 = 0x00452b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea4e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea4e7:  // mov edi, dword ptr [ebp + 0xa4]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0xa4u)));
L_004ea4ed:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004ea4ef:  // je 0x4ea4f5
    if (f.zf) goto L_004ea4f5;
L_004ea4f1:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_004ea4f3:  // jmp 0x4ea4f7
    goto L_004ea4f7;
L_004ea4f5:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ea4f7:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ea4f9:  // je 0x4ea539
    if (f.zf) goto L_004ea539;
L_004ea4fb:  // mov edi, dword ptr [edi + 4]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004ea4fe:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_004ea500:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004ea502:  // je 0x4ea508
    if (f.zf) goto L_004ea508;
L_004ea504:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_004ea506:  // jmp 0x4ea50a
    goto L_004ea50a;
L_004ea508:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ea50a:  // cmp dword ptr [esi], 0
    t0 = lsub<32>(M32((uint32_t)(esi)), 0x0u, f);
L_004ea50d:  // jne 0x4ea535
    if (!f.zf) goto L_004ea535;
L_004ea50f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ea510:  // lea ecx, [ebp + 0xa4]
    ecx = (uint32_t)((uint32_t)(ebp + 0xa4u));
L_004ea516:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea51bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea51b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004ea51d:  // je 0x4ea531
    if (f.zf) goto L_004ea531;
L_004ea51f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ea521:  // call 0x44b1d0
    t0 = 0x0044b1d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea526u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea526:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ea527:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ea52c:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea531u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea531:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ea535:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ea537:  // jne 0x4ea4fb
    if (!f.zf) goto L_004ea4fb;
L_004ea539:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004ea53c:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004ea540:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ea541:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ea543:  // lea edi, [ebp + 0x1c]
    edi = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004ea546:  // call dword ptr [edx + 0x120]
    t0 = M32((uint32_t)(edx + 0x120u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea54cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea54c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004ea54e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ea550:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ea552:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004ea555:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004ea558:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ea55b:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ea55e:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004ea561:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004ea564:  // mov eax, dword ptr [ebp + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x7cu)));
L_004ea567:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004ea56a:  // jne 0x4ea575
    if (!f.zf) goto L_004ea575;
L_004ea56c:  // mov ecx, dword ptr [0x67a078]
    ecx = (uint32_t)(M32((uint32_t)(0x67a078u)));
L_004ea572:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ea573:  // jmp 0x4ea584
    goto L_004ea584;
L_004ea575:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea577:  // jne 0x4ea62d
    if (!f.zf) goto L_004ea62d;
L_004ea57d:  // mov ecx, dword ptr [0x67a07c]
    ecx = (uint32_t)(M32((uint32_t)(0x67a07cu)));
L_004ea583:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ea584:  // call 0x477cb0
    t0 = 0x00477cb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea589u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea589:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea58b:  // je 0x4ea62d
    if (f.zf) goto L_004ea62d;
L_004ea591:  // fld dword ptr [eax + 0x1c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x1cu)));
L_004ea594:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004ea596:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_004ea599:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004ea59c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ea5a0:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_004ea5a3:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_004ea5a6:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004ea5aa:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ea5ae:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ea5b0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ea5b2:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ea5b4:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ea5b6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ea5b8:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004ea5ba:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004ea5bc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ea5be:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ea5c0:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004ea5c2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ea5c4:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ea5ca:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ea5cc:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ea5cf:  // jne 0x4ea5f1
    if (!f.zf) goto L_004ea5f1;
L_004ea5d1:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ea5d7:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004ea5d9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ea5db:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004ea5dd:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ea5e1:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ea5e3:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ea5e7:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ea5eb:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ea5ed:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004ea5f1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ea5f3:  // fmul dword ptr [0x5db540]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db540u)));
L_004ea5f9:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ea5fd:  // fmul dword ptr [0x5db540]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db540u)));
L_004ea603:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ea607:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ea60b:  // fmul dword ptr [0x5db540]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db540u)));
L_004ea611:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004ea615:  // fadd dword ptr [edi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi)));
L_004ea617:  // fstp dword ptr [edi]
    F32((uint32_t)(edi)) = lf32(ST(0));
    lpop(x);
L_004ea619:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ea61d:  // fadd dword ptr [edi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x4u)));
L_004ea620:  // fstp dword ptr [edi + 4]
    F32((uint32_t)(edi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004ea623:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ea627:  // fadd dword ptr [edi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x8u)));
L_004ea62a:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004ea62d:  // mov ebx, dword ptr [ebp + 0xa4]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0xa4u)));
L_004ea633:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ea635:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_004ea639:  // je 0x4ea63f
    if (f.zf) goto L_004ea63f;
L_004ea63b:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004ea63d:  // jmp 0x4ea641
    goto L_004ea641;
L_004ea63f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ea641:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea643:  // je 0x4ea6f3
    if (f.zf) goto L_004ea6f3;
L_004ea649:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004ea64b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004ea64d:  // je 0x4ea6da
    if (f.zf) goto L_004ea6da;
L_004ea653:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004ea655:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ea657:  // call dword ptr [edx + 0x144]
    t0 = M32((uint32_t)(edx + 0x144u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea65du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea65d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea65f:  // jne 0x4ea6da
    if (!f.zf) goto L_004ea6da;
L_004ea661:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004ea664:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004ea666:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004ea669:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004ea66c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ea66e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ea670:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ea672:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ea674:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ea676:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ea678:  // fcomp dword ptr [0x5db358]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db358u)));
    lpop(x);
L_004ea67e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ea680:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ea682:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ea685:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004ea687:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ea689:  // je 0x4ea6b1
    if (f.zf) goto L_004ea6b1;
L_004ea68b:  // mov edx, dword ptr [esi + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004ea68e:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea691:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004ea693:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ea695:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004ea698:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004ea69b:  // mov edx, dword ptr [esi + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004ea69e:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ea6a1:  // mov edx, dword ptr [esi + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_004ea6a4:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004ea6a7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ea6a9:  // call dword ptr [eax + 0xf4]
    t0 = M32((uint32_t)(eax + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea6afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea6af:  // jmp 0x4ea6da
    goto L_004ea6da;
L_004ea6b1:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea6b4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ea6b6:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004ea6b8:  // mov ebx, dword ptr [ecx]
    ebx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ea6ba:  // mov dword ptr [edx], ebx
    M32((uint32_t)(edx)) = (uint32_t)(ebx);
L_004ea6bc:  // mov ebx, dword ptr [ecx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004ea6bf:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_004ea6c2:  // mov ebx, dword ptr [ecx + 8]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004ea6c5:  // mov dword ptr [edx + 8], ebx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebx);
L_004ea6c8:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004ea6cb:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004ea6ce:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ea6d0:  // call dword ptr [eax + 0xf4]
    t0 = M32((uint32_t)(eax + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea6d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea6d6:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ea6da:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004ea6dd:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ea6df:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_004ea6e3:  // je 0x4ea6e9
    if (f.zf) goto L_004ea6e9;
L_004ea6e5:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004ea6e7:  // jmp 0x4ea6eb
    goto L_004ea6eb;
L_004ea6e9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ea6eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea6ed:  // jne 0x4ea649
    if (!f.zf) goto L_004ea649;
L_004ea6f3:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004ea6f6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ea6f8:  // call dword ptr [edx + 0x118]
    t0 = M32((uint32_t)(edx + 0x118u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea6feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea6fe:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea700:  // je 0x4ea714
    if (f.zf) goto L_004ea714;
L_004ea702:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004ea705:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ea707:  // call dword ptr [eax + 0x38]
    t0 = M32((uint32_t)(eax + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea70au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea70a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ea70b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ea70c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ea70d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ea70e:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea711:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ea714:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004ea71a:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea71fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea71f:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004ea724:  // jns 0x4ea72d
    if (!f.sf) goto L_004ea72d;
L_004ea726:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ea727:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004ea72c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ea72d:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004ea731:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ea735:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004ea739:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ea73a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ea73c:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004ea740:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ea742:  // fmul dword ptr [0x5df26c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df26cu)));
L_004ea748:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ea749:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ea74a:  // push 0xfa2
    t0 = 0xfa2u; esp -= 4; M32(esp) = t0;
L_004ea74f:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004ea754:  // fadd dword ptr [0x5d85d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d8u)));
L_004ea75a:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004ea760:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ea764:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea769u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea769:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ea76a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ea76b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ea76c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ea76d:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea770:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004ea4d0, 004ea4d0)
