// lifted from 004ff330 (vslot0, 422 bytes, 148 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ff330(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ff330;
L_004ff330:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff333:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ff334:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ff335:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004ff337:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004ff33c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff33d:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004ff340:  // mov eax, dword ptr [ecx + 0x244]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x244u)));
L_004ff346:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ff348:  // je 0x4ff34f
    if (f.zf) goto L_004ff34f;
L_004ff34a:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004ff34d:  // jne 0x4ff351
    if (!f.zf) goto L_004ff351;
L_004ff34f:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ff351:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004ff353:  // call dword ptr [eax + 0xd4]
    t0 = M32((uint32_t)(eax + 0xd4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff359u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff359:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ff35d:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004ff360:  // jne 0x4ff3c5
    if (!f.zf) goto L_004ff3c5;
L_004ff362:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004ff364:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ff366:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff369u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff369:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ff36b:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004ff371:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff376u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff376:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004ff37b:  // jns 0x4ff384
    if (!f.sf) goto L_004ff384;
L_004ff37d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ff37e:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004ff383:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ff384:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004ff388:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff389:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004ff38d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ff38f:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004ff393:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ff395:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ff396:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_004ff39c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ff39d:  // push 0xbbb
    t0 = 0xbbbu; esp -= 4; M32(esp) = t0;
L_004ff3a2:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004ff3a7:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004ff3ad:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004ff3b3:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004ff3b7:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff3bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff3bc:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ff3bd:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ff3be:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ff3bf:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff3c2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ff3c5:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ff3c7:  // je 0x4ff36b
    if (f.zf) goto L_004ff36b;
L_004ff3c9:  // movsx eax, word ptr [edi + 4]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(edi + 0x4u))));
L_004ff3cd:  // add eax, 0xfffff448
    t0 = ladd<32>(eax, 0xfffff448u, f);
    eax = (uint32_t)(t0);
L_004ff3d2:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_004ff3d5:  // ja 0x4ff36b
    if ((!f.cf && !f.zf)) goto L_004ff36b;
L_004ff3d7:  // jmp dword ptr [eax*4 + 0x4ff4d8]
    t0 = M32((uint32_t)(eax * 4u + 0x4ff4d8u));
    switch (t0) {
    case 0x004ff3deu: goto L_004ff3de;
    case 0x004ff3fcu: goto L_004ff3fc;
    case 0x004ff431u: goto L_004ff431;
    case 0x004ff442u: goto L_004ff442;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004ff3de:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004ff3e1:  // mov ecx, dword ptr [eax + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x214u)));
L_004ff3e7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004ff3e9:  // je 0x4ff36b
    if (f.zf) goto L_004ff36b;
L_004ff3eb:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004ff3ed:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff3ee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ff3f0:  // call dword ptr [edx + 0x20]
    t0 = M32((uint32_t)(edx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff3f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff3f3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ff3f4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ff3f5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ff3f6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff3f9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ff3fc:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004ff3ff:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004ff401:  // call dword ptr [eax + 0xd4]
    t0 = M32((uint32_t)(eax + 0xd4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff407u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff407:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ff409:  // jne 0x4ff36b
    if (!f.zf) goto L_004ff36b;
L_004ff40f:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004ff412:  // mov eax, dword ptr [ecx + 0x214]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x214u)));
L_004ff418:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ff41a:  // je 0x4ff36b
    if (f.zf) goto L_004ff36b;
L_004ff420:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004ff422:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff423:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ff425:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff428u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff428:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ff429:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ff42a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ff42b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff42e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ff431:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004ff433:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff434:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ff436:  // call dword ptr [eax + 0x28]
    t0 = M32((uint32_t)(eax + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff439u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff439:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ff43a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ff43b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ff43c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff43f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ff442:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004ff445:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004ff448:  // jne 0x4ff475
    if (!f.zf) goto L_004ff475;
L_004ff44a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff44b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ff44d:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004ff451:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ff453:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ff454:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ff455:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_004ff45a:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004ff45f:  // mov dword ptr [esp + 0x30], 0xbf800000
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0xbf800000u);
L_004ff467:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff46cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff46c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ff46d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ff46e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ff46f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff472:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ff475:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ff477:  // jne 0x4ff4a2
    if (!f.zf) goto L_004ff4a2;
L_004ff479:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff47a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ff47b:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004ff47f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ff480:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ff481:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ff482:  // push 0xbb9
    t0 = 0xbb9u; esp -= 4; M32(esp) = t0;
L_004ff487:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004ff48c:  // mov dword ptr [esp + 0x24], 0xbf800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xbf800000u);
L_004ff494:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff499u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff499:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ff49a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ff49b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ff49c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff49f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ff4a2:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004ff4a5:  // jne 0x4ff3bc
    if (!f.zf) goto L_004ff3bc;
L_004ff4ab:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ff4ac:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ff4ae:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004ff4b2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ff4b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ff4b5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ff4b6:  // push 0xbba
    t0 = 0xbbau; esp -= 4; M32(esp) = t0;
L_004ff4bb:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004ff4c0:  // mov dword ptr [esp + 0x28], 0xbf800000
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xbf800000u);
L_004ff4c8:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ff4cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ff4cd:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ff4ce:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ff4cf:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ff4d0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ff4d3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004ff330, 004ff330)
