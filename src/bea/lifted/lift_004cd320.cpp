// lifted from 004cd320 (vslot4, 39 bytes, 16 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cd320(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cd320;
L_004cd320:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004cd324:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd325:  // mov esi, dword ptr [ecx + 0x5c]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x5cu)));
L_004cd328:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cd32a:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd32c:  // jne 0x4cd331
    if (!f.zf) goto L_004cd331;
L_004cd32e:  // mov dword ptr [ecx + 0x5c], edx
    M32((uint32_t)(ecx + 0x5cu)) = (uint32_t)(edx);
L_004cd331:  // cmp dword ptr [ecx + 0x60], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x60u)), eax, f);
L_004cd334:  // jne 0x4cd339
    if (!f.zf) goto L_004cd339;
L_004cd336:  // mov dword ptr [ecx + 0x60], edx
    M32((uint32_t)(ecx + 0x60u)) = (uint32_t)(edx);
L_004cd339:  // mov esi, dword ptr [ecx + 0x64]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x64u)));
L_004cd33c:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd33e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd33f:  // jne 0x4cd344
    if (!f.zf) goto L_004cd344;
L_004cd341:  // mov dword ptr [ecx + 0x64], edx
    M32((uint32_t)(ecx + 0x64u)) = (uint32_t)(edx);
L_004cd344:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cd320, 004cd320)
