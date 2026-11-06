// lifted from 004eaa60 (vslot51, 113 bytes, 33 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004eaa60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004eaa60;
L_004eaa60:  // sub esp, 0x100
    t0 = lsub<32>(esp, 0x100u, f);
    esp = (uint32_t)(t0);
L_004eaa66:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004eaa67:  // mov esi, dword ptr [esp + 0x108]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_004eaa6e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004eaa6f:  // call 0x4e66d0
    t0 = 0x004e66d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eaa74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eaa74:  // lea eax, [esp + 4]
    eax = (uint32_t)((uint32_t)(esp + 0x4u));
L_004eaa78:  // push 0x63293c
    t0 = 0x63293cu; esp -= 4; M32(esp) = t0;
L_004eaa7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004eaa7e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eaa83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eaa83:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004eaa86:  // lea ecx, [esp + 4]
    ecx = (uint32_t)((uint32_t)(esp + 0x4u));
L_004eaa8a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004eaa8f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004eaa91:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004eaa93:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004eaa94:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eaa99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eaa99:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004eaa9b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004eaa9e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004eaaa3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004eaaa4:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004eaaa9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004eaaaa:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004eaaaf:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004eaab1:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eaab6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eaab6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004eaab8:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eaabdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eaabd:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004eaabf:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004eaac5:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004eaac7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004eaac8:  // add esp, 0x100
    t0 = ladd<32>(esp, 0x100u, f);
    esp = (uint32_t)(t0);
L_004eaace:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004eaa60, 004eaa60)
