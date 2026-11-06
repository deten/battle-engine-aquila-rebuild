// lifted from 00459a60 (vslot7, 56 bytes, 12 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00459a60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00459a60;
L_00459a60:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_00459a64:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_00459a67:  // je 0x459a6e
    if (f.zf) goto L_00459a6e;
L_00459a69:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_00459a6c:  // jne 0x459a8b
    if (!f.zf) goto L_00459a8b;
L_00459a6e:  // mov eax, dword ptr [ecx + 0x3468]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x3468u)));
L_00459a74:  // mov edx, dword ptr [ecx + 0x346c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x346cu)));
L_00459a7a:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00459a7d:  // lea eax, [edx + eax*2]
    eax = (uint32_t)((uint32_t)(edx + eax * 2u));
L_00459a80:  // mov dword ptr [ecx + eax*4 + 0x57c], 0x3f800000
    M32((uint32_t)(ecx + eax * 4u + 0x57cu)) = (uint32_t)(0x3f800000u);
L_00459a8b:  // mov dword ptr [ecx + 0x347c], 0
    M32((uint32_t)(ecx + 0x347cu)) = (uint32_t)(0x0u);
L_00459a95:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00459a60, 00459a60)
