// lifted from 00422440 (vslot9, 280 bytes, 79 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00422440(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00422440;
L_00422440:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00422446:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00422448:  // push 0x5d18dc
    t0 = 0x5d18dcu; esp -= 4; M32(esp) = t0;
L_0042244d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042244e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00422455:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00422456:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00422457:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0042245b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042245c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042245d:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0042245f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00422460:  // mov dword ptr [ebp + 0x80], 1
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(0x1u);
L_0042246a:  // call 0x402ad0
    t0 = 0x00402ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042246fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042246f:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_00422471:  // push 0x624400
    t0 = 0x624400u; esp -= 4; M32(esp) = t0;
L_00422476:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00422478:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_0042247a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0042247f:  // mov dword ptr [esi + 0x134], 0x3f000000
    M32((uint32_t)(esi + 0x134u)) = (uint32_t)(0x3f000000u);
L_00422489:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042248eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042248e:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00422492:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00422494:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00422496:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_0042249a:  // je 0x4224a6
    if (f.zf) goto L_004224a6;
L_0042249c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042249d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042249f:  // call 0x422f90
    t0 = 0x00422f90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004224a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004224a4:  // jmp 0x4224a8
    goto L_004224a8;
L_004224a6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004224a8:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004224aa:  // push 0x624400
    t0 = 0x624400u; esp -= 4; M32(esp) = t0;
L_004224af:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_004224b1:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004224b3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004224b8:  // mov dword ptr [esp + 0x28], 0xffffffff
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xffffffffu);
L_004224c0:  // mov dword ptr [esi + 0x208], eax
    M32((uint32_t)(esi + 0x208u)) = (uint32_t)(eax);
L_004224c6:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004224cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004224cb:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004224cd:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_004224d1:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004224d3:  // mov dword ptr [esp + 0x18], 1
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x1u);
L_004224db:  // je 0x4224f4
    if (f.zf) goto L_004224f4;
L_004224dd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004224de:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004224df:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004224e1:  // call 0x4fe710
    t0 = 0x004fe710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004224e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004224e6:  // mov dword ptr [edi], 0x5d9448
    M32((uint32_t)(edi)) = (uint32_t)(0x5d9448u);
L_004224ec:  // mov dword ptr [edi + 0x60], ebx
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(ebx);
L_004224ef:  // mov dword ptr [edi + 0x14], ebx
    M32((uint32_t)(edi + 0x14u)) = (uint32_t)(ebx);
L_004224f2:  // jmp 0x4224f6
    goto L_004224f6;
L_004224f4:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004224f6:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004224f9:  // mov dword ptr [esi + 0x13c], edi
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(edi);
L_004224ff:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00422501:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00422503:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00422505:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00422507:  // push 0x6243f8
    t0 = 0x6243f8u; esp -= 4; M32(esp) = t0;
L_0042250c:  // mov dword ptr [esp + 0x24], 0xffffffff
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xffffffffu);
L_00422514:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00422517u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00422517:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00422519:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042251eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042251e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042251f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00422521:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00422527u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00422527:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042252b:  // mov dword ptr [esi + 0x27c], ebx
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(ebx);
L_00422531:  // mov dword ptr [esi + 0x280], ebx
    M32((uint32_t)(esi + 0x280u)) = (uint32_t)(ebx);
L_00422537:  // mov dword ptr [esi + 0x284], ebx
    M32((uint32_t)(esi + 0x284u)) = (uint32_t)(ebx);
L_0042253d:  // mov dword ptr [esi + 0x288], 0xc2c80000
    M32((uint32_t)(esi + 0x288u)) = (uint32_t)(0xc2c80000u);
L_00422547:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00422548:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00422549:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042254a:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00422551:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00422552:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00422555:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00422440, 00422440)
