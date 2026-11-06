// lifted from 00438550 (vslot1, 144 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00438550(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00438550;
L_00438550:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00438551:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00438552:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00438556:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00438557:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00438559:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043855a:  // je 0x4385d9
    if (f.zf) goto L_004385d9;
L_0043855c:  // mov edx, dword ptr [0x8553f0]
    edx = (uint32_t)(M32((uint32_t)(0x8553f0u)));
L_00438562:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00438564:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438566:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00438569:  // je 0x43856f
    if (f.zf) goto L_0043856f;
L_0043856b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043856d:  // jmp 0x438571
    goto L_00438571;
L_0043856f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00438571:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438573:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00438575:  // je 0x4385d9
    if (f.zf) goto L_004385d9;
L_00438577:  // mov esi, dword ptr [edi + 0x18]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_0043857a:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0043857c:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043857e:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00438580:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_00438582:  // jne 0x4385a0
    if (!f.zf) goto L_004385a0;
L_00438584:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00438586:  // je 0x43859c
    if (f.zf) goto L_0043859c;
L_00438588:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043858b:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043858d:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00438590:  // jne 0x4385a0
    if (!f.zf) goto L_004385a0;
L_00438592:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00438595:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00438598:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043859a:  // jne 0x43857c
    if (!f.zf) goto L_0043857c;
L_0043859c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043859e:  // jmp 0x4385a5
    goto L_004385a5;
L_004385a0:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004385a2:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004385a5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004385a7:  // je 0x4385cf
    if (f.zf) goto L_004385cf;
L_004385a9:  // mov edx, dword ptr [0x8553f0]
    edx = (uint32_t)(M32((uint32_t)(0x8553f0u)));
L_004385af:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004385b2:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004385b5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004385b7:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004385ba:  // je 0x4385c0
    if (f.zf) goto L_004385c0;
L_004385bc:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004385be:  // jmp 0x4385c2
    goto L_004385c2;
L_004385c0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004385c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004385c4:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004385c6:  // jne 0x438577
    if (!f.zf) goto L_00438577;
L_004385c8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004385c9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004385ca:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004385cb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004385cc:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004385cf:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004385d1:  // je 0x4385d9
    if (f.zf) goto L_004385d9;
L_004385d3:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004385d6:  // mov dword ptr [edi + 0x30], ecx
    M32((uint32_t)(edi + 0x30u)) = (uint32_t)(ecx);
L_004385d9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004385da:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004385db:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004385dc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004385dd:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00438550, 00438550)
