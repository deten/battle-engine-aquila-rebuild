// lifted from 0047b6d0 (vslot9, 981 bytes, 297 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047b6d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047b6d0;
L_0047b6d0:  // sub esp, 0x38
    t0 = lsub<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_0047b6d3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047b6d4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047b6d5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047b6d6:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047b6d8:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0047b6db:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b6dd:  // je 0x47ba9c
    if (f.zf) goto L_0047ba9c;
L_0047b6e3:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b6e6:  // test byte ptr [eax + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(eax + 0x2cu)) & 0x4u, f);
L_0047b6ea:  // jne 0x47ba9c
    if (!f.zf) goto L_0047ba9c;
L_0047b6f0:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047b6f3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b6f5:  // je 0x47b700
    if (f.zf) goto L_0047b700;
L_0047b6f7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047b6f9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047b6fb:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b6feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b6fe:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047b700:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b703:  // call 0x4fda10
    t0 = 0x004fda10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b708u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b708:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b70a:  // je 0x47b7bb
    if (f.zf) goto L_0047b7bb;
L_0047b710:  // mov eax, dword ptr [0x8a9d3c]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d3cu)));
L_0047b715:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b717:  // je 0x47b7c2
    if (f.zf) goto L_0047b7c2;
L_0047b71d:  // mov eax, dword ptr [eax + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x1cu)));
L_0047b720:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b722:  // je 0x47b7c2
    if (f.zf) goto L_0047b7c2;
L_0047b728:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b72b:  // lea edx, [eax + 0x1c]
    edx = (uint32_t)((uint32_t)(eax + 0x1cu));
L_0047b72e:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_0047b730:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_0047b733:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_0047b736:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_0047b739:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_0047b73c:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_0047b73f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047b741:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047b743:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047b745:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047b747:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047b749:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0047b74b:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0047b74d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047b74f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0047b751:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_0047b753:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047b755:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047b757:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_0047b75b:  // fcomp dword ptr [0x5db020]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db020u)));
    lpop(x);
L_0047b761:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047b763:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047b766:  // jne 0x47b78f
    if (!f.zf) goto L_0047b78f;
L_0047b768:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_0047b76a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047b76c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047b76f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b771:  // mov ebx, esp
    ebx = (uint32_t)(esp);
L_0047b773:  // mov dword ptr [ebx], ebp
    M32((uint32_t)(ebx)) = (uint32_t)(ebp);
L_0047b775:  // mov ebp, dword ptr [edx + 4]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0047b778:  // mov dword ptr [ebx + 4], ebp
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(ebp);
L_0047b77b:  // mov ebp, dword ptr [edx + 8]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0047b77e:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0047b781:  // mov dword ptr [ebx + 8], ebp
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ebp);
L_0047b784:  // mov dword ptr [ebx + 0xc], edx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(edx);
L_0047b787:  // call dword ptr [eax + 0xf4]
    t0 = M32((uint32_t)(eax + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b78du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b78d:  // jmp 0x47b7c2
    goto L_0047b7c2;
L_0047b78f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0047b791:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047b793:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b796u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b796:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0047b79a:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_0047b7a0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047b7a2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047b7a5:  // je 0x47b7c2
    if (f.zf) goto L_0047b7c2;
L_0047b7a7:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047b7aa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b7ac:  // jne 0x47b7c2
    if (!f.zf) goto L_0047b7c2;
L_0047b7ae:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b7b1:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b7b3:  // call dword ptr [edx + 0x100]
    t0 = M32((uint32_t)(edx + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b7b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b7b9:  // jmp 0x47b7c2
    goto L_0047b7c2;
L_0047b7bb:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0047b7bd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047b7bf:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b7c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b7c2:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047b7c5:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047b7c7:  // je 0x47ba1e
    if (f.zf) goto L_0047ba1e;
L_0047b7cd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b7cf:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_0047b7d3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047b7d4:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b7dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b7da:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b7dd:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047b7e0:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047b7e4:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_0047b7e7:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_0047b7ea:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b7ec:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0047b7f0:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0047b7f4:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0047b7f7:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0047b7fb:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0047b7ff:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0047b802:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0047b806:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b809u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b809:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047b80c:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0047b810:  // test dword ptr [eax + 0x34], 0x80000
    t0 = llog<32>(M32((uint32_t)(eax + 0x34u)) & 0x80000u, f);
L_0047b817:  // je 0x47b82e
    if (f.zf) goto L_0047b82e;
L_0047b819:  // mov eax, dword ptr [eax + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x26cu)));
L_0047b81f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b821:  // je 0x47b82e
    if (f.zf) goto L_0047b82e;
L_0047b823:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0047b825:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047b827:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b82au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b82a:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0047b82e:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0047b832:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0047b836:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0047b83a:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0047b83e:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047b840:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0047b842:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b845:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047b847:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047b849:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047b84b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b84d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047b84f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0047b851:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0047b853:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047b855:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047b859:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b85cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b85c:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_0047b860:  // mov eax, dword ptr [esi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_0047b863:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b865:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_0047b869:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0047b86d:  // je 0x47b960
    if (f.zf) goto L_0047b960;
L_0047b873:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047b877:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047b87b:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047b87e:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0047b880:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0047b882:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047b886:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0047b889:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0047b88d:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0047b890:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0047b893:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b896:  // call 0x4fcec0
    t0 = 0x004fcec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b89bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b89b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0047b89f:  // fcomp dword ptr [esi + 0x64]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x64u)));
    lpop(x);
L_0047b8a2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047b8a4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047b8a7:  // je 0x47ba47
    if (f.zf) goto L_0047ba47;
L_0047b8ad:  // mov dword ptr [esi + 0x60], 0
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x0u);
L_0047b8b4:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0047b8ba:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b8bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b8bf:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0047b8c4:  // jns 0x47b8cd
    if (!f.sf) goto L_0047b8cd;
L_0047b8c6:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b8c7:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0047b8cc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b8cd:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0047b8d1:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b8d4:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0047b8d8:  // fmul dword ptr [0x5db1ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1ecu)));
L_0047b8de:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0047b8e4:  // fstp dword ptr [esi + 0x64]
    F32((uint32_t)(esi + 0x64u)) = lf32(ST(0));
    lpop(x);
L_0047b8e7:  // call 0x47bff0
    t0 = 0x0047bff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b8ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b8ec:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b8ef:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047b8f1:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047b8f4:  // fld dword ptr [ecx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x40u)));
L_0047b8f7:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_0047b8fd:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0047b8ff:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b901:  // fld dword ptr [ecx + 0x50]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x50u)));
L_0047b904:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_0047b90a:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0047b90e:  // fld dword ptr [ecx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x60u)));
L_0047b911:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_0047b917:  // fchs 
    ST(0) = -ST(0);
L_0047b919:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0047b91d:  // fadd dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_0047b920:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0047b924:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0047b928:  // fadd dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x20u)));
L_0047b92b:  // mov ebx, dword ptr [esp + 0x38]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0047b92f:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0047b931:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0047b935:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0047b939:  // fadd dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x24u)));
L_0047b93c:  // mov ebx, dword ptr [esp + 0x3c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0047b940:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_0047b943:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0047b947:  // mov ebx, dword ptr [esp + 0x40]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047b94b:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_0047b94e:  // mov ebx, dword ptr [esp + 0x44]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0047b952:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_0047b955:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b95bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b95b:  // jmp 0x47ba47
    goto L_0047ba47;
L_0047b960:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b963:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047b965:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047b968:  // fld dword ptr [ecx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x40u)));
L_0047b96b:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_0047b971:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0047b973:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b975:  // fld dword ptr [ecx + 0x50]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x50u)));
L_0047b978:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_0047b97e:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0047b982:  // fld dword ptr [ecx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x60u)));
L_0047b985:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_0047b98b:  // fchs 
    ST(0) = -ST(0);
L_0047b98d:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0047b991:  // fadd dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_0047b994:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0047b998:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0047b99c:  // fadd dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x20u)));
L_0047b99f:  // mov ebx, dword ptr [esp + 0x38]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0047b9a3:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0047b9a5:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0047b9a9:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0047b9ad:  // fadd dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x24u)));
L_0047b9b0:  // mov ebx, dword ptr [esp + 0x3c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0047b9b4:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_0047b9b7:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0047b9bb:  // mov ebx, dword ptr [esp + 0x40]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047b9bf:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_0047b9c2:  // mov ebx, dword ptr [esp + 0x44]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0047b9c6:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_0047b9c9:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b9cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b9cf:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0047b9d3:  // fcomp dword ptr [esi + 0x64]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x64u)));
    lpop(x);
L_0047b9d6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047b9d8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047b9db:  // jne 0x47ba47
    if (!f.zf) goto L_0047ba47;
L_0047b9dd:  // mov dword ptr [esi + 0x60], 1
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x1u);
L_0047b9e4:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0047b9ea:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b9efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b9ef:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0047b9f4:  // jns 0x47b9fd
    if (!f.sf) goto L_0047b9fd;
L_0047b9f6:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b9f7:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0047b9fc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b9fd:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0047ba01:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047ba04:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0047ba08:  // fmul dword ptr [0x5db1e0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e0u)));
L_0047ba0e:  // fadd dword ptr [0x5d85d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d4u)));
L_0047ba14:  // fstp dword ptr [esi + 0x64]
    F32((uint32_t)(esi + 0x64u)) = lf32(ST(0));
    lpop(x);
L_0047ba17:  // call 0x47bfa0
    t0 = 0x0047bfa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ba1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ba1c:  // jmp 0x47ba47
    goto L_0047ba47;
L_0047ba1e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047ba20:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047ba22:  // mov dword ptr [esi + 0x60], 0
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x0u);
L_0047ba29:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ba2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ba2c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047ba2e:  // jne 0x47ba9c
    if (!f.zf) goto L_0047ba9c;
L_0047ba30:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047ba33:  // call 0x4fda10
    t0 = 0x004fda10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ba38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ba38:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047ba3a:  // jne 0x47ba47
    if (!f.zf) goto L_0047ba47;
L_0047ba3c:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047ba3f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047ba41:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ba47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ba47:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0047ba4d:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ba52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ba52:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0047ba57:  // jns 0x47ba60
    if (!f.sf) goto L_0047ba60;
L_0047ba59:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047ba5a:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0047ba5f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047ba60:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0047ba64:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0047ba68:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0047ba6c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047ba6d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047ba6f:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0047ba73:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047ba75:  // fmul dword ptr [0x5d85f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f0u)));
L_0047ba7b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047ba7c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047ba7d:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_0047ba82:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0047ba87:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_0047ba8d:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_0047ba93:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0047ba97:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ba9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ba9c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047ba9d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047ba9e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047ba9f:  // add esp, 0x38
    t0 = ladd<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_0047baa2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0047b6d0, 0047b6d0)
