// lifted from 0041a530 (vslot1, 252 bytes, 97 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041a530(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041a530;
L_0041a530:  // sub esp, 0x44
    t0 = lsub<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a533:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041a534:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0041a536:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041a537:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041a538:  // fld dword ptr [ebx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x1cu)));
L_0041a53b:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_0041a541:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041a542:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041a544:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041a547:  // je 0x41a563
    if (f.zf) goto L_0041a563;
L_0041a549:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a54d:  // lea esi, [ebx + 0x20]
    esi = (uint32_t)((uint32_t)(ebx + 0x20u));
L_0041a550:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a555:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0041a557:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a559:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a55a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a55b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041a55c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a55d:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a560:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a563:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_0041a566:  // lea ebp, [ebx + 0x20]
    ebp = (uint32_t)((uint32_t)(ebx + 0x20u));
L_0041a569:  // lea edi, [ebx + 0x58]
    edi = (uint32_t)((uint32_t)(ebx + 0x58u));
L_0041a56c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a571:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0041a573:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041a575:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a577:  // je 0x41a610
    if (f.zf) goto L_0041a610;
L_0041a57d:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_0041a580:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041a582:  // je 0x41a5cd
    if (f.zf) goto L_0041a5cd;
L_0041a584:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0041a587:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041a589:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a58a:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_0041a58e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a58f:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0041a593:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a594:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_0041a598:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a599:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a59cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a59c:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a5a0:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a5a5:  // lea esi, [esp + 0x24]
    esi = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041a5a9:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0041a5ab:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a5ad:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0041a5b3:  // lea esi, [esp + 0x24]
    esi = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041a5b7:  // mov dword ptr [ebx + 0x1c], ecx
    M32((uint32_t)(ebx + 0x1cu)) = (uint32_t)(ecx);
L_0041a5ba:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a5bf:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0041a5c1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a5c3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a5c4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a5c5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041a5c6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a5c7:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a5ca:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a5cd:  // test dword ptr [eax + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(eax + 0x34u)) & 0x80000000u, f);
L_0041a5d4:  // je 0x41a5f2
    if (f.zf) goto L_0041a5f2;
L_0041a5d6:  // add eax, 0x3c
    t0 = ladd<32>(eax, 0x3cu, f);
    eax = (uint32_t)(t0);
L_0041a5d9:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a5de:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0041a5e0:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a5e4:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0041a5e6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a5e8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a5e9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a5ea:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041a5eb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a5ec:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a5ef:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a5f2:  // mov eax, 0x83d9c0
    eax = (uint32_t)(0x83d9c0u);
L_0041a5f7:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a5fc:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0041a5fe:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a602:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0041a604:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a606:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a607:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a608:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041a609:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a60a:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a60d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a610:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a614:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a619:  // mov esi, 0x660588
    esi = (uint32_t)(0x660588u);
L_0041a61e:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0041a620:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a622:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a623:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a624:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041a625:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a626:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a629:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0041a530, 0041a530)
