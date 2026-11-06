// lifted from 00486940 (FUN_00486940, 1212 bytes, 319 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00486940(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00486940;
L_00486940:  // sub esp, 0x1c
    t0 = lsub<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00486943:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00486944:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00486946:  // call 0x482090
    t0 = 0x00482090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048694bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048694b:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0048694e:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00486956:  // mov dword ptr [esp + 4], 0x3f800000
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(0x3f800000u);
L_0048695e:  // call 0x40c480
    t0 = 0x0040c480u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486963u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486963:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486965:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0048696a:  // je 0x486cdc
    if (f.zf) goto L_00486cdc;
L_00486970:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486975u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486975:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486977:  // je 0x4869b8
    if (f.zf) goto L_004869b8;
L_00486979:  // mov eax, dword ptr [esi + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0048697c:  // mov ecx, dword ptr [eax + 0x574]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x574u)));
L_00486982:  // cmp dword ptr [ecx + 0x2c], 1
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x2cu)), 0x1u, f);
L_00486986:  // jne 0x486996
    if (!f.zf) goto L_00486996;
L_00486988:  // fld dword ptr [0x8aa4fc]
    lpush(x, (long double)F32((uint32_t)(0x8aa4fcu)));
L_0048698e:  // fadd dword ptr [0x5db540]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db540u)));
L_00486994:  // jmp 0x4869ca
    goto L_004869ca;
L_00486996:  // fld dword ptr [0x8aa4f4]
    lpush(x, (long double)F32((uint32_t)(0x8aa4f4u)));
L_0048699c:  // fadd dword ptr [0x5d9638]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d9638u)));
L_004869a2:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_004869aa:  // mov dword ptr [esp + 4], 0
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(0x0u);
L_004869b2:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004869b6:  // jmp 0x4869ce
    goto L_004869ce;
L_004869b8:  // fld dword ptr [0x8aa4fc]
    lpush(x, (long double)F32((uint32_t)(0x8aa4fcu)));
L_004869be:  // fsub dword ptr [0x5dbe80]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe80u)));
L_004869c4:  // fsub dword ptr [0x67a62c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a62cu)));
L_004869ca:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004869ce:  // mov eax, dword ptr [0x8aa530]
    eax = (uint32_t)(M32((uint32_t)(0x8aa530u)));
L_004869d3:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004869d6:  // je 0x486cad
    if (f.zf) goto L_00486cad;
L_004869dc:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004869dd:  // je 0x4869f3
    if (f.zf) goto L_004869f3;
L_004869df:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004869e0:  // jne 0x486cad
    if (!f.zf) goto L_00486cad;
L_004869e6:  // mov eax, dword ptr [0x8aa534]
    eax = (uint32_t)(M32((uint32_t)(0x8aa534u)));
L_004869eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004869ed:  // je 0x486cad
    if (f.zf) goto L_00486cad;
L_004869f3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004869f4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004869f5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004869f6:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_004869f8:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004869fa:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004869ff:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486a04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486a04:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00486a06:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00486a08:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00486a0d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486a12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486a12:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486a14:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486a16:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00486a1b:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486a20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486a20:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00486a24:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00486a28:  // fld dword ptr [0x8aa4f8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4f8u)));
L_00486a2e:  // fsub dword ptr [0x5dbe98]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe98u)));
L_00486a34:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00486a35:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00486a36:  // mov edx, dword ptr [esi + 0x128]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x128u)));
L_00486a3c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486a41:  // fadd dword ptr [0x5dbe7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe7cu)));
L_00486a47:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486a49:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00486a4d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486a52:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486a57:  // fsub dword ptr [0x5dbe34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe34u)));
L_00486a5d:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_00486a62:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486a64:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486a69:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486a6b:  // fsub dword ptr [0x67a628]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a628u)));
L_00486a71:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486a73:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486a74:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00486a79:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486a7a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486a7b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486a7e:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486a83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486a83:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486a86:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00486a89:  // call 0x40c3c0
    t0 = 0x0040c3c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486a8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486a8e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00486a92:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00486a98:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00486a9c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00486aa0:  // fmul dword ptr [0x5db3c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3c0u)));
L_00486aa6:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00486aa8:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00486aae:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00486ab2:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00486ab8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00486aba:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00486abe:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00486ac2:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00486ac5:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00486ac7:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00486acd:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00486acf:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00486ad3:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00486ad7:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00486ad9:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486adc:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00486adf:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00486ae1:  // fmul dword ptr [0x5db3c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3c0u)));
L_00486ae7:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00486ae9:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00486aed:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00486af1:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_00486af3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00486af5:  // call 0x40c3a0
    t0 = 0x0040c3a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486afau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486afa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486afc:  // je 0x486b3c
    if (f.zf) goto L_00486b3c;
L_00486afe:  // mov ecx, dword ptr [esi + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x58u)));
L_00486b01:  // fld dword ptr [esi + ecx*4 + 0x1dc]
    lpush(x, (long double)F32((uint32_t)(esi + ecx * 4u + 0x1dcu)));
L_00486b08:  // fcomp dword ptr [esi + ecx*4 + 0x1ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + ecx * 4u + 0x1ecu)));
    lpop(x);
L_00486b0f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486b11:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00486b14:  // je 0x486b4a
    if (f.zf) goto L_00486b4a;
L_00486b16:  // mov edx, dword ptr [esi + ecx*4 + 0x1ec]
    edx = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0x1ecu)));
L_00486b1d:  // mov eax, 0x3f4ccccd
    eax = (uint32_t)(0x3f4ccccdu);
L_00486b22:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00486b24:  // jne 0x486b33
    if (!f.zf) goto L_00486b33;
L_00486b26:  // mov dword ptr [esi + ecx*4 + 0x1ec], 0x3dcccccd
    M32((uint32_t)(esi + ecx * 4u + 0x1ecu)) = (uint32_t)(0x3dcccccdu);
L_00486b31:  // jmp 0x486b4a
    goto L_00486b4a;
L_00486b33:  // mov dword ptr [esi + ecx*4 + 0x1ec], eax
    M32((uint32_t)(esi + ecx * 4u + 0x1ecu)) = (uint32_t)(eax);
L_00486b3a:  // jmp 0x486b4a
    goto L_00486b4a;
L_00486b3c:  // mov eax, dword ptr [esi + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x58u)));
L_00486b3f:  // mov dword ptr [esi + eax*4 + 0x1ec], 0x3f4ccccd
    M32((uint32_t)(esi + eax * 4u + 0x1ecu)) = (uint32_t)(0x3f4ccccdu);
L_00486b4a:  // fld dword ptr [0x8a9e20]
    lpush(x, (long double)F32((uint32_t)(0x8a9e20u)));
L_00486b50:  // mov ecx, dword ptr [esi + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x58u)));
L_00486b53:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_00486b59:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_00486b5d:  // fadd dword ptr [esi + ecx*4 + 0x1dc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + ecx * 4u + 0x1dcu)));
L_00486b64:  // fcom dword ptr [esi + ecx*4 + 0x1ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + ecx * 4u + 0x1ecu)));
L_00486b6b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486b6d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00486b70:  // je 0x486b7b
    if (f.zf) goto L_00486b7b;
L_00486b72:  // fstp dword ptr [esi + ecx*4 + 0x1dc]
    F32((uint32_t)(esi + ecx * 4u + 0x1dcu)) = lf32(ST(0));
    lpop(x);
L_00486b79:  // jmp 0x486baf
    goto L_00486baf;
L_00486b7b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00486b7d:  // fld dword ptr [esi + ecx*4 + 0x1dc]
    lpush(x, (long double)F32((uint32_t)(esi + ecx * 4u + 0x1dcu)));
L_00486b84:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00486b88:  // fcom dword ptr [esi + ecx*4 + 0x1ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + ecx * 4u + 0x1ecu)));
L_00486b8f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00486b91:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00486b94:  // jne 0x486b9f
    if (!f.zf) goto L_00486b9f;
L_00486b96:  // fstp dword ptr [esi + ecx*4 + 0x1dc]
    F32((uint32_t)(esi + ecx * 4u + 0x1dcu)) = lf32(ST(0));
    lpop(x);
L_00486b9d:  // jmp 0x486baf
    goto L_00486baf;
L_00486b9f:  // mov edx, dword ptr [esi + ecx*4 + 0x1ec]
    edx = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0x1ecu)));
L_00486ba6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00486ba8:  // mov dword ptr [esi + ecx*4 + 0x1dc], edx
    M32((uint32_t)(esi + ecx * 4u + 0x1dcu)) = (uint32_t)(edx);
L_00486baf:  // mov eax, dword ptr [esi + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x58u)));
L_00486bb2:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00486bb6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00486bb7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00486bb8:  // fld dword ptr [esi + eax*4 + 0x1dc]
    lpush(x, (long double)F32((uint32_t)(esi + eax * 4u + 0x1dcu)));
L_00486bbf:  // fmul dword ptr [0x5d9644]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9644u)));
L_00486bc5:  // mov eax, dword ptr [esi + 0x128]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x128u)));
L_00486bcb:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486bd0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486bd2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486bd7:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00486bdb:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00486bdf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486be4:  // shl ecx, 0x18
    t0 = lshl<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_00486be7:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00486be9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00486bea:  // mov edi, dword ptr [esp + 0x34]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00486bee:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486bf0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486bf1:  // fld dword ptr [0x8aa4f8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4f8u)));
L_00486bf7:  // fsub dword ptr [0x5dbe98]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe98u)));
L_00486bfd:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486bff:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486c01:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486c02:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00486c07:  // fadd dword ptr [0x5dbe7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe7cu)));
L_00486c0d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00486c0e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486c0f:  // fsub dword ptr [0x5dbe34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe34u)));
L_00486c15:  // fsub dword ptr [0x67a628]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a628u)));
L_00486c1b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486c1e:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486c23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486c23:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00486c26:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00486c2b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486c2d:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00486c2f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486c34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486c34:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486c36:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00486c38:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00486c3d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486c42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486c42:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486c44:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486c46:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00486c4b:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486c50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486c50:  // fld dword ptr [0x8aa4f8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4f8u)));
L_00486c56:  // fsub dword ptr [0x5dbe98]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe98u)));
L_00486c5c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00486c5d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00486c5e:  // mov ecx, dword ptr [esi + 0x124]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x124u)));
L_00486c64:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486c69:  // fadd dword ptr [0x5dbe7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe7cu)));
L_00486c6f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486c71:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486c76:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486c7b:  // push 0xffaf8f6f
    t0 = 0xffaf8f6fu; esp -= 4; M32(esp) = t0;
L_00486c80:  // fsub dword ptr [0x5dbe34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe34u)));
L_00486c86:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486c88:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486c8d:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486c8f:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00486c91:  // fsub dword ptr [0x67a628]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a628u)));
L_00486c97:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486c98:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00486c9d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00486c9e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486c9f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486ca2:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486ca7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486ca7:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00486caa:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00486cab:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00486cac:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00486cad:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00486caf:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00486cb1:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00486cb6:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486cbbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486cbb:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00486cbd:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00486cbf:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00486cc4:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486cc9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486cc9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486ccb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486ccd:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00486cd2:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486cd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486cd7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00486cd8:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00486cdb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00486cdc:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486ce1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486ce1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00486ce3:  // je 0x486d31
    if (f.zf) goto L_00486d31;
L_00486ce5:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486ce8:  // mov eax, dword ptr [edx + 0x574]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x574u)));
L_00486cee:  // mov ecx, dword ptr [eax + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_00486cf1:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00486cf4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486cf9:  // jne 0x486d16
    if (!f.zf) goto L_00486d16;
L_00486cfb:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d00:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00486d04:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00486d08:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486d0e:  // fsub dword ptr [0x5d9640]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d9640u)));
L_00486d14:  // jmp 0x486d4f
    goto L_00486d4f;
L_00486d16:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d1b:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00486d1f:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00486d23:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486d29:  // fadd dword ptr [0x5db540]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db540u)));
L_00486d2f:  // jmp 0x486d4f
    goto L_00486d4f;
L_00486d31:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486d36:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d3b:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00486d3f:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00486d43:  // fsub dword ptr [0x67a62c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a62cu)));
L_00486d49:  // fsub dword ptr [0x5d8c20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c20u)));
L_00486d4f:  // mov ecx, dword ptr [esi + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_00486d52:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00486d56:  // call 0x40c460
    t0 = 0x0040c460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d5b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486d5c:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_00486d60:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_00486d65:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486d66:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d6b:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00486d6f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00486d70:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d75:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00486d78:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00486d7a:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_00486d7e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486d83:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00486d84:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00486d85:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486d87:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d8c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00486d8e:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486d93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486d93:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00486d97:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486d99:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00486d9b:  // push 0x40a00000
    t0 = 0x40a00000u; esp -= 4; M32(esp) = t0;
L_00486da0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00486da1:  // push 0xff30ff30
    t0 = 0xff30ff30u; esp -= 4; M32(esp) = t0;
L_00486da6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486dab:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00486db0:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00486db5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486db6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486dbb:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486dc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486dc0:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00486dc4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00486dc5:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_00486dc9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00486dce:  // fsub dword ptr [0x67a628]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a628u)));
L_00486dd4:  // fsub dword ptr [0x5dbe94]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe94u)));
L_00486dda:  // fild dword ptr [esp + 0x40]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_00486dde:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00486de4:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00486de6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00486de9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00486deb:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486df0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486df0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00486df2:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00486df7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00486df7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00486df8:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00486dfb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00486940, 00486940)
