// lifted from 0043c320 (vslot1, 237 bytes, 98 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043c320(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043c320;
L_0043c320:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043c321:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043c322:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043c323:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043c324:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0043c328:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043c32a:  // je 0x43c406
    if (f.zf) goto L_0043c406;
L_0043c330:  // mov edx, dword ptr [0x855408]
    edx = (uint32_t)(M32((uint32_t)(0x855408u)));
L_0043c336:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043c338:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043c33a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043c33d:  // je 0x43c343
    if (f.zf) goto L_0043c343;
L_0043c33f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043c341:  // jmp 0x43c345
    goto L_0043c345;
L_0043c343:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043c345:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043c347:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0043c349:  // je 0x43c406
    if (f.zf) goto L_0043c406;
L_0043c34f:  // mov esi, dword ptr [ebp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0043c352:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0043c354:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043c356:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043c358:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043c35a:  // jne 0x43c378
    if (!f.zf) goto L_0043c378;
L_0043c35c:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043c35e:  // je 0x43c374
    if (f.zf) goto L_0043c374;
L_0043c360:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043c363:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043c365:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043c368:  // jne 0x43c378
    if (!f.zf) goto L_0043c378;
L_0043c36a:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043c36d:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043c370:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043c372:  // jne 0x43c354
    if (!f.zf) goto L_0043c354;
L_0043c374:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043c376:  // jmp 0x43c37d
    goto L_0043c37d;
L_0043c378:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043c37a:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043c37d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043c37f:  // je 0x43c3a7
    if (f.zf) goto L_0043c3a7;
L_0043c381:  // mov edx, dword ptr [0x855408]
    edx = (uint32_t)(M32((uint32_t)(0x855408u)));
L_0043c387:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043c38a:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043c38d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043c38f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043c392:  // je 0x43c398
    if (f.zf) goto L_0043c398;
L_0043c394:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043c396:  // jmp 0x43c39a
    goto L_0043c39a;
L_0043c398:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043c39a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043c39c:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0043c39e:  // jne 0x43c34f
    if (!f.zf) goto L_0043c34f;
L_0043c3a0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043c3a1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043c3a2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043c3a3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043c3a4:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0043c3a7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043c3a9:  // je 0x43c406
    if (f.zf) goto L_0043c406;
L_0043c3ab:  // lea esi, [ecx + 8]
    esi = (uint32_t)((uint32_t)(ecx + 0x8u));
L_0043c3ae:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0043c3b0:  // je 0x43c406
    if (f.zf) goto L_0043c406;
L_0043c3b2:  // mov ecx, dword ptr [ebp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0043c3b5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043c3b6:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043c3bb:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043c3c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043c3c0:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043c3c2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043c3c5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043c3c7:  // push 0xf1
    t0 = 0xf1u; esp -= 4; M32(esp) = t0;
L_0043c3cc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043c3ce:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043c3d0:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_0043c3d5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043c3d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043c3d8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043c3dd:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043c3e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043c3e2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0043c3e4:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043c3e6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043c3e9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043c3eb:  // mov dword ptr [ebp + 0xc], edx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(edx);
L_0043c3ee:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043c3f0:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043c3f2:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0043c3f4:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0043c3f6:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0043c3f8:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0043c3fa:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043c3fd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043c3ff:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0043c401:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0043c404:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0043c406:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043c407:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043c408:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043c409:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043c40a:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043c320, 0043c320)
