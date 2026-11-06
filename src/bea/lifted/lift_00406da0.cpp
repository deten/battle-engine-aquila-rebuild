// lifted from 00406da0 (FUN_00406da0, 539 bytes, 180 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00406da0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00406da0;
L_00406da0:  // sub esp, 0x4c
    t0 = lsub<32>(esp, 0x4cu, f);
    esp = (uint32_t)(t0);
L_00406da3:  // mov eax, dword ptr [0x8550d0]
    eax = (uint32_t)(M32((uint32_t)(0x8550d0u)));
L_00406da8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00406da9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00406daa:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00406dac:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00406dae:  // mov dword ptr [esp + 0xc], 0x4b18967f
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x4b18967fu);
L_00406db6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00406db8:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_00406dbc:  // mov dword ptr [0x8550d8], eax
    M32((uint32_t)(0x8550d8u)) = (uint32_t)(eax);
L_00406dc1:  // je 0x406dc7
    if (f.zf) goto L_00406dc7;
L_00406dc3:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_00406dc5:  // jmp 0x406dc9
    goto L_00406dc9;
L_00406dc7:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00406dc9:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00406dcb:  // je 0x406fb1
    if (f.zf) goto L_00406fb1;
L_00406dd1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00406dd2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00406dd3:  // mov eax, dword ptr [ebx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x138u)));
L_00406dd9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00406ddb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00406ddc:  // call 0x4fd3d0
    t0 = 0x004fd3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406de1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406de1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00406de3:  // je 0x406f83
    if (f.zf) goto L_00406f83;
L_00406de9:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00406ded:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00406dee:  // call 0x5061f0
    t0 = 0x005061f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406df3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406df3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00406df5:  // je 0x406f83
    if (f.zf) goto L_00406f83;
L_00406dfb:  // fld dword ptr [ebx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x1cu)));
L_00406dfe:  // fsub dword ptr [esp + 0x64]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x64u)));
L_00406e02:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_00406e05:  // fsub dword ptr [esp + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x68u)));
L_00406e09:  // fld dword ptr [ebx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x24u)));
L_00406e0c:  // fsub dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00406e10:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00406e12:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00406e14:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00406e16:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00406e18:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00406e1a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00406e1c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406e1e:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00406e20:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00406e22:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406e24:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00406e28:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406e2a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406e2c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406e2e:  // call dword ptr [eax + 0x16c]
    t0 = M32((uint32_t)(eax + 0x16cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406e34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406e34:  // fmul dword ptr [0x5d85fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85fcu)));
L_00406e3a:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00406e40:  // fmul dword ptr [esp + 0x74]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x74u)));
L_00406e44:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00406e46:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00406e48:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00406e4c:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_00406e4e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00406e50:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00406e53:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406e55:  // je 0x406f83
    if (f.zf) goto L_00406f83;
L_00406e5b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00406e5f:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_00406e63:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00406e65:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00406e68:  // je 0x406f83
    if (f.zf) goto L_00406f83;
L_00406e6e:  // fld dword ptr [ebx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x1cu)));
L_00406e71:  // fsub dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_00406e74:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_00406e77:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_00406e7a:  // fld dword ptr [ebx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x24u)));
L_00406e7d:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_00406e80:  // lea esi, [ebp + 0x3c]
    esi = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_00406e83:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00406e88:  // lea edi, [esp + 0x2c]
    edi = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00406e8c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00406e8e:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00406e92:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00406e96:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00406e9a:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00406e9e:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00406ea2:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_00406ea6:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_00406eaa:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00406eae:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00406eb2:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00406eb6:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00406eb8:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00406ebc:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00406ebe:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406ec0:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00406ec4:  // fmul st(5)
    ST(0) = (ST(0)) * (ST(5));
L_00406ec6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406ec8:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00406ecc:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00406ed0:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00406ed2:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00406ed6:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00406ed8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406eda:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00406ede:  // fmul st(5)
    ST(0) = (ST(0)) * (ST(5));
L_00406ee0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406ee2:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00406ee6:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00406eea:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00406eec:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00406ef0:  // fmul st(5)
    ST(0) = (ST(0)) * (ST(5));
L_00406ef2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406ef4:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00406ef6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00406ef8:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_00406efa:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00406efc:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00406efe:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00406f00:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406f02:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406f04:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00406f08:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00406f0a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00406f0c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00406f0e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00406f10:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406f12:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00406f16:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00406f1a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00406f1c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00406f1e:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00406f20:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406f22:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00406f28:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00406f2a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00406f2d:  // jne 0x406f3f
    if (!f.zf) goto L_00406f3f;
L_00406f2f:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00406f35:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00406f39:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00406f3d:  // jmp 0x406f41
    goto L_00406f41;
L_00406f3f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00406f41:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00406f45:  // call 0x506620
    t0 = 0x00506620u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406f4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406f4a:  // fcos 
    ST(0) = lfcos(ST(0));
L_00406f4c:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_00406f50:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00406f52:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00406f55:  // je 0x406f83
    if (f.zf) goto L_00406f83;
L_00406f57:  // lea esi, [ebp + 0x294]
    esi = (uint32_t)((uint32_t)(ebp + 0x294u));
L_00406f5d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00406f5f:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406f64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406f64:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00406f66:  // je 0x406f77
    if (f.zf) goto L_00406f77;
L_00406f68:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00406f6a:  // je 0x406f83
    if (f.zf) goto L_00406f83;
L_00406f6c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00406f6e:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406f73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406f73:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00406f75:  // jne 0x406f68
    if (!f.zf) goto L_00406f68;
L_00406f77:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00406f7b:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00406f7f:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00406f83:  // mov ecx, dword ptr [0x8550d8]
    ecx = (uint32_t)(M32((uint32_t)(0x8550d8u)));
L_00406f89:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00406f8c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00406f8e:  // mov dword ptr [0x8550d8], eax
    M32((uint32_t)(0x8550d8u)) = (uint32_t)(eax);
L_00406f93:  // je 0x406f99
    if (f.zf) goto L_00406f99;
L_00406f95:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_00406f97:  // jmp 0x406f9b
    goto L_00406f9b;
L_00406f99:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00406f9b:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00406f9d:  // jne 0x406dd3
    if (!f.zf) goto L_00406dd3;
L_00406fa3:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00406fa7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00406fa8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00406fa9:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00406faa:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00406fab:  // add esp, 0x4c
    t0 = ladd<32>(esp, 0x4cu, f);
    esp = (uint32_t)(t0);
L_00406fae:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00406fb1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00406fb2:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00406fb4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00406fb5:  // add esp, 0x4c
    t0 = ladd<32>(esp, 0x4cu, f);
    esp = (uint32_t)(t0);
L_00406fb8:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00406da0, 00406da0)
