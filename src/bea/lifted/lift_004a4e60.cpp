// lifted from 004a4e60 (vslot0, 32 bytes, 11 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a4e60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a4e60;
L_004a4e60:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a4e61:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004a4e63:  // call 0x4a4e80
    t0 = 0x004a4e80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a4e68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a4e68:  // test byte ptr [esp + 8], 1
    t0 = llog<8>(M8((uint32_t)(esp + 0x8u)) & 0x1u, f);
L_004a4e6d:  // je 0x4a4e7a
    if (f.zf) goto L_004a4e7a;
L_004a4e6f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a4e70:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004a4e75:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a4e7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a4e7a:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004a4e7c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a4e7d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004a4e60, 004a4e60)
