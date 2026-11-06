// lifted from 0053d760 (FUN_0053d760, 1981 bytes, 550 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053d760(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053d760;
L_0053d760:  // sub esp, 0x218
    t0 = lsub<32>(esp, 0x218u, f);
    esp = (uint32_t)(t0);
L_0053d766:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053d767:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053d768:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053d769:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053d76a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053d76c:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0053d76e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d773:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d778u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d778:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053d77a:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053d77c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d781:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d786u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d786:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053d788:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053d78a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d78f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d794u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d794:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d796:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d798:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053d79d:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d7a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d7a2:  // mov esi, dword ptr [esp + 0x230]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x230u)));
L_0053d7a9:  // mov dword ptr [esp + 0x48], 0
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x0u);
L_0053d7b1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d7b2:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0053d7ba:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_0053d7bc:  // fld dword ptr [esp + 0x23c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x23cu)));
L_0053d7c3:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d7c5:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0053d7cd:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0053d7d1:  // fld dword ptr [esp + 0x24c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24cu)));
L_0053d7d8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d7da:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0053d7de:  // fld dword ptr [esp + 0x25c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x25cu)));
L_0053d7e5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d7e7:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0053d7eb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053d7ed:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_0053d7f0:  // fld dword ptr [esp + 0x260]
    lpush(x, (long double)F32((uint32_t)(esp + 0x260u)));
L_0053d7f7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d7f9:  // fadd dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x4cu)));
L_0053d7fd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d800:  // fld dword ptr [esp + 0x250]
    lpush(x, (long double)F32((uint32_t)(esp + 0x250u)));
L_0053d807:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d809:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d80a:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0053d80e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d811:  // fld dword ptr [esp + 0x244]
    lpush(x, (long double)F32((uint32_t)(esp + 0x244u)));
L_0053d818:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d81a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d81b:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0053d81f:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_0053d823:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d826:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053d828:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d82du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d82d:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0053d830:  // fld dword ptr [esp + 0x260]
    lpush(x, (long double)F32((uint32_t)(esp + 0x260u)));
L_0053d837:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d839:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d83a:  // fadd dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x4cu)));
L_0053d83e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d841:  // fld dword ptr [esp + 0x254]
    lpush(x, (long double)F32((uint32_t)(esp + 0x254u)));
L_0053d848:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d84a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d84b:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0053d84f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d852:  // fld dword ptr [esp + 0x248]
    lpush(x, (long double)F32((uint32_t)(esp + 0x248u)));
L_0053d859:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053d85b:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0053d85f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d860:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0053d864:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d867:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053d869:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d86eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d86e:  // mov eax, dword ptr [esp + 0x268]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x268u)));
L_0053d875:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d877:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053d878:  // call 0x501280
    t0 = 0x00501280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d87du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d87d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0053d880:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0053d882:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053d884:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d886:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053d888:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_0053d88a:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0053d88f:  // push 0x152
    t0 = 0x152u; esp -= 4; M32(esp) = t0;
L_0053d894:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d899u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d899:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d89b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053d89d:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0053d8a2:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0053d8a4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053d8a6:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d8abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d8ab:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0053d8ad:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_0053d8b1:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_0053d8b8:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0053d8ba:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0053d8be:  // cmp edi, 5
    t0 = lsub<32>(edi, 0x5u, f);
L_0053d8c1:  // ja 0x53ddb9
    if ((!f.cf && !f.zf)) goto L_0053ddb9;
L_0053d8c7:  // jmp dword ptr [edi*4 + 0x53df20]
    t0 = M32((uint32_t)(edi * 4u + 0x53df20u));
    switch (t0) {
    case 0x0053d8ceu: goto L_0053d8ce;
    case 0x0053d9c9u: goto L_0053d9c9;
    case 0x0053dafbu: goto L_0053dafb;
    case 0x0053dbf6u: goto L_0053dbf6;
    case 0x0053dcf1u: goto L_0053dcf1;
    case 0x0053dd51u: goto L_0053dd51;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0053d8ce:  // test bl, 2
    t0 = llog<8>((ebx & 0xffu) & 0x2u, f);
L_0053d8d1:  // je 0x53d8d9
    if (f.zf) goto L_0053d8d9;
L_0053d8d3:  // lea esi, [esp + 0x38]
    esi = (uint32_t)((uint32_t)(esp + 0x38u));
L_0053d8d7:  // jmp 0x53d90a
    goto L_0053d90a;
L_0053d8d9:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053d8dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d8de:  // fchs 
    ST(0) = -ST(0);
L_0053d8e0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d8e3:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053d8e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d8e8:  // fchs 
    ST(0) = -ST(0);
L_0053d8ea:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d8ed:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053d8f1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d8f2:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_0053d8f9:  // fchs 
    ST(0) = -ST(0);
L_0053d8fb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d8fe:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d903u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d903:  // lea esi, [esp + 0x128]
    esi = (uint32_t)((uint32_t)(esp + 0x128u));
L_0053d90a:  // test bl, 1
    t0 = llog<8>((ebx & 0xffu) & 0x1u, f);
L_0053d90d:  // je 0x53d915
    if (f.zf) goto L_0053d915;
L_0053d90f:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_0053d913:  // jmp 0x53d946
    goto L_0053d946;
L_0053d915:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053d919:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d91a:  // fchs 
    ST(0) = -ST(0);
L_0053d91c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d91f:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053d923:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d924:  // fchs 
    ST(0) = -ST(0);
L_0053d926:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d929:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053d92d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d92e:  // lea ecx, [esp + 0x1a4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1a4u));
L_0053d935:  // fchs 
    ST(0) = -ST(0);
L_0053d937:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d93a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d93fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d93f:  // lea eax, [esp + 0x198]
    eax = (uint32_t)((uint32_t)(esp + 0x198u));
L_0053d946:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053d94a:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0053d94d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d94e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d951:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053d955:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053d958:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d959:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d95c:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053d960:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0053d962:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d963:  // lea ecx, [esp + 0x104]
    ecx = (uint32_t)((uint32_t)(esp + 0x104u));
L_0053d96a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d96d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d972u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d972:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_0053d979:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_0053d97c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d97d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d980:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_0053d987:  // fadd dword ptr [esi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4u)));
L_0053d98a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d98b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d98e:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_0053d995:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_0053d997:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d998:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_0053d99f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d9a2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d9a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d9a7:  // mov edx, dword ptr [esp + 0x98]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_0053d9ae:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_0053d9b5:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0053d9bc:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_0053d9c0:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_0053d9c4:  // jmp 0x53ddbd
    goto L_0053ddbd;
L_0053d9c9:  // test bl, 2
    t0 = llog<8>((ebx & 0xffu) & 0x2u, f);
L_0053d9cc:  // je 0x53d9d4
    if (f.zf) goto L_0053d9d4;
L_0053d9ce:  // lea edi, [esp + 0x38]
    edi = (uint32_t)((uint32_t)(esp + 0x38u));
L_0053d9d2:  // jmp 0x53da05
    goto L_0053da05;
L_0053d9d4:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053d9d8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d9d9:  // fchs 
    ST(0) = -ST(0);
L_0053d9db:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d9de:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053d9e2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d9e3:  // fchs 
    ST(0) = -ST(0);
L_0053d9e5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d9e8:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053d9ec:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053d9ed:  // lea ecx, [esp + 0x154]
    ecx = (uint32_t)((uint32_t)(esp + 0x154u));
L_0053d9f4:  // fchs 
    ST(0) = -ST(0);
L_0053d9f6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053d9f9:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d9feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d9fe:  // lea edi, [esp + 0x148]
    edi = (uint32_t)((uint32_t)(esp + 0x148u));
L_0053da05:  // test bl, 1
    t0 = llog<8>((ebx & 0xffu) & 0x1u, f);
L_0053da08:  // je 0x53da10
    if (f.zf) goto L_0053da10;
L_0053da0a:  // lea esi, [esp + 0x28]
    esi = (uint32_t)((uint32_t)(esp + 0x28u));
L_0053da0e:  // jmp 0x53da41
    goto L_0053da41;
L_0053da10:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053da14:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da15:  // fchs 
    ST(0) = -ST(0);
L_0053da17:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da1a:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053da1e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da1f:  // fchs 
    ST(0) = -ST(0);
L_0053da21:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da24:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053da28:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da29:  // lea ecx, [esp + 0x184]
    ecx = (uint32_t)((uint32_t)(esp + 0x184u));
L_0053da30:  // fchs 
    ST(0) = -ST(0);
L_0053da32:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da35:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053da3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053da3a:  // lea esi, [esp + 0x178]
    esi = (uint32_t)((uint32_t)(esp + 0x178u));
L_0053da41:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053da45:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da46:  // fchs 
    ST(0) = -ST(0);
L_0053da48:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da4b:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053da4f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da50:  // fchs 
    ST(0) = -ST(0);
L_0053da52:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da55:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053da59:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da5a:  // lea ecx, [esp + 0x124]
    ecx = (uint32_t)((uint32_t)(esp + 0x124u));
L_0053da61:  // fchs 
    ST(0) = -ST(0);
L_0053da63:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da66:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053da6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053da6b:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_0053da72:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_0053da75:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da76:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da79:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_0053da80:  // fadd dword ptr [esi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4u)));
L_0053da83:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da84:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da87:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_0053da8e:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_0053da90:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053da91:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0053da98:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053da9b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053daa0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053daa0:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_0053daa7:  // fadd dword ptr [edi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x8u)));
L_0053daaa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053daab:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053daae:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_0053dab5:  // fadd dword ptr [edi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x4u)));
L_0053dab8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dab9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dabc:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_0053dac3:  // fadd dword ptr [edi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi)));
L_0053dac5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dac6:  // lea ecx, [esp + 0xd4]
    ecx = (uint32_t)((uint32_t)(esp + 0xd4u));
L_0053dacd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dad0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dad5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dad5:  // mov ecx, dword ptr [esp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_0053dadc:  // mov edx, dword ptr [esp + 0xcc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_0053dae3:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_0053daea:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053daee:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_0053daf2:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_0053daf6:  // jmp 0x53ddbd
    goto L_0053ddbd;
L_0053dafb:  // test bl, 2
    t0 = llog<8>((ebx & 0xffu) & 0x2u, f);
L_0053dafe:  // je 0x53db06
    if (f.zf) goto L_0053db06;
L_0053db00:  // lea esi, [esp + 0x38]
    esi = (uint32_t)((uint32_t)(esp + 0x38u));
L_0053db04:  // jmp 0x53db37
    goto L_0053db37;
L_0053db06:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053db0a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db0b:  // fchs 
    ST(0) = -ST(0);
L_0053db0d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db10:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053db14:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db15:  // fchs 
    ST(0) = -ST(0);
L_0053db17:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db1a:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053db1e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db1f:  // lea ecx, [esp + 0x194]
    ecx = (uint32_t)((uint32_t)(esp + 0x194u));
L_0053db26:  // fchs 
    ST(0) = -ST(0);
L_0053db28:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db2b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053db30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053db30:  // lea esi, [esp + 0x188]
    esi = (uint32_t)((uint32_t)(esp + 0x188u));
L_0053db37:  // test bl, 1
    t0 = llog<8>((ebx & 0xffu) & 0x1u, f);
L_0053db3a:  // je 0x53db42
    if (f.zf) goto L_0053db42;
L_0053db3c:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0053db40:  // jmp 0x53db73
    goto L_0053db73;
L_0053db42:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053db46:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db47:  // fchs 
    ST(0) = -ST(0);
L_0053db49:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db4c:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053db50:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db51:  // fchs 
    ST(0) = -ST(0);
L_0053db53:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db56:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053db5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db5b:  // lea ecx, [esp + 0x174]
    ecx = (uint32_t)((uint32_t)(esp + 0x174u));
L_0053db62:  // fchs 
    ST(0) = -ST(0);
L_0053db64:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db67:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053db6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053db6c:  // lea eax, [esp + 0x168]
    eax = (uint32_t)((uint32_t)(esp + 0x168u));
L_0053db73:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053db77:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0053db7a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db7b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db7e:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053db82:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053db85:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db86:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db89:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053db8d:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0053db8f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053db90:  // lea ecx, [esp + 0x114]
    ecx = (uint32_t)((uint32_t)(esp + 0x114u));
L_0053db97:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053db9a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053db9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053db9f:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_0053dba6:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_0053dba9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dbaa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dbad:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_0053dbb4:  // fadd dword ptr [esi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4u)));
L_0053dbb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dbb8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dbbb:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_0053dbc2:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_0053dbc4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dbc5:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0053dbcc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dbcf:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dbd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dbd4:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_0053dbdb:  // mov ecx, dword ptr [esp + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0053dbe2:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_0053dbe9:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_0053dbed:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_0053dbf1:  // jmp 0x53ddbd
    goto L_0053ddbd;
L_0053dbf6:  // test bl, 2
    t0 = llog<8>((ebx & 0xffu) & 0x2u, f);
L_0053dbf9:  // je 0x53dc01
    if (f.zf) goto L_0053dc01;
L_0053dbfb:  // lea esi, [esp + 0x38]
    esi = (uint32_t)((uint32_t)(esp + 0x38u));
L_0053dbff:  // jmp 0x53dc32
    goto L_0053dc32;
L_0053dc01:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053dc05:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc06:  // fchs 
    ST(0) = -ST(0);
L_0053dc08:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc0b:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053dc0f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc10:  // fchs 
    ST(0) = -ST(0);
L_0053dc12:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc15:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053dc19:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc1a:  // lea ecx, [esp + 0x144]
    ecx = (uint32_t)((uint32_t)(esp + 0x144u));
L_0053dc21:  // fchs 
    ST(0) = -ST(0);
L_0053dc23:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc26:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dc2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dc2b:  // lea esi, [esp + 0x138]
    esi = (uint32_t)((uint32_t)(esp + 0x138u));
L_0053dc32:  // test bl, 1
    t0 = llog<8>((ebx & 0xffu) & 0x1u, f);
L_0053dc35:  // je 0x53dc3d
    if (f.zf) goto L_0053dc3d;
L_0053dc37:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0053dc3b:  // jmp 0x53dc6e
    goto L_0053dc6e;
L_0053dc3d:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053dc41:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc42:  // fchs 
    ST(0) = -ST(0);
L_0053dc44:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc47:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053dc4b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc4c:  // fchs 
    ST(0) = -ST(0);
L_0053dc4e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc51:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053dc55:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc56:  // lea ecx, [esp + 0x164]
    ecx = (uint32_t)((uint32_t)(esp + 0x164u));
L_0053dc5d:  // fchs 
    ST(0) = -ST(0);
L_0053dc5f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc62:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dc67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dc67:  // lea eax, [esp + 0x158]
    eax = (uint32_t)((uint32_t)(esp + 0x158u));
L_0053dc6e:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0053dc71:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_0053dc75:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc76:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc79:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0053dc7c:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_0053dc80:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc81:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc84:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0053dc86:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_0053dc8a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dc8b:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_0053dc92:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dc95:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dc9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dc9a:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0053dca1:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_0053dca4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dca5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dca8:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0053dcaf:  // fadd dword ptr [esi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4u)));
L_0053dcb2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dcb3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dcb6:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0053dcbd:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_0053dcbf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dcc0:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_0053dcc7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053dcca:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dccfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dccf:  // mov edx, dword ptr [esp + 0xd8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_0053dcd6:  // mov eax, dword ptr [esp + 0xdc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xdcu)));
L_0053dcdd:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_0053dce4:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_0053dce8:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_0053dcec:  // jmp 0x53ddbd
    goto L_0053ddbd;
L_0053dcf1:  // test bl, 2
    t0 = llog<8>((ebx & 0xffu) & 0x2u, f);
L_0053dcf4:  // je 0x53dcfc
    if (f.zf) goto L_0053dcfc;
L_0053dcf6:  // lea esi, [esp + 0x28]
    esi = (uint32_t)((uint32_t)(esp + 0x28u));
L_0053dcfa:  // jmp 0x53dd0f
    goto L_0053dd0f;
L_0053dcfc:  // lea ecx, [esp + 0x218]
    ecx = (uint32_t)((uint32_t)(esp + 0x218u));
L_0053dd03:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dd04:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0053dd08:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dd0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dd0d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0053dd0f:  // test bl, 1
    t0 = llog<8>((ebx & 0xffu) & 0x1u, f);
L_0053dd12:  // je 0x53dd1a
    if (f.zf) goto L_0053dd1a;
L_0053dd14:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0053dd18:  // jmp 0x53dd2b
    goto L_0053dd2b;
L_0053dd1a:  // lea edx, [esp + 0x1f8]
    edx = (uint32_t)((uint32_t)(esp + 0x1f8u));
L_0053dd21:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0053dd25:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053dd26:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dd2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dd2b:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0053dd2f:  // lea edx, [esp + 0x1a8]
    edx = (uint32_t)((uint32_t)(esp + 0x1a8u));
L_0053dd36:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dd37:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053dd38:  // lea ecx, [esp + 0x1d0]
    ecx = (uint32_t)((uint32_t)(esp + 0x1d0u));
L_0053dd3f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053dd40:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dd41:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053dd43:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dd48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dd48:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053dd4a:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dd4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dd4f:  // jmp 0x53ddaf
    goto L_0053ddaf;
L_0053dd51:  // test bl, 2
    t0 = llog<8>((ebx & 0xffu) & 0x2u, f);
L_0053dd54:  // je 0x53dd5c
    if (f.zf) goto L_0053dd5c;
L_0053dd56:  // lea esi, [esp + 0x28]
    esi = (uint32_t)((uint32_t)(esp + 0x28u));
L_0053dd5a:  // jmp 0x53dd6f
    goto L_0053dd6f;
L_0053dd5c:  // lea edx, [esp + 0x208]
    edx = (uint32_t)((uint32_t)(esp + 0x208u));
L_0053dd63:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0053dd67:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053dd68:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dd6du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dd6d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0053dd6f:  // test bl, 1
    t0 = llog<8>((ebx & 0xffu) & 0x1u, f);
L_0053dd72:  // je 0x53dd7a
    if (f.zf) goto L_0053dd7a;
L_0053dd74:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0053dd78:  // jmp 0x53dd8b
    goto L_0053dd8b;
L_0053dd7a:  // lea eax, [esp + 0x1e8]
    eax = (uint32_t)((uint32_t)(esp + 0x1e8u));
L_0053dd81:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0053dd85:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053dd86:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dd8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dd8b:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0053dd8f:  // lea edx, [esp + 0x1b8]
    edx = (uint32_t)((uint32_t)(esp + 0x1b8u));
L_0053dd96:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dd97:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053dd98:  // lea ecx, [esp + 0x1e0]
    ecx = (uint32_t)((uint32_t)(esp + 0x1e0u));
L_0053dd9f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053dda0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053dda1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053dda3:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dda8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dda8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053ddaa:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ddafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ddaf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053ddb0:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0053ddb4:  // call 0x4c7d90
    t0 = 0x004c7d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ddb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ddb9:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0053ddbd:  // mov eax, dword ptr [esp + 0x234]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x234u)));
L_0053ddc4:  // mov dword ptr [esp + 0x68], 0x3f800000
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x3f800000u);
L_0053ddcc:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0053ddd0:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0053ddd2:  // test bl, 1
    t0 = llog<8>((ebx & 0xffu) & 0x1u, f);
L_0053ddd5:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0053ddd9:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0053dddd:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053dde0:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0053dde4:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0053dde7:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_0053ddeb:  // jne 0x53ddf5
    if (!f.zf) goto L_0053ddf5;
L_0053dded:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_0053ddf5:  // test bl, 2
    t0 = llog<8>((ebx & 0xffu) & 0x2u, f);
L_0053ddf8:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_0053de00:  // jne 0x53de0a
    if (!f.zf) goto L_0053de0a;
L_0053de02:  // mov dword ptr [esp + 0x6c], 0x3f800000
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x3f800000u);
L_0053de0a:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_0053de0d:  // jne 0x53de19
    if (!f.zf) goto L_0053de19;
L_0053de0f:  // mov dword ptr [esp + 0x64], 0xffffffff
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0xffffffffu);
L_0053de17:  // jmp 0x53de24
    goto L_0053de24;
L_0053de19:  // mov edx, dword ptr [esp + 0x22c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x22cu)));
L_0053de20:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_0053de24:  // lea eax, [esp + 0x4c]
    eax = (uint32_t)((uint32_t)(esp + 0x4cu));
L_0053de28:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053de2a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053de2b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053de2d:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053de32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053de32:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0053de36:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0053de37:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_0053de39:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0053de3c:  // cmp ebx, 4
    t0 = lsub<32>(ebx, 0x4u, f);
L_0053de3f:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0053de43:  // jl 0x53d8be
    if ((f.sf != f.of)) goto L_0053d8be;
L_0053de49:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_0053de50:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_0053de57:  // mov edx, dword ptr [esp + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0053de5e:  // mov esi, dword ptr [esp + 0x8c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0053de65:  // mov word ptr [esp + 0x72], cx
    M16((uint32_t)(esp + 0x72u)) = (uint16_t)((ecx & 0xffffu));
L_0053de6a:  // mov word ptr [esp + 0x7a], cx
    M16((uint32_t)(esp + 0x7au)) = (uint16_t)((ecx & 0xffffu));
L_0053de6f:  // mov word ptr [esp + 0x80], cx
    M16((uint32_t)(esp + 0x80u)) = (uint16_t)((ecx & 0xffffu));
L_0053de77:  // mov word ptr [esp + 0x84], cx
    M16((uint32_t)(esp + 0x84u)) = (uint16_t)((ecx & 0xffffu));
L_0053de7f:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_0053de83:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_0053de85:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053de86:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053de88:  // mov word ptr [esp + 0x78], ax
    M16((uint32_t)(esp + 0x78u)) = (uint16_t)((eax & 0xffffu));
L_0053de8d:  // mov word ptr [esp + 0x7c], dx
    M16((uint32_t)(esp + 0x7cu)) = (uint16_t)((edx & 0xffffu));
L_0053de92:  // mov word ptr [esp + 0x7e], ax
    M16((uint32_t)(esp + 0x7eu)) = (uint16_t)((eax & 0xffffu));
L_0053de97:  // mov word ptr [esp + 0x80], si
    M16((uint32_t)(esp + 0x80u)) = (uint16_t)((esi & 0xffffu));
L_0053de9f:  // mov word ptr [esp + 0x84], ax
    M16((uint32_t)(esp + 0x84u)) = (uint16_t)((eax & 0xffffu));
L_0053dea7:  // mov word ptr [esp + 0x86], dx
    M16((uint32_t)(esp + 0x86u)) = (uint16_t)((edx & 0xffffu));
L_0053deaf:  // mov word ptr [esp + 0x8a], ax
    M16((uint32_t)(esp + 0x8au)) = (uint16_t)((eax & 0xffffu));
L_0053deb7:  // mov word ptr [esp + 0x8e], si
    M16((uint32_t)(esp + 0x8eu)) = (uint16_t)((esi & 0xffffu));
L_0053debf:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dec4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dec4:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0053dec5:  // cmp edi, 6
    t0 = lsub<32>(edi, 0x6u, f);
L_0053dec8:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_0053decc:  // jl 0x53d8b1
    if ((f.sf != f.of)) goto L_0053d8b1;
L_0053ded2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ded4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053ded6:  // call 0x500e70
    t0 = 0x00500e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dedbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dedb:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0053dedd:  // je 0x53dee6
    if (f.zf) goto L_0053dee6;
L_0053dedf:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053dee1:  // call 0x501310
    t0 = 0x00501310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053dee6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053dee6:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053dee8:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053deea:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053deef:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053def4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053def4:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053def6:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053def8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053defd:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053df02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053df02:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053df04:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053df06:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053df0b:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053df10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053df10:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053df11:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053df12:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053df13:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053df14:  // add esp, 0x218
    t0 = ladd<32>(esp, 0x218u, f);
    esp = (uint32_t)(t0);
L_0053df1a:  // ret 0x40
    c->target = M32(esp); esp += 68u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053d760, 0053d760)
