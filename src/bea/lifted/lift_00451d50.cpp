// lifted from 00451d50 (vslot5, 1748 bytes, 470 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00451d50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00451d50;
L_00451d50:  // mov eax, 0x1f64
    eax = (uint32_t)(0x1f64u);
L_00451d55:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451d5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451d5a:  // fld dword ptr [esp + 0x1f68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f68u)));
L_00451d61:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00451d67:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00451d68:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00451d69:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451d6a:  // mov esi, dword ptr [esp + 0x1f78]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1f78u)));
L_00451d71:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451d72:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00451d74:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451d76:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00451d79:  // jne 0x451d80
    if (!f.zf) goto L_00451d80;
L_00451d7b:  // cmp esi, 3
    t0 = lsub<32>(esi, 0x3u, f);
L_00451d7e:  // jne 0x451d8f
    if (!f.zf) goto L_00451d8f;
L_00451d80:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451d85:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00451d8a:  // call 0x452fd0
    t0 = 0x00452fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451d8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451d8f:  // fld dword ptr [esp + 0x1f78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f78u)));
L_00451d96:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00451d9c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451d9e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00451da1:  // jne 0x451da8
    if (!f.zf) goto L_00451da8;
L_00451da3:  // cmp esi, 3
    t0 = lsub<32>(esi, 0x3u, f);
L_00451da6:  // jne 0x451ddc
    if (!f.zf) goto L_00451ddc;
L_00451da8:  // mov eax, dword ptr [0x89d810]
    eax = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_00451dad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451daf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451db4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451db6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00451db8:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00451dbd:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00451dc2:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00451dc4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00451dc5:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00451dca:  // push 0x43610000
    t0 = 0x43610000u; esp -= 4; M32(esp) = t0;
L_00451dcf:  // push 0x438e8000
    t0 = 0x438e8000u; esp -= 4; M32(esp) = t0;
L_00451dd4:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451dd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451dd9:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00451ddc:  // fld dword ptr [esp + 0x1f78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f78u)));
L_00451de3:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00451de9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451deb:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00451dee:  // jne 0x451df5
    if (!f.zf) goto L_00451df5;
L_00451df0:  // cmp esi, 3
    t0 = lsub<32>(esi, 0x3u, f);
L_00451df3:  // jne 0x451e43
    if (!f.zf) goto L_00451e43;
L_00451df5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451dfa:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00451dff:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451e04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451e04:  // cmp esi, 3
    t0 = lsub<32>(esi, 0x3u, f);
L_00451e07:  // jne 0x451e43
    if (!f.zf) goto L_00451e43;
L_00451e09:  // fld dword ptr [esp + 0x1f78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f78u)));
L_00451e10:  // fmul dword ptr [0x5d85e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e8u)));
L_00451e16:  // mov dword ptr [esp + 0x1c], 0x437c0000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x437c0000u);
L_00451e1e:  // fcos 
    ST(0) = lfcos(ST(0));
L_00451e20:  // fchs 
    ST(0) = -ST(0);
L_00451e22:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00451e28:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00451e2e:  // fmul dword ptr [0x5db394]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db394u)));
L_00451e34:  // fadd dword ptr [0x5db34c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db34cu)));
L_00451e3a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00451e3e:  // jmp 0x451f02
    goto L_00451f02;
L_00451e43:  // fld dword ptr [esp + 0x1f78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f78u)));
L_00451e4a:  // fsub dword ptr [0x5d858c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d858cu)));
L_00451e50:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00451e52:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00451e54:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00451e5a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451e5c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00451e5f:  // je 0x451e6b
    if (f.zf) goto L_00451e6b;
L_00451e61:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00451e63:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00451e69:  // jmp 0x451e80
    goto L_00451e80;
L_00451e6b:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00451e71:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451e73:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00451e76:  // jne 0x451e80
    if (!f.zf) goto L_00451e80;
L_00451e78:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00451e7a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00451e80:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00451e86:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00451e88:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00451e8a:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00451e90:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00451e96:  // fmul dword ptr [0x5db3b0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3b0u)));
L_00451e9c:  // fsubr dword ptr [0x5db34c]
    ST(0) = ((long double)F32((uint32_t)(0x5db34cu))) - (ST(0));
L_00451ea2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00451ea6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00451ea8:  // fmul dword ptr [0x5db398]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db398u)));
L_00451eae:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00451eb4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451eb6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00451eb9:  // je 0x451ec5
    if (f.zf) goto L_00451ec5;
L_00451ebb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00451ebd:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00451ec3:  // jmp 0x451eda
    goto L_00451eda;
L_00451ec5:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00451ecb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451ecd:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00451ed0:  // jne 0x451eda
    if (!f.zf) goto L_00451eda;
L_00451ed2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00451ed4:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00451eda:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00451ee0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00451ee2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00451ee4:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00451eea:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00451ef0:  // fmul dword ptr [0x5db358]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db358u)));
L_00451ef6:  // fadd dword ptr [0x5db3ac]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3acu)));
L_00451efc:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00451f00:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00451f02:  // mov ecx, dword ptr [0x89d83c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d83cu)));
L_00451f08:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00451f0c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451f0e:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00451f12:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451f17:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451f19:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00451f1b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451f20:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451f25:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00451f27:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451f28:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00451f2d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00451f2e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00451f2f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451f34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451f34:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00451f38:  // fstp qword ptr [esp + 0x50]
    F64((uint32_t)(esp + 0x50u)) = lf64(ST(0));
    lpop(x);
L_00451f3c:  // mov edi, dword ptr [esp + 0x54]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00451f40:  // mov ebx, dword ptr [esp + 0x50]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00451f44:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451f45:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00451f46:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451f4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451f4b:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00451f4f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451f50:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00451f51:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451f56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451f56:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00451f59:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00451f5e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00451f62:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451f67:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00451f6c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451f71:  // push 0x3fffffff
    t0 = 0x3fffffffu; esp -= 4; M32(esp) = t0;
L_00451f76:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451f7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451f7b:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00451f7f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451f80:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00451f84:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451f87:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00451f8b:  // fsub dword ptr [0x5db3a8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db3a8u)));
L_00451f91:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451f92:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451f95:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00451f99:  // fsub dword ptr [0x5db3a8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db3a8u)));
L_00451f9f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451fa1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451fa2:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00451fa7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451faa:  // call 0x466de0
    t0 = 0x00466de0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451fafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451faf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451fb0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00451fb1:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451fb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451fb6:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00451fba:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451fbb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00451fbc:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451fc1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451fc1:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00451fc4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00451fc9:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00451fcd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451fd2:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00451fd7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451fdc:  // push 0x3fffffff
    t0 = 0x3fffffffu; esp -= 4; M32(esp) = t0;
L_00451fe1:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451fe6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451fe6:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00451fea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451feb:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00451fef:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451ff2:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00451ff6:  // fadd dword ptr [0x5db3a8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3a8u)));
L_00451ffc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451ffd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00452000:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00452004:  // fadd dword ptr [0x5db3a8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3a8u)));
L_0045200a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045200c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045200d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00452010:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00452015:  // call 0x466de0
    t0 = 0x00466de0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045201au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045201a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045201c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0045201e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00452020:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00452025:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045202au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045202a:  // fld dword ptr [esp + 0x1f78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f78u)));
L_00452031:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00452037:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00452039:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0045203c:  // je 0x452158
    if (f.zf) goto L_00452158;
L_00452042:  // mov eax, dword ptr [ebp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_00452045:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00452047:  // je 0x452158
    if (f.zf) goto L_00452158;
L_0045204d:  // fld dword ptr [ebp + 8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x8u)));
L_00452050:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00452056:  // mov ecx, dword ptr [0x628fe8]
    ecx = (uint32_t)(M32((uint32_t)(0x628fe8u)));
L_0045205c:  // mov edx, dword ptr [0x628fec]
    edx = (uint32_t)(M32((uint32_t)(0x628fecu)));
L_00452062:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00452066:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0045206a:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0045206e:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00452072:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00452074:  // jge 0x45207a
    if ((f.sf == f.of)) goto L_0045207a;
L_00452076:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00452078:  // jmp 0x452087
    goto L_00452087;
L_0045207a:  // cmp edi, 0xff
    t0 = lsub<32>(edi, 0xffu, f);
L_00452080:  // jle 0x452087
    if ((f.zf || f.sf != f.of)) goto L_00452087;
L_00452082:  // mov edi, 0xff
    edi = (uint32_t)(0xffu);
L_00452087:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045208c:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452091u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452091:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00452095:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045209a:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0045209e:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004520a2:  // fsub dword ptr [0x5db3a8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db3a8u)));
L_004520a8:  // fadd dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004520ae:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004520b0:  // fmul dword ptr [0x5db3a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3a4u)));
L_004520b6:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004520ba:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004520bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004520bf:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004520c3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004520c8:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004520cc:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004520d0:  // fsub dword ptr [0x5db3a0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db3a0u)));
L_004520d6:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004520dc:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004520de:  // fmul dword ptr [0x5db39c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db39cu)));
L_004520e4:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004520e8:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004520edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004520ed:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004520f1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004520f6:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004520fa:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004520fe:  // fmul dword ptr [0x5db3a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3a4u)));
L_00452104:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00452108:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045210du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045210d:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00452111:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00452113:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00452117:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0045211a:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0045211e:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00452120:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00452124:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00452127:  // or eax, 0xffffff
    t0 = llog<32>(eax | 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0045212c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045212e:  // fmul dword ptr [0x5db39c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db39cu)));
L_00452134:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00452135:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00452139:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0045213d:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00452141:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00452142:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00452146:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00452147:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0045214c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045214d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045214e:  // mov ecx, 0x89d91c
    ecx = (uint32_t)(0x89d91cu);
L_00452153:  // call 0x541790
    t0 = 0x00541790u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452158u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452158:  // fld dword ptr [esp + 0x1f78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f78u)));
L_0045215f:  // fcomp dword ptr [0x5d8bc4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bc4u)));
    lpop(x);
L_00452165:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00452167:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045216a:  // jne 0x45218d
    if (!f.zf) goto L_0045218d;
L_0045216c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00452171:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452176u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452176:  // fcomp dword ptr [ebp + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x4u)));
    lpop(x);
L_00452179:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045217b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045217e:  // je 0x45218d
    if (f.zf) goto L_0045218d;
L_00452180:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00452185:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045218au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045218a:  // fstp dword ptr [ebp + 4]
    F32((uint32_t)(ebp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0045218d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00452192:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452197u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452197:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_0045219a:  // mov ebx, dword ptr [0x89d94c]
    ebx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_004521a0:  // mov dword ptr [esp + 0x1c], 0x43240000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x43240000u);
L_004521a8:  // cmp ebx, 0x263
    t0 = lsub<32>(ebx, 0x263u, f);
L_004521ae:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004521b4:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004521b8:  // je 0x4521c2
    if (f.zf) goto L_004521c2;
L_004521ba:  // cmp ebx, 0x264
    t0 = lsub<32>(ebx, 0x264u, f);
L_004521c0:  // jne 0x4521d3
    if (!f.zf) goto L_004521d3;
L_004521c2:  // cmp dword ptr [0x83d97c], 2
    t0 = lsub<32>(M32((uint32_t)(0x83d97cu)), 0x2u, f);
L_004521c9:  // jne 0x4521d3
    if (!f.zf) goto L_004521d3;
L_004521cb:  // mov dword ptr [esp + 0x1c], 0x43140000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x43140000u);
L_004521d3:  // fld dword ptr [esp + 0x1f78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f78u)));
L_004521da:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_004521e0:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_004521e6:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004521ec:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004521ee:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004521f1:  // je 0x4521fd
    if (f.zf) goto L_004521fd;
L_004521f3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004521f5:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004521fb:  // jmp 0x452212
    goto L_00452212;
L_004521fd:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00452203:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00452205:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00452208:  // jne 0x452212
    if (!f.zf) goto L_00452212;
L_0045220a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045220c:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00452212:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00452214:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0045221a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045221b:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0045221f:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00452223:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00452229:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045222b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0045222d:  // fmul dword ptr [0x5d8c58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c58u)));
L_00452233:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00452237:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00452239:  // call 0x469550
    t0 = 0x00469550u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045223eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045223e:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00452241:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00452245:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00452247:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045224c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045224d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045224e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00452250:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452255u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452255:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00452257:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045225cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045225c:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0045225e:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00452262:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00452265:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00452267:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00452269:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0045226c:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0045226e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00452270:  // not edx
    edx = (uint32_t)(~edx);
L_00452272:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00452278:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00452279:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0045227b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045227c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045227d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00452282:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_00452287:  // push 0x3c23d70a
    t0 = 0x3c23d70au; esp -= 4; M32(esp) = t0;
L_0045228c:  // push 0x42ec0000
    t0 = 0x42ec0000u; esp -= 4; M32(esp) = t0;
L_00452291:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_00452296:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00452298:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045229d:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004522a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004522a2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004522a4:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004522a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004522a9:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004522ab:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004522ac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004522ad:  // call 0x46a1f0
    t0 = 0x0046a1f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004522b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004522b2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004522b5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004522ba:  // push 0x43960000
    t0 = 0x43960000u; esp -= 4; M32(esp) = t0;
L_004522bf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004522c0:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004522c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004522c5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004522c7:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004522ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004522cc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004522ce:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004522d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004522d3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004522d5:  // jle 0x4523ab
    if ((f.zf || f.sf != f.of)) goto L_004523ab;
L_004522db:  // fld dword ptr [0x5d9640]
    lpush(x, (long double)F32((uint32_t)(0x5d9640u)));
L_004522e1:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_004522e5:  // lea esi, [esp + 0x34]
    esi = (uint32_t)((uint32_t)(esp + 0x34u));
L_004522e9:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004522ed:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004522f1:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004522f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004522f6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004522f7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004522f9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004522fe:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452303u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452303:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00452305:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045230au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045230a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045230b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045230c:  // call 0x46a210
    t0 = 0x0046a210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452311u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452311:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00452313:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00452316:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00452319:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0045231b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045231d:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_00452323:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00452325:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00452329:  // imul edx, edi
    t0 = limul32(edx, edi, f);
    edx = (uint32_t)(t0);
L_0045232c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045232d:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_00452333:  // imul ecx, edi
    t0 = limul32(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_00452336:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00452338:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0045233a:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0045233e:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00452344:  // xor edx, ecx
    t0 = llog<32>(edx ^ ecx, f);
    edx = (uint32_t)(t0);
L_00452346:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0045234a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045234d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045234e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045234f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00452354:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00452359:  // push 0x3c23d70a
    t0 = 0x3c23d70au; esp -= 4; M32(esp) = t0;
L_0045235e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045235f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00452360:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00452362:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00452367:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045236cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045236c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045236e:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452373u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452373:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00452377:  // fsub dword ptr [0x5d8c6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c6cu)));
L_0045237d:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00452381:  // add esi, 0xc8
    t0 = ladd<32>(esi, 0xc8u, f);
    esi = (uint32_t)(t0);
L_00452387:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00452388:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0045238c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00452390:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00452394:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0045239a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0045239e:  // jne 0x4522f1
    if (!f.zf) goto L_004522f1;
L_004523a4:  // mov esi, dword ptr [esp + 0x1f7c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1f7cu)));
L_004523ab:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004523af:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004523b5:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004523b6:  // cmp ebp, 9
    t0 = lsub<32>(ebp, 0x9u, f);
L_004523b9:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004523bd:  // jl 0x4522ab
    if ((f.sf != f.of)) goto L_004522ab;
L_004523c3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004523c5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004523ca:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_004523d1:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_004523d8:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004523ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004523dd:  // mov edi, dword ptr [esp + 0x1f78]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1f78u)));
L_004523e4:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_004523e9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004523ea:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004523ec:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004523f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004523f1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004523f2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004523f4:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_004523f9:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004523feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004523fe:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004523ff:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00452400:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00452402:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00452404:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452409u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452409:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045240c:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00452411:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00452412:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00452417u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00452417:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00452418:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00452419:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0045241a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0045241b:  // add esp, 0x1f64
    t0 = ladd<32>(esp, 0x1f64u, f);
    esp = (uint32_t)(t0);
L_00452421:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00451d50, 00451d50)
