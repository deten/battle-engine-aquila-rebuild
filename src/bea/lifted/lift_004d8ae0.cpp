// lifted from 004d8ae0 (vslot39, 734 bytes, 228 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d8ae0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d8ae0;
L_004d8ae0:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004d8ae3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d8ae4:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004d8ae8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d8ae9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d8aea:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004d8aee:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d8aef:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d8af1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d8af2:  // call 0x4f4480
    t0 = 0x004f4480u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8af7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8af7:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_004d8afb:  // jne 0x4d8db5
    if (!f.zf) goto L_004d8db5;
L_004d8b01:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004d8b03:  // je 0x4d8b29
    if (f.zf) goto L_004d8b29;
L_004d8b05:  // mov eax, dword ptr [ebx + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xccu)));
L_004d8b0b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8b0d:  // jne 0x4d8b29
    if (!f.zf) goto L_004d8b29;
L_004d8b0f:  // mov eax, dword ptr [esi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d8b15:  // mov ecx, dword ptr [eax + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x64u)));
L_004d8b18:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8b1a:  // jne 0x4d8b29
    if (!f.zf) goto L_004d8b29;
L_004d8b1c:  // test dword ptr [edi + 0x34], 0x1000000
    t0 = llog<32>(M32((uint32_t)(edi + 0x34u)) & 0x1000000u, f);
L_004d8b23:  // je 0x4d8db5
    if (f.zf) goto L_004d8db5;
L_004d8b29:  // mov eax, dword ptr [esi + 0x124]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x124u)));
L_004d8b2f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8b31:  // jne 0x4d8db5
    if (!f.zf) goto L_004d8db5;
L_004d8b37:  // mov ecx, dword ptr [esi + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d8b3d:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_004d8b40:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d8b46:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d8b48:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d8b4b:  // je 0x4d8b59
    if (f.zf) goto L_004d8b59;
L_004d8b4d:  // cmp edi, dword ptr [esi + 0xe8]
    t0 = lsub<32>(edi, M32((uint32_t)(esi + 0xe8u)), f);
L_004d8b53:  // jne 0x4d8db5
    if (!f.zf) goto L_004d8db5;
L_004d8b59:  // mov eax, dword ptr [ecx + 0x78]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x78u)));
L_004d8b5c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8b5e:  // je 0x4d8b74
    if (f.zf) goto L_004d8b74;
L_004d8b60:  // mov ecx, dword ptr [edi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x138u)));
L_004d8b66:  // mov eax, dword ptr [esi + 0x11c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x11cu)));
L_004d8b6c:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004d8b6e:  // je 0x4d8db5
    if (f.zf) goto L_004d8db5;
L_004d8b74:  // mov eax, dword ptr [esi + 0xec]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xecu)));
L_004d8b7a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8b7c:  // je 0x4d8ba7
    if (f.zf) goto L_004d8ba7;
L_004d8b7e:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_004d8b82:  // je 0x4d8ba7
    if (f.zf) goto L_004d8ba7;
L_004d8b84:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d8b86:  // je 0x4d8ba7
    if (f.zf) goto L_004d8ba7;
L_004d8b88:  // test byte ptr [edi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x10u, f);
L_004d8b8c:  // je 0x4d8ba7
    if (f.zf) goto L_004d8ba7;
L_004d8b8e:  // mov edx, dword ptr [edi + 0x138]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x138u)));
L_004d8b94:  // mov ecx, dword ptr [eax + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x138u)));
L_004d8b9a:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_004d8b9c:  // je 0x4d8ba7
    if (f.zf) goto L_004d8ba7;
L_004d8b9e:  // mov eax, dword ptr [eax + 0x574]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x574u)));
L_004d8ba4:  // inc dword ptr [eax + 0x38]
    t0 = linc<32>(M32((uint32_t)(eax + 0x38u)), f);
    M32((uint32_t)(eax + 0x38u)) = (uint32_t)(t0);
L_004d8ba7:  // mov eax, dword ptr [esi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d8bad:  // mov ecx, dword ptr [eax + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x50u)));
L_004d8bb0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8bb2:  // je 0x4d8cb2
    if (f.zf) goto L_004d8cb2;
L_004d8bb8:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d8bba:  // je 0x4d8cb2
    if (f.zf) goto L_004d8cb2;
L_004d8bc0:  // mov eax, dword ptr [edi + 0x38]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x38u)));
L_004d8bc3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8bc5:  // je 0x4d8cb2
    if (f.zf) goto L_004d8cb2;
L_004d8bcb:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d8bce:  // shr ecx, 4
    t0 = lshr<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004d8bd1:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004d8bd4:  // cmp cl, 2
    t0 = lsub<8>((ecx & 0xffu), 0x2u, f);
L_004d8bd7:  // jge 0x4d8cb2
    if ((f.sf == f.of)) goto L_004d8cb2;
L_004d8bdd:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_004d8be0:  // fsub dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004d8be3:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_004d8be6:  // fsub dword ptr [esi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x20u)));
L_004d8be9:  // lea edx, [esi + 0x7c]
    edx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004d8bec:  // fld dword ptr [edi + 0x24]
    lpush(x, (long double)F32((uint32_t)(edi + 0x24u)));
L_004d8bef:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004d8bf1:  // fsub dword ptr [esi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x24u)));
L_004d8bf4:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004d8bf7:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004d8bfb:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004d8bff:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004d8c02:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004d8c06:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d8c0a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d8c0e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d8c10:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8c12:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d8c14:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d8c16:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004d8c19:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8c1b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004d8c1f:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004d8c23:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004d8c27:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8c29:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d8c2b:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004d8c2d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d8c2f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004d8c35:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d8c37:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d8c3a:  // jne 0x4d8c60
    if (!f.zf) goto L_004d8c60;
L_004d8c3c:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004d8c42:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004d8c46:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8c48:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004d8c4c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d8c50:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8c52:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004d8c56:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d8c5a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8c5c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d8c60:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d8c62:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004d8c66:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d8c68:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8c6a:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004d8c6e:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004d8c72:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8c74:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d8c76:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d8c78:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8c7a:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d8c7c:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004d8c7e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d8c80:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d8c82:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004d8c86:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d8c8a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d8c8e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8c90:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d8c94:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004d8c98:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d8c9c:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004d8c9f:  // fstp dword ptr [esi + 0x1c]
    F32((uint32_t)(esi + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d8ca2:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004d8ca6:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004d8ca9:  // fstp dword ptr [esi + 0x20]
    F32((uint32_t)(esi + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d8cac:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_004d8caf:  // fstp dword ptr [esi + 0x24]
    F32((uint32_t)(esi + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d8cb2:  // mov dword ptr [esi + 0x124], 1
    M32((uint32_t)(esi + 0x124u)) = (uint32_t)(0x1u);
L_004d8cbc:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_004d8cbe:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004d8cc1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8cc3:  // je 0x4d8cd2
    if (f.zf) goto L_004d8cd2;
L_004d8cc5:  // mov ecx, dword ptr [ebx + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004d8ccb:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8ccd:  // jle 0x4d8cd2
    if ((f.zf || f.sf != f.of)) goto L_004d8cd2;
L_004d8ccf:  // mov eax, dword ptr [ebx + 0x68]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x68u)));
L_004d8cd2:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004d8cd4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d8cd5:  // movsx ebp, byte ptr [edi + 0x2c]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edi + 0x2cu))));
L_004d8cd9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d8cda:  // mov eax, dword ptr [esi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d8ce0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d8ce2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d8ce3:  // mov ecx, dword ptr [eax + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x1cu)));
L_004d8ce6:  // and ebp, 4
    t0 = llog<32>(ebp & 0x4u, f);
    ebp = (uint32_t)(t0);
L_004d8ce9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8cea:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d8cec:  // shr ebp, 2
    t0 = lshr<32>(ebp, 0x2u, f);
    ebp = (uint32_t)(t0);
L_004d8cef:  // call dword ptr [edx + 0xa0]
    t0 = M32((uint32_t)(edx + 0xa0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8cf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8cf5:  // test byte ptr [edi + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x8u, f);
L_004d8cf9:  // je 0x4d8d0c
    if (f.zf) goto L_004d8d0c;
L_004d8cfb:  // mov edx, dword ptr [esi + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d8d01:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d8d03:  // mov eax, dword ptr [edx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x20u)));
L_004d8d06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d8d07:  // call 0x40ac50
    t0 = 0x0040ac50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8d0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8d0c:  // mov ecx, dword ptr [esi + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xecu)));
L_004d8d12:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8d14:  // je 0x4d8d35
    if (f.zf) goto L_004d8d35;
L_004d8d16:  // test byte ptr [ecx + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x10u, f);
L_004d8d1a:  // je 0x4d8d35
    if (f.zf) goto L_004d8d35;
L_004d8d1c:  // test byte ptr [edi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x10u, f);
L_004d8d20:  // je 0x4d8d35
    if (f.zf) goto L_004d8d35;
L_004d8d22:  // test byte ptr [edi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(edi + 0x2cu)) & 0x4u, f);
L_004d8d26:  // je 0x4d8d35
    if (f.zf) goto L_004d8d35;
L_004d8d28:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004d8d2a:  // jne 0x4d8d35
    if (!f.zf) goto L_004d8d35;
L_004d8d2c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d8d2e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d8d2f:  // call dword ptr [edx + 0x194]
    t0 = M32((uint32_t)(edx + 0x194u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8d35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8d35:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d8d36:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d8d37:  // call 0x4e2e60
    t0 = 0x004e2e60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8d3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8d3c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004d8d3f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d8d41:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d8d42:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d8d43:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004d8d45:  // call 0x4d9f30
    t0 = 0x004d9f30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8d4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8d4a:  // mov eax, dword ptr [esi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d8d50:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d8d51:  // mov ecx, dword ptr [eax + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x50u)));
L_004d8d54:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8d56:  // je 0x4d8d9a
    if (f.zf) goto L_004d8d9a;
L_004d8d58:  // or byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) | 0x4u, f);
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)(t0);
L_004d8d5c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8d5e:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d8d64:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004d8d6a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8d6c:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004d8d70:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8d72:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d8d73:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d8d74:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_004d8d79:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004d8d7d:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d8d82:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8d87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8d87:  // mov dword ptr [esi + 0x124], 0
    M32((uint32_t)(esi + 0x124u)) = (uint32_t)(0x0u);
L_004d8d91:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d8d92:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d8d93:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d8d94:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004d8d97:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d8d9a:  // mov ecx, dword ptr [eax + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x60u)));
L_004d8d9d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8d9f:  // jne 0x4d8dab
    if (!f.zf) goto L_004d8dab;
L_004d8da1:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004d8da3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d8da5:  // call dword ptr [edx + 0xc8]
    t0 = M32((uint32_t)(edx + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8dabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8dab:  // mov dword ptr [esi + 0x124], 0
    M32((uint32_t)(esi + 0x124u)) = (uint32_t)(0x0u);
L_004d8db5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d8db6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d8db7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d8db8:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004d8dbb:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d8ae0, 004d8ae0)
