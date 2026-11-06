// lifted from 00432fa0 (vslot0, 32 bytes, 11 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00432fa0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00432fa0;
L_00432fa0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00432fa1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00432fa3:  // call 0x432fc0
    t0 = 0x00432fc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00432fa8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00432fa8:  // test byte ptr [esp + 8], 1
    t0 = llog<8>(M8((uint32_t)(esp + 0x8u)) & 0x1u, f);
L_00432fad:  // je 0x432fba
    if (f.zf) goto L_00432fba;
L_00432faf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00432fb0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00432fb5:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00432fbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00432fba:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00432fbc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00432fbd:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00432fa0, 00432fa0)
