// lifted from 0051a510 (FUN_0051a510, 387 bytes, 115 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051a510(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051a510;
L_0051a510:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0051a516:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051a518:  // push 0x5d6859
    t0 = 0x5d6859u; esp -= 4; M32(esp) = t0;
L_0051a51d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051a51e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0051a525:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051a528:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051a529:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0051a52b:  // cmp word ptr [esi + 6], 0xffff
    t0 = lsub<16>(M16((uint32_t)(esi + 0x6u)), 0xffffu, f);
L_0051a531:  // je 0x51a683
    if (f.zf) goto L_0051a683;
L_0051a537:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0051a539:  // call 0x5001e0
    t0 = 0x005001e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a53eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a53e:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0051a540:  // mov ecx, dword ptr [0x888a50]
    ecx = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0051a546:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_0051a548:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051a54a:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0051a54d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0051a54f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051a550:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051a552:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051a553:  // call dword ptr [edx + 0x190]
    t0 = M32((uint32_t)(edx + 0x190u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a559u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a559:  // mov ecx, dword ptr [0x897a90]
    ecx = (uint32_t)(M32((uint32_t)(0x897a90u)));
L_0051a55f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051a561:  // jne 0x51a629
    if (!f.zf) goto L_0051a629;
L_0051a567:  // push 0xc3
    t0 = 0xc3u; esp -= 4; M32(esp) = t0;
L_0051a56c:  // push 0x63fb24
    t0 = 0x63fb24u; esp -= 4; M32(esp) = t0;
L_0051a571:  // push 0x2f
    t0 = 0x2fu; esp -= 4; M32(esp) = t0;
L_0051a573:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_0051a575:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0051a57a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a57fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a57f:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_0051a583:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051a585:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0051a58d:  // je 0x51a598
    if (f.zf) goto L_0051a598;
L_0051a58f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051a591:  // call 0x488210
    t0 = 0x00488210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a596u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a596:  // jmp 0x51a59a
    goto L_0051a59a;
L_0051a598:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0051a59a:  // push 0x1d4c
    t0 = 0x1d4cu; esp -= 4; M32(esp) = t0;
L_0051a59f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051a5a1:  // mov dword ptr [esp + 0x18], 0xffffffff
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0xffffffffu);
L_0051a5a9:  // mov dword ptr [0x897a90], eax
    M32((uint32_t)(0x897a90u)) = (uint32_t)(eax);
L_0051a5ae:  // call 0x488380
    t0 = 0x00488380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a5b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a5b3:  // mov ecx, dword ptr [0x897a90]
    ecx = (uint32_t)(M32((uint32_t)(0x897a90u)));
L_0051a5b9:  // lea eax, [esp + 4]
    eax = (uint32_t)((uint32_t)(esp + 0x4u));
L_0051a5bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051a5be:  // call 0x488580
    t0 = 0x00488580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a5c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a5c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051a5c5:  // jl 0x51a60f
    if ((f.sf != f.of)) goto L_0051a60f;
L_0051a5c7:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0051a5ca:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0051a5cc:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051a5ce:  // jle 0x51a604
    if ((f.zf || f.sf != f.of)) goto L_0051a604;
L_0051a5d0:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0051a5d4:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0051a5d7:  // lea edx, [eax + 1]
    edx = (uint32_t)((uint32_t)(eax + 0x1u));
L_0051a5da:  // mov word ptr [ecx - 4], ax
    M16((uint32_t)(ecx + 0xfffffffcu)) = (uint16_t)((eax & 0xffffu));
L_0051a5de:  // mov word ptr [ecx - 2], dx
    M16((uint32_t)(ecx + 0xfffffffeu)) = (uint16_t)((edx & 0xffffu));
L_0051a5e2:  // lea edx, [eax + 2]
    edx = (uint32_t)((uint32_t)(eax + 0x2u));
L_0051a5e5:  // mov word ptr [ecx], dx
    M16((uint32_t)(ecx)) = (uint16_t)((edx & 0xffffu));
L_0051a5e8:  // mov word ptr [ecx + 2], dx
    M16((uint32_t)(ecx + 0x2u)) = (uint16_t)((edx & 0xffffu));
L_0051a5ec:  // lea edx, [eax + 3]
    edx = (uint32_t)((uint32_t)(eax + 0x3u));
L_0051a5ef:  // mov word ptr [ecx + 6], ax
    M16((uint32_t)(ecx + 0x6u)) = (uint16_t)((eax & 0xffffu));
L_0051a5f3:  // mov word ptr [ecx + 4], dx
    M16((uint32_t)(ecx + 0x4u)) = (uint16_t)((edx & 0xffffu));
L_0051a5f7:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0051a5fa:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0051a5fd:  // add ecx, 0xc
    t0 = ladd<32>(ecx, 0xcu, f);
    ecx = (uint32_t)(t0);
L_0051a600:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0051a602:  // jl 0x51a5d7
    if ((f.sf != f.of)) goto L_0051a5d7;
L_0051a604:  // mov ecx, dword ptr [0x897a90]
    ecx = (uint32_t)(M32((uint32_t)(0x897a90u)));
L_0051a60a:  // call 0x4883f0
    t0 = 0x004883f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a60fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a60f:  // mov eax, dword ptr [0x897a90]
    eax = (uint32_t)(M32((uint32_t)(0x897a90u)));
L_0051a614:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051a619:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051a61a:  // call 0x513d20
    t0 = 0x00513d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a61fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a61f:  // mov ecx, dword ptr [0x897a90]
    ecx = (uint32_t)(M32((uint32_t)(0x897a90u)));
L_0051a625:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051a627:  // je 0x51a676
    if (f.zf) goto L_0051a676;
L_0051a629:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0051a62e:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0051a631:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051a632:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051a633:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0051a635:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051a636:  // call dword ptr [edx + 0x1a0]
    t0 = M32((uint32_t)(edx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a63cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a63c:  // push 0x144
    t0 = 0x144u; esp -= 4; M32(esp) = t0;
L_0051a641:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051a646:  // call 0x513ec0
    t0 = 0x00513ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a64bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a64b:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0051a64e:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0051a650:  // mov cx, word ptr [esi + 6]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x6u))) & 0xffffu);
L_0051a654:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0051a656:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0051a657:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0051a659:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0051a65b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051a65c:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051a65e:  // shr eax, 2
    t0 = lshr<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0051a661:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0051a664:  // shl edx, 1
    t0 = lshl<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_0051a666:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051a667:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051a668:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051a669:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051a66b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051a670:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051a675u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051a675:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051a676:  // mov word ptr [esi + 6], 0xffff
    M16((uint32_t)(esi + 0x6u)) = (uint16_t)(0xffffu);
L_0051a67c:  // mov dword ptr [esi + 8], 0
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(0x0u);
L_0051a683:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0051a687:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051a688:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0051a68f:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0051a692:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0051a510, 0051a510)
