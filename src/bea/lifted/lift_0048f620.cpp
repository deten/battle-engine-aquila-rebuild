// lifted from 0048f620 (FUN_0048f620, 2412 bytes, 691 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048f620(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048f620;
L_0048f620:  // mov eax, 0x2174
    eax = (uint32_t)(0x2174u);
L_0048f625:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f62au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f62a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048f62b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048f62c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048f62d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048f62e:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0048f630:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_0048f634:  // fld dword ptr [edi + 0xc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xcu)));
L_0048f637:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048f63d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048f63f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048f642:  // jne 0x48ff7f
    if (!f.zf) goto L_0048ff7f;
L_0048f648:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0048f64a:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0048f64c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f651:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f656u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f656:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0048f658:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0048f65a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f65f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f664u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f664:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0048f666:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f668:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f66a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f66f:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0048f676:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0048f67d:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_0048f684:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0048f68b:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f690u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f690:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0048f692:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f694:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f696:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f69b:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f6a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f6a0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f6a2:  // call 0x551480
    t0 = 0x00551480u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f6a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f6a7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0048f6aa:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f6af:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f6b1:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0048f6b3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f6b5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f6bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f6ba:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f6bc:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0048f6be:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f6c0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f6c5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f6cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f6ca:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048f6cc:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0048f6ce:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f6d3:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f6d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f6d8:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f6da:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f6dc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f6de:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f6e3:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f6e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f6e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f6ea:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0048f6ec:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f6ee:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f6f3:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f6f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f6f8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048f6fa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f6fc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f6fe:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f703:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f708u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f708:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f70a:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0048f70c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f711:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f716u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f716:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048f718:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0048f71a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f71f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f724u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f724:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f726:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0048f728:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f72d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f732u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f732:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f734:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_0048f736:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f73b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f740u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f740:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f742:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0048f744:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f749:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f74eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f74e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f750:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f752:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048f757:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f75cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f75c:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0048f75f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048f761:  // je 0x48f7cc
    if (f.zf) goto L_0048f7cc;
L_0048f763:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048f765:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0048f767:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f76c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f771u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f771:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048f773:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f775:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f777:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f77c:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f781u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f781:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f783:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f785:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048f78a:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f78fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f78f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048f794:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f796:  // mov eax, dword ptr [edi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0048f799:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048f79e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7a0:  // push 0x41f00000
    t0 = 0x41f00000u; esp -= 4; M32(esp) = t0;
L_0048f7a5:  // push 0x42200000
    t0 = 0x42200000u; esp -= 4; M32(esp) = t0;
L_0048f7aa:  // push 0xc0101010
    t0 = 0xc0101010u; esp -= 4; M32(esp) = t0;
L_0048f7af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7b1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048f7b6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7b8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f7bb:  // push 0x3c23d70a
    t0 = 0x3c23d70au; esp -= 4; M32(esp) = t0;
L_0048f7c0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7c2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7c4:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f7c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f7c9:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0048f7cc:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048f7d1:  // call 0x515950
    t0 = 0x00515950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f7d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f7d6:  // fdivr dword ptr [0x5db538]
    ST(0) = ((long double)F32((uint32_t)(0x5db538u))) / (ST(0));
L_0048f7dc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7de:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f7e0:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048f7e5:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0048f7ec:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0048f7f3:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0048f7f7:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f7fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f7fc:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048f7fe:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0048f800:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f805:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f80au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f80a:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0048f80c:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0048f80e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f813:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f818u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f818:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0048f81a:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0048f81c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f821:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f826u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f826:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f828:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0048f82a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f82c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f831:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f836u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f836:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f838:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048f83a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f83c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f841:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f846u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f846:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f848:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0048f84a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f84c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f851:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f856u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f856:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048f858:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f85a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f85c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f861:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f866u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f866:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f868:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f86a:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048f86f:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f874u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f874:  // fld dword ptr [edi + 0xc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xcu)));
L_0048f877:  // fmul dword ptr [0x5dc230]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc230u)));
L_0048f87d:  // mov ebx, dword ptr [0x8a9d88]
    ebx = (uint32_t)(M32((uint32_t)(0x8a9d88u)));
L_0048f883:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0048f889:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0048f88d:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048f891:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_0048f893:  // fld dword ptr [edi + 0xc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xcu)));
L_0048f896:  // fmul dword ptr [0x5dc22c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc22cu)));
L_0048f89c:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0048f8a0:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048f8a4:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0048f8a8:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0048f8ad:  // fld dword ptr [edi + 0xc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xcu)));
L_0048f8b0:  // fmul dword ptr [0x5dc228]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc228u)));
L_0048f8b6:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0048f8ba:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0048f8be:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f8c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f8c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048f8c5:  // je 0x48f8ce
    if (f.zf) goto L_0048f8ce;
L_0048f8c7:  // sar edi, 1
    t0 = lsar<32>(edi, 0x1u, f);
    edi = (uint32_t)(t0);
L_0048f8c9:  // mov ebp, 0x8c
    ebp = (uint32_t)(0x8cu);
L_0048f8ce:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048f8d2:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048f8d6:  // mov eax, dword ptr [edx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0048f8d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f8da:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048f8db:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048f8dc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048f8dd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048f8de:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048f8e0:  // call 0x4b9010
    t0 = 0x004b9010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f8e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f8e5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048f8e7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f8e9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f8eb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f8f0:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f8f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f8f5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f8f7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048f8f9:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048f8fe:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f903u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f903:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048f905:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0048f907:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048f90c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f911u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f911:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048f915:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0048f918:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048f91a:  // jne 0x48f939
    if (!f.zf) goto L_0048f939;
L_0048f91c:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0048f920:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0048f926:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048f927:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048f928:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048f929:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048f92a:  // fsubr dword ptr [ecx + 0xc]
    ST(0) = ((long double)F32((uint32_t)(ecx + 0xcu))) - (ST(0));
L_0048f92d:  // fstp dword ptr [ecx + 0xc]
    F32((uint32_t)(ecx + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0048f930:  // add esp, 0x2174
    t0 = ladd<32>(esp, 0x2174u, f);
    esp = (uint32_t)(t0);
L_0048f936:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0048f939:  // fld dword ptr [ecx + 0xc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xcu)));
L_0048f93c:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0048f942:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048f944:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048f947:  // je 0x48f97e
    if (f.zf) goto L_0048f97e;
L_0048f949:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0048f94d:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0048f953:  // fadd dword ptr [ecx + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0xcu)));
L_0048f956:  // fst dword ptr [ecx + 0xc]
    F32((uint32_t)(ecx + 0xcu)) = lf32(ST(0));
L_0048f959:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0048f95f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048f961:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048f964:  // jne 0x48ff7f
    if (!f.zf) goto L_0048ff7f;
L_0048f96a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048f96b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048f96c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048f96d:  // mov dword ptr [ecx + 0xc], 0x3f800000
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(0x3f800000u);
L_0048f974:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048f975:  // add esp, 0x2174
    t0 = ladd<32>(esp, 0x2174u, f);
    esp = (uint32_t)(t0);
L_0048f97b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0048f97e:  // mov eax, dword ptr [0x8a9ac8]
    eax = (uint32_t)(M32((uint32_t)(0x8a9ac8u)));
L_0048f983:  // mov dword ptr [esp + 0x10], 0x42700000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x42700000u);
L_0048f98b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f98c:  // call 0x469cf0
    t0 = 0x00469cf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f991u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f991:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0048f994:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0048f999:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0048f99d:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f9a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f9a2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048f9a4:  // jne 0x48fa99
    if (!f.zf) goto L_0048fa99;
L_0048f9aa:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048f9ac:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048f9b0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048f9b1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048f9b2:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0048f9b7:  // call 0x4f2500
    t0 = 0x004f2500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f9bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f9bc:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048f9be:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0048f9c2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f9c3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048f9c4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f9c6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048f9cb:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f9d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f9d0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048f9d2:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f9d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f9d7:  // push 0x44034000
    t0 = 0x44034000u; esp -= 4; M32(esp) = t0;
L_0048f9dc:  // lea ecx, [esp + 0x248]
    ecx = (uint32_t)((uint32_t)(esp + 0x248u));
L_0048f9e3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048f9e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048f9e5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048f9e7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048f9ec:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f9f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f9f1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048f9f3:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048f9f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048f9f8:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0048f9fa:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0048f9fc:  // jle 0x48fa8f
    if ((f.zf || f.sf != f.of)) goto L_0048fa8f;
L_0048fa02:  // lea esi, [esp + 0x244]
    esi = (uint32_t)((uint32_t)(esp + 0x244u));
L_0048fa09:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0048fa0b:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0048fa0f:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fa14:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048fa15:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048fa16:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fa18:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fa1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fa1d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fa1f:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fa24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fa24:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048fa28:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fa2d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fa32:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fa34:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fa36:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048fa37:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0048fa39:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048fa3a:  // push 0x42700000
    t0 = 0x42700000u; esp -= 4; M32(esp) = t0;
L_0048fa3f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fa41:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fa46:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fa4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fa4b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fa4d:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fa52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fa52:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fa56:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0048fa5c:  // add esi, 0xc8
    t0 = ladd<32>(esi, 0xc8u, f);
    esi = (uint32_t)(t0);
L_0048fa62:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0048fa63:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048fa67:  // jne 0x48fa0b
    if (!f.zf) goto L_0048fa0b;
L_0048fa69:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0048fa6b:  // jle 0x48fa8f
    if ((f.zf || f.sf != f.of)) goto L_0048fa8f;
L_0048fa6d:  // mov eax, dword ptr [0x8a9ac8]
    eax = (uint32_t)(M32((uint32_t)(0x8a9ac8u)));
L_0048fa72:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fa76:  // cmp eax, 0x263
    t0 = lsub<32>(eax, 0x263u, f);
L_0048fa7b:  // jne 0x48fa85
    if (!f.zf) goto L_0048fa85;
L_0048fa7d:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0048fa83:  // jmp 0x48fa8b
    goto L_0048fa8b;
L_0048fa85:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0048fa8b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048fa8f:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0048fa90:  // cmp ebp, 9
    t0 = lsub<32>(ebp, 0x9u, f);
L_0048fa93:  // jl 0x48f9ac
    if ((f.sf != f.of)) goto L_0048f9ac;
L_0048fa99:  // push 0xf4213fbf
    t0 = 0xf4213fbfu; esp -= 4; M32(esp) = t0;
L_0048fa9e:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0048faa3:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048faa8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048faa8:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0048faac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048faad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048faae:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fab3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fab3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0048fab6:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0048fabb:  // mov dword ptr [esp + 0x10], 0x43330000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x43330000u);
L_0048fac3:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fac8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fac8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048faca:  // je 0x48fad4
    if (f.zf) goto L_0048fad4;
L_0048facc:  // mov dword ptr [esp + 0x10], 0x42c80000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x42c80000u);
L_0048fad4:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048fad6:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0048fad8:  // mov eax, 0x8a9ae4
    eax = (uint32_t)(0x8a9ae4u);
L_0048fadd:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_0048fae2:  // cmp dword ptr [eax], ebp
    t0 = lsub<32>(M32((uint32_t)(eax)), ebp, f);
L_0048fae4:  // je 0x48faeb
    if (f.zf) goto L_0048faeb;
L_0048fae6:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_0048faeb:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0048faee:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0048faef:  // jne 0x48fae2
    if (!f.zf) goto L_0048fae2;
L_0048faf1:  // cmp edx, ebp
    t0 = lsub<32>(edx, ebp, f);
L_0048faf3:  // je 0x48fb2e
    if (f.zf) goto L_0048fb2e;
L_0048faf5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048faf9:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048faff:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fb04:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fb09:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fb0a:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0048fb0e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fb0f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048fb10:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0048fb12:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fb13:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fb18:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fb1b:  // push 0x42700000
    t0 = 0x42700000u; esp -= 4; M32(esp) = t0;
L_0048fb20:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fb22:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fb27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fb27:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fb29:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fb2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fb2e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fb32:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0048fb38:  // mov eax, dword ptr [0x8a9ac8]
    eax = (uint32_t)(M32((uint32_t)(0x8a9ac8u)));
L_0048fb3d:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_0048fb41:  // cmp eax, 0x263
    t0 = lsub<32>(eax, 0x263u, f);
L_0048fb46:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_0048fb4e:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0048fb52:  // jne 0x48fb65
    if (!f.zf) goto L_0048fb65;
L_0048fb54:  // cmp dword ptr [0x83d97c], 2
    t0 = lsub<32>(M32((uint32_t)(0x83d97cu)), 0x2u, f);
L_0048fb5b:  // jne 0x48fb65
    if (!f.zf) goto L_0048fb65;
L_0048fb5d:  // mov dword ptr [esp + 0x18], 0x3f7851ec
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f7851ecu);
L_0048fb65:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048fb69:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0048fb6d:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0048fb71:  // mov ebx, 0x8a9ae4
    ebx = (uint32_t)(0x8a9ae4u);
L_0048fb76:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0048fb7a:  // mov dword ptr [esp + 0x1c], 0xa
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xau);
L_0048fb82:  // cmp dword ptr [ebx], 0
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x0u, f);
L_0048fb85:  // je 0x48fd05
    if (f.zf) goto L_0048fd05;
L_0048fb8b:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_0048fb8e:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0048fb93:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048fb94:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fb99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fb99:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0048fb9d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048fb9f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fba0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048fba1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fba3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fba8:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fbadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fbad:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fbaf:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fbb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fbb4:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0048fbb8:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048fbba:  // jle 0x48fbc2
    if ((f.zf || f.sf != f.of)) goto L_0048fbc2;
L_0048fbbc:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0048fbbe:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_0048fbc2:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048fbc6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048fbc8:  // jne 0x48fc43
    if (!f.zf) goto L_0048fc43;
L_0048fbca:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048fbce:  // fcomp dword ptr [0x5d8cc4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cc4u)));
    lpop(x);
L_0048fbd4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048fbd6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048fbd9:  // je 0x48fc17
    if (f.zf) goto L_0048fc17;
L_0048fbdb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fbdf:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048fbe5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fbe7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fbe9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048fbea:  // push 0xffffef8f
    t0 = 0xffffef8fu; esp -= 4; M32(esp) = t0;
L_0048fbef:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048fbf0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048fbf1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fbf6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fbf7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fbfa:  // push 0x42700000
    t0 = 0x42700000u; esp -= 4; M32(esp) = t0;
L_0048fbff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fc01:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fc06:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fc0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fc0b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fc0d:  // call 0x540010
    t0 = 0x00540010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fc12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fc12:  // jmp 0x48fcf3
    goto L_0048fcf3;
L_0048fc17:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fc1b:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048fc21:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fc26:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fc2b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fc2d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fc2f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048fc30:  // push 0xffffef8f
    t0 = 0xffffef8fu; esp -= 4; M32(esp) = t0;
L_0048fc35:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fc36:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fc39:  // push 0x42700000
    t0 = 0x42700000u; esp -= 4; M32(esp) = t0;
L_0048fc3e:  // jmp 0x48fce0
    goto L_0048fce0;
L_0048fc43:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0048fc45:  // mov word ptr [esp + 0x2a], 0
    M16((uint32_t)(esp + 0x2au)) = (uint16_t)(0x0u);
L_0048fc4c:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0048fc4f:  // mov word ptr [esp + 0x28], 0x2510
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)(0x2510u);
L_0048fc56:  // mov ecx, 0xfff0402f
    ecx = (uint32_t)(0xfff0402fu);
L_0048fc5b:  // jne 0x48fc69
    if (!f.zf) goto L_0048fc69;
L_0048fc5d:  // mov word ptr [esp + 0x28], 0x250c
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)(0x250cu);
L_0048fc64:  // mov ecx, 0xff40f02f
    ecx = (uint32_t)(0xff40f02fu);
L_0048fc69:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048fc6d:  // fcomp dword ptr [0x5d8cc4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cc4u)));
    lpop(x);
L_0048fc73:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048fc75:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048fc78:  // je 0x48fcb0
    if (f.zf) goto L_0048fcb0;
L_0048fc7a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fc7e:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048fc84:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fc86:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0048fc8a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fc8c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048fc8d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fc8e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048fc8f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048fc90:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fc95:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fc96:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fc99:  // fild dword ptr [esp + 0x44]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x44u)));
L_0048fc9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fc9e:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_0048fca2:  // fadd dword ptr [0x5dc224]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dc224u)));
L_0048fca8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fcab:  // jmp 0x48fbff
    goto L_0048fbff;
L_0048fcb0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fcb4:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048fcba:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fcbf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fcc4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fcc6:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_0048fcca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048fccc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048fccd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fcce:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fccf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fcd2:  // fild dword ptr [esp + 0x40]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_0048fcd6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fcd7:  // fadd dword ptr [0x5dc224]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dc224u)));
L_0048fcdd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fce0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fce2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fce7:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fcecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fcec:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fcee:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fcf3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fcf3:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048fcf7:  // fmul dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0048fcfd:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_0048fd01:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048fd05:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048fd09:  // add ebx, 8
    t0 = ladd<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_0048fd0c:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048fd0d:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0048fd11:  // jne 0x48fb82
    if (!f.zf) goto L_0048fb82;
L_0048fd17:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048fd1b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048fd1c:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0048fd1f:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048fd23:  // jl 0x48fb6d
    if ((f.sf != f.of)) goto L_0048fb6d;
L_0048fd29:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fd2d:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0048fd33:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048fd35:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0048fd37:  // mov eax, 0x8a9b34
    eax = (uint32_t)(0x8a9b34u);
L_0048fd3c:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_0048fd41:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048fd45:  // cmp dword ptr [eax], ebp
    t0 = lsub<32>(M32((uint32_t)(eax)), ebp, f);
L_0048fd47:  // je 0x48fd4e
    if (f.zf) goto L_0048fd4e;
L_0048fd49:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_0048fd4e:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0048fd51:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0048fd52:  // jne 0x48fd45
    if (!f.zf) goto L_0048fd45;
L_0048fd54:  // cmp edx, ebp
    t0 = lsub<32>(edx, ebp, f);
L_0048fd56:  // je 0x48fee2
    if (f.zf) goto L_0048fee2;
L_0048fd5c:  // push 0xc4afbca7
    t0 = 0xc4afbca7u; esp -= 4; M32(esp) = t0;
L_0048fd61:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0048fd66:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fd6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fd6b:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0048fd6f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048fd70:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fd71:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fd76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fd76:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048fd7a:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048fd80:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0048fd83:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0048fd87:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fd8c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fd91:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fd92:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fd93:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048fd94:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0048fd96:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fd97:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fd9c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fd9f:  // push 0x42700000
    t0 = 0x42700000u; esp -= 4; M32(esp) = t0;
L_0048fda4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fda6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fdabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fdab:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fdad:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fdb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fdb2:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fdb6:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0048fdbc:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0048fdbe:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0048fdc2:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0048fdc6:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0048fdca:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0048fdce:  // mov edi, 0x8a9b34
    edi = (uint32_t)(0x8a9b34u);
L_0048fdd3:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0048fdd7:  // mov dword ptr [esp + 0x1c], 0xa
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xau);
L_0048fddf:  // cmp dword ptr [edi], ebp
    t0 = lsub<32>(M32((uint32_t)(edi)), ebp, f);
L_0048fde1:  // je 0x48febe
    if (f.zf) goto L_0048febe;
L_0048fde7:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0048fdea:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0048fdef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048fdf0:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fdf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fdf5:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0048fdf9:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048fdfb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fdfc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048fdfd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fdff:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fe04:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fe09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fe09:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048fe0b:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fe10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fe10:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0048fe14:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0048fe16:  // jle 0x48fe1e
    if ((f.zf || f.sf != f.of)) goto L_0048fe1e;
L_0048fe18:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0048fe1a:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0048fe1e:  // cmp dword ptr [esp + 0x14], ebp
    t0 = lsub<32>(M32((uint32_t)(esp + 0x14u)), ebp, f);
L_0048fe22:  // jne 0x48fe4b
    if (!f.zf) goto L_0048fe4b;
L_0048fe24:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fe28:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048fe2e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fe33:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fe38:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fe39:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fe3a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048fe3b:  // push 0xffffef8f
    t0 = 0xffffef8fu; esp -= 4; M32(esp) = t0;
L_0048fe40:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fe41:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fe44:  // push 0x42700000
    t0 = 0x42700000u; esp -= 4; M32(esp) = t0;
L_0048fe49:  // jmp 0x48fe9d
    goto L_0048fe9d;
L_0048fe4b:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0048fe4d:  // mov word ptr [esp + 0x2a], bp
    M16((uint32_t)(esp + 0x2au)) = (uint16_t)((ebp & 0xffffu));
L_0048fe52:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_0048fe55:  // mov word ptr [esp + 0x28], 0x2510
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)(0x2510u);
L_0048fe5c:  // mov eax, 0xfff0402f
    eax = (uint32_t)(0xfff0402fu);
L_0048fe61:  // jne 0x48fe6f
    if (!f.zf) goto L_0048fe6f;
L_0048fe63:  // mov word ptr [esp + 0x28], 0x250c
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)(0x250cu);
L_0048fe6a:  // mov eax, 0xff40f02f
    eax = (uint32_t)(0xff40f02fu);
L_0048fe6f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048fe73:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0048fe79:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fe7e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fe83:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fe84:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0048fe88:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fe89:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048fe8a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048fe8b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fe8c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fe8f:  // fild dword ptr [esp + 0x40]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_0048fe93:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048fe94:  // fadd dword ptr [0x5dc224]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dc224u)));
L_0048fe9a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048fe9d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048fe9f:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048fea4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048fea9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048fea9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048feab:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048feb0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048feb0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048feb4:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0048feba:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048febe:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048fec2:  // add edi, 8
    t0 = ladd<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_0048fec5:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048fec6:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0048feca:  // jne 0x48fddf
    if (!f.zf) goto L_0048fddf;
L_0048fed0:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048fed4:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048fed5:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0048fed8:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048fedc:  // jl 0x48fdca
    if ((f.sf != f.of)) goto L_0048fdca;
L_0048fee2:  // cmp dword ptr [0x89be28], ebp
    t0 = lsub<32>(M32((uint32_t)(0x89be28u)), ebp, f);
L_0048fee8:  // je 0x48ff05
    if (f.zf) goto L_0048ff05;
L_0048feea:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048feee:  // mov dword ptr [0x89be28], ebp
    M32((uint32_t)(0x89be28u)) = (uint32_t)(ebp);
L_0048fef4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048fef9:  // push 0x2e
    t0 = 0x2eu; esp -= 4; M32(esp) = t0;
L_0048fefb:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0048fefd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048fefe:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ff00:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ff03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ff03:  // jmp 0x48ff09
    goto L_0048ff09;
L_0048ff05:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048ff09:  // mov eax, dword ptr [0x807418]
    eax = (uint32_t)(M32((uint32_t)(0x807418u)));
L_0048ff0e:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048ff10:  // je 0x48ff4f
    if (f.zf) goto L_0048ff4f;
L_0048ff12:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048ff17:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ff18:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048ff1d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ff1e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048ff23:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048ff28:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0048ff2a:  // push 0x40490fdb
    t0 = 0x40490fdbu; esp -= 4; M32(esp) = t0;
L_0048ff2f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048ff34:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ff35:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048ff37:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ff38:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_0048ff3d:  // push 0x43e30000
    t0 = 0x43e30000u; esp -= 4; M32(esp) = t0;
L_0048ff42:  // push 0x41c00000
    t0 = 0x41c00000u; esp -= 4; M32(esp) = t0;
L_0048ff47:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ff4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ff4c:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0048ff4f:  // push 0x43f00000
    t0 = 0x43f00000u; esp -= 4; M32(esp) = t0;
L_0048ff54:  // push 0x43480000
    t0 = 0x43480000u; esp -= 4; M32(esp) = t0;
L_0048ff59:  // push 0x43c80000
    t0 = 0x43c80000u; esp -= 4; M32(esp) = t0;
L_0048ff5e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ff5f:  // call 0x523cc0
    t0 = 0x00523cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ff64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ff64:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0048ff67:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0048ff69:  // je 0x48ff7a
    if (f.zf) goto L_0048ff7a;
L_0048ff6b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048ff6d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048ff72:  // push 0x2e
    t0 = 0x2eu; esp -= 4; M32(esp) = t0;
L_0048ff74:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ff75:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ff77:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ff7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ff7a:  // call 0x523a70
    t0 = 0x00523a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ff7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ff7f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048ff80:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048ff81:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048ff82:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048ff83:  // add esp, 0x2174
    t0 = ladd<32>(esp, 0x2174u, f);
    esp = (uint32_t)(t0);
L_0048ff89:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0048f620, 0048f620)
