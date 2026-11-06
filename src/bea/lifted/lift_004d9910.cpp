// lifted from 004d9910 (vslot0, 1078 bytes, 296 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d9910(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d9910;
L_004d9910:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004d9916:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004d9918:  // push 0x5d4a01
    t0 = 0x5d4a01u; esp -= 4; M32(esp) = t0;
L_004d991d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d991e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004d9925:  // sub esp, 0x98
    t0 = lsub<32>(esp, 0x98u, f);
    esp = (uint32_t)(t0);
L_004d992b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d992c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d992d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d992e:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d9930:  // mov ecx, dword ptr [esp + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_004d9937:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d9938:  // movsx eax, word ptr [ecx + 4]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ecx + 0x4u))));
L_004d993c:  // add eax, 0xfffff060
    t0 = ladd<32>(eax, 0xfffff060u, f);
    eax = (uint32_t)(t0);
L_004d9941:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_004d9944:  // ja 0x4d9d23
    if ((!f.cf && !f.zf)) goto L_004d9d23;
L_004d994a:  // jmp dword ptr [eax*4 + 0x4d9d48]
    t0 = M32((uint32_t)(eax * 4u + 0x4d9d48u));
    switch (t0) {
    case 0x004d9951u: goto L_004d9951;
    case 0x004d995eu: goto L_004d995e;
    case 0x004d997eu: goto L_004d997e;
    case 0x004d9a54u: goto L_004d9a54;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004d9951:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9952:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9954:  // call 0x4dac90
    t0 = 0x004dac90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9959u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9959:  // jmp 0x4d9d2b
    goto L_004d9d2b;
L_004d995e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9960:  // call 0x4db150
    t0 = 0x004db150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9965u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9965:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004d9967:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9969:  // mov dword ptr [esi + 0x120], 0
    M32((uint32_t)(esi + 0x120u)) = (uint32_t)(0x0u);
L_004d9973:  // call dword ptr [eax + 0xc8]
    t0 = M32((uint32_t)(eax + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9979u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9979:  // jmp 0x4d9d2b
    goto L_004d9d2b;
L_004d997e:  // mov edx, dword ptr [esi + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d9984:  // fld dword ptr [edx + 0x30]
    lpush(x, (long double)F32((uint32_t)(edx + 0x30u)));
L_004d9987:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d998d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d998f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d9992:  // je 0x4d9d2b
    if (f.zf) goto L_004d9d2b;
L_004d9998:  // mov eax, dword ptr [esi + 0x120]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x120u)));
L_004d999e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004d99a0:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d99a2:  // jne 0x4d9d2b
    if (!f.zf) goto L_004d9d2b;
L_004d99a8:  // cmp dword ptr [edx + 0x50], ebx
    t0 = lsub<32>(M32((uint32_t)(edx + 0x50u)), ebx, f);
L_004d99ab:  // jne 0x4d9a11
    if (!f.zf) goto L_004d9a11;
L_004d99ad:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d99b3:  // fsub dword ptr [ecx + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x10u)));
L_004d99b6:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_004d99b9:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004d99bf:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_004d99c5:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004d99cb:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d99cf:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_004d99d5:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004d99db:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004d99df:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d99e1:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004d99e5:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004d99e9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d99eb:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d99ef:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004d99f3:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004d99f6:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004d99fa:  // fstp dword ptr [esi + 0x1c]
    F32((uint32_t)(esi + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d99fd:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004d9a00:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_004d9a04:  // fstp dword ptr [esi + 0x20]
    F32((uint32_t)(esi + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d9a07:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004d9a0a:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004d9a0c:  // fstp dword ptr [esi + 0x24]
    F32((uint32_t)(esi + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d9a0f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9a11:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004d9a17:  // fsub dword ptr [0x5d8580]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8580u)));
L_004d9a1d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9a1e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9a1f:  // fcomp dword ptr [esi + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x24u)));
    lpop(x);
L_004d9a22:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9a24:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d9a27:  // je 0x4d9a2d
    if (f.zf) goto L_004d9a2d;
L_004d9a29:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004d9a2b:  // jmp 0x4d9a2f
    goto L_004d9a2f;
L_004d9a2d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d9a2f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9a31:  // call 0x4d9f30
    t0 = 0x004d9f30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9a36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9a36:  // mov ecx, dword ptr [esi + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d9a3c:  // cmp dword ptr [ecx + 0x60], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x60u)), ebx, f);
L_004d9a3f:  // jne 0x4d9d2b
    if (!f.zf) goto L_004d9d2b;
L_004d9a45:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004d9a47:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9a49:  // call dword ptr [edx + 0xc8]
    t0 = M32((uint32_t)(edx + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9a4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9a4f:  // jmp 0x4d9d2b
    goto L_004d9d2b;
L_004d9a54:  // mov eax, dword ptr [esi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004d9a5a:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004d9a5c:  // cmp dword ptr [eax + 0x4c], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4cu)), ebx, f);
L_004d9a5f:  // jne 0x4d9d0d
    if (!f.zf) goto L_004d9d0d;
L_004d9a65:  // cmp dword ptr [eax + 0x74], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x74u)), ebx, f);
L_004d9a68:  // jne 0x4d9d0d
    if (!f.zf) goto L_004d9d0d;
L_004d9a6e:  // cmp dword ptr [eax + 0x50], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x50u)), ebx, f);
L_004d9a71:  // je 0x4d9d17
    if (f.zf) goto L_004d9d17;
L_004d9a77:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_004d9a7d:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_004d9a80:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_004d9a86:  // lea edi, [esi + 0x7c]
    edi = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004d9a89:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9a8a:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004d9a8d:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004d9a90:  // fadd dword ptr [edi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi)));
L_004d9a92:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9a93:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9a94:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004d9a98:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d9a9c:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d9aa0:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d9aa4:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9aa9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9aa9:  // lea eax, [esi + 0xf8]
    eax = (uint32_t)((uint32_t)(esi + 0xf8u));
L_004d9aaf:  // mov dword ptr [esp + 0x3c], 0x5d8bfc
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x5d8bfcu);
L_004d9ab7:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004d9ab9:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_004d9abd:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d9ac0:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_004d9ac4:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d9ac7:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_004d9acb:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d9acf:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d9ad2:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d9ad6:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_004d9ada:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d9ade:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_004d9ae2:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004d9ae6:  // mov dword ptr [esp + 0x64], ecx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ecx);
L_004d9aea:  // mov dword ptr [esp + 0x68], edx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edx);
L_004d9aee:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_004d9af2:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004d9af6:  // mov dword ptr [esp + 0xb0], ebx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ebx);
L_004d9afd:  // call 0x4d9d60
    t0 = 0x004d9d60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9b02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9b02:  // push 0x213
    t0 = 0x213u; esp -= 4; M32(esp) = t0;
L_004d9b07:  // push 0x631d38
    t0 = 0x631d38u; esp -= 4; M32(esp) = t0;
L_004d9b0c:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_004d9b0e:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004d9b10:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d9b15:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9b1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9b1a:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004d9b1c:  // mov dword ptr [esp + 0x38], ebp
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebp);
L_004d9b20:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004d9b22:  // mov byte ptr [esp + 0xb0], 1
    M8((uint32_t)(esp + 0xb0u)) = (uint8_t)(0x1u);
L_004d9b2a:  // je 0x4d9b3c
    if (f.zf) goto L_004d9b3c;
L_004d9b2c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d9b2e:  // call 0x466120
    t0 = 0x00466120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9b33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9b33:  // mov dword ptr [ebp], 0x5de980
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de980u);
L_004d9b3a:  // jmp 0x4d9b3e
    goto L_004d9b3e;
L_004d9b3c:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004d9b3e:  // mov eax, dword ptr [esi + 0xec]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xecu)));
L_004d9b44:  // mov byte ptr [esp + 0xb0], bl
    M8((uint32_t)(esp + 0xb0u)) = (uint8_t)((ebx & 0xffu));
L_004d9b4b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d9b4d:  // mov dword ptr [esi + 0x38], ebp
    M32((uint32_t)(esi + 0x38u)) = (uint32_t)(ebp);
L_004d9b50:  // je 0x4d9b5e
    if (f.zf) goto L_004d9b5e;
L_004d9b52:  // cmp dword ptr [eax + 0x24c], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x24cu)), ebx, f);
L_004d9b58:  // je 0x4d9b5e
    if (f.zf) goto L_004d9b5e;
L_004d9b5a:  // mov dword ptr [esp + 0x74], eax
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(eax);
L_004d9b5e:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004d9b62:  // push 0x21d
    t0 = 0x21du; esp -= 4; M32(esp) = t0;
L_004d9b67:  // push 0x631d38
    t0 = 0x631d38u; esp -= 4; M32(esp) = t0;
L_004d9b6c:  // or edx, 4
    t0 = llog<32>(edx | 0x4u, f);
    edx = (uint32_t)(t0);
L_004d9b6f:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_004d9b71:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_004d9b73:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d9b78:  // mov dword ptr [esp + 0x80], esi
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(esi);
L_004d9b7f:  // mov dword ptr [esp + 0x88], edx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edx);
L_004d9b86:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9b8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9b8b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d9b8d:  // je 0x4d9bf7
    if (f.zf) goto L_004d9bf7;
L_004d9b8f:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004d9b97:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d9b9b:  // lea ecx, [eax + 0x14]
    ecx = (uint32_t)((uint32_t)(eax + 0x14u));
L_004d9b9e:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_004d9ba1:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004d9ba4:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004d9ba7:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004d9baf:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004d9bb1:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d9bb5:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004d9bbd:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004d9bc0:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d9bc4:  // mov dword ptr [eax], 0x5d892c
    M32((uint32_t)(eax)) = (uint32_t)(0x5d892cu);
L_004d9bca:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004d9bcd:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004d9bd1:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004d9bd4:  // mov edx, edi
    edx = (uint32_t)(edi);
L_004d9bd6:  // lea ecx, [eax + 0x24]
    ecx = (uint32_t)((uint32_t)(eax + 0x24u));
L_004d9bd9:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_004d9bdb:  // mov dword ptr [ecx], ebp
    M32((uint32_t)(ecx)) = (uint32_t)(ebp);
L_004d9bdd:  // mov ebp, dword ptr [edx + 4]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004d9be0:  // mov dword ptr [ecx + 4], ebp
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(ebp);
L_004d9be3:  // mov ebp, dword ptr [edx + 8]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004d9be6:  // mov dword ptr [ecx + 8], ebp
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(ebp);
L_004d9be9:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004d9bec:  // mov dword ptr [eax], 0x5d8bfc
    M32((uint32_t)(eax)) = (uint32_t)(0x5d8bfcu);
L_004d9bf2:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004d9bf5:  // jmp 0x4d9bf9
    goto L_004d9bf9;
L_004d9bf7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d9bf9:  // mov ecx, dword ptr [esi + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x38u)));
L_004d9bfc:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004d9c01:  // mov dword ptr [esp + 0x7c], eax
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(eax);
L_004d9c05:  // mov dword ptr [esp + 0x84], ebp
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ebp);
L_004d9c0c:  // mov dword ptr [esp + 0x88], ebp
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ebp);
L_004d9c13:  // mov dword ptr [esp + 0x80], 2
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x2u);
L_004d9c1e:  // mov dword ptr [esp + 0x8c], ebp
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(ebp);
L_004d9c25:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d9c27:  // lea edx, [esp + 0x70]
    edx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004d9c2b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d9c2c:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9c2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9c2f:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_004d9c33:  // jne 0x4d9cee
    if (!f.zf) goto L_004d9cee;
L_004d9c39:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004d9c3d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9c3e:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004d9c42:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d9c43:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9c44:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004d9c49:  // call 0x490a40
    t0 = 0x00490a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9c4eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9c4e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d9c50:  // je 0x4d9c96
    if (f.zf) goto L_004d9c96;
L_004d9c52:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d9c56:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004d9c5a:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004d9c5e:  // mov dword ptr [esi + 0x1c], edx
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(edx);
L_004d9c61:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004d9c65:  // mov dword ptr [esi + 0x20], eax
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(eax);
L_004d9c68:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9c69:  // mov dword ptr [esi + 0x24], ecx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ecx);
L_004d9c6c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9c6d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d9c6e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9c70:  // mov dword ptr [esi + 0x28], edx
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(edx);
L_004d9c73:  // call 0x4d9f30
    t0 = 0x004d9f30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9c78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9c78:  // or byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) | 0x4u, f);
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)(t0);
L_004d9c7c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9c7d:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d9c83:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004d9c89:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9c8a:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004d9c8e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9c8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d9c90:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004d9c94:  // jmp 0x4d9cdc
    goto L_004d9cdc;
L_004d9c96:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_004d9c9a:  // jne 0x4d9cee
    if (!f.zf) goto L_004d9cee;
L_004d9c9c:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004d9c9e:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004d9ca1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9ca2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9ca3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9ca4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9ca6:  // fstp dword ptr [esi + 0x1c]
    F32((uint32_t)(esi + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d9ca9:  // fld dword ptr [edi + 4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x4u)));
L_004d9cac:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004d9caf:  // fstp dword ptr [esi + 0x20]
    F32((uint32_t)(esi + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d9cb2:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004d9cb5:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_004d9cb8:  // fstp dword ptr [esi + 0x24]
    F32((uint32_t)(esi + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d9cbb:  // call 0x4d9f30
    t0 = 0x004d9f30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9cc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9cc0:  // or byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) | 0x4u, f);
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)(t0);
L_004d9cc4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9cc5:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d9ccb:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004d9cd1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9cd2:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004d9cd6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9cd7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9cd8:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004d9cdc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d9cdd:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_004d9ce2:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d9ce7:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9cecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9cec:  // jmp 0x4d9d2b
    goto L_004d9d2b;
L_004d9cee:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004d9cf0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9cf2:  // mov dword ptr [esp + 0xb0], 0xffffffff
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(0xffffffffu);
L_004d9cfd:  // mov dword ptr [esp + 0x3c], 0x5d892c
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x5d892cu);
L_004d9d05:  // call dword ptr [edx + 0xc8]
    t0 = M32((uint32_t)(edx + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9d0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9d0b:  // jmp 0x4d9d2b
    goto L_004d9d2b;
L_004d9d0d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9d0e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9d0f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9d10:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9d12:  // call 0x4d9f30
    t0 = 0x004d9f30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9d17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9d17:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004d9d19:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9d1b:  // call dword ptr [edx + 0xc8]
    t0 = M32((uint32_t)(edx + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9d21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9d21:  // jmp 0x4d9d2b
    goto L_004d9d2b;
L_004d9d23:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9d24:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9d26:  // call 0x4019e0
    t0 = 0x004019e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9d2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9d2b:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_004d9d32:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d9d33:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d9d34:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d9d35:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d9d36:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004d9d3d:  // add esp, 0xa4
    t0 = ladd<32>(esp, 0xa4u, f);
    esp = (uint32_t)(t0);
L_004d9d43:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d9910, 004d9910)
