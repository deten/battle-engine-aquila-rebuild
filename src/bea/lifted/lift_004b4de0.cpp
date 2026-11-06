// lifted from 004b4de0 (FUN_004b4de0, 845 bytes, 271 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b4de0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b4de0;
L_004b4de0:  // sub esp, 0xa4
    t0 = lsub<32>(esp, 0xa4u, f);
    esp = (uint32_t)(t0);
L_004b4de6:  // mov ecx, dword ptr [0x704de8]
    ecx = (uint32_t)(M32((uint32_t)(0x704de8u)));
L_004b4dec:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b4ded:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b4dee:  // mov ebp, dword ptr [esp + 0xbc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004b4df5:  // mov ebx, dword ptr [esp + 0xc0]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_004b4dfc:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004b4dfe:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b4dff:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b4e00:  // mov esi, 0x704db8
    esi = (uint32_t)(0x704db8u);
L_004b4e05:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b4e07:  // mov edx, dword ptr [0x704dec]
    edx = (uint32_t)(M32((uint32_t)(0x704decu)));
L_004b4e0d:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_004b4e0f:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004b4e12:  // mov ecx, dword ptr [0x704df0]
    ecx = (uint32_t)(M32((uint32_t)(0x704df0u)));
L_004b4e18:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b4e1b:  // mov edx, dword ptr [0x704df4]
    edx = (uint32_t)(M32((uint32_t)(0x704df4u)));
L_004b4e21:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b4e26:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b4e29:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b4e2b:  // mov ecx, dword ptr [esp + 0xb8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_004b4e32:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004b4e34:  // mov edi, dword ptr [ecx + 0xc]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004b4e37:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4e3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4e3a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b4e3c:  // je 0x4b5122
    if (f.zf) goto L_004b5122;
L_004b4e42:  // mov esi, dword ptr [esp + 0xc0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_004b4e49:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b4e4b:  // je 0x4b5122
    if (f.zf) goto L_004b5122;
L_004b4e51:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004b4e53:  // je 0x4b50c6
    if (f.zf) goto L_004b50c6;
L_004b4e59:  // cmp dword ptr [0x8a9aac], 1
    t0 = lsub<32>(M32((uint32_t)(0x8a9aacu)), 0x1u, f);
L_004b4e60:  // jbe 0x4b50c6
    if ((f.cf || f.zf)) goto L_004b50c6;
L_004b4e66:  // mov ecx, dword ptr [esp + 0xd0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_004b4e6d:  // mov edx, dword ptr [esp + 0xb8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_004b4e74:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4e75:  // mov ecx, dword ptr [esp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_004b4e7c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b4e7d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4e7e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b4e7f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b4e81:  // call 0x4b4cd0
    t0 = 0x004b4cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4e86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4e86:  // mov edx, dword ptr [esi + 0x88]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x88u)));
L_004b4e8c:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004b4e8f:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b4e92:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4e94:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004b4e96:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_004b4e98:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b4e9a:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b4e9d:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004b4ea0:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b4ea3:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b4ea6:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b4ea9:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b4eac:  // mov eax, dword ptr [esi + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x88u)));
L_004b4eb2:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_004b4eb4:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_004b4eb6:  // lea esi, [eax + eax*2]
    esi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b4eb9:  // mov eax, dword ptr [esp + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_004b4ec0:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004b4ec3:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004b4ec5:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b4eca:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b4ecc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b4ece:  // jne 0x4b5122
    if (!f.zf) goto L_004b5122;
L_004b4ed4:  // mov esi, dword ptr [esp + 0xbc]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004b4edb:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004b4edf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4ee0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b4ee2:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004b4ee4:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4ee6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4ee6:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b4ee8:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004b4eec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b4eed:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b4eef:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4ef2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4ef2:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004b4ef6:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b4ef9:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b4efd:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b4f00:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f02:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b4f06:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b4f09:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f0b:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b4f0f:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b4f12:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b4f16:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b4f19:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f1b:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b4f1f:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b4f22:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f24:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004b4f28:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b4f2c:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b4f2f:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b4f33:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b4f36:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f38:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4f3c:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b4f3f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f41:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004b4f45:  // fadd dword ptr [esp + 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x64u)));
L_004b4f49:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004b4f4d:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004b4f51:  // fadd dword ptr [esp + 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x44u)));
L_004b4f55:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004b4f59:  // mov dword ptr [ebp], ecx
    M32((uint32_t)(ebp)) = (uint32_t)(ecx);
L_004b4f5c:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004b4f60:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004b4f64:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b4f68:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_004b4f6c:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004b4f70:  // mov dword ptr [ebp + 4], edx
    M32((uint32_t)(ebp + 0x4u)) = (uint32_t)(edx);
L_004b4f73:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004b4f77:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004b4f7b:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b4f7f:  // mov dword ptr [ebp + 8], eax
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(eax);
L_004b4f82:  // mov dword ptr [ebp + 0xc], ecx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(ecx);
L_004b4f85:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004b4f87:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b4f8b:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_004b4f8e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f90:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4f94:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004b4f97:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4f99:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004b4f9d:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b4fa1:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004b4fa4:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b4fa8:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_004b4fab:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004b4faf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b4fb0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4fb1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4fb3:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b4fb7:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_004b4fba:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4fbc:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004b4fc0:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b4fc4:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_004b4fc7:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4fcb:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004b4fce:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4fd0:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004b4fd4:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_004b4fd7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4fd9:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004b4fdd:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b4fe1:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_004b4fe4:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b4fe8:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004b4feb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4fed:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004b4ff1:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_004b4ff4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4ff6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b4ff9:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b4ffd:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004b5000:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004b5004:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_004b5007:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5008:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b500a:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b500e:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_004b5011:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5013:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5016:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004b501a:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004b501c:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b5020:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_004b5023:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5024:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004b5028:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b502a:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b502e:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004b5031:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5033:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5036:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b503bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b503b:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004b503f:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_004b5042:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b5046:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_004b5049:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b504a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b504b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b504d:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004b5051:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004b5054:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5056:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5059:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b505d:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_004b5060:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004b5064:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004b5067:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5068:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b506a:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b506e:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_004b5071:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5073:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5076:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b507a:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004b507c:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b5080:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_004b5083:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5084:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5086:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004b508a:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004b508d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b508f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5092:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_004b5099:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b509eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b509e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b509f:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_004b50a6:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b50abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b50ab:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b50b0:  // lea esi, [esp + 0x84]
    esi = (uint32_t)((uint32_t)(esp + 0x84u));
L_004b50b7:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_004b50b9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b50bb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b50bc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b50bd:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b50be:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b50bf:  // add esp, 0xa4
    t0 = ladd<32>(esp, 0xa4u, f);
    esp = (uint32_t)(t0);
L_004b50c5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b50c6:  // mov edi, dword ptr [esp + 0xbc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004b50cd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b50cf:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004b50d1:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b50d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b50d4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b50d6:  // jl 0x4b5101
    if ((f.sf != f.of)) goto L_004b5101;
L_004b50d8:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004b50da:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b50dc:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b50dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b50df:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004b50e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b50e2:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_004b50e6:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b50e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b50e9:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b50ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b50ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b50ed:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004b50ef:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b50f1:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b50f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b50f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b50f5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b50f7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b50fa:  // call 0x4b24d0
    t0 = 0x004b24d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b50ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b50ff:  // jmp 0x4b5103
    goto L_004b5103;
L_004b5101:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004b5103:  // mov ecx, dword ptr [esp + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_004b510a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b510c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b510e:  // setne cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_004b5111:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b5113:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5114:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b5115:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b5116:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b5117:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b5119:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b511a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b511b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b511d:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5122u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5122:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b5123:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b5124:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b5125:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b5126:  // add esp, 0xa4
    t0 = ladd<32>(esp, 0xa4u, f);
    esp = (uint32_t)(t0);
L_004b512c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b4de0, 004b4de0)
