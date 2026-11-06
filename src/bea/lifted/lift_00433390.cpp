// lifted from 00433390 (FUN_00433390, 2372 bytes, 728 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00433390(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00433390;
L_00433390:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00433391:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00433392:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00433396:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00433398:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043339a:  // je 0x433ccf
    if (f.zf) goto L_00433ccf;
L_004333a0:  // mov eax, dword ptr [ebp + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xe0u)));
L_004333a6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004333a7:  // mov dword ptr [ebx + 0xe0], eax
    M32((uint32_t)(ebx + 0xe0u)) = (uint32_t)(eax);
L_004333ad:  // mov esi, dword ptr [ebp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_004333b0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004333b2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004333b3:  // je 0x433409
    if (f.zf) goto L_00433409;
L_004333b5:  // mov ecx, dword ptr [ebx + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_004333b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004333b9:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004333be:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004333c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004333c3:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004333c5:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004333c8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004333ca:  // push 0x6c6
    t0 = 0x6c6u; esp -= 4; M32(esp) = t0;
L_004333cf:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004333d1:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004333d3:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_004333d8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004333da:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004333db:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004333e0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004333e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004333e5:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004333e7:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004333e9:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004333ec:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004333ee:  // mov dword ptr [ebx + 0x2c], edx
    M32((uint32_t)(ebx + 0x2cu)) = (uint32_t)(edx);
L_004333f1:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004333f3:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004333f5:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004333f7:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004333f9:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004333fb:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004333fd:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433400:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433402:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433404:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433407:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433409:  // mov esi, dword ptr [ebp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_0043340c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0043340e:  // je 0x433464
    if (f.zf) goto L_00433464;
L_00433410:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_00433413:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433414:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433419:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043341eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043341e:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433420:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433423:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433425:  // push 0x76b
    t0 = 0x76bu; esp -= 4; M32(esp) = t0;
L_0043342a:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043342c:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043342e:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433433:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433435:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433436:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043343b:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433440u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433440:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433442:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433444:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433447:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433449:  // mov dword ptr [ebx + 0x30], edx
    M32((uint32_t)(ebx + 0x30u)) = (uint32_t)(edx);
L_0043344c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043344e:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433450:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433452:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433454:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433456:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433458:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043345b:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043345d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0043345f:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433462:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433464:  // mov esi, dword ptr [ebp + 0xa8]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_0043346a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0043346c:  // je 0x4334c8
    if (f.zf) goto L_004334c8;
L_0043346e:  // mov ecx, dword ptr [ebx + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_00433474:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433475:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043347a:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043347fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043347f:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433481:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433484:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433486:  // push 0x6db
    t0 = 0x6dbu; esp -= 4; M32(esp) = t0;
L_0043348b:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043348d:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043348f:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433494:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433496:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433497:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043349c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004334a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004334a1:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004334a3:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004334a5:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004334a8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004334aa:  // mov dword ptr [ebx + 0xa8], edx
    M32((uint32_t)(ebx + 0xa8u)) = (uint32_t)(edx);
L_004334b0:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004334b2:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004334b4:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004334b6:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004334b8:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004334ba:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004334bc:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004334bf:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004334c1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004334c3:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004334c6:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004334c8:  // mov esi, dword ptr [ebp + 0xac]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_004334ce:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004334d0:  // je 0x43352c
    if (f.zf) goto L_0043352c;
L_004334d2:  // mov ecx, dword ptr [ebx + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_004334d8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004334d9:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004334de:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004334e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004334e3:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004334e5:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004334e8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004334ea:  // push 0x6e7
    t0 = 0x6e7u; esp -= 4; M32(esp) = t0;
L_004334ef:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004334f1:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004334f3:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_004334f8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004334fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004334fb:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433500:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433505u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433505:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433507:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433509:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043350c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043350e:  // mov dword ptr [ebx + 0xac], edx
    M32((uint32_t)(ebx + 0xacu)) = (uint32_t)(edx);
L_00433514:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433516:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433518:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0043351a:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0043351c:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0043351e:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433520:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433523:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433525:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433527:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0043352a:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0043352c:  // mov esi, dword ptr [ebp + 0x7c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x7cu)));
L_0043352f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433531:  // je 0x433587
    if (f.zf) goto L_00433587;
L_00433533:  // mov ecx, dword ptr [ebx + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x7cu)));
L_00433536:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433537:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043353c:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433541u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433541:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433543:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433546:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433548:  // push 0x747
    t0 = 0x747u; esp -= 4; M32(esp) = t0;
L_0043354d:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043354f:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433551:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433556:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433558:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433559:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043355e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433563u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433563:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433565:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433567:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043356a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043356c:  // mov dword ptr [ebx + 0x7c], edx
    M32((uint32_t)(ebx + 0x7cu)) = (uint32_t)(edx);
L_0043356f:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433571:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433573:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433575:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433577:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433579:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0043357b:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043357e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433580:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433582:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433585:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433587:  // mov ecx, dword ptr [ebp + 0xe8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe8u)));
L_0043358d:  // mov dword ptr [ebx + 0xe8], ecx
    M32((uint32_t)(ebx + 0xe8u)) = (uint32_t)(ecx);
L_00433593:  // mov edx, dword ptr [ebp + 0xec]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_00433599:  // mov dword ptr [ebx + 0xec], edx
    M32((uint32_t)(ebx + 0xecu)) = (uint32_t)(edx);
L_0043359f:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004335a5:  // mov dword ptr [ebx + 0xf0], eax
    M32((uint32_t)(ebx + 0xf0u)) = (uint32_t)(eax);
L_004335ab:  // mov ecx, dword ptr [ebp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xc0u)));
L_004335b1:  // mov dword ptr [ebx + 0xc0], ecx
    M32((uint32_t)(ebx + 0xc0u)) = (uint32_t)(ecx);
L_004335b7:  // mov edx, dword ptr [ebp + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xc4u)));
L_004335bd:  // mov dword ptr [ebx + 0xc4], edx
    M32((uint32_t)(ebx + 0xc4u)) = (uint32_t)(edx);
L_004335c3:  // mov eax, dword ptr [ebp + 0xc8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xc8u)));
L_004335c9:  // mov dword ptr [ebx + 0xc8], eax
    M32((uint32_t)(ebx + 0xc8u)) = (uint32_t)(eax);
L_004335cf:  // mov ecx, dword ptr [ebp + 0xd4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xd4u)));
L_004335d5:  // mov dword ptr [ebx + 0xd4], ecx
    M32((uint32_t)(ebx + 0xd4u)) = (uint32_t)(ecx);
L_004335db:  // mov edx, dword ptr [ebp + 0xcc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xccu)));
L_004335e1:  // mov dword ptr [ebx + 0xcc], edx
    M32((uint32_t)(ebx + 0xccu)) = (uint32_t)(edx);
L_004335e7:  // mov eax, dword ptr [ebp + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xd0u)));
L_004335ed:  // mov dword ptr [ebx + 0xd0], eax
    M32((uint32_t)(ebx + 0xd0u)) = (uint32_t)(eax);
L_004335f3:  // mov ecx, dword ptr [ebp + 0xf4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf4u)));
L_004335f9:  // mov dword ptr [ebx + 0xf4], ecx
    M32((uint32_t)(ebx + 0xf4u)) = (uint32_t)(ecx);
L_004335ff:  // mov edx, dword ptr [ebp + 0xf8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf8u)));
L_00433605:  // mov dword ptr [ebx + 0xf8], edx
    M32((uint32_t)(ebx + 0xf8u)) = (uint32_t)(edx);
L_0043360b:  // mov eax, dword ptr [ebp + 0x100]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x100u)));
L_00433611:  // mov dword ptr [ebx + 0x100], eax
    M32((uint32_t)(ebx + 0x100u)) = (uint32_t)(eax);
L_00433617:  // mov ecx, dword ptr [ebp + 0x104]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x104u)));
L_0043361d:  // mov dword ptr [ebx + 0x104], ecx
    M32((uint32_t)(ebx + 0x104u)) = (uint32_t)(ecx);
L_00433623:  // mov edx, dword ptr [ebp + 0x110]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x110u)));
L_00433629:  // mov dword ptr [ebx + 0x110], edx
    M32((uint32_t)(ebx + 0x110u)) = (uint32_t)(edx);
L_0043362f:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_00433635:  // mov dword ptr [ebx + 0x108], eax
    M32((uint32_t)(ebx + 0x108u)) = (uint32_t)(eax);
L_0043363b:  // mov ecx, dword ptr [ebp + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x160u)));
L_00433641:  // mov dword ptr [ebx + 0x160], ecx
    M32((uint32_t)(ebx + 0x160u)) = (uint32_t)(ecx);
L_00433647:  // mov edx, dword ptr [ebp + 0x144]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_0043364d:  // mov dword ptr [ebx + 0x144], edx
    M32((uint32_t)(ebx + 0x144u)) = (uint32_t)(edx);
L_00433653:  // mov eax, dword ptr [ebp + 0x148]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x148u)));
L_00433659:  // mov dword ptr [ebx + 0x148], eax
    M32((uint32_t)(ebx + 0x148u)) = (uint32_t)(eax);
L_0043365f:  // mov ecx, dword ptr [ebp + 0x14c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x14cu)));
L_00433665:  // mov dword ptr [ebx + 0x14c], ecx
    M32((uint32_t)(ebx + 0x14cu)) = (uint32_t)(ecx);
L_0043366b:  // mov edx, dword ptr [ebp + 0x150]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x150u)));
L_00433671:  // mov dword ptr [ebx + 0x150], edx
    M32((uint32_t)(ebx + 0x150u)) = (uint32_t)(edx);
L_00433677:  // mov eax, dword ptr [ebp + 0x140]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x140u)));
L_0043367d:  // mov dword ptr [ebx + 0x140], eax
    M32((uint32_t)(ebx + 0x140u)) = (uint32_t)(eax);
L_00433683:  // mov ecx, dword ptr [ebp + 0x118]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x118u)));
L_00433689:  // mov dword ptr [ebx + 0x118], ecx
    M32((uint32_t)(ebx + 0x118u)) = (uint32_t)(ecx);
L_0043368f:  // mov edx, dword ptr [ebp + 0x11c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x11cu)));
L_00433695:  // mov dword ptr [ebx + 0x11c], edx
    M32((uint32_t)(ebx + 0x11cu)) = (uint32_t)(edx);
L_0043369b:  // mov eax, dword ptr [ebp + 0x120]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x120u)));
L_004336a1:  // mov dword ptr [ebx + 0x120], eax
    M32((uint32_t)(ebx + 0x120u)) = (uint32_t)(eax);
L_004336a7:  // mov dword ptr [ebx + 0x124], 0
    M32((uint32_t)(ebx + 0x124u)) = (uint32_t)(0x0u);
L_004336b1:  // mov ecx, dword ptr [ebp + 0x154]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x154u)));
L_004336b7:  // mov dword ptr [ebx + 0x154], ecx
    M32((uint32_t)(ebx + 0x154u)) = (uint32_t)(ecx);
L_004336bd:  // mov edx, dword ptr [ebp + 0xe4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_004336c3:  // mov dword ptr [ebx + 0xe4], edx
    M32((uint32_t)(ebx + 0xe4u)) = (uint32_t)(edx);
L_004336c9:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_004336cf:  // mov dword ptr [ebx + 0x10c], eax
    M32((uint32_t)(ebx + 0x10cu)) = (uint32_t)(eax);
L_004336d5:  // mov ecx, dword ptr [ebp + 0x188]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x188u)));
L_004336db:  // mov dword ptr [ebx + 0x188], ecx
    M32((uint32_t)(ebx + 0x188u)) = (uint32_t)(ecx);
L_004336e1:  // mov edx, dword ptr [ebp + 0x18c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x18cu)));
L_004336e7:  // mov dword ptr [ebx + 0x18c], edx
    M32((uint32_t)(ebx + 0x18cu)) = (uint32_t)(edx);
L_004336ed:  // mov eax, dword ptr [ebp + 0x158]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x158u)));
L_004336f3:  // mov dword ptr [ebx + 0x158], eax
    M32((uint32_t)(ebx + 0x158u)) = (uint32_t)(eax);
L_004336f9:  // mov ecx, dword ptr [ebp + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x15cu)));
L_004336ff:  // mov dword ptr [ebx + 0x15c], ecx
    M32((uint32_t)(ebx + 0x15cu)) = (uint32_t)(ecx);
L_00433705:  // mov edx, dword ptr [ebp + 0xbc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xbcu)));
L_0043370b:  // mov dword ptr [ebx + 0xbc], edx
    M32((uint32_t)(ebx + 0xbcu)) = (uint32_t)(edx);
L_00433711:  // mov eax, dword ptr [ebp + 0xd8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xd8u)));
L_00433717:  // mov dword ptr [ebx + 0xd8], eax
    M32((uint32_t)(ebx + 0xd8u)) = (uint32_t)(eax);
L_0043371d:  // mov ecx, dword ptr [ebp + 0xdc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xdcu)));
L_00433723:  // mov dword ptr [ebx + 0xdc], ecx
    M32((uint32_t)(ebx + 0xdcu)) = (uint32_t)(ecx);
L_00433729:  // mov edx, dword ptr [ebp + 0x180]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x180u)));
L_0043372f:  // mov dword ptr [ebx + 0x180], edx
    M32((uint32_t)(ebx + 0x180u)) = (uint32_t)(edx);
L_00433735:  // mov eax, dword ptr [ebp + 0x184]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x184u)));
L_0043373b:  // mov dword ptr [ebx + 0x184], eax
    M32((uint32_t)(ebx + 0x184u)) = (uint32_t)(eax);
L_00433741:  // mov ecx, dword ptr [ebp + 0x1a8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x1a8u)));
L_00433747:  // mov dword ptr [ebx + 0x1a8], ecx
    M32((uint32_t)(ebx + 0x1a8u)) = (uint32_t)(ecx);
L_0043374d:  // mov esi, dword ptr [ebp + 0x84]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x84u)));
L_00433753:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433755:  // je 0x4337b1
    if (f.zf) goto L_004337b1;
L_00433757:  // mov edx, dword ptr [ebx + 0x84]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_0043375d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433762:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00433763:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433768u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433768:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043376a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043376d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043376f:  // push 0x6f3
    t0 = 0x6f3u; esp -= 4; M32(esp) = t0;
L_00433774:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433776:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433778:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_0043377d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043377f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433780:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433785:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043378au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043378a:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0043378c:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043378e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433791:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433793:  // mov dword ptr [ebx + 0x84], edx
    M32((uint32_t)(ebx + 0x84u)) = (uint32_t)(edx);
L_00433799:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043379b:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043379d:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0043379f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004337a1:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004337a3:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004337a5:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004337a8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004337aa:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004337ac:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004337af:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004337b1:  // mov esi, dword ptr [ebp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_004337b7:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004337b9:  // je 0x433815
    if (f.zf) goto L_00433815;
L_004337bb:  // mov ecx, dword ptr [ebx + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_004337c1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004337c2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004337c7:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004337ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004337cc:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004337ce:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004337d1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004337d3:  // push 0x6ff
    t0 = 0x6ffu; esp -= 4; M32(esp) = t0;
L_004337d8:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004337da:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004337dc:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_004337e1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004337e3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004337e4:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004337e9:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004337eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004337ee:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004337f0:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004337f2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004337f5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004337f7:  // mov dword ptr [ebx + 0x88], edx
    M32((uint32_t)(ebx + 0x88u)) = (uint32_t)(edx);
L_004337fd:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004337ff:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433801:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433803:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433805:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433807:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433809:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043380c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043380e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433810:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433813:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433815:  // mov esi, dword ptr [ebp + 0x8c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x8cu)));
L_0043381b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0043381d:  // je 0x433879
    if (f.zf) goto L_00433879;
L_0043381f:  // mov ecx, dword ptr [ebx + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8cu)));
L_00433825:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433826:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043382b:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433830u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433830:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433832:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433835:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433837:  // push 0x70b
    t0 = 0x70bu; esp -= 4; M32(esp) = t0;
L_0043383c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043383e:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433840:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433845:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433847:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433848:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043384d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433852u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433852:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433854:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433856:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433859:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043385b:  // mov dword ptr [ebx + 0x8c], edx
    M32((uint32_t)(ebx + 0x8cu)) = (uint32_t)(edx);
L_00433861:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433863:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433865:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433867:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433869:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0043386b:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0043386d:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433870:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433872:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433874:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433877:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433879:  // mov esi, dword ptr [ebp + 0x94]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x94u)));
L_0043387f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433881:  // je 0x4338dd
    if (f.zf) goto L_004338dd;
L_00433883:  // mov ecx, dword ptr [ebx + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_00433889:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043388a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043388f:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433894:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433896:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433899:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043389b:  // push 0x723
    t0 = 0x723u; esp -= 4; M32(esp) = t0;
L_004338a0:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004338a2:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004338a4:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_004338a9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004338ab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004338ac:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004338b1:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004338b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004338b6:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004338b8:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004338ba:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004338bd:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004338bf:  // mov dword ptr [ebx + 0x94], edx
    M32((uint32_t)(ebx + 0x94u)) = (uint32_t)(edx);
L_004338c5:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004338c7:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004338c9:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004338cb:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004338cd:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004338cf:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004338d1:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004338d4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004338d6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004338d8:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004338db:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004338dd:  // mov esi, dword ptr [ebp + 0x98]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004338e3:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004338e5:  // je 0x433941
    if (f.zf) goto L_00433941;
L_004338e7:  // mov ecx, dword ptr [ebx + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x98u)));
L_004338ed:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004338ee:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004338f3:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004338f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004338f8:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004338fa:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004338fd:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004338ff:  // push 0x72f
    t0 = 0x72fu; esp -= 4; M32(esp) = t0;
L_00433904:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433906:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433908:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_0043390d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043390f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433910:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433915:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043391au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043391a:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0043391c:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043391e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433921:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433923:  // mov dword ptr [ebx + 0x98], edx
    M32((uint32_t)(ebx + 0x98u)) = (uint32_t)(edx);
L_00433929:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043392b:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043392d:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0043392f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433931:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433933:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433935:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433938:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043393a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0043393c:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0043393f:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433941:  // mov esi, dword ptr [ebp + 0x90]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x90u)));
L_00433947:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433949:  // je 0x4339a5
    if (f.zf) goto L_004339a5;
L_0043394b:  // mov ecx, dword ptr [ebx + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_00433951:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433952:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433957:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043395cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043395c:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043395e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433961:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433963:  // push 0x717
    t0 = 0x717u; esp -= 4; M32(esp) = t0;
L_00433968:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043396a:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043396c:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433971:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433973:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433974:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433979:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043397eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043397e:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433980:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433982:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433985:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433987:  // mov dword ptr [ebx + 0x90], edx
    M32((uint32_t)(ebx + 0x90u)) = (uint32_t)(edx);
L_0043398d:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043398f:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433991:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433993:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433995:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433997:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433999:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043399c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043399e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004339a0:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004339a3:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004339a5:  // mov esi, dword ptr [ebp + 0x80]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_004339ab:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004339ad:  // je 0x433a09
    if (f.zf) goto L_00433a09;
L_004339af:  // mov ecx, dword ptr [ebx + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004339b5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004339b6:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004339bb:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004339c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004339c0:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004339c2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004339c5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004339c7:  // push 0x777
    t0 = 0x777u; esp -= 4; M32(esp) = t0;
L_004339cc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004339ce:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004339d0:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_004339d5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004339d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004339d8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004339dd:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004339e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004339e2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004339e4:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004339e6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004339e9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004339eb:  // mov dword ptr [ebx + 0x80], edx
    M32((uint32_t)(ebx + 0x80u)) = (uint32_t)(edx);
L_004339f1:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004339f3:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004339f5:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004339f7:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004339f9:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004339fb:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004339fd:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433a00:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433a02:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433a04:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433a07:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433a09:  // mov esi, dword ptr [ebp + 0x9c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x9cu)));
L_00433a0f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433a11:  // je 0x433a6d
    if (f.zf) goto L_00433a6d;
L_00433a13:  // mov ecx, dword ptr [ebx + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x9cu)));
L_00433a19:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433a1a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433a1f:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433a24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433a24:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433a26:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433a29:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433a2b:  // push 0x73b
    t0 = 0x73bu; esp -= 4; M32(esp) = t0;
L_00433a30:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433a32:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433a34:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433a39:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433a3b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433a3c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433a41:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433a46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433a46:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433a48:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433a4a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433a4d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433a4f:  // mov dword ptr [ebx + 0x9c], edx
    M32((uint32_t)(ebx + 0x9cu)) = (uint32_t)(edx);
L_00433a55:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433a57:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433a59:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433a5b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433a5d:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433a5f:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433a61:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433a64:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433a66:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433a68:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433a6b:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433a6d:  // mov esi, dword ptr [ebp + 0xa0]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xa0u)));
L_00433a73:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433a75:  // je 0x433ad1
    if (f.zf) goto L_00433ad1;
L_00433a77:  // mov ecx, dword ptr [ebx + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa0u)));
L_00433a7d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433a7e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433a83:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433a88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433a88:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433a8a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433a8d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433a8f:  // push 0x753
    t0 = 0x753u; esp -= 4; M32(esp) = t0;
L_00433a94:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433a96:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433a98:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433a9d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433a9f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433aa0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433aa5:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433aaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433aaa:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433aac:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433aae:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433ab1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433ab3:  // mov dword ptr [ebx + 0xa0], edx
    M32((uint32_t)(ebx + 0xa0u)) = (uint32_t)(edx);
L_00433ab9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433abb:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433abd:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433abf:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433ac1:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433ac3:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433ac5:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433ac8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433aca:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433acc:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433acf:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433ad1:  // mov esi, dword ptr [ebp + 0xa4]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xa4u)));
L_00433ad7:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433ad9:  // je 0x433b35
    if (f.zf) goto L_00433b35;
L_00433adb:  // mov ecx, dword ptr [ebx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_00433ae1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433ae2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433ae7:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433aecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433aec:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433aee:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433af1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433af3:  // push 0x75f
    t0 = 0x75fu; esp -= 4; M32(esp) = t0;
L_00433af8:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433afa:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433afc:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433b01:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00433b03:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00433b04:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433b09:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433b0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433b0e:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00433b10:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00433b12:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00433b15:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433b17:  // mov dword ptr [ebx + 0xa4], edx
    M32((uint32_t)(ebx + 0xa4u)) = (uint32_t)(edx);
L_00433b1d:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00433b1f:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00433b21:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00433b23:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00433b25:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00433b27:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00433b29:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00433b2c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00433b2e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00433b30:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00433b33:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00433b35:  // mov ecx, dword ptr [ebp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_00433b3b:  // mov dword ptr [ebx + 0x128], ecx
    M32((uint32_t)(ebx + 0x128u)) = (uint32_t)(ecx);
L_00433b41:  // mov edx, dword ptr [ebp + 0x12c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x12cu)));
L_00433b47:  // mov dword ptr [ebx + 0x12c], edx
    M32((uint32_t)(ebx + 0x12cu)) = (uint32_t)(edx);
L_00433b4d:  // mov eax, dword ptr [ebp + 0x130]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x130u)));
L_00433b53:  // mov dword ptr [ebx + 0x130], eax
    M32((uint32_t)(ebx + 0x130u)) = (uint32_t)(eax);
L_00433b59:  // mov ecx, dword ptr [ebp + 0x198]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x198u)));
L_00433b5f:  // mov dword ptr [ebx + 0x198], ecx
    M32((uint32_t)(ebx + 0x198u)) = (uint32_t)(ecx);
L_00433b65:  // mov edx, dword ptr [ebp + 0x114]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x114u)));
L_00433b6b:  // mov dword ptr [ebx + 0x114], edx
    M32((uint32_t)(ebx + 0x114u)) = (uint32_t)(edx);
L_00433b71:  // mov eax, dword ptr [ebp + 0x19c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x19cu)));
L_00433b77:  // mov dword ptr [ebx + 0x19c], eax
    M32((uint32_t)(ebx + 0x19cu)) = (uint32_t)(eax);
L_00433b7d:  // mov ecx, dword ptr [ebp + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x134u)));
L_00433b83:  // mov dword ptr [ebx + 0x134], ecx
    M32((uint32_t)(ebx + 0x134u)) = (uint32_t)(ecx);
L_00433b89:  // mov edx, dword ptr [ebp + 0x138]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_00433b8f:  // mov dword ptr [ebx + 0x138], edx
    M32((uint32_t)(ebx + 0x138u)) = (uint32_t)(edx);
L_00433b95:  // mov eax, dword ptr [ebp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x13cu)));
L_00433b9b:  // mov dword ptr [ebx + 0x13c], eax
    M32((uint32_t)(ebx + 0x13cu)) = (uint32_t)(eax);
L_00433ba1:  // mov ecx, dword ptr [ebp + 0x1a0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x1a0u)));
L_00433ba7:  // mov dword ptr [ebx + 0x1a0], ecx
    M32((uint32_t)(ebx + 0x1a0u)) = (uint32_t)(ecx);
L_00433bad:  // mov eax, dword ptr [ebp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x3cu)));
L_00433bb0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433bb2:  // mov dword ptr [ebp + 0x44], eax
    M32((uint32_t)(ebp + 0x44u)) = (uint32_t)(eax);
L_00433bb5:  // je 0x433bbb
    if (f.zf) goto L_00433bbb;
L_00433bb7:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_00433bb9:  // jmp 0x433bbd
    goto L_00433bbd;
L_00433bbb:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00433bbd:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00433bbf:  // je 0x433c02
    if (f.zf) goto L_00433c02;
L_00433bc1:  // push 0x7d9
    t0 = 0x7d9u; esp -= 4; M32(esp) = t0;
L_00433bc6:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433bcb:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00433bcd:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_00433bcf:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433bd4:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433bd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433bd9:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00433bdb:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00433bdd:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00433be0:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_00433be3:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00433be6:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_00433be9:  // mov eax, dword ptr [ebp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x44u)));
L_00433bec:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00433bef:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433bf1:  // mov dword ptr [ebp + 0x44], eax
    M32((uint32_t)(ebp + 0x44u)) = (uint32_t)(eax);
L_00433bf4:  // je 0x433bfa
    if (f.zf) goto L_00433bfa;
L_00433bf6:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00433bf8:  // jmp 0x433bfc
    goto L_00433bfc;
L_00433bfa:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433bfc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433bfe:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00433c00:  // jne 0x433bc1
    if (!f.zf) goto L_00433bc1;
L_00433c02:  // mov eax, dword ptr [ebp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4cu)));
L_00433c05:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433c07:  // mov dword ptr [ebp + 0x54], eax
    M32((uint32_t)(ebp + 0x54u)) = (uint32_t)(eax);
L_00433c0a:  // je 0x433c10
    if (f.zf) goto L_00433c10;
L_00433c0c:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00433c0e:  // jmp 0x433c12
    goto L_00433c12;
L_00433c10:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433c12:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433c14:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00433c16:  // je 0x433c59
    if (f.zf) goto L_00433c59;
L_00433c18:  // push 0x7e4
    t0 = 0x7e4u; esp -= 4; M32(esp) = t0;
L_00433c1d:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433c22:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00433c24:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_00433c26:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433c2b:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433c30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433c30:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00433c32:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00433c34:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00433c37:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00433c3a:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00433c3d:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00433c40:  // mov edx, dword ptr [ebp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x54u)));
L_00433c43:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00433c46:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433c48:  // mov dword ptr [ebp + 0x54], eax
    M32((uint32_t)(ebp + 0x54u)) = (uint32_t)(eax);
L_00433c4b:  // je 0x433c51
    if (f.zf) goto L_00433c51;
L_00433c4d:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00433c4f:  // jmp 0x433c53
    goto L_00433c53;
L_00433c51:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433c53:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433c55:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00433c57:  // jne 0x433c18
    if (!f.zf) goto L_00433c18;
L_00433c59:  // mov eax, dword ptr [ebp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x5cu)));
L_00433c5c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433c5e:  // mov dword ptr [ebp + 0x64], eax
    M32((uint32_t)(ebp + 0x64u)) = (uint32_t)(eax);
L_00433c61:  // je 0x433c67
    if (f.zf) goto L_00433c67;
L_00433c63:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00433c65:  // jmp 0x433c69
    goto L_00433c69;
L_00433c67:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433c69:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433c6b:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00433c6d:  // je 0x433cb5
    if (f.zf) goto L_00433cb5;
L_00433c6f:  // lea edi, [ebx + 0x5c]
    edi = (uint32_t)((uint32_t)(ebx + 0x5cu));
L_00433c72:  // push 0x7ef
    t0 = 0x7efu; esp -= 4; M32(esp) = t0;
L_00433c77:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_00433c7c:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00433c7e:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00433c80:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00433c85:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433c8au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433c8a:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00433c8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00433c8e:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_00433c91:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00433c93:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00433c95:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00433c97:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00433c9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00433c9c:  // mov eax, dword ptr [ebp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_00433c9f:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00433ca2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433ca4:  // mov dword ptr [ebp + 0x64], eax
    M32((uint32_t)(ebp + 0x64u)) = (uint32_t)(eax);
L_00433ca7:  // je 0x433cad
    if (f.zf) goto L_00433cad;
L_00433ca9:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00433cab:  // jmp 0x433caf
    goto L_00433caf;
L_00433cad:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00433caf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00433cb1:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00433cb3:  // jne 0x433c72
    if (!f.zf) goto L_00433c72;
L_00433cb5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00433cb6:  // lea eax, [ebx + 0x164]
    eax = (uint32_t)((uint32_t)(ebx + 0x164u));
L_00433cbc:  // sub ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
    ebp = (uint32_t)(t0);
L_00433cbe:  // mov ecx, 7
    ecx = (uint32_t)(0x7u);
L_00433cc3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00433cc4:  // mov edx, dword ptr [eax + ebp]
    edx = (uint32_t)(M32((uint32_t)(eax + ebp)));
L_00433cc7:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00433cc9:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00433ccc:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00433ccd:  // jne 0x433cc4
    if (!f.zf) goto L_00433cc4;
L_00433ccf:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00433cd0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00433cd1:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00433390, 00433390)
