// lifted from 0042a5f0 (FUN_0042a5f0, 376 bytes, 115 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042a5f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042a5f0;
L_0042a5f0:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0042a5f4:  // mov eax, dword ptr [ecx + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xa0u)));
L_0042a5fa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042a5fc:  // jne 0x42a61c
    if (!f.zf) goto L_0042a61c;
L_0042a5fe:  // mov eax, dword ptr [ecx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_0042a604:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0042a608:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0042a60a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042a60b:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_0042a610:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042a611:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a616u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a616:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042a619:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a61c:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0042a61f:  // je 0x42a5fe
    if (f.zf) goto L_0042a5fe;
L_0042a621:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0042a624:  // jne 0x42a645
    if (!f.zf) goto L_0042a645;
L_0042a626:  // mov eax, dword ptr [ecx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_0042a62c:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0042a630:  // movsx ecx, byte ptr [eax]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(eax))));
L_0042a633:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042a634:  // push 0x6245d8
    t0 = 0x6245d8u; esp -= 4; M32(esp) = t0;
L_0042a639:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042a63a:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a63fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a63f:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042a642:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a645:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_0042a648:  // jne 0x42a66d
    if (!f.zf) goto L_0042a66d;
L_0042a64a:  // mov eax, dword ptr [ecx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_0042a650:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0042a654:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a657:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0042a659:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a65c:  // push 0x625098
    t0 = 0x625098u; esp -= 4; M32(esp) = t0;
L_0042a661:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042a662:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a667u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a667:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042a66a:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a66d:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_0042a670:  // jne 0x42a6a8
    if (!f.zf) goto L_0042a6a8;
L_0042a672:  // mov ecx, dword ptr [ecx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_0042a678:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a67b:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a67e:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0042a682:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0042a685:  // fstp qword ptr [esp + 8]
    F64((uint32_t)(esp + 0x8u)) = lf64(ST(0));
    lpop(x);
L_0042a689:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_0042a68c:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a68f:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0042a691:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a694:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a697:  // push 0x62508c
    t0 = 0x62508cu; esp -= 4; M32(esp) = t0;
L_0042a69c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042a69d:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a6a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a6a2:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0042a6a5:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a6a8:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_0042a6ab:  // jne 0x42a719
    if (!f.zf) goto L_0042a719;
L_0042a6ad:  // mov eax, dword ptr [ecx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_0042a6b3:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6b6:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6b9:  // fld dword ptr [eax + 0x28]
    lpush(x, (long double)F32((uint32_t)(eax + 0x28u)));
L_0042a6bc:  // fstp qword ptr [esp + 8]
    F64((uint32_t)(esp + 0x8u)) = lf64(ST(0));
    lpop(x);
L_0042a6c0:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_0042a6c3:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a6c6:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_0042a6c9:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6cc:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a6cf:  // fld dword ptr [eax + 0x18]
    lpush(x, (long double)F32((uint32_t)(eax + 0x18u)));
L_0042a6d2:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6d5:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a6d8:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_0042a6db:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6de:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a6e1:  // fld dword ptr [eax + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + 0x10u)));
L_0042a6e4:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6e7:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a6ea:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0042a6ed:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6f0:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a6f3:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0042a6f6:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a6f9:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a6fc:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0042a6fe:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0042a702:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a705:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0042a708:  // push 0x625070
    t0 = 0x625070u; esp -= 4; M32(esp) = t0;
L_0042a70d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042a70e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a713u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a713:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_0042a716:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a719:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0042a71c:  // jne 0x42a753
    if (!f.zf) goto L_0042a753;
L_0042a71e:  // mov ecx, dword ptr [ecx + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_0042a724:  // cmp byte ptr [ecx], 0
    t0 = lsub<8>(M8((uint32_t)(ecx)), 0x0u, f);
L_0042a727:  // je 0x42a73e
    if (f.zf) goto L_0042a73e;
L_0042a729:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0042a72d:  // push 0x625068
    t0 = 0x625068u; esp -= 4; M32(esp) = t0;
L_0042a732:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042a733:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a738u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a738:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a73b:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a73e:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0042a742:  // push 0x625060
    t0 = 0x625060u; esp -= 4; M32(esp) = t0;
L_0042a747:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042a748:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a74du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a74d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a750:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0042a753:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0042a757:  // push 0x625050
    t0 = 0x625050u; esp -= 4; M32(esp) = t0;
L_0042a75c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042a75d:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042a762u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042a762:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042a765:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0042a5f0, 0042a5f0)
