// lifted from 00410c50 (FUN_00410c50, 2171 bytes, 635 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00410c50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00410c50;
L_00410c50:  // sub esp, 0x94
    t0 = lsub<32>(esp, 0x94u, f);
    esp = (uint32_t)(t0);
L_00410c56:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00410c57:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00410c59:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00410c5a:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00410c5c:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410c5f:  // mov eax, dword ptr [eax + 0x574]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x574u)));
L_00410c65:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00410c67:  // je 0x410c6c
    if (f.zf) goto L_00410c6c;
L_00410c69:  // inc dword ptr [eax + 0x40]
    t0 = linc<32>(M32((uint32_t)(eax + 0x40u)), f);
    M32((uint32_t)(eax + 0x40u)) = (uint32_t)(t0);
L_00410c6c:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00410c6e:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00410c70:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_00410c73:  // je 0x410c79
    if (f.zf) goto L_00410c79;
L_00410c75:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00410c77:  // jmp 0x410c7b
    goto L_00410c7b;
L_00410c79:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00410c7b:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_00410c7d:  // je 0x410c9f
    if (f.zf) goto L_00410c9f;
L_00410c7f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00410c81:  // call 0x5078f0
    t0 = 0x005078f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00410c86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00410c86:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00410c89:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00410c8c:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00410c8e:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_00410c91:  // je 0x410c97
    if (f.zf) goto L_00410c97;
L_00410c93:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00410c95:  // jmp 0x410c99
    goto L_00410c99;
L_00410c97:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00410c99:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00410c9b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00410c9d:  // jne 0x410c7f
    if (!f.zf) goto L_00410c7f;
L_00410c9f:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410ca2:  // cmp dword ptr [ecx + 0x160], ebp
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x160u)), ebp, f);
L_00410ca8:  // jne 0x410cfa
    if (!f.zf) goto L_00410cfa;
L_00410caa:  // fld dword ptr [ecx + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xfcu)));
L_00410cb0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00410cb6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410cb8:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00410cbb:  // jne 0x410cfa
    if (!f.zf) goto L_00410cfa;
L_00410cbd:  // mov eax, dword ptr [ecx + 0x4b0]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4b0u)));
L_00410cc3:  // fld dword ptr [eax + 0xc]
    lpush(x, (long double)F32((uint32_t)(eax + 0xcu)));
L_00410cc6:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00410cc9:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00410ccb:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_00410cce:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00410cd0:  // fsubr dword ptr [ecx + 0xfc]
    ST(0) = ((long double)F32((uint32_t)(ecx + 0xfcu))) - (ST(0));
L_00410cd6:  // fstp dword ptr [ecx + 0xfc]
    F32((uint32_t)(ecx + 0xfcu)) = lf32(ST(0));
    lpop(x);
L_00410cdc:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410cdf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410ce1:  // fld dword ptr [ecx + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xfcu)));
L_00410ce7:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00410ced:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410cef:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00410cf2:  // je 0x410cfa
    if (f.zf) goto L_00410cfa;
L_00410cf4:  // mov dword ptr [ecx + 0xfc], ebp
    M32((uint32_t)(ecx + 0xfcu)) = (uint32_t)(ebp);
L_00410cfa:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410cfd:  // fld dword ptr [ecx + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xfcu)));
L_00410d03:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00410d09:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410d0b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00410d0e:  // jne 0x410d34
    if (!f.zf) goto L_00410d34;
L_00410d10:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_00410d13:  // fcomp dword ptr [0x5d8bc4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bc4u)));
    lpop(x);
L_00410d19:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410d1b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00410d1e:  // jne 0x410d28
    if (!f.zf) goto L_00410d28;
L_00410d20:  // mov dword ptr [ecx + 0x630], ebp
    M32((uint32_t)(ecx + 0x630u)) = (uint32_t)(ebp);
L_00410d26:  // jmp 0x410d3e
    goto L_00410d3e;
L_00410d28:  // mov dword ptr [ecx + 0x630], 1
    M32((uint32_t)(ecx + 0x630u)) = (uint32_t)(0x1u);
L_00410d32:  // jmp 0x410d3e
    goto L_00410d3e;
L_00410d34:  // mov dword ptr [ecx + 0x630], 2
    M32((uint32_t)(ecx + 0x630u)) = (uint32_t)(0x2u);
L_00410d3e:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410d41:  // fld dword ptr [ecx + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xfcu)));
L_00410d47:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00410d4d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410d4f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00410d52:  // jne 0x4110a2
    if (!f.zf) goto L_004110a2;
L_00410d58:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00410d5a:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00410d60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00410d60:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00410d62:  // jne 0x4110a2
    if (!f.zf) goto L_004110a2;
L_00410d68:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410d6b:  // fld dword ptr [ecx + 0x520]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x520u)));
L_00410d71:  // fadd dword ptr [0x5d8bf4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bf4u)));
L_00410d77:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00410d7d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410d7f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00410d82:  // je 0x410e00
    if (f.zf) goto L_00410e00;
L_00410d84:  // fld dword ptr [ecx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x84u)));
L_00410d8a:  // fld dword ptr [ecx + 0x80]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x80u)));
L_00410d90:  // fld dword ptr [ecx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x7cu)));
L_00410d93:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00410d95:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410d97:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00410d99:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00410d9b:  // mov eax, dword ptr [ecx + 0x304]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x304u)));
L_00410da1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00410da3:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00410da5:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00410da7:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00410da9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00410dab:  // fcomp dword ptr [0x5d8cac]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cacu)));
    lpop(x);
L_00410db1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410db3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410db5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410db7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410db9:  // jne 0x410ddb
    if (!f.zf) goto L_00410ddb;
L_00410dbb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00410dbe:  // je 0x410e06
    if (f.zf) goto L_00410e06;
L_00410dc0:  // mov dword ptr [ecx + 0x304], 1
    M32((uint32_t)(ecx + 0x304u)) = (uint32_t)(0x1u);
L_00410dca:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410dcd:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00410dd3:  // mov dword ptr [eax + 0x308], ecx
    M32((uint32_t)(eax + 0x308u)) = (uint32_t)(ecx);
L_00410dd9:  // jmp 0x410e06
    goto L_00410e06;
L_00410ddb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00410dde:  // je 0x410e00
    if (f.zf) goto L_00410e00;
L_00410de0:  // fld dword ptr [ecx + 0x308]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x308u)));
L_00410de6:  // fadd dword ptr [0x5d8bf4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bf4u)));
L_00410dec:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00410df2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410df4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00410df7:  // je 0x410e06
    if (f.zf) goto L_00410e06;
L_00410df9:  // call 0x40a580
    t0 = 0x0040a580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00410dfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00410dfe:  // jmp 0x410e06
    goto L_00410e06;
L_00410e00:  // mov dword ptr [ecx + 0x304], ebp
    M32((uint32_t)(ecx + 0x304u)) = (uint32_t)(ebp);
L_00410e06:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00410e08:  // call 0x411630
    t0 = 0x00411630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00410e0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00410e0d:  // cmp dword ptr [ebx + 0x2c], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x2cu)), ebp, f);
L_00410e10:  // jne 0x410eab
    if (!f.zf) goto L_00410eab;
L_00410e16:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_00410e19:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00410e1f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410e21:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00410e24:  // je 0x410eab
    if (f.zf) goto L_00410eab;
L_00410e2a:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410e2d:  // mov eax, dword ptr [ecx + 0x4b0]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4b0u)));
L_00410e33:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00410e35:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00410e38:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00410e3a:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00410e3c:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_00410e40:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00410e41:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_00410e44:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00410e46:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00410e4a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410e4c:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00410e4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00410e4f:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00410e52:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00410e55:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00410e57:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00410e59:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410e5b:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00410e5d:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00410e5f:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410e62:  // lea eax, [esp + 0x5c]
    eax = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00410e66:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00410e68:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00410e6a:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00410e6c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00410e6d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00410e6f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00410e71:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00410e73:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410e75:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410e77:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_00410e7b:  // fmul dword ptr [0x5d8ca8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8ca8u)));
L_00410e81:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00410e85:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00410e89:  // fmul dword ptr [ecx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x60u)));
L_00410e8c:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00410e90:  // fmul dword ptr [ecx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x50u)));
L_00410e93:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00410e97:  // fmul dword ptr [ecx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x40u)));
L_00410e9a:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_00410e9e:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00410ea2:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_00410ea6:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00410ea8:  // call dword ptr [edx + 0x74]
    t0 = M32((uint32_t)(edx + 0x74u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00410eabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00410eab:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_00410eae:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00410eb4:  // mov dword ptr [ebx + 0x20], 0x3f000000
    M32((uint32_t)(ebx + 0x20u)) = (uint32_t)(0x3f000000u);
L_00410ebb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410ebd:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00410ec0:  // je 0x41109a
    if (f.zf) goto L_0041109a;
L_00410ec6:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410ec9:  // lea eax, [esp + 0x4c]
    eax = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00410ecd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00410ece:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00410ed0:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00410ed3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00410ed3:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00410ed7:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00410edb:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00410edf:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00410ee3:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00410ee5:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00410ee7:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00410eea:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00410eec:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00410eee:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00410ef0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00410ef2:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00410ef4:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00410ef6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00410ef8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00410efa:  // fmul dword ptr [ecx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x40u)));
L_00410efd:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00410f01:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00410f03:  // fmul dword ptr [ecx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x50u)));
L_00410f06:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00410f0a:  // fmul dword ptr [ecx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x60u)));
L_00410f0d:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00410f11:  // fld dword ptr [ecx + 0x520]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x520u)));
L_00410f17:  // fadd dword ptr [0x5d8bf4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bf4u)));
L_00410f1d:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00410f23:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410f25:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00410f28:  // jne 0x410fc1
    if (!f.zf) goto L_00410fc1;
L_00410f2e:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00410f34:  // fsub dword ptr [ecx + 0x520]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x520u)));
L_00410f3a:  // fmul dword ptr [0x5d8ca4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8ca4u)));
L_00410f40:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00410f44:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410f46:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00410f4a:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00410f4e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410f50:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00410f54:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00410f58:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410f5a:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00410f5e:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00410f64:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00410f66:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00410f6a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00410f6e:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00410f72:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410f74:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00410f78:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_00410f7c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00410f80:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00410f84:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_00410f88:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00410f8c:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00410f90:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00410f94:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00410f98:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00410f9c:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_00410fa0:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00410fa4:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_00410fa8:  // fadd dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00410fac:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_00410fb0:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00410fb4:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00410fb8:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00410fbc:  // jmp 0x411066
    goto L_00411066;
L_00410fc1:  // fld dword ptr [ebx + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x50u)));
L_00410fc4:  // fadd dword ptr [0x5d85bc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85bcu)));
L_00410fca:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00410fd0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00410fd2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00410fd5:  // jne 0x411066
    if (!f.zf) goto L_00411066;
L_00410fdb:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00410fe1:  // fsub dword ptr [ebx + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x50u)));
L_00410fe4:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_00410fea:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00410fee:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410ff0:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00410ff4:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00410ff8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00410ffa:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00410ffe:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00411002:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00411004:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00411008:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0041100e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411010:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00411014:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00411018:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0041101c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041101e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00411022:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_00411026:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0041102a:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_0041102e:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_00411032:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00411036:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0041103a:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0041103e:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00411042:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00411046:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_0041104a:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0041104e:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_00411052:  // fadd dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00411056:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0041105a:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_0041105e:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00411062:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_00411066:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00411068:  // call 0x411aa0
    t0 = 0x00411aa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041106du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041106d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0041106f:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00411073:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00411076:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0041107a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041107b:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0041107f:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00411083:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00411085:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00411089:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0041108d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041108f:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00411093:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00411095:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00411097:  // call dword ptr [eax + 0x70]
    t0 = M32((uint32_t)(eax + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041109au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041109a:  // mov dword ptr [ebx + 0x14], ebp
    M32((uint32_t)(ebx + 0x14u)) = (uint32_t)(ebp);
L_0041109d:  // jmp 0x41114e
    goto L_0041114e;
L_004110a2:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004110a5:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004110a9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004110aa:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004110ac:  // call dword ptr [eax + 0x6c]
    t0 = M32((uint32_t)(eax + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004110afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004110af:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004110b2:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_004110b8:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004110bb:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_004110c1:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004110c3:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_004110c9:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004110cc:  // lea edx, [esp + 0x4c]
    edx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004110d0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004110d1:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004110d5:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004110d9:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004110dd:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004110df:  // call dword ptr [eax + 0x70]
    t0 = M32((uint32_t)(eax + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004110e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004110e2:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004110e6:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004110ea:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004110ec:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_004110ee:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004110f2:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004110f6:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004110f9:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004110fd:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_004110ff:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00411100:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411102:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00411104:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_00411106:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00411108:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0041110a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0041110c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041110e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411110:  // fmul dword ptr [ecx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x40u)));
L_00411113:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00411117:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411119:  // fmul dword ptr [ecx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x50u)));
L_0041111c:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00411120:  // fmul dword ptr [ecx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x60u)));
L_00411123:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00411127:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_0041112d:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00411131:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00411135:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_0041113b:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0041113f:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_00411145:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00411149:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0041114b:  // call dword ptr [eax + 0x74]
    t0 = M32((uint32_t)(eax + 0x74u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041114eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041114e:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00411151:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00411153:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411159u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411159:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041115b:  // je 0x4111b4
    if (f.zf) goto L_004111b4;
L_0041115d:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00411160:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_00411164:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00411165:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00411167:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041116au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041116a:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0041116d:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00411170:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00411172:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411174:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00411176:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00411178:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0041117a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0041117c:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0041117e:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00411180:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00411182:  // fcomp dword ptr [0x5d8c60]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c60u)));
    lpop(x);
L_00411188:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041118a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041118c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041118e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00411191:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00411193:  // je 0x4111b4
    if (f.zf) goto L_004111b4;
L_00411195:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_00411198:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0041119e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004111a0:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004111a3:  // je 0x4111b4
    if (f.zf) goto L_004111b4;
L_004111a5:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004111ab:  // fadd dword ptr [0x5d8bf4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bf4u)));
L_004111b1:  // fstp dword ptr [ebx + 0x14]
    F32((uint32_t)(ebx + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004111b4:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004111b7:  // fld dword ptr [ecx + 0x520]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x520u)));
L_004111bd:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004111c3:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004111c9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004111cb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004111ce:  // je 0x41122d
    if (f.zf) goto L_0041122d;
L_004111d0:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004111d6:  // fcomp dword ptr [ebx + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x14u)));
    lpop(x);
L_004111d9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004111db:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004111de:  // jne 0x4111f0
    if (!f.zf) goto L_004111f0;
L_004111e0:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_004111e3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004111e9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004111eb:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004111ee:  // je 0x411225
    if (f.zf) goto L_00411225;
L_004111f0:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004111f2:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004111f6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004111f7:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004111fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004111fa:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004111fd:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00411200:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00411202:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411204:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00411206:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00411208:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0041120a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0041120c:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0041120e:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00411210:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00411212:  // fcomp dword ptr [0x5d8ca0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ca0u)));
    lpop(x);
L_00411218:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041121a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041121c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041121e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00411221:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00411223:  // je 0x41122d
    if (f.zf) goto L_0041122d;
L_00411225:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00411228:  // call 0x40a580
    t0 = 0x0040a580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041122du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041122d:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_00411230:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00411236:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00411238:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0041123b:  // jne 0x411429
    if (!f.zf) goto L_00411429;
L_00411241:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_00411244:  // fcomp dword ptr [0x5d85cc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ccu)));
    lpop(x);
L_0041124a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041124c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0041124f:  // je 0x411291
    if (f.zf) goto L_00411291;
L_00411251:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00411254:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00411258:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00411259:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041125b:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041125eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041125e:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00411261:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_00411267:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0041126a:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_00411270:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00411272:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_00411278:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_0041127b:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0041127f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00411280:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00411284:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00411288:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0041128c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041128e:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411291u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411291:  // mov eax, dword ptr [ebx + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4cu)));
L_00411294:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00411297:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_0041129a:  // fld dword ptr [eax + 0x27c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x27cu)));
L_004112a0:  // jne 0x4112aa
    if (!f.zf) goto L_004112aa;
L_004112a2:  // fadd dword ptr [0x5d8578]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8578u)));
L_004112a8:  // jmp 0x4112b0
    goto L_004112b0;
L_004112aa:  // fsub dword ptr [0x5d8578]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8578u)));
L_004112b0:  // fstp dword ptr [eax + 0x27c]
    F32((uint32_t)(eax + 0x27cu)) = lf32(ST(0));
    lpop(x);
L_004112b6:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_004112b9:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_004112bf:  // fst dword ptr [ebx + 0x48]
    F32((uint32_t)(ebx + 0x48u)) = lf32(ST(0));
L_004112c2:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004112c8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004112ca:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004112cd:  // je 0x411429
    if (f.zf) goto L_00411429;
L_004112d3:  // cmp dword ptr [ebx + 0x34], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x34u)), ebp, f);
L_004112d6:  // je 0x411426
    if (f.zf) goto L_00411426;
L_004112dc:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004112df:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004112e0:  // add ecx, 0x3c
    t0 = ladd<32>(ecx, 0x3cu, f);
    ecx = (uint32_t)(t0);
L_004112e3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004112e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004112e5:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004112e9:  // call 0x44adb0
    t0 = 0x0044adb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004112eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004112ee:  // mov edx, dword ptr [ebx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004112f1:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004112f3:  // add edx, 0x114
    t0 = ladd<32>(edx, 0x114u, f);
    edx = (uint32_t)(t0);
L_004112f9:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_004112fb:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004112fe:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00411301:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00411304:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00411307:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_0041130a:  // fld dword ptr [eax + 0x4c4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4c4u)));
L_00411310:  // fcos 
    ST(0) = lfcos(ST(0));
L_00411312:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411314:  // fmul dword ptr [eax + 0x4c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4c0u)));
L_0041131a:  // fadd dword ptr [eax + 0x11c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x11cu)));
L_00411320:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00411324:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411326:  // fmul dword ptr [eax + 0x4bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4bcu)));
L_0041132c:  // fadd dword ptr [eax + 0x118]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x118u)));
L_00411332:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00411336:  // fmul dword ptr [eax + 0x4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4b8u)));
L_0041133c:  // fadd dword ptr [eax + 0x114]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x114u)));
L_00411342:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411344:  // fcos 
    ST(0) = lfcos(ST(0));
L_00411346:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0041134a:  // fsin 
    ST(0) = lfsin(ST(0));
L_0041134c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00411350:  // fcos 
    ST(0) = lfcos(ST(0));
L_00411352:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00411356:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0041135a:  // fsin 
    ST(0) = lfsin(ST(0));
L_0041135c:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00411360:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00411364:  // fcos 
    ST(0) = lfcos(ST(0));
L_00411366:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0041136a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0041136e:  // fsin 
    ST(0) = lfsin(ST(0));
L_00411370:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411372:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00411376:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0041137a:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0041137e:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00411380:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00411382:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00411384:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_00411388:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0041138c:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0041138e:  // fchs 
    ST(0) = -ST(0);
L_00411390:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_00411394:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00411396:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_0041139a:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_0041139e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004113a0:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004113a4:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004113a8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004113aa:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004113ae:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004113b2:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004113b6:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004113b8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004113ba:  // lea edi, [eax + 0x3c]
    edi = (uint32_t)((uint32_t)(eax + 0x3cu));
L_004113bd:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004113c2:  // lea esi, [esp + 0x74]
    esi = (uint32_t)((uint32_t)(esp + 0x74u));
L_004113c6:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004113cd:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004113d1:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004113d5:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004113dc:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004113e0:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004113e2:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004113e6:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004113ea:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004113ec:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_004113f3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004113f7:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004113fb:  // fchs 
    ST(0) = -ST(0);
L_004113fd:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_00411404:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_0041140b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041140d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00411411:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_00411415:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_0041141c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041141e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041141f:  // mov dword ptr [ebx + 0x34], ebp
    M32((uint32_t)(ebx + 0x34u)) = (uint32_t)(ebp);
L_00411422:  // mov dword ptr [ebx + 0x2c], ebp
    M32((uint32_t)(ebx + 0x2cu)) = (uint32_t)(ebp);
L_00411425:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00411426:  // mov dword ptr [ebx + 0x4c], ebp
    M32((uint32_t)(ebx + 0x4cu)) = (uint32_t)(ebp);
L_00411429:  // cmp dword ptr [ebx + 0x2c], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x2cu)), ebp, f);
L_0041142c:  // je 0x4114aa
    if (f.zf) goto L_004114aa;
L_0041142e:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_00411431:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00411437:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00411439:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041143c:  // je 0x4114aa
    if (f.zf) goto L_004114aa;
L_0041143e:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00411441:  // fld dword ptr [eax + 0x280]
    lpush(x, (long double)F32((uint32_t)(eax + 0x280u)));
L_00411447:  // fsub dword ptr [0x5d8c2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c2cu)));
L_0041144d:  // fstp dword ptr [eax + 0x280]
    F32((uint32_t)(eax + 0x280u)) = lf32(ST(0));
    lpop(x);
L_00411453:  // mov eax, dword ptr [ebx + 0x30]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_00411456:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00411459:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0041145b:  // fld dword ptr [ecx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x118u)));
L_00411461:  // je 0x411488
    if (f.zf) goto L_00411488;
L_00411463:  // fcomp dword ptr [0x5d8c40]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c40u)));
    lpop(x);
L_00411469:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041146b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0041146e:  // je 0x4114aa
    if (f.zf) goto L_004114aa;
L_00411470:  // fld dword ptr [ecx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x118u)));
L_00411476:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0041147c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041147e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00411481:  // jne 0x4114aa
    if (!f.zf) goto L_004114aa;
L_00411483:  // mov dword ptr [ebx + 0x2c], ebp
    M32((uint32_t)(ebx + 0x2cu)) = (uint32_t)(ebp);
L_00411486:  // jmp 0x4114aa
    goto L_004114aa;
L_00411488:  // fcomp dword ptr [0x5d8c9c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c9cu)));
    lpop(x);
L_0041148e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00411490:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00411493:  // je 0x4114aa
    if (f.zf) goto L_004114aa;
L_00411495:  // mov eax, dword ptr [ebx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x34u)));
L_00411498:  // mov dword ptr [ebx + 0x30], 1
    M32((uint32_t)(ebx + 0x30u)) = (uint32_t)(0x1u);
L_0041149f:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004114a1:  // je 0x4114aa
    if (f.zf) goto L_004114aa;
L_004114a3:  // mov dword ptr [ebx + 0x48], 0x41500000
    M32((uint32_t)(ebx + 0x48u)) = (uint32_t)(0x41500000u);
L_004114aa:  // mov edx, dword ptr [ebx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004114ad:  // mov dword ptr [edx + 0x100], ebp
    M32((uint32_t)(edx + 0x100u)) = (uint32_t)(ebp);
L_004114b3:  // mov ecx, dword ptr [ebx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_004114b6:  // call 0x40ef20
    t0 = 0x0040ef20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004114bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004114bb:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004114bd:  // call 0x411500
    t0 = 0x00411500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004114c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004114c2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004114c3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004114c4:  // add esp, 0x94
    t0 = ladd<32>(esp, 0x94u, f);
    esp = (uint32_t)(t0);
L_004114ca:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00410c50, 00410c50)
