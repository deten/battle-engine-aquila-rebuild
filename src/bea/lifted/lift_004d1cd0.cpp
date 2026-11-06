// lifted from 004d1cd0 (vslot66, 565 bytes, 172 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d1cd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d1cd0;
L_004d1cd0:  // sub esp, 0x54
    t0 = lsub<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_004d1cd3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d1cd4:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004d1cd6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d1cd7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d1cd8:  // mov al, byte ptr [ebx + 0x2c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x2cu))) & 0xffu);
L_004d1cdb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d1cdc:  // test al, 4
    t0 = llog<8>((eax & 0xffu) & 0x4u, f);
L_004d1cde:  // je 0x4d1d33
    if (f.zf) goto L_004d1d33;
L_004d1ce0:  // fld dword ptr [ebx + 0x284]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x284u)));
L_004d1ce6:  // fadd dword ptr [ebx + 0x11c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x11cu)));
L_004d1cec:  // mov dword ptr [ebx + 0x134], 0x3e4ccccd
    M32((uint32_t)(ebx + 0x134u)) = (uint32_t)(0x3e4ccccdu);
L_004d1cf6:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_004d1cfc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d1cfe:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d1d01:  // jne 0x4d1d0b
    if (!f.zf) goto L_004d1d0b;
L_004d1d03:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004d1d09:  // jmp 0x4d1d1e
    goto L_004d1d1e;
L_004d1d0b:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_004d1d11:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d1d13:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d1d16:  // je 0x4d1d1e
    if (f.zf) goto L_004d1d1e;
L_004d1d18:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004d1d1e:  // fstp dword ptr [ebx + 0x128]
    F32((uint32_t)(ebx + 0x128u)) = lf32(ST(0));
    lpop(x);
L_004d1d24:  // mov dword ptr [ebx + 0x124], 0x3fc90fdb
    M32((uint32_t)(ebx + 0x124u)) = (uint32_t)(0x3fc90fdbu);
L_004d1d2e:  // jmp 0x4d1e8a
    goto L_004d1e8a;
L_004d1d33:  // fld dword ptr [ebx + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x280u)));
L_004d1d39:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004d1d3f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d1d41:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d1d44:  // jne 0x4d1e28
    if (!f.zf) goto L_004d1e28;
L_004d1d4a:  // mov ebp, dword ptr [ebx + 0x1d4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x1d4u)));
L_004d1d50:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_004d1d58:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004d1d5a:  // je 0x4d1d61
    if (f.zf) goto L_004d1d61;
L_004d1d5c:  // mov esi, dword ptr [ebp]
    esi = (uint32_t)(M32((uint32_t)(ebp)));
L_004d1d5f:  // jmp 0x4d1d63
    goto L_004d1d63;
L_004d1d61:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d1d63:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d1d65:  // je 0x4d1e1c
    if (f.zf) goto L_004d1e1c;
L_004d1d6b:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d1d6e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d1d70:  // jne 0x4d1db3
    if (!f.zf) goto L_004d1db3;
L_004d1d72:  // mov ecx, dword ptr [0x82b520]
    ecx = (uint32_t)(M32((uint32_t)(0x82b520u)));
L_004d1d78:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d1d7a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d1d7c:  // mov edx, dword ptr [0x82b524]
    edx = (uint32_t)(M32((uint32_t)(0x82b524u)));
L_004d1d82:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d1d85:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004d1d87:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d1d88:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004d1d8a:  // mov ecx, dword ptr [0x82b528]
    ecx = (uint32_t)(M32((uint32_t)(0x82b528u)));
L_004d1d90:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004d1d93:  // mov edx, dword ptr [0x82b52c]
    edx = (uint32_t)(M32((uint32_t)(0x82b52cu)));
L_004d1d99:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004d1d9c:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004d1d9f:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004d1da5:  // mov ecx, dword ptr [eax + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_004d1da8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d1da9:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004d1dae:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1db3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1db3:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004d1db5:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_004d1db9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1dba:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d1dbe:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004d1dc2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d1dc3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1dc4:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004d1dc6:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d1dc8:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1dceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1dce:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d1dd1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d1dd3:  // je 0x4d1ddf
    if (f.zf) goto L_004d1ddf;
L_004d1dd5:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004d1dd9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d1dda:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1ddfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1ddf:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d1de2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d1de4:  // je 0x4d1dfd
    if (f.zf) goto L_004d1dfd;
L_004d1de6:  // lea esi, [ebx + 0x3c]
    esi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004d1de9:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004d1dec:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004d1df1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d1df3:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004d1dfd:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d1e01:  // mov ebp, dword ptr [ebp + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004d1e04:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004d1e05:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004d1e07:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004d1e0b:  // je 0x4d1e12
    if (f.zf) goto L_004d1e12;
L_004d1e0d:  // mov esi, dword ptr [ebp]
    esi = (uint32_t)(M32((uint32_t)(ebp)));
L_004d1e10:  // jmp 0x4d1e14
    goto L_004d1e14;
L_004d1e12:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d1e14:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d1e16:  // jne 0x4d1d6b
    if (!f.zf) goto L_004d1d6b;
L_004d1e1c:  // mov dword ptr [ebx + 0x1e4], 1
    M32((uint32_t)(ebx + 0x1e4u)) = (uint32_t)(0x1u);
L_004d1e26:  // jmp 0x4d1e6a
    goto L_004d1e6a;
L_004d1e28:  // mov eax, dword ptr [ebx + 0x1e4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1e4u)));
L_004d1e2e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d1e30:  // je 0x4d1e6a
    if (f.zf) goto L_004d1e6a;
L_004d1e32:  // mov esi, dword ptr [ebx + 0x1d4]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x1d4u)));
L_004d1e38:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d1e3a:  // je 0x4d1e40
    if (f.zf) goto L_004d1e40;
L_004d1e3c:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004d1e3e:  // jmp 0x4d1e42
    goto L_004d1e42;
L_004d1e40:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004d1e42:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d1e44:  // je 0x4d1e60
    if (f.zf) goto L_004d1e60;
L_004d1e46:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d1e48:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1e4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1e4d:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d1e50:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d1e52:  // je 0x4d1e58
    if (f.zf) goto L_004d1e58;
L_004d1e54:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004d1e56:  // jmp 0x4d1e5a
    goto L_004d1e5a;
L_004d1e58:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d1e5a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d1e5c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d1e5e:  // jne 0x4d1e46
    if (!f.zf) goto L_004d1e46;
L_004d1e60:  // mov dword ptr [ebx + 0x1e4], 0
    M32((uint32_t)(ebx + 0x1e4u)) = (uint32_t)(0x0u);
L_004d1e6a:  // mov eax, dword ptr [ebx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_004d1e70:  // cmp dword ptr [eax + 0x20], 2
    t0 = lsub<32>(M32((uint32_t)(eax + 0x20u)), 0x2u, f);
L_004d1e74:  // je 0x4d1e8a
    if (f.zf) goto L_004d1e8a;
L_004d1e76:  // mov eax, dword ptr [ebx + 0x27c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x27cu)));
L_004d1e7c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d1e7e:  // jne 0x4d1e8a
    if (!f.zf) goto L_004d1e8a;
L_004d1e80:  // mov dword ptr [ebx + 0x27c], 1
    M32((uint32_t)(ebx + 0x27cu)) = (uint32_t)(0x1u);
L_004d1e8a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d1e8c:  // call 0x402fa0
    t0 = 0x00402fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1e91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1e91:  // fld dword ptr [ebx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x84u)));
L_004d1e97:  // fld dword ptr [ebx + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x80u)));
L_004d1e9d:  // fld dword ptr [ebx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x7cu)));
L_004d1ea0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d1ea2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d1ea4:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d1ea6:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d1ea8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d1eaa:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004d1eac:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d1eae:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d1eb0:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d1eb2:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004d1eb4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d1eb6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d1eb8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d1eba:  // fmul dword ptr [ebx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x40u)));
L_004d1ebd:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d1ec1:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d1ec5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d1ec7:  // fmul dword ptr [ebx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x50u)));
L_004d1eca:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004d1ece:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d1ed2:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_004d1ed6:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d1ed8:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004d1edc:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d1ee0:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004d1ee3:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004d1ee7:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004d1ee9:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d1eed:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004d1ef1:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004d1ef5:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004d1ef9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1efa:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1efdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1efd:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d1efe:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d1eff:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d1f00:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d1f01:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_004d1f04:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d1cd0, 004d1cd0)
