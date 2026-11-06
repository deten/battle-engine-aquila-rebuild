// lifted from 005088b0 (FUN_005088b0, 2181 bytes, 606 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005088b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005088b0;
L_005088b0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005088b2:  // push 0x5d597b
    t0 = 0x5d597bu; esp -= 4; M32(esp) = t0;
L_005088b7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_005088bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005088be:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_005088c5:  // sub esp, 0x124
    t0 = lsub<32>(esp, 0x124u, f);
    esp = (uint32_t)(t0);
L_005088cb:  // mov eax, dword ptr [0x6fbdfc]
    eax = (uint32_t)(M32((uint32_t)(0x6fbdfcu)));
L_005088d0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005088d1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005088d2:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_005088d4:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_005088d8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005088d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005088da:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005088dc:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_005088e0:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005088e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005088e5:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_005088e8:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_005088ec:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005088ee:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005088f1:  // je 0x509119
    if (f.zf) goto L_00509119;
L_005088f7:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_005088fd:  // mov ebp, dword ptr [esp + 0x140]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_00508904:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508906:  // je 0x508960
    if (f.zf) goto L_00508960;
L_00508908:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_0050890b:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050890d:  // je 0x508960
    if (f.zf) goto L_00508960;
L_0050890f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00508911:  // mov ecx, dword ptr [eax + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x58u)));
L_00508914:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00508916:  // je 0x508960
    if (f.zf) goto L_00508960;
L_00508918:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0050891b:  // mov ecx, dword ptr [0x8a9d7c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d7cu)));
L_00508921:  // mov eax, dword ptr [edx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x138u)));
L_00508927:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508929:  // je 0x508931
    if (f.zf) goto L_00508931;
L_0050892b:  // mov ecx, dword ptr [0x8a9d80]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d80u)));
L_00508931:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00508933:  // je 0x508960
    if (f.zf) goto L_00508960;
L_00508935:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_00508938:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0050893b:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0050893d:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_0050893f:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_00508941:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00508944:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_00508947:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0050894a:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_0050894d:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00508950:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00508953:  // call 0x44c780
    t0 = 0x0044c780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508958u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508958:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050895a:  // je 0x509119
    if (f.zf) goto L_00509119;
L_00508960:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00508966:  // lea edx, [esp + 0xe0]
    edx = (uint32_t)((uint32_t)(esp + 0xe0u));
L_0050896d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050896e:  // mov eax, dword ptr [eax + 0x18]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_00508971:  // mov ecx, dword ptr [eax + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_00508974:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00508978:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050897a:  // call 0x44a930
    t0 = 0x0044a930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050897fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050897f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508983:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_00508986:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0050898a:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_0050898d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508991:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00508994:  // lea eax, [esp + 0x4c]
    eax = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00508998:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00508999:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_0050899d:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_005089a1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005089a2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005089a4:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_005089a8:  // call 0x50a0e0
    t0 = 0x0050a0e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005089adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005089ad:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_005089b1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005089b2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005089b4:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005089b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005089b9:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_005089bd:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_005089c0:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_005089c4:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_005089c7:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_005089cb:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_005089cd:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_005089d1:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_005089d5:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_005089d9:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_005089dd:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005089e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005089e2:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_005089e8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005089ea:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005089ed:  // jne 0x508a0a
    if (!f.zf) goto L_00508a0a;
L_005089ef:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_005089f3:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_005089f5:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_005089f9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005089fb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005089ff:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508a04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508a04:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00508a08:  // jmp 0x508a14
    goto L_00508a14;
L_00508a0a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508a0c:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00508a14:  // mov eax, dword ptr [esi + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x98u)));
L_00508a1a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508a1c:  // je 0x508a2d
    if (f.zf) goto L_00508a2d;
L_00508a1e:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00508a21:  // mov eax, dword ptr [edx + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xe8u)));
L_00508a27:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00508a2b:  // jmp 0x508a9d
    goto L_00508a9d;
L_00508a2d:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00508a31:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508a36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508a36:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508a3c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508a3e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508a41:  // jne 0x508a5a
    if (!f.zf) goto L_00508a5a;
L_00508a43:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00508a47:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00508a49:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00508a4d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508a4f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00508a53:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508a58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508a58:  // jmp 0x508a62
    goto L_00508a62;
L_00508a5a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508a5c:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00508a62:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508a66:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00508a68:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00508a6c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00508a70:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508a72:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508a77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508a77:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508a7d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508a7f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508a82:  // jne 0x508a9b
    if (!f.zf) goto L_00508a9b;
L_00508a84:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00508a88:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00508a8a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00508a8e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508a90:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00508a94:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508a99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508a99:  // jmp 0x508aa3
    goto L_00508aa3;
L_00508a9b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508a9d:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00508aa3:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00508aa9:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00508aac:  // fld dword ptr [edx + 0x3c]
    lpush(x, (long double)F32((uint32_t)(edx + 0x3cu)));
L_00508aaf:  // fmul dword ptr [0x5d8c6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c6cu)));
L_00508ab5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508abb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508abd:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00508ac0:  // jne 0x508e36
    if (!f.zf) goto L_00508e36;
L_00508ac6:  // mov eax, dword ptr [edx + 0x50]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x50u)));
L_00508ac9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508acb:  // jne 0x508e36
    if (!f.zf) goto L_00508e36;
L_00508ad1:  // mov eax, dword ptr [edx + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x6cu)));
L_00508ad4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508ad6:  // jne 0x508e36
    if (!f.zf) goto L_00508e36;
L_00508adc:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00508adf:  // mov eax, dword ptr [ecx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00508ae2:  // fld dword ptr [edx + 0x24]
    lpush(x, (long double)F32((uint32_t)(edx + 0x24u)));
L_00508ae5:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_00508ae8:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00508aec:  // fld dword ptr [eax + 0x2c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x2cu)));
L_00508aef:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00508af5:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00508af9:  // fld dword ptr [eax + 0x3c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x3cu)));
L_00508afc:  // fmul dword ptr [0x5d8c6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c6cu)));
L_00508b02:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00508b06:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00508b0a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00508b0e:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00508b12:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00508b14:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00508b16:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00508b18:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508b1a:  // fstp st(1)
    ST(1) = ST(0);
    lpop(x);
L_00508b1c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00508b20:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00508b22:  // fadd dword ptr [ecx + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x7cu)));
L_00508b25:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00508b29:  // fadd dword ptr [ecx + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x80u)));
L_00508b2f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00508b33:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508b37:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_00508b3d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508b3f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508b42:  // jne 0x508b55
    if (!f.zf) goto L_00508b55;
L_00508b44:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508b48:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_00508b4e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508b50:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508b53:  // je 0x508b7f
    if (f.zf) goto L_00508b7f;
L_00508b55:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508b59:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_00508b5f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508b61:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508b64:  // je 0x508c5b
    if (f.zf) goto L_00508c5b;
L_00508b6a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508b6e:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_00508b74:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508b76:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508b79:  // je 0x508c5b
    if (f.zf) goto L_00508c5b;
L_00508b7f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508b83:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508b85:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508b89:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00508b8d:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00508b91:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00508b95:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00508b97:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508b9b:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508b9f:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00508ba1:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508ba7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508ba9:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00508bac:  // jne 0x508bdb
    if (!f.zf) goto L_00508bdb;
L_00508bae:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508bb0:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508bb4:  // fdiv dword ptr [esp + 0x24]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x24u)));
L_00508bb8:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508bbc:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508bbe:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508bc0:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508bc2:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508bc6:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00508bc8:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_00508bcc:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508bd2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508bd4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508bd7:  // je 0x508be5
    if (f.zf) goto L_00508be5;
L_00508bd9:  // jmp 0x508bdd
    goto L_00508bdd;
L_00508bdb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508bdd:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_00508be5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508be9:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508beb:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508bef:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_00508bf3:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508bf7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00508bf9:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508bff:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508c01:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00508c04:  // jne 0x508c2d
    if (!f.zf) goto L_00508c2d;
L_00508c06:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508c08:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508c0c:  // fdiv dword ptr [esp + 0x24]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x24u)));
L_00508c10:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508c14:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508c16:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508c18:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508c1a:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508c1e:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00508c20:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508c26:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508c28:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508c2b:  // je 0x508c35
    if (f.zf) goto L_00508c35;
L_00508c2d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508c2f:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00508c35:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00508c39:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00508c3b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508c3d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508c40:  // jne 0x508e06
    if (!f.zf) goto L_00508e06;
L_00508c46:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00508c4a:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00508c4e:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00508c52:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00508c56:  // jmp 0x508e06
    goto L_00508e06;
L_00508c5b:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508c5f:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508c61:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508c65:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00508c69:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00508c6d:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00508c71:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00508c73:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00508c77:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00508c7b:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00508c7d:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508c83:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508c85:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508c88:  // jne 0x508cb7
    if (!f.zf) goto L_00508cb7;
L_00508c8a:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508c8c:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_00508c90:  // fdiv dword ptr [esp + 0x24]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x24u)));
L_00508c94:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508c98:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508c9a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508c9c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508c9e:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508ca2:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00508ca4:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_00508ca8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508cae:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508cb0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508cb3:  // je 0x508cc1
    if (f.zf) goto L_00508cc1;
L_00508cb5:  // jmp 0x508cb9
    goto L_00508cb9;
L_00508cb7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508cb9:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00508cc1:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508cc5:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508cc7:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508ccb:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00508ccd:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00508ccf:  // fadd st(2)
    ST(0) = (ST(0)) + (ST(2));
L_00508cd1:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508cd7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508cd9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508cdc:  // jne 0x508d09
    if (!f.zf) goto L_00508d09;
L_00508cde:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508ce0:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00508ce2:  // fdiv dword ptr [esp + 0x24]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x24u)));
L_00508ce6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00508cea:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508cec:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00508cee:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508cf0:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508cf4:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00508cf6:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_00508cfa:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508d00:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508d02:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508d05:  // je 0x508d15
    if (f.zf) goto L_00508d15;
L_00508d07:  // jmp 0x508d0d
    goto L_00508d0d;
L_00508d09:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508d0b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508d0d:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00508d15:  // fld qword ptr [0x5dfca8]
    lpush(x, (long double)F64((uint32_t)(0x5dfca8u)));
L_00508d1b:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508d1d:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508d21:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_00508d25:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00508d29:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00508d2b:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508d31:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508d33:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508d36:  // jne 0x508d67
    if (!f.zf) goto L_00508d67;
L_00508d38:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508d3a:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_00508d3e:  // fdiv dword ptr [esp + 0x24]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x24u)));
L_00508d42:  // fld qword ptr [0x5dfca8]
    lpush(x, (long double)F64((uint32_t)(0x5dfca8u)));
L_00508d48:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508d4a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508d4c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508d4e:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00508d52:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00508d54:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_00508d58:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508d5e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508d60:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508d63:  // je 0x508d71
    if (f.zf) goto L_00508d71;
L_00508d65:  // jmp 0x508d69
    goto L_00508d69;
L_00508d67:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508d69:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00508d71:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508d75:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508d7b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508d7d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00508d80:  // jne 0x508d8a
    if (!f.zf) goto L_00508d8a;
L_00508d82:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00508d86:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_00508d8a:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508d8e:  // fcomp dword ptr [esp + 0xc]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xcu)));
    lpop(x);
L_00508d92:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508d94:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508d97:  // je 0x508db2
    if (f.zf) goto L_00508db2;
L_00508d99:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508d9d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508da3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508da5:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00508da8:  // jne 0x508db2
    if (!f.zf) goto L_00508db2;
L_00508daa:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00508dae:  // mov dword ptr [esp + 0xc], edx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(edx);
L_00508db2:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00508db6:  // fcomp dword ptr [esp + 0xc]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xcu)));
    lpop(x);
L_00508dba:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508dbc:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508dbf:  // je 0x508dda
    if (f.zf) goto L_00508dda;
L_00508dc1:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00508dc5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00508dcb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508dcd:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00508dd0:  // jne 0x508dda
    if (!f.zf) goto L_00508dda;
L_00508dd2:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00508dd6:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00508dda:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508dde:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508de2:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_00508de6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508de8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508deb:  // jne 0x508df3
    if (!f.zf) goto L_00508df3;
L_00508ded:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508def:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508df3:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00508df7:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00508df9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508dfb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508dfe:  // jne 0x508e06
    if (!f.zf) goto L_00508e06;
L_00508e00:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508e02:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00508e06:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00508e0a:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00508e0c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508e0e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508e11:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508e13:  // je 0x509119
    if (f.zf) goto L_00509119;
L_00508e19:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00508e1d:  // fcomp dword ptr [esp + 0xc]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xcu)));
    lpop(x);
L_00508e21:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508e23:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508e26:  // jne 0x509119
    if (!f.zf) goto L_00509119;
L_00508e2c:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00508e31:  // jmp 0x50911b
    goto L_0050911b;
L_00508e36:  // mov ecx, dword ptr [ecx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00508e39:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508e3b:  // mov eax, dword ptr [ecx + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x6cu)));
L_00508e3e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508e40:  // je 0x508e71
    if (f.zf) goto L_00508e71;
L_00508e42:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00508e45:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00508e4a:  // add edx, 0x1c
    t0 = ladd<32>(edx, 0x1cu, f);
    edx = (uint32_t)(t0);
L_00508e4d:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508e52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508e52:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_00508e58:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00508e5a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508e5c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508e5f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508e61:  // je 0x509119
    if (f.zf) goto L_00509119;
L_00508e67:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00508e6c:  // jmp 0x50911b
    goto L_0050911b;
L_00508e71:  // mov eax, dword ptr [esi + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x98u)));
L_00508e77:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508e79:  // je 0x508fab
    if (f.zf) goto L_00508fab;
L_00508e7f:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00508e82:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00508e87:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00508e89:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00508e90:  // mov ecx, dword ptr [edi + 0xe0]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xe0u)));
L_00508e96:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00508e98:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00508e99:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00508e9d:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508ea2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508ea2:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00508ea6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00508ea8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00508eaa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00508eab:  // lea ecx, [esp + 0xbc]
    ecx = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00508eb2:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508eb7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508eb7:  // add edi, 0x3c
    t0 = ladd<32>(edi, 0x3cu, f);
    edi = (uint32_t)(t0);
L_00508eba:  // lea ecx, [esp + 0xe0]
    ecx = (uint32_t)((uint32_t)(esp + 0xe0u));
L_00508ec1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00508ec2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508ec3:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00508eca:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508ecfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508ecf:  // fld dword ptr [esp + 0xf4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf4u)));
L_00508ed6:  // fld dword ptr [esp + 0xe4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe4u)));
L_00508edd:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508edf:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00508ee1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00508ee6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00508ee8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00508eea:  // lea ecx, [esp + 0x11c]
    ecx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_00508ef1:  // fchs 
    ST(0) = -ST(0);
L_00508ef3:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_00508ef7:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508ef9:  // fst dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
L_00508efd:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508f01:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508f03:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00508f05:  // fchs 
    ST(0) = -ST(0);
L_00508f07:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00508f0b:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00508f0f:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00508f13:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508f18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508f18:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00508f1a:  // mov dword ptr [esp + 0xd0], edx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(edx);
L_00508f21:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00508f24:  // mov dword ptr [esp + 0xd4], ecx
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(ecx);
L_00508f2b:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00508f30:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_00508f37:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00508f3a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00508f3e:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00508f41:  // mov dword ptr [esp + 0xd8], edx
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(edx);
L_00508f48:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00508f4c:  // mov dword ptr [esp + 0xdc], eax
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(eax);
L_00508f53:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00508f56:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00508f5a:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00508f5e:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00508f61:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00508f65:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00508f69:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00508f6a:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508f6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508f6f:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00508f73:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00508f77:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00508f7b:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00508f7f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00508f81:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00508f85:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508f89:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00508f8d:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00508f91:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00508f93:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00508f97:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00508f99:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00508f9b:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00508f9f:  // fsubp st(2)
    ST(2) = (ST(2)) - (ST(0));
    lpop(x);
L_00508fa1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508fa3:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508fa7:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00508fab:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00508fb1:  // fld dword ptr [ecx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x7cu)));
L_00508fb4:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_00508fb8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508fba:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508fbd:  // jne 0x509119
    if (!f.zf) goto L_00509119;
L_00508fc3:  // fld dword ptr [ecx + 0x80]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x80u)));
L_00508fc9:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_00508fcd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508fcf:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508fd2:  // je 0x509119
    if (f.zf) goto L_00509119;
L_00508fd8:  // mov ecx, dword ptr [ecx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00508fdb:  // mov eax, dword ptr [ecx + 0x48]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x48u)));
L_00508fde:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00508fe0:  // je 0x508fec
    if (f.zf) goto L_00508fec;
L_00508fe2:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00508fe7:  // jmp 0x50911b
    goto L_0050911b;
L_00508fec:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_00508ff3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508ff4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00508ff6:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508ffbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508ffb:  // mov dword ptr [esp + 0x80], 0
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x0u);
L_00509006:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_00509011:  // mov dword ptr [esp + 0x88], 0
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0x0u);
L_0050901c:  // mov dword ptr [esp + 0x7c], 0x5d892c
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x5d892cu);
L_00509024:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00509026:  // mov dword ptr [esp + 0x90], edx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(edx);
L_0050902d:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00509030:  // mov dword ptr [esp + 0x94], ecx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(ecx);
L_00509037:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0050903a:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050903e:  // mov dword ptr [esp + 0x98], edx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(edx);
L_00509045:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00509048:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0050904c:  // mov dword ptr [esp + 0x9c], eax
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(eax);
L_00509053:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00509057:  // mov dword ptr [esp + 0xa0], ecx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(ecx);
L_0050905e:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00509062:  // mov dword ptr [esp + 0xa4], edx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(edx);
L_00509069:  // mov dword ptr [esp + 0xa8], eax
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(eax);
L_00509070:  // mov dword ptr [esp + 0xac], ecx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ecx);
L_00509077:  // mov dword ptr [esp + 0x7c], 0x5d8bfc
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x5d8bfcu);
L_0050907f:  // mov ecx, dword ptr [ebp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_00509082:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00509087:  // test al, ch
    t0 = llog<8>((eax & 0xffu) & ((ecx >> 8) & 0xffu), f);
L_00509089:  // mov dword ptr [esp + 0x138], 0
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(0x0u);
L_00509094:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_0050909c:  // mov dword ptr [esp + 0x70], 0xffffffff
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0xffffffffu);
L_005090a4:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_005090ac:  // mov dword ptr [esp + 0x78], 0xbf800000
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0xbf800000u);
L_005090b4:  // je 0x5090b8
    if (f.zf) goto L_005090b8;
L_005090b6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005090b8:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005090ba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005090bc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005090be:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005090c0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005090c1:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_005090c4:  // lea edx, [esp + 0x80]
    edx = (uint32_t)((uint32_t)(esp + 0x80u));
L_005090cb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005090cd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005090ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005090cf:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_005090d2:  // lea edx, [esp + 0xd0]
    edx = (uint32_t)((uint32_t)(esp + 0xd0u));
L_005090d9:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_005090db:  // mov dword ptr [esp + 0x64], esp
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esp);
L_005090df:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005090e0:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005090e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005090e5:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_005090ea:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005090efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005090ef:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_005090f2:  // jne 0x509119
    if (!f.zf) goto L_00509119;
L_005090f4:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_005090f8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005090fa:  // je 0x509119
    if (f.zf) goto L_00509119;
L_005090fc:  // test byte ptr [eax + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x10u, f);
L_00509100:  // je 0x509119
    if (f.zf) goto L_00509119;
L_00509102:  // mov eax, dword ptr [eax + 0x138]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x138u)));
L_00509108:  // mov ecx, dword ptr [ebp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_0050910e:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00509110:  // jne 0x509119
    if (!f.zf) goto L_00509119;
L_00509112:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00509117:  // jmp 0x50911b
    goto L_0050911b;
L_00509119:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050911b:  // mov ecx, dword ptr [esp + 0x130]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x130u)));
L_00509122:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00509123:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00509124:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050912b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0050912c:  // add esp, 0x130
    t0 = ladd<32>(esp, 0x130u, f);
    esp = (uint32_t)(t0);
L_00509132:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005088b0, 005088b0)
