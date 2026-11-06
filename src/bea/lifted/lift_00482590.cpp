// lifted from 00482590 (FUN_00482590, 3929 bytes, 951 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00482590(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00482590;
L_00482590:  // sub esp, 0x1e8
    t0 = lsub<32>(esp, 0x1e8u, f);
    esp = (uint32_t)(t0);
L_00482596:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00482597:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00482598:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00482599:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048259a:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0048259c:  // mov eax, dword ptr [0x67a634]
    eax = (uint32_t)(M32((uint32_t)(0x67a634u)));
L_004825a1:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_004825a4:  // mov esi, dword ptr [eax + 0x4e0]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x4e0u)));
L_004825aa:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004825ac:  // je 0x4825b4
    if (f.zf) goto L_004825b4;
L_004825ae:  // test byte ptr [esi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(esi + 0x34u)) & 0x10u, f);
L_004825b2:  // jne 0x4825c6
    if (!f.zf) goto L_004825c6;
L_004825b4:  // mov esi, dword ptr [eax + 0x4c8]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x4c8u)));
L_004825ba:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004825bc:  // je 0x4825c6
    if (f.zf) goto L_004825c6;
L_004825be:  // test byte ptr [esi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(esi + 0x34u)) & 0x10u, f);
L_004825c2:  // jne 0x4825c6
    if (!f.zf) goto L_004825c6;
L_004825c4:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004825c6:  // mov eax, dword ptr [eax + 0x574]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x574u)));
L_004825cc:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004825ce:  // mov eax, dword ptr [eax + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_004825d1:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004825d4:  // setne cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_004825d7:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004825d9:  // mov dword ptr [esp + 0x44], edi
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edi);
L_004825dd:  // mov edx, dword ptr [0x67a634]
    edx = (uint32_t)(M32((uint32_t)(0x67a634u)));
L_004825e3:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004825e5:  // je 0x48260d
    if (f.zf) goto L_0048260d;
L_004825e7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004825e8:  // lea ecx, [ebp + edi*4 + 0x9c]
    ecx = (uint32_t)((uint32_t)(ebp + edi * 4u + 0x9cu));
L_004825ef:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004825f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004825f4:  // mov ebx, esi
    ebx = (uint32_t)(esi);
L_004825f6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004825fb:  // mov dword ptr [esp + 0x3c], ebx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebx);
L_004825ff:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482604u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482604:  // fstp dword ptr [ebp + edi*4 + 0xa4]
    F32((uint32_t)(ebp + edi * 4u + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_0048260b:  // jmp 0x482646
    goto L_00482646;
L_0048260d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00482612:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482617u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482617:  // fsub dword ptr [ebp + edi*4 + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + edi * 4u + 0xa4u)));
L_0048261e:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_00482624:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00482626:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00482629:  // jne 0x482639
    if (!f.zf) goto L_00482639;
L_0048262b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048262d:  // lea ecx, [ebp + edi*4 + 0x9c]
    ecx = (uint32_t)((uint32_t)(ebp + edi * 4u + 0x9cu));
L_00482634:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482639u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482639:  // mov eax, dword ptr [ebp + edi*4 + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + edi * 4u + 0x9cu)));
L_00482640:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_00482644:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00482646:  // mov ecx, dword ptr [0x67a634]
    ecx = (uint32_t)(M32((uint32_t)(0x67a634u)));
L_0048264c:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0048264e:  // je 0x4834fa
    if (f.zf) goto L_004834fa;
L_00482654:  // mov eax, dword ptr [ebx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x34u)));
L_00482657:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_0048265f:  // test eax, 0x80000
    t0 = llog<32>(eax & 0x80000u, f);
L_00482664:  // je 0x482676
    if (f.zf) goto L_00482676;
L_00482666:  // mov edx, dword ptr [ebx + 0x26c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x26cu)));
L_0048266c:  // mov dword ptr [esp + 0x30], ebx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebx);
L_00482670:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_00482674:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_00482676:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00482678:  // je 0x4834fa
    if (f.zf) goto L_004834fa;
L_0048267e:  // mov esi, dword ptr [ebx + 0x30]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_00482681:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00482683:  // je 0x4834fa
    if (f.zf) goto L_004834fa;
L_00482689:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0048268b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048268d:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482690u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482690:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00482692:  // je 0x4834fa
    if (f.zf) goto L_004834fa;
L_00482698:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048269a:  // mov dword ptr [esp + 0x34], 0x27ffffff
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x27ffffffu);
L_004826a2:  // jne 0x4826b2
    if (!f.zf) goto L_004826b2;
L_004826a4:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_004826aa:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_004826b0:  // jmp 0x4826d6
    goto L_004826d6;
L_004826b2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004826b7:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004826bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004826bc:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004826c0:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004826c4:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004826ca:  // fadd dword ptr [0x67a62c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a62cu)));
L_004826d0:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_004826d6:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004826dc:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004826e0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004826e2:  // je 0x4826f3
    if (f.zf) goto L_004826f3;
L_004826e4:  // mov eax, dword ptr [eax + 0x1a8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x1a8u)));
L_004826ea:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004826ed:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004826f1:  // jne 0x482719
    if (!f.zf) goto L_00482719;
L_004826f3:  // mov eax, dword ptr [ebx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x138u)));
L_004826f9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004826fb:  // jne 0x48270b
    if (!f.zf) goto L_0048270b;
L_004826fd:  // mov dword ptr [esp + 0x40], 1
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x1u);
L_00482705:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00482709:  // jmp 0x48271e
    goto L_0048271e;
L_0048270b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048270c:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048270e:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00482710:  // and eax, 2
    t0 = llog<32>(eax & 0x2u, f);
    eax = (uint32_t)(t0);
L_00482713:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00482717:  // jmp 0x48271e
    goto L_0048271e;
L_00482719:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0048271c:  // ja 0x482741
    if ((!f.cf && !f.zf)) goto L_00482741;
L_0048271e:  // jmp dword ptr [eax*4 + 0x483508]
    t0 = M32((uint32_t)(eax * 4u + 0x483508u));
    switch (t0) {
    case 0x00482725u: goto L_00482725;
    case 0x0048272cu: goto L_0048272c;
    case 0x00482733u: goto L_00482733;
    case 0x0048273au: goto L_0048273a;
    case 0x0048325du: goto L_0048325d;
    case 0x00483267u: goto L_00483267;
    case 0x00483271u: goto L_00483271;
    case 0x0048327bu: goto L_0048327b;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00482725:  // mov edi, 0x3fff0000
    edi = (uint32_t)(0x3fff0000u);
L_0048272a:  // jmp 0x482745
    goto L_00482745;
L_0048272c:  // mov edi, 0x3f0000ff
    edi = (uint32_t)(0x3f0000ffu);
L_00482731:  // jmp 0x482745
    goto L_00482745;
L_00482733:  // mov edi, 0x3f444444
    edi = (uint32_t)(0x3f444444u);
L_00482738:  // jmp 0x482745
    goto L_00482745;
L_0048273a:  // mov edi, 0x3f00ff00
    edi = (uint32_t)(0x3f00ff00u);
L_0048273f:  // jmp 0x482745
    goto L_00482745;
L_00482741:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00482745:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00482747:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00482749:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048274e:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482753u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482753:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00482755:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00482757:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048275c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482761u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482761:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00482763:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_00482765:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048276a:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048276fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048276f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00482774:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00482776:  // mov ecx, dword ptr [ebp + 0x168]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_0048277c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00482781:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00482787:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00482789:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0048278d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00482792:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00482797:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_0048279d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048279e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004827a0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004827a5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004827a7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004827a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004827aa:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004827af:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004827b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004827b1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004827b4:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004827b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004827b9:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004827bc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004827c1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004827c3:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_004827c5:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004827cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004827ca:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004827cc:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_004827ce:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004827d3:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004827d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004827d8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004827da:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004827dc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004827e1:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004827e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004827e6:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004827e8:  // mov edi, dword ptr [esi + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004827eb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004827ed:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004827f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004827f0:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004827f2:  // push 0x62d304
    t0 = 0x62d304u; esp -= 4; M32(esp) = t0;
L_004827f7:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004827f9:  // call 0x4aa6b0
    t0 = 0x004aa6b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004827feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004827fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004827ff:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482804u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482804:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00482807:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00482809:  // je 0x48303b
    if (f.zf) goto L_0048303b;
L_0048280f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00482811:  // mov byte ptr [eax + 0x9c68a0], 0
    M8((uint32_t)(eax + 0x9c68a0u)) = (uint8_t)(0x0u);
L_00482818:  // mov byte ptr [eax + 0x9c6904], 1
    M8((uint32_t)(eax + 0x9c6904u)) = (uint8_t)(0x1u);
L_0048281f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00482820:  // cmp eax, 8
    t0 = lsub<32>(eax, 0x8u, f);
L_00482823:  // jl 0x482811
    if ((f.sf != f.of)) goto L_00482811;
L_00482825:  // fld qword ptr [0x5dbe40]
    lpush(x, (long double)F64((uint32_t)(0x5dbe40u)));
L_0048282b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0048282d:  // mov dword ptr [0x9c68a8], 0xff606060
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(0xff606060u);
L_00482837:  // mov byte ptr [0x9c690c], 1
    M8((uint32_t)(0x9c690cu)) = (uint8_t)(0x1u);
L_0048283e:  // mov dword ptr [esp + 0xf4], 0
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(0x0u);
L_00482849:  // mov dword ptr [esp + 0xc8], 0
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(0x0u);
L_00482854:  // mov dword ptr [esp + 0xcc], 0
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(0x0u);
L_0048285f:  // mov dword ptr [esp + 0xd0], 0
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(0x0u);
L_0048286a:  // mov dword ptr [esp + 0xf8], 0
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(0x0u);
L_00482875:  // mov dword ptr [esp + 0xfc], 0
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(0x0u);
L_00482880:  // mov dword ptr [esp + 0x100], 0
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(0x0u);
L_0048288b:  // mov dword ptr [esp + 0x104], 0
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(0x0u);
L_00482896:  // mov dword ptr [esp + 0x108], 0
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(0x0u);
L_004828a1:  // mov dword ptr [esp + 0x10c], 0
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(0x0u);
L_004828ac:  // mov dword ptr [esp + 0x110], 0
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(0x0u);
L_004828b7:  // mov dword ptr [esp + 0x114], 0
    M32((uint32_t)(esp + 0x114u)) = (uint32_t)(0x0u);
L_004828c2:  // mov dword ptr [esp + 0x118], 0
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(0x0u);
L_004828cd:  // mov dword ptr [esp + 0xc4], 0
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(0x0u);
L_004828d8:  // mov dword ptr [esp + 0xd8], 0x3f800000
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(0x3f800000u);
L_004828e3:  // mov dword ptr [esp + 0xdc], 0x3f800000
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(0x3f800000u);
L_004828ee:  // mov dword ptr [esp + 0xe0], 0xbf800000
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(0xbf800000u);
L_004828f9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004828fb:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00482901:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00482903:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00482906:  // jne 0x48292d
    if (!f.zf) goto L_0048292d;
L_00482908:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0048290e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00482910:  // fst dword ptr [esp + 0xd8]
    F32((uint32_t)(esp + 0xd8u)) = lf32(ST(0));
L_00482917:  // fstp dword ptr [esp + 0xdc]
    F32((uint32_t)(esp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_0048291e:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_00482924:  // fstp dword ptr [esp + 0xe0]
    F32((uint32_t)(esp + 0xe0u)) = lf32(ST(0));
    lpop(x);
L_0048292b:  // jmp 0x48292f
    goto L_0048292f;
L_0048292d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048292f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00482935:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_0048293a:  // lea esi, [esp + 0xc4]
    esi = (uint32_t)((uint32_t)(esp + 0xc4u));
L_00482941:  // mov edi, 0x9c65c0
    edi = (uint32_t)(0x9c65c0u);
L_00482946:  // mov dword ptr [esp + 0xe8], 0x3e20a0a1
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(0x3e20a0a1u);
L_00482951:  // mov dword ptr [esp + 0xec], 0x3e20a0a1
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(0x3e20a0a1u);
L_0048295c:  // mov dword ptr [esp + 0xf0], 0x3e20a0a1
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(0x3e20a0a1u);
L_00482967:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00482969:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0048296b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0048296e:  // mov byte ptr [0x9c68fc], 1
    M8((uint32_t)(0x9c68fcu)) = (uint8_t)(0x1u);
L_00482975:  // mov byte ptr [0x9c68a0], 1
    M8((uint32_t)(0x9c68a0u)) = (uint8_t)(0x1u);
L_0048297c:  // mov byte ptr [0x9c6904], 1
    M8((uint32_t)(0x9c6904u)) = (uint8_t)(0x1u);
L_00482983:  // mov dword ptr [esp + 0xc4], 0
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(0x0u);
L_0048298e:  // mov dword ptr [esp + 0xd8], 0xbf800000
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(0xbf800000u);
L_00482999:  // mov dword ptr [esp + 0xdc], 0xbf800000
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(0xbf800000u);
L_004829a4:  // mov dword ptr [esp + 0xe0], 0x3f800000
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(0x3f800000u);
L_004829af:  // jne 0x4829d6
    if (!f.zf) goto L_004829d6;
L_004829b1:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004829b7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004829b9:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_004829bf:  // fst dword ptr [esp + 0xd8]
    F32((uint32_t)(esp + 0xd8u)) = lf32(ST(0));
L_004829c6:  // fstp dword ptr [esp + 0xdc]
    F32((uint32_t)(esp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_004829cd:  // fstp dword ptr [esp + 0xe0]
    F32((uint32_t)(esp + 0xe0u)) = lf32(ST(0));
    lpop(x);
L_004829d4:  // jmp 0x4829d8
    goto L_004829d8;
L_004829d6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004829d8:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_004829dd:  // lea esi, [esp + 0xc4]
    esi = (uint32_t)((uint32_t)(esp + 0xc4u));
L_004829e4:  // mov edi, 0x9c661c
    edi = (uint32_t)(0x9c661cu);
L_004829e9:  // mov dword ptr [esp + 0xe8], 0
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(0x0u);
L_004829f4:  // mov dword ptr [esp + 0xec], 0
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(0x0u);
L_004829ff:  // mov dword ptr [esp + 0xf0], 0
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(0x0u);
L_00482a0a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00482a0c:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00482a12:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_00482a18:  // mov byte ptr [0x9c68fd], 1
    M8((uint32_t)(0x9c68fdu)) = (uint8_t)(0x1u);
L_00482a1f:  // mov byte ptr [0x9c68a1], 1
    M8((uint32_t)(0x9c68a1u)) = (uint8_t)(0x1u);
L_00482a26:  // mov byte ptr [0x9c6905], 1
    M8((uint32_t)(0x9c6905u)) = (uint8_t)(0x1u);
L_00482a2d:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_00482a34:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00482a3b:  // mov eax, dword ptr [ebp + 0x168]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_00482a41:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_00482a46:  // mov esi, 0x89ce14
    esi = (uint32_t)(0x89ce14u);
L_00482a4b:  // lea edi, [esp + 0x170]
    edi = (uint32_t)((uint32_t)(esp + 0x170u));
L_00482a52:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00482a54:  // mov ecx, dword ptr [eax + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_00482a5a:  // mov dword ptr [esp + 0xac], ecx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ecx);
L_00482a61:  // movsx edx, word ptr [eax + 0xb0]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0xb0u))));
L_00482a68:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00482a6c:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_00482a73:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00482a75:  // jne 0x482a9c
    if (!f.zf) goto L_00482a9c;
L_00482a77:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00482a7b:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00482a7f:  // mov dword ptr [esp + 0xb4], eax
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(eax);
L_00482a86:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_00482a8c:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_00482a92:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00482a96:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00482a9a:  // jmp 0x482ad7
    goto L_00482ad7;
L_00482a9c:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00482aa0:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00482aa4:  // mov dword ptr [esp + 0xb4], ecx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(ecx);
L_00482aab:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00482ab0:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482ab5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482ab5:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00482ab9:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00482abd:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00482ac3:  // fadd dword ptr [0x67a62c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a62cu)));
L_00482ac9:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_00482acf:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00482ad3:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00482ad7:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_00482ade:  // mov edi, dword ptr [esp + 0xb4]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_00482ae5:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00482ae6:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00482ae8:  // mov dword ptr [esp + 0xbc], 0
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(0x0u);
L_00482af3:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00482af5:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_00482af7:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_00482af9:  // mov eax, dword ptr [esp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_00482b00:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00482b01:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00482b03:  // lea edx, [esp + 0xac]
    edx = (uint32_t)((uint32_t)(esp + 0xacu));
L_00482b0a:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00482b0c:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_00482b0e:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00482b10:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00482b11:  // mov dword ptr [esp + 0xbc], ecx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(ecx);
L_00482b18:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00482b1d:  // mov dword ptr [esp + 0xb8], edi
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(edi);
L_00482b24:  // mov dword ptr [esp + 0xc4], 0x3f800000
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(0x3f800000u);
L_00482b2f:  // call 0x515ab0
    t0 = 0x00515ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482b34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482b34:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00482b39:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_00482b3e:  // lea edi, [esp + 0xc4]
    edi = (uint32_t)((uint32_t)(esp + 0xc4u));
L_00482b45:  // push 0x3e4ccccd
    t0 = 0x3e4ccccdu; esp -= 4; M32(esp) = t0;
L_00482b4a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00482b4c:  // push 0x3e4ccccd
    t0 = 0x3e4ccccdu; esp -= 4; M32(esp) = t0;
L_00482b51:  // push 0x42c80000
    t0 = 0x42c80000u; esp -= 4; M32(esp) = t0;
L_00482b56:  // push 0x3e4ccccd
    t0 = 0x3e4ccccdu; esp -= 4; M32(esp) = t0;
L_00482b5b:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00482b60:  // call 0x550b10
    t0 = 0x00550b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482b65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482b65:  // mov eax, dword ptr [ebx + 0x150]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x150u)));
L_00482b6b:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_00482b6e:  // fcom dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
L_00482b74:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00482b76:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00482b79:  // je 0x482b83
    if (f.zf) goto L_00482b83;
L_00482b7b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00482b7d:  // fld dword ptr [0x5d85ec]
    lpush(x, (long double)F32((uint32_t)(0x5d85ecu)));
L_00482b83:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00482b85:  // fmul dword ptr [0x5dbe3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe3cu)));
L_00482b8b:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00482b90:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_00482b95:  // lea edi, [esp + 0x1b8]
    edi = (uint32_t)((uint32_t)(esp + 0x1b8u));
L_00482b9c:  // mov dword ptr [esp + 0x130], 0
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(0x0u);
L_00482ba7:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00482ba9:  // fstp dword ptr [esp + 0x134]
    F32((uint32_t)(esp + 0x134u)) = lf32(ST(0));
    lpop(x);
L_00482bb0:  // fmul dword ptr [0x5dbe38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe38u)));
L_00482bb6:  // fstp dword ptr [esp + 0x138]
    F32((uint32_t)(esp + 0x138u)) = lf32(ST(0));
    lpop(x);
L_00482bbd:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00482bc3:  // fld qword ptr [0x5db280]
    lpush(x, (long double)F64((uint32_t)(0x5db280u)));
L_00482bc9:  // fcos 
    ST(0) = lfcos(ST(0));
L_00482bcb:  // fst dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
L_00482bcf:  // fld qword ptr [0x5db280]
    lpush(x, (long double)F64((uint32_t)(0x5db280u)));
L_00482bd5:  // fsin 
    ST(0) = lfsin(ST(0));
L_00482bd7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00482bd9:  // fchs 
    ST(0) = -ST(0);
L_00482bdb:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00482bdf:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_00482be6:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_00482bec:  // fcos 
    ST(0) = lfcos(ST(0));
L_00482bee:  // fst dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
L_00482bf2:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00482bf6:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_00482bfc:  // fsin 
    ST(0) = lfsin(ST(0));
L_00482bfe:  // fst dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
L_00482c02:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00482c06:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00482c0a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00482c0e:  // fld qword ptr [0x5db568]
    lpush(x, (long double)F64((uint32_t)(0x5db568u)));
L_00482c14:  // fcos 
    ST(0) = lfcos(ST(0));
L_00482c16:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_00482c1a:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00482c1e:  // fld qword ptr [0x5db568]
    lpush(x, (long double)F64((uint32_t)(0x5db568u)));
L_00482c24:  // fsin 
    ST(0) = lfsin(ST(0));
L_00482c26:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_00482c2a:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00482c2e:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00482c32:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00482c36:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482c3a:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00482c3e:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00482c42:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00482c44:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_00482c48:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00482c4c:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00482c50:  // fchs 
    ST(0) = -ST(0);
L_00482c52:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00482c56:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00482c5a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00482c5c:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00482c60:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00482c64:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482c68:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482c6a:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00482c6e:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00482c72:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482c76:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00482c7a:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00482c7e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482c80:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_00482c84:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00482c88:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482c8c:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_00482c90:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00482c94:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00482c98:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00482c9a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482c9e:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_00482ca2:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00482ca4:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_00482ca8:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_00482cac:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00482cb0:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00482cb4:  // fchs 
    ST(0) = -ST(0);
L_00482cb6:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00482cba:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00482cbe:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00482cc2:  // mov eax, dword ptr [esp + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00482cc6:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00482ccd:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_00482cd1:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00482cd5:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_00482cd9:  // fst dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
L_00482cdd:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00482cdf:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00482ce3:  // fmul dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa0u)));
L_00482cea:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482cec:  // fstp dword ptr [esp + 0x120]
    F32((uint32_t)(esp + 0x120u)) = lf32(ST(0));
    lpop(x);
L_00482cf3:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00482cf7:  // fmul dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa0u)));
L_00482cfe:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_00482d02:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00482d04:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d06:  // fstp dword ptr [esp + 0x124]
    F32((uint32_t)(esp + 0x124u)) = lf32(ST(0));
    lpop(x);
L_00482d0d:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_00482d14:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00482d16:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00482d1d:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00482d21:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d23:  // fstp dword ptr [esp + 0x128]
    F32((uint32_t)(esp + 0x128u)) = lf32(ST(0));
    lpop(x);
L_00482d2a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00482d2c:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_00482d30:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_00482d34:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00482d38:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_00482d3c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d3e:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00482d42:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00482d44:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d46:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_00482d4d:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00482d51:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_00482d55:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_00482d59:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_00482d5d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d5f:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00482d63:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00482d65:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d67:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_00482d6e:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_00482d75:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_00482d79:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00482d7d:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00482d81:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d83:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00482d87:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00482d89:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482d8b:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_00482d92:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00482d94:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00482d98:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00482d9c:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00482da0:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00482da4:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00482da8:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_00482daf:  // lea edx, [esp + 0x9c]
    edx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_00482db6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00482db7:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_00482dbb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00482dbc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00482dbd:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_00482dc1:  // lea ecx, [esp + 0x194]
    ecx = (uint32_t)((uint32_t)(esp + 0x194u));
L_00482dc8:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482dcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482dcd:  // lea ecx, [esp + 0x130]
    ecx = (uint32_t)((uint32_t)(esp + 0x130u));
L_00482dd4:  // lea edx, [esp + 0x188]
    edx = (uint32_t)((uint32_t)(esp + 0x188u));
L_00482ddb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00482ddc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00482ddd:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00482de2:  // call 0x550be0
    t0 = 0x00550be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482de7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482de7:  // mov eax, dword ptr [0x67a618]
    eax = (uint32_t)(M32((uint32_t)(0x67a618u)));
L_00482dec:  // mov ecx, dword ptr [0x67a61c]
    ecx = (uint32_t)(M32((uint32_t)(0x67a61cu)));
L_00482df2:  // mov edx, dword ptr [0x67a620]
    edx = (uint32_t)(M32((uint32_t)(0x67a620u)));
L_00482df8:  // mov dword ptr [esp + 0x8c], eax
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(eax);
L_00482dff:  // mov eax, dword ptr [0x67a624]
    eax = (uint32_t)(M32((uint32_t)(0x67a624u)));
L_00482e04:  // mov dword ptr [esp + 0x90], ecx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(ecx);
L_00482e0b:  // mov dword ptr [esp + 0x98], eax
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(eax);
L_00482e12:  // mov eax, dword ptr [ebx + 0x150]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x150u)));
L_00482e18:  // mov dword ptr [esp + 0x94], edx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edx);
L_00482e1f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00482e24:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00482e26:  // fchs 
    ST(0) = -ST(0);
L_00482e28:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_00482e2f:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00482e32:  // fchs 
    ST(0) = -ST(0);
L_00482e34:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_00482e3b:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00482e3e:  // mov esi, 0x67a5e8
    esi = (uint32_t)(0x67a5e8u);
L_00482e43:  // lea edi, [esp + 0x140]
    edi = (uint32_t)((uint32_t)(esp + 0x140u));
L_00482e4a:  // fchs 
    ST(0) = -ST(0);
L_00482e4c:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_00482e53:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00482e55:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_00482e5a:  // call 0x44a0c0
    t0 = 0x0044a0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482e5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482e5f:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_00482e65:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00482e69:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00482e6d:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00482e71:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00482e75:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00482e77:  // fcos 
    ST(0) = lfcos(ST(0));
L_00482e79:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00482e7b:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00482e7f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00482e83:  // fsin 
    ST(0) = lfsin(ST(0));
L_00482e85:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00482e89:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00482e8b:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00482e8f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00482e93:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482e97:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00482e99:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00482e9b:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00482e9d:  // fstp dword ptr [esp + 0x140]
    F32((uint32_t)(esp + 0x140u)) = lf32(ST(0));
    lpop(x);
L_00482ea4:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00482ea8:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00482eaa:  // fchs 
    ST(0) = -ST(0);
L_00482eac:  // fstp dword ptr [esp + 0x144]
    F32((uint32_t)(esp + 0x144u)) = lf32(ST(0));
    lpop(x);
L_00482eb3:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00482eb5:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00482eb9:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00482ebd:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00482ec1:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482ec5:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00482ec9:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00482ecb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482ecd:  // fstp dword ptr [esp + 0x148]
    F32((uint32_t)(esp + 0x148u)) = lf32(ST(0));
    lpop(x);
L_00482ed4:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00482ed8:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00482eda:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00482edc:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00482ee0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00482ee2:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00482ee4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00482ee6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00482eeb:  // fstp dword ptr [esp + 0x158]
    F32((uint32_t)(esp + 0x158u)) = lf32(ST(0));
    lpop(x);
L_00482ef2:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00482ef6:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00482efa:  // fstp dword ptr [esp + 0x15c]
    F32((uint32_t)(esp + 0x15cu)) = lf32(ST(0));
    lpop(x);
L_00482f01:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00482f05:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00482f07:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00482f0b:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00482f0f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00482f11:  // fstp dword ptr [esp + 0x160]
    F32((uint32_t)(esp + 0x160u)) = lf32(ST(0));
    lpop(x);
L_00482f18:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00482f1c:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00482f20:  // fchs 
    ST(0) = -ST(0);
L_00482f22:  // fstp dword ptr [esp + 0x168]
    F32((uint32_t)(esp + 0x168u)) = lf32(ST(0));
    lpop(x);
L_00482f29:  // fstp dword ptr [esp + 0x16c]
    F32((uint32_t)(esp + 0x16cu)) = lf32(ST(0));
    lpop(x);
L_00482f30:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00482f32:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00482f36:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00482f3a:  // fstp dword ptr [esp + 0x170]
    F32((uint32_t)(esp + 0x170u)) = lf32(ST(0));
    lpop(x);
L_00482f41:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482f46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482f46:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00482f48:  // lea ecx, [esp + 0x140]
    ecx = (uint32_t)((uint32_t)(esp + 0x140u));
L_00482f4f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00482f50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00482f51:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00482f52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00482f53:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00482f54:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00482f55:  // lea edx, [esp + 0xa4]
    edx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_00482f5c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00482f5d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00482f5e:  // mov dword ptr [0x630130], eax
    M32((uint32_t)(0x630130u)) = (uint32_t)(eax);
L_00482f63:  // mov dword ptr [0x704e48], eax
    M32((uint32_t)(0x704e48u)) = (uint32_t)(eax);
L_00482f68:  // call 0x4b6260
    t0 = 0x004b6260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482f6du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482f6d:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00482f72:  // lea esi, [esp + 0x1d8]
    esi = (uint32_t)((uint32_t)(esp + 0x1d8u));
L_00482f79:  // mov edi, 0x9c6954
    edi = (uint32_t)(0x9c6954u);
L_00482f7e:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00482f81:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00482f83:  // lea eax, [esp + 0x170]
    eax = (uint32_t)((uint32_t)(esp + 0x170u));
L_00482f8a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00482f8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00482f90:  // mov dword ptr [0x630130], 0x64
    M32((uint32_t)(0x630130u)) = (uint32_t)(0x64u);
L_00482f9a:  // mov byte ptr [0x9c73e9], 1
    M8((uint32_t)(0x9c73e9u)) = (uint8_t)(0x1u);
L_00482fa1:  // call 0x515ab0
    t0 = 0x00515ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482fa6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482fa6:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00482fab:  // lea esi, [esp + 0xc4]
    esi = (uint32_t)((uint32_t)(esp + 0xc4u));
L_00482fb2:  // mov edi, 0x9c6994
    edi = (uint32_t)(0x9c6994u);
L_00482fb7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00482fb9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00482fbb:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00482fbd:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00482fc2:  // mov byte ptr [0x9c73ea], 1
    M8((uint32_t)(0x9c73eau)) = (uint8_t)(0x1u);
L_00482fc9:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_00482fd0:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00482fd7:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00482fde:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00482fe5:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00482feau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00482fea:  // mov ebx, dword ptr [esp + 0x44]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00482fee:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00482ff0:  // jne 0x483167
    if (!f.zf) goto L_00483167;
L_00482ff6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00482ffb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00482ffd:  // mov ecx, dword ptr [ebp + 0x168]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_00483003:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483008:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_0048300e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483010:  // push 0x3d8f5c29
    t0 = 0x3d8f5c29u; esp -= 4; M32(esp) = t0;
L_00483015:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_0048301b:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00483020:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_00483025:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483027:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048302c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048302e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00483030:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483031:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_00483036:  // jmp 0x4831bf
    goto L_004831bf;
L_0048303b:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048303d:  // je 0x482fea
    if (f.zf) goto L_00482fea;
L_0048303f:  // mov edi, dword ptr [edi + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00483042:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00483044:  // je 0x482fea
    if (f.zf) goto L_00482fea;
L_00483046:  // lea ecx, [edi + 0x18]
    ecx = (uint32_t)((uint32_t)(edi + 0x18u));
L_00483049:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0048304b:  // je 0x482fea
    if (f.zf) goto L_00482fea;
L_0048304d:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00483050:  // mov edx, dword ptr [0x8aa8b8]
    edx = (uint32_t)(M32((uint32_t)(0x8aa8b8u)));
L_00483056:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_0048305a:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0048305c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00483060:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00483064:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00483067:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_0048306b:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0048306f:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00483072:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00483076:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0048307a:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0048307e:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_00483082:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00483086:  // fld dword ptr [ecx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x10u)));
L_00483089:  // fcomp dword ptr [ecx + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x14u)));
    lpop(x);
L_0048308c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048308e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00483091:  // jne 0x4830a3
    if (!f.zf) goto L_004830a3;
L_00483093:  // fld dword ptr [ecx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x14u)));
L_00483096:  // fdiv dword ptr [ecx + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ecx + 0x10u)));
L_00483099:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0048309d:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004830a1:  // jmp 0x4830b1
    goto L_004830b1;
L_004830a3:  // fld dword ptr [ecx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x10u)));
L_004830a6:  // fdiv dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ecx + 0x14u)));
L_004830a9:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004830ad:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004830b1:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004830b5:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004830b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004830ba:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004830be:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004830bf:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004830c3:  // mov ebx, dword ptr [esp + 0x4c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004830c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004830c8:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004830cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004830cd:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004830d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004830d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004830d3:  // push 0x3fffffff
    t0 = 0x3fffffffu; esp -= 4; M32(esp) = t0;
L_004830d8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004830da:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004830df:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004830e1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004830e3:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004830e5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004830e6:  // mov dword ptr [esp + 0x64], 0x3fffffff
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x3fffffffu);
L_004830ee:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_004830f3:  // jne 0x483122
    if (!f.zf) goto L_00483122;
L_004830f5:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_004830fb:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_00483101:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483102:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00483105:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_0048310b:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_00483111:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483112:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00483115:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048311au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048311a:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0048311d:  // jmp 0x482ff6
    goto L_00482ff6;
L_00483122:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483127:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048312cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048312c:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_00483130:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483131:  // fild dword ptr [esp + 0x5c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x5cu)));
L_00483135:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0048313b:  // fadd dword ptr [0x67a62c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a62cu)));
L_00483141:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_00483147:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048314a:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00483150:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_00483156:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483157:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048315a:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048315fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048315f:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00483162:  // jmp 0x482fee
    goto L_00482fee;
L_00483167:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048316c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048316e:  // mov edx, dword ptr [ebp + 0x168]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_00483174:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483179:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048317b:  // push 0x3d8f5c29
    t0 = 0x3d8f5c29u; esp -= 4; M32(esp) = t0;
L_00483180:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00483185:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_0048318a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048318c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483191:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483193:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00483195:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483196:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_0048319b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004831a0:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004831a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004831a5:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_004831a9:  // fild dword ptr [esp + 0x58]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x58u)));
L_004831ad:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004831b3:  // fadd dword ptr [0x67a62c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a62cu)));
L_004831b9:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_004831bf:  // fadd dword ptr [0x5dbe34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe34u)));
L_004831c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004831c6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004831c9:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_004831cf:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_004831d5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004831d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004831d9:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004831deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004831de:  // mov esi, dword ptr [esp + 0x78]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004831e2:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004831e5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004831e7:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004831e9:  // call dword ptr [eax + 0x138]
    t0 = M32((uint32_t)(eax + 0x138u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004831efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004831ef:  // fcomp dword ptr [0x5d8570]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8570u)));
    lpop(x);
L_004831f5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004831f7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004831fa:  // jne 0x4834fa
    if (!f.zf) goto L_004834fa;
L_00483200:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00483202:  // call 0x4f9a40
    t0 = 0x004f9a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483207u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483207:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00483209:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048320b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048320f:  // call dword ptr [edx + 0x138]
    t0 = M32((uint32_t)(edx + 0x138u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483215u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483215:  // fdivr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) / (ST(0));
L_00483219:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0048321d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00483223:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483225:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00483228:  // je 0x483234
    if (f.zf) goto L_00483234;
L_0048322a:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00483232:  // jmp 0x48324d
    goto L_0048324d;
L_00483234:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00483238:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0048323e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483240:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00483243:  // jne 0x48324d
    if (!f.zf) goto L_0048324d;
L_00483245:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_0048324d:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00483251:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00483254:  // ja 0x483283
    if ((!f.cf && !f.zf)) goto L_00483283;
L_00483256:  // jmp dword ptr [eax*4 + 0x483518]
    t0 = M32((uint32_t)(eax * 4u + 0x483518u));
    switch (t0) {
    case 0x0048325du: goto L_0048325d;
    case 0x00483267u: goto L_00483267;
    case 0x00483271u: goto L_00483271;
    case 0x0048327bu: goto L_0048327b;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0048325d:  // mov dword ptr [esp + 0x34], 0xffcf5555
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xffcf5555u);
L_00483265:  // jmp 0x483283
    goto L_00483283;
L_00483267:  // mov dword ptr [esp + 0x34], 0xff5555cf
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xff5555cfu);
L_0048326f:  // jmp 0x483283
    goto L_00483283;
L_00483271:  // mov dword ptr [esp + 0x34], 0xff777777
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xff777777u);
L_00483279:  // jmp 0x483283
    goto L_00483283;
L_0048327b:  // mov dword ptr [esp + 0x34], 0xff55cf55
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xff55cf55u);
L_00483283:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483288:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048328a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048328f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483291:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00483293:  // push 0x3d8f5c29
    t0 = 0x3d8f5c29u; esp -= 4; M32(esp) = t0;
L_00483298:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_0048329d:  // jne 0x4832eb
    if (!f.zf) goto L_004832eb;
L_0048329f:  // mov esi, dword ptr [esp + 0x4c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004832a3:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004832a7:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_004832ad:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_004832b3:  // mov ecx, dword ptr [ebp + 0x168]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_004832b9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004832ba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004832bc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004832bd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004832bf:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004832c1:  // fadd dword ptr [0x5dbe34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe34u)));
L_004832c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004832c8:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_004832cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004832ce:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004832d1:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_004832d7:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_004832dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004832de:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004832e1:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004832e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004832e6:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004832e9:  // jmp 0x483351
    goto L_00483351;
L_004832eb:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004832ef:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004832f3:  // mov ecx, dword ptr [ebp + 0x168]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_004832f9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004832fa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004832fc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004832fd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004832ff:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00483301:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483302:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_00483307:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048330c:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483311u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483311:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_00483315:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483316:  // fild dword ptr [esp + 0x5c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x5cu)));
L_0048331a:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00483320:  // fadd dword ptr [0x67a62c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a62cu)));
L_00483326:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_0048332c:  // fadd dword ptr [0x5dbe34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe34u)));
L_00483332:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00483335:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_0048333b:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_00483341:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483342:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00483345:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048334au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048334a:  // mov esi, dword ptr [esp + 0x70]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0048334e:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00483351:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00483355:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00483357:  // je 0x4834fa
    if (f.zf) goto L_004834fa;
L_0048335d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483362:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483364:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483369:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048336b:  // push 0x3d8f5c29
    t0 = 0x3d8f5c29u; esp -= 4; M32(esp) = t0;
L_00483370:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00483375:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_0048337a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048337c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483381:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483383:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00483385:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00483387:  // jne 0x4833a3
    if (!f.zf) goto L_004833a3;
L_00483389:  // mov edx, dword ptr [ebp + 0x168]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_0048338f:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_00483395:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_0048339b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048339c:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_004833a1:  // jmp 0x4833d3
    goto L_004833d3;
L_004833a3:  // mov eax, dword ptr [ebp + 0x168]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_004833a9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004833ae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004833af:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_004833b4:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004833b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004833b9:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_004833bd:  // fild dword ptr [esp + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x64u)));
L_004833c1:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004833c7:  // fadd dword ptr [0x67a62c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a62cu)));
L_004833cd:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_004833d3:  // fadd dword ptr [0x5dbe30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe30u)));
L_004833d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004833da:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004833dd:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_004833e3:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_004833e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004833ea:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004833ed:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004833f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004833f2:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004833f4:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004833f7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004833f9:  // call dword ptr [edx + 0x138]
    t0 = M32((uint32_t)(edx + 0x138u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004833ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004833ff:  // fcomp dword ptr [0x5d8570]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8570u)));
    lpop(x);
L_00483405:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483407:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048340a:  // jne 0x4834fa
    if (!f.zf) goto L_004834fa;
L_00483410:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00483412:  // call 0x4f99f0
    t0 = 0x004f99f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483417u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483417:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00483419:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048341b:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0048341f:  // call dword ptr [eax + 0x138]
    t0 = M32((uint32_t)(eax + 0x138u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483425u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483425:  // fdivr dword ptr [esp + 0x30]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x30u))) / (ST(0));
L_00483429:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0048342d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00483433:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483435:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00483438:  // je 0x483444
    if (f.zf) goto L_00483444;
L_0048343a:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00483442:  // jmp 0x48345d
    goto L_0048345d;
L_00483444:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00483448:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0048344e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483450:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00483453:  // jne 0x48345d
    if (!f.zf) goto L_0048345d;
L_00483455:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_0048345d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483462:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483464:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483469:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048346b:  // push 0x3d8f5c29
    t0 = 0x3d8f5c29u; esp -= 4; M32(esp) = t0;
L_00483470:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00483475:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00483477:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483478:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048347a:  // jne 0x48349f
    if (!f.zf) goto L_0048349f;
L_0048347c:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00483480:  // mov edx, dword ptr [ebp + 0x168]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_00483486:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_0048348c:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_00483492:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483493:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00483495:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00483497:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483498:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_0048349d:  // jmp 0x4834d8
    goto L_004834d8;
L_0048349f:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004834a3:  // mov ecx, dword ptr [ebp + 0x168]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x168u)));
L_004834a9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004834aa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004834ac:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004834ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004834af:  // push 0x3c343958
    t0 = 0x3c343958u; esp -= 4; M32(esp) = t0;
L_004834b4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004834b9:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004834beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004834be:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_004834c2:  // fild dword ptr [esp + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x64u)));
L_004834c6:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004834cc:  // fadd dword ptr [0x67a62c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a62cu)));
L_004834d2:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_004834d8:  // fadd dword ptr [0x5dbe30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe30u)));
L_004834de:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004834df:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004834e2:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_004834e8:  // fadd dword ptr [0x5dbe48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe48u)));
L_004834ee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004834ef:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004834f2:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004834f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004834f7:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004834fa:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004834fb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004834fc:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004834fd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004834fe:  // add esp, 0x1e8
    t0 = ladd<32>(esp, 0x1e8u, f);
    esp = (uint32_t)(t0);
L_00483504:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00482590, 00482590)
