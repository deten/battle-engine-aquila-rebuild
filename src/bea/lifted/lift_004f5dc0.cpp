// lifted from 004f5dc0 (FUN_004f5dc0, 125 bytes, 37 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f5dc0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f5dc0;
L_004f5dc0:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004f5dc4:  // sub esp, 0x190
    t0 = lsub<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_004f5dca:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004f5dcd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f5dcf:  // je 0x4f5e09
    if (f.zf) goto L_004f5e09;
L_004f5dd1:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004f5dd3:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004f5dd6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f5dd7:  // mov eax, dword ptr [esp + 0x198]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004f5dde:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f5de1:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004f5de4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f5de5:  // call 0x4f52b0
    t0 = 0x004f52b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5deau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5dea:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f5ded:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004f5df1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f5df2:  // push 0x633a5c
    t0 = 0x633a5cu; esp -= 4; M32(esp) = t0;
L_004f5df7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f5df8:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5dfdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5dfd:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004f5e00:  // add esp, 0x190
    t0 = ladd<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_004f5e06:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f5e09:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004f5e0b:  // mov edx, dword ptr [esp + 0x194]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004f5e12:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f5e15:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004f5e18:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f5e19:  // call 0x4f52b0
    t0 = 0x004f52b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5e1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5e1e:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f5e21:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f5e22:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_004f5e26:  // push 0x633a4c
    t0 = 0x633a4cu; esp -= 4; M32(esp) = t0;
L_004f5e2b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f5e2c:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5e31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5e31:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004f5e34:  // add esp, 0x190
    t0 = ladd<32>(esp, 0x190u, f);
    esp = (uint32_t)(t0);
L_004f5e3a:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f5dc0, 004f5dc0)
