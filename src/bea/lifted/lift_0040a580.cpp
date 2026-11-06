// lifted from 0040a580 (FUN_0040a580, 769 bytes, 224 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0040a580(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0040a580;
L_0040a580:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040a581:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a582:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0040a584:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a585:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0040a587:  // cmp dword ptr [esi + 0x58c], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x58cu)), edi, f);
L_0040a58d:  // jne 0x40a59c
    if (!f.zf) goto L_0040a59c;
L_0040a58f:  // cmp dword ptr [esi + 0x260], 2
    t0 = lsub<32>(M32((uint32_t)(esi + 0x260u)), 0x2u, f);
L_0040a596:  // je 0x40a87d
    if (f.zf) goto L_0040a87d;
L_0040a59c:  // mov eax, dword ptr [esi + 0x260]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x260u)));
L_0040a5a2:  // mov dword ptr [esi + 0x588], edi
    M32((uint32_t)(esi + 0x588u)) = (uint32_t)(edi);
L_0040a5a8:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0040a5ab:  // je 0x40a87d
    if (f.zf) goto L_0040a87d;
L_0040a5b1:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0040a5b3:  // je 0x40a87d
    if (f.zf) goto L_0040a87d;
L_0040a5b9:  // mov ecx, dword ptr [esi + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x57cu)));
L_0040a5bf:  // call 0x411b70
    t0 = 0x00411b70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a5c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a5c4:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0040a5c7:  // je 0x40a87d
    if (f.zf) goto L_0040a87d;
L_0040a5cd:  // mov ecx, dword ptr [esi + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x578u)));
L_0040a5d3:  // call 0x4135d0
    t0 = 0x004135d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a5d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a5d8:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0040a5db:  // je 0x40a87d
    if (f.zf) goto L_0040a87d;
L_0040a5e1:  // mov ecx, dword ptr [esi + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x578u)));
L_0040a5e7:  // call 0x414010
    t0 = 0x00414010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a5ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a5ec:  // mov ecx, dword ptr [esi + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x57cu)));
L_0040a5f2:  // call 0x412000
    t0 = 0x00412000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a5f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a5f7:  // mov eax, dword ptr [esi + 0x260]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x260u)));
L_0040a5fd:  // mov dword ptr [esi + 0x2cc], 0x3f800000
    M32((uint32_t)(esi + 0x2ccu)) = (uint32_t)(0x3f800000u);
L_0040a607:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0040a60a:  // jne 0x40a6e3
    if (!f.zf) goto L_0040a6e3;
L_0040a610:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0040a616:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_0040a61c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a61d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a61e:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0040a622:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a623:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040a624:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a625:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0040a629:  // push 0x1771
    t0 = 0x1771u; esp -= 4; M32(esp) = t0;
L_0040a62e:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0040a633:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a638u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a638:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040a63a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040a63c:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a642u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a642:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040a644:  // je 0x40a653
    if (f.zf) goto L_0040a653;
L_0040a646:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040a64b:  // mov dword ptr [esi + 0x520], eax
    M32((uint32_t)(esi + 0x520u)) = (uint32_t)(eax);
L_0040a651:  // jmp 0x40a659
    goto L_0040a659;
L_0040a653:  // mov dword ptr [esi + 0x520], edi
    M32((uint32_t)(esi + 0x520u)) = (uint32_t)(edi);
L_0040a659:  // mov ecx, dword ptr [esi + 0x528]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x528u)));
L_0040a65f:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0040a661:  // je 0x40a668
    if (f.zf) goto L_0040a668;
L_0040a663:  // call 0x424920
    t0 = 0x00424920u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a668u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a668:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a669:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040a66b:  // push 0x6234bc
    t0 = 0x6234bcu; esp -= 4; M32(esp) = t0;
L_0040a670:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040a672:  // mov dword ptr [esi + 0x260], edi
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(edi);
L_0040a678:  // call 0x4f4560
    t0 = 0x004f4560u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a67du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a67d:  // mov eax, dword ptr [esi + 0x59c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x59cu)));
L_0040a683:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0040a685:  // je 0x40a6af
    if (f.zf) goto L_0040a6af;
L_0040a687:  // add eax, 0x40
    t0 = ladd<32>(eax, 0x40u, f);
    eax = (uint32_t)(t0);
L_0040a68a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a68b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040a68c:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a691:  // call 0x4e1880
    t0 = 0x004e1880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a696u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a696:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0040a698:  // je 0x40a6af
    if (f.zf) goto L_0040a6af;
L_0040a69a:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0040a69d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a69e:  // push 0x3ca3d70a
    t0 = 0x3ca3d70au; esp -= 4; M32(esp) = t0;
L_0040a6a3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a6a4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040a6a5:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a6aa:  // call 0x4e1260
    t0 = 0x004e1260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a6afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a6af:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a6b0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040a6b2:  // mov edx, dword ptr [esi + 0x5a0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x5a0u)));
L_0040a6b8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040a6bd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a6be:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_0040a6c3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a6c4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a6c5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a6c6:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0040a6c8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040a6cd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a6ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040a6cf:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a6d4:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a6d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a6d9:  // mov dword ptr [esi + 0x304], edi
    M32((uint32_t)(esi + 0x304u)) = (uint32_t)(edi);
L_0040a6df:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040a6e0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040a6e1:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0040a6e2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0040a6e3:  // mov eax, dword ptr [esi + 0x4b0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4b0u)));
L_0040a6e9:  // fld dword ptr [esi + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xfcu)));
L_0040a6ef:  // fcomp dword ptr [eax + 0x2c]
    lcom(x, ST(0), (long double)F32((uint32_t)(eax + 0x2cu)));
    lpop(x);
L_0040a6f2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040a6f4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040a6f7:  // jne 0x40a87d
    if (!f.zf) goto L_0040a87d;
L_0040a6fd:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040a6ff:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040a701:  // call dword ptr [edx + 0x13c]
    t0 = M32((uint32_t)(edx + 0x13cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a707u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a707:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0040a70d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040a70f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040a712:  // jne 0x40a73c
    if (!f.zf) goto L_0040a73c;
L_0040a714:  // mov eax, dword ptr [esi + 0x138]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_0040a71a:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040a71c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040a71d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040a71f:  // call dword ptr [edx + 0x13c]
    t0 = M32((uint32_t)(edx + 0x13cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a725u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a725:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0040a728:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040a729:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0040a72c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040a72f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040a730:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040a731:  // mov ecx, dword ptr [0x67a748]
    ecx = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0040a737:  // call 0x48c000
    t0 = 0x0048c000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a73cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a73c:  // mov ecx, dword ptr [esi + 0x528]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x528u)));
L_0040a742:  // mov dword ptr [esi + 0x304], edi
    M32((uint32_t)(esi + 0x304u)) = (uint32_t)(edi);
L_0040a748:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0040a74a:  // je 0x40a751
    if (f.zf) goto L_0040a751;
L_0040a74c:  // call 0x424990
    t0 = 0x00424990u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a751u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a751:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040a753:  // mov dword ptr [esi + 0x260], 1
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(0x1u);
L_0040a75d:  // call 0x406460
    t0 = 0x00406460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a762u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a762:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a763:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040a765:  // push 0x6234b0
    t0 = 0x6234b0u; esp -= 4; M32(esp) = t0;
L_0040a76a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040a76c:  // call 0x4f4560
    t0 = 0x004f4560u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a771u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a771:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0040a777:  // fsub dword ptr [esi + 0xcc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xccu)));
L_0040a77d:  // fcomp dword ptr [0x5d8bb8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb8u)));
    lpop(x);
L_0040a783:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040a785:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040a788:  // je 0x40a795
    if (f.zf) goto L_0040a795;
L_0040a78a:  // mov edx, dword ptr [esi + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0040a78d:  // mov dword ptr [esi + 0x2f0], edx
    M32((uint32_t)(esi + 0x2f0u)) = (uint32_t)(edx);
L_0040a793:  // jmp 0x40a7c7
    goto L_0040a7c7;
L_0040a795:  // mov dword ptr [esi + 0x2f0], 0x47c34f80
    M32((uint32_t)(esi + 0x2f0u)) = (uint32_t)(0x47c34f80u);
L_0040a79f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7a0:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0040a7a6:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_0040a7ac:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7ad:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0040a7b1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7b2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040a7b3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a7b4:  // push 0x1770
    t0 = 0x1770u; esp -= 4; M32(esp) = t0;
L_0040a7b9:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0040a7bd:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0040a7c2:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a7c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a7c7:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040a7cd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7ce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040a7d0:  // mov edx, dword ptr [esi + 0x5a4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x5a4u)));
L_0040a7d6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040a7db:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7dc:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_0040a7e1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7e2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7e3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a7e4:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0040a7e6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040a7eb:  // mov dword ptr [esi + 0x2f4], ecx
    M32((uint32_t)(esi + 0x2f4u)) = (uint32_t)(ecx);
L_0040a7f1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a7f2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040a7f3:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a7f8:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a7fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a7fd:  // mov eax, dword ptr [esi + 0x59c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x59cu)));
L_0040a803:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0040a805:  // je 0x40a87d
    if (f.zf) goto L_0040a87d;
L_0040a807:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a808:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040a809:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a80e:  // call 0x4e1ab0
    t0 = 0x004e1ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a813u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a813:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040a815:  // jne 0x40a84b
    if (!f.zf) goto L_0040a84b;
L_0040a817:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a818:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040a81a:  // mov eax, dword ptr [esi + 0x59c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x59cu)));
L_0040a820:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040a825:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040a827:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_0040a82c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040a82d:  // push 0x3ca3d70a
    t0 = 0x3ca3d70au; esp -= 4; M32(esp) = t0;
L_0040a832:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040a834:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0040a836:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040a83b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a83c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040a83d:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a842:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a847u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a847:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040a848:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040a849:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0040a84a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0040a84b:  // mov ecx, dword ptr [esi + 0x59c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x59cu)));
L_0040a851:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a852:  // add ecx, 0x40
    t0 = ladd<32>(ecx, 0x40u, f);
    ecx = (uint32_t)(t0);
L_0040a855:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040a856:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a85b:  // call 0x4e1880
    t0 = 0x004e1880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a860u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a860:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0040a862:  // je 0x40a87d
    if (f.zf) goto L_0040a87d;
L_0040a864:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0040a867:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040a868:  // push 0x3ca3d70a
    t0 = 0x3ca3d70au; esp -= 4; M32(esp) = t0;
L_0040a86d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040a872:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040a873:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040a878:  // call 0x4e1260
    t0 = 0x004e1260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040a87du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040a87d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040a87e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040a87f:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0040a880:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0040a580, 0040a580)
