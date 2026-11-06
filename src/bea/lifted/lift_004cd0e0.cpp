// lifted from 004cd0e0 (vslot4, 47 bytes, 19 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cd0e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cd0e0;
L_004cd0e0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004cd0e4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd0e5:  // mov esi, dword ptr [ecx + 0x60]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x60u)));
L_004cd0e8:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cd0ea:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd0ec:  // jne 0x4cd0f1
    if (!f.zf) goto L_004cd0f1;
L_004cd0ee:  // mov dword ptr [ecx + 0x60], edx
    M32((uint32_t)(ecx + 0x60u)) = (uint32_t)(edx);
L_004cd0f1:  // cmp dword ptr [ecx + 0x70], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x70u)), eax, f);
L_004cd0f4:  // jne 0x4cd0f9
    if (!f.zf) goto L_004cd0f9;
L_004cd0f6:  // mov dword ptr [ecx + 0x70], edx
    M32((uint32_t)(ecx + 0x70u)) = (uint32_t)(edx);
L_004cd0f9:  // cmp dword ptr [ecx + 0x74], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x74u)), eax, f);
L_004cd0fc:  // jne 0x4cd101
    if (!f.zf) goto L_004cd101;
L_004cd0fe:  // mov dword ptr [ecx + 0x74], edx
    M32((uint32_t)(ecx + 0x74u)) = (uint32_t)(edx);
L_004cd101:  // mov esi, dword ptr [ecx + 0x78]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x78u)));
L_004cd104:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd106:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd107:  // jne 0x4cd10c
    if (!f.zf) goto L_004cd10c;
L_004cd109:  // mov dword ptr [ecx + 0x78], edx
    M32((uint32_t)(ecx + 0x78u)) = (uint32_t)(edx);
L_004cd10c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cd0e0, 004cd0e0)
