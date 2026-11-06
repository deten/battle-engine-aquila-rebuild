// lifted from 0040c750 (vslot68, 564 bytes, 189 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0040c750(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0040c750;
L_0040c750:  // sub esp, 0x28
    t0 = lsub<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0040c753:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040c754:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040c755:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0040c757:  // call 0x406460
    t0 = 0x00406460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c75cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c75c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040c75e:  // call 0x402000
    t0 = 0x00402000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c763u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c763:  // mov al, byte ptr [esi + 0x2c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x2cu))) & 0xffu);
L_0040c766:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040c768:  // test al, 4
    t0 = llog<8>((eax & 0xffu) & 0x4u, f);
L_0040c76a:  // je 0x40c77e
    if (f.zf) goto L_0040c77e;
L_0040c76c:  // call 0x40dfb0
    t0 = 0x0040dfb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c771u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c771:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0040c773:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040c775:  // call dword ptr [eax + 0x38]
    t0 = M32((uint32_t)(eax + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c778u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c778:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040c779:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040c77a:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0040c77d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0040c77e:  // call 0x401fd0
    t0 = 0x00401fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c783u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c783:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040c785:  // jne 0x40c97e
    if (!f.zf) goto L_0040c97e;
L_0040c78b:  // mov ecx, dword ptr [esi + 0x260]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x260u)));
L_0040c791:  // fld dword ptr [0x5d8604]
    lpush(x, (long double)F32((uint32_t)(0x5d8604u)));
L_0040c797:  // cmp ecx, 2
    t0 = lsub<32>(ecx, 0x2u, f);
L_0040c79a:  // jne 0x40c7b5
    if (!f.zf) goto L_0040c7b5;
L_0040c79c:  // mov edx, dword ptr [esi + 0x578]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x578u)));
L_0040c7a2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c7a4:  // mov eax, dword ptr [edx + 0x44]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x44u)));
L_0040c7a7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040c7a9:  // jne 0x40c97e
    if (!f.zf) goto L_0040c97e;
L_0040c7af:  // fld dword ptr [0x5d8c40]
    lpush(x, (long double)F32((uint32_t)(0x5d8c40u)));
L_0040c7b5:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_0040c7bb:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_0040c7c1:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_0040c7c4:  // lea edi, [esi + 0x7c]
    edi = (uint32_t)((uint32_t)(esi + 0x7cu));
L_0040c7c7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c7c9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c7cb:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0040c7cd:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040c7cf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c7d1:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0040c7d3:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0040c7d5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c7d7:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_0040c7db:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_0040c7dd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c7df:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c7e1:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0040c7e3:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0040c7e5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0040c7e7:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_0040c7e9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040c7eb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040c7ee:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c7f0:  // jne 0x40c947
    if (!f.zf) goto L_0040c947;
L_0040c7f6:  // lea eax, [esi + 0x1c]
    eax = (uint32_t)((uint32_t)(esi + 0x1cu));
L_0040c7f9:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0040c7fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040c7fe:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0040c803:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c808u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c808:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040c80c:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0040c810:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c812:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c814:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0040c816:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040c818:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0040c81a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c81c:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0040c820:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0040c824:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0040c826:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0040c82a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c82c:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0040c82f:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0040c833:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0040c835:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0040c838:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0040c83c:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0040c83f:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0040c843:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0040c845:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c847:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0040c84d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040c84f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0040c852:  // jne 0x40c878
    if (!f.zf) goto L_0040c878;
L_0040c854:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0040c85a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c85c:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0040c860:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0040c864:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040c868:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c86a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0040c86e:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0040c872:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c874:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040c878:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c87a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0040c87e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c880:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040c884:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c886:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c888:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0040c88a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040c88c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c88e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040c892:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0040c896:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c898:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0040c89a:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0040c89c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c89e:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0040c8a4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040c8a6:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0040c8a9:  // jne 0x40c8cb
    if (!f.zf) goto L_0040c8cb;
L_0040c8ab:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0040c8b1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040c8b5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c8b7:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0040c8bb:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040c8bf:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c8c1:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040c8c5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0040c8c7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c8c9:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0040c8cb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c8cd:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0040c8d1:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040c8d5:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0040c8d9:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040c8db:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0040c8dd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c8df:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040c8e3:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0040c8e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040c8e9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040c8eb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040c8ec:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040c8ee:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040c8f0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c8f2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040c8f4:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0040c8f8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040c8fa:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040c8fe:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0040c900:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0040c904:  // fmul dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc0u)));
L_0040c90a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040c90d:  // call dword ptr [edx + 0xa0]
    t0 = M32((uint32_t)(edx + 0xa0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c913u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c913:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0040c919:  // fsub dword ptr [esp + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x8u)));
L_0040c91d:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0040c91f:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0040c923:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040c924:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040c926:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c928:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_0040c92a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040c92e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040c930:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_0040c933:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0040c937:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_0040c93a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0040c93e:  // call dword ptr [eax + 0x70]
    t0 = M32((uint32_t)(eax + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c941u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c941:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040c942:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040c943:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0040c946:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0040c947:  // cmp ecx, 3
    t0 = lsub<32>(ecx, 0x3u, f);
L_0040c94a:  // jne 0x40c97e
    if (!f.zf) goto L_0040c97e;
L_0040c94c:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_0040c94e:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_0040c954:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040c956:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0040c95a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040c95b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040c95d:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0040c961:  // fld dword ptr [edi + 4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x4u)));
L_0040c964:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_0040c96a:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040c96e:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_0040c971:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_0040c977:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0040c97b:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040c97eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040c97e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040c97f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040c980:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0040c983:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0040c750, 0040c750)
