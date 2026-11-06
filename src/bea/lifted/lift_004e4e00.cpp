// lifted from 004e4e00 (vslot3, 1537 bytes, 500 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e4e00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e4e00;
L_004e4e00:  // sub esp, 0x80
    t0 = lsub<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004e4e06:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e4e07:  // mov ebx, dword ptr [esp + 0x88]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004e4e0e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e4e0f:  // mov ebp, dword ptr [esp + 0x90]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004e4e16:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e4e17:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e4e18:  // fld dword ptr [ebp + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x18u)));
L_004e4e1b:  // fsub dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x18u)));
L_004e4e1e:  // lea esi, [ebp + 0x10]
    esi = (uint32_t)((uint32_t)(ebp + 0x10u));
L_004e4e21:  // lea edi, [ebx + 0x10]
    edi = (uint32_t)((uint32_t)(ebx + 0x10u));
L_004e4e24:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004e4e28:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4e29:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4e2c:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004e4e2f:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004e4e32:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4e33:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4e36:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e4e38:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004e4e3a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4e3b:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004e4e3f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4e42:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e4e47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e4e47:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e4e4b:  // mov ecx, dword ptr [esp + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004e4e52:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_004e4e55:  // fadd dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x14u)));
L_004e4e58:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004e4e5c:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004e4e60:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004e4e64:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004e4e68:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004e4e6c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004e4e6e:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004e4e70:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4e72:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e4e74:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e4e76:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4e78:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e4e7a:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004e4e7c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e4e7e:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_004e4e82:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004e4e88:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e4e8a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e4e8d:  // je 0x4e4e96
    if (f.zf) goto L_004e4e96;
L_004e4e8f:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004e4e94:  // jmp 0x4e4e98
    goto L_004e4e98;
L_004e4e96:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e4e98:  // mov edx, dword ptr [esp + 0xa0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_004e4e9f:  // mov ecx, dword ptr [edx + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xccu)));
L_004e4ea5:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e4ea7:  // je 0x4e53f4
    if (f.zf) goto L_004e53f4;
L_004e4ead:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e4eaf:  // je 0x4e53f4
    if (f.zf) goto L_004e53f4;
L_004e4eb5:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004e4eb8:  // fsub dword ptr [ebx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004e4ebb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4ebc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4ebf:  // fld dword ptr [edi + 4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x4u)));
L_004e4ec2:  // fsub dword ptr [ebx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004e4ec5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4ec6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4ec9:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004e4ecb:  // fsub dword ptr [ebx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx)));
L_004e4ecd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4ece:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004e4ed2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4ed5:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e4edau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e4eda:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004e4edd:  // fsub dword ptr [ebp + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e4ee0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4ee1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4ee4:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004e4ee7:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e4eea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4eeb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4eee:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e4ef0:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e4ef3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4ef4:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e4ef8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4efb:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e4f00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e4f00:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004e4f04:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004e4f08:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4f09:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4f0c:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004e4f10:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004e4f14:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4f15:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4f18:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004e4f1c:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004e4f20:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4f21:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004e4f25:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4f28:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e4f2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e4f2d:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004e4f31:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004e4f35:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004e4f39:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004e4f3d:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e4f41:  // mov ecx, dword ptr [esp + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004e4f48:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4f4a:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004e4f4e:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004e4f52:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4f53:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4f55:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004e4f59:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_004e4f5c:  // fadd dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x14u)));
L_004e4f5f:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004e4f63:  // fld dword ptr [ebp + 8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x8u)));
L_004e4f66:  // fsub dword ptr [ebx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004e4f69:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4f6c:  // fld dword ptr [ebp + 4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x4u)));
L_004e4f6f:  // fsub dword ptr [ebx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004e4f72:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4f73:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4f76:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004e4f79:  // fsub dword ptr [ebx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx)));
L_004e4f7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e4f7c:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004e4f80:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e4f83:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e4f88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e4f88:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004e4f8c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e4f8e:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004e4f92:  // fcomp dword ptr [0x5dae90]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dae90u)));
    lpop(x);
L_004e4f98:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e4f9a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e4f9d:  // jne 0x4e52ca
    if (!f.zf) goto L_004e52ca;
L_004e4fa3:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004e4fa7:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004e4fab:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004e4faf:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004e4fb3:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004e4fb5:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004e4fb7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4fb9:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e4fbb:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e4fbd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4fbf:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e4fc1:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004e4fc3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e4fc5:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004e4fc9:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004e4fcd:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e4fcf:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e4fd1:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e4fd3:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e4fd5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4fd7:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004e4fdb:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004e4fdf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e4fe1:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e4fe3:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004e4fe5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e4fe7:  // fchs 
    ST(0) = -ST(0);
L_004e4fe9:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004e4fed:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e4fef:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e4ff1:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e4ff5:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004e4ff9:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004e4ffb:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004e4fff:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004e5005:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e5007:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004e500a:  // je 0x4e5016
    if (f.zf) goto L_004e5016;
L_004e500c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e500e:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004e5014:  // jmp 0x4e504e
    goto L_004e504e;
L_004e5016:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e5018:  // fchs 
    ST(0) = -ST(0);
L_004e501a:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004e501c:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_004e501e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004e5022:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004e5026:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e502a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004e502e:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004e5030:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004e5034:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_004e503a:  // fsubp st(2)
    ST(2) = (ST(2)) - (ST(0));
    lpop(x);
L_004e503c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004e503e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e5040:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004e5042:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004e5044:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004e5046:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004e504a:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004e504c:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_004e504e:  // fcom qword ptr [0x5d87b0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87b0u)));
L_004e5054:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e5056:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e5059:  // je 0x4e5063
    if (f.zf) goto L_004e5063;
L_004e505b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e505d:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004e5063:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_004e5069:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e506a:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_004e506e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e5070:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e5073:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e5076:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5077:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e5079:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e507c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e507f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5080:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e5084:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004e5087:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e508a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e508fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e508f:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e5091:  // fsub dword ptr [esp + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x60u)));
L_004e5095:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5096:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e5098:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004e509b:  // fsub dword ptr [esp + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x68u)));
L_004e509f:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e50a2:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004e50a5:  // fsub dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x6cu)));
L_004e50a9:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e50ac:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e50b0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e50b2:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004e50b5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e50b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e50b9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e50bb:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004e50be:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e50c1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e50c2:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e50c6:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004e50c8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e50cb:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e50d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e50d0:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004e50d2:  // fsub dword ptr [esp + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x60u)));
L_004e50d6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e50d7:  // fstp dword ptr [edi]
    F32((uint32_t)(edi)) = lf32(ST(0));
    lpop(x);
L_004e50d9:  // fld dword ptr [edi + 4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x4u)));
L_004e50dc:  // fsub dword ptr [esp + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x68u)));
L_004e50e0:  // fstp dword ptr [edi + 4]
    F32((uint32_t)(edi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e50e3:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004e50e6:  // fsub dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x6cu)));
L_004e50ea:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e50ed:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004e50f0:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_004e50f3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e50f6:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004e50f9:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004e50fc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e50fd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e5100:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e5102:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004e5104:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5105:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004e5109:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e510c:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e5111u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e5111:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e5115:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e5117:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004e5119:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e511d:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004e5121:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_004e5129:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e512b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e512d:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004e5133:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e5135:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004e5138:  // jne 0x4e5160
    if (!f.zf) goto L_004e5160;
L_004e513a:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004e5140:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_004e5148:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e514c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e514e:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004e5152:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e5156:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e5158:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004e515c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e515e:  // jmp 0x4e5162
    goto L_004e5162;
L_004e5160:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e5162:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e5166:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004e5169:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e516d:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e5170:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e5172:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e5176:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e5179:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e517b:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004e5181:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e5183:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e5186:  // je 0x4e51fc
    if (f.zf) goto L_004e51fc;
L_004e5188:  // fchs 
    ST(0) = -ST(0);
L_004e518a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e518c:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004e5190:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5191:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e5194:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e5198:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e519a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e519b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e519e:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e51a2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e51a4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e51a5:  // lea ecx, [esp + 0x7c]
    ecx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004e51a9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e51ac:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e51ae:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e51b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e51b3:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004e51b7:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e51ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e51bb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e51be:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004e51c2:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e51c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e51c6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e51c9:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004e51cd:  // fadd dword ptr [ebp]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp)));
L_004e51d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e51d1:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e51d5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e51d8:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e51ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e51dd:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004e51e1:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004e51e5:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_004e51e7:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004e51e9:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004e51ed:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004e51f0:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004e51f4:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004e51f7:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004e51fa:  // jmp 0x4e51fe
    goto L_004e51fe;
L_004e51fc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e51fe:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e5200:  // fadd dword ptr [ebp]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp)));
L_004e5203:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e5205:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004e5208:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e520b:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e520e:  // fld dword ptr [ebp + 8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x8u)));
L_004e5211:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_004e5214:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e5217:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e521b:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004e521e:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e5222:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004e5225:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e5227:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e522b:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004e522d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e522f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004e5235:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e5237:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e523a:  // jne 0x4e52ab
    if (!f.zf) goto L_004e52ab;
L_004e523c:  // fchs 
    ST(0) = -ST(0);
L_004e523e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e5240:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004e5244:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5245:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e5248:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e524c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e524e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e524f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e5252:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5253:  // lea ecx, [esp + 0x7c]
    ecx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004e5257:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004e525b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e525e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e5263u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e5263:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004e5267:  // fadd dword ptr [ebx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004e526a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e526b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e526e:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004e5272:  // fadd dword ptr [ebx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004e5275:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5276:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e5279:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004e527d:  // fadd dword ptr [ebx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx)));
L_004e527f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5280:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e5284:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e5287:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e528cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e528c:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004e5290:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004e5294:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004e5296:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004e5298:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004e529c:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004e529f:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004e52a3:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004e52a6:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004e52a9:  // jmp 0x4e52ad
    goto L_004e52ad;
L_004e52ab:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e52ad:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004e52af:  // fadd dword ptr [ebx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx)));
L_004e52b1:  // fstp dword ptr [edi]
    F32((uint32_t)(edi)) = lf32(ST(0));
    lpop(x);
L_004e52b3:  // fld dword ptr [edi + 4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x4u)));
L_004e52b6:  // fadd dword ptr [ebx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004e52b9:  // fstp dword ptr [edi + 4]
    F32((uint32_t)(edi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e52bc:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_004e52bf:  // fadd dword ptr [edi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x8u)));
L_004e52c2:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e52c5:  // jmp 0x4e53e9
    goto L_004e53e9;
L_004e52ca:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004e52ce:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004e52d2:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004e52d6:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004e52da:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004e52de:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004e52e2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e52e4:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004e52e8:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004e52ec:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004e52f0:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004e52f4:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004e52f8:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004e52fc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e52fe:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004e5302:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004e5306:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e5308:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004e530e:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_004e5312:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e5314:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004e5317:  // jne 0x4e533d
    if (!f.zf) goto L_004e533d;
L_004e5319:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004e531f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e5321:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004e5325:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004e5329:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e532d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e532f:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004e5333:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e5337:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e5339:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004e533d:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e5341:  // mov ecx, dword ptr [esp + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004e5348:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e534a:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_004e534d:  // fadd dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x14u)));
L_004e5350:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004e5354:  // fcom qword ptr [0x5d87b0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87b0u)));
L_004e535a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e535c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e535f:  // je 0x4e5372
    if (f.zf) goto L_004e5372;
L_004e5361:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e5362:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e5363:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e5364:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e5366:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e5368:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e5369:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004e536f:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004e5372:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004e5378:  // lea eax, [esp + 0x70]
    eax = (uint32_t)((uint32_t)(esp + 0x70u));
L_004e537c:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004e5380:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e5384:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e5388:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e5389:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e538a:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e538fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e538f:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e5393:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004e5397:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e5398:  // lea eax, [esp + 0x84]
    eax = (uint32_t)((uint32_t)(esp + 0x84u));
L_004e539f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e53a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e53a1:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004e53a5:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e53aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e53aa:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e53ac:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e53b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e53b1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e53b2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e53b4:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_004e53bc:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_004e53c4:  // call 0x490900
    t0 = 0x00490900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e53c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e53c9:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004e53cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e53ce:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e53d0:  // call 0x41ad10
    t0 = 0x0041ad10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e53d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e53d5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e53d6:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e53d8:  // call 0x490900
    t0 = 0x00490900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e53ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e53dd:  // lea edx, [esp + 0x60]
    edx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004e53e1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e53e3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e53e4:  // call 0x41ad10
    t0 = 0x0041ad10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e53e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e53e9:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004e53ee:  // mov dword ptr [ebx + 0x20], eax
    M32((uint32_t)(ebx + 0x20u)) = (uint32_t)(eax);
L_004e53f1:  // mov dword ptr [ebp + 0x20], eax
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(eax);
L_004e53f4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e53f5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e53f6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e53f7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e53f8:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004e53fe:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e4e00, 004e4e00)
