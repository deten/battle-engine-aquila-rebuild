// lifted from 004f95d0 (vslot2, 580 bytes, 189 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f95d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f95d0;
L_004f95d0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f95d1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f95d2:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004f95d4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f95d5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f95d6:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004f95db:  // call 0x4e1130
    t0 = 0x004e1130u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f95e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f95e0:  // mov dword ptr [ebp + 0x140], 0
    M32((uint32_t)(ebp + 0x140u)) = (uint32_t)(0x0u);
L_004f95ea:  // lea edi, [ebp + 0x17c]
    edi = (uint32_t)((uint32_t)(ebp + 0x17cu));
L_004f95f0:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004f95f2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f95f4:  // je 0x4f960f
    if (f.zf) goto L_004f960f;
L_004f95f6:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004f95f8:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f95fa:  // je 0x4f960f
    if (f.zf) goto L_004f960f;
L_004f95fc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f95fd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f95ff:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9604u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9604:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004f9606:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f9608:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f960a:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f960du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f960d:  // jmp 0x4f95f0
    goto L_004f95f0;
L_004f960f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9611:  // lea ecx, [ebp + 0x144]
    ecx = (uint32_t)((uint32_t)(ebp + 0x144u));
L_004f9617:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f961cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f961c:  // lea edi, [ebp + 0x18c]
    edi = (uint32_t)((uint32_t)(ebp + 0x18cu));
L_004f9622:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004f9624:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9626:  // je 0x4f9641
    if (f.zf) goto L_004f9641;
L_004f9628:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004f962a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f962c:  // je 0x4f9641
    if (f.zf) goto L_004f9641;
L_004f962e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f962f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f9631:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9636u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9636:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f9638:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f963a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f963c:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f963fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f963f:  // jmp 0x4f9622
    goto L_004f9622;
L_004f9641:  // lea edi, [ebp + 0x19c]
    edi = (uint32_t)((uint32_t)(ebp + 0x19cu));
L_004f9647:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004f9649:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f964b:  // je 0x4f968a
    if (f.zf) goto L_004f968a;
L_004f964d:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004f964f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f9651:  // je 0x4f968a
    if (f.zf) goto L_004f968a;
L_004f9653:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004f9655:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f9657:  // je 0x4f966e
    if (f.zf) goto L_004f966e;
L_004f9659:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_004f965d:  // je 0x4f9669
    if (f.zf) goto L_004f9669;
L_004f965f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9661:  // call dword ptr [eax + 0xc8]
    t0 = M32((uint32_t)(eax + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9667u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9667:  // jmp 0x4f966e
    goto L_004f966e;
L_004f9669:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f966b:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f966eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f966e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f966f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f9671:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9676u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9676:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9678:  // call 0x44b1d0
    t0 = 0x0044b1d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f967du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f967d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f967e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f9683:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9688u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9688:  // jmp 0x4f9647
    goto L_004f9647;
L_004f968a:  // mov ecx, dword ptr [ebp + 0x1ac]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x1acu)));
L_004f9690:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f9692:  // je 0x4f96c1
    if (f.zf) goto L_004f96c1;
L_004f9694:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9696:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f969bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f969b:  // mov esi, dword ptr [ebp + 0x1ac]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x1acu)));
L_004f96a1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f96a3:  // je 0x4f96b7
    if (f.zf) goto L_004f96b7;
L_004f96a5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f96a7:  // call 0x4cb050
    t0 = 0x004cb050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f96acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f96ac:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f96ad:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f96b2:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f96b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f96b7:  // mov dword ptr [ebp + 0x1ac], 0
    M32((uint32_t)(ebp + 0x1acu)) = (uint32_t)(0x0u);
L_004f96c1:  // lea edi, [ebp + 0x1d4]
    edi = (uint32_t)((uint32_t)(ebp + 0x1d4u));
L_004f96c7:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004f96c9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f96cb:  // je 0x4f96f8
    if (f.zf) goto L_004f96f8;
L_004f96cd:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004f96cf:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f96d1:  // je 0x4f96f8
    if (f.zf) goto L_004f96f8;
L_004f96d3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f96d4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f96d6:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f96dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f96db:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f96dd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f96df:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f96e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f96e4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f96e6:  // call 0x4cb050
    t0 = 0x004cb050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f96ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f96eb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f96ec:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f96f1:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f96f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f96f6:  // jmp 0x4f96c7
    goto L_004f96c7;
L_004f96f8:  // lea edi, [ebp + 0x1b4]
    edi = (uint32_t)((uint32_t)(ebp + 0x1b4u));
L_004f96fe:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004f9700:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9702:  // je 0x4f972f
    if (f.zf) goto L_004f972f;
L_004f9704:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004f9706:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f9708:  // je 0x4f972f
    if (f.zf) goto L_004f972f;
L_004f970a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f970b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f970d:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9712u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9712:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9714:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9716:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f971bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f971b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f971d:  // call 0x4cb050
    t0 = 0x004cb050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9722u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9722:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9723:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f9728:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f972du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f972d:  // jmp 0x4f96fe
    goto L_004f96fe;
L_004f972f:  // lea edi, [ebp + 0x1c4]
    edi = (uint32_t)((uint32_t)(ebp + 0x1c4u));
L_004f9735:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004f9737:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9739:  // je 0x4f9766
    if (f.zf) goto L_004f9766;
L_004f973b:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004f973d:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f973f:  // je 0x4f9766
    if (f.zf) goto L_004f9766;
L_004f9741:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9742:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f9744:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9749u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9749:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f974b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f974d:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9752:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9754:  // call 0x4cb050
    t0 = 0x004cb050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9759u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9759:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f975a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f975f:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9764u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9764:  // jmp 0x4f9735
    goto L_004f9735;
L_004f9766:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f9767:  // mov ecx, 0x8550d0
    ecx = (uint32_t)(0x8550d0u);
L_004f976c:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9771u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9771:  // mov esi, dword ptr [ebp + 0x178]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x178u)));
L_004f9777:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004f9779:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_004f977b:  // je 0x4f9795
    if (f.zf) goto L_004f9795;
L_004f977d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f977f:  // call 0x444000
    t0 = 0x00444000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9784u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9784:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9785:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f978a:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f978fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f978f:  // mov dword ptr [ebp + 0x178], edi
    M32((uint32_t)(ebp + 0x178u)) = (uint32_t)(edi);
L_004f9795:  // mov ecx, dword ptr [ebp + 0x208]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x208u)));
L_004f979b:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004f979d:  // je 0x4f97ac
    if (f.zf) goto L_004f97ac;
L_004f979f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f97a1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f97a3:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f97a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f97a6:  // mov dword ptr [ebp + 0x208], edi
    M32((uint32_t)(ebp + 0x208u)) = (uint32_t)(edi);
L_004f97ac:  // mov eax, dword ptr [ebp + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004f97b2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004f97b4:  // je 0x4f97f3
    if (f.zf) goto L_004f97f3;
L_004f97b6:  // mov cx, word ptr [ebp + 0x2c]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebp + 0x2cu))) & 0xffffu);
L_004f97ba:  // mov edx, 0x100
    edx = (uint32_t)(0x100u);
L_004f97bf:  // and ecx, edx
    t0 = llog<32>(ecx & edx, f);
    ecx = (uint32_t)(t0);
L_004f97c1:  // test cx, cx
    t0 = llog<16>((ecx & 0xffffu) & (ecx & 0xffffu), f);
L_004f97c4:  // jne 0x4f97f3
    if (!f.zf) goto L_004f97f3;
L_004f97c6:  // mov ecx, dword ptr [ebp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_004f97cc:  // sub ecx, edi
    t0 = lsub<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_004f97ce:  // je 0x4f97e2
    if (f.zf) goto L_004f97e2;
L_004f97d0:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004f97d1:  // jne 0x4f97f3
    if (!f.zf) goto L_004f97f3;
L_004f97d3:  // mov eax, dword ptr [eax + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xe0u)));
L_004f97d9:  // dec dword ptr [eax*4 + 0x855228]
    t0 = ldec<32>(M32((uint32_t)(eax * 4u + 0x855228u)), f);
    M32((uint32_t)(eax * 4u + 0x855228u)) = (uint32_t)(t0);
L_004f97e0:  // jmp 0x4f97ef
    goto L_004f97ef;
L_004f97e2:  // mov eax, dword ptr [eax + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xe0u)));
L_004f97e8:  // dec dword ptr [eax*4 + 0x8551c0]
    t0 = ldec<32>(M32((uint32_t)(eax * 4u + 0x8551c0u)), f);
    M32((uint32_t)(eax * 4u + 0x8551c0u)) = (uint32_t)(t0);
L_004f97ef:  // or word ptr [ebp + 0x2c], dx
    t0 = llog<16>(M16((uint32_t)(ebp + 0x2cu)) | (edx & 0xffffu), f);
    M16((uint32_t)(ebp + 0x2cu)) = (uint16_t)(t0);
L_004f97f3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f97f4:  // mov ecx, 0x8550c0
    ecx = (uint32_t)(0x8550c0u);
L_004f97f9:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f97feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f97fe:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f97ff:  // mov ecx, 0x8550b0
    ecx = (uint32_t)(0x8550b0u);
L_004f9804:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9809u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9809:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004f980b:  // call 0x4f41b0
    t0 = 0x004f41b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f9810u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f9810:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f9811:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f9812:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004f9813:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004f95d0, 004f95d0)
