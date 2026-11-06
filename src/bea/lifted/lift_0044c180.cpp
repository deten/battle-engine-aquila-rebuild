// lifted from 0044c180 (vslot38, 54 bytes, 14 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0044c180(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0044c180;
L_0044c180:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0044c184:  // mov eax, dword ptr [ecx + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_0044c18a:  // or edx, 0x1000000
    t0 = llog<32>(edx | 0x1000000u, f);
    edx = (uint32_t)(t0);
L_0044c190:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044c192:  // je 0x44c1aa
    if (f.zf) goto L_0044c1aa;
L_0044c194:  // fld dword ptr [eax + 0x38]
    lpush(x, (long double)F32((uint32_t)(eax + 0x38u)));
L_0044c197:  // fcomp dword ptr [0x5d8cc0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cc0u)));
    lpop(x);
L_0044c19d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044c19f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044c1a2:  // jne 0x44c1aa
    if (!f.zf) goto L_0044c1aa;
L_0044c1a4:  // or edx, 0x200000
    t0 = llog<32>(edx | 0x200000u, f);
    edx = (uint32_t)(t0);
L_0044c1aa:  // or edx, 0x80000001
    t0 = llog<32>(edx | 0x80000001u, f);
    edx = (uint32_t)(t0);
L_0044c1b0:  // mov dword ptr [ecx + 0x34], edx
    M32((uint32_t)(ecx + 0x34u)) = (uint32_t)(edx);
L_0044c1b3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0044c180, 0044c180)
