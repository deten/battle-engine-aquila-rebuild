// lifted from 004ef050 (FUN_004ef050, 26 bytes, 7 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ef050(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ef050;
L_004ef050:  // mov eax, dword ptr [ecx + 0x250]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x250u)));
L_004ef056:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ef058:  // je 0x4ef05f
    if (f.zf) goto L_004ef05f;
L_004ef05a:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004ef05d:  // jne 0x4ef069
    if (!f.zf) goto L_004ef069;
L_004ef05f:  // mov dword ptr [ecx + 0x250], 3
    M32((uint32_t)(ecx + 0x250u)) = (uint32_t)(0x3u);
L_004ef069:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004ef050, 004ef050)
