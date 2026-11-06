// lifted from 0043d460 (vslot1, 154 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043d460(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043d460;
L_0043d460:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043d461:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043d462:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0043d466:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043d467:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043d469:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043d46a:  // je 0x43d4f3
    if (f.zf) goto L_0043d4f3;
L_0043d470:  // mov edx, dword ptr [0x855400]
    edx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_0043d476:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043d478:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d47a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043d47d:  // je 0x43d483
    if (f.zf) goto L_0043d483;
L_0043d47f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043d481:  // jmp 0x43d485
    goto L_0043d485;
L_0043d483:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d485:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d487:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043d489:  // je 0x43d4f3
    if (f.zf) goto L_0043d4f3;
L_0043d48b:  // mov esi, dword ptr [edi + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xb0u)));
L_0043d491:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0043d493:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043d495:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043d497:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043d499:  // jne 0x43d4b7
    if (!f.zf) goto L_0043d4b7;
L_0043d49b:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043d49d:  // je 0x43d4b3
    if (f.zf) goto L_0043d4b3;
L_0043d49f:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043d4a2:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043d4a4:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043d4a7:  // jne 0x43d4b7
    if (!f.zf) goto L_0043d4b7;
L_0043d4a9:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043d4ac:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043d4af:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043d4b1:  // jne 0x43d493
    if (!f.zf) goto L_0043d493;
L_0043d4b3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d4b5:  // jmp 0x43d4bc
    goto L_0043d4bc;
L_0043d4b7:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043d4b9:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043d4bc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d4be:  // je 0x43d4e6
    if (f.zf) goto L_0043d4e6;
L_0043d4c0:  // mov edx, dword ptr [0x855400]
    edx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_0043d4c6:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043d4c9:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043d4cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d4ce:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043d4d1:  // je 0x43d4d7
    if (f.zf) goto L_0043d4d7;
L_0043d4d3:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043d4d5:  // jmp 0x43d4d9
    goto L_0043d4d9;
L_0043d4d7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d4d9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d4db:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043d4dd:  // jne 0x43d48b
    if (!f.zf) goto L_0043d48b;
L_0043d4df:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d4e0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d4e1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d4e2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d4e3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0043d4e6:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043d4e8:  // je 0x43d4f3
    if (f.zf) goto L_0043d4f3;
L_0043d4ea:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0043d4ed:  // mov dword ptr [edi + 0x160], ecx
    M32((uint32_t)(edi + 0x160u)) = (uint32_t)(ecx);
L_0043d4f3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d4f4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d4f5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d4f6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d4f7:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043d460, 0043d460)
