// lifted from 00485d50 (FUN_00485d50, 3042 bytes, 793 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00485d50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00485d50;
L_00485d50:  // sub esp, 0x1c
    t0 = lsub<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00485d53:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00485d54:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00485d55:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00485d56:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00485d58:  // call 0x482090
    t0 = 0x00482090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485d5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485d5d:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00485d60:  // call 0x40dc90
    t0 = 0x0040dc90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485d65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485d65:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485d67:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_00485d6c:  // jle 0x4861b5
    if ((f.zf || f.sf != f.of)) goto L_004861b5;
L_00485d72:  // mov eax, dword ptr [0x8aa530]
    eax = (uint32_t)(M32((uint32_t)(0x8aa530u)));
L_00485d77:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00485d78:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_00485d7b:  // je 0x486026
    if (f.zf) goto L_00486026;
L_00485d81:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00485d82:  // je 0x485d98
    if (f.zf) goto L_00485d98;
L_00485d84:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00485d85:  // jne 0x486026
    if (!f.zf) goto L_00486026;
L_00485d8b:  // mov eax, dword ptr [0x8aa534]
    eax = (uint32_t)(M32((uint32_t)(0x8aa534u)));
L_00485d90:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485d92:  // je 0x486026
    if (f.zf) goto L_00486026;
L_00485d98:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00485d9d:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485da2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485da2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485da4:  // je 0x485dc2
    if (f.zf) goto L_00485dc2;
L_00485da6:  // mov eax, dword ptr [esi + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00485da9:  // fld dword ptr [0x8aa4fc]
    lpush(x, (long double)F32((uint32_t)(0x8aa4fcu)));
L_00485daf:  // mov ecx, dword ptr [eax + 0x574]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x574u)));
L_00485db5:  // fsub dword ptr [0x5dbb74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbb74u)));
L_00485dbb:  // cmp dword ptr [ecx + 0x2c], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x2cu)), ebx, f);
L_00485dbe:  // je 0x485dd4
    if (f.zf) goto L_00485dd4;
L_00485dc0:  // jmp 0x485dce
    goto L_00485dce;
L_00485dc2:  // fld dword ptr [0x8aa4fc]
    lpush(x, (long double)F32((uint32_t)(0x8aa4fcu)));
L_00485dc8:  // fsub dword ptr [0x5dbb74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbb74u)));
L_00485dce:  // fsub dword ptr [0x67a62c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a62cu)));
L_00485dd4:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00485dd6:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00485dd8:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00485ddc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00485de1:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485de6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485de6:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00485de8:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00485dea:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00485def:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485df4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485df4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485df6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485df8:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00485dfd:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485e02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485e02:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00485e08:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485e0d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e0f:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485e15:  // mov edx, dword ptr [esi + 0x130]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x130u)));
L_00485e1b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485e20:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e22:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00485e26:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485e2b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485e30:  // fadd dword ptr [0x5dbe90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe90u)));
L_00485e36:  // push 0x5f000000
    t0 = 0x5f000000u; esp -= 4; M32(esp) = t0;
L_00485e3b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e3d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485e42:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e44:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e46:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00485e47:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00485e4c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00485e4d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00485e4e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00485e51:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485e56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485e56:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00485e59:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00485e5e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00485e60:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00485e62:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485e67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485e67:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00485e69:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00485e6b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00485e70:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485e75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485e75:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e77:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e79:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00485e7e:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485e83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485e83:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00485e89:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485e8e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485e90:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485e96:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_00485e9c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485ea1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485ea3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485ea8:  // fadd dword ptr [0x5dbe90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe90u)));
L_00485eae:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485eb3:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_00485eb8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485eba:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485ebf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485ec1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485ec3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00485ec4:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00485ec9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00485eca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00485ecb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00485ece:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485ed3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485ed3:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00485ed6:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00485ed9:  // call 0x40c590
    t0 = 0x0040c590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485edeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485ede:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_00485ee1:  // je 0x485efd
    if (f.zf) goto L_00485efd;
L_00485ee3:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00485ee4:  // je 0x485ef5
    if (f.zf) goto L_00485ef5;
L_00485ee6:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00485ee7:  // je 0x485eed
    if (f.zf) goto L_00485eed;
L_00485ee9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00485eeb:  // jmp 0x485f03
    goto L_00485f03;
L_00485eed:  // mov eax, dword ptr [esi + 0x138]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_00485ef3:  // jmp 0x485f03
    goto L_00485f03;
L_00485ef5:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00485efb:  // jmp 0x485f03
    goto L_00485f03;
L_00485efd:  // mov eax, dword ptr [esi + 0x140]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x140u)));
L_00485f03:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00485f09:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_00485f0f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485f14:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485f16:  // mov ebp, 0xff7f3f2f
    ebp = (uint32_t)(0xff7f3f2fu);
L_00485f1b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485f20:  // fsin 
    ST(0) = lfsin(ST(0));
L_00485f22:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485f24:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485f29:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485f2e:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00485f34:  // fmul dword ptr [0x5db4ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4ecu)));
L_00485f3a:  // fistp qword ptr [esp + 0x34]
    M64((uint32_t)(esp + 0x34u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00485f3e:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00485f42:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00485f45:  // sub ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_00485f47:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00485f48:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485f4a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485f4f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485f51:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485f53:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485f55:  // je 0x485f5d
    if (f.zf) goto L_00485f5d;
L_00485f57:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00485f58:  // jmp 0x486002
    goto L_00486002;
L_00485f5d:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00485f63:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485f69:  // mov edx, dword ptr [esi + 0x140]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x140u)));
L_00485f6f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00485f70:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00485f75:  // fadd dword ptr [0x5dbe90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe90u)));
L_00485f7b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00485f7c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00485f7d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00485f80:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485f85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485f85:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00485f88:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00485f8e:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00485f94:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485f99:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485f9b:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485fa1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485fa6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485fa8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485fad:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485fb2:  // fadd dword ptr [0x5dbe90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe90u)));
L_00485fb8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00485fb9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485fbb:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485fc0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485fc2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485fc4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00485fc5:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00485fca:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00485fcb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00485fcc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00485fcf:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485fd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485fd4:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00485fd7:  // mov ecx, dword ptr [esi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_00485fdd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485fe2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485fe4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485fe9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485feb:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485ff0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485ff5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00485ff6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485ff8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00485ffd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485fff:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486001:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486002:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00486008:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_0048600e:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00486013:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00486014:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486015:  // fadd dword ptr [0x5dbe90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe90u)));
L_0048601b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048601e:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486023u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486023:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00486026:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00486028:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0048602a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048602f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486034u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486034:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00486036:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00486038:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048603d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486042u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486042:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486044:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486046:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0048604b:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486050u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486050:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486053:  // fld dword ptr [ecx + 0x584]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x584u)));
L_00486059:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_0048605f:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_00486065:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00486069:  // call 0x40c550
    t0 = 0x0040c550u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048606eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048606e:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00486070:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00486071:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00486073:  // je 0x486104
    if (f.zf) goto L_00486104;
L_00486079:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0048607e:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486083u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486083:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486085:  // je 0x4860a3
    if (f.zf) goto L_004860a3;
L_00486087:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0048608a:  // fld dword ptr [0x8aa4fc]
    lpush(x, (long double)F32((uint32_t)(0x8aa4fcu)));
L_00486090:  // mov eax, dword ptr [edx + 0x574]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x574u)));
L_00486096:  // fsub dword ptr [0x5d8ba4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8ba4u)));
L_0048609c:  // cmp dword ptr [eax + 0x2c], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x2cu)), ebx, f);
L_0048609f:  // je 0x4860b5
    if (f.zf) goto L_004860b5;
L_004860a1:  // jmp 0x4860af
    goto L_004860af;
L_004860a3:  // fld dword ptr [0x8aa4fc]
    lpush(x, (long double)F32((uint32_t)(0x8aa4fcu)));
L_004860a9:  // fsub dword ptr [0x5d8ba4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8ba4u)));
L_004860af:  // fsub dword ptr [0x67a62c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a62cu)));
L_004860b5:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004860b9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004860bb:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004860bf:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_004860c5:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_004860cb:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004860cf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004860d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004860d1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004860d2:  // fadd dword ptr [0x5dbe8c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe8cu)));
L_004860d8:  // push 0xffff6040
    t0 = 0xffff6040u; esp -= 4; M32(esp) = t0;
L_004860dd:  // push 0x3f19999a
    t0 = 0x3f19999au; esp -= 4; M32(esp) = t0;
L_004860e2:  // push 0x3f19999a
    t0 = 0x3f19999au; esp -= 4; M32(esp) = t0;
L_004860e7:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_004860ec:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004860ed:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004860ee:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004860f1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004860f3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004860f8:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004860fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004860fd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004860ff:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486104u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486104:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00486109:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048610eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048610e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486110:  // je 0x4861b5
    if (f.zf) goto L_004861b5;
L_00486116:  // mov eax, dword ptr [esi + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486119:  // mov ecx, dword ptr [eax + 0x574]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x574u)));
L_0048611f:  // mov eax, dword ptr [ecx + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x2cu)));
L_00486122:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00486127:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486128:  // call 0x4725f0
    t0 = 0x004725f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048612du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048612d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048612f:  // jl 0x4861b5
    if ((f.sf != f.of)) goto L_004861b5;
L_00486135:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486138:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_0048613b:  // mov ecx, dword ptr [edx + 0x574]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x574u)));
L_00486141:  // fsub dword ptr [0x5db3a0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db3a0u)));
L_00486147:  // cmp dword ptr [ecx + 0x2c], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x2cu)), ebx, f);
L_0048614a:  // je 0x486152
    if (f.zf) goto L_00486152;
L_0048614c:  // fsub dword ptr [0x67a62c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a62cu)));
L_00486152:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486153:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00486157:  // push 0x62d34c
    t0 = 0x62d34cu; esp -= 4; M32(esp) = t0;
L_0048615c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048615d:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00486161:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486166u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486166:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0048616a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048616b:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486170u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486170:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00486173:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00486177:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0048617a:  // fadd dword ptr [0x5dbe88]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe88u)));
L_00486180:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486182:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00486183:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_00486188:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486189:  // push 0xff00ff00
    t0 = 0xff00ff00u; esp -= 4; M32(esp) = t0;
L_0048618e:  // push 0x3f4ccccd
    t0 = 0x3f4ccccdu; esp -= 4; M32(esp) = t0;
L_00486193:  // push 0x3f4ccccd
    t0 = 0x3f4ccccdu; esp -= 4; M32(esp) = t0;
L_00486198:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_0048619d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048619e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048619f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004861a2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004861a4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004861a9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004861aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004861ae:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004861b0:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004861b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004861b5:  // cmp dword ptr [0x8a9ac0], 3
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac0u)), 0x3u, f);
L_004861bc:  // jg 0x48692b
    if ((!f.zf && f.sf == f.of)) goto L_0048692b;
L_004861c2:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_004861c5:  // mov dword ptr [esp + 0x10], 0x4479c000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x4479c000u);
L_004861cd:  // mov edi, dword ptr [edx + 0x2b8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x2b8u)));
L_004861d3:  // mov eax, dword ptr [edi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x28u)));
L_004861d6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004861d8:  // je 0x48627e
    if (f.zf) goto L_0048627e;
L_004861de:  // mov ecx, dword ptr [esi + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004861e4:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004861e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004861e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004861ea:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004861ec:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004861f1:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004861f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004861f6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004861f8:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004861fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004861fd:  // fld dword ptr [edi + 0x30]
    lpush(x, (long double)F32((uint32_t)(edi + 0x30u)));
L_00486200:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_00486206:  // mov eax, dword ptr [esi + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_0048620c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048620e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048620f:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00486215:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00486219:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048621d:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_00486223:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_00486229:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048622a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048622b:  // push 0xffff3020
    t0 = 0xffff3020u; esp -= 4; M32(esp) = t0;
L_00486230:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486235:  // fsub dword ptr [0x5dbe84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe84u)));
L_0048623b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486240:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00486245:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486246:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486249:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_0048624f:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486255:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486256:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048625b:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00486261:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_00486265:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0048626b:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0048626d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486270:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486272:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486277u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486277:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00486279:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048627eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048627e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00486282:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_00486288:  // mov dword ptr [esp + 0x14], 0x4479c000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x4479c000u);
L_00486290:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486292:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486295:  // je 0x4862ac
    if (f.zf) goto L_004862ac;
L_00486297:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048629b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004862a1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004862a3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004862a6:  // je 0x48635a
    if (f.zf) goto L_0048635a;
L_004862ac:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_004862af:  // call 0x40dda0
    t0 = 0x0040dda0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004862b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004862b4:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_004862b7:  // mov eax, dword ptr [esi + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_004862bd:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004862c1:  // fld dword ptr [ecx + 0x2e8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x2e8u)));
L_004862c7:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_004862cd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004862ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004862cf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004862d1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004862d6:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004862dc:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004862e0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004862e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004862e5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004862e7:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004862ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004862ec:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004862f0:  // mov edx, dword ptr [esi + 0xb8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_004862f6:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_004862fc:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_00486302:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486304:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00486305:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486306:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486307:  // fsub dword ptr [0x5dbe84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe84u)));
L_0048630d:  // push 0xffff3020
    t0 = 0xffff3020u; esp -= 4; M32(esp) = t0;
L_00486312:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486317:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048631c:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00486321:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486322:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486325:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_0048632b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486331:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486332:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486337:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_0048633d:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_00486341:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486347:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00486349:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048634c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048634e:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486353u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486353:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00486355:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048635au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048635a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048635e:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_00486364:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486366:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486369:  // je 0x486380
    if (f.zf) goto L_00486380;
L_0048636b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048636f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00486375:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486377:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048637a:  // je 0x48644c
    if (f.zf) goto L_0048644c;
L_00486380:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00486384:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_0048638a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048638c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048638f:  // je 0x4863a6
    if (f.zf) goto L_004863a6;
L_00486391:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00486395:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048639b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048639d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004863a0:  // je 0x48644c
    if (f.zf) goto L_0048644c;
L_004863a6:  // mov eax, dword ptr [esi + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_004863a9:  // mov edx, dword ptr [esi + 0xbc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xbcu)));
L_004863af:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004863b3:  // fld dword ptr [eax + 0x30c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x30cu)));
L_004863b9:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_004863bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004863c0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004863c1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004863c3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004863c8:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004863ce:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004863d2:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004863d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004863d7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004863d9:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004863deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004863de:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004863e2:  // mov ecx, dword ptr [esi + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xbcu)));
L_004863e8:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_004863ee:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_004863f4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004863f6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004863f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004863f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004863f9:  // fsub dword ptr [0x5dbe84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe84u)));
L_004863ff:  // push 0xff30ff20
    t0 = 0xff30ff20u; esp -= 4; M32(esp) = t0;
L_00486404:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486409:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048640e:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00486413:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486414:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486417:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_0048641d:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486423:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486424:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486429:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_0048642f:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_00486433:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486439:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0048643b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048643e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486440:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486445u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486445:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00486447:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048644cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048644c:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0048644f:  // mov ecx, dword ptr [esi + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_00486455:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_00486459:  // fld dword ptr [edx + 0x2e0]
    lpush(x, (long double)F32((uint32_t)(edx + 0x2e0u)));
L_0048645f:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_00486465:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486466:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486467:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486469:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048646e:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00486474:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00486478:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048647du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048647d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048647f:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486484u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486484:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00486488:  // mov eax, dword ptr [esi + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_0048648e:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_00486494:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_0048649a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048649c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048649d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048649e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048649f:  // fsub dword ptr [0x5db4d0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db4d0u)));
L_004864a5:  // push 0xffff3020
    t0 = 0xffff3020u; esp -= 4; M32(esp) = t0;
L_004864aa:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004864af:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004864b4:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_004864b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004864ba:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004864bd:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_004864c3:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004864c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004864ca:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004864cf:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_004864d5:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_004864d9:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004864df:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004864e1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004864e4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004864e6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004864ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004864eb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004864ed:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004864f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004864f2:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004864f6:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004864fc:  // mov dword ptr [esp + 0x10], 0x4479c000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x4479c000u);
L_00486504:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486506:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486509:  // je 0x486520
    if (f.zf) goto L_00486520;
L_0048650b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0048650f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00486515:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486517:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048651a:  // je 0x4865c6
    if (f.zf) goto L_004865c6;
L_00486520:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486523:  // mov eax, dword ptr [esi + 0xc8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xc8u)));
L_00486529:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0048652d:  // fld dword ptr [ecx + 0x2e4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x2e4u)));
L_00486533:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_00486539:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048653a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048653b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048653d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486542:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00486548:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0048654c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486551u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486551:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00486553:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486558u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486558:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048655c:  // mov edx, dword ptr [esi + 0xc8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xc8u)));
L_00486562:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_00486568:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_0048656e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486570:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00486571:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486572:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486573:  // fsub dword ptr [0x5db4d0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db4d0u)));
L_00486579:  // push 0xff30ff20
    t0 = 0xff30ff20u; esp -= 4; M32(esp) = t0;
L_0048657e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486583:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486588:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_0048658d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048658e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486591:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_00486597:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0048659d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048659e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004865a3:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_004865a9:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_004865ad:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004865b3:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004865b5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004865b8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004865ba:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004865bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004865bf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004865c1:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004865c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004865c6:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004865ca:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004865d0:  // mov dword ptr [esp + 0x14], 0x4479c000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x4479c000u);
L_004865d8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004865da:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004865dd:  // je 0x4865f4
    if (f.zf) goto L_004865f4;
L_004865df:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004865e3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004865e9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004865eb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004865ee:  // je 0x4866c0
    if (f.zf) goto L_004866c0;
L_004865f4:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004865f8:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004865fe:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486600:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486603:  // je 0x48661a
    if (f.zf) goto L_0048661a;
L_00486605:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00486609:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048660f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486611:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486614:  // je 0x4866c0
    if (f.zf) goto L_004866c0;
L_0048661a:  // mov eax, dword ptr [esi + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0048661d:  // mov edx, dword ptr [esi + 0xc0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xc0u)));
L_00486623:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00486627:  // fld dword ptr [eax + 0x308]
    lpush(x, (long double)F32((uint32_t)(eax + 0x308u)));
L_0048662d:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_00486633:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486634:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486635:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486637:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048663c:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00486642:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00486646:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048664bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048664b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048664d:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486652u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486652:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00486656:  // mov ecx, dword ptr [esi + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xc0u)));
L_0048665c:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_00486662:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_00486668:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048666a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048666b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048666c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048666d:  // fsub dword ptr [0x5db4d0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db4d0u)));
L_00486673:  // push 0xffff3020
    t0 = 0xffff3020u; esp -= 4; M32(esp) = t0;
L_00486678:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048667d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486682:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00486687:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486688:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048668b:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_00486691:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486697:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486698:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048669d:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_004866a3:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_004866a7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004866ad:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004866af:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004866b2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004866b4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004866b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004866b9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004866bb:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004866c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004866c0:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004866c4:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004866ca:  // mov dword ptr [esp + 0x18], 0x4479c000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x4479c000u);
L_004866d2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004866d4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004866d7:  // je 0x4866ee
    if (f.zf) goto L_004866ee;
L_004866d9:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004866dd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004866e3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004866e5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004866e8:  // je 0x4867e0
    if (f.zf) goto L_004867e0;
L_004866ee:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004866f2:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004866f8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004866fa:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004866fd:  // je 0x486714
    if (f.zf) goto L_00486714;
L_004866ff:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00486703:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00486709:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048670b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048670e:  // je 0x4867e0
    if (f.zf) goto L_004867e0;
L_00486714:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00486718:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_0048671e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486720:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486723:  // je 0x48673a
    if (f.zf) goto L_0048673a;
L_00486725:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00486729:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048672f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486731:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486734:  // je 0x4867e0
    if (f.zf) goto L_004867e0;
L_0048673a:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0048673d:  // mov ecx, dword ptr [esi + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xccu)));
L_00486743:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_00486747:  // fld dword ptr [edx + 0x608]
    lpush(x, (long double)F32((uint32_t)(edx + 0x608u)));
L_0048674d:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_00486753:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486754:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486755:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486757:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048675c:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00486762:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00486766:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048676bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048676b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048676d:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486772u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486772:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00486776:  // mov eax, dword ptr [esi + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xccu)));
L_0048677c:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_00486782:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_00486788:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048678a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048678b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048678c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048678d:  // fsub dword ptr [0x5db4d0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db4d0u)));
L_00486793:  // push 0xffff3020
    t0 = 0xffff3020u; esp -= 4; M32(esp) = t0;
L_00486798:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048679d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004867a2:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_004867a7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004867a8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004867ab:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_004867b1:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004867b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004867b8:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004867bd:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_004867c3:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_004867c7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004867cd:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004867cf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004867d2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004867d4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004867d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004867d9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004867db:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004867e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004867e0:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004867e4:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004867ea:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004867ec:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004867ef:  // je 0x486806
    if (f.zf) goto L_00486806;
L_004867f1:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004867f5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004867fb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004867fd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486800:  // je 0x48691e
    if (f.zf) goto L_0048691e;
L_00486806:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048680a:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_00486810:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486812:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486815:  // je 0x48682c
    if (f.zf) goto L_0048682c;
L_00486817:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048681b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00486821:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486823:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486826:  // je 0x48691e
    if (f.zf) goto L_0048691e;
L_0048682c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00486830:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_00486836:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486838:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048683b:  // je 0x486852
    if (f.zf) goto L_00486852;
L_0048683d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00486841:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00486847:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486849:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048684c:  // je 0x48691e
    if (f.zf) goto L_0048691e;
L_00486852:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00486856:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_0048685c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048685e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486861:  // je 0x486878
    if (f.zf) goto L_00486878;
L_00486863:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00486867:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048686d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048686f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486872:  // je 0x48691e
    if (f.zf) goto L_0048691e;
L_00486878:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0048687b:  // mov eax, dword ptr [esi + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xd0u)));
L_00486881:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00486885:  // fld dword ptr [ecx + 0x60c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x60cu)));
L_0048688b:  // fsubr dword ptr [0x672fd0]
    ST(0) = ((long double)F32((uint32_t)(0x672fd0u))) - (ST(0));
L_00486891:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486892:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486893:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486895:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048689a:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004868a0:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004868a4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004868a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004868a9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004868ab:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004868b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004868b0:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004868b4:  // mov edx, dword ptr [esi + 0xd0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xd0u)));
L_004868ba:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_004868c0:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_004868c6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004868c8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004868c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004868ca:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004868cb:  // fsub dword ptr [0x5db4d0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db4d0u)));
L_004868d1:  // push 0xffff3020
    t0 = 0xffff3020u; esp -= 4; M32(esp) = t0;
L_004868d6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004868db:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004868e0:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_004868e5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004868e6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004868e9:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_004868ef:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004868f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004868f6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004868fb:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00486901:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_00486905:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0048690b:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0048690d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486910:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486912:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486917u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486917:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00486919:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048691eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048691e:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00486925:  // mov byte ptr [0x9c690d], bl
    M8((uint32_t)(0x9c690du)) = (uint8_t)((ebx & 0xffu));
L_0048692b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048692c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048692d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048692e:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00486931:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00485d50, 00485d50)
