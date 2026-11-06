// lifted from 005134a0 (FUN_005134a0, 326 bytes, 118 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005134a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005134a0;
L_005134a0:  // sub esp, 0x50
    t0 = lsub<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_005134a3:  // mov edx, dword ptr [ecx + 0x32e5c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x32e5cu)));
L_005134a9:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005134ae:  // mov ecx, dword ptr [ecx + 0x32e58]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x32e58u)));
L_005134b4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005134b5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005134b6:  // lea ebx, [esp + 0xc]
    ebx = (uint32_t)((uint32_t)(esp + 0xcu));
L_005134ba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005134bc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005134bd:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005134bf:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_005134c1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005134c3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005134c5:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_005134cd:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_005134cf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005134d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005134d1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005134d2:  // call dword ptr [edi + 0x5c]
    t0 = M32((uint32_t)(edi + 0x5cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005134d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005134d5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005134d6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005134d7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005134d9:  // jl 0x5135e0
    if ((f.sf != f.of)) goto L_005135e0;
L_005134df:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_005134e3:  // lea edx, [esp]
    edx = (uint32_t)((uint32_t)(esp));
L_005134e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005134e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005134ea:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005134ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005134ed:  // call dword ptr [ecx + 0x48]
    t0 = M32((uint32_t)(ecx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005134f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005134f0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005134f2:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_005134f6:  // jge 0x51350c
    if ((f.sf == f.of)) goto L_0051350c;
L_005134f8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005134fa:  // je 0x5135e0
    if (f.zf) goto L_005135e0;
L_00513500:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00513502:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00513503:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00513506u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00513506:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_00513509:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0051350c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051350e:  // je 0x51351e
    if (f.zf) goto L_0051351e;
L_00513510:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00513512:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00513513:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00513516u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00513516:  // mov dword ptr [esp + 4], 0
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(0x0u);
L_0051351e:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00513523:  // mov edx, dword ptr [esp]
    edx = (uint32_t)(M32((uint32_t)(esp)));
L_00513527:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00513528:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051352a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0051352c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051352d:  // call dword ptr [ecx + 0x84]
    t0 = M32((uint32_t)(ecx + 0x84u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00513533u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00513533:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00513535:  // jge 0x513563
    if ((f.sf == f.of)) goto L_00513563;
L_00513537:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00513538:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051353du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051353d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051353e:  // push 0x63de54
    t0 = 0x63de54u; esp -= 4; M32(esp) = t0;
L_00513543:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00513548u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00513548:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0051354c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051354f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00513551:  // je 0x5135e0
    if (f.zf) goto L_005135e0;
L_00513557:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00513559:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051355a:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051355du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051355d:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_00513560:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00513563:  // mov eax, dword ptr [esp]
    eax = (uint32_t)(M32((uint32_t)(esp)));
L_00513567:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0051356b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051356c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051356d:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0051356f:  // call dword ptr [edx + 0x30]
    t0 = M32((uint32_t)(edx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00513572u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00513572:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00513576:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_00513579:  // je 0x513580
    if (f.zf) goto L_00513580;
L_0051357b:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_0051357e:  // jne 0x5135d6
    if (!f.zf) goto L_005135d6;
L_00513580:  // mov eax, dword ptr [esp]
    eax = (uint32_t)(M32((uint32_t)(esp)));
L_00513584:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00513586:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_0051358a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051358c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0051358e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051358f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00513590:  // call dword ptr [edx + 0x34]
    t0 = M32((uint32_t)(edx + 0x34u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00513593u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00513593:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00513595:  // jl 0x5135d6
    if ((f.sf != f.of)) goto L_005135d6;
L_00513597:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0051359b:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_0051359f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005135a0:  // push 0x62c610
    t0 = 0x62c610u; esp -= 4; M32(esp) = t0;
L_005135a5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005135a6:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005135abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005135ab:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005135af:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005135b3:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005135b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005135b8:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005135bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005135bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005135be:  // lea edx, [esp + 0x48]
    edx = (uint32_t)((uint32_t)(esp + 0x48u));
L_005135c2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005135c3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005135c4:  // call 0x4f3110
    t0 = 0x004f3110u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005135c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005135c9:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005135cd:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_005135d0:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005135d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005135d3:  // call dword ptr [ecx + 0x38]
    t0 = M32((uint32_t)(ecx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005135d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005135d6:  // mov eax, dword ptr [esp]
    eax = (uint32_t)(M32((uint32_t)(esp)));
L_005135da:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005135db:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005135dd:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005135e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005135e0:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_005135e3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005134a0, 005134a0)
