// lifted from 00472e50 (FUN_00472e50, 181 bytes, 56 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00472e50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00472e50;
L_00472e50:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00472e53:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00472e55:  // jne 0x472e89
    if (!f.zf) goto L_00472e89;
L_00472e57:  // mov eax, dword ptr [0x89ce84]
    eax = (uint32_t)(M32((uint32_t)(0x89ce84u)));
L_00472e5c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00472e5e:  // jne 0x472e82
    if (!f.zf) goto L_00472e82;
L_00472e60:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472e62:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472e64:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00472e66:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00472e67:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00472e68:  // push 0x625498
    t0 = 0x625498u; esp -= 4; M32(esp) = t0;
L_00472e6d:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472e72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472e72:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00472e75:  // mov dword ptr [0x89ce84], eax
    M32((uint32_t)(0x89ce84u)) = (uint32_t)(eax);
L_00472e7a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00472e7c:  // je 0x472f02
    if (f.zf) goto L_00472f02;
L_00472e82:  // mov ecx, 0xff000000
    ecx = (uint32_t)(0xff000000u);
L_00472e87:  // jmp 0x472e8d
    goto L_00472e8d;
L_00472e89:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00472e8d:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00472e93:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_00472e97:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472e98:  // movsx edx, word ptr [eax + 0xb0]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0xb0u))));
L_00472e9f:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00472ea3:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00472ea9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00472eac:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00472eb2:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_00472eb6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472eb8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472eb9:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00472ebf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00472ec2:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00472ec6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472ec8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472ec9:  // fdivr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) / (ST(0));
L_00472ecd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00472ed0:  // fild dword ptr [eax + 0xac]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + 0xacu)));
L_00472ed6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472ed7:  // fdivr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) / (ST(0));
L_00472edb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00472ede:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472edf:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00472ee3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472ee5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00472eea:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472eec:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00472eee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00472eef:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00472ef3:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00472ef8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00472ef9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472efa:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472effu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472eff:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00472f02:  // ret 0x14
    c->target = M32(esp); esp += 24u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00472e50, 00472e50)
