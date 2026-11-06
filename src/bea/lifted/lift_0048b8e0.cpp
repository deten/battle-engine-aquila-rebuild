// lifted from 0048b8e0 (FUN_0048b8e0, 1672 bytes, 519 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048b8e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048b8e0;
L_0048b8e0:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0048b8e3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048b8e4:  // lea ebx, [ecx + 8]
    ebx = (uint32_t)((uint32_t)(ecx + 0x8u));
L_0048b8e7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048b8e8:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0048b8ec:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048b8ed:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048b8ef:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048b8f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048b8f4:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048b8f6:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048b8f8:  // je 0x48b934
    if (f.zf) goto L_0048b934;
L_0048b8fa:  // mov esi, 0x1869f
    esi = (uint32_t)(0x1869fu);
L_0048b8ff:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048b901:  // mov dword ptr [eax + 0x9c], ebp
    M32((uint32_t)(eax + 0x9cu)) = (uint32_t)(ebp);
L_0048b907:  // mov dword ptr [eax + 0xa0], ebp
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(ebp);
L_0048b90d:  // mov dword ptr [eax + 0xa4], ebp
    M32((uint32_t)(eax + 0xa4u)) = (uint32_t)(ebp);
L_0048b913:  // mov dword ptr [eax + 0xa8], ebp
    M32((uint32_t)(eax + 0xa8u)) = (uint32_t)(ebp);
L_0048b919:  // mov dword ptr [eax + 0xb8], ebp
    M32((uint32_t)(eax + 0xb8u)) = (uint32_t)(ebp);
L_0048b91f:  // mov dword ptr [eax + 0xac], esi
    M32((uint32_t)(eax + 0xacu)) = (uint32_t)(esi);
L_0048b925:  // mov dword ptr [eax + 0xb0], esi
    M32((uint32_t)(eax + 0xb0u)) = (uint32_t)(esi);
L_0048b92b:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048b930u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048b930:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048b932:  // jne 0x48b8ff
    if (!f.zf) goto L_0048b8ff;
L_0048b934:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048b935:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0048b939:  // mov dword ptr [esp + 0x34], 0x8550b0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x8550b0u);
L_0048b941:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048b946u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048b946:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048b948:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_0048b94a:  // je 0x48bae3
    if (f.zf) goto L_0048bae3;
L_0048b950:  // test byte ptr [edi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(edi + 0x2cu)) & 0x4u, f);
L_0048b954:  // jne 0x48bace
    if (!f.zf) goto L_0048bace;
L_0048b95a:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_0048b95d:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_0048b95f:  // je 0x48ba08
    if (f.zf) goto L_0048ba08;
L_0048b965:  // test eax, 0x88400
    t0 = llog<32>(eax & 0x88400u, f);
L_0048b96a:  // jne 0x48bace
    if (!f.zf) goto L_0048bace;
L_0048b970:  // mov ecx, dword ptr [edi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x1cu)));
L_0048b973:  // mov eax, dword ptr [edi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_0048b976:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0048b97a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048b97c:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0048b980:  // mov dword ptr [esp + 0x14], 0x497423f0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x497423f0u);
L_0048b988:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048b98a:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048b98fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048b98f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048b991:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048b993:  // je 0x48b9f5
    if (f.zf) goto L_0048b9f5;
L_0048b995:  // fld dword ptr [esi + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8cu)));
L_0048b99b:  // fld dword ptr [esi + 0x90]
    lpush(x, (long double)F32((uint32_t)(esi + 0x90u)));
L_0048b9a1:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_0048b9a5:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048b9a7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048b9a9:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048b9ab:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0048b9af:  // fsubrp st(2)
    ST(2) = (ST(0)) - (ST(2));
    lpop(x);
L_0048b9b1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048b9b3:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048b9b5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048b9b7:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048b9b9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048b9bb:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048b9bf:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048b9c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048b9c2:  // fsubr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) - (ST(0));
L_0048b9c6:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0048b9cc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048b9ce:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048b9d1:  // jne 0x48ba04
    if (!f.zf) goto L_0048ba04;
L_0048b9d3:  // fcom dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
L_0048b9d7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048b9d9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048b9dc:  // je 0x48b9e6
    if (f.zf) goto L_0048b9e6;
L_0048b9de:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0048b9e2:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_0048b9e4:  // jmp 0x48b9e8
    goto L_0048b9e8;
L_0048b9e6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048b9e8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048b9ea:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048b9efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048b9ef:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048b9f1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048b9f3:  // jne 0x48b995
    if (!f.zf) goto L_0048b995;
L_0048b9f5:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0048b9f7:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048b9f9:  // je 0x48bace
    if (f.zf) goto L_0048bace;
L_0048b9ff:  // jmp 0x48baa2
    goto L_0048baa2;
L_0048ba04:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048ba06:  // jmp 0x48b9f7
    goto L_0048b9f7;
L_0048ba08:  // test eax, 0x20000000
    t0 = llog<32>(eax & 0x20000000u, f);
L_0048ba0d:  // je 0x48bace
    if (f.zf) goto L_0048bace;
L_0048ba13:  // mov ecx, dword ptr [edi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x1cu)));
L_0048ba16:  // mov eax, dword ptr [edi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_0048ba19:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_0048ba1d:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048ba1f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0048ba23:  // mov dword ptr [esp + 0x10], 0x497423f0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x497423f0u);
L_0048ba2b:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048ba2d:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ba32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ba32:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048ba34:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048ba36:  // je 0x48ba9c
    if (f.zf) goto L_0048ba9c;
L_0048ba38:  // fld dword ptr [esi + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8cu)));
L_0048ba3e:  // fld dword ptr [esi + 0x90]
    lpush(x, (long double)F32((uint32_t)(esi + 0x90u)));
L_0048ba44:  // fsubr dword ptr [esp + 0x28]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x28u))) - (ST(0));
L_0048ba48:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048ba4a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ba4c:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048ba4e:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0048ba52:  // fsubrp st(2)
    ST(2) = (ST(0)) - (ST(2));
    lpop(x);
L_0048ba54:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048ba56:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048ba58:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048ba5a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048ba5c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048ba5e:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048ba62:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ba65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ba65:  // fsubr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) - (ST(0));
L_0048ba69:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0048ba6f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048ba71:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048ba74:  // jne 0x48bb94
    if (!f.zf) goto L_0048bb94;
L_0048ba7a:  // fcom dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
L_0048ba7e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048ba80:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048ba83:  // je 0x48ba8d
    if (f.zf) goto L_0048ba8d;
L_0048ba85:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048ba89:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_0048ba8b:  // jmp 0x48ba8f
    goto L_0048ba8f;
L_0048ba8d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048ba8f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048ba91:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ba96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ba96:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048ba98:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048ba9a:  // jne 0x48ba38
    if (!f.zf) goto L_0048ba38;
L_0048ba9c:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0048ba9e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048baa0:  // je 0x48bace
    if (f.zf) goto L_0048bace;
L_0048baa2:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0048baa4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048baa6:  // call dword ptr [eax + 0x13c]
    t0 = M32((uint32_t)(eax + 0x13cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048baacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048baac:  // fadd dword ptr [esi + 0x9c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x9cu)));
L_0048bab2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048bab4:  // fstp dword ptr [esi + 0x9c]
    F32((uint32_t)(esi + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_0048baba:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0048babc:  // call dword ptr [edx + 0x140]
    t0 = M32((uint32_t)(edx + 0x140u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bac2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bac2:  // fadd dword ptr [esi + 0xa0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0xa0u)));
L_0048bac8:  // fstp dword ptr [esi + 0xa0]
    F32((uint32_t)(esi + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_0048bace:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0048bad2:  // call 0x409780
    t0 = 0x00409780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bad7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bad7:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048bad9:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048badb:  // jne 0x48b950
    if (!f.zf) goto L_0048b950;
L_0048bae1:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048bae3:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0048bae7:  // mov dword ptr [esp + 0x3c], 0x8550c0
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x8550c0u);
L_0048baef:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048baf4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048baf4:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048baf6:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_0048baf8:  // je 0x48bc94
    if (f.zf) goto L_0048bc94;
L_0048bafe:  // test byte ptr [edi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(edi + 0x2cu)) & 0x4u, f);
L_0048bb02:  // jne 0x48bc7f
    if (!f.zf) goto L_0048bc7f;
L_0048bb08:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_0048bb0b:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_0048bb0d:  // je 0x48bbbd
    if (f.zf) goto L_0048bbbd;
L_0048bb13:  // test eax, 0x88400
    t0 = llog<32>(eax & 0x88400u, f);
L_0048bb18:  // jne 0x48bc7f
    if (!f.zf) goto L_0048bc7f;
L_0048bb1e:  // mov ecx, dword ptr [edi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x1cu)));
L_0048bb21:  // mov eax, dword ptr [edi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_0048bb24:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0048bb28:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048bb2a:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0048bb2e:  // mov dword ptr [esp + 0x14], 0x497423f0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x497423f0u);
L_0048bb36:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048bb38:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bb3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bb3d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048bb3f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048bb41:  // je 0x48bbaa
    if (f.zf) goto L_0048bbaa;
L_0048bb43:  // fld dword ptr [esi + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8cu)));
L_0048bb49:  // fld dword ptr [esi + 0x90]
    lpush(x, (long double)F32((uint32_t)(esi + 0x90u)));
L_0048bb4f:  // fsubr dword ptr [esp + 0x2c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x2cu))) - (ST(0));
L_0048bb53:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048bb55:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048bb57:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048bb59:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0048bb5d:  // fsubrp st(2)
    ST(2) = (ST(0)) - (ST(2));
    lpop(x);
L_0048bb5f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048bb61:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048bb63:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048bb65:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048bb67:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048bb69:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048bb6d:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bb70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bb70:  // fsubr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) - (ST(0));
L_0048bb74:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0048bb7a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048bb7c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048bb7f:  // jne 0x48bbb9
    if (!f.zf) goto L_0048bbb9;
L_0048bb81:  // fcom dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
L_0048bb85:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048bb87:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048bb8a:  // je 0x48bb9b
    if (f.zf) goto L_0048bb9b;
L_0048bb8c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0048bb90:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_0048bb92:  // jmp 0x48bb9d
    goto L_0048bb9d;
L_0048bb94:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048bb96:  // jmp 0x48ba9e
    goto L_0048ba9e;
L_0048bb9b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048bb9d:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048bb9f:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bba4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bba4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048bba6:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048bba8:  // jne 0x48bb43
    if (!f.zf) goto L_0048bb43;
L_0048bbaa:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0048bbac:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048bbae:  // je 0x48bc7f
    if (f.zf) goto L_0048bc7f;
L_0048bbb4:  // jmp 0x48bc53
    goto L_0048bc53;
L_0048bbb9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048bbbb:  // jmp 0x48bbac
    goto L_0048bbac;
L_0048bbbd:  // test eax, 0x20000000
    t0 = llog<32>(eax & 0x20000000u, f);
L_0048bbc2:  // je 0x48bc7f
    if (f.zf) goto L_0048bc7f;
L_0048bbc8:  // mov ecx, dword ptr [edi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x1cu)));
L_0048bbcb:  // mov eax, dword ptr [edi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_0048bbce:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0048bbd2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048bbd4:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0048bbd8:  // mov dword ptr [esp + 0x10], 0x497423f0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x497423f0u);
L_0048bbe0:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048bbe2:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bbe7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bbe7:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048bbe9:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048bbeb:  // je 0x48bc4d
    if (f.zf) goto L_0048bc4d;
L_0048bbed:  // fld dword ptr [esi + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8cu)));
L_0048bbf3:  // fld dword ptr [esi + 0x90]
    lpush(x, (long double)F32((uint32_t)(esi + 0x90u)));
L_0048bbf9:  // fsubr dword ptr [esp + 0x20]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x20u))) - (ST(0));
L_0048bbfd:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048bbff:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048bc01:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048bc03:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0048bc07:  // fsubrp st(2)
    ST(2) = (ST(0)) - (ST(2));
    lpop(x);
L_0048bc09:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048bc0b:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0048bc0d:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048bc0f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048bc11:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048bc13:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048bc17:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bc1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bc1a:  // fsubr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) - (ST(0));
L_0048bc1e:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0048bc24:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048bc26:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048bc29:  // jne 0x48bca3
    if (!f.zf) goto L_0048bca3;
L_0048bc2b:  // fcom dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
L_0048bc2f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048bc31:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048bc34:  // je 0x48bc3e
    if (f.zf) goto L_0048bc3e;
L_0048bc36:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048bc3a:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_0048bc3c:  // jmp 0x48bc40
    goto L_0048bc40;
L_0048bc3e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048bc40:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048bc42:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bc47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bc47:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048bc49:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048bc4b:  // jne 0x48bbed
    if (!f.zf) goto L_0048bbed;
L_0048bc4d:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0048bc4f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048bc51:  // je 0x48bc7f
    if (f.zf) goto L_0048bc7f;
L_0048bc53:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0048bc55:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048bc57:  // call dword ptr [eax + 0x13c]
    t0 = M32((uint32_t)(eax + 0x13cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bc5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bc5d:  // fadd dword ptr [esi + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0xa4u)));
L_0048bc63:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048bc65:  // fstp dword ptr [esi + 0xa4]
    F32((uint32_t)(esi + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_0048bc6b:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0048bc6d:  // call dword ptr [edx + 0x140]
    t0 = M32((uint32_t)(edx + 0x140u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bc73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bc73:  // fadd dword ptr [esi + 0xa8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0xa8u)));
L_0048bc79:  // fstp dword ptr [esi + 0xa8]
    F32((uint32_t)(esi + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_0048bc7f:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0048bc83:  // call 0x409780
    t0 = 0x00409780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bc88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bc88:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048bc8a:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048bc8c:  // jne 0x48bafe
    if (!f.zf) goto L_0048bafe;
L_0048bc92:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048bc94:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048bc98:  // mov esi, dword ptr [eax + 0x18]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_0048bc9b:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_0048bc9d:  // je 0x48bca7
    if (f.zf) goto L_0048bca7;
L_0048bc9f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0048bca1:  // jmp 0x48bca9
    goto L_0048bca9;
L_0048bca3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048bca5:  // jmp 0x48bc4f
    goto L_0048bc4f;
L_0048bca7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bca9:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048bcab:  // je 0x48bd12
    if (f.zf) goto L_0048bd12;
L_0048bcad:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048bcaf:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_0048bcb1:  // je 0x48bd01
    if (f.zf) goto L_0048bd01;
L_0048bcb3:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0048bcb6:  // cmp edx, ebp
    t0 = lsub<32>(edx, ebp, f);
L_0048bcb8:  // jne 0x48bcdc
    if (!f.zf) goto L_0048bcdc;
L_0048bcba:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0048bcbd:  // fadd dword ptr [ecx + 0x9c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x9cu)));
L_0048bcc3:  // fstp dword ptr [ecx + 0x9c]
    F32((uint32_t)(ecx + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_0048bcc9:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048bccb:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0048bcce:  // fadd dword ptr [ecx + 0xa0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0xa0u)));
L_0048bcd4:  // fstp dword ptr [ecx + 0xa0]
    F32((uint32_t)(ecx + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_0048bcda:  // jmp 0x48bd01
    goto L_0048bd01;
L_0048bcdc:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_0048bcdf:  // jne 0x48bd01
    if (!f.zf) goto L_0048bd01;
L_0048bce1:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0048bce4:  // fadd dword ptr [ecx + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0xa4u)));
L_0048bcea:  // fstp dword ptr [ecx + 0xa4]
    F32((uint32_t)(ecx + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_0048bcf0:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048bcf2:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0048bcf5:  // fadd dword ptr [ecx + 0xa8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0xa8u)));
L_0048bcfb:  // fstp dword ptr [ecx + 0xa8]
    F32((uint32_t)(ecx + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_0048bd01:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0048bd04:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_0048bd06:  // je 0x48bd0c
    if (f.zf) goto L_0048bd0c;
L_0048bd08:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0048bd0a:  // jmp 0x48bd0e
    goto L_0048bd0e;
L_0048bd0c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bd0e:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048bd10:  // jne 0x48bcad
    if (!f.zf) goto L_0048bcad;
L_0048bd12:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0048bd14:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048bd16:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048bd19:  // je 0x48bd1f
    if (f.zf) goto L_0048bd1f;
L_0048bd1b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048bd1d:  // jmp 0x48bd21
    goto L_0048bd21;
L_0048bd1f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bd21:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048bd23:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048bd25:  // je 0x48bd72
    if (f.zf) goto L_0048bd72;
L_0048bd27:  // fld dword ptr [ecx + 0x9c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x9cu)));
L_0048bd2d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048bd33:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048bd35:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0048bd38:  // jne 0x48bd40
    if (!f.zf) goto L_0048bd40;
L_0048bd3a:  // mov dword ptr [ecx + 0xb0], ebp
    M32((uint32_t)(ecx + 0xb0u)) = (uint32_t)(ebp);
L_0048bd40:  // fld dword ptr [ecx + 0xa4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xa4u)));
L_0048bd46:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048bd4c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048bd4e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0048bd51:  // jne 0x48bd59
    if (!f.zf) goto L_0048bd59;
L_0048bd53:  // mov dword ptr [ecx + 0xac], ebp
    M32((uint32_t)(ecx + 0xacu)) = (uint32_t)(ebp);
L_0048bd59:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0048bd5c:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0048bd5f:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048bd61:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048bd64:  // je 0x48bd6a
    if (f.zf) goto L_0048bd6a;
L_0048bd66:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048bd68:  // jmp 0x48bd6c
    goto L_0048bd6c;
L_0048bd6a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bd6c:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048bd6e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048bd70:  // jne 0x48bd27
    if (!f.zf) goto L_0048bd27;
L_0048bd72:  // mov ebp, 0xa
    ebp = (uint32_t)(0xau);
L_0048bd77:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0048bd79:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bd7b:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048bd7e:  // je 0x48bd84
    if (f.zf) goto L_0048bd84;
L_0048bd80:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048bd82:  // jmp 0x48bd86
    goto L_0048bd86;
L_0048bd84:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bd86:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bd88:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048bd8a:  // je 0x48be2d
    if (f.zf) goto L_0048be2d;
L_0048bd90:  // fld dword ptr [edi + 0x9c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x9cu)));
L_0048bd96:  // fadd dword ptr [edi + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0xa4u)));
L_0048bd9c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048bda2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048bda4:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0048bda7:  // je 0x48be10
    if (f.zf) goto L_0048be10;
L_0048bda9:  // lea esi, [edi + 0x7c]
    esi = (uint32_t)((uint32_t)(edi + 0x7cu));
L_0048bdac:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0048bdb4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048bdb6:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0048bdbe:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bdc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bdc3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bdc5:  // je 0x48bdf0
    if (f.zf) goto L_0048bdf0;
L_0048bdc7:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048bdc9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048bdcb:  // fld dword ptr [eax + 0x9c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x9cu)));
L_0048bdd1:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_0048bdd5:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048bdd9:  // fld dword ptr [eax + 0xa4]
    lpush(x, (long double)F32((uint32_t)(eax + 0xa4u)));
L_0048bddf:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_0048bde3:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0048bde7:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bdecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bdec:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bdee:  // jne 0x48bdc7
    if (!f.zf) goto L_0048bdc7;
L_0048bdf0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048bdf4:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0048bdfa:  // fstp dword ptr [edi + 0x9c]
    F32((uint32_t)(edi + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_0048be00:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0048be04:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0048be0a:  // fstp dword ptr [edi + 0xa4]
    F32((uint32_t)(edi + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_0048be10:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0048be13:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0048be16:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048be18:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048be1b:  // je 0x48be21
    if (f.zf) goto L_0048be21;
L_0048be1d:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048be1f:  // jmp 0x48be23
    goto L_0048be23;
L_0048be21:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048be23:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048be25:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048be27:  // jne 0x48bd90
    if (!f.zf) goto L_0048bd90;
L_0048be2d:  // dec ebp
    t0 = ldec<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0048be2e:  // jne 0x48bd77
    if (!f.zf) goto L_0048bd77;
L_0048be34:  // mov esi, 0x14
    esi = (uint32_t)(0x14u);
L_0048be39:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0048be3b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048be3d:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048be40:  // je 0x48be46
    if (f.zf) goto L_0048be46;
L_0048be42:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048be44:  // jmp 0x48be48
    goto L_0048be48;
L_0048be46:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048be48:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048be4a:  // je 0x48bec9
    if (f.zf) goto L_0048bec9;
L_0048be4c:  // mov ecx, dword ptr [eax + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x7cu)));
L_0048be4f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0048be51:  // mov dword ptr [eax + 0x84], ecx
    M32((uint32_t)(eax + 0x84u)) = (uint32_t)(ecx);
L_0048be57:  // je 0x48be5d
    if (f.zf) goto L_0048be5d;
L_0048be59:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0048be5b:  // jmp 0x48be5f
    goto L_0048be5f;
L_0048be5d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0048be5f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0048be61:  // je 0x48beb2
    if (f.zf) goto L_0048beb2;
L_0048be63:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0048be65:  // mov edi, dword ptr [eax + 0xb0]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xb0u)));
L_0048be6b:  // mov edx, dword ptr [edx + 0xb0]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xb0u)));
L_0048be71:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0048be72:  // cmp edi, edx
    t0 = lsub<32>(edi, edx, f);
L_0048be74:  // jle 0x48be7c
    if ((f.zf || f.sf != f.of)) goto L_0048be7c;
L_0048be76:  // mov dword ptr [eax + 0xb0], edx
    M32((uint32_t)(eax + 0xb0u)) = (uint32_t)(edx);
L_0048be7c:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0048be7e:  // mov edx, dword ptr [eax + 0xac]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_0048be84:  // mov ecx, dword ptr [ecx + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_0048be8a:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0048be8b:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_0048be8d:  // jle 0x48be95
    if ((f.zf || f.sf != f.of)) goto L_0048be95;
L_0048be8f:  // mov dword ptr [eax + 0xac], ecx
    M32((uint32_t)(eax + 0xacu)) = (uint32_t)(ecx);
L_0048be95:  // mov edx, dword ptr [eax + 0x84]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x84u)));
L_0048be9b:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0048be9e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0048bea0:  // mov dword ptr [eax + 0x84], ecx
    M32((uint32_t)(eax + 0x84u)) = (uint32_t)(ecx);
L_0048bea6:  // je 0x48beac
    if (f.zf) goto L_0048beac;
L_0048bea8:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0048beaa:  // jmp 0x48beae
    goto L_0048beae;
L_0048beac:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0048beae:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0048beb0:  // jne 0x48be63
    if (!f.zf) goto L_0048be63;
L_0048beb2:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0048beb5:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0048beb8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048beba:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048bebd:  // je 0x48bec3
    if (f.zf) goto L_0048bec3;
L_0048bebf:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048bec1:  // jmp 0x48bec5
    goto L_0048bec5;
L_0048bec3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bec5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bec7:  // jne 0x48be4c
    if (!f.zf) goto L_0048be4c;
L_0048bec9:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0048beca:  // jne 0x48be39
    if (!f.zf) goto L_0048be39;
L_0048bed0:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0048bed2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048bed3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bed5:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048bed8:  // je 0x48bede
    if (f.zf) goto L_0048bede;
L_0048beda:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048bedc:  // jmp 0x48bee0
    goto L_0048bee0;
L_0048bede:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bee0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bee2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048bee4:  // je 0x48bf09
    if (f.zf) goto L_0048bf09;
L_0048bee6:  // mov esi, dword ptr [esp + 0x40]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0048beea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048beeb:  // call 0x48c3b0
    t0 = 0x0048c3b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bef0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bef0:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0048bef3:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0048bef6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bef8:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0048befb:  // je 0x48bf01
    if (f.zf) goto L_0048bf01;
L_0048befd:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048beff:  // jmp 0x48bf03
    goto L_0048bf03;
L_0048bf01:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048bf03:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048bf05:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048bf07:  // jne 0x48beea
    if (!f.zf) goto L_0048beea;
L_0048bf09:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0048bf0f:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bf14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bf14:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0048bf19:  // jns 0x48bf22
    if (!f.sf) goto L_0048bf22;
L_0048bf1b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048bf1c:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0048bf21:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048bf22:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0048bf26:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048bf2a:  // fild dword ptr [esp + 0x40]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_0048bf2e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048bf30:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048bf32:  // lea edx, [esp + 0x48]
    edx = (uint32_t)((uint32_t)(esp + 0x48u));
L_0048bf36:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048bf38:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_0048bf3e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048bf3f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048bf40:  // push 0x3e8
    t0 = 0x3e8u; esp -= 4; M32(esp) = t0;
L_0048bf45:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0048bf4a:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_0048bf50:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0048bf56:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_0048bf5a:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048bf5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048bf5f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048bf60:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048bf61:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048bf62:  // add esp, 0x30
    t0 = ladd<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0048bf65:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0048b8e0, 0048b8e0)
