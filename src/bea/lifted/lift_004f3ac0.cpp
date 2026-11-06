// lifted from 004f3ac0 (FUN_004f3ac0, 394 bytes, 129 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f3ac0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f3ac0;
L_004f3ac0:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004f3ac3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f3ac4:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004f3ac6:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_004f3ac9:  // test eax, 0x80100
    t0 = llog<32>(eax & 0x80100u, f);
L_004f3ace:  // jne 0x4f3b69
    if (!f.zf) goto L_004f3b69;
L_004f3ad4:  // test al, 8
    t0 = llog<8>((eax & 0xffu) & 0x8u, f);
L_004f3ad6:  // je 0x4f3b13
    if (f.zf) goto L_004f3b13;
L_004f3ad8:  // test ah, 2
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x2u, f);
L_004f3adb:  // je 0x4f3c26
    if (f.zf) goto L_004f3c26;
L_004f3ae1:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004f3ae5:  // add edi, 0x1c
    t0 = ladd<32>(edi, 0x1cu, f);
    edi = (uint32_t)(t0);
L_004f3ae8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f3aea:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004f3aec:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f3aee:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004f3af1:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004f3af4:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_004f3af7:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f3afa:  // mov edx, dword ptr [edi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004f3afd:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f3afe:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004f3b01:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004f3b04:  // fadd dword ptr [0x5df704]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5df704u)));
L_004f3b0a:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004f3b0d:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004f3b10:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f3b13:  // mov ecx, dword ptr [edi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_004f3b16:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f3b18:  // je 0x4f3c26
    if (f.zf) goto L_004f3c26;
L_004f3b1e:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f3b20:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3b23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3b23:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f3b25:  // je 0x4f3c26
    if (f.zf) goto L_004f3c26;
L_004f3b2b:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_004f3b2e:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004f3b32:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_004f3b35:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004f3b39:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004f3b3d:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004f3b41:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004f3b44:  // fadd dword ptr [edi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x24u)));
L_004f3b47:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004f3b4b:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f3b4d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f3b4e:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004f3b52:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004f3b56:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004f3b59:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004f3b5d:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f3b60:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f3b63:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004f3b66:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f3b69:  // mov ecx, dword ptr [edi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_004f3b6c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f3b6e:  // je 0x4f3c26
    if (f.zf) goto L_004f3c26;
L_004f3b74:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f3b76:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3b79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3b79:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f3b7b:  // je 0x4f3c26
    if (f.zf) goto L_004f3c26;
L_004f3b81:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_004f3b84:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f3b85:  // test eax, 0x80000000
    t0 = llog<32>(eax & 0x80000000u, f);
L_004f3b8a:  // lea esi, [edi + 0x3c]
    esi = (uint32_t)((uint32_t)(edi + 0x3cu));
L_004f3b8d:  // jne 0x4f3b94
    if (!f.zf) goto L_004f3b94;
L_004f3b8f:  // mov esi, 0x83d9c0
    esi = (uint32_t)(0x83d9c0u);
L_004f3b94:  // mov ecx, dword ptr [edi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_004f3b97:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f3b99:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3b9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3b9c:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004f3b9f:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004f3ba2:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004f3ba5:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f3ba8:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004f3bac:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f3bae:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004f3bb0:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004f3bb2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f3bb4:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004f3bb7:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004f3bba:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004f3bbd:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f3bc0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f3bc2:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004f3bc5:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004f3bc7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f3bc9:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f3bcd:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_004f3bd0:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004f3bd3:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004f3bd6:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f3bd9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f3bdb:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004f3bde:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004f3be0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f3be1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f3be3:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004f3be7:  // fadd dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x1cu)));
L_004f3bea:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004f3bee:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004f3bf2:  // fadd dword ptr [edi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x20u)));
L_004f3bf5:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004f3bf9:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004f3bfd:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004f3c01:  // fadd dword ptr [edi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x24u)));
L_004f3c04:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004f3c08:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f3c0a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f3c0b:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004f3c0f:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004f3c13:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004f3c16:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004f3c1a:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f3c1d:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f3c20:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004f3c23:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f3c26:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004f3c2a:  // add edi, 0x1c
    t0 = ladd<32>(edi, 0x1cu, f);
    edi = (uint32_t)(t0);
L_004f3c2d:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004f3c2f:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f3c31:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004f3c34:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004f3c37:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_004f3c3a:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f3c3d:  // mov eax, dword ptr [edi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004f3c40:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f3c41:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f3c44:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004f3c47:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f3ac0, 004f3ac0)
