// lifted from 00419ec0 (vslot0, 316 bytes, 107 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00419ec0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00419ec0;
L_00419ec0:  // sub esp, 0x54
    t0 = lsub<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_00419ec3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00419ec4:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00419ec6:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_00419ec9:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00419ecf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00419ed1:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00419ed4:  // je 0x419efc
    if (f.zf) goto L_00419efc;
L_00419ed6:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00419eda:  // add esi, 0x2c
    t0 = ladd<32>(esi, 0x2cu, f);
    esi = (uint32_t)(t0);
L_00419edd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00419edf:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00419ee1:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00419ee3:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00419ee6:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00419ee9:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00419eec:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00419eef:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00419ef2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00419ef3:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_00419ef6:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_00419ef9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00419efc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00419efd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00419efe:  // lea edi, [esi + 0x2c]
    edi = (uint32_t)((uint32_t)(esi + 0x2cu));
L_00419f01:  // lea eax, [esi + 0xa0]
    eax = (uint32_t)((uint32_t)(esi + 0xa0u));
L_00419f07:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00419f09:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00419f0b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00419f0d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00419f0f:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00419f11:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00419f14:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00419f17:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00419f1a:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_00419f1d:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00419f20:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_00419f23:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00419f27:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00419f2d:  // fsub dword ptr [esi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x24u)));
L_00419f30:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_00419f33:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00419f37:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00419f3b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00419f3c:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00419f41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00419f41:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_00419f44:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_00419f47:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00419f4d:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_00419f50:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00419f52:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00419f55:  // jne 0x419f68
    if (!f.zf) goto L_00419f68;
L_00419f57:  // fsub dword ptr [esi + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x18u)));
L_00419f5a:  // fdiv dword ptr [esi + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esi + 0x20u)));
L_00419f5d:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00419f63:  // fsub dword ptr [esi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x24u)));
L_00419f66:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00419f68:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00419f6a:  // fchs 
    ST(0) = -ST(0);
L_00419f6c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00419f70:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00419f72:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00419f76:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00419f78:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00419f7d:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00419f81:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00419f83:  // mov dword ptr [esi + 0x28], eax
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(eax);
L_00419f86:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00419f8a:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00419f8e:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00419f92:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00419f94:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00419f98:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00419f9a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00419f9c:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00419fa0:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00419fa4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00419fa6:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00419faa:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00419fac:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00419fae:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00419fb0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00419fb2:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00419fb6:  // fadd dword ptr [esi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4u)));
L_00419fb9:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00419fbd:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00419fc1:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_00419fc4:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00419fc8:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00419fcc:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00419fd0:  // fadd dword ptr [esi + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0xcu)));
L_00419fd3:  // mov dword ptr [edi], ecx
    M32((uint32_t)(edi)) = (uint32_t)(ecx);
L_00419fd5:  // mov dword ptr [edi + 4], edx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(edx);
L_00419fd8:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00419fdc:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00419fe0:  // mov dword ptr [edi + 8], esi
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(esi);
L_00419fe3:  // mov dword ptr [edi + 0xc], ebx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ebx);
L_00419fe6:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00419fe8:  // mov dword ptr [edi], ecx
    M32((uint32_t)(edi)) = (uint32_t)(ecx);
L_00419fea:  // mov dword ptr [edi + 4], edx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(edx);
L_00419fed:  // mov dword ptr [edi + 8], esi
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(esi);
L_00419ff0:  // mov dword ptr [edi + 0xc], ebx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ebx);
L_00419ff3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00419ff4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00419ff5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00419ff6:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_00419ff9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00419ec0, 00419ec0)
