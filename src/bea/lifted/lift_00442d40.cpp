// lifted from 00442d40 (vslot9, 532 bytes, 169 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00442d40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00442d40;
L_00442d40:  // sub esp, 0x6c
    t0 = lsub<32>(esp, 0x6cu, f);
    esp = (uint32_t)(t0);
L_00442d43:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00442d44:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00442d45:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00442d47:  // mov eax, dword ptr [edi + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00442d4a:  // mov ecx, dword ptr [eax + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_00442d4d:  // mov ecx, dword ptr [ecx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x30u)));
L_00442d50:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00442d52:  // jne 0x442d58
    if (!f.zf) goto L_00442d58;
L_00442d54:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00442d56:  // jmp 0x442d71
    goto L_00442d71;
L_00442d58:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00442d5a:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442d5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442d5d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00442d5f:  // jne 0x442d65
    if (!f.zf) goto L_00442d65;
L_00442d61:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00442d63:  // jmp 0x442d71
    goto L_00442d71;
L_00442d65:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00442d68:  // mov edx, dword ptr [eax + 0x160]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_00442d6e:  // mov esi, dword ptr [edx + ecx*4]
    esi = (uint32_t)(M32((uint32_t)(edx + ecx * 4u)));
L_00442d71:  // mov eax, dword ptr [edi + 0x38]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x38u)));
L_00442d74:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00442d76:  // jne 0x442f27
    if (!f.zf) goto L_00442f27;
L_00442d7c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00442d7e:  // je 0x442f27
    if (f.zf) goto L_00442f27;
L_00442d84:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00442d8a:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442d8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442d8f:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00442d90:  // mov ecx, 0x3c
    ecx = (uint32_t)(0x3cu);
L_00442d95:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00442d97:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_00442d9a:  // jne 0x442f27
    if (!f.zf) goto L_00442f27;
L_00442da0:  // mov edx, dword ptr [edi + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00442da3:  // mov eax, dword ptr [edx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x10u)));
L_00442da6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00442da8:  // je 0x442daf
    if (f.zf) goto L_00442daf;
L_00442daa:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00442dad:  // jmp 0x442db1
    goto L_00442db1;
L_00442daf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00442db1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00442db3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00442db5:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00442db9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00442dbb:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00442dbf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00442dc0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00442dc1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00442dc2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00442dc4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00442dc6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00442dc8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00442dca:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442dcfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442dcf:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00442dd5:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442ddau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442dda:  // mov ecx, dword ptr [esi + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xfcu)));
L_00442de0:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00442de5:  // jns 0x442dee
    if (!f.sf) goto L_00442dee;
L_00442de7:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00442de8:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00442ded:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00442dee:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_00442df2:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00442df6:  // fmul dword ptr [ecx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x10u)));
L_00442df9:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_00442dff:  // fsub dword ptr [ecx + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x10u)));
L_00442e02:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00442e08:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00442e0c:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442e11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442e11:  // mov ecx, dword ptr [esi + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xfcu)));
L_00442e17:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00442e1c:  // jns 0x442e25
    if (!f.sf) goto L_00442e25;
L_00442e1e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00442e1f:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00442e24:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00442e25:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_00442e29:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00442e2d:  // fmul dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x14u)));
L_00442e30:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_00442e36:  // fsub dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x14u)));
L_00442e39:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00442e3f:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00442e43:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442e48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442e48:  // mov ecx, dword ptr [esi + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xfcu)));
L_00442e4e:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00442e53:  // jns 0x442e5c
    if (!f.sf) goto L_00442e5c;
L_00442e55:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00442e56:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00442e5b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00442e5c:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_00442e60:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00442e63:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00442e67:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00442e69:  // fmul dword ptr [ecx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x18u)));
L_00442e6c:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_00442e72:  // fsub dword ptr [ecx + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x18u)));
L_00442e75:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00442e79:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_00442e7b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00442e7f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00442e83:  // fadd dword ptr [ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x4u)));
L_00442e86:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00442e8a:  // fadd dword ptr [ecx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x8u)));
L_00442e8d:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00442e91:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00442e93:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00442e97:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00442e9b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442e9d:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00442ea1:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00442ea5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442ea7:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00442eab:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00442eaf:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00442eb1:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00442eb5:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00442eb9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442ebb:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00442ebf:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00442ec3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442ec5:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00442ec9:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_00442ecd:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_00442ed1:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00442ed5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442ed7:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_00442edb:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00442edf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442ee1:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00442ee5:  // fadd dword ptr [esp + 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x44u)));
L_00442ee9:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00442eed:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00442ef1:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00442ef5:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00442ef9:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00442efb:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00442eff:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00442f03:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00442f07:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00442f09:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00442f0c:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00442f10:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00442f14:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00442f18:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00442f1b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00442f1d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00442f1f:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00442f22:  // call 0x442710
    t0 = 0x00442710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442f27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442f27:  // mov esi, dword ptr [edi + 0x24]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_00442f2a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00442f2c:  // je 0x442f32
    if (f.zf) goto L_00442f32;
L_00442f2e:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00442f30:  // jmp 0x442f34
    goto L_00442f34;
L_00442f32:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00442f34:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00442f36:  // je 0x442f4e
    if (f.zf) goto L_00442f4e;
L_00442f38:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00442f3a:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442f3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442f3d:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00442f40:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00442f42:  // je 0x442f48
    if (f.zf) goto L_00442f48;
L_00442f44:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00442f46:  // jmp 0x442f4a
    goto L_00442f4a;
L_00442f48:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00442f4a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00442f4c:  // jne 0x442f38
    if (!f.zf) goto L_00442f38;
L_00442f4e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00442f4f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00442f50:  // add esp, 0x6c
    t0 = ladd<32>(esp, 0x6cu, f);
    esp = (uint32_t)(t0);
L_00442f53:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00442d40, 00442d40)
