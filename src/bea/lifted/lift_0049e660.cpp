// lifted from 0049e660 (vslot4, 1131 bytes, 338 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0049e660(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0049e660;
L_0049e660:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0049e666:  // sub esp, 0x124
    t0 = lsub<32>(esp, 0x124u, f);
    esp = (uint32_t)(t0);
L_0049e66c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049e66d:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0049e66f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049e670:  // mov ebp, dword ptr [esp + 0x130]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x130u)));
L_0049e677:  // fcomp dword ptr [ebx + 0x28]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x28u)));
    lpop(x);
L_0049e67a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049e67b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049e67c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049e67e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0049e681:  // jne 0x49e7a5
    if (!f.zf) goto L_0049e7a5;
L_0049e687:  // mov dword ptr [esp + 0x20], 0x3f800000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3f800000u);
L_0049e68f:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049e693:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_0049e69b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0049e69f:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_0049e6a7:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0049e6ab:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0049e6af:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0049e6b3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049e6b5:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_0049e6b9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0049e6be:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049e6c0:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0049e6c4:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0049e6cc:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_0049e6d4:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_0049e6dc:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_0049e6e0:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_0049e6e4:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e6e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e6e9:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049e6eb:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0049e6f0:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_0049e6f4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049e6f6:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049e6f9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049e6fb:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_0049e6ff:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049e702:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_0049e706:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0049e70a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049e70d:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_0049e711:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e716u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e716:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049e718:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_0049e71c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049e71f:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_0049e723:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049e726:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0049e72a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0049e72c:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049e72f:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0049e735:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e736:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_0049e73a:  // call 0x49dcd0
    t0 = 0x0049dcd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e73fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e73f:  // mov ecx, dword ptr [ebp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0049e745:  // mov edx, dword ptr [ecx + 0x160]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x160u)));
L_0049e74b:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0049e750:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_0049e752:  // call 0x44a0c0
    t0 = 0x0044a0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e757u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e757:  // fsub dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049e75a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049e75b:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049e75f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049e764:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049e767:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049e769:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049e76a:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0049e76d:  // lea esi, [esp + 0x70]
    esi = (uint32_t)((uint32_t)(esp + 0x70u));
L_0049e771:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0049e773:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0049e776:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049e778:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0049e77c:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0049e77e:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0049e780:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0049e784:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0049e787:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0049e78b:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0049e78e:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0049e790:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0049e793:  // call 0x49d280
    t0 = 0x0049d280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e798u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e798:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0049e79d:  // call 0x44a0c0
    t0 = 0x0044a0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e7a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e7a2:  // fstp dword ptr [ebx + 0x28]
    F32((uint32_t)(ebx + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0049e7a5:  // mov ecx, dword ptr [ebp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_0049e7ab:  // mov eax, dword ptr [ebx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x20u)));
L_0049e7ae:  // fld dword ptr [eax + ecx*4]
    lpush(x, (long double)F32((uint32_t)(eax + ecx * 4u)));
L_0049e7b1:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_0049e7b7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049e7b9:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0049e7bc:  // jne 0x49e9c5
    if (!f.zf) goto L_0049e9c5;
L_0049e7c2:  // mov edx, dword ptr [ebx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x1cu)));
L_0049e7c5:  // fld dword ptr [0x8a9e44]
    lpush(x, (long double)F32((uint32_t)(0x8a9e44u)));
L_0049e7cb:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049e7ce:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0049e7d0:  // mov ecx, dword ptr [ebx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_0049e7d3:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0049e7d5:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0049e7d7:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0049e7d9:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_0049e7db:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_0049e7de:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049e7e1:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0049e7e5:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0049e7e8:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049e7eb:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0049e7ef:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049e7f1:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0049e7f5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0049e7f9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049e7fb:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0049e7ff:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0049e803:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0049e807:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049e809:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0049e80d:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0049e811:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049e814:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0049e818:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0049e81c:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049e820:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049e823:  // mov eax, dword ptr [esp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_0049e82a:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0049e82c:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0049e830:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049e834:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0049e837:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049e83b:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0049e83e:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0049e841:  // mov eax, dword ptr [0x8a9e44]
    eax = (uint32_t)(M32((uint32_t)(0x8a9e44u)));
L_0049e846:  // mov esi, dword ptr [ebx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_0049e849:  // mov edi, dword ptr [ebx + 0x18]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_0049e84c:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0049e850:  // mov eax, dword ptr [ebp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_0049e856:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0049e85a:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049e85d:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049e860:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0049e862:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_0049e864:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0049e866:  // lea ecx, [edi + 0x20]
    ecx = (uint32_t)((uint32_t)(edi + 0x20u));
L_0049e869:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049e86a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049e86b:  // lea ecx, [esi + 0x20]
    ecx = (uint32_t)((uint32_t)(esi + 0x20u));
L_0049e86e:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e873u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e873:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e874:  // lea eax, [edi + 0x10]
    eax = (uint32_t)((uint32_t)(edi + 0x10u));
L_0049e877:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0049e87b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e87c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049e87d:  // lea ecx, [esi + 0x10]
    ecx = (uint32_t)((uint32_t)(esi + 0x10u));
L_0049e880:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e885u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e885:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e886:  // lea edx, [esp + 0x10c]
    edx = (uint32_t)((uint32_t)(esp + 0x10cu));
L_0049e88d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049e88e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049e88f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049e891:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e896u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e896:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e897:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0049e89b:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e8a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e8a0:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0049e8a4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049e8a5:  // lea eax, [esp + 0x118]
    eax = (uint32_t)((uint32_t)(esp + 0x118u));
L_0049e8ac:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_0049e8b0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e8b1:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e8b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e8b6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e8b7:  // lea ecx, [esp + 0xe8]
    ecx = (uint32_t)((uint32_t)(esp + 0xe8u));
L_0049e8be:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049e8bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049e8c0:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0049e8c4:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e8c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e8c9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e8ca:  // lea edx, [esp + 0xdc]
    edx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_0049e8d1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049e8d2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049e8d3:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0049e8d7:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e8dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e8dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e8dd:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_0049e8e4:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e8e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e8e9:  // mov ebp, dword ptr [ebp + 0x88]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_0049e8ef:  // mov edx, dword ptr [ebx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_0049e8f2:  // lea eax, [esp + 0x94]
    eax = (uint32_t)((uint32_t)(esp + 0x94u));
L_0049e8f9:  // lea ecx, [esp + 0x124]
    ecx = (uint32_t)((uint32_t)(esp + 0x124u));
L_0049e900:  // lea esi, [ebp + ebp*2]
    esi = (uint32_t)((uint32_t)(ebp + ebp * 2u));
L_0049e904:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e905:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0049e908:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0049e90a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049e90b:  // lea ecx, [esi + 0x20]
    ecx = (uint32_t)((uint32_t)(esi + 0x20u));
L_0049e90e:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e913u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e913:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e914:  // lea edx, [esp + 0x88]
    edx = (uint32_t)((uint32_t)(esp + 0x88u));
L_0049e91b:  // lea eax, [esp + 0xf8]
    eax = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0049e922:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049e923:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e924:  // lea ecx, [esi + 0x10]
    ecx = (uint32_t)((uint32_t)(esi + 0x10u));
L_0049e927:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e92cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e92c:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_0049e930:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e931:  // lea edx, [esp + 0x6c]
    edx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_0049e935:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049e936:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049e937:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049e939:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e93eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e93e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e93f:  // lea ecx, [esp + 0xb0]
    ecx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0049e946:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e94bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e94b:  // mov ebp, dword ptr [esp + 0x140]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_0049e952:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049e957:  // lea esi, [esp + 0xa4]
    esi = (uint32_t)((uint32_t)(esp + 0xa4u));
L_0049e95e:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0049e960:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049e962:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0049e964:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e969u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e969:  // lea esi, [ebp + 0x10]
    esi = (uint32_t)((uint32_t)(ebp + 0x10u));
L_0049e96c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049e96e:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e973u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e973:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_0049e977:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049e978:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049e979:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0049e97b:  // lea edi, [ebp + 0x20]
    edi = (uint32_t)((uint32_t)(ebp + 0x20u));
L_0049e97e:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e983u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e983:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0049e985:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0049e987:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0049e989:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049e98c:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0049e98f:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049e992:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0049e995:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049e998:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0049e99b:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e9a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e9a0:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0049e9a4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049e9a5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049e9a6:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0049e9a8:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049e9adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049e9ad:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0049e9af:  // mov dword ptr [esi], edx
    M32((uint32_t)(esi)) = (uint32_t)(edx);
L_0049e9b1:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049e9b4:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_0049e9b7:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049e9ba:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_0049e9bd:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049e9c0:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_0049e9c3:  // jmp 0x49ea0c
    goto L_0049ea0c;
L_0049e9c5:  // mov edx, dword ptr [ebx + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_0049e9c8:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049e9cb:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0049e9cd:  // mov edx, dword ptr [esp + 0x13c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_0049e9d4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0049e9d6:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0049e9d8:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0049e9db:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0049e9de:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0049e9e1:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0049e9e4:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0049e9e7:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0049e9ea:  // mov ebp, dword ptr [ebp + 0x88]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_0049e9f0:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_0049e9f3:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049e9f8:  // lea esi, [ebp + ebp*2]
    esi = (uint32_t)((uint32_t)(ebp + ebp * 2u));
L_0049e9fc:  // mov ebp, dword ptr [esp + 0x140]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_0049ea03:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0049ea06:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0049ea08:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0049ea0a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049ea0c:  // mov al, byte ptr [esp + 0x144]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x144u))) & 0xffu);
L_0049ea13:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049ea15:  // je 0x49eabe
    if (f.zf) goto L_0049eabe;
L_0049ea1b:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0049ea1e:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_0049ea22:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ea23:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049ea25:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ea27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ea27:  // mov esi, dword ptr [esp + 0x13c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_0049ea2e:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0049ea32:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049ea33:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049ea34:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_0049ea36:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_0049ea38:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_0049ea3a:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_0049ea3d:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049ea40:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0049ea43:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0049ea46:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049ea49:  // lea eax, [esp + 0xac]
    eax = (uint32_t)((uint32_t)(esp + 0xacu));
L_0049ea50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ea51:  // lea eax, [esp + 0x80]
    eax = (uint32_t)((uint32_t)(esp + 0x80u));
L_0049ea58:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ea59:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0049ea5c:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0049ea5f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049ea61:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ea64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ea64:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049ea66:  // call 0x494350
    t0 = 0x00494350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ea6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ea6b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049ea6d:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ea72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ea72:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049ea74:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049ea75:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_0049ea77:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049ea7a:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_0049ea7d:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049ea80:  // mov dword ptr [esi + 8], ecx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ecx);
L_0049ea83:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_0049ea87:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049ea8a:  // lea eax, [esp + 0xa8]
    eax = (uint32_t)((uint32_t)(esp + 0xa8u));
L_0049ea91:  // mov dword ptr [esi + 0xc], edx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(edx);
L_0049ea94:  // mov ebx, dword ptr [ebx + 8]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0049ea97:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ea98:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0049ea9c:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0049ea9e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ea9f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049eaa0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0049eaa2:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049eaa5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049eaa5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049eaa7:  // call 0x494350
    t0 = 0x00494350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049eaacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049eaac:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049eaae:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049eab3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049eab3:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049eab8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049eaba:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0049eabc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049eabe:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0049eabf:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0049eac0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049eac1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049eac2:  // add esp, 0x124
    t0 = ladd<32>(esp, 0x124u, f);
    esp = (uint32_t)(t0);
L_0049eac8:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0049e660, 0049e660)
