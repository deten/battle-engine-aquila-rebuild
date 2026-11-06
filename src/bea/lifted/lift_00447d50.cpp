// lifted from 00447d50 (FUN_00447d50, 501 bytes, 168 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00447d50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00447d50;
L_00447d50:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00447d53:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00447d54:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00447d55:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00447d56:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00447d58:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00447d59:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00447d5b:  // lea ebp, [esi + 0x280]
    ebp = (uint32_t)((uint32_t)(esi + 0x280u));
L_00447d61:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447d64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447d64:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00447d66:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00447d67:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00447d69:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00447d6c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00447d6e:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00447d70:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00447d74:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00447d76:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00447d79:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_00447d7c:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00447d7f:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00447d82:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00447d85:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00447d88:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_00447d8d:  // call 0x491ea0
    t0 = 0x00491ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447d92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447d92:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00447d94:  // je 0x447e71
    if (f.zf) goto L_00447e71;
L_00447d9a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00447d9c:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447da1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447da1:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00447da3:  // test byte ptr [edi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x10u, f);
L_00447da7:  // je 0x447e5f
    if (f.zf) goto L_00447e5f;
L_00447dad:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_00447daf:  // je 0x447e5f
    if (f.zf) goto L_00447e5f;
L_00447db5:  // lea ebx, [edi + 0x1c]
    ebx = (uint32_t)((uint32_t)(edi + 0x1cu));
L_00447db8:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00447dbd:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_00447dbf:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447dc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447dc4:  // fsub dword ptr [edi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x24u)));
L_00447dc7:  // fcomp dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
    lpop(x);
L_00447dcd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00447dcf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00447dd2:  // je 0x447e5f
    if (f.zf) goto L_00447e5f;
L_00447dd8:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00447dda:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_00447ddd:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_00447de0:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_00447de3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00447de5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00447de7:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00447de9:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00447deb:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00447ded:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00447def:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00447df1:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00447df5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00447df7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00447df9:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447dfcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447dfc:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00447dfe:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00447e00:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00447e04:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447e07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447e07:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00447e0b:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00447e0d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00447e0f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00447e13:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447e16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447e16:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00447e18:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00447e1a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00447e1e:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447e21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447e21:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00447e25:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_00447e2d:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_00447e31:  // fcomp dword ptr [esp + 0x1c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x1cu)));
    lpop(x);
L_00447e35:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00447e37:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00447e3a:  // je 0x447e44
    if (f.zf) goto L_00447e44;
L_00447e3c:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00447e44:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00447e48:  // fadd dword ptr [0x5db254]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db254u)));
L_00447e4e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00447e54:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00447e56:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00447e59:  // je 0x447f3b
    if (f.zf) goto L_00447f3b;
L_00447e5f:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_00447e64:  // call 0x492020
    t0 = 0x00492020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447e69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447e69:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00447e6b:  // jne 0x447d9a
    if (!f.zf) goto L_00447d9a;
L_00447e71:  // mov eax, dword ptr [esi + 0x27c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x27cu)));
L_00447e77:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00447e7a:  // je 0x447f2e
    if (f.zf) goto L_00447f2e;
L_00447e80:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00447e83:  // je 0x447f2e
    if (f.zf) goto L_00447f2e;
L_00447e89:  // mov ecx, dword ptr [0x855298]
    ecx = (uint32_t)(M32((uint32_t)(0x855298u)));
L_00447e8f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00447e91:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00447e95:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00447e97:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00447e9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00447e9a:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00447e9e:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00447ea2:  // add edi, 3
    t0 = ladd<32>(edi, 0x3u, f);
    edi = (uint32_t)(t0);
L_00447ea5:  // sar edi, 1
    t0 = lsar<32>(edi, 0x1u, f);
    edi = (uint32_t)(t0);
L_00447ea7:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_00447eaa:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00447eae:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00447eb2:  // sar edx, 1
    t0 = lsar<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_00447eb4:  // fld dword ptr [ebp + 4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x4u)));
L_00447eb7:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00447ebb:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00447ebf:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00447ec1:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00447ec3:  // sub esi, edi
    t0 = lsub<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_00447ec5:  // lea ebx, [eax + edi]
    ebx = (uint32_t)((uint32_t)(eax + edi));
L_00447ec8:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00447eca:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_00447ece:  // jge 0x447f2e
    if ((f.sf == f.of)) goto L_00447f2e;
L_00447ed0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00447ed2:  // jl 0x447f29
    if ((f.sf != f.of)) goto L_00447f29;
L_00447ed4:  // cmp esi, 0x100
    t0 = lsub<32>(esi, 0x100u, f);
L_00447eda:  // jge 0x447f29
    if ((f.sf == f.of)) goto L_00447f29;
L_00447edc:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00447ede:  // lea ecx, [edx + edi]
    ecx = (uint32_t)((uint32_t)(edx + edi));
L_00447ee1:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00447ee3:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00447ee5:  // jge 0x447f29
    if ((f.sf == f.of)) goto L_00447f29;
L_00447ee7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00447ee9:  // jl 0x447f1d
    if ((f.sf != f.of)) goto L_00447f1d;
L_00447eeb:  // cmp eax, 0x100
    t0 = lsub<32>(eax, 0x100u, f);
L_00447ef0:  // jge 0x447f1d
    if ((f.sf == f.of)) goto L_00447f1d;
L_00447ef2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00447ef4:  // and ecx, 0x80000007
    t0 = llog<32>(ecx & 0x80000007u, f);
    ecx = (uint32_t)(t0);
L_00447efa:  // jns 0x447f01
    if (!f.sf) goto L_00447f01;
L_00447efc:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00447efd:  // or ecx, 0xfffffff8
    t0 = llog<32>(ecx | 0xfffffff8u, f);
    ecx = (uint32_t)(t0);
L_00447f00:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00447f01:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_00447f06:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00447f0a:  // shl ebx, cl
    t0 = lshl<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_00447f0c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00447f0e:  // sar ecx, 3
    t0 = lsar<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_00447f11:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00447f14:  // add ecx, esi
    t0 = ladd<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00447f16:  // mov cl, byte ptr [ecx + ebp]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + ebp))) & 0xffu);
L_00447f19:  // test cl, bl
    t0 = llog<8>((ecx & 0xffu) & (ebx & 0xffu), f);
L_00447f1b:  // je 0x447f3b
    if (f.zf) goto L_00447f3b;
L_00447f1d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00447f1e:  // lea ecx, [edx + edi]
    ecx = (uint32_t)((uint32_t)(edx + edi));
L_00447f21:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00447f23:  // jl 0x447ee7
    if ((f.sf != f.of)) goto L_00447ee7;
L_00447f25:  // mov ebx, dword ptr [esp + 0x14]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00447f29:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00447f2a:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00447f2c:  // jl 0x447ed0
    if ((f.sf != f.of)) goto L_00447ed0;
L_00447f2e:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00447f33:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00447f34:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00447f35:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00447f36:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00447f37:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00447f3a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00447f3b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00447f3c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00447f3d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00447f3e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00447f40:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00447f41:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00447f44:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00447d50, 00447d50)
