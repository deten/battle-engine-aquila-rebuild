// lifted from 0043a440 (vslot1, 144 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043a440(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043a440;
L_0043a440:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043a441:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043a442:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0043a446:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043a447:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043a449:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043a44a:  // je 0x43a4c9
    if (f.zf) goto L_0043a4c9;
L_0043a44c:  // mov edx, dword ptr [0x8553f4]
    edx = (uint32_t)(M32((uint32_t)(0x8553f4u)));
L_0043a452:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043a454:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a456:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043a459:  // je 0x43a45f
    if (f.zf) goto L_0043a45f;
L_0043a45b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043a45d:  // jmp 0x43a461
    goto L_0043a461;
L_0043a45f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043a461:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a463:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043a465:  // je 0x43a4c9
    if (f.zf) goto L_0043a4c9;
L_0043a467:  // mov esi, dword ptr [edi + 8]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0043a46a:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0043a46c:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043a46e:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043a470:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043a472:  // jne 0x43a490
    if (!f.zf) goto L_0043a490;
L_0043a474:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043a476:  // je 0x43a48c
    if (f.zf) goto L_0043a48c;
L_0043a478:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043a47b:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043a47d:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043a480:  // jne 0x43a490
    if (!f.zf) goto L_0043a490;
L_0043a482:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043a485:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043a488:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043a48a:  // jne 0x43a46c
    if (!f.zf) goto L_0043a46c;
L_0043a48c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043a48e:  // jmp 0x43a495
    goto L_0043a495;
L_0043a490:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043a492:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043a495:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a497:  // je 0x43a4bf
    if (f.zf) goto L_0043a4bf;
L_0043a499:  // mov edx, dword ptr [0x8553f4]
    edx = (uint32_t)(M32((uint32_t)(0x8553f4u)));
L_0043a49f:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043a4a2:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043a4a5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a4a7:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043a4aa:  // je 0x43a4b0
    if (f.zf) goto L_0043a4b0;
L_0043a4ac:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043a4ae:  // jmp 0x43a4b2
    goto L_0043a4b2;
L_0043a4b0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043a4b2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a4b4:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043a4b6:  // jne 0x43a467
    if (!f.zf) goto L_0043a467;
L_0043a4b8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043a4b9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043a4ba:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043a4bb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043a4bc:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0043a4bf:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043a4c1:  // je 0x43a4c9
    if (f.zf) goto L_0043a4c9;
L_0043a4c3:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0043a4c6:  // mov dword ptr [edi + 0x1c], ecx
    M32((uint32_t)(edi + 0x1cu)) = (uint32_t)(ecx);
L_0043a4c9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043a4ca:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043a4cb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043a4cc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043a4cd:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043a440, 0043a440)
