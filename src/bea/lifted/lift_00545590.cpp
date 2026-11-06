// lifted from 00545590 (FUN_00545590, 3209 bytes, 892 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00545590(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00545590;
L_00545590:  // mov eax, dword ptr [0x8aa94c]
    eax = (uint32_t)(M32((uint32_t)(0x8aa94cu)));
L_00545595:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00545598:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00545599:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054559a:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0054559c:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0054559e:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_005455a0:  // jne 0x5455b0
    if (!f.zf) goto L_005455b0;
L_005455a2:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_005455a9:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_005455b0:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005455b4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005455b5:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_005455b7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005455b8:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_005455bb:  // mov dword ptr [esp + 0x28], 0x3b000000
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x3b000000u);
L_005455c3:  // lea edx, [eax + ecx*4]
    edx = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_005455c6:  // mov ecx, dword ptr [ebx + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x24u)));
L_005455c9:  // lea esi, [ecx + edx*4]
    esi = (uint32_t)((uint32_t)(ecx + edx * 4u));
L_005455cc:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_005455d0:  // jne 0x545640
    if (!f.zf) goto L_00545640;
L_005455d2:  // fld dword ptr [0x8a9e20]
    lpush(x, (long double)F32((uint32_t)(0x8a9e20u)));
L_005455d8:  // fmul dword ptr [0x5d8580]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8580u)));
L_005455de:  // fadd dword ptr [0x8c0294]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8c0294u)));
L_005455e4:  // fst dword ptr [0x8c0294]
    F32((uint32_t)(0x8c0294u)) = lf32(ST(0));
L_005455ea:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_005455f0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005455f2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005455f5:  // jne 0x545609
    if (!f.zf) goto L_00545609;
L_005455f7:  // fld dword ptr [0x8c0294]
    lpush(x, (long double)F32((uint32_t)(0x8c0294u)));
L_005455fd:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00545603:  // fstp dword ptr [0x8c0294]
    F32((uint32_t)(0x8c0294u)) = lf32(ST(0));
    lpop(x);
L_00545609:  // fld dword ptr [0x8a9e20]
    lpush(x, (long double)F32((uint32_t)(0x8a9e20u)));
L_0054560f:  // fmul dword ptr [0x5e50e4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e50e4u)));
L_00545615:  // fadd dword ptr [0x8c0298]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8c0298u)));
L_0054561b:  // fst dword ptr [0x8c0298]
    F32((uint32_t)(0x8c0298u)) = lf32(ST(0));
L_00545621:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00545627:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00545629:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054562c:  // jne 0x545640
    if (!f.zf) goto L_00545640;
L_0054562e:  // fld dword ptr [0x8c0298]
    lpush(x, (long double)F32((uint32_t)(0x8c0298u)));
L_00545634:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_0054563a:  // fstp dword ptr [0x8c0298]
    F32((uint32_t)(0x8c0298u)) = lf32(ST(0));
    lpop(x);
L_00545640:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00545645:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00545647:  // mov edi, 0x628258
    edi = (uint32_t)(0x628258u);
L_0054564c:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0054564e:  // cmp dword ptr [0x8554fc], ebp
    t0 = lsub<32>(M32((uint32_t)(0x8554fcu)), ebp, f);
L_00545654:  // jne 0x545661
    if (!f.zf) goto L_00545661;
L_00545656:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545657:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_0054565c:  // call 0x528b50
    t0 = 0x00528b50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545661u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545661:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545663:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545668:  // call 0x527cc0
    t0 = 0x00527cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054566du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054566d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0054566f:  // je 0x545af2
    if (f.zf) goto L_00545af2;
L_00545675:  // cmp dword ptr [0x8aa94c], ebp
    t0 = lsub<32>(M32((uint32_t)(0x8aa94cu)), ebp, f);
L_0054567b:  // je 0x54568a
    if (f.zf) goto L_0054568a;
L_0054567d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054567e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545683:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545688u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545688:  // jmp 0x545699
    goto L_00545699;
L_0054568a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054568c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054568e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054568f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545694:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545699u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545699:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054569b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054569d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054569e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005456a3:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005456a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005456a8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005456a9:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005456ab:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005456ac:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005456b1:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005456b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005456b6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005456b8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005456ba:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005456bb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005456c0:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005456c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005456c5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005456c7:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_005456c9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005456ca:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005456cf:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005456d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005456d4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005456d5:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_005456d7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005456d8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005456dd:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005456e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005456e2:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005456e4:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005456e6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005456e8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005456ed:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005456f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005456f2:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005456f4:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_005456f6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005456f8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005456fd:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545702u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545702:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545704:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545706:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545708:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054570d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545712u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545712:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545714:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545716:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545718:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054571d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545722u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545722:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545724:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545726:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545728:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054572d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545732u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545732:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545734:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00545736:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545738:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054573d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545742u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545742:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545744:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545746:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545748:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054574d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545752:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545754:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545756:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545758:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054575d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545762u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545762:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545764:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545766:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545768:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054576d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545772u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545772:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545774:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00545776:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545778:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054577d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545782u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545782:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545784:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545786:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545788:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054578d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545792u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545792:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545794:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545796:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545798:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054579d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005457a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005457a2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005457a4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005457a6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005457a8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005457ad:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005457b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005457b2:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005457b4:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005457b9:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005457beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005457be:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005457c0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005457c5:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005457cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005457ca:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005457cc:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_005457ce:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005457cf:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005457d4:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005457d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005457d9:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005457db:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_005457dd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005457de:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005457e3:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005457e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005457e8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005457ea:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_005457ec:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005457ed:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005457f2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005457f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005457f7:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005457fc:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_00545806:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_00545810:  // mov dword ptr [0x628258], 0x3b000000
    M32((uint32_t)(0x628258u)) = (uint32_t)(0x3b000000u);
L_0054581a:  // mov dword ptr [0x62826c], 0x3b000000
    M32((uint32_t)(0x62826cu)) = (uint32_t)(0x3b000000u);
L_00545824:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00545826:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_0054582b:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0054582d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054582e:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545834u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545834:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545835:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545837:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545838:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054583d:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545842u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545842:  // mov eax, dword ptr [ebx + 0x30]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_00545845:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00545848:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00545849:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054584a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054584f:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545854u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545854:  // mov ecx, dword ptr [0x67a7d0]
    ecx = (uint32_t)(M32((uint32_t)(0x67a7d0u)));
L_0054585a:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054585fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054585f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545860:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545862:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545867:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054586cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054586c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054586e:  // call 0x551420
    t0 = 0x00551420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545873u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545873:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00545876:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054587b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054587d:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0054587f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545881:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545886u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545886:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545887:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545889:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054588b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545890:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545895u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545895:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0054589a:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_0054589f:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_005458a9:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_005458b3:  // mov dword ptr [0x628258], 0x3f800000
    M32((uint32_t)(0x628258u)) = (uint32_t)(0x3f800000u);
L_005458bd:  // mov dword ptr [0x62826c], 0x3f800000
    M32((uint32_t)(0x62826cu)) = (uint32_t)(0x3f800000u);
L_005458c7:  // mov dword ptr [0x628278], 0
    M32((uint32_t)(0x628278u)) = (uint32_t)(0x0u);
L_005458d1:  // mov dword ptr [0x62827c], 0
    M32((uint32_t)(0x62827cu)) = (uint32_t)(0x0u);
L_005458db:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005458dd:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_005458df:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005458e0:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005458e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005458e6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005458e8:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_005458ea:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005458ec:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005458f1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005458f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005458f6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005458f7:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_005458f9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005458fb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545900:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545905u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545905:  // mov ecx, dword ptr [ebx + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x38u)));
L_00545908:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054590du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054590d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054590e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545910:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545915:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054591au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054591a:  // mov eax, dword ptr [0x8c0294]
    eax = (uint32_t)(M32((uint32_t)(0x8c0294u)));
L_0054591f:  // mov ecx, dword ptr [0x8c0298]
    ecx = (uint32_t)(M32((uint32_t)(0x8c0298u)));
L_00545925:  // mov dword ptr [0x628278], eax
    M32((uint32_t)(0x628278u)) = (uint32_t)(eax);
L_0054592a:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0054592f:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_00545939:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_00545943:  // mov dword ptr [0x628258], 0x3b800000
    M32((uint32_t)(0x628258u)) = (uint32_t)(0x3b800000u);
L_0054594d:  // mov dword ptr [0x62826c], 0x3b800000
    M32((uint32_t)(0x62826cu)) = (uint32_t)(0x3b800000u);
L_00545957:  // mov dword ptr [0x62827c], ecx
    M32((uint32_t)(0x62827cu)) = (uint32_t)(ecx);
L_0054595d:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054595f:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00545964:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_00545966:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545967:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054596du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054596d:  // mov ecx, dword ptr [0x67a7d0]
    ecx = (uint32_t)(M32((uint32_t)(0x67a7d0u)));
L_00545973:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545978u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545978:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545979:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054597b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545980:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545985u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545985:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545986:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545988:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054598a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054598f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545994u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545994:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545996:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00545998:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054599a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054599f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005459a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005459a4:  // fld qword ptr [0x5d87e0]
    lpush(x, (long double)F64((uint32_t)(0x5d87e0u)));
L_005459aa:  // fcos 
    ST(0) = lfcos(ST(0));
L_005459ac:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005459b1:  // mov dword ptr [0x628278], 0x3e99999a
    M32((uint32_t)(0x628278u)) = (uint32_t)(0x3e99999au);
L_005459bb:  // mov dword ptr [0x62827c], 0x3e99999a
    M32((uint32_t)(0x62827cu)) = (uint32_t)(0x3e99999au);
L_005459c5:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_005459ca:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_005459cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005459cd:  // fld qword ptr [0x5d87e0]
    lpush(x, (long double)F64((uint32_t)(0x5d87e0u)));
L_005459d3:  // fsin 
    ST(0) = lfsin(ST(0));
L_005459d5:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_005459d9:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_005459df:  // fst dword ptr [0x628258]
    F32((uint32_t)(0x628258u)) = lf32(ST(0));
L_005459e5:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_005459e9:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_005459ef:  // fst dword ptr [0x62825c]
    F32((uint32_t)(0x62825cu)) = lf32(ST(0));
L_005459f5:  // fchs 
    ST(0) = -ST(0);
L_005459f7:  // fstp dword ptr [0x628268]
    F32((uint32_t)(0x628268u)) = lf32(ST(0));
    lpop(x);
L_005459fd:  // fstp dword ptr [0x62826c]
    F32((uint32_t)(0x62826cu)) = lf32(ST(0));
    lpop(x);
L_00545a03:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00545a05:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a0b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a0d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545a0e:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00545a13:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a18:  // mov ecx, dword ptr [ebx + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_00545a1b:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545a20:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00545a23:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00545a25:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00545a26:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545a27:  // call dword ptr [edx + 0x1a0]
    t0 = M32((uint32_t)(edx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a2d:  // mov ecx, dword ptr [ebx + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_00545a30:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545a31:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a36:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545a3b:  // call 0x527d20
    t0 = 0x00527d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a40:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00545a42:  // jne 0x545ae8
    if (!f.zf) goto L_00545ae8;
L_00545a48:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a4a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a4c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a4e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545a53:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a58:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a5a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545a5c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a5e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545a63:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a68:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a6a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a6c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545a6e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545a73:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a78:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a7a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545a7c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545a7e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545a83:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a88:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a8a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a8c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545a8e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545a93:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545a98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545a98:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545a9a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545a9c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545a9e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545aa3:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545aa8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545aa8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545aa9:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545aab:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545aac:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545ab1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ab6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545ab6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545ab8:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545aba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545abc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545ac1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ac6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545ac6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545ac8:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545aca:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545acc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545ad1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ad6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545ad6:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545ad8:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545ada:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545adc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545ae1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ae6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545ae6:  // jmp 0x545af2
    goto L_00545af2;
L_00545ae8:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545aed:  // call 0x527da0
    t0 = 0x00527da0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545af2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545af2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545af4:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545af9:  // call 0x527cc0
    t0 = 0x00527cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545afeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545afe:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00545b00:  // je 0x545d4d
    if (f.zf) goto L_00545d4d;
L_00545b06:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545b08:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00545b0a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545b0b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545b10:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545b15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545b15:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545b17:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545b19:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545b1a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545b1f:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545b24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545b24:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545b26:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00545b28:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545b29:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545b2e:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545b33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545b33:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545b38:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_00545b42:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_00545b4c:  // mov dword ptr [0x628258], 0x3b000000
    M32((uint32_t)(0x628258u)) = (uint32_t)(0x3b000000u);
L_00545b56:  // mov dword ptr [0x62826c], 0x3b000000
    M32((uint32_t)(0x62826cu)) = (uint32_t)(0x3b000000u);
L_00545b60:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00545b62:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00545b67:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00545b69:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545b6a:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545b70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545b70:  // mov eax, dword ptr [ebx + 0x30]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_00545b73:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00545b76:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00545b77:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545b78:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545b7d:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545b82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545b82:  // mov ecx, dword ptr [0x67a7d0]
    ecx = (uint32_t)(M32((uint32_t)(0x67a7d0u)));
L_00545b88:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545b8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545b8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545b8e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545b90:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545b95:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545b9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545b9a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545b9b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545ba0:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ba5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545ba5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545ba7:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545ba9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545baa:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545baf:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545bb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545bb4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545bb5:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545bb7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545bb8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545bbd:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545bc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545bc2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545bc4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545bc6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545bc7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545bcc:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545bd1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545bd1:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545bd3:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00545bd5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545bd6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545bdb:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545be0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545be0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545be1:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545be3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545be4:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545be9:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545beeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545bee:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545bf0:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545bf2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545bf4:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545bf9:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545bfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545bfe:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545c00:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00545c02:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c04:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545c09:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545c0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545c0e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c10:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545c12:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c14:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545c19:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545c1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545c1e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c20:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545c22:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c24:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545c29:  // call 0x513870
    t0 = 0x00513870u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545c2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545c2e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c30:  // call 0x551420
    t0 = 0x00551420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545c35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545c35:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00545c38:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545c3d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c3f:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545c44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545c44:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545c46:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00545c48:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c4a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545c4f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545c54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545c54:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545c55:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545c57:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545c59:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545c5e:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545c63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545c63:  // fld qword ptr [0x5d87e0]
    lpush(x, (long double)F64((uint32_t)(0x5d87e0u)));
L_00545c69:  // fcos 
    ST(0) = lfcos(ST(0));
L_00545c6b:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545c70:  // mov dword ptr [0x628278], 0x3e99999a
    M32((uint32_t)(0x628278u)) = (uint32_t)(0x3e99999au);
L_00545c7a:  // mov dword ptr [0x62827c], 0x3e99999a
    M32((uint32_t)(0x62827cu)) = (uint32_t)(0x3e99999au);
L_00545c84:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00545c89:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_00545c8b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545c8c:  // fld qword ptr [0x5d87e0]
    lpush(x, (long double)F64((uint32_t)(0x5d87e0u)));
L_00545c92:  // fsin 
    ST(0) = lfsin(ST(0));
L_00545c94:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00545c98:  // fmul dword ptr [0x5d8bec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8becu)));
L_00545c9e:  // fst dword ptr [0x628258]
    F32((uint32_t)(0x628258u)) = lf32(ST(0));
L_00545ca4:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00545ca8:  // fmul dword ptr [0x5d8bec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8becu)));
L_00545cae:  // fst dword ptr [0x62825c]
    F32((uint32_t)(0x62825cu)) = lf32(ST(0));
L_00545cb4:  // fchs 
    ST(0) = -ST(0);
L_00545cb6:  // fstp dword ptr [0x628268]
    F32((uint32_t)(0x628268u)) = lf32(ST(0));
    lpop(x);
L_00545cbc:  // fstp dword ptr [0x62826c]
    F32((uint32_t)(0x62826cu)) = lf32(ST(0));
    lpop(x);
L_00545cc2:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00545cc4:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ccau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545cca:  // mov ecx, dword ptr [ebx + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_00545ccd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545cce:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545cd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545cd3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545cd5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545cd6:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00545cdb:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ce0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545ce0:  // mov edx, dword ptr [ebx + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_00545ce3:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545ce8:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00545ceb:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00545ced:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00545cee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545cef:  // call dword ptr [ecx + 0x1a0]
    t0 = M32((uint32_t)(ecx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545cf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545cf5:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545cfa:  // call 0x527d20
    t0 = 0x00527d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545cffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545cff:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00545d01:  // jne 0x545d43
    if (!f.zf) goto L_00545d43;
L_00545d03:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d04:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545d06:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d07:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d0c:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d11:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d13:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00545d15:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d17:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d1c:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d21:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d23:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d25:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d27:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d2c:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d31:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d33:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545d35:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d37:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d3c:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d41:  // jmp 0x545d4d
    goto L_00545d4d;
L_00545d43:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545d48:  // call 0x527da0
    t0 = 0x00527da0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d4d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d4e:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545d53:  // call 0x527cc0
    t0 = 0x00527cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d58:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00545d5a:  // je 0x545e93
    if (f.zf) goto L_00545e93;
L_00545d60:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d61:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d66:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d6b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545d6d:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545d6f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d70:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d75:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d7a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d7b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545d7d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d7e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d83:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d88:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545d8a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545d8c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d8d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545d92:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545d97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545d97:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545d99:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00545d9b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545d9c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545da1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545da6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545da6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545da7:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545da9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545daa:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545daf:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545db4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545db4:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545db6:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00545db8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545db9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545dbe:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545dc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545dc3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00545dc5:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00545dc7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545dc8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545dcd:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545dd2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545dd2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545dd4:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00545dd6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545dd7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545ddc:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545de1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545de1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545de3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545de5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545de7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545dec:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545df1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545df1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545df3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545df5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545df7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545dfc:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e01:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545e06:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_00545e10:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_00545e1a:  // mov dword ptr [0x628258], 0x3b000000
    M32((uint32_t)(0x628258u)) = (uint32_t)(0x3b000000u);
L_00545e24:  // mov dword ptr [0x62826c], 0x3b000000
    M32((uint32_t)(0x62826cu)) = (uint32_t)(0x3b000000u);
L_00545e2e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00545e30:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00545e35:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00545e37:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545e38:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e3e:  // mov edx, dword ptr [ebx + 0x30]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_00545e41:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545e46:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00545e49:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545e4a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545e4b:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e50:  // mov ecx, dword ptr [ebx + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_00545e53:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545e54:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e59:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00545e5b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545e5c:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00545e61:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e66:  // mov edx, dword ptr [ebx + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_00545e69:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545e6e:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00545e71:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00545e73:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00545e74:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545e75:  // call dword ptr [ecx + 0x1a0]
    t0 = M32((uint32_t)(ecx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e7b:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545e80:  // call 0x527d20
    t0 = 0x00527d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e85:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00545e87:  // je 0x545e93
    if (f.zf) goto L_00545e93;
L_00545e89:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00545e8e:  // call 0x527da0
    t0 = 0x00527da0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545e93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545e93:  // mov dword ptr [0x628278], 0
    M32((uint32_t)(0x628278u)) = (uint32_t)(0x0u);
L_00545e9d:  // mov dword ptr [0x62827c], 0
    M32((uint32_t)(0x62827cu)) = (uint32_t)(0x0u);
L_00545ea7:  // cmp dword ptr [ebx + 0x34], 2
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x34u)), 0x2u, f);
L_00545eab:  // jle 0x545f0c
    if ((f.zf || f.sf != f.of)) goto L_00545f0c;
L_00545ead:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545eb2:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_00545ebc:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_00545ec6:  // mov dword ptr [0x628258], 0x3b000000
    M32((uint32_t)(0x628258u)) = (uint32_t)(0x3b000000u);
L_00545ed0:  // mov dword ptr [0x62826c], 0x3b000000
    M32((uint32_t)(0x62826cu)) = (uint32_t)(0x3b000000u);
L_00545eda:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00545edc:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00545ee1:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00545ee3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545ee4:  // mov dword ptr [esp + 0x34], 0x3b000000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x3b000000u);
L_00545eec:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545ef2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545ef2:  // mov edx, dword ptr [ebx + 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x34u)));
L_00545ef5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545efa:  // sub edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00545efd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00545efe:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545eff:  // push 0x1081
    t0 = 0x1081u; esp -= 4; M32(esp) = t0;
L_00545f04:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545f05:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00545f07:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545f0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545f0c:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00545f0f:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_00545f13:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00545f15:  // jle 0x546035
    if ((f.zf || f.sf != f.of)) goto L_00546035;
L_00545f1b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00545f1d:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_00545f21:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00545f25:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00545f27:  // je 0x545f3c
    if (f.zf) goto L_00545f3c;
L_00545f29:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00545f2b:  // mov ecx, dword ptr [eax + edi - 0x48]
    ecx = (uint32_t)(M32((uint32_t)(eax + edi + 0xffffffb8u)));
L_00545f2f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00545f30:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00545f32:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545f37:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545f3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545f3c:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00545f40:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_00545f4a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00545f4c:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_00545f56:  // mov dword ptr [0x62826c], eax
    M32((uint32_t)(0x62826cu)) = (uint32_t)(eax);
L_00545f5b:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545f60:  // mov dword ptr [0x628258], edx
    M32((uint32_t)(0x628258u)) = (uint32_t)(edx);
L_00545f66:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00545f6b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00545f6d:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00545f6f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545f70:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545f76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545f76:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00545f79:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00545f7d:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00545f7f:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_00545f81:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00545f84:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00545f86:  // je 0x546005
    if (f.zf) goto L_00546005;
L_00545f88:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00545f8c:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00545f8f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00545f91:  // mov ax, word ptr [ebp]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebp))) & 0xffffu);
L_00545f95:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00545f98:  // movsx eax, byte ptr [edx + ecx*4 + 0x10]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edx + ecx * 4u + 0x10u))));
L_00545f9d:  // lea ecx, [edx + ecx*4]
    ecx = (uint32_t)((uint32_t)(edx + ecx * 4u));
L_00545fa0:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00545fa2:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00545fa5:  // mov dl, byte ptr [ecx + 0x11]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x11u))) & 0xffu);
L_00545fa8:  // mov edi, dword ptr [ecx + 0xc]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00545fab:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00545fad:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00545fb0:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_00545fb3:  // mov edx, dword ptr [0x9c64dc]
    edx = (uint32_t)(M32((uint32_t)(0x9c64dcu)));
L_00545fb9:  // lea esi, [edx + eax*4]
    esi = (uint32_t)((uint32_t)(edx + eax * 4u));
L_00545fbc:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00545fc1:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00545fc4:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00545fc6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00545fc7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545fc8:  // call dword ptr [ecx + 0x1a0]
    t0 = M32((uint32_t)(ecx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545fceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545fce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00545fd0:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00545fd2:  // call 0x500360
    t0 = 0x00500360u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545fd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545fd7:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00545fda:  // mov ecx, dword ptr [edi + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x38u)));
L_00545fdd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00545fde:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00545fe0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00545fe1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00545fe3:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00545fe5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00545fea:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545fefu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545fef:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00545ff3:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00545ff7:  // add ebp, 2
    t0 = ladd<32>(ebp, 0x2u, f);
    ebp = (uint32_t)(t0);
L_00545ffa:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00545ffb:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00545fff:  // jne 0x545f8c
    if (!f.zf) goto L_00545f8c;
L_00546001:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00546005:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00546009:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054600d:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00546011:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00546014:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00546015:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00546017:  // add edi, 0x50
    t0 = ladd<32>(edi, 0x50u, f);
    edi = (uint32_t)(t0);
L_0054601a:  // add edx, 0xc
    t0 = ladd<32>(edx, 0xcu, f);
    edx = (uint32_t)(t0);
L_0054601d:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054601f:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00546023:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00546027:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0054602b:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0054602f:  // jl 0x545f25
    if ((f.sf != f.of)) goto L_00545f25;
L_00546035:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_0054603a:  // call 0x527dd0
    t0 = 0x00527dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054603fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054603f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00546040:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00546043:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00546044:  // jl 0x54611a
    if ((f.sf != f.of)) goto L_0054611a;
L_0054604a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054604c:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0054604e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00546050:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546055:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054605au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054605a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054605c:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0054605e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546060:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546065:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054606au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054606a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054606c:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_0054606e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00546070:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546075:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054607au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054607a:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054607c:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_0054607e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546080:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546085:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054608au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054608a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054608c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054608e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00546090:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546095:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054609au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054609a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054609c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054609e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005460a0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005460a5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005460aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005460aa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005460ac:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005460ae:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005460b0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005460b5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005460bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005460ba:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005460bc:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_005460be:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005460c0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005460c5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005460cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005460ca:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005460cc:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_005460ce:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005460d0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005460d5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005460dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005460da:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005460dc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005460de:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005460e0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005460e5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005460eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005460ea:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005460ec:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005460ee:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005460f0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005460f5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005460fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005460fa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005460fc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005460fe:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546100:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546105:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054610au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054610a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054610c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054610e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546110:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546115:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054611au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054611a:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_0054611f:  // call 0x527dd0
    t0 = 0x00527dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546124u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546124:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00546127:  // jl 0x546169
    if ((f.sf != f.of)) goto L_00546169;
L_00546129:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054612b:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0054612d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054612f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546134:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546139u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546139:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054613b:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_0054613d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054613f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546144:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546149u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546149:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054614b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054614d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054614f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546154:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546159u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546159:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054615b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054615d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054615f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546164:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546169u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546169:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054616b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054616d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054616f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546174:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546179u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546179:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054617b:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_0054617d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054617f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546184:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546189u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546189:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054618b:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0054618d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054618f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546194:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546199u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546199:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054619b:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0054619d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054619f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005461a4:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005461a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005461a9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005461ab:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005461ad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005461af:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005461b4:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005461b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005461b9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005461bb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005461bd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005461bf:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005461c4:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005461c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005461c9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005461cb:  // push 0x91
    t0 = 0x91u; esp -= 4; M32(esp) = t0;
L_005461d0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005461d5:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005461dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005461da:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005461dc:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_005461de:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005461e3:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005461e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005461e8:  // mov al, byte ptr [0x89d680]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89d680u))) & 0xffu);
L_005461ed:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005461ef:  // jne 0x5461fa
    if (!f.zf) goto L_005461fa;
L_005461f1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005461f3:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_005461f5:  // call 0x546490
    t0 = 0x00546490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005461fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005461fa:  // mov eax, dword ptr [0x8aa94c]
    eax = (uint32_t)(M32((uint32_t)(0x8aa94cu)));
L_005461ff:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00546200:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00546202:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00546203:  // jne 0x546213
    if (!f.zf) goto L_00546213;
L_00546205:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_0054620c:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00546213:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00546216:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00545590, 00545590)
