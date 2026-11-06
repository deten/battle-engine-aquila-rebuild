// lifted from 00462d40 (vslot5, 5983 bytes, 1660 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00462d40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00462d40;
L_00462d40:  // sub esp, 0x90
    t0 = lsub<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_00462d46:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_00462d4c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00462d4d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00462d4e:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_00462d54:  // fld qword ptr [0x5db5f0]
    lpush(x, (long double)F64((uint32_t)(0x5db5f0u)));
L_00462d5a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00462d5b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00462d5c:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00462d5e:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00462d65:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00462d6c:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462d71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462d71:  // fsubr dword ptr [0x5db5e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db5e8u))) - (ST(0));
L_00462d77:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00462d7b:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00462d82:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00462d88:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_00462d8e:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00462d94:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_00462d98:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00462d9a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00462d9d:  // je 0x462da9
    if (f.zf) goto L_00462da9;
L_00462d9f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00462da1:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00462da7:  // jmp 0x462dbe
    goto L_00462dbe;
L_00462da9:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00462daf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00462db1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00462db4:  // jne 0x462dbe
    if (!f.zf) goto L_00462dbe;
L_00462db6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00462db8:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00462dbe:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00462dc4:  // mov edx, dword ptr [0x89d7f0]
    edx = (uint32_t)(M32((uint32_t)(0x89d7f0u)));
L_00462dca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462dcc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462dd1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462dd3:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00462dd7:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00462ddb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00462ddd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00462ddf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462de4:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00462de7:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00462de9:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00462ded:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00462df0:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00462df2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462df7:  // or esi, 0xffffff
    t0 = llog<32>(esi | 0xffffffu, f);
    esi = (uint32_t)(t0);
L_00462dfd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00462dfe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00462dff:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00462e04:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00462e05:  // push 0x43e50000
    t0 = 0x43e50000u; esp -= 4; M32(esp) = t0;
L_00462e0a:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462e0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462e0f:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00462e12:  // mov ecx, dword ptr [0x89d7f0]
    ecx = (uint32_t)(M32((uint32_t)(0x89d7f0u)));
L_00462e18:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00462e1c:  // fadd dword ptr [0x5db5e4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5e4u)));
L_00462e22:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462e24:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462e29:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462e2b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00462e2d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462e32:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462e37:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00462e38:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00462e39:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00462e3e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00462e3f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00462e42:  // push 0x43e50000
    t0 = 0x43e50000u; esp -= 4; M32(esp) = t0;
L_00462e47:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462e4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462e4c:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00462e4f:  // mov edx, dword ptr [0x89d7f0]
    edx = (uint32_t)(M32((uint32_t)(0x89d7f0u)));
L_00462e55:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00462e59:  // fadd dword ptr [0x5db3b0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3b0u)));
L_00462e5f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462e61:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462e66:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462e68:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00462e6a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462e6f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462e74:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00462e75:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00462e76:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00462e7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00462e7c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00462e7f:  // push 0x43e50000
    t0 = 0x43e50000u; esp -= 4; M32(esp) = t0;
L_00462e84:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462e89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462e89:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00462e8d:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00462e93:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00462e96:  // mov dword ptr [esp + 0x10], 0x43860000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x43860000u);
L_00462e9e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00462ea0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00462ea3:  // je 0x462eaf
    if (f.zf) goto L_00462eaf;
L_00462ea5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00462ea7:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00462ead:  // jmp 0x462ec4
    goto L_00462ec4;
L_00462eaf:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00462eb5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00462eb7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00462eba:  // jne 0x462ec4
    if (!f.zf) goto L_00462ec4;
L_00462ebc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00462ebe:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00462ec4:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00462eca:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00462ece:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00462ed2:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00462ed4:  // jge 0x462eda
    if ((f.sf == f.of)) goto L_00462eda;
L_00462ed6:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00462ed8:  // jmp 0x462ee7
    goto L_00462ee7;
L_00462eda:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00462ee0:  // jle 0x462ee7
    if ((f.zf || f.sf != f.of)) goto L_00462ee7;
L_00462ee2:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00462ee7:  // mov eax, dword ptr [0x83d990]
    eax = (uint32_t)(M32((uint32_t)(0x83d990u)));
L_00462eec:  // or ebp, 0xffffffff
    t0 = llog<32>(ebp | 0xffffffffu, f);
    ebp = (uint32_t)(t0);
L_00462eef:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00462ef1:  // je 0x462efd
    if (f.zf) goto L_00462efd;
L_00462ef3:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00462ef5:  // mov dword ptr [esp + 0x10], 0x43980000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x43980000u);
L_00462efd:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00462eff:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00462f01:  // mov dword ptr [esp + 0x20], ebp
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebp);
L_00462f05:  // call dword ptr [eax + 0x28]
    t0 = M32((uint32_t)(eax + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462f08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462f08:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_00462f0a:  // jge 0x463669
    if ((f.sf == f.of)) goto L_00463669;
L_00462f10:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00462f14:  // cmp ebx, -1
    t0 = lsub<32>(ebx, 0xffffffffu, f);
L_00462f17:  // je 0x463191
    if (f.zf) goto L_00463191;
L_00462f1d:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00462f1f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00462f20:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00462f22:  // call dword ptr [edx + 0x30]
    t0 = M32((uint32_t)(edx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462f25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462f25:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00462f29:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00462f2d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00462f2e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00462f2f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00462f31:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00462f36:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462f3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462f3b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00462f3d:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462f42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462f42:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00462f44:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00462f45:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00462f47:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00462f4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00462f4a:  // cmp ebx, dword ptr [edi + 8]
    t0 = lsub<32>(ebx, M32((uint32_t)(edi + 0x8u)), f);
L_00462f4d:  // jne 0x463006
    if (!f.zf) goto L_00463006;
L_00462f53:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00462f5a:  // fsub dword ptr [0x5d85f8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85f8u)));
L_00462f60:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_00462f66:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00462f6c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00462f6e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00462f71:  // je 0x462f7d
    if (f.zf) goto L_00462f7d;
L_00462f73:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00462f75:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00462f7b:  // jmp 0x462f92
    goto L_00462f92;
L_00462f7d:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00462f83:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00462f85:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00462f88:  // jne 0x462f92
    if (!f.zf) goto L_00462f92;
L_00462f8a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00462f8c:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00462f92:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00462f98:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00462f9c:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00462fa0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00462fa2:  // jge 0x462fa8
    if ((f.sf == f.of)) goto L_00462fa8;
L_00462fa4:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00462fa6:  // jmp 0x462fb5
    goto L_00462fb5;
L_00462fa8:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00462fae:  // jle 0x462fb5
    if ((f.zf || f.sf != f.of)) goto L_00462fb5;
L_00462fb0:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00462fb5:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00462fb9:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00462fbb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462fbd:  // shl eax, 7
    t0 = lshl<32>(eax, 0x7u, f);
    eax = (uint32_t)(t0);
L_00462fc0:  // fadd dword ptr [0x5db1e4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db1e4u)));
L_00462fc6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462fcb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00462fcd:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00462fcf:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00462fd1:  // fmul dword ptr [0x5db060]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db060u)));
L_00462fd7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00462fdc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00462fdd:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00462fe1:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00462fe4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00462fe7:  // and eax, 0xff000000
    t0 = llog<32>(eax & 0xff000000u, f);
    eax = (uint32_t)(t0);
L_00462fec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00462fed:  // mov eax, dword ptr [0x89d89c]
    eax = (uint32_t)(M32((uint32_t)(0x89d89cu)));
L_00462ff2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00462ff3:  // push 0x3ea8f5c3
    t0 = 0x3ea8f5c3u; esp -= 4; M32(esp) = t0;
L_00462ff8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00462ff9:  // push 0x435b0000
    t0 = 0x435b0000u; esp -= 4; M32(esp) = t0;
L_00462ffe:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463003u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463003:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00463006:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00463008:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00463009:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0046300b:  // mov ebp, 0xff4f4f4f
    ebp = (uint32_t)(0xff4f4f4fu);
L_00463010:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463013u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463013:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00463015:  // jne 0x46301c
    if (!f.zf) goto L_0046301c;
L_00463017:  // mov ebp, 0x7f1f1f1f
    ebp = (uint32_t)(0x7f1f1f1fu);
L_0046301c:  // cmp ebx, dword ptr [edi + 8]
    t0 = lsub<32>(ebx, M32((uint32_t)(edi + 0x8u)), f);
L_0046301f:  // jne 0x463026
    if (!f.zf) goto L_00463026;
L_00463021:  // mov ebp, 0xffff6f3f
    ebp = (uint32_t)(0xffff6f3fu);
L_00463026:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00463028:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0046302b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0046302d:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_00463033:  // and eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00463038:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0046303b:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_0046303f:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00463045:  // fsubr dword ptr [0x5db5e0]
    ST(0) = ((long double)F32((uint32_t)(0x5db5e0u))) - (ST(0));
L_0046304b:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0046304f:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_00463052:  // xor eax, ebp
    t0 = llog<32>(eax ^ ebp, f);
    eax = (uint32_t)(t0);
L_00463054:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_00463059:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_0046305b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046305d:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00463060:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00463062:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_00463068:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_0046306e:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_00463070:  // shl ebx, 8
    t0 = lshl<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00463073:  // sub ebx, edx
    t0 = lsub<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_00463075:  // mov ebp, ebx
    ebp = (uint32_t)(ebx);
L_00463077:  // mov ebx, dword ptr [esp + 0x30]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046307b:  // xor ebp, eax
    t0 = llog<32>(ebp ^ eax, f);
    ebp = (uint32_t)(t0);
L_0046307d:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0046307f:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00463082:  // and ebp, 0xffffff
    t0 = llog<32>(ebp & 0xffffffu, f);
    ebp = (uint32_t)(t0);
L_00463088:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0046308a:  // xor ebp, eax
    t0 = llog<32>(ebp ^ eax, f);
    ebp = (uint32_t)(t0);
L_0046308c:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00463090:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00463091:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00463093:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00463095:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00463099:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_0046309d:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_004630a1:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004630a5:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_004630ac:  // fcomp dword ptr [0x5d8bb0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb0u)));
    lpop(x);
L_004630b2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004630b4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004630b7:  // jne 0x46313d
    if (!f.zf) goto L_0046313d;
L_004630bd:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004630c1:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004630c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004630c4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004630c6:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004630c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004630c9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004630cb:  // je 0x46313d
    if (f.zf) goto L_0046313d;
L_004630cd:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004630d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004630d2:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004630d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004630d9:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004630dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004630de:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004630e2:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004630e6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004630e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004630ea:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004630eb:  // call 0x4693d0
    t0 = 0x004693d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004630f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004630f0:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004630f3:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004630f5:  // je 0x4630fe
    if (f.zf) goto L_004630fe;
L_004630f7:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004630fb:  // mov dword ptr [edi + 8], edx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(edx);
L_004630fe:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00463102:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463103:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00463107:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_0046310b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0046310e:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00463112:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463113:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00463117:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0046311a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046311b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046311c:  // call 0x469400
    t0 = 0x00469400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463121u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463121:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00463124:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00463126:  // je 0x46313d
    if (f.zf) goto L_0046313d;
L_00463128:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046312c:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0046312e:  // mov dword ptr [edi + 8], ecx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ecx);
L_00463131:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463136:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_00463138:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0046313a:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046313du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046313d:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00463141:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00463145:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463147:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463149:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0046314e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046314f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463150:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463155:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046315a:  // push 0x3ea3d70a
    t0 = 0x3ea3d70au; esp -= 4; M32(esp) = t0;
L_0046315f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463160:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00463161:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00463163:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00463168:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046316du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046316d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046316f:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463174u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463174:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00463178:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0046317e:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00463185:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0046318c:  // jmp 0x46364d
    goto L_0046364d;
L_00463191:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00463194:  // mov edx, 0xff7f7f7f
    edx = (uint32_t)(0xff7f7f7fu);
L_00463199:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0046319c:  // jne 0x4631d3
    if (!f.zf) goto L_004631d3;
L_0046319e:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_004631a4:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_004631aa:  // fmul dword ptr [0x5db4f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f0u)));
L_004631b0:  // fsin 
    ST(0) = lfsin(ST(0));
L_004631b2:  // fmul dword ptr [0x5db5dc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db5dcu)));
L_004631b8:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004631bc:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004631c0:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004631c2:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004631c5:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004631c7:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004631ca:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004631cc:  // mov edx, 0xffdfdfdf
    edx = (uint32_t)(0xffdfdfdfu);
L_004631d1:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004631d3:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004631d5:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004631d8:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004631da:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_004631e0:  // and eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004631e5:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_004631e8:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_004631ef:  // fcomp dword ptr [0x5d8bb0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb0u)));
    lpop(x);
L_004631f5:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_004631f8:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_004631fa:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_004631ff:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_00463201:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00463203:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00463206:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00463208:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_0046320e:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_00463214:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_00463216:  // shl ebx, 8
    t0 = lshl<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00463219:  // sub ebx, edx
    t0 = lsub<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_0046321b:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0046321d:  // mov ebp, ebx
    ebp = (uint32_t)(ebx);
L_0046321f:  // xor ebp, eax
    t0 = llog<32>(ebp ^ eax, f);
    ebp = (uint32_t)(t0);
L_00463221:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00463224:  // and ebp, 0xffffff
    t0 = llog<32>(ebp & 0xffffffu, f);
    ebp = (uint32_t)(t0);
L_0046322a:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0046322c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0046322e:  // xor ebp, edx
    t0 = llog<32>(ebp ^ edx, f);
    ebp = (uint32_t)(t0);
L_00463230:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463233:  // jne 0x46327b
    if (!f.zf) goto L_0046327b;
L_00463235:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00463237:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00463239:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0046323b:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046323eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046323e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00463240:  // je 0x46327b
    if (f.zf) goto L_0046327b;
L_00463242:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00463246:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0046324c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046324d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463250:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00463254:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_0046325a:  // push 0x439f8000
    t0 = 0x439f8000u; esp -= 4; M32(esp) = t0;
L_0046325f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463260:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463263:  // push 0x42ee0000
    t0 = 0x42ee0000u; esp -= 4; M32(esp) = t0;
L_00463268:  // call 0x4693d0
    t0 = 0x004693d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046326du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046326d:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00463270:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00463272:  // je 0x46327b
    if (f.zf) goto L_0046327b;
L_00463274:  // mov dword ptr [edi + 8], 0xffffffff
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(0xffffffffu);
L_0046327b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0046327f:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_00463285:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00463289:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0046328d:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_00463293:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00463297:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00463298:  // push 0x43470000
    t0 = 0x43470000u; esp -= 4; M32(esp) = t0;
L_0046329d:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004632a1:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004632a5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004632a6:  // push 0x42ee0000
    t0 = 0x42ee0000u; esp -= 4; M32(esp) = t0;
L_004632ab:  // call 0x469400
    t0 = 0x00469400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004632b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004632b0:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004632b3:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004632b5:  // je 0x4632cc
    if (f.zf) goto L_004632cc;
L_004632b7:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004632b9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004632be:  // push 0x36
    t0 = 0x36u; esp -= 4; M32(esp) = t0;
L_004632c0:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004632c2:  // mov dword ptr [edi + 8], 0xffffffff
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(0xffffffffu);
L_004632c9:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004632ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004632cc:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004632d0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004632d1:  // push 0x439f8000
    t0 = 0x439f8000u; esp -= 4; M32(esp) = t0;
L_004632d6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004632d7:  // push 0x436f0000
    t0 = 0x436f0000u; esp -= 4; M32(esp) = t0;
L_004632dc:  // call 0x469400
    t0 = 0x00469400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004632e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004632e1:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004632e4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004632e6:  // je 0x4632fd
    if (f.zf) goto L_004632fd;
L_004632e8:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004632ea:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004632ef:  // push 0x37
    t0 = 0x37u; esp -= 4; M32(esp) = t0;
L_004632f1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004632f3:  // mov dword ptr [edi + 8], 0xffffffff
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(0xffffffffu);
L_004632fa:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004632fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004632fd:  // mov eax, dword ptr [0x83d97c]
    eax = (uint32_t)(M32((uint32_t)(0x83d97cu)));
L_00463302:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463304:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463309:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046330b:  // mov ecx, dword ptr [eax*4 + 0x89d854]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89d854u)));
L_00463312:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463314:  // push 0x3e800000
    t0 = 0x3e800000u; esp -= 4; M32(esp) = t0;
L_00463319:  // push 0x3f266666
    t0 = 0x3f266666u; esp -= 4; M32(esp) = t0;
L_0046331e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046331f:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00463323:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463324:  // push 0x3ea3d70a
    t0 = 0x3ea3d70au; esp -= 4; M32(esp) = t0;
L_00463329:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046332a:  // push 0x435b0000
    t0 = 0x435b0000u; esp -= 4; M32(esp) = t0;
L_0046332f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463334u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463334:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0046333a:  // fistp qword ptr [esp + 0x54]
    M64((uint32_t)(esp + 0x54u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0046333e:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00463342:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00463345:  // and edx, 0x8000003f
    t0 = llog<32>(edx & 0x8000003fu, f);
    edx = (uint32_t)(t0);
L_0046334b:  // jns 0x463352
    if (!f.sf) goto L_00463352;
L_0046334d:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0046334e:  // or edx, 0xffffffc0
    t0 = llog<32>(edx | 0xffffffc0u, f);
    edx = (uint32_t)(t0);
L_00463351:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00463352:  // cmp edx, 0x32
    t0 = lsub<32>(edx, 0x32u, f);
L_00463355:  // jl 0x46336b
    if ((f.sf != f.of)) goto L_0046336b;
L_00463357:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_0046335a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00463360:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463362:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463365:  // jne 0x4634c0
    if (!f.zf) goto L_004634c0;
L_0046336b:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0046336d:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00463370:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00463372:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00463375:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00463377:  // not edx
    edx = (uint32_t)(~edx);
L_00463379:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0046337f:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_00463381:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00463384:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00463387:  // je 0x4633ad
    if (f.zf) goto L_004633ad;
L_00463389:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0046338b:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0046338e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00463390:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_00463395:  // and ecx, 0xffff0000
    t0 = llog<32>(ecx & 0xffff0000u, f);
    ecx = (uint32_t)(t0);
L_0046339b:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0046339e:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_004633a0:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_004633a6:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_004633a9:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_004633ab:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004633ad:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004633af:  // push 0xc0490fdb
    t0 = 0xc0490fdbu; esp -= 4; M32(esp) = t0;
L_004633b4:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004633b7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004633b9:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_004633be:  // and ecx, 0xffff0000
    t0 = llog<32>(ecx & 0xffff0000u, f);
    ecx = (uint32_t)(t0);
L_004633c4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004633c9:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004633cb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004633cd:  // shl ebx, 8
    t0 = lshl<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_004633d0:  // sub ebx, ecx
    t0 = lsub<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_004633d2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004633d4:  // xor ebx, edx
    t0 = llog<32>(ebx ^ edx, f);
    ebx = (uint32_t)(t0);
L_004633d6:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004633d8:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004633db:  // and ebx, 0xffffff
    t0 = llog<32>(ebx & 0xffffffu, f);
    ebx = (uint32_t)(t0);
L_004633e1:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004633e3:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_004633e8:  // push 0x3f4ccccd
    t0 = 0x3f4ccccdu; esp -= 4; M32(esp) = t0;
L_004633ed:  // xor ebx, edx
    t0 = llog<32>(ebx ^ edx, f);
    ebx = (uint32_t)(t0);
L_004633ef:  // push 0x3f4ccccd
    t0 = 0x3f4ccccdu; esp -= 4; M32(esp) = t0;
L_004633f4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004633f5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004633f6:  // push 0x3ea3d70a
    t0 = 0x3ea3d70au; esp -= 4; M32(esp) = t0;
L_004633fb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004633fc:  // push 0x431a0000
    t0 = 0x431a0000u; esp -= 4; M32(esp) = t0;
L_00463401:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463406u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463406:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_00463409:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0046340f:  // push 0xc0490fdb
    t0 = 0xc0490fdbu; esp -= 4; M32(esp) = t0;
L_00463414:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463419:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046341b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046341d:  // fistp qword ptr [esp + 0x64]
    M64((uint32_t)(esp + 0x64u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463421:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00463425:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00463427:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0046342a:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0046342c:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0046342f:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00463431:  // not edx
    edx = (uint32_t)(~edx);
L_00463433:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00463439:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0046343b:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463441:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00463443:  // fsub dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x1cu)));
L_00463446:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00463449:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0046344b:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_00463451:  // and eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00463456:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00463459:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_0046345c:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00463462:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_00463464:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_00463469:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_0046346f:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_00463471:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00463473:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00463476:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0046347a:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0046347e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046347f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00463480:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00463482:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_00463488:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_0046348e:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_00463490:  // shl ebx, 8
    t0 = lshl<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00463493:  // sub ebx, edx
    t0 = lsub<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_00463495:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00463497:  // xor ebx, eax
    t0 = llog<32>(ebx ^ eax, f);
    ebx = (uint32_t)(t0);
L_00463499:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_0046349e:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004634a1:  // and ebx, 0xffffff
    t0 = llog<32>(ebx & 0xffffffu, f);
    ebx = (uint32_t)(t0);
L_004634a7:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_004634a9:  // xor ebx, edx
    t0 = llog<32>(ebx ^ edx, f);
    ebx = (uint32_t)(t0);
L_004634ab:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004634ac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004634ad:  // push 0x3ea3d70a
    t0 = 0x3ea3d70au; esp -= 4; M32(esp) = t0;
L_004634b2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004634b3:  // push 0x431a0000
    t0 = 0x431a0000u; esp -= 4; M32(esp) = t0;
L_004634b8:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004634bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004634bd:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_004634c0:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_004634c6:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004634ca:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004634ce:  // and ecx, 0x8000003f
    t0 = llog<32>(ecx & 0x8000003fu, f);
    ecx = (uint32_t)(t0);
L_004634d4:  // jns 0x4634db
    if (!f.sf) goto L_004634db;
L_004634d6:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004634d7:  // or ecx, 0xffffffc0
    t0 = llog<32>(ecx | 0xffffffc0u, f);
    ecx = (uint32_t)(t0);
L_004634da:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004634db:  // cmp ecx, 0x32
    t0 = lsub<32>(ecx, 0x32u, f);
L_004634de:  // jl 0x4634f4
    if ((f.sf != f.of)) goto L_004634f4;
L_004634e0:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_004634e3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004634e9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004634eb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004634ee:  // jne 0x463643
    if (!f.zf) goto L_00463643;
L_004634f4:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004634f6:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004634f9:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004634fb:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004634fe:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00463500:  // not edx
    edx = (uint32_t)(~edx);
L_00463502:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00463508:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0046350a:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0046350d:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00463510:  // je 0x463536
    if (f.zf) goto L_00463536;
L_00463512:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00463514:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00463517:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00463519:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0046351e:  // and ecx, 0xffff0000
    t0 = llog<32>(ecx & 0xffff0000u, f);
    ecx = (uint32_t)(t0);
L_00463524:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00463527:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_00463529:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0046352f:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00463532:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_00463534:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00463536:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00463538:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046353a:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0046353d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046353f:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_00463544:  // and ecx, 0xffff0000
    t0 = llog<32>(ecx & 0xffff0000u, f);
    ecx = (uint32_t)(t0);
L_0046354a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046354f:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00463551:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463553:  // shl ebx, 8
    t0 = lshl<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00463556:  // sub ebx, ecx
    t0 = lsub<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_00463558:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046355a:  // xor ebx, edx
    t0 = llog<32>(ebx ^ edx, f);
    ebx = (uint32_t)(t0);
L_0046355c:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0046355e:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00463561:  // and ebx, 0xffffff
    t0 = llog<32>(ebx & 0xffffffu, f);
    ebx = (uint32_t)(t0);
L_00463567:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00463569:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_0046356e:  // push 0x3f4ccccd
    t0 = 0x3f4ccccdu; esp -= 4; M32(esp) = t0;
L_00463573:  // xor ebx, edx
    t0 = llog<32>(ebx ^ edx, f);
    ebx = (uint32_t)(t0);
L_00463575:  // push 0x3f4ccccd
    t0 = 0x3f4ccccdu; esp -= 4; M32(esp) = t0;
L_0046357a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046357b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046357c:  // push 0x3ea3d70a
    t0 = 0x3ea3d70au; esp -= 4; M32(esp) = t0;
L_00463581:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463582:  // push 0x438e0000
    t0 = 0x438e0000u; esp -= 4; M32(esp) = t0;
L_00463587:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046358cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046358c:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_0046358f:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463595:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463597:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046359c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046359e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004635a0:  // fistp qword ptr [esp + 0x64]
    M64((uint32_t)(esp + 0x64u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004635a4:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004635a8:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004635aa:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004635ad:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004635af:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004635b2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004635b4:  // not edx
    edx = (uint32_t)(~edx);
L_004635b6:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_004635bc:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_004635be:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004635c4:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004635c6:  // fsub dword ptr [edi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x20u)));
L_004635c9:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004635cc:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004635ce:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_004635d4:  // and eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004635d9:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_004635dc:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_004635df:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004635e5:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_004635e7:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_004635ec:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_004635f2:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_004635f4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004635f6:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004635f9:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004635fd:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00463601:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00463602:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00463603:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00463605:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_0046360b:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_00463611:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_00463613:  // shl ebx, 8
    t0 = lshl<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00463616:  // sub ebx, edx
    t0 = lsub<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_00463618:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0046361a:  // xor ebx, eax
    t0 = llog<32>(ebx ^ eax, f);
    ebx = (uint32_t)(t0);
L_0046361c:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_00463621:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00463624:  // and ebx, 0xffffff
    t0 = llog<32>(ebx & 0xffffffu, f);
    ebx = (uint32_t)(t0);
L_0046362a:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0046362c:  // xor ebx, edx
    t0 = llog<32>(ebx ^ edx, f);
    ebx = (uint32_t)(t0);
L_0046362e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046362f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463630:  // push 0x3ea3d70a
    t0 = 0x3ea3d70au; esp -= 4; M32(esp) = t0;
L_00463635:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463636:  // push 0x438e0000
    t0 = 0x438e0000u; esp -= 4; M32(esp) = t0;
L_0046363b:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463640u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463640:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00463643:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00463647:  // fadd dword ptr [0x5db5d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5d8u)));
L_0046364d:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00463651:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00463653:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00463657:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00463658:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0046365a:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0046365e:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463661u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463661:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_00463663:  // jl 0x462f10
    if ((f.sf != f.of)) goto L_00462f10;
L_00463669:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463670:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00463676:  // mov ebx, dword ptr [esp + 0xa8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_0046367d:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00463684:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0046368b:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463690:  // mov dword ptr [esp + 0x14], 0x3fa00000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3fa00000u);
L_00463698:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004636a0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004636a2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004636a5:  // je 0x46384c
    if (f.zf) goto L_0046384c;
L_004636ab:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_004636b2:  // cmp ebx, 0xc
    t0 = lsub<32>(ebx, 0xcu, f);
L_004636b5:  // jne 0x4637cb
    if (!f.zf) goto L_004637cb;
L_004636bb:  // fcomp dword ptr [0x5d8604]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8604u)));
    lpop(x);
L_004636c1:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_004636c8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004636ca:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004636cd:  // je 0x463745
    if (f.zf) goto L_00463745;
L_004636cf:  // fmul dword ptr [0x5db564]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db564u)));
L_004636d5:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004636db:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004636dd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004636e0:  // je 0x4636ec
    if (f.zf) goto L_004636ec;
L_004636e2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004636e4:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004636ea:  // jmp 0x463701
    goto L_00463701;
L_004636ec:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_004636f2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004636f4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004636f7:  // jne 0x463701
    if (!f.zf) goto L_00463701;
L_004636f9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004636fb:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463701:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463703:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463709:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0046370d:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00463711:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00463713:  // jge 0x463719
    if ((f.sf == f.of)) goto L_00463719;
L_00463715:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463717:  // jmp 0x463726
    goto L_00463726;
L_00463719:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_0046371f:  // jle 0x463726
    if ((f.zf || f.sf != f.of)) goto L_00463726;
L_00463721:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463726:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_0046372a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463730:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00463732:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_00463738:  // fchs 
    ST(0) = -ST(0);
L_0046373a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0046373e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463740:  // jmp 0x46384c
    goto L_0046384c;
L_00463745:  // fcomp dword ptr [0x5d8c40]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c40u)));
    lpop(x);
L_0046374b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0046374d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463750:  // je 0x46375f
    if (f.zf) goto L_0046375f;
L_00463752:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_0046375a:  // jmp 0x46384c
    goto L_0046384c;
L_0046375f:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463766:  // fcomp dword ptr [0x5d8bb8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb8u)));
    lpop(x);
L_0046376c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0046376e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463771:  // je 0x46384c
    if (f.zf) goto L_0046384c;
L_00463777:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_0046377e:  // fsub dword ptr [0x5d8c40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c40u)));
L_00463784:  // fmul dword ptr [0x5db5d4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db5d4u)));
L_0046378a:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00463790:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463792:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463795:  // je 0x4637a1
    if (f.zf) goto L_004637a1;
L_00463797:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463799:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0046379f:  // jmp 0x4637b6
    goto L_004637b6;
L_004637a1:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_004637a7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004637a9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004637ac:  // jne 0x4637b6
    if (!f.zf) goto L_004637b6;
L_004637ae:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004637b0:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004637b6:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_004637bc:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004637c2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004637c6:  // jmp 0x46384c
    goto L_0046384c;
L_004637cb:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_004637d1:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004637d3:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004637d9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004637db:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004637de:  // je 0x4637ea
    if (f.zf) goto L_004637ea;
L_004637e0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004637e2:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004637e8:  // jmp 0x4637ff
    goto L_004637ff;
L_004637ea:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_004637f0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004637f2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004637f5:  // jne 0x4637ff
    if (!f.zf) goto L_004637ff;
L_004637f7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004637f9:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004637ff:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00463805:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0046380b:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0046380d:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463813:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463817:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0046381b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0046381d:  // jge 0x463823
    if ((f.sf == f.of)) goto L_00463823;
L_0046381f:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463821:  // jmp 0x463830
    goto L_00463830;
L_00463823:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00463829:  // jle 0x463830
    if ((f.zf || f.sf != f.of)) goto L_00463830;
L_0046382b:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463830:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463832:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_00463838:  // fadd dword ptr [0x5db4b0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4b0u)));
L_0046383e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00463842:  // fmul dword ptr [0x5d8df8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8df8u)));
L_00463848:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0046384c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00463850:  // fmul dword ptr [0x5db4ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4acu)));
L_00463856:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0046385a:  // mov eax, dword ptr [0x89d894]
    eax = (uint32_t)(M32((uint32_t)(0x89d894u)));
L_0046385f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463860:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463865:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463867:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463869:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0046386d:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00463871:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463872:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463873:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00463875:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00463878:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0046387a:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0046387d:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_00463883:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463884:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463885:  // push 0x3eb33333
    t0 = 0x3eb33333u; esp -= 4; M32(esp) = t0;
L_0046388a:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0046388f:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463894:  // fadd dword ptr [0x5db5d0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5d0u)));
L_0046389a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046389b:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004638a0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004638a3:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004638a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004638a8:  // fadd dword ptr [0x5db5cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5ccu)));
L_004638ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004638af:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004638b2:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004638b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004638b7:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004638b9:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004638bd:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004638c0:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004638c2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004638c3:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004638c6:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004638c8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004638cd:  // not edx
    edx = (uint32_t)(~edx);
L_004638cf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004638d1:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_004638d7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004638d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004638da:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_004638dc:  // mov eax, dword ptr [0x89d894]
    eax = (uint32_t)(M32((uint32_t)(0x89d894u)));
L_004638e1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004638e2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004638e3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004638e4:  // push 0x3e99999a
    t0 = 0x3e99999au; esp -= 4; M32(esp) = t0;
L_004638e9:  // push 0x43ac0000
    t0 = 0x43ac0000u; esp -= 4; M32(esp) = t0;
L_004638ee:  // push 0x435b0000
    t0 = 0x435b0000u; esp -= 4; M32(esp) = t0;
L_004638f3:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004638f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004638f8:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_004638ff:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00463905:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00463908:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_0046390d:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00463915:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463917:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0046391a:  // je 0x463b17
    if (f.zf) goto L_00463b17;
L_00463920:  // cmp ebx, 0xc
    t0 = lsub<32>(ebx, 0xcu, f);
L_00463923:  // jne 0x463b17
    if (!f.zf) goto L_00463b17;
L_00463929:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463930:  // fcomp dword ptr [0x5d8604]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8604u)));
    lpop(x);
L_00463936:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_0046393d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0046393f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463942:  // je 0x4639b2
    if (f.zf) goto L_004639b2;
L_00463944:  // fmul dword ptr [0x5db564]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db564u)));
L_0046394a:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00463950:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463952:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463955:  // je 0x463961
    if (f.zf) goto L_00463961;
L_00463957:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463959:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0046395f:  // jmp 0x463976
    goto L_00463976;
L_00463961:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00463967:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463969:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0046396c:  // jne 0x463976
    if (!f.zf) goto L_00463976;
L_0046396e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463970:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463976:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463978:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0046397e:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463982:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00463986:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00463988:  // jge 0x46398e
    if ((f.sf == f.of)) goto L_0046398e;
L_0046398a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0046398c:  // jmp 0x46399b
    goto L_0046399b;
L_0046398e:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00463994:  // jle 0x46399b
    if ((f.zf || f.sf != f.of)) goto L_0046399b;
L_00463996:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_0046399b:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_0046399f:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004639a5:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004639a7:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_004639ad:  // jmp 0x463a62
    goto L_00463a62;
L_004639b2:  // fcomp dword ptr [0x5d8bb8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb8u)));
    lpop(x);
L_004639b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004639ba:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004639bd:  // je 0x4639cc
    if (f.zf) goto L_004639cc;
L_004639bf:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_004639c7:  // jmp 0x463a68
    goto L_00463a68;
L_004639cc:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_004639d3:  // fcomp dword ptr [0x5d85f8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85f8u)));
    lpop(x);
L_004639d9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004639db:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004639de:  // je 0x463b17
    if (f.zf) goto L_00463b17;
L_004639e4:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_004639eb:  // fsub dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bb8u)));
L_004639f1:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_004639f7:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004639fd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004639ff:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463a02:  // je 0x463a0e
    if (f.zf) goto L_00463a0e;
L_00463a04:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463a06:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00463a0c:  // jmp 0x463a23
    goto L_00463a23;
L_00463a0e:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00463a14:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463a16:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463a19:  // jne 0x463a23
    if (!f.zf) goto L_00463a23;
L_00463a1b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463a1d:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463a23:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00463a29:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463a2b:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463a31:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463a35:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00463a39:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00463a3b:  // jge 0x463a41
    if ((f.sf == f.of)) goto L_00463a41;
L_00463a3d:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463a3f:  // jmp 0x463a4e
    goto L_00463a4e;
L_00463a41:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00463a47:  // jle 0x463a4e
    if ((f.zf || f.sf != f.of)) goto L_00463a4e;
L_00463a49:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463a4e:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00463a52:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463a58:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00463a5a:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_00463a60:  // fchs 
    ST(0) = -ST(0);
L_00463a62:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00463a66:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463a68:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00463a6c:  // fmul dword ptr [0x5db4ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4acu)));
L_00463a72:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00463a76:  // mov eax, dword ptr [0x89d898]
    eax = (uint32_t)(M32((uint32_t)(0x89d898u)));
L_00463a7b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463a7c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463a81:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463a83:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463a85:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00463a89:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00463a8d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463a8e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463a8f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00463a91:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00463a94:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00463a96:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00463a99:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_00463a9f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463aa0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463aa1:  // push 0x3eb33333
    t0 = 0x3eb33333u; esp -= 4; M32(esp) = t0;
L_00463aa6:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00463aab:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463ab0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463ab0:  // fadd dword ptr [0x5db5d0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5d0u)));
L_00463ab6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463ab7:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00463abc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463abf:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463ac4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463ac4:  // fadd dword ptr [0x5db5cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5ccu)));
L_00463aca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463acb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463ace:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463ad3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463ad3:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00463ad5:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00463ad9:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00463adc:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00463ade:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463adf:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00463ae2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00463ae4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463ae9:  // not edx
    edx = (uint32_t)(~edx);
L_00463aeb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463aed:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00463af3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463af5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463af6:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_00463af8:  // mov eax, dword ptr [0x89d898]
    eax = (uint32_t)(M32((uint32_t)(0x89d898u)));
L_00463afd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463afe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00463aff:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463b00:  // push 0x3e99999a
    t0 = 0x3e99999au; esp -= 4; M32(esp) = t0;
L_00463b05:  // push 0x43ac0000
    t0 = 0x43ac0000u; esp -= 4; M32(esp) = t0;
L_00463b0a:  // push 0x435b0000
    t0 = 0x435b0000u; esp -= 4; M32(esp) = t0;
L_00463b0f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463b14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463b14:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00463b17:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463b1e:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00463b24:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463b29:  // mov dword ptr [esp + 0x14], 0x3fa00000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3fa00000u);
L_00463b31:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00463b39:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463b3b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463b3e:  // je 0x463cf8
    if (f.zf) goto L_00463cf8;
L_00463b44:  // cmp ebx, 0xc
    t0 = lsub<32>(ebx, 0xcu, f);
L_00463b47:  // jne 0x463c7f
    if (!f.zf) goto L_00463c7f;
L_00463b4d:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463b54:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_00463b5a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463b5c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463b5f:  // je 0x463b68
    if (f.zf) goto L_00463b68;
L_00463b61:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463b63:  // jmp 0x463cf8
    goto L_00463cf8;
L_00463b68:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463b6f:  // fcomp dword ptr [0x5d8cb4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cb4u)));
    lpop(x);
L_00463b75:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463b7c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463b7e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463b81:  // je 0x463bfc
    if (f.zf) goto L_00463bfc;
L_00463b83:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_00463b89:  // fmul dword ptr [0x5db4bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4bcu)));
L_00463b8f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00463b95:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463b97:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463b9a:  // je 0x463ba6
    if (f.zf) goto L_00463ba6;
L_00463b9c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463b9e:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00463ba4:  // jmp 0x463bbb
    goto L_00463bbb;
L_00463ba6:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00463bac:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463bae:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463bb1:  // jne 0x463bbb
    if (!f.zf) goto L_00463bbb;
L_00463bb3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463bb5:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463bbb:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463bbd:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463bc3:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463bc7:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00463bcb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00463bcd:  // jge 0x463be0
    if ((f.sf == f.of)) goto L_00463be0;
L_00463bcf:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00463bd3:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_00463bd9:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463bdb:  // jmp 0x463cf2
    goto L_00463cf2;
L_00463be0:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00463be6:  // jle 0x463bed
    if ((f.zf || f.sf != f.of)) goto L_00463bed;
L_00463be8:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463bed:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00463bf1:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_00463bf7:  // jmp 0x463cf2
    goto L_00463cf2;
L_00463bfc:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_00463c02:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463c04:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463c07:  // je 0x463c16
    if (f.zf) goto L_00463c16;
L_00463c09:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_00463c11:  // jmp 0x463cf8
    goto L_00463cf8;
L_00463c16:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463c1d:  // fcomp dword ptr [0x5d8bec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8becu)));
    lpop(x);
L_00463c23:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463c25:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463c28:  // je 0x463cf8
    if (f.zf) goto L_00463cf8;
L_00463c2e:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463c35:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00463c3b:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_00463c41:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00463c47:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463c49:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463c4c:  // je 0x463c58
    if (f.zf) goto L_00463c58;
L_00463c4e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463c50:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00463c56:  // jmp 0x463c6d
    goto L_00463c6d;
L_00463c58:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00463c5e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463c60:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463c63:  // jne 0x463c6d
    if (!f.zf) goto L_00463c6d;
L_00463c65:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463c67:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463c6d:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_00463c73:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00463c79:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00463c7d:  // jmp 0x463cf8
    goto L_00463cf8;
L_00463c7f:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00463c83:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00463c89:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463c8b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463c8e:  // je 0x463c9a
    if (f.zf) goto L_00463c9a;
L_00463c90:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463c92:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00463c98:  // jmp 0x463caf
    goto L_00463caf;
L_00463c9a:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00463ca0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463ca2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463ca5:  // jne 0x463caf
    if (!f.zf) goto L_00463caf;
L_00463ca7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463ca9:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463caf:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00463cb5:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463cbb:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00463cbd:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463cc3:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463cc7:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00463ccb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00463ccd:  // jge 0x463cd3
    if ((f.sf == f.of)) goto L_00463cd3;
L_00463ccf:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463cd1:  // jmp 0x463ce0
    goto L_00463ce0;
L_00463cd3:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00463cd9:  // jle 0x463ce0
    if ((f.zf || f.sf != f.of)) goto L_00463ce0;
L_00463cdb:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463ce0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463ce2:  // fmul dword ptr [0x5db4b4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b4u)));
L_00463ce8:  // fadd dword ptr [0x5db4b0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4b0u)));
L_00463cee:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00463cf2:  // fchs 
    ST(0) = -ST(0);
L_00463cf4:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00463cf8:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00463cfc:  // fmul dword ptr [0x5db4ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4acu)));
L_00463d02:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00463d06:  // mov eax, dword ptr [0x89d8a0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a0u)));
L_00463d0b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463d0c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463d11:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463d13:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463d15:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00463d19:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00463d1d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463d1e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463d1f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00463d21:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00463d24:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00463d26:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00463d29:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_00463d2f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463d30:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463d31:  // push 0x3eb33333
    t0 = 0x3eb33333u; esp -= 4; M32(esp) = t0;
L_00463d36:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00463d3b:  // call 0x468750
    t0 = 0x00468750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463d40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463d40:  // fadd dword ptr [0x5db5c8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5c8u)));
L_00463d46:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463d47:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00463d4c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463d4f:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463d54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463d54:  // fadd dword ptr [0x5db5c4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5c4u)));
L_00463d5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463d5b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463d5e:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463d63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463d63:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00463d65:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00463d69:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00463d6c:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00463d6e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463d6f:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00463d72:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00463d74:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463d79:  // not edx
    edx = (uint32_t)(~edx);
L_00463d7b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463d7d:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00463d83:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463d85:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463d86:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_00463d88:  // mov eax, dword ptr [0x89d8a0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a0u)));
L_00463d8d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463d8e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00463d8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463d90:  // push 0x3e99999a
    t0 = 0x3e99999au; esp -= 4; M32(esp) = t0;
L_00463d95:  // push 0x43b18000
    t0 = 0x43b18000u; esp -= 4; M32(esp) = t0;
L_00463d9a:  // push 0x43e48000
    t0 = 0x43e48000u; esp -= 4; M32(esp) = t0;
L_00463d9f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463da4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463da4:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_00463dab:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00463db1:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00463db4:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463db9:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00463dc1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463dc3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463dc6:  // je 0x463fc7
    if (f.zf) goto L_00463fc7;
L_00463dcc:  // cmp ebx, 0xc
    t0 = lsub<32>(ebx, 0xcu, f);
L_00463dcf:  // jne 0x463fc7
    if (!f.zf) goto L_00463fc7;
L_00463dd5:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463ddc:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_00463de2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463de4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463de7:  // jne 0x463fc7
    if (!f.zf) goto L_00463fc7;
L_00463ded:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463df4:  // fcomp dword ptr [0x5d8cb4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cb4u)));
    lpop(x);
L_00463dfa:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463e01:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463e03:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463e06:  // je 0x463e6c
    if (f.zf) goto L_00463e6c;
L_00463e08:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_00463e0e:  // fmul dword ptr [0x5db4bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4bcu)));
L_00463e14:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00463e1a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463e1c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463e1f:  // je 0x463e2b
    if (f.zf) goto L_00463e2b;
L_00463e21:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463e23:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00463e29:  // jmp 0x463e40
    goto L_00463e40;
L_00463e2b:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00463e31:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463e33:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463e36:  // jne 0x463e40
    if (!f.zf) goto L_00463e40;
L_00463e38:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463e3a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463e40:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463e42:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463e48:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463e4c:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00463e50:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00463e52:  // jge 0x463e5b
    if ((f.sf == f.of)) goto L_00463e5b;
L_00463e54:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463e56:  // jmp 0x463f08
    goto L_00463f08;
L_00463e5b:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00463e61:  // jle 0x463f08
    if ((f.zf || f.sf != f.of)) goto L_00463f08;
L_00463e67:  // jmp 0x463f03
    goto L_00463f03;
L_00463e6c:  // fcomp dword ptr [0x5d8bec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8becu)));
    lpop(x);
L_00463e72:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463e74:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463e77:  // je 0x463e86
    if (f.zf) goto L_00463e86;
L_00463e79:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_00463e81:  // jmp 0x463f18
    goto L_00463f18;
L_00463e86:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463e8d:  // fcomp dword ptr [0x5d8bb0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb0u)));
    lpop(x);
L_00463e93:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463e95:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463e98:  // je 0x463fc7
    if (f.zf) goto L_00463fc7;
L_00463e9e:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00463ea5:  // fsub dword ptr [0x5d8bec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8becu)));
L_00463eab:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_00463eb1:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00463eb7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463eb9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00463ebc:  // je 0x463ec8
    if (f.zf) goto L_00463ec8;
L_00463ebe:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463ec0:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00463ec6:  // jmp 0x463edd
    goto L_00463edd;
L_00463ec8:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00463ece:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00463ed0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00463ed3:  // jne 0x463edd
    if (!f.zf) goto L_00463edd;
L_00463ed5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00463ed7:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00463edd:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00463ee3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00463ee5:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00463eeb:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00463eef:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00463ef3:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00463ef5:  // jge 0x463efb
    if ((f.sf == f.of)) goto L_00463efb;
L_00463ef7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00463ef9:  // jmp 0x463f08
    goto L_00463f08;
L_00463efb:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00463f01:  // jle 0x463f08
    if ((f.zf || f.sf != f.of)) goto L_00463f08;
L_00463f03:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_00463f08:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00463f0c:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_00463f12:  // fchs 
    ST(0) = -ST(0);
L_00463f14:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00463f18:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00463f1c:  // fmul dword ptr [0x5db4ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4acu)));
L_00463f22:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00463f26:  // mov eax, dword ptr [0x89d8a4]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a4u)));
L_00463f2b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463f2c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463f31:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463f33:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463f35:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00463f39:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00463f3d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463f3e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463f3f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00463f41:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00463f44:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00463f46:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00463f49:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_00463f4f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463f50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463f51:  // push 0x3eb33333
    t0 = 0x3eb33333u; esp -= 4; M32(esp) = t0;
L_00463f56:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00463f5b:  // call 0x468750
    t0 = 0x00468750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463f60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463f60:  // fadd dword ptr [0x5db5c8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5c8u)));
L_00463f66:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463f67:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00463f6c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463f6f:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463f74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463f74:  // fadd dword ptr [0x5db5c4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5c4u)));
L_00463f7a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463f7b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00463f7e:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463f83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463f83:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00463f85:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00463f89:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00463f8c:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00463f8e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00463f8f:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00463f92:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00463f94:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00463f99:  // not edx
    edx = (uint32_t)(~edx);
L_00463f9b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00463f9d:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00463fa3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00463fa5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463fa6:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_00463fa8:  // mov eax, dword ptr [0x89d8a4]
    eax = (uint32_t)(M32((uint32_t)(0x89d8a4u)));
L_00463fad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00463fae:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00463faf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00463fb0:  // push 0x3e99999a
    t0 = 0x3e99999au; esp -= 4; M32(esp) = t0;
L_00463fb5:  // push 0x43b18000
    t0 = 0x43b18000u; esp -= 4; M32(esp) = t0;
L_00463fba:  // push 0x43e48000
    t0 = 0x43e48000u; esp -= 4; M32(esp) = t0;
L_00463fbf:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00463fc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00463fc4:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00463fc7:  // mov edi, dword ptr [edi + 8]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00463fca:  // lea eax, [edi + 1]
    eax = (uint32_t)((uint32_t)(edi + 0x1u));
L_00463fcd:  // cmp eax, 9
    t0 = lsub<32>(eax, 0x9u, f);
L_00463fd0:  // ja 0x464121
    if ((!f.cf && !f.zf)) goto L_00464121;
L_00463fd6:  // jmp dword ptr [eax*4 + 0x4644a0]
    t0 = M32((uint32_t)(eax * 4u + 0x4644a0u));
    switch (t0) {
    case 0x00463fddu: goto L_00463fdd;
    case 0x00463fe4u: goto L_00463fe4;
    case 0x00463febu: goto L_00463feb;
    case 0x00463ff2u: goto L_00463ff2;
    case 0x00463ff9u: goto L_00463ff9;
    case 0x00464000u: goto L_00464000;
    case 0x00464007u: goto L_00464007;
    case 0x0046400eu: goto L_0046400e;
    case 0x00464015u: goto L_00464015;
    case 0x00464121u: goto L_00464121;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00463fdd:  // mov edi, 0x47
    edi = (uint32_t)(0x47u);
L_00463fe2:  // jmp 0x46401a
    goto L_0046401a;
L_00463fe4:  // mov edi, 0x40
    edi = (uint32_t)(0x40u);
L_00463fe9:  // jmp 0x46401a
    goto L_0046401a;
L_00463feb:  // mov edi, 0x41
    edi = (uint32_t)(0x41u);
L_00463ff0:  // jmp 0x46401a
    goto L_0046401a;
L_00463ff2:  // mov edi, 0x43
    edi = (uint32_t)(0x43u);
L_00463ff7:  // jmp 0x46401a
    goto L_0046401a;
L_00463ff9:  // mov edi, 0x42
    edi = (uint32_t)(0x42u);
L_00463ffe:  // jmp 0x46401a
    goto L_0046401a;
L_00464000:  // mov edi, 0x44
    edi = (uint32_t)(0x44u);
L_00464005:  // jmp 0x46401a
    goto L_0046401a;
L_00464007:  // mov edi, 0x45
    edi = (uint32_t)(0x45u);
L_0046400c:  // jmp 0x46401a
    goto L_0046401a;
L_0046400e:  // mov edi, 0x46
    edi = (uint32_t)(0x46u);
L_00464013:  // jmp 0x46401a
    goto L_0046401a;
L_00464015:  // mov edi, 0x48
    edi = (uint32_t)(0x48u);
L_0046401a:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00464021:  // fsub dword ptr [0x5d85f8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85f8u)));
L_00464027:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_0046402d:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00464033:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00464035:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00464038:  // je 0x464044
    if (f.zf) goto L_00464044;
L_0046403a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0046403c:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00464042:  // jmp 0x464059
    goto L_00464059;
L_00464044:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0046404a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0046404c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0046404f:  // jne 0x464059
    if (!f.zf) goto L_00464059;
L_00464051:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00464053:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00464059:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0046405f:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00464063:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00464067:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00464069:  // jge 0x46406f
    if ((f.sf == f.of)) goto L_0046406f;
L_0046406b:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0046406d:  // jmp 0x46407c
    goto L_0046407c;
L_0046406f:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_00464075:  // jle 0x46407c
    if ((f.zf || f.sf != f.of)) goto L_0046407c;
L_00464077:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_0046407c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046407e:  // mov eax, dword ptr [edi*4 + 0x89d7a8]
    eax = (uint32_t)(M32((uint32_t)(edi * 4u + 0x89d7a8u)));
L_00464085:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00464088:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046408a:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0046408c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00464091:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464093:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00464096:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00464098:  // push 0x3f866666
    t0 = 0x3f866666u; esp -= 4; M32(esp) = t0;
L_0046409d:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_004640a3:  // push 0x3f866666
    t0 = 0x3f866666u; esp -= 4; M32(esp) = t0;
L_004640a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004640a9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004640aa:  // push 0x3eae147b
    t0 = 0x3eae147bu; esp -= 4; M32(esp) = t0;
L_004640af:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004640b4:  // call 0x468750
    t0 = 0x00468750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004640b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004640b9:  // fadd dword ptr [0x5db5c8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5c8u)));
L_004640bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004640c0:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004640c5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004640c8:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004640cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004640cd:  // fadd dword ptr [0x5db5c4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db5c4u)));
L_004640d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004640d4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004640d7:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004640dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004640dc:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004640de:  // mov eax, dword ptr [edi*4 + 0x89d7a8]
    eax = (uint32_t)(M32((uint32_t)(edi * 4u + 0x89d7a8u)));
L_004640e5:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004640e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004640ea:  // sub edx, esi
    t0 = lsub<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_004640ec:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004640f1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004640f3:  // shl edx, 0x10
    t0 = lshl<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_004640f6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004640f8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004640fd:  // or edx, 0xffffff
    t0 = llog<32>(edx | 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00464103:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00464108:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00464109:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046410a:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0046410f:  // push 0x43b18000
    t0 = 0x43b18000u; esp -= 4; M32(esp) = t0;
L_00464114:  // push 0x43e48000
    t0 = 0x43e48000u; esp -= 4; M32(esp) = t0;
L_00464119:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046411eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046411e:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00464121:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00464125:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00464129:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0046412d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00464133:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00464135:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00464138:  // je 0x464144
    if (f.zf) goto L_00464144;
L_0046413a:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00464142:  // jmp 0x46415d
    goto L_0046415d;
L_00464144:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00464148:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0046414e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00464150:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00464153:  // jne 0x46415d
    if (!f.zf) goto L_0046415d;
L_00464155:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_0046415d:  // mov edx, dword ptr [0x679980]
    edx = (uint32_t)(M32((uint32_t)(0x679980u)));
L_00464163:  // mov eax, dword ptr [0x629410]
    eax = (uint32_t)(M32((uint32_t)(0x629410u)));
L_00464168:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00464169:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046416a:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0046416e:  // push 0x629454
    t0 = 0x629454u; esp -= 4; M32(esp) = t0;
L_00464173:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00464174:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464179u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464179:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0046417c:  // lea edx, [esp + 0x3c]
    edx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00464180:  // mov byte ptr [0x679b40], 0
    M8((uint32_t)(0x679b40u)) = (uint8_t)(0x0u);
L_00464187:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464189:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046418b:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00464190:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00464191:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464196u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464196:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0046419a:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004641a0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004641a3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004641a8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004641a9:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004641ad:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004641b1:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_004641b4:  // or eax, 0x102025
    t0 = llog<32>(eax | 0x102025u, f);
    eax = (uint32_t)(t0);
L_004641b9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004641ba:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004641bf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004641c4:  // push 0x3c23d70a
    t0 = 0x3c23d70au; esp -= 4; M32(esp) = t0;
L_004641c9:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004641ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004641ce:  // sub eax, 0x10
    t0 = lsub<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004641d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004641d2:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_004641d6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004641db:  // fild dword ptr [esp + 0x4c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4cu)));
L_004641df:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004641e2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004641e4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004641e6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004641ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004641eb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004641ed:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004641f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004641f2:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004641f6:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004641fc:  // mov byte ptr [0x679b40], 1
    M8((uint32_t)(0x679b40u)) = (uint8_t)(0x1u);
L_00464203:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0046420a:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00464211:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00464213:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00464216:  // je 0x464222
    if (f.zf) goto L_00464222;
L_00464218:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0046421a:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00464220:  // jmp 0x464237
    goto L_00464237;
L_00464222:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00464228:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0046422a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0046422d:  // jne 0x464237
    if (!f.zf) goto L_00464237;
L_0046422f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00464231:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00464237:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0046423d:  // cmp ebx, 0xc
    t0 = lsub<32>(ebx, 0xcu, f);
L_00464240:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00464244:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00464248:  // jne 0x46424f
    if (!f.zf) goto L_0046424f;
L_0046424a:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_0046424f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00464251:  // mov eax, dword ptr [0x89d88c]
    eax = (uint32_t)(M32((uint32_t)(0x89d88cu)));
L_00464256:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00464259:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046425b:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0046425d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00464262:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464264:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00464267:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00464269:  // push 0x3f866666
    t0 = 0x3f866666u; esp -= 4; M32(esp) = t0;
L_0046426e:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_00464274:  // push 0x3f866666
    t0 = 0x3f866666u; esp -= 4; M32(esp) = t0;
L_00464279:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046427a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046427b:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00464280:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00464285:  // call 0x468750
    t0 = 0x00468750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046428au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046428a:  // fadd dword ptr [0x5d8c20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c20u)));
L_00464290:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00464291:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00464296:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00464299:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046429eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046429e:  // fadd dword ptr [0x5db4a8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4a8u)));
L_004642a4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004642a5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004642a8:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004642adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004642ad:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004642b0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004642b5:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004642b7:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004642b9:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004642beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004642be:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004642c0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004642c2:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004642c7:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004642ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004642cc:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004642ce:  // mov eax, dword ptr [0x89d88c]
    eax = (uint32_t)(M32((uint32_t)(0x89d88cu)));
L_004642d3:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004642d6:  // sub edx, esi
    t0 = lsub<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_004642d8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004642da:  // shl edx, 0x10
    t0 = lshl<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_004642dd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004642e2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004642e4:  // and edx, 0xffafcfff
    t0 = llog<32>(edx & 0xffafcfffu, f);
    edx = (uint32_t)(t0);
L_004642ea:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004642ec:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004642f1:  // or edx, 0xafcfff
    t0 = llog<32>(edx | 0xafcfffu, f);
    edx = (uint32_t)(t0);
L_004642f7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004642fc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004642fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004642fe:  // push 0x3f7fbe77
    t0 = 0x3f7fbe77u; esp -= 4; M32(esp) = t0;
L_00464303:  // push 0x43020000
    t0 = 0x43020000u; esp -= 4; M32(esp) = t0;
L_00464308:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_0046430d:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464312u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464312:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00464315:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0046431a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046431c:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0046431e:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464323u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464323:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464325:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464327:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0046432c:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464331u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464331:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_00464337:  // fmul dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb8u)));
L_0046433d:  // fld qword ptr [0x5db3d0]
    lpush(x, (long double)F64((uint32_t)(0x5db3d0u)));
L_00464343:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464348u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464348:  // fsubr dword ptr [0x5d8c50]
    ST(0) = ((long double)F32((uint32_t)(0x5d8c50u))) - (ST(0));
L_0046434e:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00464353:  // fadd dword ptr [0x5db3d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3d8u)));
L_00464359:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0046435d:  // call 0x4681c0
    t0 = 0x004681c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464362u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464362:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00464364:  // shl ecx, 7
    t0 = lshl<32>(ecx, 0x7u, f);
    ecx = (uint32_t)(t0);
L_00464367:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00464369:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0046436b:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0046436e:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00464370:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464372:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00464375:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00464377:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046437b:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0046437e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00464383:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464385:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00464387:  // lea esi, [edx + eax - 0x1000000]
    esi = (uint32_t)((uint32_t)(edx + eax + 0xff000000u));
L_0046438e:  // mov eax, dword ptr [0x89d7fc]
    eax = (uint32_t)(M32((uint32_t)(0x89d7fcu)));
L_00464393:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_00464398:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046439d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046439e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046439f:  // push 0x3f7f7cee
    t0 = 0x3f7f7ceeu; esp -= 4; M32(esp) = t0;
L_004643a4:  // push 0x42f00000
    t0 = 0x42f00000u; esp -= 4; M32(esp) = t0;
L_004643a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004643aa:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004643afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004643af:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004643b2:  // mov edx, dword ptr [0x89d7fc]
    edx = (uint32_t)(M32((uint32_t)(0x89d7fcu)));
L_004643b8:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004643bc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004643be:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004643c3:  // fadd dword ptr [0x5d8c28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c28u)));
L_004643c9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004643cb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004643cd:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_004643d2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004643d7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004643d8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004643d9:  // push 0x3f7f7cee
    t0 = 0x3f7f7ceeu; esp -= 4; M32(esp) = t0;
L_004643de:  // push 0x42f00000
    t0 = 0x42f00000u; esp -= 4; M32(esp) = t0;
L_004643e3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004643e4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004643e7:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004643ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004643ec:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004643ef:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004643f4:  // call 0x4681e0
    t0 = 0x004681e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004643f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004643f9:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00464400:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00464406:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00464408:  // fst dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
L_0046440c:  // fcomp dword ptr [0x5d8588]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8588u)));
    lpop(x);
L_00464412:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00464414:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00464417:  // je 0x464492
    if (f.zf) goto L_00464492;
L_00464419:  // cmp ebx, 0xc
    t0 = lsub<32>(ebx, 0xcu, f);
L_0046441c:  // je 0x464492
    if (f.zf) goto L_00464492;
L_0046441e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00464423:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00464428u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00464428:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0046442c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046442e:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00464432:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00464437:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464439:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046443b:  // mov edx, dword ptr [0x89d834]
    edx = (uint32_t)(M32((uint32_t)(0x89d834u)));
L_00464441:  // fmul dword ptr [0x5db250]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db250u)));
L_00464447:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0046444b:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0046444f:  // fmul dword ptr [0x5db5c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db5c0u)));
L_00464455:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00464459:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046445a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046445b:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00464461:  // fmul dword ptr [0x5d95b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d95b8u)));
L_00464467:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0046446b:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046446f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00464471:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00464474:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00464476:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00464479:  // or ecx, 0xffffff
    t0 = llog<32>(ecx | 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0046447f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00464480:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00464481:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00464486:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00464488:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046448a:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046448fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046448f:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00464492:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00464493:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00464494:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00464495:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00464496:  // add esp, 0x90
    t0 = ladd<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_0046449c:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00462d40, 00462d40)
