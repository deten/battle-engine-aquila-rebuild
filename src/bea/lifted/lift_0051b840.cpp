// lifted from 0051b840 (vslot5, 1577 bytes, 446 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051b840(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051b840;
L_0051b840:  // mov eax, 0x200c
    eax = (uint32_t)(0x200cu);
L_0051b845:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b84au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b84a:  // fld dword ptr [esp + 0x2010]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2010u)));
L_0051b851:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051b857:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b858:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051b859:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0051b85b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051b85d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051b860:  // je 0x51be5e
    if (f.zf) goto L_0051be5e;
L_0051b866:  // fld dword ptr [edi + 0x18]
    lpush(x, (long double)F32((uint32_t)(edi + 0x18u)));
L_0051b869:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051b86f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051b871:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051b874:  // jne 0x51b87e
    if (!f.zf) goto L_0051b87e;
L_0051b876:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051b878:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051b87e:  // fmul dword ptr [0x5d85e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e8u)));
L_0051b884:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b886:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b88b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b88d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051b88f:  // fcos 
    ST(0) = lfcos(ST(0));
L_0051b891:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0051b897:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051b89d:  // fmul dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc4u)));
L_0051b8a3:  // fadd dword ptr [0x5e49f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e49f0u)));
L_0051b8a9:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0051b8ad:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0051b8b1:  // fmul dword ptr [0x5e49ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e49ecu)));
L_0051b8b7:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051b8bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b8bc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b8bd:  // fsubr dword ptr [0x5dbe00]
    ST(0) = ((long double)F32((uint32_t)(0x5dbe00u))) - (ST(0));
L_0051b8c3:  // mov eax, dword ptr [0x89d880]
    eax = (uint32_t)(M32((uint32_t)(0x89d880u)));
L_0051b8c8:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051b8ca:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051b8cb:  // push 0x3f75c28f
    t0 = 0x3f75c28fu; esp -= 4; M32(esp) = t0;
L_0051b8d0:  // fsub dword ptr [0x5e49e8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e49e8u)));
L_0051b8d6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b8d7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051b8da:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0051b8de:  // fmul dword ptr [0x5e49e4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e49e4u)));
L_0051b8e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b8e5:  // fsubr dword ptr [0x5e49e0]
    ST(0) = ((long double)F32((uint32_t)(0x5e49e0u))) - (ST(0));
L_0051b8eb:  // fsub dword ptr [0x5e49dc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e49dcu)));
L_0051b8f1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051b8f4:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b8f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b8f9:  // fld dword ptr [edi + 0x18]
    lpush(x, (long double)F32((uint32_t)(edi + 0x18u)));
L_0051b8fc:  // fcomp dword ptr [0x5d85bc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85bcu)));
    lpop(x);
L_0051b902:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051b905:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051b907:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051b90a:  // jne 0x51bac2
    if (!f.zf) goto L_0051bac2;
L_0051b910:  // fld dword ptr [edi + 0x18]
    lpush(x, (long double)F32((uint32_t)(edi + 0x18u)));
L_0051b913:  // fld qword ptr [0x5db4a0]
    lpush(x, (long double)F64((uint32_t)(0x5db4a0u)));
L_0051b919:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b91eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b91e:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_0051b924:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051b926:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051b929:  // je 0x51bac2
    if (f.zf) goto L_0051bac2;
L_0051b92f:  // push 0x77
    t0 = 0x77u; esp -= 4; M32(esp) = t0;
L_0051b931:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b936u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b936:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051b939:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_0051b93d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0051b93f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b940:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b941:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b943:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051b948:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b94du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b94d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b94f:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b954u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b954:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_0051b958:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b95a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b95c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b95d:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_0051b962:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051b968:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b96d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b972:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051b977:  // push 0x43c88000
    t0 = 0x43c88000u; esp -= 4; M32(esp) = t0;
L_0051b97c:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0051b982:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b983:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051b988:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_0051b98e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051b991:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b993:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b998u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b998:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b99a:  // call 0x540010
    t0 = 0x00540010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b99fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b99f:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_0051b9a3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b9a5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b9a7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b9a8:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_0051b9ad:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051b9b3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b9b8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051b9bd:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051b9c2:  // push 0x43c88000
    t0 = 0x43c88000u; esp -= 4; M32(esp) = t0;
L_0051b9c7:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0051b9cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051b9ce:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051b9d3:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0051b9d9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051b9dc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b9de:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b9e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b9e3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051b9e5:  // call 0x540010
    t0 = 0x00540010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051b9eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051b9ea:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_0051b9ee:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b9f0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051b9f2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051b9f3:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_0051b9f8:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051b9fe:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ba03:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ba08:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051ba0d:  // push 0x43c78000
    t0 = 0x43c78000u; esp -= 4; M32(esp) = t0;
L_0051ba12:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0051ba18:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051ba19:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051ba1e:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_0051ba24:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051ba27:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051ba29:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ba2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ba2e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051ba30:  // call 0x540010
    t0 = 0x00540010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ba35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ba35:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_0051ba39:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051ba3b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051ba3d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051ba3e:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_0051ba43:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ba48:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ba4d:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051ba52:  // push 0x43c78000
    t0 = 0x43c78000u; esp -= 4; M32(esp) = t0;
L_0051ba57:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051ba5d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051ba5e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051ba63:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0051ba69:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0051ba6f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051ba72:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051ba74:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ba79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ba79:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051ba7b:  // call 0x540010
    t0 = 0x00540010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ba80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ba80:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_0051ba84:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051ba86:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051ba88:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051ba89:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051ba8b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051ba91:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ba96:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ba9b:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051baa0:  // push 0x43c80000
    t0 = 0x43c80000u; esp -= 4; M32(esp) = t0;
L_0051baa5:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0051baab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051baac:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051bab1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051bab4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bab6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051babbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051babb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051babd:  // call 0x540010
    t0 = 0x00540010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bac2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bac2:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0051bac9:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0051bad0:  // fld dword ptr [edi + 0x18]
    lpush(x, (long double)F32((uint32_t)(edi + 0x18u)));
L_0051bad3:  // fsub dword ptr [0x5d85bc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85bcu)));
L_0051bad9:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051badf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051bae1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051bae4:  // je 0x51baf0
    if (f.zf) goto L_0051baf0;
L_0051bae6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051bae8:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051baee:  // jmp 0x51bb05
    goto L_0051bb05;
L_0051baf0:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051baf6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051baf8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051bafb:  // jne 0x51bb05
    if (!f.zf) goto L_0051bb05;
L_0051bafd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051baff:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051bb05:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0051bb0b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051bb0d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051bb0f:  // mov edx, dword ptr [0x89d7bc]
    edx = (uint32_t)(M32((uint32_t)(0x89d7bcu)));
L_0051bb15:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051bb16:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bb18:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bb1d:  // fmul dword ptr [0x5db358]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db358u)));
L_0051bb23:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bb25:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bb27:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bb2c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bb31:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_0051bb36:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051bb37:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0051bb3b:  // push 0x3dced917
    t0 = 0x3dced917u; esp -= 4; M32(esp) = t0;
L_0051bb40:  // push 0xc0c00000
    t0 = 0xc0c00000u; esp -= 4; M32(esp) = t0;
L_0051bb45:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051bb47:  // fld dword ptr [0x5e49d8]
    lpush(x, (long double)F32((uint32_t)(0x5e49d8u)));
L_0051bb4d:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_0051bb51:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051bb52:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051bb55:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bb5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bb5a:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051bb5d:  // mov eax, dword ptr [0x89d7bc]
    eax = (uint32_t)(M32((uint32_t)(0x89d7bcu)));
L_0051bb62:  // fld dword ptr [0x5db4d0]
    lpush(x, (long double)F32((uint32_t)(0x5db4d0u)));
L_0051bb68:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bb6a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bb6f:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_0051bb73:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bb75:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bb77:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bb7c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bb81:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051bb83:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051bb84:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051bb89:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_0051bb8e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051bb8f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051bb92:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bb97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bb97:  // mov ebp, dword ptr [0x89d88c]
    ebp = (uint32_t)(M32((uint32_t)(0x89d88cu)));
L_0051bb9d:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051bba0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051bba5:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bbaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bbaa:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_0051bbad:  // fmul dword ptr [0x5dbce4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbce4u)));
L_0051bbb3:  // fcom dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
L_0051bbb9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051bbbb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051bbbe:  // jne 0x51bd91
    if (!f.zf) goto L_0051bd91;
L_0051bbc4:  // fsubr dword ptr [0x5d85ec]
    ST(0) = ((long double)F32((uint32_t)(0x5d85ecu))) - (ST(0));
L_0051bbca:  // mov dword ptr [esp + 0x14], 0xbf800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xbf800000u);
L_0051bbd2:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_0051bbd8:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_0051bbde:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051bbe4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051bbe6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051bbe9:  // je 0x51bbff
    if (f.zf) goto L_0051bbff;
L_0051bbeb:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051bbf1:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0051bbf3:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0051bbf7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051bbf9:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051bbff:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051bc05:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_0051bc07:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051bc08:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bc0a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bc0f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bc11:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051bc13:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051bc19:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051bc1d:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051bc21:  // lea eax, [edi + edi*4]
    eax = (uint32_t)((uint32_t)(edi + edi * 4u));
L_0051bc24:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_0051bc27:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_0051bc29:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051bc2f:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0051bc32:  // and eax, 0xff000000
    t0 = llog<32>(eax & 0xff000000u, f);
    eax = (uint32_t)(t0);
L_0051bc37:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0051bc39:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0051bc3d:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051bc41:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bc42:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bc43:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051bc44:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051bc45:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_0051bc4a:  // push 0x43920000
    t0 = 0x43920000u; esp -= 4; M32(esp) = t0;
L_0051bc4f:  // push 0x437c0000
    t0 = 0x437c0000u; esp -= 4; M32(esp) = t0;
L_0051bc54:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bc59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bc59:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bc5b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bc60:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bc62:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051bc64:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bc65:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bc66:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051bc67:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051bc68:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_0051bc6d:  // push 0x43920000
    t0 = 0x43920000u; esp -= 4; M32(esp) = t0;
L_0051bc72:  // push 0x43780000
    t0 = 0x43780000u; esp -= 4; M32(esp) = t0;
L_0051bc77:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bc7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bc7c:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0051bc7f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bc81:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bc86:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bc88:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051bc8a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bc8b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bc8c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051bc8d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051bc8e:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_0051bc93:  // push 0x43900000
    t0 = 0x43900000u; esp -= 4; M32(esp) = t0;
L_0051bc98:  // push 0x437c0000
    t0 = 0x437c0000u; esp -= 4; M32(esp) = t0;
L_0051bc9d:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bca2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bca2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bca4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bca9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bcab:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051bcad:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bcae:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bcaf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051bcb0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051bcb1:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_0051bcb6:  // push 0x43900000
    t0 = 0x43900000u; esp -= 4; M32(esp) = t0;
L_0051bcbb:  // push 0x43780000
    t0 = 0x43780000u; esp -= 4; M32(esp) = t0;
L_0051bcc0:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bcc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bcc5:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0051bcc7:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0051bcca:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051bccd:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_0051bccf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bcd1:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0051bcd4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051bcd6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bcdb:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0051bcdd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bcdf:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0051bce5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051bce7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bce8:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_0051bcea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051bceb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051bcec:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051bced:  // push 0x3d23d70a
    t0 = 0x3d23d70au; esp -= 4; M32(esp) = t0;
L_0051bcf2:  // push 0x43910000
    t0 = 0x43910000u; esp -= 4; M32(esp) = t0;
L_0051bcf7:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051bcfc:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bd01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bd01:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0051bd05:  // fcomp dword ptr [0x5d8cc0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cc0u)));
    lpop(x);
L_0051bd0b:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051bd0e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051bd0f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051bd11:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051bd14:  // je 0x51bd93
    if (f.zf) goto L_0051bd93;
L_0051bd16:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051bd1a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0051bd20:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051bd22:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051bd25:  // jne 0x51bd93
    if (!f.zf) goto L_0051bd93;
L_0051bd27:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051bd2b:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0051bd2d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bd2f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bd34:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bd36:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051bd38:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051bd3a:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0051bd3c:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0051bd42:  // fmul dword ptr [0x5d95b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d95b8u)));
L_0051bd48:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051bd4c:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0051bd50:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051bd52:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051bd55:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0051bd57:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0051bd5a:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051bd60:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0051bd62:  // not edx
    edx = (uint32_t)(~edx);
L_0051bd64:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0051bd6a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0051bd6e:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0051bd72:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0051bd74:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051bd75:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051bd76:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051bd77:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051bd78:  // push 0x3ca3d70a
    t0 = 0x3ca3d70au; esp -= 4; M32(esp) = t0;
L_0051bd7d:  // push 0x43910000
    t0 = 0x43910000u; esp -= 4; M32(esp) = t0;
L_0051bd82:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051bd87:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bd8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bd8c:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051bd8f:  // jmp 0x51bd93
    goto L_0051bd93;
L_0051bd91:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051bd93:  // mov eax, dword ptr [0x89bb68]
    eax = (uint32_t)(M32((uint32_t)(0x89bb68u)));
L_0051bd98:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0051bd99:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051bd9b:  // je 0x51be5e
    if (f.zf) goto L_0051be5e;
L_0051bda1:  // mov eax, dword ptr [0x89d880]
    eax = (uint32_t)(M32((uint32_t)(0x89d880u)));
L_0051bda6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bda8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051bdad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bdaf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bdb1:  // push 0x41200000
    t0 = 0x41200000u; esp -= 4; M32(esp) = t0;
L_0051bdb6:  // push 0x41200000
    t0 = 0x41200000u; esp -= 4; M32(esp) = t0;
L_0051bdbb:  // push 0xff000000
    t0 = 0xff000000u; esp -= 4; M32(esp) = t0;
L_0051bdc0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051bdc1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bdc3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bdc5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051bdc7:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051bdccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051bdcc:  // fld dword ptr [0x5dbb64]
    lpush(x, (long double)F32((uint32_t)(0x5dbb64u)));
L_0051bdd2:  // fsub dword ptr [0x89bb6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x89bb6cu)));
L_0051bdd8:  // mov al, byte ptr [0x897b28]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x897b28u))) & 0xffu);
L_0051bddd:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051bde0:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051bde2:  // mov esi, 0x897b28
    esi = (uint32_t)(0x897b28u);
L_0051bde7:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0051bdeb:  // je 0x51be5e
    if (f.zf) goto L_0051be5e;
L_0051bded:  // mov al, byte ptr [esi]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_0051bdef:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0051bdf1:  // cmp al, 0xa
    t0 = lsub<8>((eax & 0xffu), 0xau, f);
L_0051bdf3:  // jne 0x51bdf6
    if (!f.zf) goto L_0051bdf6;
L_0051bdf5:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0051bdf6:  // mov al, byte ptr [esi]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_0051bdf8:  // cmp al, 0xa
    t0 = lsub<8>((eax & 0xffu), 0xau, f);
L_0051bdfa:  // je 0x51be17
    if (f.zf) goto L_0051be17;
L_0051bdfc:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0051be00:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051be02:  // je 0x51be17
    if (f.zf) goto L_0051be17;
L_0051be04:  // movsx ax, al
    eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu))) & 0xffffu);
L_0051be08:  // mov word ptr [ecx], ax
    M16((uint32_t)(ecx)) = (uint16_t)((eax & 0xffffu));
L_0051be0b:  // mov al, byte ptr [esi + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_0051be0e:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0051be0f:  // add ecx, 2
    t0 = ladd<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0051be12:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0051be13:  // cmp al, 0xa
    t0 = lsub<8>((eax & 0xffu), 0xau, f);
L_0051be15:  // jne 0x51be00
    if (!f.zf) goto L_0051be00;
L_0051be17:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051be1c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051be1e:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0051be22:  // mov word ptr [esp + edx*2 + 0x1c], 0
    M16((uint32_t)(esp + edx * 2u + 0x1cu)) = (uint16_t)(0x0u);
L_0051be29:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0051be2d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051be2f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051be30:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051be32:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051be33:  // push 0x42800000
    t0 = 0x42800000u; esp -= 4; M32(esp) = t0;
L_0051be38:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051be3a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051be3f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051be44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051be44:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051be46:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051be4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051be4b:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_0051be4f:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0051be55:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0051be58:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0051be5c:  // jne 0x51bded
    if (!f.zf) goto L_0051bded;
L_0051be5e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051be5f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051be60:  // add esp, 0x200c
    t0 = ladd<32>(esp, 0x200cu, f);
    esp = (uint32_t)(t0);
L_0051be66:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051b840, 0051b840)
