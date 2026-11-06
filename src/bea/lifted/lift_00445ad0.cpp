// lifted from 00445ad0 (FUN_00445ad0, 1135 bytes, 362 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00445ad0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00445ad0;
L_00445ad0:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00445ad3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00445ad4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00445ad5:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00445ad7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00445ad8:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00445ade:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445ae3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445ae3:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00445ae8:  // jns 0x445af1
    if (!f.sf) goto L_00445af1;
L_00445aea:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445aeb:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00445af0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445af1:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00445af5:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445af8:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00445afc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445afe:  // fmul dword ptr [0x5d85f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f0u)));
L_00445b04:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00445b0a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00445b0e:  // je 0x445b22
    if (f.zf) goto L_00445b22;
L_00445b10:  // mov eax, dword ptr [esi + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_00445b13:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445b15:  // je 0x445b22
    if (f.zf) goto L_00445b22;
L_00445b17:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00445b19:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00445b1b:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445b1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445b1e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00445b22:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445b25:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00445b27:  // je 0x445efe
    if (f.zf) goto L_00445efe;
L_00445b2d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00445b2f:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00445b33:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00445b34:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445b3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445b3a:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445b3d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00445b3f:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445b42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445b42:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445b45:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00445b49:  // test dword ptr [eax + 0x34], 0x80000
    t0 = llog<32>(M32((uint32_t)(eax + 0x34u)) & 0x80000u, f);
L_00445b50:  // je 0x445b67
    if (f.zf) goto L_00445b67;
L_00445b52:  // mov eax, dword ptr [eax + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x26cu)));
L_00445b58:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445b5a:  // je 0x445b67
    if (f.zf) goto L_00445b67;
L_00445b5c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00445b5e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00445b60:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445b63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445b63:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00445b67:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445b6a:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00445b6e:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_00445b71:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00445b75:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_00445b78:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00445b7c:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_00445b7f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00445b81:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00445b83:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00445b85:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00445b87:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00445b89:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00445b8b:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00445b8d:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00445b8f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00445b91:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00445b93:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00445b95:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445b97:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445b99:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00445b9d:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445ba0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445ba0:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_00445ba4:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445ba7:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_00445bab:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00445bad:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00445bb1:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00445bb5:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_00445bb8:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00445bbc:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_00445bbf:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00445bc1:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00445bc3:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00445bc5:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00445bc7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00445bc9:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00445bcb:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00445bcd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445bcf:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00445bd3:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445bd6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445bd6:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_00445bda:  // mov eax, dword ptr [esi + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_00445bdd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445bdf:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_00445be3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00445be7:  // je 0x445dc5
    if (f.zf) goto L_00445dc5;
L_00445bed:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_00445bf3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445bf5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00445bf8:  // je 0x445ce0
    if (f.zf) goto L_00445ce0;
L_00445bfe:  // mov dword ptr [esi + 0x68], 0
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(0x0u);
L_00445c05:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00445c0b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445c0d:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445c12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445c12:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00445c17:  // jns 0x445c20
    if (!f.sf) goto L_00445c20;
L_00445c19:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445c1a:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00445c1f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445c20:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00445c24:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445c27:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00445c2b:  // fmul dword ptr [0x5db1ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1ecu)));
L_00445c31:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_00445c37:  // fstp dword ptr [esi + 0x70]
    F32((uint32_t)(esi + 0x70u)) = lf32(ST(0));
    lpop(x);
L_00445c3a:  // call 0x4455c0
    t0 = 0x004455c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445c3fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445c3f:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445c42:  // mov dword ptr [esi + 0x64], 0
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(0x0u);
L_00445c49:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445c4b:  // je 0x445f34
    if (f.zf) goto L_00445f34;
L_00445c51:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445c54:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00445c57:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00445c58:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_00445c5c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00445c5d:  // add ecx, 0x1c
    t0 = ladd<32>(ecx, 0x1cu, f);
    ecx = (uint32_t)(t0);
L_00445c60:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445c65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445c65:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00445c69:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445c6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445c6e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00445c72:  // fmul dword ptr [0x5db1e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e8u)));
L_00445c78:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445c7b:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00445c7f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00445c81:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00445c82:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00445c86:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00445c8a:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00445c8e:  // fmul dword ptr [0x5db1e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e8u)));
L_00445c94:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00445c98:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00445c9c:  // fmul dword ptr [0x5db1e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e8u)));
L_00445ca2:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00445ca6:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_00445ca8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00445ca9:  // lea ecx, [eax + 0x1c]
    ecx = (uint32_t)((uint32_t)(eax + 0x1cu));
L_00445cac:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445cb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445cb1:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00445cb3:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00445cb6:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00445cb8:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00445cba:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00445cbd:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00445cc0:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00445cc3:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00445cc6:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00445cc9:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00445ccc:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445ccf:  // call dword ptr [edi + 0xf4]
    t0 = M32((uint32_t)(edi + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445cd5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445cd5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00445cd9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00445cda:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00445cdb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00445cdc:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00445cdf:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00445ce0:  // fcomp dword ptr [0x5d857c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d857cu)));
    lpop(x);
L_00445ce6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445ce8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00445ceb:  // jne 0x445d43
    if (!f.zf) goto L_00445d43;
L_00445ced:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00445cf1:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00445cf5:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00445cf9:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445cfc:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00445d00:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00445d04:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00445d08:  // fsub dword ptr [0x5db1e4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db1e4u)));
L_00445d0e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00445d10:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00445d12:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00445d15:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00445d17:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00445d1b:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_00445d1d:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00445d21:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_00445d24:  // mov esi, dword ptr [esp + 0x38]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00445d28:  // mov dword ptr [eax + 8], esi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(esi);
L_00445d2b:  // mov esi, dword ptr [esp + 0x3c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00445d2f:  // mov dword ptr [eax + 0xc], esi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(esi);
L_00445d32:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445d38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445d38:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00445d3c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00445d3d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00445d3e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00445d3f:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00445d42:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00445d43:  // mov eax, dword ptr [esi + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_00445d46:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445d48:  // jne 0x445d89
    if (!f.zf) goto L_00445d89;
L_00445d4a:  // mov dword ptr [esi + 0x68], 1
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(0x1u);
L_00445d51:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00445d57:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445d5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445d5c:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00445d61:  // jns 0x445d6a
    if (!f.sf) goto L_00445d6a;
L_00445d63:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445d64:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00445d69:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445d6a:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00445d6e:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445d71:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00445d75:  // fmul dword ptr [0x5db1e0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e0u)));
L_00445d7b:  // fadd dword ptr [0x5d85d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d4u)));
L_00445d81:  // fstp dword ptr [esi + 0x70]
    F32((uint32_t)(esi + 0x70u)) = lf32(ST(0));
    lpop(x);
L_00445d84:  // call 0x445570
    t0 = 0x00445570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445d89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445d89:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445d8c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445d8e:  // je 0x445f34
    if (f.zf) goto L_00445f34;
L_00445d94:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00445d97:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00445d9a:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00445d9c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00445d9e:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00445da0:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00445da3:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00445da6:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00445da9:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00445dac:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00445daf:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00445db2:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445db5:  // call 0x4fcec0
    t0 = 0x004fcec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445dbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445dba:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00445dbe:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00445dbf:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00445dc0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00445dc1:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00445dc4:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00445dc5:  // fcomp dword ptr [0x5d9768]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d9768u)));
    lpop(x);
L_00445dcb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445dcd:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00445dd0:  // jne 0x445e3f
    if (!f.zf) goto L_00445e3f;
L_00445dd2:  // fcomp dword ptr [0x5d8610]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8610u)));
    lpop(x);
L_00445dd8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445dda:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00445ddd:  // jne 0x445e41
    if (!f.zf) goto L_00445e41;
L_00445ddf:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445de2:  // mov edi, dword ptr [esi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445de5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00445de7:  // mov dword ptr [esi + 0x64], 1
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(0x1u);
L_00445dee:  // mov ebp, dword ptr [ecx]
    ebp = (uint32_t)(M32((uint32_t)(ecx)));
L_00445df0:  // push 0x41f00000
    t0 = 0x41f00000u; esp -= 4; M32(esp) = t0;
L_00445df5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00445df7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00445df9:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00445dfd:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445e02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445e02:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00445e06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00445e07:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00445e08:  // lea ecx, [edi + 0x1c]
    ecx = (uint32_t)((uint32_t)(edi + 0x1cu));
L_00445e0b:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445e10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445e10:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00445e12:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00445e15:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00445e17:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00445e19:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00445e1c:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00445e1f:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00445e22:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00445e25:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00445e28:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00445e2b:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445e2e:  // call dword ptr [ebp + 0xf4]
    t0 = M32((uint32_t)(ebp + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445e34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445e34:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00445e38:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00445e39:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00445e3a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00445e3b:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00445e3e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00445e3f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445e41:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445e44:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00445e45:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00445e48:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00445e4b:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_00445e4f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00445e52:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00445e55:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_00445e59:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00445e5a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00445e5d:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00445e5f:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_00445e63:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00445e64:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_00445e68:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00445e6b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445e70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445e70:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00445e74:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00445e76:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00445e7a:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00445e7e:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00445e82:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00445e84:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00445e86:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00445e88:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00445e8a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00445e8c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00445e8e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00445e90:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00445e92:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445e94:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00445e9a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445e9c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00445e9f:  // jne 0x445ec1
    if (!f.zf) goto L_00445ec1;
L_00445ea1:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00445ea7:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00445eab:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00445ead:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00445eb1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00445eb3:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00445eb5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00445eb7:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00445ebb:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00445ebd:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00445ec1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445ec3:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00445ec7:  // fmul dword ptr [0x5db1e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e8u)));
L_00445ecd:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445ed0:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00445ed4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00445ed6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00445ed7:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00445edb:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00445edf:  // fmul dword ptr [0x5db1e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e8u)));
L_00445ee5:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00445ee9:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00445eed:  // fmul dword ptr [0x5db1e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e8u)));
L_00445ef3:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00445ef7:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_00445ef9:  // jmp 0x445ca8
    goto L_00445ca8;
L_00445efe:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00445f00:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00445f02:  // mov dword ptr [esi + 0x68], 0
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(0x0u);
L_00445f09:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445f0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445f0c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445f0e:  // je 0x445f1d
    if (f.zf) goto L_00445f1d;
L_00445f10:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00445f16:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00445f17:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00445f18:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00445f19:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00445f1c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00445f1d:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445f20:  // call 0x4fda10
    t0 = 0x004fda10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445f25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445f25:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445f27:  // jne 0x445f34
    if (!f.zf) goto L_00445f34;
L_00445f29:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445f2c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00445f2e:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445f34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445f34:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00445f38:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00445f39:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00445f3a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00445f3b:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00445f3e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00445ad0, 00445ad0)
