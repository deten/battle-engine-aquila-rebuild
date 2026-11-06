// lifted from 004f4e40 (vslot3, 885 bytes, 275 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f4e40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f4e40;
L_004f4e40:  // sub esp, 0x48
    t0 = lsub<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004f4e43:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f4e44:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f4e46:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f4e49:  // test byte ptr [ecx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x2cu)) & 0x4u, f);
L_004f4e4d:  // jne 0x4f51a8
    if (!f.zf) goto L_004f51a8;
L_004f4e53:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004f4e5b:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f4e5f:  // add ecx, 0x14c
    t0 = ladd<32>(ecx, 0x14cu, f);
    ecx = (uint32_t)(t0);
L_004f4e65:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_004f4e6d:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f4e71:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_004f4e79:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_004f4e7b:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004f4e7f:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004f4e82:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004f4e86:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004f4e89:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004f4e8c:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f4e8f:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004f4e92:  // mov ecx, dword ptr [eax + 0x114]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x114u)));
L_004f4e98:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_004f4e9b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f4e9c:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_004f4ea0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f4ea3:  // fld dword ptr [esi + 0xc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xcu)));
L_004f4ea6:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_004f4ea9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f4eaa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f4ead:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004f4eb0:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_004f4eb3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f4eb4:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004f4eb8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f4ebb:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f4ec0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f4ec0:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004f4ec3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f4ec5:  // je 0x4f51b0
    if (f.zf) goto L_004f51b0;
L_004f4ecb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004f4ecf:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004f4ed3:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004f4ed7:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f4edb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f4edd:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_004f4ee3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f4ee5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f4ee8:  // jne 0x4f51b0
    if (!f.zf) goto L_004f51b0;
L_004f4eee:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f4ef1:  // call 0x4fde10
    t0 = 0x004fde10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f4ef6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f4ef6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f4ef8:  // jne 0x4f51b0
    if (!f.zf) goto L_004f51b0;
L_004f4efe:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004f4f01:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f4f02:  // je 0x4f4f36
    if (f.zf) goto L_004f4f36;
L_004f4f04:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f4f05:  // je 0x4f4f22
    if (f.zf) goto L_004f4f22;
L_004f4f07:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f4f08:  // je 0x4f4f36
    if (f.zf) goto L_004f4f36;
L_004f4f0a:  // push 0x623a14
    t0 = 0x623a14u; esp -= 4; M32(esp) = t0;
L_004f4f0f:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004f4f14:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f4f19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f4f19:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004f4f1d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f4f20:  // jmp 0x4f4f42
    goto L_004f4f42;
L_004f4f22:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004f4f26:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004f4f2a:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004f4f2c:  // fchs 
    ST(0) = -ST(0);
L_004f4f2e:  // fsub dword ptr [0x5d85e8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e8u)));
L_004f4f34:  // jmp 0x4f4f42
    goto L_004f4f42;
L_004f4f36:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004f4f3a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004f4f3e:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004f4f40:  // fchs 
    ST(0) = -ST(0);
L_004f4f42:  // mov edx, dword ptr [esi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f4f45:  // fst dword ptr [edx + 0x120]
    F32((uint32_t)(edx + 0x120u)) = lf32(ST(0));
L_004f4f4b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004f4f4f:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f4f53:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004f4f57:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004f4f5b:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004f4f5d:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004f4f61:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004f4f65:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004f4f69:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f4f6b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f4f6d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004f4f6f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004f4f71:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f4f73:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_004f4f75:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004f4f77:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004f4f79:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004f4f7b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f4f7d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f4f7f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004f4f85:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f4f87:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004f4f8a:  // jne 0x4f4fb0
    if (!f.zf) goto L_004f4fb0;
L_004f4f8c:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004f4f92:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f4f94:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f4f98:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004f4f9c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004f4fa0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f4fa2:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004f4fa6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004f4faa:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f4fac:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f4fb0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f4fb2:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004f4fb6:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_004f4fbc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f4fbe:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f4fc1:  // je 0x4f4fd1
    if (f.zf) goto L_004f4fd1;
L_004f4fc3:  // mov dword ptr [esi + 0x1c], 0
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(0x0u);
L_004f4fca:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f4fcb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f4fcd:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004f4fd0:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f4fd1:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004f4fd5:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004f4fd7:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004f4fdd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f4fdf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f4fe2:  // je 0x4f5003
    if (f.zf) goto L_004f5003;
L_004f4fe4:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004f4fe8:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004f4fee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f4ff0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f4ff3:  // jne 0x4f5003
    if (!f.zf) goto L_004f5003;
L_004f4ff5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f4ff7:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004f4ffb:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004f5001:  // jmp 0x4f502f
    goto L_004f502f;
L_004f5003:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004f5005:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004f500b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f500d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f5010:  // jne 0x4f502f
    if (!f.zf) goto L_004f502f;
L_004f5012:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004f5016:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004f501c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f501e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f5021:  // je 0x4f502f
    if (f.zf) goto L_004f502f;
L_004f5023:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f5025:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004f5029:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004f502f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004f5031:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004f5033:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004f5035:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004f5037:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f5039:  // fcomp dword ptr [0x5d8604]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8604u)));
    lpop(x);
L_004f503f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f5041:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f5044:  // jne 0x4f505b
    if (!f.zf) goto L_004f505b;
L_004f5046:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004f504a:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_004f5050:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f5052:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f5055:  // jne 0x4f51b0
    if (!f.zf) goto L_004f51b0;
L_004f505b:  // cmp dword ptr [esi + 0x1c], 3
    t0 = lsub<32>(M32((uint32_t)(esi + 0x1cu)), 0x3u, f);
L_004f505f:  // je 0x4f51b0
    if (f.zf) goto L_004f51b0;
L_004f5065:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f5068:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f506a:  // call dword ptr [eax + 0x1bc]
    t0 = M32((uint32_t)(eax + 0x1bcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5070u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5070:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f5073:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f5074:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_004f507a:  // add eax, 0x3c
    t0 = ladd<32>(eax, 0x3cu, f);
    eax = (uint32_t)(t0);
L_004f507d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f507f:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_004f5082:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f5085:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f5086:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f5088:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_004f508b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f508e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f508f:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004f5093:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f5096:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f5099:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f509eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f509e:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f50a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f50a2:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004f50a6:  // fadd dword ptr [eax + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x24u)));
L_004f50a9:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004f50ac:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f50af:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004f50b3:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f50b6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f50b7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f50ba:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004f50be:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004f50c0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f50c1:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004f50c5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f50c8:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f50cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f50cd:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004f50d1:  // fsub dword ptr [esi + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x28u)));
L_004f50d4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f50d5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f50d8:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004f50dc:  // fsub dword ptr [esi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x24u)));
L_004f50df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f50e0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f50e3:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004f50e7:  // fsub dword ptr [esi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x20u)));
L_004f50ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f50eb:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004f50ef:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f50f2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f50f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f50f7:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004f50fb:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004f50ff:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004f5103:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004f5107:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f510a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f510b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f510d:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004f5111:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004f5115:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004f5118:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f511a:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004f511c:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004f5120:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004f5123:  // fsub dword ptr [esi + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x28u)));
L_004f5126:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f5129:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004f512c:  // fsub dword ptr [esi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x24u)));
L_004f512f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f5130:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f5133:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004f5135:  // fsub dword ptr [esi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x20u)));
L_004f5138:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f5139:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f513c:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004f5140:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f5145u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f5145:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004f5149:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004f514d:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004f5151:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004f5155:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f5157:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004f515b:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004f515f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f5161:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004f5163:  // fcomp dword ptr [esp + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x8u)));
    lpop(x);
L_004f5167:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f5169:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f516c:  // je 0x4f517f
    if (f.zf) goto L_004f517f;
L_004f516e:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004f5172:  // fcomp dword ptr [0x5dc648]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dc648u)));
    lpop(x);
L_004f5178:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f517a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f517d:  // je 0x4f51b0
    if (f.zf) goto L_004f51b0;
L_004f517f:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004f5182:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f5186:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f518a:  // add ecx, 0x14c
    t0 = ladd<32>(ecx, 0x14cu, f);
    ecx = (uint32_t)(t0);
L_004f5190:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f5191:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f5193:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f5197:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004f519a:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004f519e:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f51a1:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f51a4:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004f51a7:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f51a8:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f51aa:  // call dword ptr [edx + 0x100]
    t0 = M32((uint32_t)(edx + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f51b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f51b0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f51b1:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004f51b4:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f4e40, 004f4e40)
