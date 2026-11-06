// lifted from 00415d90 (vslot3, 546 bytes, 161 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00415d90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00415d90;
L_00415d90:  // sub esp, 0x1c
    t0 = lsub<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00415d93:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00415d94:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00415d96:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00415d99:  // test byte ptr [eax + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(eax + 0x2cu)) & 0x4u, f);
L_00415d9d:  // jne 0x415fad
    if (!f.zf) goto L_00415fad;
L_00415da3:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00415dab:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00415daf:  // add eax, 0x14c
    t0 = ladd<32>(eax, 0x14cu, f);
    eax = (uint32_t)(t0);
L_00415db4:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00415dbc:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00415dc0:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00415dc8:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00415dca:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00415dce:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00415dd1:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00415dd5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00415dd8:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00415ddb:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00415dde:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00415de1:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_00415de4:  // mov ecx, dword ptr [eax + 0x114]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x114u)));
L_00415dea:  // mov dword ptr [esp + 4], ecx
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(ecx);
L_00415dee:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_00415df1:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00415df5:  // fld dword ptr [esi + 0xc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xcu)));
L_00415df8:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_00415dfb:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00415dfd:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00415e01:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_00415e04:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_00415e07:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00415e0b:  // je 0x415fad
    if (f.zf) goto L_00415fad;
L_00415e11:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00415e15:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00415e19:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00415e1d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00415e21:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00415e25:  // fadd dword ptr [esp + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xcu)));
L_00415e29:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_00415e2d:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_00415e33:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415e35:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00415e38:  // jne 0x415fad
    if (!f.zf) goto L_00415fad;
L_00415e3e:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00415e3f:  // je 0x415e73
    if (f.zf) goto L_00415e73;
L_00415e41:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00415e42:  // je 0x415e5f
    if (f.zf) goto L_00415e5f;
L_00415e44:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00415e45:  // je 0x415e73
    if (f.zf) goto L_00415e73;
L_00415e47:  // push 0x623a14
    t0 = 0x623a14u; esp -= 4; M32(esp) = t0;
L_00415e4c:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00415e51:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415e56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415e56:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00415e5a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00415e5d:  // jmp 0x415e7f
    goto L_00415e7f;
L_00415e5f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00415e63:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00415e67:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00415e69:  // fchs 
    ST(0) = -ST(0);
L_00415e6b:  // fsub dword ptr [0x5d85e8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e8u)));
L_00415e71:  // jmp 0x415e7f
    goto L_00415e7f;
L_00415e73:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00415e77:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00415e7b:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00415e7d:  // fchs 
    ST(0) = -ST(0);
L_00415e7f:  // mov edx, dword ptr [esi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00415e82:  // fst dword ptr [edx + 0x120]
    F32((uint32_t)(edx + 0x120u)) = lf32(ST(0));
L_00415e88:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00415e8c:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_00415e90:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00415e94:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00415e98:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00415e9a:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_00415e9c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00415e9e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00415ea0:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_00415ea2:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00415ea4:  // fadd dword ptr [esp + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xcu)));
L_00415ea8:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00415eaa:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00415eac:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00415eae:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00415eb2:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_00415eb8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415eba:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00415ebd:  // je 0x415ecd
    if (f.zf) goto L_00415ecd;
L_00415ebf:  // mov dword ptr [esi + 0x1c], 0
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(0x0u);
L_00415ec6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00415ec7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00415ec9:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00415ecc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00415ecd:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00415ed1:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00415ed3:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00415ed9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415edb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00415ede:  // je 0x415eff
    if (f.zf) goto L_00415eff;
L_00415ee0:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00415ee4:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00415eea:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415eec:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00415eef:  // jne 0x415eff
    if (!f.zf) goto L_00415eff;
L_00415ef1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00415ef3:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00415ef7:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00415efd:  // jmp 0x415f2b
    goto L_00415f2b;
L_00415eff:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00415f01:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00415f07:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415f09:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00415f0c:  // jne 0x415f2b
    if (!f.zf) goto L_00415f2b;
L_00415f0e:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00415f12:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00415f18:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415f1a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00415f1d:  // je 0x415f2b
    if (f.zf) goto L_00415f2b;
L_00415f1f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00415f21:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00415f25:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00415f2b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00415f2d:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00415f2f:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00415f31:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00415f33:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00415f35:  // fcomp dword ptr [0x5d8604]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8604u)));
    lpop(x);
L_00415f3b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415f3d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00415f40:  // jne 0x415f53
    if (!f.zf) goto L_00415f53;
L_00415f42:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00415f46:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_00415f4c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00415f4e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00415f51:  // jne 0x415fad
    if (!f.zf) goto L_00415fad;
L_00415f53:  // cmp dword ptr [esi + 0x1c], 3
    t0 = lsub<32>(M32((uint32_t)(esi + 0x1cu)), 0x3u, f);
L_00415f57:  // je 0x415fad
    if (f.zf) goto L_00415fad;
L_00415f59:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00415f5c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00415f5e:  // call dword ptr [eax + 0x1bc]
    t0 = M32((uint32_t)(eax + 0x1bcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415f64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415f64:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_00415f6a:  // mov esi, dword ptr [esi + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00415f6d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00415f6f:  // fmul dword ptr [esi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x40u)));
L_00415f72:  // add esi, 0x14c
    t0 = ladd<32>(esi, 0x14cu, f);
    esi = (uint32_t)(t0);
L_00415f78:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00415f7c:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00415f80:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00415f82:  // fmul dword ptr [esi - 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xffffff04u)));
L_00415f88:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00415f8c:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00415f90:  // fmul dword ptr [esi - 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xffffff14u)));
L_00415f96:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_00415f98:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00415f9c:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00415fa0:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00415fa4:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_00415fa7:  // mov dword ptr [esi + 8], eax
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(eax);
L_00415faa:  // mov dword ptr [esi + 0xc], ecx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ecx);
L_00415fad:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00415fae:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00415fb1:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00415d90, 00415d90)
