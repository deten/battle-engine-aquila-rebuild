// lifted from 004812d0 (vslot0, 51 bytes, 16 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004812d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004812d0;
L_004812d0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004812d1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004812d3:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004812d7:  // cmp word ptr [ecx + 4], 0x7d0
    t0 = lsub<16>(M16((uint32_t)(ecx + 0x4u)), 0x7d0u, f);
L_004812dd:  // jne 0x4812ff
    if (!f.zf) goto L_004812ff;
L_004812df:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004812e2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004812e4:  // je 0x4812ff
    if (f.zf) goto L_004812ff;
L_004812e6:  // mov dword ptr [esi + 0xc], ecx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ecx);
L_004812e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004812ea:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004812ec:  // call 0x480c90
    t0 = 0x00480c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004812f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004812f1:  // mov dword ptr [esi + 0x10], 0
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(0x0u);
L_004812f8:  // mov dword ptr [esi + 0xc], 0
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(0x0u);
L_004812ff:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00481300:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004812d0, 004812d0)
