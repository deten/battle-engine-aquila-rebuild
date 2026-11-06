// lifted from 004905f0 (FUN_004905f0, 399 bytes, 123 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004905f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004905f0;
L_004905f0:  // sub esp, 0xbc
    t0 = lsub<32>(esp, 0xbcu, f);
    esp = (uint32_t)(t0);
L_004905f6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004905f7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004905f8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004905f9:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004905fb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004905fc:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00490600:  // lea eax, [esi + 0x1c4]
    eax = (uint32_t)((uint32_t)(esi + 0x1c4u));
L_00490606:  // mov edx, 2
    edx = (uint32_t)(0x2u);
L_0049060b:  // lea ebp, [esp + 0x1c]
    ebp = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0049060f:  // mov ebx, 0x9c6678
    ebx = (uint32_t)(0x9c6678u);
L_00490614:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00490617:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00490619:  // je 0x49068e
    if (f.zf) goto L_0049068e;
L_0049061b:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0049061c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0049061e:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00490621:  // je 0x49067a
    if (f.zf) goto L_0049067a;
L_00490623:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00490626:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00490628:  // lea esi, [eax + 0x18]
    esi = (uint32_t)((uint32_t)(eax + 0x18u));
L_0049062b:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00490630:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_00490632:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00490634:  // fld dword ptr [eax + 0xc]
    lpush(x, (long double)F32((uint32_t)(eax + 0xcu)));
L_00490637:  // fadd dword ptr [eax + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x3cu)));
L_0049063a:  // fstp dword ptr [eax + 0x3c]
    F32((uint32_t)(eax + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0049063d:  // fld dword ptr [eax + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + 0x10u)));
L_00490640:  // fadd dword ptr [eax + 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x40u)));
L_00490643:  // fstp dword ptr [eax + 0x40]
    F32((uint32_t)(eax + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00490646:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_00490649:  // fadd dword ptr [eax + 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x44u)));
L_0049064c:  // fstp dword ptr [eax + 0x44]
    F32((uint32_t)(eax + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0049064f:  // mov byte ptr [edx + 0x9c68a0], 0
    M8((uint32_t)(edx + 0x9c68a0u)) = (uint8_t)(0x0u);
L_00490656:  // mov byte ptr [edx + 0x9c6904], 1
    M8((uint32_t)(edx + 0x9c6904u)) = (uint8_t)(0x1u);
L_0049065d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049065f:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00490663:  // mov byte ptr [edx + 0x9c68fc], 1
    M8((uint32_t)(edx + 0x9c68fcu)) = (uint8_t)(0x1u);
L_0049066a:  // mov byte ptr [edx + 0x9c68a0], 1
    M8((uint32_t)(edx + 0x9c68a0u)) = (uint8_t)(0x1u);
L_00490671:  // mov byte ptr [edx + 0x9c6904], 1
    M8((uint32_t)(edx + 0x9c6904u)) = (uint8_t)(0x1u);
L_00490678:  // jmp 0x49068e
    goto L_0049068e;
L_0049067a:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_00490680:  // mov byte ptr [edx + 0x9c68a0], 0
    M8((uint32_t)(edx + 0x9c68a0u)) = (uint8_t)(0x0u);
L_00490687:  // mov byte ptr [edx + 0x9c6904], 1
    M8((uint32_t)(edx + 0x9c6904u)) = (uint8_t)(0x1u);
L_0049068e:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00490690:  // fmul dword ptr [0x5dc23c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc23cu)));
L_00490696:  // add eax, 0x74
    t0 = ladd<32>(eax, 0x74u, f);
    eax = (uint32_t)(t0);
L_00490699:  // add ebx, 0x5c
    t0 = ladd<32>(ebx, 0x5cu, f);
    ebx = (uint32_t)(t0);
L_0049069c:  // add ebp, 8
    t0 = ladd<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_0049069f:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004906a3:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004906a7:  // mov dword ptr [ebp - 4], ecx
    M32((uint32_t)(ebp + 0xfffffffcu)) = (uint32_t)(ecx);
L_004906aa:  // lea ecx, [edx - 2]
    ecx = (uint32_t)((uint32_t)(edx + 0xfffffffeu));
L_004906ad:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004906ae:  // mov dword ptr [ebp - 8], ecx
    M32((uint32_t)(ebp + 0xfffffff8u)) = (uint32_t)(ecx);
L_004906b1:  // lea ecx, [edx - 2]
    ecx = (uint32_t)((uint32_t)(edx + 0xfffffffeu));
L_004906b4:  // cmp ecx, 6
    t0 = lsub<32>(ecx, 0x6u, f);
L_004906b7:  // jl 0x490614
    if ((f.sf != f.of)) goto L_00490614;
L_004906bd:  // mov eax, dword ptr [esi + 0x1c0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1c0u)));
L_004906c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004906c5:  // je 0x490774
    if (f.zf) goto L_00490774;
L_004906cb:  // push 0x4905d0
    t0 = 0x4905d0u; esp -= 4; M32(esp) = t0;
L_004906d0:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004906d2:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004906d6:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004906d8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004906d9:  // call 0x55e7ae
    t0 = 0x0055e7aeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004906deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004906de:  // mov edx, dword ptr [esi + 0x1c0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1c0u)));
L_004906e4:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004906e7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004906e9:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004906eb:  // jle 0x490715
    if ((f.zf || f.sf != f.of)) goto L_00490715;
L_004906ed:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004906f1:  // add esi, 8
    t0 = ladd<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004906f4:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004906f6:  // fmul dword ptr [0x5dc23c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc23cu)));
L_004906fc:  // add esi, 0x1c
    t0 = ladd<32>(esi, 0x1cu, f);
    esi = (uint32_t)(t0);
L_004906ff:  // add ecx, 8
    t0 = ladd<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00490702:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00490706:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049070a:  // mov dword ptr [ecx - 4], edi
    M32((uint32_t)(ecx + 0xfffffffcu)) = (uint32_t)(edi);
L_0049070d:  // mov dword ptr [ecx - 8], eax
    M32((uint32_t)(ecx + 0xfffffff8u)) = (uint32_t)(eax);
L_00490710:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00490711:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_00490713:  // jl 0x4906f4
    if ((f.sf != f.of)) goto L_004906f4;
L_00490715:  // push 0x4905d0
    t0 = 0x4905d0u; esp -= 4; M32(esp) = t0;
L_0049071a:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0049071c:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_00490720:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00490721:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00490722:  // call 0x55e7ae
    t0 = 0x0055e7aeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00490727u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00490727:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049072b:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0049072e:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00490730:  // mov esi, dword ptr [ecx + 0x1c0]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x1c0u)));
L_00490736:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00490737:  // js 0x490766
    if (f.sf) goto L_00490766;
L_00490739:  // lea ebp, [esp + 0x20]
    ebp = (uint32_t)((uint32_t)(esp + 0x20u));
L_0049073d:  // lea ebx, [esp + esi*8 + 0x50]
    ebx = (uint32_t)((uint32_t)(esp + esi * 8u + 0x50u));
L_00490741:  // cmp edi, 6
    t0 = lsub<32>(edi, 0x6u, f);
L_00490744:  // jge 0x490766
    if ((f.sf == f.of)) goto L_00490766;
L_00490746:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00490748:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0049074b:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0049074d:  // jle 0x490766
    if ((f.zf || f.sf != f.of)) goto L_00490766;
L_0049074f:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00490753:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00490754:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00490755:  // call 0x4903a0
    t0 = 0x004903a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049075au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049075a:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0049075b:  // add ebp, 8
    t0 = ladd<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_0049075e:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0049075f:  // sub ebx, 8
    t0 = lsub<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00490762:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00490764:  // jge 0x490741
    if ((f.sf == f.of)) goto L_00490741;
L_00490766:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0049076a:  // mov dword ptr [eax + 0x1c0], 0
    M32((uint32_t)(eax + 0x1c0u)) = (uint32_t)(0x0u);
L_00490774:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00490775:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00490776:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00490777:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00490778:  // add esp, 0xbc
    t0 = ladd<32>(esp, 0xbcu, f);
    esp = (uint32_t)(t0);
L_0049077e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004905f0, 004905f0)
