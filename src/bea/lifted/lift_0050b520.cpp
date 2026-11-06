// lifted from 0050b520 (FUN_0050b520, 597 bytes, 160 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050b520(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050b520;
L_0050b520:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0050b522:  // push 0x5d5bdb
    t0 = 0x5d5bdbu; esp -= 4; M32(esp) = t0;
L_0050b527:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0050b52d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b52e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0050b535:  // sub esp, 0x30c
    t0 = lsub<32>(esp, 0x30cu, f);
    esp = (uint32_t)(t0);
L_0050b53b:  // mov edx, dword ptr [0x63d360]
    edx = (uint32_t)(M32((uint32_t)(0x63d360u)));
L_0050b541:  // mov eax, dword ptr [0x63d358]
    eax = (uint32_t)(M32((uint32_t)(0x63d358u)));
L_0050b546:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050b547:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0050b549:  // mov ecx, dword ptr [0x63d35c]
    ecx = (uint32_t)(M32((uint32_t)(0x63d35cu)));
L_0050b54f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050b550:  // mov ebp, dword ptr [esp + 0x324]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x324u)));
L_0050b557:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050b558:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0050b55c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050b55d:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050b561:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0050b565:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050b566:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0050b56a:  // mov al, byte ptr [0x63d364]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x63d364u))) & 0xffu);
L_0050b56f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050b570:  // lea edx, [esp + 0x15c]
    edx = (uint32_t)((uint32_t)(esp + 0x15cu));
L_0050b577:  // push 0x63d348
    t0 = 0x63d348u; esp -= 4; M32(esp) = t0;
L_0050b57c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050b57d:  // mov byte ptr [esp + 0x2c], al
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)((eax & 0xffu));
L_0050b581:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050b583:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b588u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b588:  // mov eax, dword ptr [esp + 0x340]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x340u)));
L_0050b58f:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0050b592:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050b594:  // je 0x50b62b
    if (f.zf) goto L_0050b62b;
L_0050b59a:  // cmp dword ptr [ebx + 0x270], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x270u)), ebp, f);
L_0050b5a0:  // jne 0x50b61a
    if (!f.zf) goto L_0050b61a;
L_0050b5a2:  // cmp dword ptr [ebx + 0x278], -1
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x278u)), 0xffffffffu, f);
L_0050b5a9:  // je 0x50b61a
    if (f.zf) goto L_0050b61a;
L_0050b5ab:  // push 0x63d31c
    t0 = 0x63d31cu; esp -= 4; M32(esp) = t0;
L_0050b5b0:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b5b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b5b5:  // mov edi, 0x83cb08
    edi = (uint32_t)(0x83cb08u);
L_0050b5ba:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0050b5bd:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050b5bf:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050b5c2:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050b5c4:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0050b5c6:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0050b5c8:  // lea edx, [esp + 0x154]
    edx = (uint32_t)((uint32_t)(esp + 0x154u));
L_0050b5cf:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0050b5d1:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050b5d3:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0050b5d5:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050b5d8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050b5da:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050b5dc:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0050b5df:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0050b5e1:  // mov edi, dword ptr [ebx + 0x278]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x278u)));
L_0050b5e7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050b5e8:  // lea eax, [esp + 0x220]
    eax = (uint32_t)((uint32_t)(esp + 0x220u));
L_0050b5ef:  // push 0x63d304
    t0 = 0x63d304u; esp -= 4; M32(esp) = t0;
L_0050b5f4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b5f5:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b5fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b5fa:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050b5fd:  // lea ecx, [esp + 0x21c]
    ecx = (uint32_t)((uint32_t)(esp + 0x21cu));
L_0050b604:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050b605:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050b60a:  // call 0x42b500
    t0 = 0x0042b500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b60fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b60f:  // mov dword ptr [ebx + 0x270], ebp
    M32((uint32_t)(ebx + 0x270u)) = (uint32_t)(ebp);
L_0050b615:  // jmp 0x50b6ba
    goto L_0050b6ba;
L_0050b61a:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050b61d:  // mov dword ptr [ebx + 0x274], eax
    M32((uint32_t)(ebx + 0x274u)) = (uint32_t)(eax);
L_0050b623:  // mov dword ptr [ebx + 0x278], eax
    M32((uint32_t)(ebx + 0x278u)) = (uint32_t)(eax);
L_0050b629:  // jmp 0x50b5e7
    goto L_0050b5e7;
L_0050b62b:  // cmp dword ptr [ebx + 0x26c], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x26cu)), ebp, f);
L_0050b631:  // jne 0x50b67d
    if (!f.zf) goto L_0050b67d;
L_0050b633:  // mov eax, dword ptr [ebx + 0x274]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x274u)));
L_0050b639:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0050b63c:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0050b63e:  // je 0x50b680
    if (f.zf) goto L_0050b680;
L_0050b640:  // push 0x63d2dc
    t0 = 0x63d2dcu; esp -= 4; M32(esp) = t0;
L_0050b645:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b64au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b64a:  // mov edi, 0x83cb08
    edi = (uint32_t)(0x83cb08u);
L_0050b64f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050b651:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050b653:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050b656:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050b658:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0050b65a:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0050b65c:  // lea edx, [esp + 0x154]
    edx = (uint32_t)((uint32_t)(esp + 0x154u));
L_0050b663:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0050b665:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050b667:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0050b669:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050b66c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050b66e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050b670:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0050b673:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0050b675:  // mov edi, dword ptr [ebx + 0x274]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x274u)));
L_0050b67b:  // jmp 0x50b68c
    goto L_0050b68c;
L_0050b67d:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0050b680:  // mov dword ptr [ebx + 0x274], esi
    M32((uint32_t)(ebx + 0x274u)) = (uint32_t)(esi);
L_0050b686:  // mov dword ptr [ebx + 0x278], esi
    M32((uint32_t)(ebx + 0x278u)) = (uint32_t)(esi);
L_0050b68c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050b68d:  // lea ecx, [esp + 0x220]
    ecx = (uint32_t)((uint32_t)(esp + 0x220u));
L_0050b694:  // push 0x63d2c8
    t0 = 0x63d2c8u; esp -= 4; M32(esp) = t0;
L_0050b699:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050b69a:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b69fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b69f:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050b6a2:  // lea edx, [esp + 0x21c]
    edx = (uint32_t)((uint32_t)(esp + 0x21cu));
L_0050b6a9:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050b6ae:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050b6af:  // call 0x42b500
    t0 = 0x0042b500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b6b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b6b4:  // mov dword ptr [ebx + 0x26c], ebp
    M32((uint32_t)(ebx + 0x26cu)) = (uint32_t)(ebp);
L_0050b6ba:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0050b6be:  // call 0x547d70
    t0 = 0x00547d70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b6c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b6c3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050b6c4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050b6c6:  // lea edx, [esp + 0x15c]
    edx = (uint32_t)((uint32_t)(esp + 0x15cu));
L_0050b6cd:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_0050b6cf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050b6d0:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0050b6d4:  // mov dword ptr [esp + 0x334], 0
    M32((uint32_t)(esp + 0x334u)) = (uint32_t)(0x0u);
L_0050b6df:  // call 0x547ec0
    t0 = 0x00547ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b6e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b6e4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050b6e6:  // jne 0x50b709
    if (!f.zf) goto L_0050b709;
L_0050b6e8:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0050b6ec:  // call 0x548c00
    t0 = 0x00548c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b6f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b6f1:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0050b6f5:  // mov dword ptr [esp + 0x324], 0xffffffff
    M32((uint32_t)(esp + 0x324u)) = (uint32_t)(0xffffffffu);
L_0050b700:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b705u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b705:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050b707:  // jmp 0x50b75a
    goto L_0050b75a;
L_0050b709:  // mov eax, dword ptr [esp + 0x330]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x330u)));
L_0050b710:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0050b712:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050b714:  // sete cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_0050b717:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050b718:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0050b71c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b71d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050b71e:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050b720:  // call 0x50b9c0
    t0 = 0x0050b9c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b725u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b725:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050b727:  // lea eax, [esp + 0x21c]
    eax = (uint32_t)((uint32_t)(esp + 0x21cu));
L_0050b72e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050b730:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b731:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050b736:  // call 0x42b800
    t0 = 0x0042b800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b73bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b73b:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0050b73f:  // call 0x548c00
    t0 = 0x00548c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b744u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b744:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0050b748:  // mov dword ptr [esp + 0x324], 0xffffffff
    M32((uint32_t)(esp + 0x324u)) = (uint32_t)(0xffffffffu);
L_0050b753:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050b758u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050b758:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0050b75a:  // mov ecx, dword ptr [esp + 0x31c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x31cu)));
L_0050b761:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050b762:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050b763:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0050b764:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0050b765:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050b76c:  // add esp, 0x318
    t0 = ladd<32>(esp, 0x318u, f);
    esp = (uint32_t)(t0);
L_0050b772:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0050b520, 0050b520)
