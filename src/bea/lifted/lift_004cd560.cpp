// lifted from 004cd560 (vslot4, 193 bytes, 49 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cd560(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cd560;
L_004cd560:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004cd564:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd565:  // mov esi, dword ptr [ecx + 0x6c]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x6cu)));
L_004cd568:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cd56a:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd56c:  // jne 0x4cd571
    if (!f.zf) goto L_004cd571;
L_004cd56e:  // mov dword ptr [ecx + 0x6c], edx
    M32((uint32_t)(ecx + 0x6cu)) = (uint32_t)(edx);
L_004cd571:  // cmp dword ptr [ecx + 0x70], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x70u)), eax, f);
L_004cd574:  // jne 0x4cd579
    if (!f.zf) goto L_004cd579;
L_004cd576:  // mov dword ptr [ecx + 0x70], edx
    M32((uint32_t)(ecx + 0x70u)) = (uint32_t)(edx);
L_004cd579:  // cmp dword ptr [ecx + 0x78], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x78u)), eax, f);
L_004cd57c:  // jne 0x4cd581
    if (!f.zf) goto L_004cd581;
L_004cd57e:  // mov dword ptr [ecx + 0x78], edx
    M32((uint32_t)(ecx + 0x78u)) = (uint32_t)(edx);
L_004cd581:  // cmp dword ptr [ecx + 0x80], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x80u)), eax, f);
L_004cd587:  // jne 0x4cd58f
    if (!f.zf) goto L_004cd58f;
L_004cd589:  // mov dword ptr [ecx + 0x80], edx
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(edx);
L_004cd58f:  // cmp dword ptr [ecx + 0x88], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x88u)), eax, f);
L_004cd595:  // jne 0x4cd59d
    if (!f.zf) goto L_004cd59d;
L_004cd597:  // mov dword ptr [ecx + 0x88], edx
    M32((uint32_t)(ecx + 0x88u)) = (uint32_t)(edx);
L_004cd59d:  // cmp dword ptr [ecx + 0x90], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x90u)), eax, f);
L_004cd5a3:  // jne 0x4cd5ab
    if (!f.zf) goto L_004cd5ab;
L_004cd5a5:  // mov dword ptr [ecx + 0x90], edx
    M32((uint32_t)(ecx + 0x90u)) = (uint32_t)(edx);
L_004cd5ab:  // cmp dword ptr [ecx + 0xa0], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xa0u)), eax, f);
L_004cd5b1:  // jne 0x4cd5b9
    if (!f.zf) goto L_004cd5b9;
L_004cd5b3:  // mov dword ptr [ecx + 0xa0], edx
    M32((uint32_t)(ecx + 0xa0u)) = (uint32_t)(edx);
L_004cd5b9:  // cmp dword ptr [ecx + 0xa8], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xa8u)), eax, f);
L_004cd5bf:  // jne 0x4cd5c7
    if (!f.zf) goto L_004cd5c7;
L_004cd5c1:  // mov dword ptr [ecx + 0xa8], edx
    M32((uint32_t)(ecx + 0xa8u)) = (uint32_t)(edx);
L_004cd5c7:  // cmp dword ptr [ecx + 0xb0], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xb0u)), eax, f);
L_004cd5cd:  // jne 0x4cd5d5
    if (!f.zf) goto L_004cd5d5;
L_004cd5cf:  // mov dword ptr [ecx + 0xb0], edx
    M32((uint32_t)(ecx + 0xb0u)) = (uint32_t)(edx);
L_004cd5d5:  // cmp dword ptr [ecx + 0xc0], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xc0u)), eax, f);
L_004cd5db:  // jne 0x4cd5e3
    if (!f.zf) goto L_004cd5e3;
L_004cd5dd:  // mov dword ptr [ecx + 0xc0], edx
    M32((uint32_t)(ecx + 0xc0u)) = (uint32_t)(edx);
L_004cd5e3:  // cmp dword ptr [ecx + 0xc8], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xc8u)), eax, f);
L_004cd5e9:  // jne 0x4cd5f1
    if (!f.zf) goto L_004cd5f1;
L_004cd5eb:  // mov dword ptr [ecx + 0xc8], edx
    M32((uint32_t)(ecx + 0xc8u)) = (uint32_t)(edx);
L_004cd5f1:  // cmp dword ptr [ecx + 0xd0], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xd0u)), eax, f);
L_004cd5f7:  // jne 0x4cd5ff
    if (!f.zf) goto L_004cd5ff;
L_004cd5f9:  // mov dword ptr [ecx + 0xd0], edx
    M32((uint32_t)(ecx + 0xd0u)) = (uint32_t)(edx);
L_004cd5ff:  // cmp dword ptr [ecx + 0xd8], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xd8u)), eax, f);
L_004cd605:  // jne 0x4cd60d
    if (!f.zf) goto L_004cd60d;
L_004cd607:  // mov dword ptr [ecx + 0xd8], edx
    M32((uint32_t)(ecx + 0xd8u)) = (uint32_t)(edx);
L_004cd60d:  // mov esi, dword ptr [ecx + 0xe0]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xe0u)));
L_004cd613:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd615:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd616:  // jne 0x4cd61e
    if (!f.zf) goto L_004cd61e;
L_004cd618:  // mov dword ptr [ecx + 0xe0], edx
    M32((uint32_t)(ecx + 0xe0u)) = (uint32_t)(edx);
L_004cd61e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cd560, 004cd560)
