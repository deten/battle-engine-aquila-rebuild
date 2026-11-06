// lifted from 00479f30 (FUN_00479f30, 381 bytes, 116 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00479f30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00479f30;
L_00479f30:  // sub esp, 0x44
    t0 = lsub<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_00479f33:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00479f34:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00479f36:  // cmp dword ptr [esi + 0x274], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x274u)), 0x1u, f);
L_00479f3d:  // jne 0x479f4a
    if (!f.zf) goto L_00479f4a;
L_00479f3f:  // fld dword ptr [0x5d8df4]
    lpush(x, (long double)F32((uint32_t)(0x5d8df4u)));
L_00479f45:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00479f46:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_00479f49:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00479f4a:  // cmp dword ptr [esi + 0x244], 2
    t0 = lsub<32>(M32((uint32_t)(esi + 0x244u)), 0x2u, f);
L_00479f51:  // jne 0x479f5e
    if (!f.zf) goto L_00479f5e;
L_00479f53:  // fld dword ptr [0x5d9440]
    lpush(x, (long double)F32((uint32_t)(0x5d9440u)));
L_00479f59:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00479f5a:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_00479f5d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00479f5e:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_00479f64:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_00479f6a:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_00479f6d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00479f6f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00479f71:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00479f73:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00479f75:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00479f77:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00479f79:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00479f7b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00479f7d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00479f83:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00479f85:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00479f87:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00479f89:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00479f8c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00479f8e:  // jne 0x47a0a2
    if (!f.zf) goto L_0047a0a2;
L_00479f94:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00479f96:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00479f98:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479f9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479f9b:  // fmul dword ptr [0x5dbce4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbce4u)));
L_00479fa1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00479fa3:  // fmul dword ptr [esi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x40u)));
L_00479fa6:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00479fa8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00479faa:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00479fae:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00479fb0:  // fmul dword ptr [esi + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x50u)));
L_00479fb3:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00479fb7:  // fmul dword ptr [esi + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x60u)));
L_00479fba:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00479fbe:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_00479fc1:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00479fc5:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00479fc9:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_00479fcc:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00479fd0:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_00479fd3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00479fd7:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00479fdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00479fda:  // fchs 
    ST(0) = -ST(0);
L_00479fdc:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00479fde:  // fmul dword ptr [esi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x40u)));
L_00479fe1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479fe2:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00479fe6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00479fe8:  // fmul dword ptr [esi + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x50u)));
L_00479feb:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00479fef:  // fmul dword ptr [esi + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x60u)));
L_00479ff2:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_00479ff5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00479ff8:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00479ffc:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_00479fff:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047a000:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047a003:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0047a007:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_0047a00a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047a00b:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0047a00f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047a012:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a017u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a017:  // lea edx, [esp + 8]
    edx = (uint32_t)((uint32_t)(esp + 0x8u));
L_0047a01b:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0047a020:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a025u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a025:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047a029:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0047a02d:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0047a032:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a037u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a037:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047a03b:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_0047a03f:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047a043:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0047a047:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0047a04b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0047a04f:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0047a053:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0047a057:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047a05b:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_0047a05f:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0047a063:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a068u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a068:  // fst dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
L_0047a06c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047a072:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047a074:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047a077:  // jne 0x47a091
    if (!f.zf) goto L_0047a091;
L_0047a079:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0047a07d:  // fdiv dword ptr [esp + 4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4u)));
L_0047a081:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a086u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a086:  // fmul dword ptr [0x5db4c8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4c8u)));
L_0047a08c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047a08d:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0047a090:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0047a091:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0047a097:  // fmul dword ptr [0x5db4c8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4c8u)));
L_0047a09d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047a09e:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0047a0a1:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0047a0a2:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0047a0a8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047a0a9:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0047a0ac:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00479f30, 00479f30)
