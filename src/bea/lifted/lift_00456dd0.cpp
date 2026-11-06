// lifted from 00456dd0 (vslot5, 3870 bytes, 1076 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00456dd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00456dd0;
L_00456dd0:  // sub esp, 0x32c
    t0 = lsub<32>(esp, 0x32cu, f);
    esp = (uint32_t)(t0);
L_00456dd6:  // fld dword ptr [esp + 0x330]
    lpush(x, (long double)F32((uint32_t)(esp + 0x330u)));
L_00456ddd:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00456de3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00456de4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00456de5:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00456de7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00456de8:  // mov edi, dword ptr [esp + 0x340]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x340u)));
L_00456def:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_00456df3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456df5:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00456dfc:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00456e03:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00456e06:  // je 0x456e36
    if (f.zf) goto L_00456e36;
L_00456e08:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00456e0d:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00456e12:  // call 0x452fd0
    t0 = 0x00452fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456e17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456e17:  // mov eax, dword ptr [0x89d810]
    eax = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_00456e1c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456e1e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00456e23:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456e25:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00456e27:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00456e2c:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00456e31:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00456e33:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456e34:  // jmp 0x456e7c
    goto L_00456e7c;
L_00456e36:  // cmp edi, 7
    t0 = lsub<32>(edi, 0x7u, f);
L_00456e39:  // je 0x456e93
    if (f.zf) goto L_00456e93;
L_00456e3b:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_00456e42:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_00456e48:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00456e49:  // mov ecx, dword ptr [0x89d810]
    ecx = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_00456e4f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00456e51:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_00456e57:  // fmul dword ptr [0x5db4c8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4c8u)));
L_00456e5d:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00456e61:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00456e65:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00456e6b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00456e6e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00456e73:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456e75:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00456e77:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456e78:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456e79:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00456e7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00456e7c:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00456e81:  // push 0x43610000
    t0 = 0x43610000u; esp -= 4; M32(esp) = t0;
L_00456e86:  // push 0x438e8000
    t0 = 0x438e8000u; esp -= 4; M32(esp) = t0;
L_00456e8b:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456e90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456e90:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00456e93:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_00456e9a:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00456ea0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456ea2:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00456ea5:  // je 0x456eb6
    if (f.zf) goto L_00456eb6;
L_00456ea7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00456eac:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00456eb1:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456eb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456eb6:  // cmp edi, 7
    t0 = lsub<32>(edi, 0x7u, f);
L_00456eb9:  // jne 0x456ec5
    if (!f.zf) goto L_00456ec5;
L_00456ebb:  // mov edx, dword ptr [esp + 0x33c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x33cu)));
L_00456ec2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00456ec3:  // jmp 0x456ec9
    goto L_00456ec9;
L_00456ec5:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00456ec8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456ec9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00456ecb:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00456ed0:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456ed5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456ed5:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_00456edc:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00456ee2:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_00456ee8:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00456eee:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_00456ef2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456ef4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00456ef7:  // je 0x456f03
    if (f.zf) goto L_00456f03;
L_00456ef9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00456efb:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00456f01:  // jmp 0x456f18
    goto L_00456f18;
L_00456f03:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00456f09:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456f0b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00456f0e:  // jne 0x456f18
    if (!f.zf) goto L_00456f18;
L_00456f10:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00456f12:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00456f18:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00456f1e:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00456f20:  // mov ecx, dword ptr [0x672e18]
    ecx = (uint32_t)(M32((uint32_t)(0x672e18u)));
L_00456f26:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00456f27:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00456f29:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00456f2b:  // fmul dword ptr [0x5db4c4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4c4u)));
L_00456f31:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00456f35:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00456f37:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00456f3d:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00456f41:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00456f45:  // call 0x469550
    t0 = 0x00469550u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456f4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456f4a:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00456f4c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00456f4f:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_00456f52:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456f54:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00456f56:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00456f5a:  // fadd dword ptr [0x5db4c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4c0u)));
L_00456f60:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456f62:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00456f67:  // or edx, 0xffffff
    t0 = llog<32>(edx | 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00456f6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456f6e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00456f6f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00456f74:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00456f78:  // mov ebp, dword ptr [esp + 0x38]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00456f7c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00456f81:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00456f86:  // push 0x43150000
    t0 = 0x43150000u; esp -= 4; M32(esp) = t0;
L_00456f8b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00456f8c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456f8e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00456f93:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456f98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456f98:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00456f9a:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456f9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456f9f:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_00456fa3:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_00456fa6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456fa7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456fa9:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_00456fab:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_00456faf:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456fb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456fb4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00456fb7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00456fbc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456fbd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00456fbf:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456fc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456fc4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00456fc6:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456fcbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456fcb:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00456fcf:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00456fd2:  // jle 0x456fda
    if ((f.zf || f.sf != f.of)) goto L_00456fda;
L_00456fd4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00456fd6:  // mov dword ptr [esp + 0xc], esi
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(esi);
L_00456fda:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_00456fde:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00456fdf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456fe1:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_00456fe3:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456fe8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456fe8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00456feb:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00456ff0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456ff1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00456ff3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456ff8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456ff8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00456ffa:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456fffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456fff:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00457003:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00457005:  // jle 0x45700d
    if ((f.zf || f.sf != f.of)) goto L_0045700d;
L_00457007:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00457009:  // mov dword ptr [esp + 0xc], esi
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(esi);
L_0045700d:  // lea edx, [esp + 0x28]
    edx = (uint32_t)((uint32_t)(esp + 0x28u));
L_00457011:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457012:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457014:  // push 0x69
    t0 = 0x69u; esp -= 4; M32(esp) = t0;
L_00457016:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045701bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045701b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045701e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00457023:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457024:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457026:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045702bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045702b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045702d:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457032u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457032:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00457036:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00457038:  // jle 0x45703e
    if ((f.zf || f.sf != f.of)) goto L_0045703e;
L_0045703a:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_0045703e:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_00457042:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457044:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_00457046:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0045704c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00457050:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457055u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457055:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457056:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_0045705a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045705b:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457060u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457060:  // mov eax, dword ptr [0x83d97c]
    eax = (uint32_t)(M32((uint32_t)(0x83d97cu)));
L_00457065:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00457068:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0045706b:  // jne 0x45707f
    if (!f.zf) goto L_0045707f;
L_0045706d:  // push 0x6291c8
    t0 = 0x6291c8u; esp -= 4; M32(esp) = t0;
L_00457072:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457077u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457077:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0045707b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045707c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045707d:  // jmp 0x45708f
    goto L_0045708f;
L_0045707f:  // push 0x6291c4
    t0 = 0x6291c4u; esp -= 4; M32(esp) = t0;
L_00457084:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457089u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457089:  // lea edx, [esp + 0x3c]
    edx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0045708d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045708e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045708f:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457094u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457094:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00457097:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_0045709b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004570a0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004570a1:  // mov ebx, edi
    ebx = (uint32_t)(edi);
L_004570a3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004570a5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004570a7:  // or ebx, 0xffaf3f
    t0 = llog<32>(ebx | 0xffaf3fu, f);
    ebx = (uint32_t)(t0);
L_004570ad:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_004570b2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004570b3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004570b4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004570b9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004570be:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004570c3:  // push 0x43380000
    t0 = 0x43380000u; esp -= 4; M32(esp) = t0;
L_004570c8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004570c9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004570cb:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004570d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004570d0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004570d2:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004570d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004570d7:  // mov eax, dword ptr [0x672e1c]
    eax = (uint32_t)(M32((uint32_t)(0x672e1cu)));
L_004570dc:  // sub eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004570df:  // je 0x457108
    if (f.zf) goto L_00457108;
L_004570e1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004570e2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004570e4:  // je 0x4570f7
    if (f.zf) goto L_004570f7;
L_004570e6:  // push 0x67
    t0 = 0x67u; esp -= 4; M32(esp) = t0;
L_004570e8:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004570edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004570ed:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004570f0:  // mov ecx, 0xff3f3f3f
    ecx = (uint32_t)(0xff3f3f3fu);
L_004570f5:  // jmp 0x457119
    goto L_00457119;
L_004570f7:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_004570f9:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004570feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004570fe:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457101:  // mov ecx, 0xff3fff2f
    ecx = (uint32_t)(0xff3fff2fu);
L_00457106:  // jmp 0x457119
    goto L_00457119;
L_00457108:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045710a:  // push 0x66
    t0 = 0x66u; esp -= 4; M32(esp) = t0;
L_0045710c:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457111u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457111:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457114:  // mov ecx, 0xffff3f1f
    ecx = (uint32_t)(0xffff3f1fu);
L_00457119:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0045711d:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00457121:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457123:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00457129:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045712b:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00457130:  // fadd dword ptr [0x5db4c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4c0u)));
L_00457136:  // or ecx, edi
    t0 = llog<32>(ecx | edi, f);
    ecx = (uint32_t)(t0);
L_00457138:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457139:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045713a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045713f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457144:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00457149:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0045714d:  // mov ebp, dword ptr [esp + 0x30]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00457151:  // push 0x43380000
    t0 = 0x43380000u; esp -= 4; M32(esp) = t0;
L_00457156:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00457157:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457159:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045715e:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457163u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457163:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00457165:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045716au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045716a:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0045716d:  // mov dword ptr [esp + 0x18], 0x43520000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x43520000u);
L_00457175:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00457177:  // mov ecx, dword ptr [eax + 0x672d78]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x672d78u)));
L_0045717d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0045717f:  // je 0x457191
    if (f.zf) goto L_00457191;
L_00457181:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00457184:  // jne 0x45718f
    if (!f.zf) goto L_0045718f;
L_00457186:  // cmp esi, -1
    t0 = lsub<32>(esi, 0xffffffffu, f);
L_00457189:  // jne 0x457191
    if (!f.zf) goto L_00457191;
L_0045718b:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0045718d:  // jmp 0x457191
    goto L_00457191;
L_0045718f:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00457191:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00457194:  // cmp eax, 0x50
    t0 = lsub<32>(eax, 0x50u, f);
L_00457197:  // jl 0x457177
    if ((f.sf != f.of)) goto L_00457177;
L_00457199:  // cmp dword ptr [0x672e18], 0x1f4
    t0 = lsub<32>(M32((uint32_t)(0x672e18u)), 0x1f4u, f);
L_004571a3:  // jne 0x4571b5
    if (!f.zf) goto L_004571b5;
L_004571a5:  // cmp dword ptr [0x672e1c], 5
    t0 = lsub<32>(M32((uint32_t)(0x672e1cu)), 0x5u, f);
L_004571ac:  // jne 0x4571b5
    if (!f.zf) goto L_004571b5;
L_004571ae:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004571b3:  // jmp 0x4571be
    goto L_004571be;
L_004571b5:  // cmp esi, -1
    t0 = lsub<32>(esi, 0xffffffffu, f);
L_004571b8:  // je 0x4572ae
    if (f.zf) goto L_004572ae;
L_004571be:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004571c0:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_004571c2:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004571c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004571c7:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004571cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004571cc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004571cd:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004571d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004571d2:  // mov eax, dword ptr [0x83d97c]
    eax = (uint32_t)(M32((uint32_t)(0x83d97cu)));
L_004571d7:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004571da:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004571dd:  // jne 0x4571f1
    if (!f.zf) goto L_004571f1;
L_004571df:  // push 0x6291c8
    t0 = 0x6291c8u; esp -= 4; M32(esp) = t0;
L_004571e4:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004571e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004571e9:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004571ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004571ee:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004571ef:  // jmp 0x457201
    goto L_00457201;
L_004571f1:  // push 0x6291c4
    t0 = 0x6291c4u; esp -= 4; M32(esp) = t0;
L_004571f6:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004571fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004571fb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004571fc:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_00457200:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457201:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457206u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457206:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00457209:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0045720d:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00457211:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457213:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457215:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0045721a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045721b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045721c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457221:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457226:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0045722b:  // push 0x43520000
    t0 = 0x43520000u; esp -= 4; M32(esp) = t0;
L_00457230:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457231:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457233:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00457238:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045723du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045723d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045723f:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457244u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457244:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00457246:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457248:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00457249:  // je 0x45725c
    if (f.zf) goto L_0045725c;
L_0045724b:  // push 0x6b
    t0 = 0x6bu; esp -= 4; M32(esp) = t0;
L_0045724d:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457252u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457252:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457255:  // mov ecx, 0xffff3f1f
    ecx = (uint32_t)(0xffff3f1fu);
L_0045725a:  // jmp 0x45726b
    goto L_0045726b;
L_0045725c:  // push 0x6a
    t0 = 0x6au; esp -= 4; M32(esp) = t0;
L_0045725e:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457263u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457263:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457266:  // mov ecx, 0xff3fff2f
    ecx = (uint32_t)(0xff3fff2fu);
L_0045726b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045726d:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00457273:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457275:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0045727a:  // or ecx, edi
    t0 = llog<32>(ecx | edi, f);
    ecx = (uint32_t)(t0);
L_0045727c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045727d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045727e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457283:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457288:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0045728d:  // push 0x43520000
    t0 = 0x43520000u; esp -= 4; M32(esp) = t0;
L_00457292:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00457293:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457295:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045729a:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045729fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045729f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004572a1:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004572a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004572a6:  // mov dword ptr [esp + 0x18], 0x43620000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x43620000u);
L_004572ae:  // or ebp, 0xffffffff
    t0 = llog<32>(ebp | 0xffffffffu, f);
    ebp = (uint32_t)(t0);
L_004572b1:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004572b3:  // mov eax, dword ptr [ecx + 0x672dc8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x672dc8u)));
L_004572b9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004572bb:  // je 0x4572cd
    if (f.zf) goto L_004572cd;
L_004572bd:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004572c0:  // jne 0x4572cb
    if (!f.zf) goto L_004572cb;
L_004572c2:  // cmp ebp, -1
    t0 = lsub<32>(ebp, 0xffffffffu, f);
L_004572c5:  // jne 0x4572cd
    if (!f.zf) goto L_004572cd;
L_004572c7:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004572c9:  // jmp 0x4572cd
    goto L_004572cd;
L_004572cb:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004572cd:  // add ecx, 8
    t0 = ladd<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004572d0:  // cmp ecx, 0x50
    t0 = lsub<32>(ecx, 0x50u, f);
L_004572d3:  // jl 0x4572b3
    if ((f.sf != f.of)) goto L_004572b3;
L_004572d5:  // cmp ebp, -1
    t0 = lsub<32>(ebp, 0xffffffffu, f);
L_004572d8:  // je 0x4573c6
    if (f.zf) goto L_004573c6;
L_004572de:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004572e0:  // push 0x69
    t0 = 0x69u; esp -= 4; M32(esp) = t0;
L_004572e2:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004572e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004572e7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004572e8:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004572ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004572ed:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004572f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004572f2:  // mov eax, dword ptr [0x83d97c]
    eax = (uint32_t)(M32((uint32_t)(0x83d97cu)));
L_004572f7:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004572fa:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004572fd:  // jne 0x457311
    if (!f.zf) goto L_00457311;
L_004572ff:  // push 0x6291c8
    t0 = 0x6291c8u; esp -= 4; M32(esp) = t0;
L_00457304:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457309u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457309:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0045730d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045730e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045730f:  // jmp 0x457321
    goto L_00457321;
L_00457311:  // push 0x6291c4
    t0 = 0x6291c4u; esp -= 4; M32(esp) = t0;
L_00457316:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045731bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045731b:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0045731f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457320:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457321:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457326u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457326:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00457329:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0045732d:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00457331:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00457335:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457337:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457339:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0045733e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045733f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00457340:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457345:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045734a:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0045734f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00457350:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457351:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457353:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00457358:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045735du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045735d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045735f:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457364u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457364:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00457366:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457368:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00457369:  // je 0x45737c
    if (f.zf) goto L_0045737c;
L_0045736b:  // push 0x6b
    t0 = 0x6bu; esp -= 4; M32(esp) = t0;
L_0045736d:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457372u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457372:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457375:  // mov ecx, 0xffff3f1f
    ecx = (uint32_t)(0xffff3f1fu);
L_0045737a:  // jmp 0x45738b
    goto L_0045738b;
L_0045737c:  // push 0x6a
    t0 = 0x6au; esp -= 4; M32(esp) = t0;
L_0045737e:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457383u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457383:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457386:  // mov ecx, 0xff3fff2f
    ecx = (uint32_t)(0xff3fff2fu);
L_0045738b:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0045738f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457391:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00457397:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457399:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0045739e:  // or ecx, edi
    t0 = llog<32>(ecx | edi, f);
    ecx = (uint32_t)(t0);
L_004573a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004573a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004573a2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004573a7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004573ac:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004573b1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004573b2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004573b3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004573b5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004573ba:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004573bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004573bf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004573c1:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004573c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004573c6:  // mov eax, dword ptr [0x672e1c]
    eax = (uint32_t)(M32((uint32_t)(0x672e1cu)));
L_004573cb:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_004573d2:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_004573d5:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_004573dc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004573dd:  // jne 0x457c34
    if (!f.zf) goto L_00457c34;
L_004573e3:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_004573ea:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004573f0:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_004573f5:  // mov dword ptr [esp + 0x10], 0x3fa00000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3fa00000u);
L_004573fd:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_00457405:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457407:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045740a:  // je 0x4575c9
    if (f.zf) goto L_004575c9;
L_00457410:  // cmp dword ptr [esp + 0x340], 7
    t0 = lsub<32>(M32((uint32_t)(esp + 0x340u)), 0x7u, f);
L_00457418:  // je 0x457550
    if (f.zf) goto L_00457550;
L_0045741e:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_00457425:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_0045742b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045742d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00457430:  // je 0x457439
    if (f.zf) goto L_00457439;
L_00457432:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00457434:  // jmp 0x4575c9
    goto L_004575c9;
L_00457439:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_00457440:  // fcomp dword ptr [0x5d8cb4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cb4u)));
    lpop(x);
L_00457446:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_0045744d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045744f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00457452:  // je 0x4574cd
    if (f.zf) goto L_004574cd;
L_00457454:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_0045745a:  // fmul dword ptr [0x5db4bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4bcu)));
L_00457460:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00457466:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457468:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045746b:  // je 0x457477
    if (f.zf) goto L_00457477;
L_0045746d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045746f:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00457475:  // jmp 0x45748c
    goto L_0045748c;
L_00457477:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0045747d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045747f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00457482:  // jne 0x45748c
    if (!f.zf) goto L_0045748c;
L_00457484:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00457486:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0045748c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045748e:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00457494:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00457498:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0045749c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0045749e:  // jge 0x4574b1
    if ((f.sf == f.of)) goto L_004574b1;
L_004574a0:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004574a4:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_004574aa:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004574ac:  // jmp 0x4575c3
    goto L_004575c3;
L_004574b1:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_004574b7:  // jle 0x4574be
    if ((f.zf || f.sf != f.of)) goto L_004574be;
L_004574b9:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_004574be:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004574c2:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_004574c8:  // jmp 0x4575c3
    goto L_004575c3;
L_004574cd:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_004574d3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004574d5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004574d8:  // je 0x4574e7
    if (f.zf) goto L_004574e7;
L_004574da:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_004574e2:  // jmp 0x4575c9
    goto L_004575c9;
L_004574e7:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_004574ee:  // fcomp dword ptr [0x5d8bec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8becu)));
    lpop(x);
L_004574f4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004574f6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004574f9:  // je 0x4575c9
    if (f.zf) goto L_004575c9;
L_004574ff:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_00457506:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_0045750c:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_00457512:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00457518:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045751a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045751d:  // je 0x457529
    if (f.zf) goto L_00457529;
L_0045751f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00457521:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00457527:  // jmp 0x45753e
    goto L_0045753e;
L_00457529:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0045752f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457531:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00457534:  // jne 0x45753e
    if (!f.zf) goto L_0045753e;
L_00457536:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00457538:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0045753e:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_00457544:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0045754a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0045754e:  // jmp 0x4575c9
    goto L_004575c9;
L_00457550:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00457554:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0045755a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045755c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045755f:  // je 0x45756b
    if (f.zf) goto L_0045756b;
L_00457561:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00457563:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00457569:  // jmp 0x457580
    goto L_00457580;
L_0045756b:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00457571:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457573:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00457576:  // jne 0x457580
    if (!f.zf) goto L_00457580;
L_00457578:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045757a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00457580:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00457586:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0045758c:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0045758e:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00457594:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00457598:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0045759c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0045759e:  // jge 0x4575a4
    if ((f.sf == f.of)) goto L_004575a4;
L_004575a0:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004575a2:  // jmp 0x4575b1
    goto L_004575b1;
L_004575a4:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_004575aa:  // jle 0x4575b1
    if ((f.zf || f.sf != f.of)) goto L_004575b1;
L_004575ac:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_004575b1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004575b3:  // fmul dword ptr [0x5db4b4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b4u)));
L_004575b9:  // fadd dword ptr [0x5db4b0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4b0u)));
L_004575bf:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004575c3:  // fchs 
    ST(0) = -ST(0);
L_004575c5:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004575c9:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004575cd:  // fmul dword ptr [0x5db4ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4acu)));
L_004575d3:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004575d7:  // mov eax, dword ptr [0x89d8a0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a0u)));
L_004575dc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004575dd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004575e2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004575e4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004575e6:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004575ea:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004575ee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004575ef:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004575f0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004575f2:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_004575f5:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_004575f7:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004575fa:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_00457600:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457601:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457602:  // push 0x3eb33333
    t0 = 0x3eb33333u; esp -= 4; M32(esp) = t0;
L_00457607:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0045760c:  // call 0x468750
    t0 = 0x00468750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457611u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457611:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_00457617:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457618:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0045761d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00457620:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457625u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457625:  // fadd dword ptr [0x5db4a8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4a8u)));
L_0045762b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045762c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045762f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457634u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457634:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00457636:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0045763a:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0045763d:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0045763f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00457640:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00457643:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00457645:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045764a:  // not edx
    edx = (uint32_t)(~edx);
L_0045764c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045764e:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00457654:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00457656:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457657:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_00457659:  // mov eax, dword ptr [0x89d8a0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a0u)));
L_0045765e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045765f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457660:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457661:  // push 0x3e99999a
    t0 = 0x3e99999au; esp -= 4; M32(esp) = t0;
L_00457666:  // push 0x439b0000
    t0 = 0x439b0000u; esp -= 4; M32(esp) = t0;
L_0045766b:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00457670:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457675u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457675:  // fld dword ptr [esp + 0x394]
    lpush(x, (long double)F32((uint32_t)(esp + 0x394u)));
L_0045767c:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00457682:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00457685:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_0045768a:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_00457692:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457694:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00457697:  // je 0x45789d
    if (f.zf) goto L_0045789d;
L_0045769d:  // cmp dword ptr [esp + 0x340], 7
    t0 = lsub<32>(M32((uint32_t)(esp + 0x340u)), 0x7u, f);
L_004576a5:  // je 0x45789d
    if (f.zf) goto L_0045789d;
L_004576ab:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_004576b2:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_004576b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004576ba:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004576bd:  // jne 0x45789d
    if (!f.zf) goto L_0045789d;
L_004576c3:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_004576ca:  // fcomp dword ptr [0x5d8cb4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cb4u)));
    lpop(x);
L_004576d0:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_004576d7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004576d9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004576dc:  // je 0x457742
    if (f.zf) goto L_00457742;
L_004576de:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004576e4:  // fmul dword ptr [0x5db4bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4bcu)));
L_004576ea:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004576f0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004576f2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004576f5:  // je 0x457701
    if (f.zf) goto L_00457701;
L_004576f7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004576f9:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004576ff:  // jmp 0x457716
    goto L_00457716;
L_00457701:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00457707:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457709:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045770c:  // jne 0x457716
    if (!f.zf) goto L_00457716;
L_0045770e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00457710:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00457716:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00457718:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0045771e:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00457722:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00457726:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00457728:  // jge 0x457731
    if ((f.sf == f.of)) goto L_00457731;
L_0045772a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0045772c:  // jmp 0x4577de
    goto L_004577de;
L_00457731:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00457737:  // jle 0x4577de
    if ((f.zf || f.sf != f.of)) goto L_004577de;
L_0045773d:  // jmp 0x4577d9
    goto L_004577d9;
L_00457742:  // fcomp dword ptr [0x5d8bec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8becu)));
    lpop(x);
L_00457748:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045774a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045774d:  // je 0x45775c
    if (f.zf) goto L_0045775c;
L_0045774f:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_00457757:  // jmp 0x4577ee
    goto L_004577ee;
L_0045775c:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_00457763:  // fcomp dword ptr [0x5d8bb0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb0u)));
    lpop(x);
L_00457769:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045776b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045776e:  // je 0x45789d
    if (f.zf) goto L_0045789d;
L_00457774:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_0045777b:  // fsub dword ptr [0x5d8bec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8becu)));
L_00457781:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_00457787:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0045778d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045778f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00457792:  // je 0x45779e
    if (f.zf) goto L_0045779e;
L_00457794:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00457796:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0045779c:  // jmp 0x4577b3
    goto L_004577b3;
L_0045779e:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_004577a4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004577a6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004577a9:  // jne 0x4577b3
    if (!f.zf) goto L_004577b3;
L_004577ab:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004577ad:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004577b3:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_004577b9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004577bb:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004577c1:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004577c5:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004577c9:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004577cb:  // jge 0x4577d1
    if ((f.sf == f.of)) goto L_004577d1;
L_004577cd:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004577cf:  // jmp 0x4577de
    goto L_004577de;
L_004577d1:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_004577d7:  // jle 0x4577de
    if ((f.zf || f.sf != f.of)) goto L_004577de;
L_004577d9:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_004577de:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004577e2:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_004577e8:  // fchs 
    ST(0) = -ST(0);
L_004577ea:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004577ee:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004577f2:  // fmul dword ptr [0x5db4ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4acu)));
L_004577f8:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004577fc:  // mov eax, dword ptr [0x89d8a4]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a4u)));
L_00457801:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00457802:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457807:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457809:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045780b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0045780f:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00457813:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457814:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457815:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00457817:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0045781a:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0045781c:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0045781f:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_00457825:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457826:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457827:  // push 0x3eb33333
    t0 = 0x3eb33333u; esp -= 4; M32(esp) = t0;
L_0045782c:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00457831:  // call 0x468750
    t0 = 0x00468750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457836u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457836:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_0045783c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045783d:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00457842:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00457845:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045784au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045784a:  // fadd dword ptr [0x5db4a8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4a8u)));
L_00457850:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457851:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00457854:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457859u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457859:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0045785b:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0045785f:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00457862:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00457864:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00457865:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00457868:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0045786a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045786f:  // not edx
    edx = (uint32_t)(~edx);
L_00457871:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457873:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00457879:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045787b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045787c:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0045787e:  // mov eax, dword ptr [0x89d8a4]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a4u)));
L_00457883:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457884:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457885:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457886:  // push 0x3e99999a
    t0 = 0x3e99999au; esp -= 4; M32(esp) = t0;
L_0045788b:  // push 0x439b0000
    t0 = 0x439b0000u; esp -= 4; M32(esp) = t0;
L_00457890:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00457895:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045789au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045789a:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0045789d:  // cmp dword ptr [0x672e1c], 5
    t0 = lsub<32>(M32((uint32_t)(0x672e1cu)), 0x5u, f);
L_004578a4:  // jne 0x457c34
    if (!f.zf) goto L_00457c34;
L_004578aa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004578ac:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_004578ae:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004578b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004578b3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004578b6:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004578ba:  // shl esi, 0x18
    t0 = lshl<32>(esi, 0x18u, f);
    esi = (uint32_t)(t0);
L_004578bd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004578bf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004578c1:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_004578c6:  // or esi, 0xffffff
    t0 = llog<32>(esi | 0xffffffu, f);
    esi = (uint32_t)(t0);
L_004578cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004578cd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004578ce:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004578d3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004578d8:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004578dd:  // push 0x43938000
    t0 = 0x43938000u; esp -= 4; M32(esp) = t0;
L_004578e2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004578e3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004578e5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004578ea:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004578efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004578ef:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004578f1:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004578f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004578f6:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004578f8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004578fa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004578fc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457901:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00457908:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0045790f:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457914u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457914:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00457916:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00457918:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045791a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0045791f:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457924u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457924:  // mov edx, dword ptr [0x672e20]
    edx = (uint32_t)(M32((uint32_t)(0x672e20u)));
L_0045792a:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0045792f:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00457931:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00457935:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457936:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045793bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045793b:  // push 0x629184
    t0 = 0x629184u; esp -= 4; M32(esp) = t0;
L_00457940:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00457942:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457947u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457947:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045794a:  // cmp si, word ptr [eax]
    t0 = lsub<16>((esi & 0xffffu), M16((uint32_t)(eax)), f);
L_0045794d:  // jne 0x457957
    if (!f.zf) goto L_00457957;
L_0045794f:  // mov ebp, dword ptr [0x89d7c0]
    ebp = (uint32_t)(M32((uint32_t)(0x89d7c0u)));
L_00457955:  // jmp 0x45797b
    goto L_0045797b;
L_00457957:  // push 0x629180
    t0 = 0x629180u; esp -= 4; M32(esp) = t0;
L_0045795c:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457961u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457961:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00457963:  // and esi, 0xffff
    t0 = llog<32>(esi & 0xffffu, f);
    esi = (uint32_t)(t0);
L_00457969:  // mov cx, word ptr [eax]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax))) & 0xffffu);
L_0045796c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045796f:  // sub esi, ecx
    t0 = lsub<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_00457971:  // add esi, 7
    t0 = ladd<32>(esi, 0x7u, f);
    esi = (uint32_t)(t0);
L_00457974:  // mov ebp, dword ptr [esi*4 + 0x89d7a8]
    ebp = (uint32_t)(M32((uint32_t)(esi * 4u + 0x89d7a8u)));
L_0045797b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00457980:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457985u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457985:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00457989:  // fsub dword ptr [edx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edx + 0x4u)));
L_0045798c:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_00457990:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00457996:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457998:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045799b:  // jne 0x457c34
    if (!f.zf) goto L_00457c34;
L_004579a1:  // fld dword ptr [esp + 0x33c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x33cu)));
L_004579a8:  // fcomp dword ptr [0x5d8bc4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bc4u)));
    lpop(x);
L_004579ae:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004579b0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004579b3:  // jne 0x457c34
    if (!f.zf) goto L_00457c34;
L_004579b9:  // fld dword ptr [0x5d85ec]
    lpush(x, (long double)F32((uint32_t)(0x5d85ecu)));
L_004579bf:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_004579c3:  // mov dword ptr [esp + 0xc], 0xbf800000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0xbf800000u);
L_004579cb:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004579d1:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_004579d7:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004579db:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004579df:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004579e5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004579e7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004579ea:  // je 0x457a02
    if (f.zf) goto L_00457a02;
L_004579ec:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004579f2:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004579f6:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_004579fe:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00457a02:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00457a08:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_00457a0c:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00457a10:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457a12:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457a17:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457a19:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00457a1b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00457a1c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00457a1d:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00457a23:  // fistp qword ptr [esp + 0x48]
    M64((uint32_t)(esp + 0x48u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00457a27:  // mov esi, dword ptr [esp + 0x48]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00457a2b:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00457a2d:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00457a30:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00457a32:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00457a35:  // and eax, 0xff000000
    t0 = llog<32>(eax & 0xff000000u, f);
    eax = (uint32_t)(t0);
L_00457a3a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457a3b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00457a3c:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_00457a41:  // push 0x439c8000
    t0 = 0x439c8000u; esp -= 4; M32(esp) = t0;
L_00457a46:  // push 0x43a18000
    t0 = 0x43a18000u; esp -= 4; M32(esp) = t0;
L_00457a4b:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457a50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457a50:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00457a53:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457a58:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00457a5a:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00457a5c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457a61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457a61:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457a63:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457a65:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00457a6a:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457a6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457a6f:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00457a71:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457a73:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00457a76:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00457a78:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457a7d:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00457a80:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00457a82:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457a84:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00457a86:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00457a8c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00457a8e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00457a8f:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_00457a91:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00457a92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457a93:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00457a94:  // push 0x3f7fbe77
    t0 = 0x3f7fbe77u; esp -= 4; M32(esp) = t0;
L_00457a99:  // push 0x439b0000
    t0 = 0x439b0000u; esp -= 4; M32(esp) = t0;
L_00457a9e:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00457aa3:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457aa8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457aa8:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00457aab:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457ab0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00457ab2:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00457ab4:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457ab9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457ab9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457abb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457abd:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00457ac2:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457ac7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457ac7:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00457acb:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00457ad1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457ad3:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00457ad6:  // je 0x457bb2
    if (f.zf) goto L_00457bb2;
L_00457adc:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00457ae0:  // fld qword ptr [0x5db4a0]
    lpush(x, (long double)F64((uint32_t)(0x5db4a0u)));
L_00457ae6:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457aebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457aeb:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00457af1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457af3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00457af6:  // je 0x457bb2
    if (f.zf) goto L_00457bb2;
L_00457afc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457afe:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00457b00:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b05:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b0a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00457b0c:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00457b0e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b13:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b18:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457b1a:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00457b1c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b21:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b26u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b26:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00457b28:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00457b2a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b2f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b34:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00457b36:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00457b38:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b3d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b42:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457b44:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457b46:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457b48:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b4d:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b52:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00457b54:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00457b56:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457b58:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b5d:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b62:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00457b66:  // mov eax, dword ptr [0x89d7b8]
    eax = (uint32_t)(M32((uint32_t)(0x89d7b8u)));
L_00457b6b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457b6d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457b6e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00457b70:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00457b72:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457b77:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457b7c:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00457b7e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457b7f:  // push 0x3f7f7cee
    t0 = 0x3f7f7ceeu; esp -= 4; M32(esp) = t0;
L_00457b84:  // push 0x439b0000
    t0 = 0x439b0000u; esp -= 4; M32(esp) = t0;
L_00457b89:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00457b8e:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457b93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457b93:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00457b96:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457b9b:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00457b9d:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00457b9f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457ba4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457ba4:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00457ba6:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00457ba8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00457bad:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457bb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457bb2:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00457bb6:  // fcomp dword ptr [0x5d8cc0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cc0u)));
    lpop(x);
L_00457bbc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457bbe:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00457bc1:  // je 0x457c34
    if (f.zf) goto L_00457c34;
L_00457bc3:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00457bc7:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00457bcd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457bcf:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00457bd2:  // jne 0x457c34
    if (!f.zf) goto L_00457c34;
L_00457bd4:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00457bd8:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00457bda:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457bdc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00457be1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457be3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00457be5:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_00457be9:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00457beb:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00457bf1:  // fmul dword ptr [0x5d95b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d95b8u)));
L_00457bf7:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00457bfb:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00457bff:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00457c01:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00457c04:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00457c06:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00457c0a:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00457c0d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457c0e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457c0f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00457c11:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00457c13:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00457c19:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_00457c1b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457c1c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00457c1d:  // push 0x3ca3d70a
    t0 = 0x3ca3d70au; esp -= 4; M32(esp) = t0;
L_00457c22:  // push 0x439b0000
    t0 = 0x439b0000u; esp -= 4; M32(esp) = t0;
L_00457c27:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00457c2c:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457c31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457c31:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00457c34:  // fld dword ptr [0x672e20]
    lpush(x, (long double)F32((uint32_t)(0x672e20u)));
L_00457c3a:  // mov edx, dword ptr [0x672e24]
    edx = (uint32_t)(M32((uint32_t)(0x672e24u)));
L_00457c40:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457c43:  // lea eax, [esp + 0x240]
    eax = (uint32_t)((uint32_t)(esp + 0x240u));
L_00457c4a:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00457c4d:  // fld dword ptr [0x672e28]
    lpush(x, (long double)F32((uint32_t)(0x672e28u)));
L_00457c53:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457c56:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00457c59:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457c5a:  // push 0x629188
    t0 = 0x629188u; esp -= 4; M32(esp) = t0;
L_00457c5f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457c60:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457c65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457c65:  // lea ecx, [esp + 0x254]
    ecx = (uint32_t)((uint32_t)(esp + 0x254u));
L_00457c6c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00457c6d:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457c72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457c72:  // fld dword ptr [esp + 0x35c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x35cu)));
L_00457c79:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00457c7f:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00457c82:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00457c83:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00457c84:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00457c86:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00457c87:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00457c8a:  // je 0x457cb0
    if (f.zf) goto L_00457cb0;
L_00457c8c:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_00457c91:  // call 0x44dea0
    t0 = 0x0044dea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457c96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457c96:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00457c98:  // jne 0x457cb0
    if (!f.zf) goto L_00457cb0;
L_00457c9a:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_00457c9c:  // push 0x43f00000
    t0 = 0x43f00000u; esp -= 4; M32(esp) = t0;
L_00457ca1:  // push 0x44200000
    t0 = 0x44200000u; esp -= 4; M32(esp) = t0;
L_00457ca6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457ca7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457ca8:  // call 0x523bc0
    t0 = 0x00523bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457cadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457cad:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00457cb0:  // mov edx, dword ptr [esp + 0x334]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x334u)));
L_00457cb7:  // mov eax, dword ptr [esp + 0x330]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x330u)));
L_00457cbe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00457cbf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457cc0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00457cc2:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_00457cc4:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00457ccb:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00457cd2:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457cd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457cd7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00457cda:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00457cdf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00457ce0:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00457ce5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00457ce5:  // add esp, 0x32c
    t0 = ladd<32>(esp, 0x32cu, f);
    esp = (uint32_t)(t0);
L_00457ceb:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00456dd0, 00456dd0)
