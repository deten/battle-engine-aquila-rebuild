// lifted from 0042d0b0 (FUN_0042d0b0, 179 bytes, 70 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042d0b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042d0b0;
L_0042d0b0:  // sub esp, 0x190
    t0 = lsub<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_0042d0b6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042d0b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042d0b8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042d0b9:  // push 0xcc
    t0 = 0xccu; esp -= 4; M32(esp) = t0;
L_0042d0be:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d0c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d0c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042d0c4:  // call 0x4f7d30
    t0 = 0x004f7d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d0c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d0c9:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0042d0cb:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042d0ce:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042d0d0:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042d0d4:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042d0d6:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042d0d8:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042d0da:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0042d0dc:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042d0de:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042d0e0:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042d0e2:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0042d0e6:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042d0e9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042d0eb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042d0ed:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042d0ef:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042d0f2:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042d0f4:  // mov edi, 0x624624
    edi = (uint32_t)(0x624624u);
L_0042d0f9:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042d0fc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042d0fe:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042d100:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042d102:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042d104:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0042d106:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042d108:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042d10b:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042d10d:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042d10f:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0042d110:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042d113:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042d115:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042d117:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0042d11b:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042d11e:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042d120:  // mov edi, dword ptr [esp + 0x1ac]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1acu)));
L_0042d127:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042d12a:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042d12c:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042d12e:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042d130:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042d132:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0042d134:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042d136:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042d139:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042d13b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042d13d:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0042d13e:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042d141:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042d143:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042d145:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0042d149:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042d14c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042d14d:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042d14f:  // call 0x42cfa0
    t0 = 0x0042cfa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d154u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d154:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042d157:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042d158:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042d159:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042d15a:  // add esp, 0x190
    t0 = ladd<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_0042d160:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0042d0b0, 0042d0b0)
