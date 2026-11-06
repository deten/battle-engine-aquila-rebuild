// lifted from 00419540 (vslot1, 458 bytes, 132 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00419540(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00419540;
L_00419540:  // sub esp, 0x90
    t0 = lsub<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_00419546:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00419547:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00419548:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0041954a:  // mov esi, dword ptr [edi + 4]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0041954d:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0041954f:  // je 0x4196ea
    if (f.zf) goto L_004196ea;
L_00419555:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_0041955c:  // lea eax, [esi + 0x3c]
    eax = (uint32_t)((uint32_t)(esi + 0x3cu));
L_0041955f:  // jne 0x419566
    if (!f.zf) goto L_00419566;
L_00419561:  // mov eax, 0x83d9c0
    eax = (uint32_t)(0x83d9c0u);
L_00419566:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00419567:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0041956b:  // call 0x44adb0
    t0 = 0x0044adb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00419570u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00419570:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00419573:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00419575:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00419578:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041957a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0041957c:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_00419580:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00419583:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00419587:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0041958a:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0041958e:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_00419592:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00419595:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00419599:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041959a:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0041959e:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004195a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004195a3:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004195a7:  // fmul dword ptr [0x5d9290]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9290u)));
L_004195ad:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_004195b4:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004195b8:  // fmul dword ptr [0x5d9290]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9290u)));
L_004195be:  // lea eax, [esi + 0x3c]
    eax = (uint32_t)((uint32_t)(esi + 0x3cu));
L_004195c1:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004195c5:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004195cc:  // fmul dword ptr [0x5d9290]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9290u)));
L_004195d2:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004195d6:  // fadd dword ptr [esp + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xcu)));
L_004195da:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004195de:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004195e2:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004195e6:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004195ea:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004195ee:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004195f2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004195f6:  // jne 0x4195fd
    if (!f.zf) goto L_004195fd;
L_004195f8:  // mov eax, 0x83d9c0
    eax = (uint32_t)(0x83d9c0u);
L_004195fd:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_00419600:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_00419606:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00419607:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041960a:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_0041960d:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_00419613:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00419614:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00419617:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0041961a:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_00419620:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00419621:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_00419625:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00419628:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041962du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041962d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00419631:  // fadd dword ptr [esp + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x50u)));
L_00419635:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00419636:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00419639:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0041963d:  // fadd dword ptr [esp + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x50u)));
L_00419641:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00419642:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00419645:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00419649:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_0041964d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041964e:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00419652:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00419655:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041965au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041965a:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0041965c:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00419660:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00419661:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00419663:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00419665u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00419665:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00419669:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0041966c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041966d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00419670:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00419674:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00419677:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00419678:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041967b:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0041967f:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00419681:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00419682:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00419686:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00419689:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041968eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041968e:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_00419692:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00419697u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00419697:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_0041969b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004196a1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004196a3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004196a6:  // jne 0x4196bb
    if (!f.zf) goto L_004196bb;
L_004196a8:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004196ac:  // fdiv dword ptr [esp + 8]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x8u)));
L_004196b0:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004196b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004196b5:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004196b9:  // jmp 0x4196c3
    goto L_004196c3;
L_004196bb:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_004196c3:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004196c7:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004196cb:  // mov esi, dword ptr [esp + 0x9c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004196d2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004196d4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004196d5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004196d6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004196d8:  // call 0x40d1f0
    t0 = 0x0040d1f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004196ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004196dd:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004196df:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004196e0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004196e1:  // add esp, 0x90
    t0 = ladd<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_004196e7:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004196ea:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004196f1:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004196f6:  // mov esi, 0x660588
    esi = (uint32_t)(0x660588u);
L_004196fb:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004196fd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004196ff:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00419700:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00419701:  // add esp, 0x90
    t0 = ladd<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_00419707:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00419540, 00419540)
