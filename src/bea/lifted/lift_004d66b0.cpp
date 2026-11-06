// lifted from 004d66b0 (FUN_004d66b0, 851 bytes, 267 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d66b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d66b0;
L_004d66b0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004d66b2:  // push 0x5d48c1
    t0 = 0x5d48c1u; esp -= 4; M32(esp) = t0;
L_004d66b7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004d66bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d66be:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004d66c5:  // sub esp, 0x48
    t0 = lsub<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004d66c8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d66c9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d66ca:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004d66cc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d66cd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d66ce:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004d66d2:  // lea esi, [ebp + 0x1c]
    esi = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d66d5:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004d66d9:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004d66dd:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d66e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d66e2:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d66e4:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004d66e6:  // je 0x4d66f8
    if (f.zf) goto L_004d66f8;
L_004d66e8:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004d66ec:  // mov dword ptr [eax + 0x14], edi
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(edi);
L_004d66ef:  // call 0x409780
    t0 = 0x00409780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d66f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d66f4:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004d66f6:  // jne 0x4d66e8
    if (!f.zf) goto L_004d66e8;
L_004d66f8:  // mov eax, dword ptr [ebp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x28u)));
L_004d66fb:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004d66ff:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004d6703:  // mov dword ptr [esp + 0x34], 0x8551a0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x8551a0u);
L_004d670b:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d6710u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d6710:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d6712:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004d6717:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d6719:  // je 0x4d692f
    if (f.zf) goto L_004d692f;
L_004d671f:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004d6723:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d6724:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d6726:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d672bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d672b:  // fld dword ptr [edi + 0x24]
    lpush(x, (long double)F32((uint32_t)(edi + 0x24u)));
L_004d672e:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004d6731:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d6732:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d6735:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_004d6738:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004d673b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d673c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d673f:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_004d6742:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004d6744:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d6745:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004d6749:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d674c:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d6751u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d6751:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d6755:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004d6759:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004d675d:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004d6761:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d6763:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d6767:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004d676b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d676d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d676f:  // fcomp dword ptr [ebp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x14u)));
    lpop(x);
L_004d6772:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d6774:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d6777:  // je 0x4d6918
    if (f.zf) goto L_004d6918;
L_004d677d:  // mov eax, dword ptr [edi + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xe8u)));
L_004d6783:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004d6786:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004d6788:  // jne 0x4d6918
    if (!f.zf) goto L_004d6918;
L_004d678e:  // mov edx, dword ptr [edi + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xf0u)));
L_004d6794:  // fld dword ptr [edx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edx + 0x1cu)));
L_004d6797:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d679d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d679f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d67a2:  // jne 0x4d6918
    if (!f.zf) goto L_004d6918;
L_004d67a8:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004d67ac:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_004d67b0:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d67b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d67b5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d67b7:  // je 0x4d67cb
    if (f.zf) goto L_004d67cb;
L_004d67b9:  // cmp dword ptr [eax + 0xc], edi
    t0 = lsub<32>(M32((uint32_t)(eax + 0xcu)), edi, f);
L_004d67bc:  // je 0x4d67cd
    if (f.zf) goto L_004d67cd;
L_004d67be:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004d67c2:  // call 0x409780
    t0 = 0x00409780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d67c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d67c7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d67c9:  // jne 0x4d67b9
    if (!f.zf) goto L_004d67b9;
L_004d67cb:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d67cd:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d67d1:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d67d5:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004d67d7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d67d9:  // fchs 
    ST(0) = -ST(0);
L_004d67db:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004d67df:  // je 0x4d6814
    if (f.zf) goto L_004d6814;
L_004d67e1:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d67e5:  // mov dword ptr [eax + 0x14], ebx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(ebx);
L_004d67e8:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004d67ea:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d67ee:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004d67f2:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d67f4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d67f6:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d67f8:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d67fa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d67fc:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d6800:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004d6804:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d6806:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d6808:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004d680a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d680c:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004d680f:  // jmp 0x4d6918
    goto L_004d6918;
L_004d6814:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_004d6816:  // push 0x631784
    t0 = 0x631784u; esp -= 4; M32(esp) = t0;
L_004d681b:  // push 0x49
    t0 = 0x49u; esp -= 4; M32(esp) = t0;
L_004d681d:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_004d681f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d6824:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d6829u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d6829:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004d682b:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_004d682f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d6831:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_004d6839:  // je 0x4d6892
    if (f.zf) goto L_004d6892;
L_004d683b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d683f:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004d6843:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004d6847:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004d684b:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004d6851:  // lea ecx, [esi + 0xc]
    ecx = (uint32_t)((uint32_t)(esi + 0xcu));
L_004d6854:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d6856:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d685a:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004d685e:  // movsx eax, word ptr [edi + 0x2e]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(edi + 0x2eu))));
L_004d6862:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d6864:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004d6868:  // mov dword ptr [ecx], 0
    M32((uint32_t)(ecx)) = (uint32_t)(0x0u);
L_004d686e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d6870:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d6874:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d6875:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004d6878:  // mov byte ptr [esp + 0x64], bl
    M8((uint32_t)(esp + 0x64u)) = (uint8_t)((ebx & 0xffu));
L_004d687c:  // mov dword ptr [esi], edx
    M32((uint32_t)(esi)) = (uint32_t)(edx);
L_004d687e:  // mov dword ptr [esi + 8], eax
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(eax);
L_004d6881:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d6886u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d6886:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d688a:  // mov dword ptr [esi + 0x14], ebx
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(ebx);
L_004d688d:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_004d6890:  // jmp 0x4d6894
    goto L_004d6894;
L_004d6892:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d6894:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d6898:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d6899:  // mov dword ptr [esp + 0x64], 0xffffffff
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0xffffffffu);
L_004d68a1:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d68a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d68a6:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004d68a9:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_004d68ad:  // je 0x4d6918
    if (f.zf) goto L_004d6918;
L_004d68af:  // fld dword ptr [ecx + 0x114]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x114u)));
L_004d68b5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d68b9:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004d68bf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d68c1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d68c4:  // je 0x4d68db
    if (f.zf) goto L_004d68db;
L_004d68c6:  // fcom dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
L_004d68cc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d68ce:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d68d1:  // jne 0x4d68db
    if (!f.zf) goto L_004d68db;
L_004d68d3:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004d68d9:  // jmp 0x4d68ff
    goto L_004d68ff;
L_004d68db:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d68df:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004d68e5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d68e7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d68ea:  // jne 0x4d68ff
    if (!f.zf) goto L_004d68ff;
L_004d68ec:  // fcom dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
L_004d68f2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d68f4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d68f7:  // je 0x4d68ff
    if (f.zf) goto L_004d68ff;
L_004d68f9:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004d68ff:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_004d6903:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004d6905:  // fcomp dword ptr [0x5d8de8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8de8u)));
    lpop(x);
L_004d690b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d690d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d6910:  // je 0x4d6918
    if (f.zf) goto L_004d6918;
L_004d6912:  // mov dword ptr [ecx + 0x5e4], ebx
    M32((uint32_t)(ecx + 0x5e4u)) = (uint32_t)(ebx);
L_004d6918:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004d691c:  // call 0x409780
    t0 = 0x00409780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d6921u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d6921:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d6925:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d6927:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d6929:  // jne 0x4d671f
    if (!f.zf) goto L_004d671f;
L_004d692f:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d6935:  // fadd dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004d6938:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d693a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d693c:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004d6940:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004d6942:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d6943:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d6944:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004d6948:  // push 0xfa0
    t0 = 0xfa0u; esp -= 4; M32(esp) = t0;
L_004d694d:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d6952:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d6957u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d6957:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004d695b:  // mov eax, dword ptr [ebp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x28u)));
L_004d695e:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004d6960:  // jle 0x4d6993
    if ((f.zf || f.sf != f.of)) goto L_004d6993;
L_004d6962:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004d6965:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d6967:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d6969:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004d696d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d696f:  // mov dword ptr [ebp + 0x2c], ebx
    M32((uint32_t)(ebp + 0x2cu)) = (uint32_t)(ebx);
L_004d6972:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004d6977:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d6978:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d6979:  // push 0xfa2
    t0 = 0xfa2u; esp -= 4; M32(esp) = t0;
L_004d697e:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d6983:  // mov dword ptr [ebp + 0x30], eax
    M32((uint32_t)(ebp + 0x30u)) = (uint32_t)(eax);
L_004d6986:  // mov dword ptr [esp + 0x34], 0xbf800000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xbf800000u);
L_004d698e:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d6993u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d6993:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004d6995:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d6997:  // je 0x4d699d
    if (f.zf) goto L_004d699d;
L_004d6999:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004d699b:  // jmp 0x4d699f
    goto L_004d699f;
L_004d699d:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d699f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d69a1:  // je 0x4d69f0
    if (f.zf) goto L_004d69f0;
L_004d69a3:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004d69a6:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d69a8:  // jne 0x4d69df
    if (!f.zf) goto L_004d69df;
L_004d69aa:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d69ae:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d69af:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d69b1:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d69b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d69b6:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d69b8:  // je 0x4d69d5
    if (f.zf) goto L_004d69d5;
L_004d69ba:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004d69bd:  // lea eax, [esi + 0xc]
    eax = (uint32_t)((uint32_t)(esi + 0xcu));
L_004d69c0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d69c2:  // je 0x4d69ca
    if (f.zf) goto L_004d69ca;
L_004d69c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d69c5:  // call 0x42d9b0
    t0 = 0x0042d9b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d69cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d69ca:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d69cb:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d69d0:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d69d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d69d5:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004d69d7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d69d9:  // je 0x4d69ea
    if (f.zf) goto L_004d69ea;
L_004d69db:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004d69dd:  // jmp 0x4d69ec
    goto L_004d69ec;
L_004d69df:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d69e2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d69e4:  // je 0x4d69ea
    if (f.zf) goto L_004d69ea;
L_004d69e6:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004d69e8:  // jmp 0x4d69ec
    goto L_004d69ec;
L_004d69ea:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d69ec:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d69ee:  // jne 0x4d69a3
    if (!f.zf) goto L_004d69a3;
L_004d69f0:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004d69f4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d69f5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d69f6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d69f7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d69f8:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004d69ff:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_004d6a02:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d66b0, 004d66b0)
