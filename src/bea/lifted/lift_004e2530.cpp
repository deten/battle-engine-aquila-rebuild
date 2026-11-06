// lifted from 004e2530 (FUN_004e2530, 1374 bytes, 404 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e2530(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e2530;
L_004e2530:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004e2532:  // push 0x5d4c3b
    t0 = 0x5d4c3bu; esp -= 4; M32(esp) = t0;
L_004e2537:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004e253d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e253e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004e2545:  // sub esp, 0x23c
    t0 = lsub<32>(esp, 0x23cu, f);
    esp = (uint32_t)(t0);
L_004e254b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e254c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e254d:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004e2554:  // call 0x547d70
    t0 = 0x00547d70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2559u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2559:  // mov eax, dword ptr [esp + 0x254]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x254u)));
L_004e2560:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004e2562:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e2563:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004e2565:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_004e2567:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e2568:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e256f:  // mov dword ptr [esp + 0x25c], ebx
    M32((uint32_t)(esp + 0x25cu)) = (uint32_t)(ebx);
L_004e2576:  // call 0x547ec0
    t0 = 0x00547ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e257bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e257b:  // mov byte ptr [esp + 0x10], 0x23
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x23u);
L_004e2580:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004e2587:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e258cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e258c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e258e:  // jne 0x4e25c0
    if (!f.zf) goto L_004e25c0;
L_004e2590:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e2594:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e2599:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e259a:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e25a1:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e25a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e25a6:  // lea edi, [esp + 0x10]
    edi = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e25aa:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e25ad:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e25af:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e25b1:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e25b3:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e25b4:  // mov byte ptr [esp + ecx + 0xf], bl
    M8((uint32_t)(esp + ecx + 0xfu)) = (uint8_t)((ebx & 0xffu));
L_004e25b8:  // mov al, byte ptr [esp + 0x10]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x10u))) & 0xffu);
L_004e25bc:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e25be:  // je 0x4e2580
    if (f.zf) goto L_004e2580;
L_004e25c0:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e25c4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e25c5:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e25cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e25ca:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e25cd:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004e25d1:  // mov byte ptr [esp + 0x10], 0x23
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x23u);
L_004e25d6:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004e25dd:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e25e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e25e2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e25e4:  // jne 0x4e2616
    if (!f.zf) goto L_004e2616;
L_004e25e6:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e25ea:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e25ef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e25f0:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e25f7:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e25fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e25fc:  // lea edi, [esp + 0x10]
    edi = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e2600:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e2603:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2605:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2607:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e2609:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e260a:  // mov byte ptr [esp + ecx + 0xf], bl
    M8((uint32_t)(esp + ecx + 0xfu)) = (uint8_t)((ebx & 0xffu));
L_004e260e:  // mov al, byte ptr [esp + 0x10]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x10u))) & 0xffu);
L_004e2612:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e2614:  // je 0x4e25d6
    if (f.zf) goto L_004e25d6;
L_004e2616:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e261a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e261b:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2620u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2620:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e2623:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e2625:  // jle 0x4e2a54
    if ((f.zf || f.sf != f.of)) goto L_004e2a54;
L_004e262b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e262c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e262d:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004e2631:  // push 0x61e
    t0 = 0x61eu; esp -= 4; M32(esp) = t0;
L_004e2636:  // push 0x632428
    t0 = 0x632428u; esp -= 4; M32(esp) = t0;
L_004e263b:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_004e263d:  // push 0xdc
    t0 = 0xdcu; esp -= 4; M32(esp) = t0;
L_004e2642:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004e2647:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e264cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e264c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e264e:  // je 0x4e266b
    if (f.zf) goto L_004e266b;
L_004e2650:  // mov dword ptr [eax + 0xd4], ebx
    M32((uint32_t)(eax + 0xd4u)) = (uint32_t)(ebx);
L_004e2656:  // mov edx, dword ptr [0x83cfe8]
    edx = (uint32_t)(M32((uint32_t)(0x83cfe8u)));
L_004e265c:  // mov dword ptr [eax + 0xd8], edx
    M32((uint32_t)(eax + 0xd8u)) = (uint32_t)(edx);
L_004e2662:  // mov dword ptr [0x83cfe8], eax
    M32((uint32_t)(0x83cfe8u)) = (uint32_t)(eax);
L_004e2667:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004e2669:  // jmp 0x4e266d
    goto L_004e266d;
L_004e266b:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004e266d:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e2672:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e2679:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e267eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e267e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e2680:  // jne 0x4e26b2
    if (!f.zf) goto L_004e26b2;
L_004e2682:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2686:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e268b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e268c:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e2693:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2698u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2698:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e269c:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e269f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e26a1:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e26a3:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e26a5:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e26a6:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e26aa:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e26ae:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e26b0:  // je 0x4e2672
    if (f.zf) goto L_004e2672;
L_004e26b2:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e26b6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e26b9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e26bb:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e26bd:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e26bf:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004e26c1:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004e26c3:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004e26c5:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004e26c7:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004e26ca:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e26cc:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004e26ce:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004e26d1:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004e26d3:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e26d8:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e26df:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e26e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e26e4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e26e6:  // jne 0x4e2718
    if (!f.zf) goto L_004e2718;
L_004e26e8:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e26ec:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e26f1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e26f2:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e26f9:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e26feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e26fe:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2702:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e2705:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2707:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2709:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e270b:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e270c:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e2710:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e2714:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e2716:  // je 0x4e26d8
    if (f.zf) goto L_004e26d8;
L_004e2718:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e271c:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e271f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2721:  // lea edx, [ebp + 0x40]
    edx = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004e2724:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2726:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e2728:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004e272a:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004e272c:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004e272e:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004e2730:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004e2733:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e2735:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e2737:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004e273a:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004e273c:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e2741:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e2748:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e274du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e274d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e274f:  // jne 0x4e2781
    if (!f.zf) goto L_004e2781;
L_004e2751:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2755:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e275a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e275b:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e2762:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2767u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2767:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e276b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e276e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2770:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2772:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e2774:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e2775:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e2779:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e277d:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e277f:  // je 0x4e2741
    if (f.zf) goto L_004e2741;
L_004e2781:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2785:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e2788:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e278a:  // lea edx, [ebp + 0x80]
    edx = (uint32_t)((uint32_t)(ebp + 0x80u));
L_004e2790:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2792:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e2794:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004e2796:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004e2798:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004e279a:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004e279c:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004e279f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e27a1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e27a3:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004e27a6:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004e27a8:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e27ad:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e27b4:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e27b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e27b9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e27bb:  // jne 0x4e27ed
    if (!f.zf) goto L_004e27ed;
L_004e27bd:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e27c1:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e27c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e27c7:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e27ce:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e27d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e27d3:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e27d7:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e27da:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e27dc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e27de:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e27e0:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e27e1:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e27e5:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e27e9:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e27eb:  // je 0x4e27ad
    if (f.zf) goto L_004e27ad;
L_004e27ed:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e27f1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e27f2:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e27f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e27f7:  // mov dword ptr [ebp + 0xc0], eax
    M32((uint32_t)(ebp + 0xc0u)) = (uint32_t)(eax);
L_004e27fd:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e2800:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e2805:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e280c:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2811u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2811:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e2813:  // jne 0x4e2845
    if (!f.zf) goto L_004e2845;
L_004e2815:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2819:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e281e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e281f:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e2826:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e282bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e282b:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e282f:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e2832:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2834:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2836:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e2838:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e2839:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e283d:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e2841:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e2843:  // je 0x4e2805
    if (f.zf) goto L_004e2805;
L_004e2845:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2849:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e284a:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e284fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e284f:  // mov dword ptr [ebp + 0xc4], eax
    M32((uint32_t)(ebp + 0xc4u)) = (uint32_t)(eax);
L_004e2855:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e2858:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e285d:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e2864:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2869u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2869:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e286b:  // jne 0x4e289d
    if (!f.zf) goto L_004e289d;
L_004e286d:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2871:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e2876:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e2877:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e287e:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2883u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2883:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2887:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e288a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e288c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e288e:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e2890:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e2891:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e2895:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e2899:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e289b:  // je 0x4e285d
    if (f.zf) goto L_004e285d;
L_004e289d:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e28a1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e28a2:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e28a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e28a7:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e28ab:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e28ae:  // cmp esi, 0x65
    t0 = lsub<32>(esi, 0x65u, f);
L_004e28b1:  // mov dword ptr [ebp + 0xc8], eax
    M32((uint32_t)(ebp + 0xc8u)) = (uint32_t)(eax);
L_004e28b7:  // jl 0x4e2911
    if ((f.sf != f.of)) goto L_004e2911;
L_004e28b9:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e28be:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e28c5:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e28cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e28ca:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e28cc:  // jne 0x4e28fe
    if (!f.zf) goto L_004e28fe;
L_004e28ce:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e28d2:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e28d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e28d8:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e28df:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e28e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e28e4:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e28e8:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e28eb:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e28ed:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e28ef:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e28f1:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e28f2:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e28f6:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e28fa:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e28fc:  // je 0x4e28be
    if (f.zf) goto L_004e28be;
L_004e28fe:  // cmp byte ptr [esp + 0x18], 0x31
    t0 = lsub<8>(M8((uint32_t)(esp + 0x18u)), 0x31u, f);
L_004e2903:  // jne 0x4e2911
    if (!f.zf) goto L_004e2911;
L_004e2905:  // mov dword ptr [ebp + 0xd0], 1
    M32((uint32_t)(ebp + 0xd0u)) = (uint32_t)(0x1u);
L_004e290f:  // jmp 0x4e2917
    goto L_004e2917;
L_004e2911:  // mov dword ptr [ebp + 0xd0], ebx
    M32((uint32_t)(ebp + 0xd0u)) = (uint32_t)(ebx);
L_004e2917:  // cmp esi, 0x67
    t0 = lsub<32>(esi, 0x67u, f);
L_004e291a:  // jl 0x4e2971
    if ((f.sf != f.of)) goto L_004e2971;
L_004e291c:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e2921:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e2928:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e292du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e292d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e292f:  // jne 0x4e2961
    if (!f.zf) goto L_004e2961;
L_004e2931:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2935:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e293a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e293b:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e2942:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2947u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2947:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e294b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e294e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2950:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2952:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e2954:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e2955:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e2959:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e295d:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e295f:  // je 0x4e2921
    if (f.zf) goto L_004e2921;
L_004e2961:  // cmp byte ptr [esp + 0x18], 0x31
    t0 = lsub<8>(M8((uint32_t)(esp + 0x18u)), 0x31u, f);
L_004e2966:  // jne 0x4e2971
    if (!f.zf) goto L_004e2971;
L_004e2968:  // mov byte ptr [ebp + 0xcc], 1
    M8((uint32_t)(ebp + 0xccu)) = (uint8_t)(0x1u);
L_004e296f:  // jmp 0x4e2977
    goto L_004e2977;
L_004e2971:  // mov byte ptr [ebp + 0xcc], bl
    M8((uint32_t)(ebp + 0xccu)) = (uint8_t)((ebx & 0xffu));
L_004e2977:  // mov byte ptr [esp + 0x18], 0x23
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x23u);
L_004e297c:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004e2983:  // call 0x548d30
    t0 = 0x00548d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2988u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2988:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e298a:  // jne 0x4e29bc
    if (!f.zf) goto L_004e29bc;
L_004e298c:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e2990:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_004e2995:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e2996:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004e299d:  // call 0x548820
    t0 = 0x00548820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e29a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e29a2:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e29a6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e29a9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e29ab:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e29ad:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e29af:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e29b0:  // mov byte ptr [esp + ecx + 0x17], bl
    M8((uint32_t)(esp + ecx + 0x17u)) = (uint8_t)((ebx & 0xffu));
L_004e29b4:  // mov al, byte ptr [esp + 0x18]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_004e29b8:  // cmp al, 0x23
    t0 = lsub<8>((eax & 0xffu), 0x23u, f);
L_004e29ba:  // je 0x4e297c
    if (f.zf) goto L_004e297c;
L_004e29bc:  // mov esi, dword ptr [0x83cfe8]
    esi = (uint32_t)(M32((uint32_t)(0x83cfe8u)));
L_004e29c2:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004e29c4:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004e29c6:  // je 0x4e2a43
    if (f.zf) goto L_004e2a43;
L_004e29c8:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004e29ca:  // jne 0x4e29ee
    if (!f.zf) goto L_004e29ee;
L_004e29cc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e29cd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e29ce:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e29d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e29d3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e29d6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e29d8:  // jne 0x4e29e0
    if (!f.zf) goto L_004e29e0;
L_004e29da:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_004e29dc:  // je 0x4e29e0
    if (f.zf) goto L_004e29e0;
L_004e29de:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004e29e0:  // mov esi, dword ptr [esi + 0xd8]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xd8u)));
L_004e29e6:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004e29e8:  // jne 0x4e29c8
    if (!f.zf) goto L_004e29c8;
L_004e29ea:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004e29ec:  // je 0x4e2a43
    if (f.zf) goto L_004e2a43;
L_004e29ee:  // mov eax, dword ptr [edi + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xd4u)));
L_004e29f4:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e29f6:  // je 0x4e2a04
    if (f.zf) goto L_004e2a04;
L_004e29f8:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004e29fa:  // mov eax, dword ptr [edi + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xd4u)));
L_004e2a00:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e2a02:  // jne 0x4e29f8
    if (!f.zf) goto L_004e29f8;
L_004e2a04:  // mov dword ptr [edi + 0xd4], ebp
    M32((uint32_t)(edi + 0xd4u)) = (uint32_t)(ebp);
L_004e2a0a:  // mov eax, dword ptr [0x83cfe8]
    eax = (uint32_t)(M32((uint32_t)(0x83cfe8u)));
L_004e2a0f:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004e2a11:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e2a13:  // je 0x4e2a43
    if (f.zf) goto L_004e2a43;
L_004e2a15:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004e2a17:  // jne 0x4e2a37
    if (!f.zf) goto L_004e2a37;
L_004e2a19:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004e2a1b:  // je 0x4e2a2b
    if (f.zf) goto L_004e2a2b;
L_004e2a1d:  // mov edx, dword ptr [ebp + 0xd8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xd8u)));
L_004e2a23:  // mov dword ptr [ecx + 0xd8], edx
    M32((uint32_t)(ecx + 0xd8u)) = (uint32_t)(edx);
L_004e2a29:  // jmp 0x4e2a37
    goto L_004e2a37;
L_004e2a2b:  // mov ecx, dword ptr [ebp + 0xd8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xd8u)));
L_004e2a31:  // mov dword ptr [0x83cfe8], ecx
    M32((uint32_t)(0x83cfe8u)) = (uint32_t)(ecx);
L_004e2a37:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e2a39:  // mov eax, dword ptr [eax + 0xd8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xd8u)));
L_004e2a3f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e2a41:  // jne 0x4e2a15
    if (!f.zf) goto L_004e2a15;
L_004e2a43:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e2a47:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004e2a48:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004e2a4c:  // jne 0x4e2631
    if (!f.zf) goto L_004e2631;
L_004e2a52:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e2a53:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e2a54:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004e2a5b:  // call 0x548c00
    t0 = 0x00548c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2a60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2a60:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004e2a67:  // mov dword ptr [esp + 0x24c], 0xffffffff
    M32((uint32_t)(esp + 0x24cu)) = (uint32_t)(0xffffffffu);
L_004e2a72:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2a77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2a77:  // mov ecx, dword ptr [esp + 0x244]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x244u)));
L_004e2a7e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e2a7f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e2a80:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004e2a87:  // add esp, 0x248
    t0 = ladd<32>(esp, 0x248u, f);
    esp = (uint32_t)(t0);
L_004e2a8d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004e2530, 004e2530)
