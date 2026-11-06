// lifted from 00459e50 (vslot4, 142 bytes, 38 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00459e50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00459e50;
L_00459e50:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00459e54:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_00459e5a:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00459e5d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00459e5f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00459e62:  // jne 0x459ed8
    if (!f.zf) goto L_00459ed8;
L_00459e64:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00459e68:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00459e6e:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_00459e74:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00459e7a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00459e7c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00459e7f:  // je 0x459e8b
    if (f.zf) goto L_00459e8b;
L_00459e81:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00459e83:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00459e89:  // jmp 0x459ea0
    goto L_00459ea0;
L_00459e8b:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00459e91:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00459e93:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00459e96:  // jne 0x459ea0
    if (!f.zf) goto L_00459ea0;
L_00459e98:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00459e9a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00459ea0:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00459ea6:  // push 0xcb18967f
    t0 = 0xcb18967fu; esp -= 4; M32(esp) = t0;
L_00459eab:  // push 0xcb18967f
    t0 = 0xcb18967fu; esp -= 4; M32(esp) = t0;
L_00459eb0:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00459eb4:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00459eb8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00459eba:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00459ebd:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00459ebf:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00459ec2:  // or ecx, 0xffffff
    t0 = llog<32>(ecx | 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00459ec8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459ec9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00459ece:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00459ed3:  // call 0x452ce0
    t0 = 0x00452ce0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459ed8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459ed8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00459edb:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00459e50, 00459e50)
