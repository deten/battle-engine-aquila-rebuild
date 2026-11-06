// lifted from 005588f0 (FUN_005588f0, 1509 bytes, 336 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005588f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005588f0;
L_005588f0:  // mov eax, dword ptr [0x704e48]
    eax = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_005588f5:  // sub esp, 0x140
    t0 = lsub<32>(esp, 0x140u, f);
    esp = (uint32_t)(t0);
L_005588fb:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_005588fe:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005588ff:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00558900:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00558901:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00558903:  // je 0x558ec9
    if (f.zf) goto L_00558ec9;
L_00558909:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055890b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055890d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055890f:  // lea ecx, [esp + 0xc8]
    ecx = (uint32_t)((uint32_t)(esp + 0xc8u));
L_00558916:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_0055891e:  // mov dword ptr [esp + 0x90], 0
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(0x0u);
L_00558929:  // mov dword ptr [esp + 0x94], 0
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0x0u);
L_00558934:  // mov dword ptr [esp + 0x98], 0
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(0x0u);
L_0055893f:  // mov dword ptr [esp + 0xa0], 0
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0x0u);
L_0055894a:  // mov dword ptr [esp + 0xa4], 0
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(0x0u);
L_00558955:  // mov dword ptr [esp + 0xa8], 0
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0x0u);
L_00558960:  // mov dword ptr [esp + 0xac], 0
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0x0u);
L_0055896b:  // mov dword ptr [esp + 0x80], 0
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x0u);
L_00558976:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_00558981:  // mov dword ptr [esp + 0x88], 0
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0x0u);
L_0055898c:  // mov dword ptr [esp + 0xb0], 0
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(0x0u);
L_00558997:  // mov dword ptr [esp + 0xb4], 0
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(0x0u);
L_005589a2:  // mov dword ptr [esp + 0xb8], 0
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(0x0u);
L_005589ad:  // mov dword ptr [esp + 0xbc], 0
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(0x0u);
L_005589b8:  // mov dword ptr [esp + 0xc0], 0
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(0x0u);
L_005589c3:  // mov dword ptr [esp + 0xc4], 0
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(0x0u);
L_005589ce:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005589d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005589d3:  // mov ecx, dword ptr [esi + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x94u)));
L_005589d9:  // mov eax, 0x3f800000
    eax = (uint32_t)(0x3f800000u);
L_005589de:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_005589e0:  // jne 0x558a14
    if (!f.zf) goto L_00558a14;
L_005589e2:  // cmp dword ptr [esi + 0x98], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0x98u)), eax, f);
L_005589e8:  // jne 0x558a14
    if (!f.zf) goto L_00558a14;
L_005589ea:  // fld dword ptr [esi + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8cu)));
L_005589f0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005589f6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005589f8:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_005589fb:  // je 0x558a14
    if (f.zf) goto L_00558a14;
L_005589fd:  // fld dword ptr [esi + 0x90]
    lpush(x, (long double)F32((uint32_t)(esi + 0x90u)));
L_00558a03:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00558a09:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00558a0b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00558a0e:  // jne 0x558af9
    if (!f.zf) goto L_00558af9;
L_00558a14:  // fld dword ptr [esi + 0x94]
    lpush(x, (long double)F32((uint32_t)(esi + 0x94u)));
L_00558a1a:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00558a20:  // mov eax, dword ptr [esi + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x94u)));
L_00558a26:  // mov ecx, dword ptr [esi + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x98u)));
L_00558a2c:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00558a30:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00558a38:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00558a3e:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00558a46:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00558a4e:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00558a56:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00558a5a:  // fsubr dword ptr [esi + 0x8c]
    ST(0) = ((long double)F32((uint32_t)(esi + 0x8cu))) - (ST(0));
L_00558a60:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_00558a68:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00558a70:  // mov dword ptr [esp + 0x3c], 0x3f800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x3f800000u);
L_00558a78:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_00558a80:  // fst dword ptr [esi + 0x8c]
    F32((uint32_t)(esi + 0x8cu)) = lf32(ST(0));
L_00558a86:  // fld dword ptr [esi + 0x98]
    lpush(x, (long double)F32((uint32_t)(esi + 0x98u)));
L_00558a8c:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00558a92:  // mov dword ptr [esp + 0x44], 0
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x0u);
L_00558a9a:  // mov dword ptr [esp + 0x48], 0
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x0u);
L_00558aa2:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_00558aaa:  // mov dword ptr [esp + 0x50], 0x3f800000
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x3f800000u);
L_00558ab2:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00558ab8:  // fadd dword ptr [esi + 0x90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x90u)));
L_00558abe:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_00558ac2:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00558ac6:  // fstp dword ptr [esi + 0x90]
    F32((uint32_t)(esi + 0x90u)) = lf32(ST(0));
    lpop(x);
L_00558acc:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00558ad1:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00558ad5:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00558ad9:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00558adb:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00558adf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00558ae0:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00558ae2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558ae3:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558ae9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558ae9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00558aeb:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00558aed:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558aef:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558af4:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558af9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558af9:  // mov esi, dword ptr [esi + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x88u)));
L_00558aff:  // mov ebp, dword ptr [0x63012c]
    ebp = (uint32_t)(M32((uint32_t)(0x63012cu)));
L_00558b05:  // cmp esi, 5
    t0 = lsub<32>(esi, 0x5u, f);
L_00558b08:  // ja 0x558ec9
    if ((!f.cf && !f.zf)) goto L_00558ec9;
L_00558b0e:  // jmp dword ptr [esi*4 + 0x558ed8]
    t0 = M32((uint32_t)(esi * 4u + 0x558ed8u));
    switch (t0) {
    case 0x00558b15u: goto L_00558b15;
    case 0x00558b44u: goto L_00558b44;
    case 0x00558b7fu: goto L_00558b7f;
    case 0x00558c9eu: goto L_00558c9e;
    case 0x00558d9fu: goto L_00558d9f;
    case 0x00558dabu: goto L_00558dab;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00558b15:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00558b16:  // call 0x558ef0
    t0 = 0x00558ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b1b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00558b1e:  // cmp ebp, 0xff
    t0 = lsub<32>(ebp, 0xffu, f);
L_00558b24:  // je 0x558ec9
    if (f.zf) goto L_00558ec9;
L_00558b2a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00558b2c:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00558b2e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558b33:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b38:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00558b39:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00558b3a:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00558b3c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00558b3d:  // add esp, 0x140
    t0 = ladd<32>(esp, 0x140u, f);
    esp = (uint32_t)(t0);
L_00558b43:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00558b44:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00558b46:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00558b48:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558b4d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b52:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00558b54:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558b59:  // call 0x513d90
    t0 = 0x00513d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b5e:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00558b60:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00558b62:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558b67:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b6c:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00558b6e:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00558b70:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558b75:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b7a:  // jmp 0x558ec0
    goto L_00558ec0;
L_00558b7f:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00558b81:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00558b83:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558b85:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558b8a:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b8f:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00558b91:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00558b93:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558b95:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558b9a:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558b9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558b9f:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00558ba1:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00558ba3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558ba5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558baa:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558bafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558baf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558bb1:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00558bb3:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558bb8:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558bbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558bbd:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00558bc2:  // mov esi, 0x9c65c0
    esi = (uint32_t)(0x9c65c0u);
L_00558bc7:  // lea edi, [esp + 0x70]
    edi = (uint32_t)((uint32_t)(esp + 0x70u));
L_00558bcb:  // lea eax, [esp + 0xcc]
    eax = (uint32_t)((uint32_t)(esp + 0xccu));
L_00558bd2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00558bd4:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00558bd9:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00558bde:  // lea edi, [esp + 0xcc]
    edi = (uint32_t)((uint32_t)(esp + 0xccu));
L_00558be5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558be6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00558be8:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_00558bef:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00558bf0:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558bf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558bf5:  // mov edx, dword ptr [esp + 0x84]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_00558bfc:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00558c03:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_00558c0a:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_00558c0e:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_00558c12:  // lea edx, [esp + 0x10c]
    edx = (uint32_t)((uint32_t)(esp + 0x10cu));
L_00558c19:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_00558c1d:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_00558c21:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00558c22:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00558c26:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558c27:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00558c28:  // call 0x57600b
    t0 = 0x0057600bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558c2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558c2d:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00558c31:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00558c37:  // fadd dword ptr [0x5d95b8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d95b8u)));
L_00558c3d:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00558c41:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00558c45:  // add edx, 0xff00
    t0 = ladd<32>(edx, 0xff00u, f);
    edx = (uint32_t)(t0);
L_00558c4b:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00558c4e:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00558c52:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00558c58:  // fadd dword ptr [0x5d95b8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d95b8u)));
L_00558c5e:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00558c62:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00558c66:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00558c68:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00558c6b:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00558c6f:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00558c75:  // fadd dword ptr [0x5d95b8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d95b8u)));
L_00558c7b:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00558c7f:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00558c83:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00558c85:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558c8a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00558c8b:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_00558c8d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558c92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558c92:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00558c93:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00558c94:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00558c96:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00558c97:  // add esp, 0x140
    t0 = ladd<32>(esp, 0x140u, f);
    esp = (uint32_t)(t0);
L_00558c9d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00558c9e:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00558ca3:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00558ca7:  // mov dword ptr [esp + 0x14], 0x3f000000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f000000u);
L_00558caf:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00558cb7:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00558cbf:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00558cc7:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00558ccf:  // mov dword ptr [esp + 0x28], 0xbf000000
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xbf000000u);
L_00558cd7:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_00558cdf:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00558ce7:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_00558cef:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_00558cf7:  // mov dword ptr [esp + 0x3c], 0x3f800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x3f800000u);
L_00558cff:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_00558d07:  // mov dword ptr [esp + 0x44], 0x3f000000
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x3f000000u);
L_00558d0f:  // mov dword ptr [esp + 0x48], 0x3f000000
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x3f000000u);
L_00558d17:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_00558d1f:  // mov dword ptr [esp + 0x50], 0x3f800000
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x3f800000u);
L_00558d27:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00558d29:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00558d2a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00558d2c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558d2d:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d33:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00558d35:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00558d37:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558d39:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558d3e:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d43:  // push 0x30000
    t0 = 0x30000u; esp -= 4; M32(esp) = t0;
L_00558d48:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00558d4a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558d4c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558d51:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d56:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00558d58:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00558d5a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558d5f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d64:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00558d66:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00558d68:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558d6d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d72:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558d74:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00558d76:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558d7b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d80:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00558d82:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00558d84:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558d89:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d8e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00558d8f:  // call 0x558ef0
    t0 = 0x00558ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558d94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558d94:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00558d97:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00558d99:  // jne 0x558ec9
    if (!f.zf) goto L_00558ec9;
L_00558d9f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00558da0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00558da1:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00558da3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00558da4:  // add esp, 0x140
    t0 = ladd<32>(esp, 0x140u, f);
    esp = (uint32_t)(t0);
L_00558daa:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00558dab:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00558db0:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_00558db5:  // lea edi, [esp + 0x14]
    edi = (uint32_t)((uint32_t)(esp + 0x14u));
L_00558db9:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00558dbe:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00558dc0:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00558dc4:  // fmul dword ptr [0x5e59d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59d0u)));
L_00558dca:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00558dce:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00558dd2:  // fmul dword ptr [0x5e59d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59d0u)));
L_00558dd8:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00558ddc:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00558de0:  // fmul dword ptr [0x5e59d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59d0u)));
L_00558de6:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00558dea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00558deb:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00558ded:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558dee:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00558df2:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00558df6:  // fmul dword ptr [0x5e59d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59d0u)));
L_00558dfc:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00558e00:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00558e04:  // fmul dword ptr [0x5e59cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59ccu)));
L_00558e0a:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00558e0e:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00558e12:  // fmul dword ptr [0x5e59cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59ccu)));
L_00558e18:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00558e1c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00558e20:  // fmul dword ptr [0x5e59cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59ccu)));
L_00558e26:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00558e2a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00558e2e:  // fmul dword ptr [0x5e59cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59ccu)));
L_00558e34:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00558e38:  // fld dword ptr [0x89cdd4]
    lpush(x, (long double)F32((uint32_t)(0x89cdd4u)));
L_00558e3e:  // fmul dword ptr [0x89cdd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x89cdd0u)));
L_00558e44:  // fchs 
    ST(0) = -ST(0);
L_00558e46:  // fld dword ptr [0x89cdd4]
    lpush(x, (long double)F32((uint32_t)(0x89cdd4u)));
L_00558e4c:  // fsub dword ptr [0x89cdd0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x89cdd0u)));
L_00558e52:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00558e54:  // fmul dword ptr [0x5e59c8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59c8u)));
L_00558e5a:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00558e5c:  // fchs 
    ST(0) = -ST(0);
L_00558e5e:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00558e62:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00558e64:  // fmul dword ptr [0x5e59c4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e59c4u)));
L_00558e6a:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00558e6c:  // fchs 
    ST(0) = -ST(0);
L_00558e6e:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00558e72:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00558e74:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00558e76:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558e7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558e7c:  // push 0x104
    t0 = 0x104u; esp -= 4; M32(esp) = t0;
L_00558e81:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00558e83:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558e85:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558e8a:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558e8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558e8f:  // push 0x20000
    t0 = 0x20000u; esp -= 4; M32(esp) = t0;
L_00558e94:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00558e96:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558e98:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558e9d:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558ea2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558ea2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00558ea4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00558ea6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558ea8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558ead:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_00558eb4:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00558ebb:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558ec0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558ec0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00558ec1:  // call 0x558ef0
    t0 = 0x00558ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00558ec6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00558ec6:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00558ec9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00558eca:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00558ecb:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00558ecd:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00558ece:  // add esp, 0x140
    t0 = ladd<32>(esp, 0x140u, f);
    esp = (uint32_t)(t0);
L_00558ed4:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005588f0, 005588f0)
