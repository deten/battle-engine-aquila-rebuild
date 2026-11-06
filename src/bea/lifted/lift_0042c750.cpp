// lifted from 0042c750 (FUN_0042c750, 179 bytes, 70 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042c750(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042c750;
L_0042c750:  // sub esp, 0x190
    t0 = lsub<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_0042c756:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042c757:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042c758:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042c759:  // push 0xcc
    t0 = 0xccu; esp -= 4; M32(esp) = t0;
L_0042c75e:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042c763u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042c763:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042c764:  // call 0x4f7d30
    t0 = 0x004f7d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042c769u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042c769:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0042c76b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042c76e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042c770:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042c774:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042c776:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042c778:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042c77a:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0042c77c:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042c77e:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042c780:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042c782:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0042c786:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042c789:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042c78b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042c78d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042c78f:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042c792:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042c794:  // mov edi, 0x624624
    edi = (uint32_t)(0x624624u);
L_0042c799:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042c79c:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042c79e:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042c7a0:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042c7a2:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042c7a4:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0042c7a6:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042c7a8:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042c7ab:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042c7ad:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042c7af:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0042c7b0:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042c7b3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042c7b5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042c7b7:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0042c7bb:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042c7be:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042c7c0:  // mov edi, dword ptr [esp + 0x1ac]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1acu)));
L_0042c7c7:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042c7ca:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042c7cc:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042c7ce:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042c7d0:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042c7d2:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0042c7d4:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042c7d6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042c7d9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042c7db:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042c7dd:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0042c7de:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042c7e1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042c7e3:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042c7e5:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0042c7e9:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042c7ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042c7ed:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042c7ef:  // call 0x42cfa0
    t0 = 0x0042cfa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042c7f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042c7f4:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042c7f7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042c7f8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042c7f9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042c7fa:  // add esp, 0x190
    t0 = ladd<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_0042c800:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0042c750, 0042c750)
