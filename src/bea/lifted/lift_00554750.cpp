// lifted from 00554750 (FUN_00554750, 1695 bytes, 381 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00554750(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00554750;
L_00554750:  // mov al, byte ptr [0x89d680]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89d680u))) & 0xffu);
L_00554755:  // sub esp, 0xfc
    t0 = lsub<32>(esp, 0xfcu, f);
    esp = (uint32_t)(t0);
L_0055475b:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0055475d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0055475e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0055475f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00554760:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00554761:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00554763:  // jne 0x554de2
    if (!f.zf) goto L_00554de2;
L_00554769:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_00554770:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_00554776:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00554778:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0055477b:  // jne 0x554788
    if (!f.zf) goto L_00554788;
L_0055477d:  // mov dword ptr [esp + 0x120], 0x40000000
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(0x40000000u);
L_00554788:  // mov eax, dword ptr [0x6fbe54]
    eax = (uint32_t)(M32((uint32_t)(0x6fbe54u)));
L_0055478d:  // mov ecx, dword ptr [0x6fbe44]
    ecx = (uint32_t)(M32((uint32_t)(0x6fbe44u)));
L_00554793:  // and eax, 0xfefefe
    t0 = llog<32>(eax & 0xfefefeu, f);
    eax = (uint32_t)(t0);
L_00554798:  // and ecx, 0xfefefe
    t0 = llog<32>(ecx & 0xfefefeu, f);
    ecx = (uint32_t)(t0);
L_0055479e:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_005547a0:  // mov ecx, dword ptr [esp + 0x124]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_005547a7:  // shr eax, 1
    t0 = lshr<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_005547a9:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_005547ad:  // mov edi, 0xff
    edi = (uint32_t)(0xffu);
L_005547b2:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_005547b4:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_005547b6:  // mov dl, byte ptr [esp + 0x22]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x22u))) & 0xffu);
L_005547ba:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_005547bc:  // imul edx, edi
    t0 = limul32(edx, edi, f);
    edx = (uint32_t)(t0);
L_005547bf:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_005547c6:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_005547cc:  // mov cl, ah
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(((eax >> 8) & 0xffu)) & 0xffu);
L_005547ce:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_005547d3:  // imul ecx, edi
    t0 = limul32(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_005547d6:  // imul eax, edi
    t0 = limul32(eax, edi, f);
    eax = (uint32_t)(t0);
L_005547d9:  // or edx, 0xff0000
    t0 = llog<32>(edx | 0xff0000u, f);
    edx = (uint32_t)(t0);
L_005547df:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_005547e7:  // sar edx, 8
    t0 = lsar<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_005547ea:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_005547ed:  // sar ecx, 8
    t0 = lsar<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_005547f0:  // or edx, ecx
    t0 = llog<32>(edx | ecx, f);
    edx = (uint32_t)(t0);
L_005547f2:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_005547f5:  // sar eax, 8
    t0 = lsar<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_005547f8:  // or edx, eax
    t0 = llog<32>(edx | eax, f);
    edx = (uint32_t)(t0);
L_005547fa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005547fc:  // mov edi, edx
    edi = (uint32_t)(edx);
L_005547fe:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00554801:  // jne 0x55480e
    if (!f.zf) goto L_0055480e;
L_00554803:  // mov edx, dword ptr [esp + 0x120]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x120u)));
L_0055480a:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0055480e:  // fld dword ptr [esi + 0x594]
    lpush(x, (long double)F32((uint32_t)(esi + 0x594u)));
L_00554814:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0055481a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0055481c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0055481f:  // jne 0x55487b
    if (!f.zf) goto L_0055487b;
L_00554821:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_00554828:  // fsub dword ptr [esp + 0x120]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x120u)));
L_0055482f:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00554832:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_00554836:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00554839:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055483eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055483e:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00554842:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00554846:  // fld dword ptr [esp + 0x128]
    lpush(x, (long double)F32((uint32_t)(esp + 0x128u)));
L_0055484d:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554853:  // fst dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
L_00554857:  // fadd dword ptr [esp + 0x118]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x118u)));
L_0055485e:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00554862:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00554865:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055486au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055486a:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0055486e:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00554872:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00554875:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00554879:  // jmp 0x5548d7
    goto L_005548d7;
L_0055487b:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_00554882:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554888:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0055488b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0055488f:  // fld dword ptr [esp + 0x118]
    lpush(x, (long double)F32((uint32_t)(esp + 0x118u)));
L_00554896:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_0055489a:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_0055489e:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_005548a1:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005548a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005548a6:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_005548aa:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005548ae:  // fld dword ptr [esp + 0x118]
    lpush(x, (long double)F32((uint32_t)(esp + 0x118u)));
L_005548b5:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_005548b9:  // fadd dword ptr [esp + 0x128]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x128u)));
L_005548c0:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_005548c3:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005548c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005548c8:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_005548cc:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005548d0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005548d3:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_005548d7:  // fld dword ptr [esi + 0x598]
    lpush(x, (long double)F32((uint32_t)(esi + 0x598u)));
L_005548dd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005548e3:  // fld dword ptr [esp + 0x114]
    lpush(x, (long double)F32((uint32_t)(esp + 0x114u)));
L_005548ea:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005548ec:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005548ef:  // jne 0x554937
    if (!f.zf) goto L_00554937;
L_005548f1:  // fsub dword ptr [esp + 0x120]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x120u)));
L_005548f8:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005548fb:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_005548ff:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00554902:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554907u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554907:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0055490b:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0055490f:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_00554913:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00554917:  // fadd dword ptr [esp + 0x11c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x11cu)));
L_0055491e:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00554922:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00554925:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055492au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055492a:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0055492e:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00554932:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00554935:  // jmp 0x55497b
    goto L_0055497b;
L_00554937:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0055493b:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0055493e:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_00554942:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00554945:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055494au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055494a:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0055494e:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00554952:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00554956:  // fld dword ptr [esp + 0x11c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x11cu)));
L_0055495d:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00554961:  // fadd dword ptr [esp + 0x128]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x128u)));
L_00554968:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0055496b:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554970u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554970:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00554974:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00554978:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0055497b:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0055497f:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_00554983:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_00554985:  // jge 0x554de2
    if ((f.sf == f.of)) goto L_00554de2;
L_0055498b:  // mov ebx, dword ptr [esp + 0x3c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0055498f:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_00554991:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_00554995:  // jge 0x554dcd
    if ((f.sf == f.of)) goto L_00554dcd;
L_0055499b:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0055499f:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_005549a7:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_005549af:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_005549b7:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_005549bb:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_005549c1:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_005549c5:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_005549c9:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_005549cd:  // mov dword ptr [esp + 0x94], edi
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edi);
L_005549d4:  // fst dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
L_005549d8:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_005549dc:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_005549e4:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_005549ef:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_005549f3:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_005549f7:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005549fb:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_005549ff:  // mov dword ptr [esp + 0x80], ecx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ecx);
L_00554a06:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00554a0b:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554a10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554a10:  // fsub dword ptr [0x5d8574]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8574u)));
L_00554a16:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00554a1d:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_00554a21:  // fsub dword ptr [esp + 0x110]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x110u)));
L_00554a28:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00554a2a:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_00554a31:  // fsub dword ptr [esp + 0x114]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x114u)));
L_00554a38:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00554a3c:  // fmul dword ptr [esi + 0x598]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x598u)));
L_00554a42:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554a44:  // fmul dword ptr [esi + 0x594]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x594u)));
L_00554a4a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00554a4c:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554a52:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00554a58:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00554a5e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00554a60:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00554a63:  // je 0x554a6d
    if (f.zf) goto L_00554a6d;
L_00554a65:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554a67:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00554a6d:  // fmul dword ptr [esp + 0x120]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x120u)));
L_00554a74:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00554a78:  // mov dword ptr [esp + 0xb8], edi
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(edi);
L_00554a7f:  // mov dword ptr [esp + 0x70], edx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(edx);
L_00554a83:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00554a85:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00554a87:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554a89:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_00554a8d:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00554a91:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_00554a95:  // mov dword ptr [esp + 0xa4], ecx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ecx);
L_00554a9c:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554a9e:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00554aa2:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00554aa7:  // mov dword ptr [esp + 0xa8], 0
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0x0u);
L_00554ab2:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554ab8:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00554abf:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00554ac3:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554ac5:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554acb:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_00554ad2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554ad4:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00554ad8:  // fst dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
L_00554adc:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_00554ae0:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_00554ae7:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00554aeb:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_00554aef:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00554af3:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554af8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554af8:  // fsub dword ptr [0x5d8574]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8574u)));
L_00554afe:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_00554b05:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00554b0c:  // fsub dword ptr [esp + 0x110]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x110u)));
L_00554b13:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00554b15:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00554b1c:  // fsub dword ptr [esp + 0x114]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x114u)));
L_00554b23:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00554b27:  // fmul dword ptr [esi + 0x598]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x598u)));
L_00554b2d:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554b2f:  // fmul dword ptr [esi + 0x594]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x594u)));
L_00554b35:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00554b37:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554b3d:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00554b43:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00554b49:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00554b4b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00554b4e:  // je 0x554b58
    if (f.zf) goto L_00554b58;
L_00554b50:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554b52:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00554b58:  // fmul dword ptr [esp + 0x120]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x120u)));
L_00554b5f:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00554b63:  // mov dword ptr [esp + 0xdc], edi
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(edi);
L_00554b6a:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_00554b6e:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00554b73:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00554b75:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554b77:  // mov dword ptr [esp + 0xcc], 0
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(0x0u);
L_00554b82:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554b84:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554b8a:  // fstp dword ptr [esp + 0xbc]
    F32((uint32_t)(esp + 0xbcu)) = lf32(ST(0));
    lpop(x);
L_00554b91:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00554b95:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554b97:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554b9d:  // fstp dword ptr [esp + 0xc0]
    F32((uint32_t)(esp + 0xc0u)) = lf32(ST(0));
    lpop(x);
L_00554ba4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554ba6:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00554baa:  // fst dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
L_00554bae:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00554bb2:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00554bb8:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00554bbc:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00554bc0:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00554bc4:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_00554bc8:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00554bcc:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00554bd0:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00554bd4:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00554bd8:  // fstp dword ptr [esp + 0xc4]
    F32((uint32_t)(esp + 0xc4u)) = lf32(ST(0));
    lpop(x);
L_00554bdf:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00554be3:  // mov dword ptr [esp + 0xc8], eax
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(eax);
L_00554bea:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554befu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554bef:  // fsub dword ptr [0x5d8574]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8574u)));
L_00554bf5:  // fstp dword ptr [esp + 0xcc]
    F32((uint32_t)(esp + 0xccu)) = lf32(ST(0));
    lpop(x);
L_00554bfc:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_00554c03:  // fsub dword ptr [esp + 0x110]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x110u)));
L_00554c0a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00554c0c:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00554c13:  // fsub dword ptr [esp + 0x114]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x114u)));
L_00554c1a:  // fmul dword ptr [esi + 0x598]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x598u)));
L_00554c20:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554c22:  // fmul dword ptr [esi + 0x594]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x594u)));
L_00554c28:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00554c2a:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554c30:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00554c36:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00554c3c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00554c3e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00554c41:  // je 0x554c4b
    if (f.zf) goto L_00554c4b;
L_00554c43:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554c45:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00554c4b:  // fmul dword ptr [esp + 0x120]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x120u)));
L_00554c52:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00554c56:  // mov dword ptr [esp + 0x100], edi
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(edi);
L_00554c5d:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_00554c61:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00554c63:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00554c65:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554c67:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00554c6b:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00554c6f:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_00554c73:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00554c78:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554c7a:  // mov dword ptr [esp + 0xec], eax
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(eax);
L_00554c81:  // mov dword ptr [esp + 0xf0], 0
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(0x0u);
L_00554c8c:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554c92:  // fstp dword ptr [esp + 0xe0]
    F32((uint32_t)(esp + 0xe0u)) = lf32(ST(0));
    lpop(x);
L_00554c99:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_00554ca0:  // fsub dword ptr [esp + 0x114]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x114u)));
L_00554ca7:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554ca9:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554caf:  // fstp dword ptr [esp + 0xe4]
    F32((uint32_t)(esp + 0xe4u)) = lf32(ST(0));
    lpop(x);
L_00554cb6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554cb8:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00554cbc:  // fst dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
L_00554cc0:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00554cc4:  // fstp dword ptr [esp + 0xe8]
    F32((uint32_t)(esp + 0xe8u)) = lf32(ST(0));
    lpop(x);
L_00554ccb:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00554ccf:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00554cd3:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_00554cd7:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00554cdb:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554ce0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554ce0:  // fsub dword ptr [0x5d8574]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8574u)));
L_00554ce6:  // fstp dword ptr [esp + 0xf0]
    F32((uint32_t)(esp + 0xf0u)) = lf32(ST(0));
    lpop(x);
L_00554ced:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_00554cf4:  // fsub dword ptr [esp + 0x110]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x110u)));
L_00554cfb:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00554cfd:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00554d04:  // fsub dword ptr [esp + 0x114]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x114u)));
L_00554d0b:  // fmul dword ptr [esi + 0x598]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x598u)));
L_00554d11:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554d13:  // fmul dword ptr [esi + 0x594]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x594u)));
L_00554d19:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00554d1b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554d21:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00554d27:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00554d2d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00554d2f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00554d32:  // je 0x554d3c
    if (f.zf) goto L_00554d3c;
L_00554d34:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554d36:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00554d3c:  // fmul dword ptr [esp + 0x120]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x120u)));
L_00554d43:  // lea ecx, [esp + 0x7c]
    ecx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00554d47:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00554d49:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00554d4a:  // mov ecx, dword ptr [esi + 0x5b8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x5b8u)));
L_00554d50:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00554d52:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00554d54:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554d56:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554d5c:  // fstp dword ptr [esp + 0x10c]
    F32((uint32_t)(esp + 0x10cu)) = lf32(ST(0));
    lpop(x);
L_00554d63:  // fld dword ptr [esp + 0xf4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf4u)));
L_00554d6a:  // fsub dword ptr [esp + 0x11c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x11cu)));
L_00554d71:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00554d73:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00554d79:  // fstp dword ptr [esp + 0x110]
    F32((uint32_t)(esp + 0x110u)) = lf32(ST(0));
    lpop(x);
L_00554d80:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00554d82:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554d87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554d87:  // lea ecx, [eax + 2]
    ecx = (uint32_t)((uint32_t)(eax + 0x2u));
L_00554d8a:  // lea edx, [eax + 1]
    edx = (uint32_t)((uint32_t)(eax + 0x1u));
L_00554d8d:  // mov word ptr [esp + 0x44], ax
    M16((uint32_t)(esp + 0x44u)) = (uint16_t)((eax & 0xffffu));
L_00554d92:  // mov word ptr [esp + 0x46], ax
    M16((uint32_t)(esp + 0x46u)) = (uint16_t)((eax & 0xffffu));
L_00554d97:  // add eax, 3
    t0 = ladd<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_00554d9a:  // mov word ptr [esp + 0x40], cx
    M16((uint32_t)(esp + 0x40u)) = (uint16_t)((ecx & 0xffffu));
L_00554d9f:  // mov word ptr [esp + 0x48], ax
    M16((uint32_t)(esp + 0x48u)) = (uint16_t)((eax & 0xffffu));
L_00554da4:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_00554da8:  // mov word ptr [esp + 0x4a], cx
    M16((uint32_t)(esp + 0x4au)) = (uint16_t)((ecx & 0xffffu));
L_00554dad:  // mov ecx, dword ptr [esi + 0x5b8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x5b8u)));
L_00554db3:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00554db5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00554db6:  // mov word ptr [esp + 0x4a], dx
    M16((uint32_t)(esp + 0x4au)) = (uint16_t)((edx & 0xffffu));
L_00554dbb:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554dc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554dc0:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00554dc1:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_00554dc3:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_00554dc7:  // jl 0x5549c5
    if ((f.sf != f.of)) goto L_005549c5;
L_00554dcd:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00554dd1:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00554dd5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00554dd6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00554dd8:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00554ddc:  // jl 0x55498b
    if ((f.sf != f.of)) goto L_0055498b;
L_00554de2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00554de3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00554de4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00554de5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00554de6:  // add esp, 0xfc
    t0 = ladd<32>(esp, 0xfcu, f);
    esp = (uint32_t)(t0);
L_00554dec:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00554750, 00554750)
