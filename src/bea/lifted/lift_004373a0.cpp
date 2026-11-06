// lifted from 004373a0 (vslot1, 237 bytes, 98 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004373a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004373a0;
L_004373a0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004373a1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004373a2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004373a3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004373a4:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004373a8:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004373aa:  // je 0x437486
    if (f.zf) goto L_00437486;
L_004373b0:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_004373b6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004373b8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004373ba:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004373bd:  // je 0x4373c3
    if (f.zf) goto L_004373c3;
L_004373bf:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004373c1:  // jmp 0x4373c5
    goto L_004373c5;
L_004373c3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004373c5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004373c7:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004373c9:  // je 0x437486
    if (f.zf) goto L_00437486;
L_004373cf:  // mov esi, dword ptr [ebp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004373d2:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004373d4:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004373d6:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_004373d8:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_004373da:  // jne 0x4373f8
    if (!f.zf) goto L_004373f8;
L_004373dc:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_004373de:  // je 0x4373f4
    if (f.zf) goto L_004373f4;
L_004373e0:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004373e3:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_004373e5:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004373e8:  // jne 0x4373f8
    if (!f.zf) goto L_004373f8;
L_004373ea:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004373ed:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004373f0:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_004373f2:  // jne 0x4373d4
    if (!f.zf) goto L_004373d4;
L_004373f4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004373f6:  // jmp 0x4373fd
    goto L_004373fd;
L_004373f8:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004373fa:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004373fd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004373ff:  // je 0x437427
    if (f.zf) goto L_00437427;
L_00437401:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00437407:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043740a:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043740d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043740f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00437412:  // je 0x437418
    if (f.zf) goto L_00437418;
L_00437414:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00437416:  // jmp 0x43741a
    goto L_0043741a;
L_00437418:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043741a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043741c:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0043741e:  // jne 0x4373cf
    if (!f.zf) goto L_004373cf;
L_00437420:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00437421:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00437422:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00437423:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00437424:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00437427:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00437429:  // je 0x437486
    if (f.zf) goto L_00437486;
L_0043742b:  // lea esi, [ecx + 8]
    esi = (uint32_t)((uint32_t)(ecx + 0x8u));
L_0043742e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00437430:  // je 0x437486
    if (f.zf) goto L_00437486;
L_00437432:  // mov ecx, dword ptr [ebp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_00437435:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00437436:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043743b:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00437440u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00437440:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00437442:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00437445:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00437447:  // push 0x37b
    t0 = 0x37bu; esp -= 4; M32(esp) = t0;
L_0043744c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043744e:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00437450:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00437455:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00437457:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00437458:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043745d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00437462u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00437462:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00437464:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00437466:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00437469:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043746b:  // mov dword ptr [ebp + 0x2c], edx
    M32((uint32_t)(ebp + 0x2cu)) = (uint32_t)(edx);
L_0043746e:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00437470:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00437472:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00437474:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00437476:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00437478:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0043747a:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043747d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043747f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00437481:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00437484:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00437486:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00437487:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00437488:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00437489:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043748a:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004373a0, 004373a0)
