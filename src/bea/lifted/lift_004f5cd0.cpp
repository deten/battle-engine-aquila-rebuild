// lifted from 004f5cd0 (FUN_004f5cd0, 54 bytes, 15 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f5cd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f5cd0;
L_004f5cd0:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004f5cd4:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004f5cd8:  // sub esp, 0x190
    t0 = lsub<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_004f5cde:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f5ce1:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004f5ce4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f5ce5:  // call 0x4f52b0
    t0 = 0x004f52b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5ceau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5cea:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f5ced:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_004f5cf1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f5cf2:  // push 0x633a30
    t0 = 0x633a30u; esp -= 4; M32(esp) = t0;
L_004f5cf7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f5cf8:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5cfdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5cfd:  // add esp, 0x1a4
    t0 = ladd<32>(esp, 0x1a4u, f);
    esp = (uint32_t)(t0);
L_004f5d03:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f5cd0, 004f5cd0)
