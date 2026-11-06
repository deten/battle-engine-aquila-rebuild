// lifted from 00442960 (vslot3, 55 bytes, 16 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00442960(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00442960;
L_00442960:  // mov eax, dword ptr [ecx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00442963:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00442965:  // je 0x442994
    if (f.zf) goto L_00442994;
L_00442967:  // fld dword ptr [ecx + 0xc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xcu)));
L_0044296a:  // fsub dword ptr [esp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x4u)));
L_0044296e:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_00442972:  // fst dword ptr [ecx + 0xc]
    F32((uint32_t)(ecx + 0xcu)) = lf32(ST(0));
L_00442975:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0044297b:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00442980:  // mov dword ptr [ecx + 0x18], edx
    M32((uint32_t)(ecx + 0x18u)) = (uint32_t)(edx);
L_00442983:  // mov dword ptr [ecx + 0x14], eax
    M32((uint32_t)(ecx + 0x14u)) = (uint32_t)(eax);
L_00442986:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00442988:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0044298b:  // je 0x442994
    if (f.zf) goto L_00442994;
L_0044298d:  // mov dword ptr [ecx + 0xc], 0
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(0x0u);
L_00442994:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00442960, 00442960)
