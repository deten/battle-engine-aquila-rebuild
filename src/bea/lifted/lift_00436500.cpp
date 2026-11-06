// lifted from 00436500 (vslot1, 237 bytes, 98 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00436500(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00436500;
L_00436500:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00436501:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00436502:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00436503:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00436504:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00436508:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043650a:  // je 0x4365e6
    if (f.zf) goto L_004365e6;
L_00436510:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00436516:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00436518:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043651a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043651d:  // je 0x436523
    if (f.zf) goto L_00436523;
L_0043651f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00436521:  // jmp 0x436525
    goto L_00436525;
L_00436523:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00436525:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00436527:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00436529:  // je 0x4365e6
    if (f.zf) goto L_004365e6;
L_0043652f:  // mov esi, dword ptr [ebp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_00436532:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00436534:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00436536:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00436538:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043653a:  // jne 0x436558
    if (!f.zf) goto L_00436558;
L_0043653c:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043653e:  // je 0x436554
    if (f.zf) goto L_00436554;
L_00436540:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00436543:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00436545:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00436548:  // jne 0x436558
    if (!f.zf) goto L_00436558;
L_0043654a:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043654d:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00436550:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00436552:  // jne 0x436534
    if (!f.zf) goto L_00436534;
L_00436554:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00436556:  // jmp 0x43655d
    goto L_0043655d;
L_00436558:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043655a:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043655d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043655f:  // je 0x436587
    if (f.zf) goto L_00436587;
L_00436561:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00436567:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043656a:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043656d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043656f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00436572:  // je 0x436578
    if (f.zf) goto L_00436578;
L_00436574:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00436576:  // jmp 0x43657a
    goto L_0043657a;
L_00436578:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043657a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043657c:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0043657e:  // jne 0x43652f
    if (!f.zf) goto L_0043652f;
L_00436580:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00436581:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00436582:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00436583:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00436584:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00436587:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00436589:  // je 0x4365e6
    if (f.zf) goto L_004365e6;
L_0043658b:  // lea esi, [ecx + 8]
    esi = (uint32_t)((uint32_t)(ecx + 0x8u));
L_0043658e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00436590:  // je 0x4365e6
    if (f.zf) goto L_004365e6;
L_00436592:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_00436595:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00436596:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043659b:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004365a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004365a0:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004365a2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004365a5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004365a7:  // push 0x35a
    t0 = 0x35au; esp -= 4; M32(esp) = t0;
L_004365ac:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004365ae:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004365b0:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_004365b5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004365b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004365b8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004365bd:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004365c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004365c2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004365c4:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004365c6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004365c9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004365cb:  // mov dword ptr [ebp], edx
    M32((uint32_t)(ebp)) = (uint32_t)(edx);
L_004365ce:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004365d0:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004365d2:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004365d4:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004365d6:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004365d8:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004365da:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004365dd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004365df:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004365e1:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004365e4:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004365e6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004365e7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004365e8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004365e9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004365ea:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00436500, 00436500)
