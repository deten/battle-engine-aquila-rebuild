// lifted from 004ccfe0 (vslot4, 65 bytes, 19 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ccfe0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ccfe0;
L_004ccfe0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004ccfe4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ccfe5:  // mov esi, dword ptr [ecx + 0x74]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x74u)));
L_004ccfe8:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004ccfea:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004ccfec:  // jne 0x4ccff1
    if (!f.zf) goto L_004ccff1;
L_004ccfee:  // mov dword ptr [ecx + 0x74], edx
    M32((uint32_t)(ecx + 0x74u)) = (uint32_t)(edx);
L_004ccff1:  // cmp dword ptr [ecx + 0x94], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x94u)), eax, f);
L_004ccff7:  // jne 0x4ccfff
    if (!f.zf) goto L_004ccfff;
L_004ccff9:  // mov dword ptr [ecx + 0x94], edx
    M32((uint32_t)(ecx + 0x94u)) = (uint32_t)(edx);
L_004ccfff:  // cmp dword ptr [ecx + 0xb0], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xb0u)), eax, f);
L_004cd005:  // jne 0x4cd00d
    if (!f.zf) goto L_004cd00d;
L_004cd007:  // mov dword ptr [ecx + 0xb0], edx
    M32((uint32_t)(ecx + 0xb0u)) = (uint32_t)(edx);
L_004cd00d:  // mov esi, dword ptr [ecx + 0xb8]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xb8u)));
L_004cd013:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd015:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd016:  // jne 0x4cd01e
    if (!f.zf) goto L_004cd01e;
L_004cd018:  // mov dword ptr [ecx + 0xb8], edx
    M32((uint32_t)(ecx + 0xb8u)) = (uint32_t)(edx);
L_004cd01e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004ccfe0, 004ccfe0)
