// lifted from 004a3c30 (FUN_004a3c30, 1195 bytes, 373 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a3c30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a3c30;
L_004a3c30:  // sub esp, 0xf8
    t0 = lsub<32>(esp, 0xf8u, f);
    esp = (uint32_t)(t0);
L_004a3c36:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a3c37:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a3c38:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004a3c3a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a3c3b:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a3c3d:  // call dword ptr [eax + 0x3c]
    t0 = M32((uint32_t)(eax + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3c40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3c40:  // cmp eax, dword ptr [esi + 0x1c]
    t0 = lsub<32>(eax, M32((uint32_t)(esi + 0x1cu)), f);
L_004a3c43:  // je 0x4a3c4b
    if (f.zf) goto L_004a3c4b;
L_004a3c45:  // mov dword ptr [esi + 0x1c], eax
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(eax);
L_004a3c48:  // mov dword ptr [esi + 0x20], eax
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(eax);
L_004a3c4b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004a3c4d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3c4f:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3c52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3c52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3c53:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_004a3c57:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3c58:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3c5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3c5d:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004a3c60:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004a3c63:  // mov edi, dword ptr [esi + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004a3c66:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a3c69:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004a3c6b:  // je 0x4a3cbd
    if (f.zf) goto L_004a3cbd;
L_004a3c6d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a3c72:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3c77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3c77:  // fld qword ptr [0x5db488]
    lpush(x, (long double)F64((uint32_t)(0x5db488u)));
L_004a3c7d:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3c82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3c82:  // fmul dword ptr [0x5d85e0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e0u)));
L_004a3c88:  // mov eax, 0xff
    eax = (uint32_t)(0xffu);
L_004a3c8d:  // fcos 
    ST(0) = lfcos(ST(0));
L_004a3c8f:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004a3c95:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004a3c9b:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004a3ca1:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004a3ca5:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004a3ca9:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004a3cab:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004a3cad:  // or edi, 0xffffff00
    t0 = llog<32>(edi | 0xffffff00u, f);
    edi = (uint32_t)(t0);
L_004a3cb3:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_004a3cb6:  // or edi, eax
    t0 = llog<32>(edi | eax, f);
    edi = (uint32_t)(t0);
L_004a3cb8:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_004a3cbb:  // or edi, eax
    t0 = llog<32>(edi | eax, f);
    edi = (uint32_t)(t0);
L_004a3cbd:  // mov eax, dword ptr [esp + 0x110]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x110u)));
L_004a3cc4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a3cc6:  // je 0x4a3cf0
    if (f.zf) goto L_004a3cf0;
L_004a3cc8:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004a3cca:  // and edi, 0xffff0000
    t0 = llog<32>(edi & 0xffff0000u, f);
    edi = (uint32_t)(t0);
L_004a3cd0:  // and ecx, 0xff00
    t0 = llog<32>(ecx & 0xff00u, f);
    ecx = (uint32_t)(t0);
L_004a3cd6:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004a3cd8:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004a3cdb:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004a3cdd:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004a3ce0:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004a3ce3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a3ce5:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004a3ce8:  // and ecx, 0xff00
    t0 = llog<32>(ecx & 0xff00u, f);
    ecx = (uint32_t)(t0);
L_004a3cee:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004a3cf0:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004a3cf3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a3cf5:  // jne 0x4a3cfc
    if (!f.zf) goto L_004a3cfc;
L_004a3cf7:  // mov edi, 0xff505050
    edi = (uint32_t)(0xff505050u);
L_004a3cfc:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004a3d00:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004a3d04:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a3d05:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3d06:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004a3d08:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a3d0d:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3d12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3d12:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a3d14:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3d19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3d19:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004a3d1d:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004a3d24:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_004a3d2c:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004a3d2e:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004a3d32:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004a3d34:  // fadd dword ptr [esp + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xcu)));
L_004a3d38:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004a3d3e:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004a3d42:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004a3d46:  // fcomp dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
    lpop(x);
L_004a3d4c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a3d4e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004a3d51:  // je 0x4a3d72
    if (f.zf) goto L_004a3d72;
L_004a3d53:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004a3d5a:  // fsub dword ptr [0x5d85d8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d8u)));
L_004a3d60:  // mov dword ptr [esp + 0xc], 0x40a00000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x40a00000u);
L_004a3d68:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004a3d6a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004a3d6e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a3d70:  // jmp 0x4a3d74
    goto L_004a3d74;
L_004a3d72:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a3d74:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004a3d78:  // mov ebx, dword ptr [esp + 0x10c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10cu)));
L_004a3d7f:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004a3d83:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a3d88:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a3d89:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3d8b:  // lea edx, [esp + 0x48]
    edx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004a3d8f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3d91:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a3d92:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a3d93:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a3d94:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3d95:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004a3d97:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a3d9c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3da1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3da1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a3da3:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3da8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3da8:  // mov al, byte ptr [esi + 0x24]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x24u))) & 0xffu);
L_004a3dab:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004a3dad:  // je 0x4a409b
    if (f.zf) goto L_004a409b;
L_004a3db3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004a3db5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a3db6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3db8:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004a3dba:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004a3dbc:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3dbfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3dbf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a3dc1:  // jle 0x4a3dfa
    if ((f.zf || f.sf != f.of)) goto L_004a3dfa;
L_004a3dc3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004a3dc5:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_004a3dc9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3dca:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a3dcb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3dcd:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3dd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3dd0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3dd1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004a3dd3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a3dd8:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3dddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3ddd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a3ddf:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3de4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3de4:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004a3de8:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004a3dea:  // jle 0x4a3dee
    if ((f.zf || f.sf != f.of)) goto L_004a3dee;
L_004a3dec:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004a3dee:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a3df0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3df2:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004a3df3:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3df6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3df6:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004a3df8:  // jl 0x4a3dc3
    if ((f.sf != f.of)) goto L_004a3dc3;
L_004a3dfa:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004a3dfc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3dfe:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3e01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3e01:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a3e02:  // imul eax, dword ptr [esp + 0x24]
    t0 = limul32(eax, M32((uint32_t)(esp + 0x24u)), f);
    eax = (uint32_t)(t0);
L_004a3e07:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004a3e08:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004a3e0a:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004a3e0c:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004a3e10:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004a3e14:  // fsubr dword ptr [esp + 0x110]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x110u))) - (ST(0));
L_004a3e1b:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004a3e1f:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004a3e23:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004a3e27:  // mov eax, dword ptr [0x82b490]
    eax = (uint32_t)(M32((uint32_t)(0x82b490u)));
L_004a3e2c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a3e2e:  // jne 0x4a3e35
    if (!f.zf) goto L_004a3e35;
L_004a3e30:  // call 0x4d04d0
    t0 = 0x004d04d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3e35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3e35:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004a3e39:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004a3e3b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3e3d:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_004a3e45:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004a3e49:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3e4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3e4c:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004a3e4e:  // imul eax, dword ptr [esp + 0x24]
    t0 = limul32(eax, M32((uint32_t)(esp + 0x24u)), f);
    eax = (uint32_t)(t0);
L_004a3e53:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004a3e57:  // mov dword ptr [esp + 0x28], ebx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebx);
L_004a3e5b:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004a3e5f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004a3e63:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004a3e69:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a3e6b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004a3e6e:  // je 0x4a3e78
    if (f.zf) goto L_004a3e78;
L_004a3e70:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004a3e78:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004a3e7a:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a3e7e:  // fcomp dword ptr [0x5db34c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db34cu)));
    lpop(x);
L_004a3e84:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a3e86:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004a3e89:  // jne 0x4a3eb6
    if (!f.zf) goto L_004a3eb6;
L_004a3e8b:  // fcom dword ptr [0x5db34c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db34cu)));
L_004a3e91:  // fld dword ptr [0x5db34c]
    lpush(x, (long double)F32((uint32_t)(0x5db34cu)));
L_004a3e97:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a3e99:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004a3e9c:  // jne 0x4a3eb0
    if (!f.zf) goto L_004a3eb0;
L_004a3e9e:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004a3ea0:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004a3ea8:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004a3eac:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a3eae:  // jmp 0x4a3eb8
    goto L_004a3eb8;
L_004a3eb0:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004a3eb2:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004a3eb6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a3eb8:  // mov edi, dword ptr [0x89d950]
    edi = (uint32_t)(M32((uint32_t)(0x89d950u)));
L_004a3ebe:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004a3ec0:  // sub edi, 0x11
    t0 = lsub<32>(edi, 0x11u, f);
    edi = (uint32_t)(t0);
L_004a3ec3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a3ec8:  // neg edi
    t0 = lneg<32>(edi, f);
    edi = (uint32_t)(t0);
L_004a3eca:  // sbb edi, edi
    t0 = lsbb<32>(edi, edi, f);
    edi = (uint32_t)(t0);
L_004a3ecc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3ece:  // and edi, 0x1806d7
    t0 = llog<32>(edi & 0x1806d7u, f);
    edi = (uint32_t)(t0);
L_004a3ed4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a3ed9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3edb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3edd:  // add edi, 0xff283969
    t0 = ladd<32>(edi, 0xff283969u, f);
    edi = (uint32_t)(t0);
L_004a3ee3:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3ee6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3ee6:  // imul eax, dword ptr [esp + 0x34]
    t0 = limul32(eax, M32((uint32_t)(esp + 0x34u)), f);
    eax = (uint32_t)(t0);
L_004a3eeb:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004a3eef:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a3ef0:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004a3ef4:  // add ebp, 3
    t0 = ladd<32>(ebp, 0x3u, f);
    ebp = (uint32_t)(t0);
L_004a3ef7:  // mov eax, dword ptr [0x82b490]
    eax = (uint32_t)(M32((uint32_t)(0x82b490u)));
L_004a3efc:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_004a3f00:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004a3f04:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004a3f08:  // fmul dword ptr [0x5dbb50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb50u)));
L_004a3f0e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a3f11:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004a3f15:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a3f16:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004a3f1a:  // fmul dword ptr [0x5dbb50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb50u)));
L_004a3f20:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a3f23:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a3f24:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3f26:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a3f2b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3f2d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3f2f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3f30:  // push 0x3b83126f
    t0 = 0x3b83126fu; esp -= 4; M32(esp) = t0;
L_004a3f35:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a3f36:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a3f37:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3f3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3f3c:  // fild dword ptr [esp + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x60u)));
L_004a3f40:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004a3f43:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004a3f45:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004a3f47:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a3f4b:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004a3f4f:  // jle 0x4a4059
    if ((f.zf || f.sf != f.of)) goto L_004a4059;
L_004a3f55:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004a3f59:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004a3f5f:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004a3f63:  // jmp 0x4a3f69
    goto L_004a3f69;
L_004a3f65:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004a3f69:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004a3f6c:  // mov ebx, 0xff404040
    ebx = (uint32_t)(0xff404040u);
L_004a3f71:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004a3f73:  // jne 0x4a3f78
    if (!f.zf) goto L_004a3f78;
L_004a3f75:  // or ebx, 0xffffffff
    t0 = llog<32>(ebx | 0xffffffffu, f);
    ebx = (uint32_t)(t0);
L_004a3f78:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004a3f7c:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004a3f80:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004a3f84:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004a3f8a:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004a3f8e:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004a3f92:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a3f96:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004a3f9a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004a3f9e:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004a3fa2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a3fa3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3fa4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a3fa5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a3fa6:  // call 0x4693d0
    t0 = 0x004693d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3fabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3fab:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004a3fae:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004a3fb0:  // je 0x4a3fb5
    if (f.zf) goto L_004a3fb5;
L_004a3fb2:  // mov dword ptr [esi + 0x20], edi
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(edi);
L_004a3fb5:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004a3fb9:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a3fbb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a3fbc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a3fc1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3fc3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a3fc5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a3fc6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a3fc8:  // call dword ptr [eax + 0x44]
    t0 = M32((uint32_t)(eax + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3fcbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3fcb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a3fcc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a3fcd:  // mov ebx, dword ptr [esp + 0x4c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004a3fd1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a3fd2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a3fd3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004a3fd5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a3fda:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3fdfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3fdf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a3fe1:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a3fe6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a3fe6:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004a3fea:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a3fee:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004a3ff2:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004a3ff6:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004a3ffa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a3ffb:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004a3fff:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004a4005:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004a4009:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004a400d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a400e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a400f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a4010:  // call 0x469400
    t0 = 0x00469400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a4015u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a4015:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004a4018:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004a401a:  // je 0x4a4044
    if (f.zf) goto L_004a4044;
L_004a401c:  // mov al, byte ptr [esi + 0x25]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x25u))) & 0xffu);
L_004a401f:  // mov dword ptr [esi + 0x20], edi
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(edi);
L_004a4022:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004a4024:  // mov byte ptr [esi + 0x24], 0
    M8((uint32_t)(esi + 0x24u)) = (uint8_t)(0x0u);
L_004a4028:  // jne 0x4a403a
    if (!f.zf) goto L_004a403a;
L_004a402a:  // cmp dword ptr [esi + 0x1c], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x1cu)), edi, f);
L_004a402d:  // je 0x4a403a
    if (f.zf) goto L_004a403a;
L_004a402f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a4031:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a4032:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a4034:  // mov dword ptr [esi + 0x1c], edi
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(edi);
L_004a4037:  // call dword ptr [eax + 0x38]
    t0 = M32((uint32_t)(eax + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a403au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a403a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004a403c:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a4041u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a4041:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a4044:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004a4048:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004a404c:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004a404d:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004a4051:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004a4053:  // jl 0x4a3f65
    if ((f.sf != f.of)) goto L_004a3f65;
L_004a4059:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_004a405e:  // call 0x44dea0
    t0 = 0x0044dea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a4063u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a4063:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a4065:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004a4066:  // jne 0x4a40cf
    if (!f.zf) goto L_004a40cf;
L_004a4068:  // mov eax, dword ptr [0x89be28]
    eax = (uint32_t)(M32((uint32_t)(0x89be28u)));
L_004a406d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a406f:  // je 0x4a40cf
    if (f.zf) goto L_004a40cf;
L_004a4071:  // mov edx, dword ptr [esi + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004a4074:  // mov byte ptr [esi + 0x24], 0
    M8((uint32_t)(esi + 0x24u)) = (uint8_t)(0x0u);
L_004a4078:  // mov dword ptr [esi + 0x20], edx
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(edx);
L_004a407b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004a407d:  // mov dword ptr [0x89be28], 0
    M32((uint32_t)(0x89be28u)) = (uint32_t)(0x0u);
L_004a4087:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a408cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a408c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004a408f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a4090:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a4091:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a4092:  // add esp, 0xf8
    t0 = ladd<32>(esp, 0xf8u, f);
    esp = (uint32_t)(t0);
L_004a4098:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004a409b:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004a409e:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a40a0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a40a5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004a40aa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a40ac:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a40ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a40af:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a40b1:  // call dword ptr [eax + 0x44]
    t0 = M32((uint32_t)(eax + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a40b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a40b4:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004a40b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a40b9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a40ba:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a40bb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a40bc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004a40be:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004a40c3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a40c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a40c8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a40ca:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a40cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a40cf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a40d0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a40d1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a40d2:  // add esp, 0xf8
    t0 = ladd<32>(esp, 0xf8u, f);
    esp = (uint32_t)(t0);
L_004a40d8:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004a3c30, 004a3c30)
