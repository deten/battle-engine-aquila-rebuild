// lifted from 004944d0 (vslot4, 1127 bytes, 340 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004944d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004944d0;
L_004944d0:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004944d6:  // sub esp, 0x124
    t0 = lsub<32>(esp, 0x124u, f);
    esp = (uint32_t)(t0);
L_004944dc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004944dd:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004944df:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004944e0:  // mov ebp, dword ptr [esp + 0x130]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x130u)));
L_004944e7:  // fcomp dword ptr [ebx + 0x3c]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x3cu)));
    lpop(x);
L_004944ea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004944eb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004944ec:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004944ee:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004944f1:  // jne 0x494609
    if (!f.zf) goto L_00494609;
L_004944f7:  // mov dword ptr [esp + 0x20], 0x3f800000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3f800000u);
L_004944ff:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00494503:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_0049450b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0049450f:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_00494517:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0049451b:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0049451f:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00494523:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00494525:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_00494529:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0049452e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00494530:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00494534:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0049453c:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00494544:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_0049454c:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_00494550:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_00494554:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494559u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494559:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049455b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00494560:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_00494564:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00494566:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00494569:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049456b:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_0049456f:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00494572:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_00494576:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0049457a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049457d:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_00494581:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494586u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494586:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00494588:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_0049458c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049458f:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_00494593:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00494596:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0049459a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049459d:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_004945a3:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004945a7:  // mov ecx, dword ptr [eax + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004945ad:  // mov esi, dword ptr [ecx]
    esi = (uint32_t)(M32((uint32_t)(ecx)));
L_004945af:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004945b4:  // call 0x44a0c0
    t0 = 0x0044a0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004945b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004945b9:  // fsub dword ptr [ebx + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x3cu)));
L_004945bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004945bd:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004945c1:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004945c6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004945c9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004945cb:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004945cd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004945ce:  // lea esi, [esp + 0x44]
    esi = (uint32_t)((uint32_t)(esp + 0x44u));
L_004945d2:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004945d5:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004945d7:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004945da:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004945dc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004945de:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004945e2:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004945e4:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004945e8:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004945eb:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004945ef:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004945f2:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004945f5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004945f7:  // call 0x4934f0
    t0 = 0x004934f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004945fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004945fc:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_00494601:  // call 0x44a0c0
    t0 = 0x0044a0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494606u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494606:  // fstp dword ptr [ebx + 0x3c]
    F32((uint32_t)(ebx + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00494609:  // mov ecx, dword ptr [ebp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_0049460f:  // mov edx, dword ptr [ebx + 0x38]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x38u)));
L_00494612:  // fld dword ptr [edx + ecx*4]
    lpush(x, (long double)F32((uint32_t)(edx + ecx * 4u)));
L_00494615:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_0049461b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049461d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00494620:  // jne 0x494831
    if (!f.zf) goto L_00494831;
L_00494626:  // mov edx, dword ptr [ebx + 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x34u)));
L_00494629:  // fld dword ptr [0x8a9e44]
    lpush(x, (long double)F32((uint32_t)(0x8a9e44u)));
L_0049462f:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_00494632:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00494634:  // mov ecx, dword ptr [ebx + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_00494637:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00494639:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0049463b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049463c:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0049463e:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00494640:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_00494643:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00494646:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0049464a:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0049464d:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_00494650:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00494654:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00494656:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0049465a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0049465e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00494660:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00494664:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00494668:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049466b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049466e:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00494672:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00494675:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494676:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00494679:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0049467d:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049467f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494680:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00494684:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00494687:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049468cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049468c:  // mov eax, dword ptr [esp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_00494693:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00494697:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049469b:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0049469d:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004946a1:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004946a4:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004946a8:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004946ab:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004946ae:  // mov eax, dword ptr [0x8a9e44]
    eax = (uint32_t)(M32((uint32_t)(0x8a9e44u)));
L_004946b3:  // mov esi, dword ptr [ebx + 0x24]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x24u)));
L_004946b6:  // mov edi, dword ptr [ebx + 0x30]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004946b9:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004946bd:  // mov eax, dword ptr [ebp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_004946c3:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004946c7:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004946ca:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004946cd:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_004946cf:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_004946d1:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004946d3:  // lea ecx, [edi + 0x20]
    ecx = (uint32_t)((uint32_t)(edi + 0x20u));
L_004946d6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004946d7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004946d8:  // lea ecx, [esi + 0x20]
    ecx = (uint32_t)((uint32_t)(esi + 0x20u));
L_004946db:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004946e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004946e0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004946e1:  // lea eax, [edi + 0x10]
    eax = (uint32_t)((uint32_t)(edi + 0x10u));
L_004946e4:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004946e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004946e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004946ea:  // lea ecx, [esi + 0x10]
    ecx = (uint32_t)((uint32_t)(esi + 0x10u));
L_004946ed:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004946f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004946f2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004946f3:  // lea edx, [esp + 0x10c]
    edx = (uint32_t)((uint32_t)(esp + 0x10cu));
L_004946fa:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004946fb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004946fc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004946fe:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494703u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494703:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494704:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00494708:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049470du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049470d:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00494711:  // lea eax, [esp + 0x114]
    eax = (uint32_t)((uint32_t)(esp + 0x114u));
L_00494718:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00494719:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049471a:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_0049471e:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494723u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494723:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494724:  // lea ecx, [esp + 0xe8]
    ecx = (uint32_t)((uint32_t)(esp + 0xe8u));
L_0049472b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049472c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049472d:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00494731:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494736u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494736:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494737:  // lea edx, [esp + 0xdc]
    edx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_0049473e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049473f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00494740:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00494744:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494749u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494749:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049474a:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_00494751:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494756u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494756:  // mov eax, dword ptr [ebp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_0049475c:  // mov edx, dword ptr [ebx + 0x30]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_0049475f:  // lea ecx, [esp + 0x124]
    ecx = (uint32_t)((uint32_t)(esp + 0x124u));
L_00494766:  // lea esi, [eax + eax*2]
    esi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00494769:  // lea eax, [esp + 0x94]
    eax = (uint32_t)((uint32_t)(esp + 0x94u));
L_00494770:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00494773:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_00494775:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494776:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494777:  // lea ecx, [esi + 0x20]
    ecx = (uint32_t)((uint32_t)(esi + 0x20u));
L_0049477a:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049477fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049477f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494780:  // lea edx, [esp + 0x88]
    edx = (uint32_t)((uint32_t)(esp + 0x88u));
L_00494787:  // lea eax, [esp + 0xf8]
    eax = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0049478e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049478f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494790:  // lea ecx, [esi + 0x10]
    ecx = (uint32_t)((uint32_t)(esi + 0x10u));
L_00494793:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494798u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494798:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_0049479c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049479d:  // lea edx, [esp + 0x6c]
    edx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004947a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004947a2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004947a3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004947a5:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004947aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004947aa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004947ab:  // lea ecx, [esp + 0xb0]
    ecx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_004947b2:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004947b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004947b7:  // mov ebp, dword ptr [esp + 0x140]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_004947be:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004947c3:  // lea esi, [esp + 0xa4]
    esi = (uint32_t)((uint32_t)(esp + 0xa4u));
L_004947ca:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004947cc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004947ce:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004947d0:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004947d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004947d5:  // lea esi, [ebp + 0x10]
    esi = (uint32_t)((uint32_t)(ebp + 0x10u));
L_004947d8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004947da:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004947dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004947df:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_004947e3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004947e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004947e5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004947e7:  // lea edi, [ebp + 0x20]
    edi = (uint32_t)((uint32_t)(ebp + 0x20u));
L_004947ea:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004947efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004947ef:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004947f1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004947f3:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004947f5:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004947f8:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004947fb:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004947fe:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00494801:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00494804:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00494807:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049480cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049480c:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00494810:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00494811:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494812:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00494814:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494819u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494819:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0049481b:  // mov dword ptr [esi], edx
    M32((uint32_t)(esi)) = (uint32_t)(edx);
L_0049481d:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00494820:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_00494823:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00494826:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_00494829:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049482c:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_0049482f:  // jmp 0x494878
    goto L_00494878;
L_00494831:  // mov edx, dword ptr [ebx + 0x28]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_00494834:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_00494837:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00494839:  // mov edx, dword ptr [esp + 0x13c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_00494840:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00494842:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00494844:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00494847:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0049484a:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0049484d:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00494850:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00494853:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00494856:  // mov ebp, dword ptr [ebp + 0x88]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_0049485c:  // mov eax, dword ptr [ebx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x24u)));
L_0049485f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00494864:  // lea esi, [ebp + ebp*2]
    esi = (uint32_t)((uint32_t)(ebp + ebp * 2u));
L_00494868:  // mov ebp, dword ptr [esp + 0x140]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_0049486f:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00494872:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_00494874:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_00494876:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00494878:  // mov al, byte ptr [esp + 0x144]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x144u))) & 0xffu);
L_0049487f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00494881:  // je 0x49492a
    if (f.zf) goto L_0049492a;
L_00494887:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0049488a:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_0049488e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049488f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00494891:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494893u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494893:  // mov esi, dword ptr [esp + 0x13c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_0049489a:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0049489e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049489f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004948a0:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004948a2:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004948a4:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004948a6:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004948a9:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004948ac:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004948af:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004948b2:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004948b5:  // lea eax, [esp + 0xac]
    eax = (uint32_t)((uint32_t)(esp + 0xacu));
L_004948bc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004948bd:  // lea eax, [esp + 0x80]
    eax = (uint32_t)((uint32_t)(esp + 0x80u));
L_004948c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004948c5:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004948c8:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004948cb:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004948cd:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004948d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004948d0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004948d2:  // call 0x494350
    t0 = 0x00494350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004948d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004948d7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004948d9:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004948deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004948de:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004948e0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004948e1:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_004948e3:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004948e6:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_004948e9:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004948ec:  // mov dword ptr [esi + 8], ecx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ecx);
L_004948ef:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004948f3:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004948f6:  // lea eax, [esp + 0xa8]
    eax = (uint32_t)((uint32_t)(esp + 0xa8u));
L_004948fd:  // mov dword ptr [esi + 0xc], edx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(edx);
L_00494900:  // mov ebx, dword ptr [ebx + 8]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00494903:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494904:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00494908:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0049490a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049490b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049490c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0049490e:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494911u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494911:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00494913:  // call 0x494350
    t0 = 0x00494350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494918u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494918:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049491a:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049491fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049491f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00494924:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00494926:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_00494928:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049492a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0049492b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0049492c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049492d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049492e:  // add esp, 0x124
    t0 = ladd<32>(esp, 0x124u, f);
    esp = (uint32_t)(t0);
L_00494934:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004944d0, 004944d0)
