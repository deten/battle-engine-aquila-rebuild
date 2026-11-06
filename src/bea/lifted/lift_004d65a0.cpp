// lifted from 004d65a0 (FUN_004d65a0, 82 bytes, 26 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d65a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d65a0;
L_004d65a0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d65a1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d65a2:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d65a6:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d65a8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d65a9:  // call 0x44a830
    t0 = 0x0044a830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d65aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d65ae:  // mov eax, dword ptr [edi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004d65b1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d65b3:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_004d65b6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d65b8:  // fld dword ptr [edi + 0x10]
    lpush(x, (long double)F32((uint32_t)(edi + 0x10u)));
L_004d65bb:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004d65bf:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004d65c1:  // fst dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
L_004d65c4:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004d65ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d65cb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d65cc:  // push 0xfa0
    t0 = 0xfa0u; esp -= 4; M32(esp) = t0;
L_004d65d1:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d65d6:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d65da:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d65dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d65df:  // mov dword ptr [esi + 0x2c], 0
    M32((uint32_t)(esi + 0x2cu)) = (uint32_t)(0x0u);
L_004d65e6:  // mov dword ptr [esi + 0x30], 0xbf800000
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(0xbf800000u);
L_004d65ed:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d65ee:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d65ef:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d65a0, 004d65a0)
