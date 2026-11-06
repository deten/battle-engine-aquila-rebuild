// lifted from 004c2d30 (vslot18, 998 bytes, 308 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c2d30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c2d30;
L_004c2d30:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c2d34:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004c2d37:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004c2d3a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c2d3b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c2d3c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c2d3d:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004c2d3f:  // jne 0x4c2d48
    if (!f.zf) goto L_004c2d48;
L_004c2d41:  // mov eax, dword ptr [edi + 0x68]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x68u)));
L_004c2d44:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004c2d48:  // mov esi, dword ptr [edi + 0x70]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x70u)));
L_004c2d4b:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004c2d4f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c2d51:  // jne 0x4c2d5f
    if (!f.zf) goto L_004c2d5f;
L_004c2d53:  // mov ecx, dword ptr [edi + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x6cu)));
L_004c2d56:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004c2d5a:  // jmp 0x4c2e05
    goto L_004c2e05;
L_004c2d5f:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004c2d65:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c2d67:  // jne 0x4c2d8c
    if (!f.zf) goto L_004c2d8c;
L_004c2d69:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c2d6f:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c2d72:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c2d73:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2d74:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c2d77:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2d78:  // lea edx, [esi + 0x6c]
    edx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c2d7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2d7c:  // lea eax, [esi + 0x64]
    eax = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c2d7f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2d80:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004c2d83:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2d84:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c2d85:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004c2d8a:  // jmp 0x4c2df6
    goto L_004c2df6;
L_004c2d8c:  // mov ecx, dword ptr [0x9c6400]
    ecx = (uint32_t)(M32((uint32_t)(0x9c6400u)));
L_004c2d92:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c2d93:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004c2d95:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004c2d99:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2d9a:  // lea ecx, [esi + 0x88]
    ecx = (uint32_t)((uint32_t)(esi + 0x88u));
L_004c2da0:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2da5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2da5:  // mov eax, dword ptr [esi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c2dab:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004c2daf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c2db1:  // je 0x4c2dc5
    if (f.zf) goto L_004c2dc5;
L_004c2db3:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004c2db5:  // je 0x4c2dc5
    if (f.zf) goto L_004c2dc5;
L_004c2db7:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c2dbb:  // fsub dword ptr [ebx + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x84u)));
L_004c2dc1:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c2dc5:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c2dcb:  // mov ecx, dword ptr [esi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c2dce:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c2dd2:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004c2dd6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c2dd7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2dd8:  // lea edx, [esi + 0x74]
    edx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c2ddb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2ddc:  // lea eax, [esi + 0x6c]
    eax = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c2ddf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2de0:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c2de3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2de4:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004c2de7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2de8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c2de9:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2deeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2dee:  // fdiv dword ptr [esp + 0x28]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x28u)));
L_004c2df2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2df3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c2df6:  // call 0x4c0c70
    t0 = 0x004c0c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2dfbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2dfb:  // fmul dword ptr [edi + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x6cu)));
L_004c2dfe:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004c2e01:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c2e05:  // mov eax, dword ptr [edi + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x5cu)));
L_004c2e08:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004c2e0b:  // je 0x4c300e
    if (f.zf) goto L_004c300e;
L_004c2e11:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004c2e12:  // je 0x4c2ec1
    if (f.zf) goto L_004c2ec1;
L_004c2e18:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004c2e19:  // jne 0x4c310d
    if (!f.zf) goto L_004c310d;
L_004c2e1f:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2e24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2e24:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c2e29:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c2e2e:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004c2e32:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2e37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2e37:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c2e3c:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c2e41:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004c2e45:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2e4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2e4a:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c2e4f:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c2e54:  // add ebx, 0x38
    t0 = ladd<32>(ebx, 0x38u, f);
    ebx = (uint32_t)(t0);
L_004c2e57:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004c2e5b:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004c2e5f:  // fmul dword ptr [edi + 0x78]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x78u)));
L_004c2e62:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c2e66:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c2e6c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c2e70:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004c2e74:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c2e78:  // fmul dword ptr [edi + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x7cu)));
L_004c2e7b:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c2e7f:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c2e85:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004c2e89:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004c2e8d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c2e91:  // fmul dword ptr [edi + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x80u)));
L_004c2e97:  // mov dword ptr [ebx], edx
    M32((uint32_t)(ebx)) = (uint32_t)(edx);
L_004c2e99:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004c2e9d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c2e9e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c2e9f:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c2ea3:  // mov dword ptr [ebx + 4], eax
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(eax);
L_004c2ea6:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c2eac:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c2eb0:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c2eb4:  // mov dword ptr [ebx + 8], ecx
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ecx);
L_004c2eb7:  // mov dword ptr [ebx + 0xc], edx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(edx);
L_004c2eba:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c2ebb:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004c2ebe:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004c2ec1:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2ec6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2ec6:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c2ecb:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c2ed0:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004c2ed4:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2ed9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2ed9:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c2ede:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c2ee3:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004c2ee7:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2eecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2eec:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c2ef1:  // lea esi, [ebx + 0x38]
    esi = (uint32_t)((uint32_t)(ebx + 0x38u));
L_004c2ef4:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c2ef9:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004c2efd:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004c2eff:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004c2f03:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c2f09:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c2f0d:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004c2f11:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c2f15:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004c2f17:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c2f1d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004c2f21:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004c2f25:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c2f29:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004c2f2c:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004c2f30:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c2f36:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004c2f3a:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c2f3e:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004c2f41:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004c2f44:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004c2f47:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004c2f4a:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004c2f4c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c2f4e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c2f50:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004c2f52:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004c2f54:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c2f56:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004c2f58:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004c2f5a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c2f5c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004c2f5e:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004c2f60:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c2f62:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c2f64:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004c2f6a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c2f6c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004c2f6f:  // jne 0x4c2f8d
    if (!f.zf) goto L_004c2f8d;
L_004c2f71:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004c2f77:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c2f79:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004c2f7b:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004c2f7d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c2f7f:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004c2f82:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004c2f85:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004c2f88:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004c2f8b:  // jmp 0x4c2f8f
    goto L_004c2f8f;
L_004c2f8d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c2f8f:  // mov eax, dword ptr [edi + 0x74]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x74u)));
L_004c2f92:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c2f94:  // je 0x4c2fae
    if (f.zf) goto L_004c2fae;
L_004c2f96:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c2f9a:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004c2f9c:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004c2f9e:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c2fa2:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004c2fa5:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004c2fa8:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c2fac:  // jmp 0x4c2fdd
    goto L_004c2fdd;
L_004c2fae:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2fb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2fb3:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c2fb8:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c2fbd:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004c2fc1:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004c2fc5:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c2fc9:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c2fcf:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c2fd1:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004c2fd3:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004c2fd5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c2fd7:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004c2fda:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004c2fdd:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004c2fe0:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004c2fe3:  // mov eax, dword ptr [edi + 0x64]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x64u)));
L_004c2fe6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c2fe8:  // je 0x4c310d
    if (f.zf) goto L_004c310d;
L_004c2fee:  // fld dword ptr [ebx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x40u)));
L_004c2ff1:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004c2ff7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c2ff9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c2ffc:  // je 0x4c3000
    if (f.zf) goto L_004c3000;
L_004c2ffe:  // fchs 
    ST(0) = -ST(0);
L_004c3000:  // fchs 
    ST(0) = -ST(0);
L_004c3002:  // fstp dword ptr [ebx + 0x40]
    F32((uint32_t)(ebx + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004c3005:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c3006:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c3007:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c3008:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004c300b:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004c300e:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004c3012:  // mov edi, dword ptr [edi + 0x60]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x60u)));
L_004c3015:  // sub edi, 0
    t0 = lsub<32>(edi, 0x0u, f);
    edi = (uint32_t)(t0);
L_004c3018:  // fmul dword ptr [0x5d85e0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e0u)));
L_004c301e:  // fidiv dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004c3022:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c3024:  // fsin 
    ST(0) = lfsin(ST(0));
L_004c3026:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c302a:  // fcos 
    ST(0) = lfcos(ST(0));
L_004c302c:  // je 0x4c30c6
    if (f.zf) goto L_004c30c6;
L_004c3032:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004c3033:  // je 0x4c3081
    if (f.zf) goto L_004c3081;
L_004c3035:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004c3036:  // jne 0x4c310b
    if (!f.zf) goto L_004c310b;
L_004c303c:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c3040:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c3044:  // add ebx, 0x38
    t0 = ladd<32>(ebx, 0x38u, f);
    ebx = (uint32_t)(t0);
L_004c3047:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004c304f:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c3053:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c3054:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c3055:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004c3059:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004c305d:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c3061:  // mov dword ptr [ebx], eax
    M32((uint32_t)(ebx)) = (uint32_t)(eax);
L_004c3063:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c3067:  // fchs 
    ST(0) = -ST(0);
L_004c3069:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004c306d:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c3071:  // mov dword ptr [ebx + 4], ecx
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(ecx);
L_004c3074:  // mov dword ptr [ebx + 8], edx
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(edx);
L_004c3077:  // mov dword ptr [ebx + 0xc], eax
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(eax);
L_004c307a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c307b:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004c307e:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004c3081:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c3085:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c3089:  // add ebx, 0x38
    t0 = ladd<32>(ebx, 0x38u, f);
    ebx = (uint32_t)(t0);
L_004c308c:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004c3094:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c3098:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c3099:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c309a:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004c309e:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004c30a2:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c30a6:  // mov dword ptr [ebx], ecx
    M32((uint32_t)(ebx)) = (uint32_t)(ecx);
L_004c30a8:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c30ac:  // fchs 
    ST(0) = -ST(0);
L_004c30ae:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c30b2:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c30b6:  // mov dword ptr [ebx + 4], edx
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(edx);
L_004c30b9:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_004c30bc:  // mov dword ptr [ebx + 0xc], ecx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(ecx);
L_004c30bf:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c30c0:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004c30c3:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004c30c6:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c30ca:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c30ce:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004c30d6:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c30da:  // add ebx, 0x38
    t0 = ladd<32>(ebx, 0x38u, f);
    ebx = (uint32_t)(t0);
L_004c30dd:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c30de:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c30df:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004c30e3:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c30e7:  // mov dword ptr [ebx], edx
    M32((uint32_t)(ebx)) = (uint32_t)(edx);
L_004c30e9:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c30ed:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c30f1:  // mov dword ptr [ebx + 4], eax
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(eax);
L_004c30f4:  // fchs 
    ST(0) = -ST(0);
L_004c30f6:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c30fa:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c30fe:  // mov dword ptr [ebx + 8], ecx
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ecx);
L_004c3101:  // mov dword ptr [ebx + 0xc], edx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(edx);
L_004c3104:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c3105:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004c3108:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004c310b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c310d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c310e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c310f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c3110:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004c3113:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004c2d30, 004c2d30)
