// lifted from 00486e00 (FUN_00486e00, 3031 bytes, 902 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00486e00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00486e00;
L_00486e00:  // sub esp, 0xb4
    t0 = lsub<32>(esp, 0xb4u, f);
    esp = (uint32_t)(t0);
L_00486e06:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00486e07:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00486e08:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00486e0a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00486e0b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00486e0c:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00486e11:  // mov esi, dword ptr [ebp + 0x58]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00486e14:  // mov edi, 0x9c6914
    edi = (uint32_t)(0x9c6914u);
L_00486e19:  // shl esi, 6
    t0 = lshl<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_00486e1c:  // add esi, 0x89d4a0
    t0 = ladd<32>(esi, 0x89d4a0u, f);
    esi = (uint32_t)(t0);
L_00486e22:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00486e24:  // mov byte ptr [0x9c73e8], 1
    M8((uint32_t)(0x9c73e8u)) = (uint8_t)(0x1u);
L_00486e2b:  // mov esi, dword ptr [ebp + 0x58]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00486e2e:  // shl esi, 6
    t0 = lshl<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_00486e31:  // add esi, 0x89d520
    t0 = ladd<32>(esi, 0x89d520u, f);
    esi = (uint32_t)(t0);
L_00486e37:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00486e3c:  // mov edi, 0x9c6954
    edi = (uint32_t)(0x9c6954u);
L_00486e41:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00486e43:  // mov byte ptr [0x9c73e9], 1
    M8((uint32_t)(0x9c73e9u)) = (uint8_t)(0x1u);
L_00486e4a:  // mov esi, dword ptr [ebp + 0x58]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00486e4d:  // shl esi, 6
    t0 = lshl<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_00486e50:  // add esi, 0x89d5a0
    t0 = ladd<32>(esi, 0x89d5a0u, f);
    esi = (uint32_t)(t0);
L_00486e56:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00486e5b:  // mov edi, 0x9c6994
    edi = (uint32_t)(0x9c6994u);
L_00486e60:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00486e62:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00486e64:  // mov byte ptr [0x9c73ea], 1
    M8((uint32_t)(0x9c73eau)) = (uint8_t)(0x1u);
L_00486e6b:  // call 0x482090
    t0 = 0x00482090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486e70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486e70:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00486e72:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00486e74:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00486e79:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486e7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486e7e:  // fld dword ptr [0x8a9e20]
    lpush(x, (long double)F32((uint32_t)(0x8a9e20u)));
L_00486e84:  // mov eax, dword ptr [ebp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00486e87:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_00486e8d:  // lea eax, [ebp + eax*4 + 0x1b8]
    eax = (uint32_t)((uint32_t)(ebp + eax * 4u + 0x1b8u));
L_00486e94:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00486e96:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00486e98:  // mov ecx, dword ptr [ebp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00486e9b:  // fld dword ptr [ebp + ecx*4 + 0x1b8]
    lpush(x, (long double)F32((uint32_t)(ebp + ecx * 4u + 0x1b8u)));
L_00486ea2:  // fcomp dword ptr [0x5d85e0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e0u)));
    lpop(x);
L_00486ea8:  // lea ecx, [ebp + ecx*4 + 0x1b8]
    ecx = (uint32_t)((uint32_t)(ebp + ecx * 4u + 0x1b8u));
L_00486eaf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486eb1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486eb4:  // jne 0x486ec0
    if (!f.zf) goto L_00486ec0;
L_00486eb6:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_00486eb8:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00486ebe:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_00486ec0:  // mov eax, dword ptr [0x67a618]
    eax = (uint32_t)(M32((uint32_t)(0x67a618u)));
L_00486ec5:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00486ec8:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00486eca:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00486ecd:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00486ed2:  // mov esi, 0x67a5e8
    esi = (uint32_t)(0x67a5e8u);
L_00486ed7:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00486ed9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00486edb:  // mov ecx, dword ptr [0x67a61c]
    ecx = (uint32_t)(M32((uint32_t)(0x67a61cu)));
L_00486ee1:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00486ee3:  // mov eax, dword ptr [0x67a620]
    eax = (uint32_t)(M32((uint32_t)(0x67a620u)));
L_00486ee8:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00486eeb:  // mov ecx, dword ptr [0x67a624]
    ecx = (uint32_t)(M32((uint32_t)(0x67a624u)));
L_00486ef1:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00486ef4:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00486ef7:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00486efc:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486f01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486f01:  // mov edx, dword ptr [0x89ce4c]
    edx = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_00486f07:  // mov ebx, dword ptr [ebp + 0x50]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_00486f0a:  // add ebx, 0x294
    t0 = ladd<32>(ebx, 0x294u, f);
    ebx = (uint32_t)(t0);
L_00486f10:  // mov eax, dword ptr [edx*4 + 0x89c9a4]
    eax = (uint32_t)(M32((uint32_t)(edx * 4u + 0x89c9a4u)));
L_00486f17:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00486f1b:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00486f1d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486f1f:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_00486f22:  // je 0x486f28
    if (f.zf) goto L_00486f28;
L_00486f24:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00486f26:  // jmp 0x486f2a
    goto L_00486f2a;
L_00486f28:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00486f2a:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00486f2e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00486f30:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486f32:  // je 0x4871e0
    if (f.zf) goto L_004871e0;
L_00486f38:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00486f3a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00486f3c:  // je 0x4871c3
    if (f.zf) goto L_004871c3;
L_00486f42:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00486f46:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486f47:  // call 0x4fd500
    t0 = 0x004fd500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486f4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486f4c:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00486f4e:  // je 0x4871c3
    if (f.zf) goto L_004871c3;
L_00486f54:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00486f56:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00486f5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486f5b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00486f5d:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486f5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486f5f:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00486f63:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00486f65:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00486f67:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00486f69:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00486f6d:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00486f71:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00486f74:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00486f78:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00486f7c:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_00486f7f:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_00486f83:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486f84:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00486f88:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486f8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486f8b:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00486f8e:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_00486f91:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_00486f94:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00486f96:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00486f9a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00486f9c:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00486fa0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00486fa2:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00486fa4:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00486fa8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00486faa:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_00486fb0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486fb2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486fb5:  // jne 0x4871c3
    if (!f.zf) goto L_004871c3;
L_00486fbb:  // mov ecx, dword ptr [ebp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x54u)));
L_00486fbe:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00486fc2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486fc3:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_00486fc7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486fc8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486fc9:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00486fce:  // call 0x551300
    t0 = 0x00551300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486fd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486fd3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00486fd5:  // call 0x40d5b0
    t0 = 0x0040d5b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486fdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486fda:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00486fe0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486fe2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486fe5:  // je 0x487129
    if (f.zf) goto L_00487129;
L_00486feb:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00486fed:  // fmul dword ptr [0x5dbb80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb80u)));
L_00486ff3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486ff8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486ffa:  // mov edx, dword ptr [ebp + 0x1c8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x1c8u)));
L_00487000:  // mov esi, 0xffffff
    esi = (uint32_t)(0xffffffu);
L_00487005:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00487009:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048700d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487012:  // shl ecx, 0x18
    t0 = lshl<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_00487015:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487017:  // sub esi, ecx
    t0 = lsub<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_00487019:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048701e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487023:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00487024:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487026:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0048702c:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00487030:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487035:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487037:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00487039:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_0048703f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487040:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_00487045:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487046:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00487048:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0048704a:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0048704e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00487050:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00487054:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_00487058:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048705b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048705c:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487061u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487061:  // fld qword ptr [0x5dbea8]
    lpush(x, (long double)F64((uint32_t)(0x5dbea8u)));
L_00487067:  // fcos 
    ST(0) = lfcos(ST(0));
L_00487069:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0048706c:  // mov ecx, dword ptr [ebp + 0x1cc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x1ccu)));
L_00487072:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487077:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487079:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048707e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487080:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487085:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048708a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048708b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048708d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487092:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487094:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00487096:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487097:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_0048709c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048709d:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004870a1:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004870a5:  // fld qword ptr [0x5dbea8]
    lpush(x, (long double)F64((uint32_t)(0x5dbea8u)));
L_004870ab:  // fsin 
    ST(0) = lfsin(ST(0));
L_004870ad:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004870b1:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004870b5:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004870b9:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_004870bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004870c0:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004870c4:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_004870c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004870c9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004870cc:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004870d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004870d1:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004870d4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004870d9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004870db:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004870e0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004870e2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004870e7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004870ec:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004870ed:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004870ef:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004870f4:  // mov edx, dword ptr [ebp + 0x1d0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x1d0u)));
L_004870fa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004870fc:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00487100:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_00487104:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00487106:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487107:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_0048710c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048710d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00487110:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00487114:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_00487118:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487119:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048711c:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487121u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487121:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00487124:  // jmp 0x4871c3
    goto L_004871c3;
L_00487129:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048712e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487130:  // mov eax, dword ptr [ebp + 0x1b0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1b0u)));
L_00487136:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048713b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048713d:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00487141:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487146:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0048714a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048714f:  // push 0xc8ffffff
    t0 = 0xc8ffffffu; esp -= 4; M32(esp) = t0;
L_00487154:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487156:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048715b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048715d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048715f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487160:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_00487165:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487166:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487167:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00487169:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048716eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048716e:  // mov eax, dword ptr [ebp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00487171:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487176:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487178:  // mov edx, dword ptr [ebp + 0x1b4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x1b4u)));
L_0048717e:  // mov ecx, dword ptr [ebp + eax*4 + 0x1b8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x1b8u)));
L_00487185:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048718a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048718c:  // mov eax, dword ptr [esp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_00487193:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487198:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048719d:  // push 0x80ff5555
    t0 = 0x80ff5555u; esp -= 4; M32(esp) = t0;
L_004871a2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004871a3:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004871aa:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004871af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004871b1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004871b3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004871b4:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_004871b9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004871ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004871bb:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004871c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004871c0:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_004871c3:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004871c6:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004871c9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004871cb:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_004871ce:  // je 0x4871d4
    if (f.zf) goto L_004871d4;
L_004871d0:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004871d2:  // jmp 0x4871d6
    goto L_004871d6;
L_004871d4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004871d6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004871d8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004871da:  // jne 0x486f38
    if (!f.zf) goto L_00486f38;
L_004871e0:  // mov ebx, dword ptr [ebp + 0x50]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_004871e3:  // add ebx, 0x2a4
    t0 = ladd<32>(ebx, 0x2a4u, f);
    ebx = (uint32_t)(t0);
L_004871e9:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004871eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004871ed:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_004871f0:  // je 0x4871f6
    if (f.zf) goto L_004871f6;
L_004871f2:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004871f4:  // jmp 0x4871f8
    goto L_004871f8;
L_004871f6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004871f8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004871fa:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004871fc:  // je 0x4874ab
    if (f.zf) goto L_004874ab;
L_00487202:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00487204:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00487206:  // je 0x48748e
    if (f.zf) goto L_0048748e;
L_0048720c:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_00487210:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487211:  // call 0x4fd500
    t0 = 0x004fd500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487216u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487216:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00487218:  // je 0x48748e
    if (f.zf) goto L_0048748e;
L_0048721e:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00487220:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_00487224:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487225:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00487227:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487229u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487229:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0048722d:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_0048722f:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00487231:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00487233:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00487237:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0048723b:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0048723e:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00487242:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00487246:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_00487249:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_0048724d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048724e:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00487252:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487255u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487255:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00487258:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_0048725b:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_0048725e:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00487262:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00487264:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00487268:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048726a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048726c:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00487270:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00487272:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_00487278:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048727a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048727d:  // jne 0x48748e
    if (!f.zf) goto L_0048748e;
L_00487283:  // mov ecx, dword ptr [ebp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x54u)));
L_00487286:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0048728a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048728b:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_0048728f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487290:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487291:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00487296:  // call 0x551300
    t0 = 0x00551300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048729bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048729b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0048729f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004872a5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004872a7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004872aa:  // jne 0x48748e
    if (!f.zf) goto L_0048748e;
L_004872b0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004872b2:  // call 0x40d5b0
    t0 = 0x0040d5b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004872b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004872b7:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004872bb:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004872c1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004872c6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004872c8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004872cd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004872cf:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_004872d5:  // mov edx, 0xff5555
    edx = (uint32_t)(0xff5555u);
L_004872da:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004872de:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004872e2:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004872e8:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004872ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004872ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004872ee:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004872f4:  // mov eax, dword ptr [ebp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_004872f7:  // fmul dword ptr [0x5d9644]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9644u)));
L_004872fd:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00487301:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00487305:  // shl ecx, 0x18
    t0 = lshl<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_00487308:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0048730a:  // mov ecx, dword ptr [ebp + eax*4 + 0x1b8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x1b8u)));
L_00487311:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00487315:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487316:  // mov edx, dword ptr [ebp + 0x1b4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x1b4u)));
L_0048731c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048731d:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00487321:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487326:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487328:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048732a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048732b:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_00487330:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487331:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487332:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487337u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487337:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0048733b:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00487341:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00487344:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00487346:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00487349:  // je 0x48748e
    if (f.zf) goto L_0048748e;
L_0048734f:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00487355:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00487359:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048735e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487360:  // mov eax, dword ptr [ebp + 0x1c8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1c8u)));
L_00487366:  // mov esi, 0xffffff
    esi = (uint32_t)(0xffffffu);
L_0048736b:  // fmul dword ptr [0x5d9644]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9644u)));
L_00487371:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487376:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487378:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048737d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487382:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00487386:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048738a:  // shl edx, 0x18
    t0 = lshl<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_0048738d:  // sub esi, edx
    t0 = lsub<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0048738f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00487390:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487392:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487397:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487399:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0048739d:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_004873a3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004873a5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004873a6:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_004873ab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004873ac:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004873ae:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004873b0:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004873b4:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004873b8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004873ba:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004873be:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_004873c2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004873c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004873c6:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004873cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004873cb:  // fld qword ptr [0x5dbea8]
    lpush(x, (long double)F64((uint32_t)(0x5dbea8u)));
L_004873d1:  // fcos 
    ST(0) = lfcos(ST(0));
L_004873d3:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004873d6:  // mov edx, dword ptr [ebp + 0x1cc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x1ccu)));
L_004873dc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004873e1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004873e3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004873e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004873ea:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004873ef:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004873f4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004873f5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004873f7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004873fc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004873fe:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00487400:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487401:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_00487406:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487407:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_0048740b:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0048740f:  // fld qword ptr [0x5dbea8]
    lpush(x, (long double)F64((uint32_t)(0x5dbea8u)));
L_00487415:  // fsin 
    ST(0) = lfsin(ST(0));
L_00487417:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_0048741b:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0048741f:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00487423:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_00487427:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048742a:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0048742e:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00487432:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487433:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00487436:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048743bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048743b:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0048743e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487443:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487445:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048744a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048744c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487451:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487456:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00487457:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487459:  // mov eax, dword ptr [ebp + 0x1d0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1d0u)));
L_0048745f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487464:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00487468:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_0048746c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048746e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00487470:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487471:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_00487476:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487477:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048747a:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0048747e:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_00487482:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487483:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00487486:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048748bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048748b:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0048748e:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00487491:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00487494:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00487496:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_00487499:  // je 0x48749f
    if (f.zf) goto L_0048749f;
L_0048749b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048749d:  // jmp 0x4874a1
    goto L_004874a1;
L_0048749f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004874a1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004874a3:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004874a5:  // jne 0x487202
    if (!f.zf) goto L_00487202;
L_004874ab:  // mov edx, dword ptr [ebp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_004874ae:  // mov ecx, dword ptr [edx + 0x2b8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x2b8u)));
L_004874b4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004874b6:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004874ba:  // je 0x48763e
    if (f.zf) goto L_0048763e;
L_004874c0:  // mov eax, dword ptr [ecx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_004874c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004874c5:  // mov dword ptr [ecx + 0x24], eax
    M32((uint32_t)(ecx + 0x24u)) = (uint32_t)(eax);
L_004874c8:  // je 0x4874ce
    if (f.zf) goto L_004874ce;
L_004874ca:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004874cc:  // jmp 0x4874d0
    goto L_004874d0;
L_004874ce:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004874d0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004874d2:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004874d4:  // je 0x48763e
    if (f.zf) goto L_0048763e;
L_004874da:  // mov esi, dword ptr [ebx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004874dd:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004874df:  // je 0x487621
    if (f.zf) goto L_00487621;
L_004874e5:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004874e7:  // je 0x487621
    if (f.zf) goto L_00487621;
L_004874ed:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004874ef:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004874f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004874f4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004874f6:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004874f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004874f8:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004874fb:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004874fd:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004874ff:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00487501:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00487505:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_00487508:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0048750b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048750f:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_00487512:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_00487515:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_00487519:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048751a:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0048751e:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487521u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487521:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00487524:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_00487527:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_0048752a:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0048752e:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00487530:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00487534:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00487536:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00487538:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0048753c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048753e:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_00487544:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00487546:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00487549:  // jne 0x48761d
    if (!f.zf) goto L_0048761d;
L_0048754f:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00487552:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_00487555:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_00487559:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048755a:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048755cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048755c:  // mov ecx, dword ptr [ebp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x54u)));
L_0048755f:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00487563:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487564:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_00487568:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487569:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048756a:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048756f:  // call 0x551300
    t0 = 0x00551300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487574u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487574:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00487578:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048757e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00487580:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00487583:  // jne 0x48761d
    if (!f.zf) goto L_0048761d;
L_00487589:  // fld dword ptr [0x8a9e44]
    lpush(x, (long double)F32((uint32_t)(0x8a9e44u)));
L_0048758f:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_00487595:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_0048759b:  // fsub dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x10u)));
L_0048759e:  // fcom dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
L_004875a4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004875a6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004875a9:  // jne 0x4875b3
    if (!f.zf) goto L_004875b3;
L_004875ab:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004875ad:  // fld dword ptr [0x5d85ec]
    lpush(x, (long double)F32((uint32_t)(0x5d85ecu)));
L_004875b3:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004875b5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004875ba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004875bc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004875c1:  // mov edx, 0xffffff
    edx = (uint32_t)(0xffffffu);
L_004875c6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004875c8:  // fmul dword ptr [0x5dbea0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbea0u)));
L_004875ce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004875d0:  // fsubr dword ptr [0x5d85d8]
    ST(0) = ((long double)F32((uint32_t)(0x5d85d8u))) - (ST(0));
L_004875d6:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004875da:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004875de:  // fmul dword ptr [0x5d9644]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9644u)));
L_004875e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004875e5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004875e6:  // mov eax, dword ptr [ebp + 0x114]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x114u)));
L_004875ec:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004875f0:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004875f4:  // shl ecx, 0x18
    t0 = lshl<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_004875f7:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_004875f9:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004875fd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004875fe:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00487602:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487604:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487609:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048760b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0048760d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048760e:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_00487613:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487614:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487615:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048761au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048761a:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0048761d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00487621:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00487624:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00487627:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00487629:  // mov dword ptr [ecx + 0x24], eax
    M32((uint32_t)(ecx + 0x24u)) = (uint32_t)(eax);
L_0048762c:  // je 0x487632
    if (f.zf) goto L_00487632;
L_0048762e:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00487630:  // jmp 0x487634
    goto L_00487634;
L_00487632:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00487634:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00487636:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00487638:  // jne 0x4874da
    if (!f.zf) goto L_004874da;
L_0048763e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00487640:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00487642:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487644:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00487649:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048764eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048764e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00487650:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00487652:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487654:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00487659:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048765eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048765e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487660:  // call 0x551460
    t0 = 0x00551460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487665u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487665:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00487668:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048766d:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0048766f:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00487671:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487676u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487676:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00487678:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0048767a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048767f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487684u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487684:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487686:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487688:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048768d:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487692u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487692:  // mov eax, dword ptr [0x855140]
    eax = (uint32_t)(M32((uint32_t)(0x855140u)));
L_00487697:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00487699:  // mov dword ptr [0x855148], eax
    M32((uint32_t)(0x855148u)) = (uint32_t)(eax);
L_0048769e:  // je 0x4876a4
    if (f.zf) goto L_004876a4;
L_004876a0:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004876a2:  // jmp 0x4876a6
    goto L_004876a6;
L_004876a4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004876a6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004876a8:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004876aa:  // je 0x4879a2
    if (f.zf) goto L_004879a2;
L_004876b0:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004876b4:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004876b6:  // jmp 0x4876ba
    goto L_004876ba;
L_004876b8:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004876ba:  // test byte ptr [edi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x10u, f);
L_004876be:  // je 0x4876ce
    if (f.zf) goto L_004876ce;
L_004876c0:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004876c4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004876c5:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004876c7:  // call 0x4fd500
    t0 = 0x004fd500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004876ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004876cc:  // jmp 0x4876da
    goto L_004876da;
L_004876ce:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004876d2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004876d4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004876d5:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004876dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004876da:  // mov eax, dword ptr [ebp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x54u)));
L_004876dd:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004876e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004876e2:  // lea edx, [esp + 0x68]
    edx = (uint32_t)((uint32_t)(esp + 0x68u));
L_004876e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004876e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004876e8:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004876ed:  // call 0x551300
    t0 = 0x00551300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004876f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004876f2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004876f7:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004876fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004876fc:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00487701:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487706u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487706:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00487708:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_0048770c:  // je 0x48777e
    if (f.zf) goto L_0048777e;
L_0048770e:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00487710:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_00487717:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487718:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048771a:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048771cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048771c:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00487720:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00487722:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00487724:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00487726:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0048772a:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0048772e:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00487731:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00487735:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00487739:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0048773c:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_00487740:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487741:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00487745:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487748u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487748:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0048774b:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_0048774e:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_00487751:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00487755:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00487757:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_0048775b:  // mov dword ptr [esp + 0x18], 1
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x1u);
L_00487763:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00487765:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00487767:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_0048776b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048776d:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_00487773:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00487775:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00487778:  // jne 0x48777e
    if (!f.zf) goto L_0048777e;
L_0048777a:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_0048777e:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_00487781:  // mov ebx, 0xff3fafff
    ebx = (uint32_t)(0xff3fafffu);
L_00487786:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_00487788:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0048778c:  // je 0x4878a3
    if (f.zf) goto L_004878a3;
L_00487792:  // mov eax, dword ptr [edi + 0x138]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x138u)));
L_00487798:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_0048779b:  // je 0x4877f6
    if (f.zf) goto L_004877f6;
L_0048779d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048779e:  // je 0x4878c4
    if (f.zf) goto L_004878c4;
L_004877a4:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004877a5:  // jne 0x4877ff
    if (!f.zf) goto L_004877ff;
L_004877a7:  // mov eax, dword ptr [0x8a9d38]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d38u)));
L_004877ac:  // cmp eax, 0x2c6
    t0 = lsub<32>(eax, 0x2c6u, f);
L_004877b1:  // je 0x4877ba
    if (f.zf) goto L_004877ba;
L_004877b3:  // cmp eax, 0x2d0
    t0 = lsub<32>(eax, 0x2d0u, f);
L_004877b8:  // jne 0x4877ff
    if (!f.zf) goto L_004877ff;
L_004877ba:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004877bc:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004877be:  // mov esi, 0x62d350
    esi = (uint32_t)(0x62d350u);
L_004877c3:  // call dword ptr [edx + 0xa4]
    t0 = M32((uint32_t)(edx + 0xa4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004877c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004877c9:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004877cb:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004877cd:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004877cf:  // jne 0x4877ed
    if (!f.zf) goto L_004877ed;
L_004877d1:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004877d3:  // je 0x4877e9
    if (f.zf) goto L_004877e9;
L_004877d5:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004877d8:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004877da:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004877dd:  // jne 0x4877ed
    if (!f.zf) goto L_004877ed;
L_004877df:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004877e2:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004877e5:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004877e7:  // jne 0x4877c9
    if (!f.zf) goto L_004877c9;
L_004877e9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004877eb:  // jmp 0x4877f2
    goto L_004877f2;
L_004877ed:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004877ef:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004877f2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004877f4:  // jne 0x4877ff
    if (!f.zf) goto L_004877ff;
L_004877f6:  // mov ebx, 0xff6fff2f
    ebx = (uint32_t)(0xff6fff2fu);
L_004877fb:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_004877ff:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00487803:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00487805:  // je 0x487980
    if (f.zf) goto L_00487980;
L_0048780b:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048780f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00487811:  // jne 0x487980
    if (!f.zf) goto L_00487980;
L_00487817:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00487819:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_00487820:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487821:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00487823:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487825u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487825:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00487829:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_0048782b:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0048782d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048782f:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00487833:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00487837:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0048783a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048783e:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00487842:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_00487845:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00487849:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048784cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048784c:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00487850:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00487854:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00487858:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0048785c:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0048785e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00487860:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00487862:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00487866:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0048786a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048786c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0048786e:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_00487872:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_00487874:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_0048787a:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0048787e:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00487881u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00487881:  // fdivr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) / (ST(0));
L_00487885:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_00487889:  // fcomp dword ptr [0x5d8604]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8604u)));
    lpop(x);
L_0048788f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00487891:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00487894:  // je 0x4878ce
    if (f.zf) goto L_004878ce;
L_00487896:  // mov dword ptr [esp + 0x18], 0x3e4ccccd
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3e4ccccdu);
L_0048789e:  // jmp 0x48793c
    goto L_0048793c;
L_004878a3:  // test eax, 0x400000
    t0 = llog<32>(eax & 0x400000u, f);
L_004878a8:  // je 0x4877ff
    if (f.zf) goto L_004877ff;
L_004878ae:  // mov eax, dword ptr [edi + 0xec]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xecu)));
L_004878b4:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004878b7:  // je 0x4877f6
    if (f.zf) goto L_004877f6;
L_004878bd:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004878be:  // jne 0x4877ff
    if (!f.zf) goto L_004877ff;
L_004878c4:  // mov ebx, 0xffff6f2f
    ebx = (uint32_t)(0xffff6f2fu);
L_004878c9:  // jmp 0x4877fb
    goto L_004877fb;
L_004878ce:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004878d2:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_004878d8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004878da:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004878dd:  // jne 0x48793c
    if (!f.zf) goto L_0048793c;
L_004878df:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004878e3:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_004878e9:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_004878ee:  // fmul dword ptr [0x5dbe9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe9cu)));
L_004878f4:  // fistp qword ptr [esp + 0x34]
    M64((uint32_t)(esp + 0x34u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004878f8:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004878fc:  // sub esi, ecx
    t0 = lsub<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004878fe:  // jns 0x487902
    if (!f.sf) goto L_00487902;
L_00487900:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00487902:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00487904:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00487906:  // mov dl, byte ptr [esp + 0x12]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x12u))) & 0xffu);
L_0048790a:  // mov al, bh
    eax = (eax & 0xffffff00u) | ((uint32_t)(((ebx >> 8) & 0xffu)) & 0xffu);
L_0048790c:  // imul edx, esi
    t0 = limul32(edx, esi, f);
    edx = (uint32_t)(t0);
L_0048790f:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_00487912:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00487914:  // and ebx, 0xff000000
    t0 = llog<32>(ebx & 0xff000000u, f);
    ebx = (uint32_t)(t0);
L_0048791a:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_00487920:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00487923:  // shr edx, 8
    t0 = lshr<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00487926:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00487929:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0048792c:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00487930:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00487932:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00487935:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00487938:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0048793a:  // add ebx, edx
    t0 = ladd<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_0048793c:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00487940:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487945:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487947:  // mov edx, dword ptr [ebp + 0x144]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_0048794d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00487952:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00487954:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487955:  // mov ecx, dword ptr [esp + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_00487959:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048795a:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_00487961:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00487962:  // push 0x3f490fdb
    t0 = 0x3f490fdbu; esp -= 4; M32(esp) = t0;
L_00487967:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048796c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048796e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00487970:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00487971:  // push 0x3c54fdf4
    t0 = 0x3c54fdf4u; esp -= 4; M32(esp) = t0;
L_00487976:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00487977:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00487978:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048797du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048797d:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00487980:  // mov edx, dword ptr [0x855148]
    edx = (uint32_t)(M32((uint32_t)(0x855148u)));
L_00487986:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00487989:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048798b:  // mov dword ptr [0x855148], eax
    M32((uint32_t)(0x855148u)) = (uint32_t)(eax);
L_00487990:  // je 0x487996
    if (f.zf) goto L_00487996;
L_00487992:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00487994:  // jmp 0x487998
    goto L_00487998;
L_00487996:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00487998:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048799a:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048799c:  // jne 0x4876b8
    if (!f.zf) goto L_004876b8;
L_004879a2:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_004879a4:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004879a6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004879ab:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004879b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004879b0:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004879b2:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004879b4:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004879b9:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004879beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004879be:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004879c0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004879c2:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004879c7:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004879ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004879cc:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004879cd:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004879ce:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004879cf:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004879d0:  // add esp, 0xb4
    t0 = ladd<32>(esp, 0xb4u, f);
    esp = (uint32_t)(t0);
L_004879d6:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00486e00, 00486e00)
