// lifted from 005153a0 (vslot6, 267 bytes, 97 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005153a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005153a0;
L_005153a0:  // sub esp, 0x348
    t0 = lsub<32>(esp, 0x348u, f);
    esp = (uint32_t)(t0);
L_005153a6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005153a8:  // lea edx, [esp]
    edx = (uint32_t)((uint32_t)(esp));
L_005153ac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005153ad:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005153ae:  // mov ebp, dword ptr [esp + 0x354]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x354u)));
L_005153b5:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_005153b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005153b8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005153b9:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005153bc:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_005153be:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005153c0:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005153c2:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_005153c4:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_005153c6:  // mov esi, edi
    esi = (uint32_t)(edi);
L_005153c8:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_005153cb:  // mov edi, edx
    edi = (uint32_t)(edx);
L_005153cd:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005153d1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005153d3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005153d5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005153d7:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_005153da:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_005153dc:  // mov edi, 0x63e004
    edi = (uint32_t)(0x63e004u);
L_005153e1:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005153e4:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005153e6:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005153e8:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_005153ea:  // mov esi, edi
    esi = (uint32_t)(edi);
L_005153ec:  // mov edi, edx
    edi = (uint32_t)(edx);
L_005153ee:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_005153f0:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005153f3:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005153f5:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_005153f7:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_005153f8:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_005153fb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005153fd:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_005153ff:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00515403:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00515406:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00515408:  // mov edi, dword ptr [esp + 0x360]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x360u)));
L_0051540f:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00515412:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00515414:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00515416:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00515418:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0051541a:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0051541c:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0051541e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00515421:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00515423:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00515425:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00515426:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00515429:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0051542b:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0051542d:  // lea eax, [esp + 0x114]
    eax = (uint32_t)((uint32_t)(esp + 0x114u));
L_00515434:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00515437:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00515438:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0051543a:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0051543e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051543f:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00515444u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00515444:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00515447:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00515448:  // call dword ptr [0x5d81cc]
    t0 = M32((uint32_t)(0x5d81ccu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051544eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051544e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00515450:  // cmp esi, -1
    t0 = lsub<32>(esi, 0xffffffffu, f);
L_00515453:  // je 0x515497
    if (f.zf) goto L_00515497;
L_00515455:  // mov edi, dword ptr [0x5d81d0]
    edi = (uint32_t)(M32((uint32_t)(0x5d81d0u)));
L_0051545b:  // lea edx, [esp + 0x140]
    edx = (uint32_t)((uint32_t)(esp + 0x140u));
L_00515462:  // lea eax, [esp + 0x254]
    eax = (uint32_t)((uint32_t)(esp + 0x254u));
L_00515469:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051546a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051546b:  // push 0x63dffc
    t0 = 0x63dffcu; esp -= 4; M32(esp) = t0;
L_00515470:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00515471:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00515476u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00515476:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00515479:  // lea ecx, [esp + 0x254]
    ecx = (uint32_t)((uint32_t)(esp + 0x254u));
L_00515480:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00515481:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00515483:  // call 0x4bb6b0
    t0 = 0x004bb6b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00515488u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00515488:  // lea edx, [esp + 0x114]
    edx = (uint32_t)((uint32_t)(esp + 0x114u));
L_0051548f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00515490:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00515491:  // call edi
    t0 = edi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00515493u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00515493:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00515495:  // jne 0x51545b
    if (!f.zf) goto L_0051545b;
L_00515497:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00515498:  // call dword ptr [0x5d81d4]
    t0 = M32((uint32_t)(0x5d81d4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051549eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051549e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051549f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005154a0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005154a1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005154a2:  // add esp, 0x348
    t0 = ladd<32>(esp, 0x348u, f);
    esp = (uint32_t)(t0);
L_005154a8:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005153a0, 005153a0)
