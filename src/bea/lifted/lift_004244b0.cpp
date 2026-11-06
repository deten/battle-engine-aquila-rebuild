// lifted from 004244b0 (FUN_004244b0, 605 bytes, 163 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004244b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004244b0;
L_004244b0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004244b2:  // push 0x5d1976
    t0 = 0x5d1976u; esp -= 4; M32(esp) = t0;
L_004244b7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004244bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004244be:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004244c5:  // sub esp, 0x470
    t0 = lsub<32>(esp, 0x470u, f);
    esp = (uint32_t)(t0);
L_004244cb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004244cc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004244cd:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004244cf:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004244d1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004244d2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004244d3:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_004244d7:  // mov dword ptr [ebp + 4], ebx
    M32((uint32_t)(ebp + 0x4u)) = (uint32_t)(ebx);
L_004244da:  // lea esi, [ebp + 8]
    esi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004244dd:  // lea eax, [ebp + 0xc]
    eax = (uint32_t)((uint32_t)(ebp + 0xcu));
L_004244e0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004244e2:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004244e4:  // mov dword ptr [esi], 0x5d9540
    M32((uint32_t)(esi)) = (uint32_t)(0x5d9540u);
L_004244ea:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004244ec:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004244f1:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004244f6:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004244f9:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004244fd:  // push 0x403f40
    t0 = 0x403f40u; esp -= 4; M32(esp) = t0;
L_00424502:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00424503:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00424506:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_0042450b:  // mov dword ptr [esp + 0x498], ebx
    M32((uint32_t)(esp + 0x498u)) = (uint32_t)(ebx);
L_00424512:  // mov dword ptr [ebp], 0x5d9524
    M32((uint32_t)(ebp)) = (uint32_t)(0x5d9524u);
L_00424519:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0042451c:  // lea eax, [esp + 0x70]
    eax = (uint32_t)((uint32_t)(esp + 0x70u));
L_00424520:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00424521:  // mov dword ptr [esi], 0x5d94ac
    M32((uint32_t)(esi)) = (uint32_t)(0x5d94acu);
L_00424527:  // mov dword ptr [esp + 0x28], ebx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebx);
L_0042452b:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0042452f:  // mov dword ptr [esp + 0x30], ebx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebx);
L_00424533:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00424538u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00424538:  // mov dword ptr [esp + 0x47c], edi
    M32((uint32_t)(esp + 0x47cu)) = (uint32_t)(edi);
L_0042453f:  // mov edx, dword ptr [esp + 0x490]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x490u)));
L_00424546:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00424548:  // neg ecx
    t0 = lneg<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042454a:  // mov eax, dword ptr [edx + 0x4b0]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4b0u)));
L_00424550:  // mov dword ptr [esp + 0x5c], edi
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edi);
L_00424554:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_00424556:  // mov byte ptr [esp + 0x488], 1
    M8((uint32_t)(esp + 0x488u)) = (uint8_t)(0x1u);
L_0042455e:  // and ecx, esi
    t0 = llog<32>(ecx & esi, f);
    ecx = (uint32_t)(t0);
L_00424560:  // mov dword ptr [esp + 0x460], ecx
    M32((uint32_t)(esp + 0x460u)) = (uint32_t)(ecx);
L_00424567:  // mov ecx, dword ptr [eax + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x6cu)));
L_0042456a:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0042456c:  // je 0x424596
    if (f.zf) goto L_00424596;
L_0042456e:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00424570:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00424573:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00424575:  // lea edx, [esp + 0x60]
    edx = (uint32_t)((uint32_t)(esp + 0x60u));
L_00424579:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042457b:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042457d:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042457f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00424581:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00424583:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00424585:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00424588:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042458a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042458c:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042458f:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00424591:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_00424596:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0042459a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042459b:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004245a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004245a0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004245a3:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004245a5:  // mov dword ptr [ebp + 0x8c], eax
    M32((uint32_t)(ebp + 0x8cu)) = (uint32_t)(eax);
L_004245ab:  // je 0x4245b9
    if (f.zf) goto L_004245b9;
L_004245ad:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004245af:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004245b3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004245b4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004245b6:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004245b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004245b9:  // mov edx, dword ptr [esp + 0x490]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x490u)));
L_004245c0:  // mov dword ptr [ebp + 0x12c], edi
    M32((uint32_t)(ebp + 0x12cu)) = (uint32_t)(edi);
L_004245c6:  // mov dword ptr [ebp + 0x90], ebx
    M32((uint32_t)(ebp + 0x90u)) = (uint32_t)(ebx);
L_004245cc:  // mov dword ptr [ebp + 0x94], ebx
    M32((uint32_t)(ebp + 0x94u)) = (uint32_t)(ebx);
L_004245d2:  // mov dword ptr [ebp + 0x98], ebx
    M32((uint32_t)(ebp + 0x98u)) = (uint32_t)(ebx);
L_004245d8:  // mov dword ptr [ebp + 0x9c], ebx
    M32((uint32_t)(ebp + 0x9cu)) = (uint32_t)(ebx);
L_004245de:  // mov dword ptr [ebp + 0xa0], ebx
    M32((uint32_t)(ebp + 0xa0u)) = (uint32_t)(ebx);
L_004245e4:  // mov dword ptr [ebp + 0xac], ebx
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(ebx);
L_004245ea:  // mov eax, dword ptr [edx + 0x260]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x260u)));
L_004245f0:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004245f5:  // mov esi, 0x6630d8
    esi = (uint32_t)(0x6630d8u);
L_004245fa:  // lea edi, [ebp + 0x2c]
    edi = (uint32_t)((uint32_t)(ebp + 0x2cu));
L_004245fd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004245ff:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00424604:  // mov esi, 0x6630d8
    esi = (uint32_t)(0x6630d8u);
L_00424609:  // lea edi, [ebp + 0xb0]
    edi = (uint32_t)((uint32_t)(ebp + 0xb0u));
L_0042460f:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00424612:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00424614:  // mov ecx, dword ptr [ebp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8cu)));
L_0042461a:  // jne 0x424628
    if (!f.zf) goto L_00424628;
L_0042461c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0042461e:  // push 0x62462c
    t0 = 0x62462cu; esp -= 4; M32(esp) = t0;
L_00424623:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00424626u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00424626:  // jmp 0x424632
    goto L_00424632;
L_00424628:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0042462a:  // push 0x6235a0
    t0 = 0x6235a0u; esp -= 4; M32(esp) = t0;
L_0042462f:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00424632u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00424632:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00424634:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00424639u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00424639:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042463a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042463b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042463c:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00424640:  // mov dword ptr [ebp + 0x11c], eax
    M32((uint32_t)(ebp + 0x11cu)) = (uint32_t)(eax);
L_00424646:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042464bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042464b:  // mov eax, dword ptr [esp + 0x490]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x490u)));
L_00424652:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00424657:  // lea esi, [esp + 0x28]
    esi = (uint32_t)((uint32_t)(esp + 0x28u));
L_0042465b:  // lea edi, [ebp + 0xe0]
    edi = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_00424661:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00424663:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00424664:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00424665:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00424669:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0042466b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042466c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042466d:  // push 0x7d1
    t0 = 0x7d1u; esp -= 4; M32(esp) = t0;
L_00424672:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00424677:  // mov dword ptr [ebp + 0x110], eax
    M32((uint32_t)(ebp + 0x110u)) = (uint32_t)(eax);
L_0042467d:  // mov dword ptr [esp + 0x28], 0xbf800000
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xbf800000u);
L_00424685:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042468au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042468a:  // mov ecx, dword ptr [ebp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8cu)));
L_00424690:  // mov eax, dword ptr [ebp + 0x11c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x11cu)));
L_00424696:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_00424698:  // je 0x4246a9
    if (f.zf) goto L_004246a9;
L_0042469a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0042469c:  // lea esi, [ebp + 0x118]
    esi = (uint32_t)((uint32_t)(ebp + 0x118u));
L_004246a2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004246a3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004246a4:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004246a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004246a7:  // jmp 0x4246af
    goto L_004246af;
L_004246a9:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004246af:  // fstp dword ptr [ebp + 0x120]
    F32((uint32_t)(ebp + 0x120u)) = lf32(ST(0));
    lpop(x);
L_004246b5:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004246ba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004246bc:  // lea eax, [esp + 0x68]
    eax = (uint32_t)((uint32_t)(esp + 0x68u));
L_004246c0:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004246c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004246c6:  // mov dword ptr [ebp + 0x124], ebx
    M32((uint32_t)(ebp + 0x124u)) = (uint32_t)(ebx);
L_004246cc:  // mov dword ptr [ebp + 0x128], ebx
    M32((uint32_t)(ebp + 0x128u)) = (uint32_t)(ebx);
L_004246d2:  // mov dword ptr [ebp + 0x114], ebx
    M32((uint32_t)(ebp + 0x114u)) = (uint32_t)(ebx);
L_004246d8:  // mov dword ptr [ebp + 0xa4], ebx
    M32((uint32_t)(ebp + 0xa4u)) = (uint32_t)(ebx);
L_004246de:  // mov dword ptr [ebp + 0xa8], ebx
    M32((uint32_t)(ebp + 0xa8u)) = (uint32_t)(ebx);
L_004246e4:  // mov byte ptr [esp + 0x498], bl
    M8((uint32_t)(esp + 0x498u)) = (uint8_t)((ebx & 0xffu));
L_004246eb:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004246f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004246f0:  // mov ecx, dword ptr [esp + 0x480]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x480u)));
L_004246f7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004246f8:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004246fa:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004246fb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004246fc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004246fd:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00424704:  // add esp, 0x47c
    t0 = ladd<32>(esp, 0x47cu, f);
    esp = (uint32_t)(t0);
L_0042470a:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004244b0, 004244b0)
