// lifted from 004e9570 (vslot87, 136 bytes, 53 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e9570(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e9570;
L_004e9570:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e9571:  // mov ebx, dword ptr [esp + 8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004e9575:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e9576:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004e9578:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e9579:  // mov dword ptr [esi + 0x7c], ebx
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(ebx);
L_004e957c:  // mov edi, dword ptr [esi + 0xa4]
    edi = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004e9582:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004e9584:  // je 0x4e958a
    if (f.zf) goto L_004e958a;
L_004e9586:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004e9588:  // jmp 0x4e958c
    goto L_004e958c;
L_004e958a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e958c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e958e:  // je 0x4e95ad
    if (f.zf) goto L_004e95ad;
L_004e9590:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004e9592:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e9594:  // je 0x4e959c
    if (f.zf) goto L_004e959c;
L_004e9596:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e9597:  // call 0x4fd830
    t0 = 0x004fd830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e959cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e959c:  // mov edi, dword ptr [edi + 4]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004e959f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004e95a1:  // je 0x4e95a7
    if (f.zf) goto L_004e95a7;
L_004e95a3:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004e95a5:  // jmp 0x4e95a9
    goto L_004e95a9;
L_004e95a7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e95a9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e95ab:  // jne 0x4e9590
    if (!f.zf) goto L_004e9590;
L_004e95ad:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e95ae:  // mov ecx, 0x8550c0
    ecx = (uint32_t)(0x8550c0u);
L_004e95b3:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e95b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e95b8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e95b9:  // mov ecx, 0x8550b0
    ecx = (uint32_t)(0x8550b0u);
L_004e95be:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e95c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e95c3:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004e95c6:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004e95c9:  // je 0x4e95d0
    if (f.zf) goto L_004e95d0;
L_004e95cb:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004e95ce:  // jne 0x4e95db
    if (!f.zf) goto L_004e95db;
L_004e95d0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e95d1:  // mov ecx, 0x8550c0
    ecx = (uint32_t)(0x8550c0u);
L_004e95d6:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e95dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e95db:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004e95de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e95e0:  // je 0x4e95e7
    if (f.zf) goto L_004e95e7;
L_004e95e2:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004e95e5:  // jne 0x4e95f2
    if (!f.zf) goto L_004e95f2;
L_004e95e7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e95e8:  // mov ecx, 0x8550b0
    ecx = (uint32_t)(0x8550b0u);
L_004e95ed:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e95f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e95f2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e95f3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e95f4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e95f5:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004e9570, 004e9570)
