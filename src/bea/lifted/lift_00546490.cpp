// lifted from 00546490 (FUN_00546490, 1126 bytes, 362 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00546490(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00546490;
L_00546490:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00546496:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00546498:  // push 0x5d7a68
    t0 = 0x5d7a68u; esp -= 4; M32(esp) = t0;
L_0054649d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054649e:  // mov eax, dword ptr [0x9c648c]
    eax = (uint32_t)(M32((uint32_t)(0x9c648cu)));
L_005464a3:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_005464aa:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_005464ad:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005464ae:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005464af:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005464b0:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005464b2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005464b4:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_005464b6:  // je 0x5468e0
    if (f.zf) goto L_005468e0;
L_005464bc:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_005464c1:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005464c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005464c6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005464c8:  // jne 0x5468e0
    if (!f.zf) goto L_005468e0;
L_005464ce:  // cmp dword ptr [esi + 8], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x8u)), edi, f);
L_005464d1:  // je 0x5468e0
    if (f.zf) goto L_005468e0;
L_005464d7:  // cmp dword ptr [esi + 0xc], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0xcu)), edi, f);
L_005464da:  // je 0x5468e0
    if (f.zf) goto L_005468e0;
L_005464e0:  // cmp dword ptr [esi + 0x1c], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x1cu)), edi, f);
L_005464e3:  // je 0x5468e0
    if (f.zf) goto L_005468e0;
L_005464e9:  // cmp dword ptr [esi + 0x18], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x18u)), edi, f);
L_005464ec:  // je 0x5468e0
    if (f.zf) goto L_005468e0;
L_005464f2:  // cmp dword ptr [0x9c648c], edi
    t0 = lsub<32>(M32((uint32_t)(0x9c648cu)), edi, f);
L_005464f8:  // je 0x5468e0
    if (f.zf) goto L_005468e0;
L_005464fe:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00546502:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546503:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00546506:  // lea edx, [eax + ecx*4]
    edx = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_00546509:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0054650c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546511:  // lea ebx, [eax + edx*4]
    ebx = (uint32_t)((uint32_t)(eax + edx * 4u));
L_00546514:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546519u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546519:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054651b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054651d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054651e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546523:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546528u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546528:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546529:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054652b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054652c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546531:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546536u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546536:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00546538:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054653a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054653b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546540:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546545u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546545:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00546547:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00546549:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054654a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054654f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546554u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546554:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546555:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00546557:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546558:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054655d:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546562u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546562:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00546564:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00546566:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546567:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054656c:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546571u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546571:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546573:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00546575:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546576:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054657b:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546580u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546580:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00546582:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00546584:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546585:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054658a:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054658fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054658f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00546591:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00546593:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00546595:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054659a:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054659fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054659f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005465a1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005465a3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005465a5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005465aa:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005465afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005465af:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005465b0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005465b1:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005465b6:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005465bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005465bb:  // mov ecx, dword ptr [esi + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_005465be:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005465bf:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005465c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005465c4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005465c6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005465c7:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_005465cc:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005465d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005465d1:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_005465d4:  // mov ecx, dword ptr [0x888a50]
    ecx = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005465da:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005465dd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_005465df:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005465e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005465e1:  // call dword ptr [edx + 0x1a0]
    t0 = M32((uint32_t)(edx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005465e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005465e7:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_005465ea:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005465ef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005465f0:  // call 0x513e20
    t0 = 0x00513e20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005465f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005465f5:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_005465f8:  // call 0x501cd0
    t0 = 0x00501cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005465fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005465fd:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_00546600:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00546602:  // je 0x5468d5
    if (f.zf) goto L_005468d5;
L_00546608:  // mov ecx, dword ptr [0x888a50]
    ecx = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0054660e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054660f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546610:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00546612:  // call dword ptr [edx + 0x1ac]
    t0 = M32((uint32_t)(edx + 0x1acu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546618u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546618:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054661a:  // jl 0x5468d5
    if ((f.sf != f.of)) goto L_005468d5;
L_00546620:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00546625:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546627:  // push 0x650ab8
    t0 = 0x650ab8u; esp -= 4; M32(esp) = t0;
L_0054662c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054662d:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054662f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546630:  // call dword ptr [ecx + 0x1b4]
    t0 = M32((uint32_t)(ecx + 0x1b4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546636u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546636:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0054663a:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_0054663e:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00546641:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00546645:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00546646:  // mov dword ptr [esp + 0x2c], edi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edi);
L_0054664a:  // call 0x546220
    t0 = 0x00546220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054664fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054664f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00546651:  // jne 0x546684
    if (!f.zf) goto L_00546684;
L_00546653:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00546657:  // mov dword ptr [esp + 0x28], 0xffffffff
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xffffffffu);
L_0054665f:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00546661:  // je 0x54666d
    if (f.zf) goto L_0054666d;
L_00546663:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00546665:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546666:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546669u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546669:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0054666d:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00546671:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00546673:  // je 0x5468e0
    if (f.zf) goto L_005468e0;
L_00546679:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054667b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054667c:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054667fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054667f:  // jmp 0x5468e0
    goto L_005468e0;
L_00546684:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00546689:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054668a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0054668f:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00546691:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00546693:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546695:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546696:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546697:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546698:  // call dword ptr [ecx + 0xac]
    t0 = M32((uint32_t)(ecx + 0xacu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054669eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054669e:  // mov edx, dword ptr [0x8555a8]
    edx = (uint32_t)(M32((uint32_t)(0x8555a8u)));
L_005466a4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005466a5:  // push 0x1a
    t0 = 0x1au; esp -= 4; M32(esp) = t0;
L_005466a7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005466ac:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_005466b0:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005466b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005466b5:  // mov esi, dword ptr [esi + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_005466b8:  // cmp esi, 2
    t0 = lsub<32>(esi, 0x2u, f);
L_005466bb:  // jle 0x5466d4
    if ((f.zf || f.sf != f.of)) goto L_005466d4;
L_005466bd:  // add esi, -2
    t0 = ladd<32>(esi, 0xfffffffeu, f);
    esi = (uint32_t)(t0);
L_005466c0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005466c5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005466c6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005466c7:  // push 0x1081
    t0 = 0x1081u; esp -= 4; M32(esp) = t0;
L_005466cc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005466cd:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_005466cf:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005466d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005466d4:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_005466d7:  // mov dword ptr [esp + 0xc], edi
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(edi);
L_005466db:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005466dd:  // jle 0x54678f
    if ((f.zf || f.sf != f.of)) goto L_0054678f;
L_005466e3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005466e5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005466e6:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_005466ea:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_005466ed:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_005466ef:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_005466f1:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005466f4:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005466f6:  // je 0x54676f
    if (f.zf) goto L_0054676f;
L_005466f8:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_005466fc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005466fe:  // mov ax, word ptr [ebp]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebp))) & 0xffffu);
L_00546702:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00546705:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00546708:  // lea ecx, [eax + edx*4]
    ecx = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0054670b:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0054670d:  // movsx eax, byte ptr [ecx + 0x10]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(ecx + 0x10u))));
L_00546711:  // mov dl, byte ptr [ecx + 0x11]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x11u))) & 0xffu);
L_00546714:  // mov edi, dword ptr [ecx + 0xc]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00546717:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054671a:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0054671c:  // mov ecx, dword ptr [0x888a50]
    ecx = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00546722:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00546725:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_00546728:  // mov edx, dword ptr [0x9c64dc]
    edx = (uint32_t)(M32((uint32_t)(0x9c64dcu)));
L_0054672e:  // lea esi, [edx + eax*4]
    esi = (uint32_t)((uint32_t)(edx + eax * 4u));
L_00546731:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00546733:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00546736:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546737:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546738:  // call dword ptr [edx + 0x1a0]
    t0 = M32((uint32_t)(edx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054673eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054673e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00546740:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00546742:  // call 0x500360
    t0 = 0x00500360u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546747u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546747:  // mov esi, dword ptr [esi + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0054674a:  // mov edi, dword ptr [edi + 0x38]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x38u)));
L_0054674d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054674e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00546750:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546751:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00546753:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00546755:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054675a:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054675fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054675f:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00546763:  // add ebp, 2
    t0 = ladd<32>(ebp, 0x2u, f);
    ebp = (uint32_t)(t0);
L_00546766:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00546767:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0054676b:  // jne 0x5466fc
    if (!f.zf) goto L_005466fc;
L_0054676d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054676f:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00546773:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00546777:  // mov edx, dword ptr [ebx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_0054677a:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054677b:  // add eax, 0xc
    t0 = ladd<32>(eax, 0xcu, f);
    eax = (uint32_t)(t0);
L_0054677e:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_00546780:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_00546784:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00546788:  // jl 0x5466ea
    if ((f.sf != f.of)) goto L_005466ea;
L_0054678e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054678f:  // mov ecx, dword ptr [0x89c9b4]
    ecx = (uint32_t)(M32((uint32_t)(0x89c9b4u)));
L_00546795:  // call 0x55b660
    t0 = 0x0055b660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054679au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054679a:  // mov esi, dword ptr [0x888a50]
    esi = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005467a0:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005467a4:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005467a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005467a9:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_005467ab:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005467ac:  // call dword ptr [eax + 0x9c]
    t0 = M32((uint32_t)(eax + 0x9cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005467b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005467b2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005467b4:  // jge 0x5467c3
    if ((f.sf == f.of)) goto L_005467c3;
L_005467b6:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_005467b8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005467b9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005467ba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005467bb:  // call dword ptr [edx + 0x94]
    t0 = M32((uint32_t)(edx + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005467c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005467c1:  // jmp 0x5467ce
    goto L_005467ce;
L_005467c3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_005467c5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005467c6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005467c7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005467c8:  // call dword ptr [eax + 0x94]
    t0 = M32((uint32_t)(eax + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005467ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005467ce:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005467d2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005467d4:  // je 0x5467e0
    if (f.zf) goto L_005467e0;
L_005467d6:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005467d8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005467d9:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005467dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005467dc:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_005467e0:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005467e4:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005467e6:  // je 0x5467f2
    if (f.zf) goto L_005467f2;
L_005467e8:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005467ea:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005467eb:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005467eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005467ee:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_005467f2:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005467f6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005467fb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005467fc:  // push 0x1a
    t0 = 0x1au; esp -= 4; M32(esp) = t0;
L_005467fe:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546803u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546803:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00546808:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546809:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054680a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054680c:  // call dword ptr [ecx + 0x1ac]
    t0 = M32((uint32_t)(ecx + 0x1acu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546812u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546812:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546813:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00546815:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546816:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054681b:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546820u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546820:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00546822:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00546824:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546825:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054682a:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054682fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054682f:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00546831:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00546833:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546834:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546839:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054683eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054683e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054683f:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00546841:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546842:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546847:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054684cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054684c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054684e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00546850:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546851:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546856:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054685bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054685b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054685d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054685f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546860:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546865:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054686au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054686a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054686c:  // push 0x91
    t0 = 0x91u; esp -= 4; M32(esp) = t0;
L_00546871:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546876:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054687bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054687b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054687d:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0054687f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546884:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546889u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546889:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054688b:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0054688d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00546892:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00546897u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00546897:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054689b:  // mov dword ptr [esp + 0x28], 0xffffffff
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xffffffffu);
L_005468a3:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005468a5:  // je 0x5468b1
    if (f.zf) goto L_005468b1;
L_005468a7:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005468a9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005468aa:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005468adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005468ad:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_005468b1:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005468b5:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005468b7:  // je 0x5468bf
    if (f.zf) goto L_005468bf;
L_005468b9:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005468bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005468bc:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005468bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005468bf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005468c0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005468c1:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_005468c3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005468c4:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005468c8:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005468cf:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_005468d2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_005468d5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005468d6:  // mov ecx, 0x9c6480
    ecx = (uint32_t)(0x9c6480u);
L_005468db:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005468e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005468e0:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005468e4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005468e5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005468e6:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005468e8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005468e9:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005468f0:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_005468f3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00546490, 00546490)
