// lifted from 004e2360 (FUN_004e2360, 410 bytes, 152 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e2360(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e2360;
L_004e2360:  // sub esp, 0x100
    t0 = lsub<32>(esp, 0x100u, f);
    esp = (uint32_t)(t0);
L_004e2366:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e2367:  // mov ebx, dword ptr [ecx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004e236a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e236b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e236c:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e236e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e236f:  // je 0x4e2384
    if (f.zf) goto L_004e2384;
L_004e2371:  // mov eax, dword ptr [esp + 0x114]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x114u)));
L_004e2378:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e237a:  // jle 0x4e23a6
    if ((f.zf || f.sf != f.of)) goto L_004e23a6;
L_004e237c:  // mov ebx, dword ptr [ebx + 0x74]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x74u)));
L_004e237f:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004e2380:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e2382:  // jne 0x4e2378
    if (!f.zf) goto L_004e2378;
L_004e2384:  // mov eax, dword ptr [esp + 0x118]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x118u)));
L_004e238b:  // push 0x63261c
    t0 = 0x63261cu; esp -= 4; M32(esp) = t0;
L_004e2390:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e2391:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2396u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2396:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e2399:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e239a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e239b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e239c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e239d:  // add esp, 0x100
    t0 = ladd<32>(esp, 0x100u, f);
    esp = (uint32_t)(t0);
L_004e23a3:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004e23a6:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e23a8:  // je 0x4e2384
    if (f.zf) goto L_004e2384;
L_004e23aa:  // mov al, byte ptr [ebx + 8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x8u))) & 0xffu);
L_004e23ad:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004e23af:  // je 0x4e2384
    if (f.zf) goto L_004e2384;
L_004e23b1:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004e23b4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e23b6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e23b7:  // jl 0x4e23c7
    if ((f.sf != f.of)) goto L_004e23c7;
L_004e23b9:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004e23bc:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004e23bf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e23c0:  // push 0x63260c
    t0 = 0x63260cu; esp -= 4; M32(esp) = t0;
L_004e23c5:  // jmp 0x4e23d3
    goto L_004e23d3;
L_004e23c7:  // mov ecx, dword ptr [ebx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004e23ca:  // add ecx, 8
    t0 = ladd<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004e23cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e23ce:  // push 0x6325f4
    t0 = 0x6325f4u; esp -= 4; M32(esp) = t0;
L_004e23d3:  // mov ebp, dword ptr [esp + 0x124]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_004e23da:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e23db:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e23e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e23e0:  // mov edx, dword ptr [ebx + 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x68u)));
L_004e23e3:  // mov eax, dword ptr [ebx + 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004e23e6:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e23e9:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e23ed:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e23ee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e23ef:  // push 0x6325e0
    t0 = 0x6325e0u; esp -= 4; M32(esp) = t0;
L_004e23f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e23f5:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e23fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e23fa:  // lea edi, [esp + 0x20]
    edi = (uint32_t)((uint32_t)(esp + 0x20u));
L_004e23fe:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e2401:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2403:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e2406:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2408:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e240a:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004e240c:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004e240e:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004e2410:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004e2412:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e2415:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e2417:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004e2419:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004e241a:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004e241d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e241f:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004e2421:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004e2424:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004e2426:  // mov eax, dword ptr [ebx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_004e2429:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e242b:  // jne 0x4e2439
    if (!f.zf) goto L_004e2439;
L_004e242d:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e2431:  // push 0x6325d0
    t0 = 0x6325d0u; esp -= 4; M32(esp) = t0;
L_004e2436:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e2437:  // jmp 0x4e2487
    goto L_004e2487;
L_004e2439:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004e243c:  // jne 0x4e2460
    if (!f.zf) goto L_004e2460;
L_004e243e:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e2440:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e2442:  // je 0x4e2459
    if (f.zf) goto L_004e2459;
L_004e2444:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004e2446:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e2448:  // call dword ptr [eax + 0xa4]
    t0 = M32((uint32_t)(eax + 0xa4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e244eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e244e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e244f:  // push 0x6325bc
    t0 = 0x6325bcu; esp -= 4; M32(esp) = t0;
L_004e2454:  // jmp 0x4e24e4
    goto L_004e24e4;
L_004e2459:  // push 0x63259c
    t0 = 0x63259cu; esp -= 4; M32(esp) = t0;
L_004e245e:  // jmp 0x4e2482
    goto L_004e2482;
L_004e2460:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_004e2463:  // jne 0x4e24c5
    if (!f.zf) goto L_004e24c5;
L_004e2465:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e2467:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e2469:  // je 0x4e247d
    if (f.zf) goto L_004e247d;
L_004e246b:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004e246d:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e246f:  // call dword ptr [eax + 0xa4]
    t0 = M32((uint32_t)(eax + 0xa4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e2475u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e2475:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e2476:  // push 0x632578
    t0 = 0x632578u; esp -= 4; M32(esp) = t0;
L_004e247b:  // jmp 0x4e24e4
    goto L_004e24e4;
L_004e247d:  // push 0x63254c
    t0 = 0x63254cu; esp -= 4; M32(esp) = t0;
L_004e2482:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004e2486:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e2487:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e248cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e248c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e248f:  // lea edi, [esp + 0x10]
    edi = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e2493:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e2496:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e2498:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e249a:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004e249c:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004e249e:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004e24a0:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004e24a2:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004e24a4:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004e24a7:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004e24a9:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004e24ab:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004e24ac:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004e24af:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e24b1:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004e24b3:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004e24b6:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004e24b8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e24b9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e24ba:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e24bb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e24bc:  // add esp, 0x100
    t0 = ladd<32>(esp, 0x100u, f);
    esp = (uint32_t)(t0);
L_004e24c2:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004e24c5:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004e24c8:  // jne 0x4e2399
    if (!f.zf) goto L_004e2399;
L_004e24ce:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e24d0:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e24d2:  // je 0x4e24f3
    if (f.zf) goto L_004e24f3;
L_004e24d4:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004e24d6:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e24d8:  // call dword ptr [eax + 0xa4]
    t0 = M32((uint32_t)(eax + 0xa4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e24deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e24de:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e24df:  // push 0x63252c
    t0 = 0x63252cu; esp -= 4; M32(esp) = t0;
L_004e24e4:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e24e8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e24e9:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e24eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e24ee:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004e24f1:  // jmp 0x4e248f
    goto L_004e248f;
L_004e24f3:  // push 0x632504
    t0 = 0x632504u; esp -= 4; M32(esp) = t0;
L_004e24f8:  // jmp 0x4e2482
    goto L_004e2482;
}

LIFT_FUNCTION_NF(0x004e2360, 004e2360)
