// lifted from 004505b0 (vslot5, 4968 bytes, 1344 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004505b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004505b0;
L_004505b0:  // sub esp, 0xd8
    t0 = lsub<32>(esp, 0xd8u, f);
    esp = (uint32_t)(t0);
L_004505b6:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004505bd:  // fmul dword ptr [0x5d85e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e8u)));
L_004505c3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004505c4:  // mov ebx, dword ptr [esp + 0xe4]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xe4u)));
L_004505cb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004505cc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004505cd:  // fcos 
    ST(0) = lfcos(ST(0));
L_004505cf:  // cmp ebx, 4
    t0 = lsub<32>(ebx, 0x4u, f);
L_004505d2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004505d3:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004505d7:  // fchs 
    ST(0) = -ST(0);
L_004505d9:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_004505df:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004505e5:  // fmul dword ptr [0x5db394]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db394u)));
L_004505eb:  // jne 0x4505ef
    if (!f.zf) goto L_004505ef;
L_004505ed:  // fchs 
    ST(0) = -ST(0);
L_004505ef:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004505f3:  // fld dword ptr [0x5db390]
    lpush(x, (long double)F32((uint32_t)(0x5db390u)));
L_004505f9:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_004505fd:  // mov eax, dword ptr [0x89d8d0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_00450602:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450604:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450609:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045060b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045060d:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_00450612:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00450616:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_0045061b:  // push 0x3e000000
    t0 = 0x3e000000u; esp -= 4; M32(esp) = t0;
L_00450620:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00450621:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_00450626:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0045062b:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450630u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450630:  // fadd dword ptr [0x5db38c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db38cu)));
L_00450636:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00450637:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0045063c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045063f:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450644u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450644:  // fadd dword ptr [esp + 0x68]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x68u)));
L_00450648:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00450649:  // fadd dword ptr [0x5d85d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d8u)));
L_0045064f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00450652:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450657u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450657:  // mov eax, dword ptr [0x89d8d4]
    eax = (uint32_t)(M32((uint32_t)(0x89d8d4u)));
L_0045065c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045065e:  // mov esi, dword ptr [esp + 0x70]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_00450662:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450667:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450669:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045066b:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_00450670:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_00450675:  // push 0xff037fa0
    t0 = 0xff037fa0u; esp -= 4; M32(esp) = t0;
L_0045067a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045067b:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_00450680:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00450685:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450686:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045068bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045068b:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0045068e:  // mov ecx, dword ptr [0x89d8d0]
    ecx = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_00450694:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450696:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045069b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045069d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045069f:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_004506a4:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_004506a9:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004506ab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004506ac:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_004506b1:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_004506b6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004506b7:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004506bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004506bc:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004506bf:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_004506c4:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_004506c9:  // mov edi, 0x6776f8
    edi = (uint32_t)(0x6776f8u);
L_004506ce:  // push 0x3f400000
    t0 = 0x3f400000u; esp -= 4; M32(esp) = t0;
L_004506d3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004506d8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004506da:  // push 0x45dac000
    t0 = 0x45dac000u; esp -= 4; M32(esp) = t0;
L_004506df:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004506e4:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004506e9:  // call 0x550b10
    t0 = 0x00550b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004506eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004506ee:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004506f5:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004506fc:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00450702:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00450704:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00450707:  // je 0x450713
    if (f.zf) goto L_00450713;
L_00450709:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045070b:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00450711:  // jmp 0x45072f
    goto L_0045072f;
L_00450713:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_0045071a:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00450720:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00450722:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00450725:  // jne 0x45072f
    if (!f.zf) goto L_0045072f;
L_00450727:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00450729:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0045072f:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00450735:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00450737:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00450739:  // cmp ebx, 4
    t0 = lsub<32>(ebx, 0x4u, f);
L_0045073c:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00450742:  // jne 0x450746
    if (!f.zf) goto L_00450746;
L_00450744:  // fchs 
    ST(0) = -ST(0);
L_00450746:  // fsub dword ptr [0x5db388]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db388u)));
L_0045074c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045074e:  // fcos 
    ST(0) = lfcos(ST(0));
L_00450750:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00450754:  // fsin 
    ST(0) = lfsin(ST(0));
L_00450756:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0045075c:  // fcos 
    ST(0) = lfcos(ST(0));
L_0045075e:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00450762:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_00450768:  // fsin 
    ST(0) = lfsin(ST(0));
L_0045076a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0045076e:  // fld qword ptr [0x5db380]
    lpush(x, (long double)F64((uint32_t)(0x5db380u)));
L_00450774:  // fcos 
    ST(0) = lfcos(ST(0));
L_00450776:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0045077a:  // fld qword ptr [0x5db380]
    lpush(x, (long double)F64((uint32_t)(0x5db380u)));
L_00450780:  // fsin 
    ST(0) = lfsin(ST(0));
L_00450782:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00450784:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00450788:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0045078c:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00450790:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00450792:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00450794:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00450796:  // fstp dword ptr [0x89d764]
    F32((uint32_t)(0x89d764u)) = lf32(ST(0));
    lpop(x);
L_0045079c:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004507a0:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004507a2:  // fchs 
    ST(0) = -ST(0);
L_004507a4:  // fstp dword ptr [0x89d768]
    F32((uint32_t)(0x89d768u)) = lf32(ST(0));
    lpop(x);
L_004507aa:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004507ac:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004507b0:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004507b4:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004507b6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004507ba:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004507be:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004507c0:  // fstp dword ptr [0x89d76c]
    F32((uint32_t)(0x89d76cu)) = lf32(ST(0));
    lpop(x);
L_004507c6:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004507ca:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004507ce:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004507d0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004507d2:  // fstp dword ptr [0x89d774]
    F32((uint32_t)(0x89d774u)) = lf32(ST(0));
    lpop(x);
L_004507d8:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004507dc:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004507e0:  // fstp dword ptr [0x89d778]
    F32((uint32_t)(0x89d778u)) = lf32(ST(0));
    lpop(x);
L_004507e6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004507ea:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004507ec:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004507f0:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004507f4:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004507f6:  // fstp dword ptr [0x89d77c]
    F32((uint32_t)(0x89d77cu)) = lf32(ST(0));
    lpop(x);
L_004507fc:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00450800:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00450804:  // fchs 
    ST(0) = -ST(0);
L_00450806:  // fstp dword ptr [0x89d784]
    F32((uint32_t)(0x89d784u)) = lf32(ST(0));
    lpop(x);
L_0045080c:  // fstp dword ptr [0x89d788]
    F32((uint32_t)(0x89d788u)) = lf32(ST(0));
    lpop(x);
L_00450812:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00450814:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00450818:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0045081c:  // fstp dword ptr [0x89d78c]
    F32((uint32_t)(0x89d78cu)) = lf32(ST(0));
    lpop(x);
L_00450822:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_0045082a:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0045082e:  // mov dword ptr [esp + 0x38], 0xbfb33333
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0xbfb33333u);
L_00450836:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0045083a:  // mov dword ptr [esp + 0x34], 0xc0e00000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xc0e00000u);
L_00450842:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00450846:  // mov dword ptr [0x89d794], edx
    M32((uint32_t)(0x89d794u)) = (uint32_t)(edx);
L_0045084c:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00450850:  // mov dword ptr [0x89d79c], ecx
    M32((uint32_t)(0x89d79cu)) = (uint32_t)(ecx);
L_00450856:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0045085b:  // mov dword ptr [0x89d798], eax
    M32((uint32_t)(0x89d798u)) = (uint32_t)(eax);
L_00450860:  // mov dword ptr [0x89d7a0], edx
    M32((uint32_t)(0x89d7a0u)) = (uint32_t)(edx);
L_00450866:  // call 0x4685a0
    t0 = 0x004685a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045086bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045086b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045086d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045086f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450871:  // lea ecx, [esp + 0x9c]
    ecx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_00450878:  // mov dword ptr [esp + 0x98], 0
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(0x0u);
L_00450883:  // mov dword ptr [esp + 0xac], 0
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0x0u);
L_0045088e:  // mov dword ptr [esp + 0xb0], 0
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(0x0u);
L_00450899:  // mov dword ptr [esp + 0xb4], 0
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(0x0u);
L_004508a4:  // mov dword ptr [esp + 0xbc], 0
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(0x0u);
L_004508af:  // mov dword ptr [esp + 0xc0], 0
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(0x0u);
L_004508ba:  // mov dword ptr [esp + 0xc4], 0
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(0x0u);
L_004508c5:  // mov dword ptr [esp + 0xc8], 0
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(0x0u);
L_004508d0:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004508d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004508d5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004508d7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004508d9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004508db:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_004508e2:  // mov dword ptr [esp + 0xcc], 0
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(0x0u);
L_004508ed:  // mov dword ptr [esp + 0xd0], 0
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(0x0u);
L_004508f8:  // mov dword ptr [esp + 0xd4], 0
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(0x0u);
L_00450903:  // mov dword ptr [esp + 0xd8], 0
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(0x0u);
L_0045090e:  // mov dword ptr [esp + 0xdc], 0
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(0x0u);
L_00450919:  // mov dword ptr [esp + 0xe0], 0
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(0x0u);
L_00450924:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450929u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450929:  // fld qword ptr [0x5db378]
    lpush(x, (long double)F64((uint32_t)(0x5db378u)));
L_0045092f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00450931:  // mov dword ptr [esp + 0x30], 0xc59c4000
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0xc59c4000u);
L_00450939:  // mov dword ptr [esp + 0x34], 0x459c4000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x459c4000u);
L_00450941:  // mov dword ptr [esp + 0x38], 0x44bb8000
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x44bb8000u);
L_00450949:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0045094f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00450951:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00450954:  // jne 0x450980
    if (!f.zf) goto L_00450980;
L_00450956:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0045095c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045095e:  // fmul dword ptr [0x5db370]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db370u)));
L_00450964:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00450968:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045096a:  // fmul dword ptr [0x5db36c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db36cu)));
L_00450970:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00450974:  // fmul dword ptr [0x5db368]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db368u)));
L_0045097a:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0045097e:  // jmp 0x450982
    goto L_00450982;
L_00450980:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00450982:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00450986:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_0045098b:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00450990:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_00450995:  // mov ebp, dword ptr [esp + 0x40]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00450999:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0045099c:  // mov ebx, dword ptr [esp + 0x54]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004509a0:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004509a2:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004509a6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004509a8:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004509aa:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_004509b1:  // mov dword ptr [0x9c68a8], 0
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(0x0u);
L_004509bb:  // mov byte ptr [0x9c690c], 1
    M8((uint32_t)(0x9c690cu)) = (uint8_t)(0x1u);
L_004509c2:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_004509c5:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004509c8:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004509cb:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004509d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004509d0:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004509d4:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_004509d9:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_004509de:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_004509e3:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_004509e8:  // lea esi, [esp + 0x98]
    esi = (uint32_t)((uint32_t)(esp + 0x98u));
L_004509ef:  // mov edi, 0x9c65c0
    edi = (uint32_t)(0x9c65c0u);
L_004509f4:  // fchs 
    ST(0) = -ST(0);
L_004509f6:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004509fa:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004509fd:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00450a01:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00450a03:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00450a07:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00450a09:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450a0b:  // mov byte ptr [0x9c68fc], 1
    M8((uint32_t)(0x9c68fcu)) = (uint8_t)(0x1u);
L_00450a12:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00450a14:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_00450a1b:  // mov byte ptr [0x9c68a0], 1
    M8((uint32_t)(0x9c68a0u)) = (uint8_t)(0x1u);
L_00450a22:  // mov byte ptr [0x9c6904], 1
    M8((uint32_t)(0x9c6904u)) = (uint8_t)(0x1u);
L_00450a29:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_00450a2c:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_00450a2f:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00450a32:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450a37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450a37:  // fld qword ptr [0x5db360]
    lpush(x, (long double)F64((uint32_t)(0x5db360u)));
L_00450a3d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00450a3f:  // mov dword ptr [esp + 0x48], 0x447a0000
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x447a0000u);
L_00450a47:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00450a4b:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00450a4f:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00450a54:  // lea esi, [esp + 0x8c]
    esi = (uint32_t)((uint32_t)(esp + 0x8cu));
L_00450a5b:  // mov edi, 0x9c661c
    edi = (uint32_t)(0x9c661cu);
L_00450a60:  // mov dword ptr [esp + 0x4c], 0x43480000
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x43480000u);
L_00450a68:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00450a6c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00450a6e:  // mov dword ptr [esp + 0x44], 0
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x0u);
L_00450a76:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00450a7a:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00450a7e:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00450a82:  // mov byte ptr [0x9c68fd], 1
    M8((uint32_t)(0x9c68fdu)) = (uint8_t)(0x1u);
L_00450a89:  // mov byte ptr [0x9c68a1], 1
    M8((uint32_t)(0x9c68a1u)) = (uint8_t)(0x1u);
L_00450a90:  // mov byte ptr [0x9c6905], 1
    M8((uint32_t)(0x9c6905u)) = (uint8_t)(0x1u);
L_00450a97:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00450a9d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00450a9f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00450aa2:  // jne 0x450ace
    if (!f.zf) goto L_00450ace;
L_00450aa4:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00450aaa:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00450ab2:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00450ab6:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00450aba:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00450abc:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00450ac0:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00450ac4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00450ac6:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00450aca:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00450acc:  // jmp 0x450ad0
    goto L_00450ad0;
L_00450ace:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00450ad0:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00450ad5:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00450ada:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00450adf:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00450ae2:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00450ae4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450ae6:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00450ae8:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00450aec:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_00450aef:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00450af3:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00450af6:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_00450afd:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00450b00:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450b05u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450b05:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00450b0a:  // lea esi, [esp + 0x8c]
    esi = (uint32_t)((uint32_t)(esp + 0x8cu));
L_00450b11:  // mov edi, 0x9c6678
    edi = (uint32_t)(0x9c6678u);
L_00450b16:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450b18:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00450b1a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450b1c:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00450b21:  // mov byte ptr [0x9c68fe], 1
    M8((uint32_t)(0x9c68feu)) = (uint8_t)(0x1u);
L_00450b28:  // mov byte ptr [0x9c68a2], 1
    M8((uint32_t)(0x9c68a2u)) = (uint8_t)(0x1u);
L_00450b2f:  // mov byte ptr [0x9c6906], 1
    M8((uint32_t)(0x9c6906u)) = (uint8_t)(0x1u);
L_00450b36:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_00450b3d:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00450b44:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450b49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450b49:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00450b4d:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00450b50:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450b52:  // je 0x450c24
    if (f.zf) goto L_00450c24;
L_00450b58:  // mov edx, dword ptr [ebx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00450b5b:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_00450b63:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00450b67:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00450b6b:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00450b6f:  // fcos 
    ST(0) = lfcos(ST(0));
L_00450b71:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_00450b75:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_00450b7d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450b82:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450b84:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450b86:  // fst dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
L_00450b8a:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00450b8e:  // fsin 
    ST(0) = lfsin(ST(0));
L_00450b90:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00450b94:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_00450b98:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00450b9c:  // mov dword ptr [esp + 0x74], eax
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(eax);
L_00450ba0:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00450ba4:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_00450bab:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00450bad:  // fchs 
    ST(0) = -ST(0);
L_00450baf:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00450bb3:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00450bb7:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00450bbb:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_00450bbf:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00450bc3:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00450bc7:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00450bcb:  // mov dword ptr [esp + 0x78], ecx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ecx);
L_00450bcf:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00450bd3:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_00450bd7:  // mov dword ptr [esp + 0x84], ecx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ecx);
L_00450bde:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00450be2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450be7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450be7:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00450be9:  // mov edi, dword ptr [ebx + 8]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00450bec:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_00450bf0:  // add edi, 0x14
    t0 = ladd<32>(edi, 0x14u, f);
    edi = (uint32_t)(t0);
L_00450bf3:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00450bf6:  // lea esi, [esp + 0x5c]
    esi = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00450bfa:  // mov dword ptr [esp + 0x80], ecx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ecx);
L_00450c01:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00450c06:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00450c09:  // mov dword ptr [esp + 0x84], edx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(edx);
L_00450c10:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00450c13:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_00450c1a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00450c1c:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00450c1f:  // call 0x46bc20
    t0 = 0x0046bc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450c24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450c24:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00450c26:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00450c28:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00450c2d:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_00450c34:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00450c3b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450c40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450c40:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00450c42:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00450c44:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00450c49:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450c4eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450c4e:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00450c50:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00450c52:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00450c57:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450c5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450c5c:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_00450c63:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00450c69:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00450c6e:  // mov esi, 0x6776f8
    esi = (uint32_t)(0x6776f8u);
L_00450c73:  // mov edi, 0x9c6994
    edi = (uint32_t)(0x9c6994u);
L_00450c78:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00450c7a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00450c7c:  // mov esi, dword ptr [esp + 0xf0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_00450c83:  // mov byte ptr [0x9c73ea], 1
    M8((uint32_t)(0x9c73eau)) = (uint8_t)(0x1u);
L_00450c8a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00450c8d:  // jne 0x450c94
    if (!f.zf) goto L_00450c94;
L_00450c8f:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_00450c92:  // jne 0x450ca3
    if (!f.zf) goto L_00450ca3;
L_00450c94:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450c99:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00450c9e:  // call 0x452fd0
    t0 = 0x00452fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450ca3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450ca3:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_00450caa:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00450cb0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00450cb2:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00450cb5:  // jne 0x450cbc
    if (!f.zf) goto L_00450cbc;
L_00450cb7:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_00450cba:  // jne 0x450cf1
    if (!f.zf) goto L_00450cf1;
L_00450cbc:  // mov ecx, dword ptr [0x89d810]
    ecx = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_00450cc2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450cc4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450cc9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450ccb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00450ccd:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00450cd2:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00450cd7:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00450cd9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00450cda:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00450cdf:  // push 0x43610000
    t0 = 0x43610000u; esp -= 4; M32(esp) = t0;
L_00450ce4:  // push 0x438e8000
    t0 = 0x438e8000u; esp -= 4; M32(esp) = t0;
L_00450ce9:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450ceeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450cee:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00450cf1:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_00450cf8:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00450cfe:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00450d00:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00450d03:  // jne 0x450d0a
    if (!f.zf) goto L_00450d0a;
L_00450d05:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_00450d08:  // jne 0x450d19
    if (!f.zf) goto L_00450d19;
L_00450d0a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450d0f:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00450d14:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450d19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450d19:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00450d1e:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450d23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450d23:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450d25:  // je 0x450d41
    if (f.zf) goto L_00450d41;
L_00450d27:  // mov edx, dword ptr [0x89d94c]
    edx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_00450d2d:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00450d2f:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_00450d31:  // je 0x450d62
    if (f.zf) goto L_00450d62;
L_00450d33:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00450d38:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450d3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450d3d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450d3f:  // jne 0x450d27
    if (!f.zf) goto L_00450d27;
L_00450d41:  // cmp dword ptr [0x89d94c], 0xe7
    t0 = lsub<32>(M32((uint32_t)(0x89d94cu)), 0xe7u, f);
L_00450d4b:  // jl 0x450d78
    if ((f.sf != f.of)) goto L_00450d78;
L_00450d4d:  // call 0x521650
    t0 = 0x00521650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450d52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450d52:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450d54:  // je 0x450d78
    if (f.zf) goto L_00450d78;
L_00450d56:  // mov esi, dword ptr [esp + 0xec]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_00450d5d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450d5e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00450d60:  // jmp 0x450d82
    goto L_00450d82;
L_00450d62:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450d64:  // je 0x450d41
    if (f.zf) goto L_00450d41;
L_00450d66:  // cmp dword ptr [eax + 0x20], 1
    t0 = lsub<32>(M32((uint32_t)(eax + 0x20u)), 0x1u, f);
L_00450d6a:  // jle 0x450d41
    if ((f.zf || f.sf != f.of)) goto L_00450d41;
L_00450d6c:  // mov esi, dword ptr [esp + 0xec]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_00450d73:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450d74:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00450d76:  // jmp 0x450d82
    goto L_00450d82;
L_00450d78:  // mov esi, dword ptr [esp + 0xec]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_00450d7f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450d80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450d82:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00450d87:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450d8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450d8c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450d8d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00450d8f:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00450d94:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450d99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450d99:  // mov ebp, dword ptr [ebx + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00450d9c:  // mov ecx, 0x89da14
    ecx = (uint32_t)(0x89da14u);
L_00450da1:  // call 0x451a40
    t0 = 0x00451a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450da6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450da6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450da8:  // je 0x450dce
    if (f.zf) goto L_00450dce;
L_00450daa:  // lea edi, [eax + 0x14]
    edi = (uint32_t)((uint32_t)(eax + 0x14u));
L_00450dad:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00450daf:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00450db1:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450db6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450db6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450db8:  // je 0x450dce
    if (f.zf) goto L_00450dce;
L_00450dba:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_00450dbc:  // je 0x450f12
    if (f.zf) goto L_00450f12;
L_00450dc2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00450dc4:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00450dc5:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450dcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450dca:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450dcc:  // jne 0x450dba
    if (!f.zf) goto L_00450dba;
L_00450dce:  // push 0x628ea8
    t0 = 0x628ea8u; esp -= 4; M32(esp) = t0;
L_00450dd3:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450dd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450dd8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00450ddb:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00450ddd:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_00450de1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00450de2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450de3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450de5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00450dea:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450defu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450def:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00450df1:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450df6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450df6:  // fild dword ptr [esp + 0x54]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x54u)));
L_00450dfa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450dfc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450dfe:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00450e03:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450e04:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00450e0a:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00450e0c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450e11:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450e16:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00450e1b:  // fsubr dword ptr [0x5db358]
    ST(0) = ((long double)F32((uint32_t)(0x5db358u))) - (ST(0));
L_00450e21:  // push 0x42c80000
    t0 = 0x42c80000u; esp -= 4; M32(esp) = t0;
L_00450e26:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00450e27:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00450e2c:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_00450e30:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00450e33:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450e35:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450e3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450e3a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00450e3c:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450e41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450e41:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00450e46:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450e4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450e4b:  // fsub dword ptr [ebx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x1cu)));
L_00450e4e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450e50:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_00450e52:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00450e56:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450e5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450e5b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00450e5e:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_00450e62:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00450e64:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00450e65:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450e66:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00450e68:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00450e6d:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450e72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450e72:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00450e74:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450e79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450e79:  // fld dword ptr [0x5db354]
    lpush(x, (long double)F32((uint32_t)(0x5db354u)));
L_00450e7f:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_00450e83:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450e85:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00450e87:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00450e8c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450e8d:  // push 0xffff6f1f
    t0 = 0xffff6f1fu; esp -= 4; M32(esp) = t0;
L_00450e92:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450e97:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00450e9b:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00450e9f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00450ea4:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00450ea9:  // push 0x43520000
    t0 = 0x43520000u; esp -= 4; M32(esp) = t0;
L_00450eae:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00450eaf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00450eb1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00450eb6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450ebbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450ebb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00450ebd:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450ec2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450ec2:  // mov dword ptr [esp + 0x14], 0x43620000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x43620000u);
L_00450eca:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00450ed2:  // mov esi, dword ptr [ebx + 0x10]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00450ed5:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00450eda:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00450ee2:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450ee7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450ee7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450ee9:  // je 0x451031
    if (f.zf) goto L_00451031;
L_00450eef:  // mov ecx, dword ptr [0x89d94c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_00450ef5:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00450ef7:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_00450ef9:  // je 0x450fa8
    if (f.zf) goto L_00450fa8;
L_00450eff:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00450f04:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450f09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450f09:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450f0b:  // jne 0x450eef
    if (!f.zf) goto L_00450eef;
L_00450f0d:  // jmp 0x451031
    goto L_00451031;
L_00450f12:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00450f14:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450f16:  // je 0x450dce
    if (f.zf) goto L_00450dce;
L_00450f1c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00450f1d:  // call 0x451930
    t0 = 0x00451930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450f22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450f22:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00450f25:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450f27:  // je 0x450dce
    if (f.zf) goto L_00450dce;
L_00450f2d:  // mov eax, dword ptr [eax + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xa4u)));
L_00450f33:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00450f34:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_00450f37:  // ja 0x450dce
    if ((!f.cf && !f.zf)) goto L_00450dce;
L_00450f3d:  // jmp dword ptr [eax*4 + 0x451918]
    t0 = M32((uint32_t)(eax * 4u + 0x451918u));
    switch (t0) {
    case 0x00450f44u: goto L_00450f44;
    case 0x00450f58u: goto L_00450f58;
    case 0x00450f6cu: goto L_00450f6c;
    case 0x00450f80u: goto L_00450f80;
    case 0x00450f94u: goto L_00450f94;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00450f44:  // push 0x97d47d6b
    t0 = 0x97d47d6bu; esp -= 4; M32(esp) = t0;
L_00450f49:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00450f4e:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450f53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450f53:  // jmp 0x450ddb
    goto L_00450ddb;
L_00450f58:  // push 0xe3fcbf7c
    t0 = 0xe3fcbf7cu; esp -= 4; M32(esp) = t0;
L_00450f5d:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00450f62:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450f67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450f67:  // jmp 0x450ddb
    goto L_00450ddb;
L_00450f6c:  // push 0x3025018d
    t0 = 0x3025018du; esp -= 4; M32(esp) = t0;
L_00450f71:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00450f76:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450f7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450f7b:  // jmp 0x450ddb
    goto L_00450ddb;
L_00450f80:  // push 0x7c4d439e
    t0 = 0x7c4d439eu; esp -= 4; M32(esp) = t0;
L_00450f85:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00450f8a:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450f8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450f8f:  // jmp 0x450ddb
    goto L_00450ddb;
L_00450f94:  // push 0xc87585af
    t0 = 0xc87585afu; esp -= 4; M32(esp) = t0;
L_00450f99:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00450f9e:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450fa3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450fa3:  // jmp 0x450ddb
    goto L_00450ddb;
L_00450fa8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00450faa:  // je 0x451031
    if (f.zf) goto L_00451031;
L_00450fb0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00450fb1:  // call 0x44eab0
    t0 = 0x0044eab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450fb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450fb6:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00450fb8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00450fbb:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00450fbd:  // je 0x451031
    if (f.zf) goto L_00451031;
L_00450fbf:  // mov ecx, 0x6602a0
    ecx = (uint32_t)(0x6602a0u);
L_00450fc4:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00450fc9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00450fc9:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00450fcb:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00450fcd:  // je 0x451031
    if (f.zf) goto L_00451031;
L_00450fcf:  // mov ecx, dword ptr [edi + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xa8u)));
L_00450fd5:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_00450fd7:  // mov al, byte ptr [ecx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx))) & 0xffu);
L_00450fd9:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_00450fdb:  // cmp al, byte ptr [esi]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi)), f);
L_00450fdd:  // jne 0x450ffb
    if (!f.zf) goto L_00450ffb;
L_00450fdf:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00450fe1:  // je 0x450ff7
    if (f.zf) goto L_00450ff7;
L_00450fe3:  // mov al, byte ptr [ecx + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x1u))) & 0xffu);
L_00450fe6:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_00450fe8:  // cmp al, byte ptr [esi + 1]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00450feb:  // jne 0x450ffb
    if (!f.zf) goto L_00450ffb;
L_00450fed:  // add ecx, 2
    t0 = ladd<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00450ff0:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00450ff3:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00450ff5:  // jne 0x450fd7
    if (!f.zf) goto L_00450fd7;
L_00450ff7:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00450ff9:  // jmp 0x451000
    goto L_00451000;
L_00450ffb:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_00450ffd:  // sbb ecx, -1
    t0 = lsbb<32>(ecx, 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00451000:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00451002:  // je 0x451016
    if (f.zf) goto L_00451016;
L_00451004:  // mov ecx, 0x6602a0
    ecx = (uint32_t)(0x6602a0u);
L_00451009:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045100eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045100e:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00451010:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00451012:  // jne 0x450fcf
    if (!f.zf) goto L_00450fcf;
L_00451014:  // jmp 0x451031
    goto L_00451031;
L_00451016:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00451018:  // je 0x451031
    if (f.zf) goto L_00451031;
L_0045101a:  // mov eax, dword ptr [edi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x60u)));
L_0045101d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045101f:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00451024:  // jne 0x45102a
    if (!f.zf) goto L_0045102a;
L_00451026:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0045102a:  // add eax, dword ptr [edi + 0x4c]
    t0 = ladd<32>(eax, M32((uint32_t)(edi + 0x4cu)), f);
    eax = (uint32_t)(t0);
L_0045102d:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00451031:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00451035:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00451039:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0045103b:  // jge 0x4510b7
    if ((f.sf == f.of)) goto L_004510b7;
L_0045103d:  // mov edx, dword ptr [ebx + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00451040:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00451042:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451043:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00451044:  // call 0x44f530
    t0 = 0x0044f530u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451049u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451049:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045104c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0045104e:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_00451052:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00451057:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00451058:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451059:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0045105b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451060u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451060:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00451062:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451067u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451067:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0045106b:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0045106f:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00451073:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451075:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451077:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451078:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451079:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0045107b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451080:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451085:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0045108a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045108b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045108c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0045108e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00451093:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451098u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451098:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045109a:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045109fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045109f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004510a3:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_004510a9:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004510aa:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_004510ae:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004510b2:  // jmp 0x450ed2
    goto L_00450ed2;
L_004510b7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004510bb:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_004510c1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004510c3:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004510c5:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004510c9:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004510ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004510ce:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004510d1:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004510d5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004510d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004510d8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004510d9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004510db:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004510e0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004510e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004510e5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004510e7:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004510ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004510ec:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004510f0:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004510f4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004510f6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004510f8:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_004510fd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004510fe:  // push 0xffff6f1f
    t0 = 0xffff6f1fu; esp -= 4; M32(esp) = t0;
L_00451103:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451108:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045110d:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00451112:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00451113:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00451114:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00451116:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045111b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451120u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451120:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00451122:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451127u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451127:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0045112b:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_00451131:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00451139:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0045113d:  // mov esi, dword ptr [ebx + 0x10]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00451140:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00451145:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045114au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045114a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045114c:  // je 0x45116c
    if (f.zf) goto L_0045116c;
L_0045114e:  // mov ecx, dword ptr [0x89d94c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_00451154:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00451156:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_00451158:  // je 0x4511f2
    if (f.zf) goto L_004511f2;
L_0045115e:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00451163:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451168u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451168:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045116a:  // jne 0x45114e
    if (!f.zf) goto L_0045114e;
L_0045116c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0045116e:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00451172:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00451174:  // jge 0x45127b
    if ((f.sf == f.of)) goto L_0045127b;
L_0045117a:  // mov ecx, dword ptr [ebx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_0045117d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045117e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045117f:  // call 0x44f830
    t0 = 0x0044f830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451184u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451184:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00451187:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_0045118b:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0045118d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00451192:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00451193:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451194:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00451196:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045119bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045119b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045119d:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004511a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004511a2:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004511a6:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004511aa:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004511ae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004511b0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004511b2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004511b3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004511b4:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004511b6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004511bb:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004511c0:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004511c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004511c6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004511c7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004511c9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004511ce:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004511d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004511d3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004511d5:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004511dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004511da:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004511de:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_004511e4:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004511e5:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_004511e9:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004511ed:  // jmp 0x45113d
    goto L_0045113d;
L_004511f2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004511f4:  // je 0x45116c
    if (f.zf) goto L_0045116c;
L_004511fa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004511fb:  // call 0x44eab0
    t0 = 0x0044eab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451200u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451200:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00451202:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00451205:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00451207:  // je 0x45116c
    if (f.zf) goto L_0045116c;
L_0045120d:  // mov ecx, 0x6602a0
    ecx = (uint32_t)(0x6602a0u);
L_00451212:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451217u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451217:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00451219:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0045121b:  // je 0x45116c
    if (f.zf) goto L_0045116c;
L_00451221:  // mov ecx, dword ptr [edi + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xa8u)));
L_00451227:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_00451229:  // mov al, byte ptr [ecx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx))) & 0xffu);
L_0045122b:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_0045122d:  // cmp al, byte ptr [esi]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi)), f);
L_0045122f:  // jne 0x45124d
    if (!f.zf) goto L_0045124d;
L_00451231:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00451233:  // je 0x451249
    if (f.zf) goto L_00451249;
L_00451235:  // mov al, byte ptr [ecx + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x1u))) & 0xffu);
L_00451238:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_0045123a:  // cmp al, byte ptr [esi + 1]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0045123d:  // jne 0x45124d
    if (!f.zf) goto L_0045124d;
L_0045123f:  // add ecx, 2
    t0 = ladd<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00451242:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00451245:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00451247:  // jne 0x451229
    if (!f.zf) goto L_00451229;
L_00451249:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0045124b:  // jmp 0x451252
    goto L_00451252;
L_0045124d:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0045124f:  // sbb ecx, -1
    t0 = lsbb<32>(ecx, 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00451252:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00451254:  // je 0x45126b
    if (f.zf) goto L_0045126b;
L_00451256:  // mov ecx, 0x6602a0
    ecx = (uint32_t)(0x6602a0u);
L_0045125b:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451260u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451260:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00451262:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00451264:  // jne 0x451221
    if (!f.zf) goto L_00451221;
L_00451266:  // jmp 0x45116c
    goto L_0045116c;
L_0045126b:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0045126d:  // je 0x45116c
    if (f.zf) goto L_0045116c;
L_00451273:  // mov eax, dword ptr [edi + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x5cu)));
L_00451276:  // jmp 0x45116e
    goto L_0045116e;
L_0045127b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00451280:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00451287:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0045128e:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451293u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451293:  // mov eax, dword ptr [0x89d868]
    eax = (uint32_t)(M32((uint32_t)(0x89d868u)));
L_00451298:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0045129a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045129b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004512a0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004512a1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004512a2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004512a4:  // fld dword ptr [0x5db350]
    lpush(x, (long double)F32((uint32_t)(0x5db350u)));
L_004512aa:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_004512ae:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004512b3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004512b8:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004512ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004512bb:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004512c0:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_004512c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004512c6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004512c9:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004512ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004512ce:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004512d1:  // mov ecx, dword ptr [0x89d86c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d86cu)));
L_004512d7:  // fld dword ptr [0x5db34c]
    lpush(x, (long double)F32((uint32_t)(0x5db34cu)));
L_004512dd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004512de:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004512e3:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004512e7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004512e8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004512e9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004512ee:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004512f3:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004512f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004512f6:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004512fb:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_00451300:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451301:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451304:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451309u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451309:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0045130c:  // mov edx, dword ptr [0x89d870]
    edx = (uint32_t)(M32((uint32_t)(0x89d870u)));
L_00451312:  // fld dword ptr [0x5db348]
    lpush(x, (long double)F32((uint32_t)(0x5db348u)));
L_00451318:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451319:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045131e:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00451322:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451323:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451324:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451329:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045132e:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00451330:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00451331:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00451336:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_0045133b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045133c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045133f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451344u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451344:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00451347:  // mov dword ptr [esp + 0x14], 0x436a0000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x436a0000u);
L_0045134f:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_00451353:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_00451357:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_0045135b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0045135d:  // mov eax, dword ptr [ebx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00451360:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00451365:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00451369:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_0045136d:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451372u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451372:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00451374:  // je 0x4513f2
    if (f.zf) goto L_004513f2;
L_00451376:  // mov ecx, dword ptr [0x89d94c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_0045137c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0045137e:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_00451380:  // je 0x451392
    if (f.zf) goto L_00451392;
L_00451382:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00451387:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045138cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045138c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045138e:  // jne 0x451376
    if (!f.zf) goto L_00451376;
L_00451390:  // jmp 0x4513f2
    goto L_004513f2;
L_00451392:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00451394:  // je 0x4513f2
    if (f.zf) goto L_004513f2;
L_00451396:  // mov ecx, 0x89da14
    ecx = (uint32_t)(0x89da14u);
L_0045139b:  // call 0x451a40
    t0 = 0x00451a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004513a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004513a0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004513a2:  // je 0x4513f2
    if (f.zf) goto L_004513f2;
L_004513a4:  // lea ebp, [eax + 0x14]
    ebp = (uint32_t)((uint32_t)(eax + 0x14u));
L_004513a7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004513a9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004513ab:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004513b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004513b0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004513b2:  // je 0x4513f2
    if (f.zf) goto L_004513f2;
L_004513b4:  // cmp esi, dword ptr [esp + 0x28]
    t0 = lsub<32>(esi, M32((uint32_t)(esp + 0x28u)), f);
L_004513b8:  // je 0x4513c8
    if (f.zf) goto L_004513c8;
L_004513ba:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004513bc:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004513bd:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004513c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004513c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004513c4:  // jne 0x4513b4
    if (!f.zf) goto L_004513b4;
L_004513c6:  // jmp 0x4513f2
    goto L_004513f2;
L_004513c8:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004513ca:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004513cc:  // je 0x4513f2
    if (f.zf) goto L_004513f2;
L_004513ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004513cf:  // call 0x451930
    t0 = 0x00451930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004513d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004513d4:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004513d7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004513d9:  // je 0x4513f2
    if (f.zf) goto L_004513f2;
L_004513db:  // mov ecx, dword ptr [eax + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x60u)));
L_004513de:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004513e0:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_004513e5:  // jne 0x4513eb
    if (!f.zf) goto L_004513eb;
L_004513e7:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004513eb:  // add ecx, dword ptr [eax + 0x4c]
    t0 = ladd<32>(ecx, M32((uint32_t)(eax + 0x4cu)), f);
    ecx = (uint32_t)(t0);
L_004513ee:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004513f2:  // cmp edi, dword ptr [esp + 0x10]
    t0 = lsub<32>(edi, M32((uint32_t)(esp + 0x10u)), f);
L_004513f6:  // jge 0x4514eb
    if ((f.sf == f.of)) goto L_004514eb;
L_004513fc:  // mov edx, dword ptr [ebx + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_004513ff:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451401:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451402:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00451403:  // call 0x44f030
    t0 = 0x0044f030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451408u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451408:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0045140a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0045140d:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_00451411:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00451415:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00451419:  // push 0xffff6f4f
    t0 = 0xffff6f4fu; esp -= 4; M32(esp) = t0;
L_0045141e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045141f:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_00451425:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451428:  // fld dword ptr [0x5db344]
    lpush(x, (long double)F32((uint32_t)(0x5db344u)));
L_0045142e:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00451432:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451433:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451434:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451437:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045143cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045143c:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00451440:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00451442:  // add eax, ebp
    t0 = ladd<32>(eax, ebp, f);
    eax = (uint32_t)(t0);
L_00451444:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451445:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00451449:  // mov eax, dword ptr [ebx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_0045144c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045144d:  // call 0x44f030
    t0 = 0x0044f030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451452u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451452:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00451454:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00451457:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0045145b:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0045145f:  // push 0xff6fff4f
    t0 = 0xff6fff4fu; esp -= 4; M32(esp) = t0;
L_00451464:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451465:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_0045146b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045146e:  // fld dword ptr [0x5db340]
    lpush(x, (long double)F32((uint32_t)(0x5db340u)));
L_00451474:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00451478:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451479:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045147a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045147d:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451482u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451482:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00451486:  // mov ecx, dword ptr [ebx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00451489:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0045148b:  // add eax, ebp
    t0 = ladd<32>(eax, ebp, f);
    eax = (uint32_t)(t0);
L_0045148d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045148e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045148f:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00451493:  // call 0x44f030
    t0 = 0x0044f030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451498u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451498:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0045149a:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0045149d:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_004514a1:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004514a5:  // push 0xff4f6fff
    t0 = 0xff4f6fffu; esp -= 4; M32(esp) = t0;
L_004514aa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004514ab:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_004514b1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004514b4:  // fld dword ptr [0x5db33c]
    lpush(x, (long double)F32((uint32_t)(0x5db33cu)));
L_004514ba:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004514be:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004514bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004514c0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004514c3:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004514c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004514c8:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004514cc:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_004514d2:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004514d6:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004514d9:  // add ecx, ebp
    t0 = ladd<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_004514db:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004514dc:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004514e0:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004514e2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004514e6:  // jmp 0x45135d
    goto L_0045135d;
L_004514eb:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004514ef:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_004514f5:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004514f7:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_004514fd:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00451501:  // mov edx, dword ptr [ebx + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00451504:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00451509:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0045150d:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451512u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451512:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00451514:  // je 0x451534
    if (f.zf) goto L_00451534;
L_00451516:  // mov ecx, dword ptr [0x89d94c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_0045151c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0045151e:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_00451520:  // je 0x45162b
    if (f.zf) goto L_0045162b;
L_00451526:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_0045152b:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451530u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451530:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00451532:  // jne 0x451516
    if (!f.zf) goto L_00451516;
L_00451534:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00451536:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00451538:  // jge 0x451693
    if ((f.sf == f.of)) goto L_00451693;
L_0045153e:  // mov edx, dword ptr [ebx + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00451541:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451543:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451544:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00451545:  // call 0x44f300
    t0 = 0x0044f300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045154au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045154a:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0045154c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0045154f:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_00451553:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00451557:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0045155b:  // push 0xffff6f4f
    t0 = 0xffff6f4fu; esp -= 4; M32(esp) = t0;
L_00451560:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451561:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_00451567:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045156a:  // fld dword ptr [0x5db344]
    lpush(x, (long double)F32((uint32_t)(0x5db344u)));
L_00451570:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00451574:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451575:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451576:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451579:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045157eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045157e:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00451582:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00451584:  // add eax, ebp
    t0 = ladd<32>(eax, ebp, f);
    eax = (uint32_t)(t0);
L_00451586:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451587:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0045158b:  // mov eax, dword ptr [ebx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_0045158e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045158f:  // call 0x44f300
    t0 = 0x0044f300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451594u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451594:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00451596:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00451599:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0045159d:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004515a1:  // push 0xff6fff4f
    t0 = 0xff6fff4fu; esp -= 4; M32(esp) = t0;
L_004515a6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004515a7:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_004515ad:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004515b0:  // fld dword ptr [0x5db340]
    lpush(x, (long double)F32((uint32_t)(0x5db340u)));
L_004515b6:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004515ba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004515bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004515bc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004515bf:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004515c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004515c4:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004515c8:  // mov ecx, dword ptr [ebx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_004515cb:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004515cd:  // add eax, ebp
    t0 = ladd<32>(eax, ebp, f);
    eax = (uint32_t)(t0);
L_004515cf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004515d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004515d1:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004515d5:  // call 0x44f300
    t0 = 0x0044f300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004515dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004515da:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004515dc:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_004515df:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_004515e3:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004515e7:  // push 0xff4f6fff
    t0 = 0xff4f6fffu; esp -= 4; M32(esp) = t0;
L_004515ec:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004515ed:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_004515f3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004515f6:  // fld dword ptr [0x5db33c]
    lpush(x, (long double)F32((uint32_t)(0x5db33cu)));
L_004515fc:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00451600:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451601:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00451602:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00451605:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045160au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045160a:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0045160e:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_00451614:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00451618:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0045161b:  // add ecx, ebp
    t0 = ladd<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0045161d:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0045161e:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00451622:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00451626:  // jmp 0x451501
    goto L_00451501;
L_0045162b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045162d:  // je 0x451534
    if (f.zf) goto L_00451534;
L_00451633:  // mov ecx, 0x89da14
    ecx = (uint32_t)(0x89da14u);
L_00451638:  // call 0x451a40
    t0 = 0x00451a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045163du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045163d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045163f:  // je 0x451534
    if (f.zf) goto L_00451534;
L_00451645:  // lea ebp, [eax + 0x14]
    ebp = (uint32_t)((uint32_t)(eax + 0x14u));
L_00451648:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0045164a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0045164c:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451651u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451651:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00451653:  // je 0x451534
    if (f.zf) goto L_00451534;
L_00451659:  // cmp esi, dword ptr [esp + 0x28]
    t0 = lsub<32>(esi, M32((uint32_t)(esp + 0x28u)), f);
L_0045165d:  // je 0x451670
    if (f.zf) goto L_00451670;
L_0045165f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00451661:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00451662:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451667u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451667:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00451669:  // jne 0x451659
    if (!f.zf) goto L_00451659;
L_0045166b:  // jmp 0x451534
    goto L_00451534;
L_00451670:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00451672:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00451674:  // je 0x451534
    if (f.zf) goto L_00451534;
L_0045167a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045167b:  // call 0x451930
    t0 = 0x00451930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451680u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451680:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00451683:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00451685:  // je 0x451534
    if (f.zf) goto L_00451534;
L_0045168b:  // mov eax, dword ptr [eax + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x5cu)));
L_0045168e:  // jmp 0x451536
    goto L_00451536;
L_00451693:  // mov ecx, 0x89da34
    ecx = (uint32_t)(0x89da34u);
L_00451698:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045169du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045169d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045169f:  // je 0x4518d6
    if (f.zf) goto L_004518d6;
L_004516a5:  // mov edx, dword ptr [0x89d94c]
    edx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_004516ab:  // mov ecx, dword ptr [0x89da3c]
    ecx = (uint32_t)(M32((uint32_t)(0x89da3cu)));
L_004516b1:  // cmp edx, dword ptr [eax]
    t0 = lsub<32>(edx, M32((uint32_t)(eax)), f);
L_004516b3:  // je 0x4516d1
    if (f.zf) goto L_004516d1;
L_004516b5:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004516b8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004516ba:  // mov dword ptr [0x89da3c], ecx
    M32((uint32_t)(0x89da3cu)) = (uint32_t)(ecx);
L_004516c0:  // je 0x4516c6
    if (f.zf) goto L_004516c6;
L_004516c2:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004516c4:  // jmp 0x4516c8
    goto L_004516c8;
L_004516c6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004516c8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004516ca:  // jne 0x4516b1
    if (!f.zf) goto L_004516b1;
L_004516cc:  // jmp 0x4518d6
    goto L_004518d6;
L_004516d1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004516d3:  // je 0x4518d6
    if (f.zf) goto L_004518d6;
L_004516d9:  // cmp dword ptr [eax + 0x20], 1
    t0 = lsub<32>(M32((uint32_t)(eax + 0x20u)), 0x1u, f);
L_004516dd:  // jle 0x4518d6
    if ((f.zf || f.sf != f.of)) goto L_004518d6;
L_004516e3:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004516e7:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_004516ed:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_004516ef:  // push 0x43350000
    t0 = 0x43350000u; esp -= 4; M32(esp) = t0;
L_004516f4:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004516f8:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004516fc:  // fsub dword ptr [0x5d8610]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8610u)));
L_00451702:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00451706:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00451707:  // push 0x42ca0000
    t0 = 0x42ca0000u; esp -= 4; M32(esp) = t0;
L_0045170c:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00451710:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00451714:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00451715:  // call 0x469390
    t0 = 0x00469390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045171au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045171a:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_00451720:  // fistp qword ptr [esp + 0x3c]
    M64((uint32_t)(esp + 0x3cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00451724:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00451728:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0045172b:  // and edx, 0x8000003f
    t0 = llog<32>(edx & 0x8000003fu, f);
    edx = (uint32_t)(t0);
L_00451731:  // jns 0x451738
    if (!f.sf) goto L_00451738;
L_00451733:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_00451734:  // or edx, 0xffffffc0
    t0 = llog<32>(edx | 0xffffffc0u, f);
    edx = (uint32_t)(t0);
L_00451737:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00451738:  // cmp edx, 0x32
    t0 = lsub<32>(edx, 0x32u, f);
L_0045173b:  // jl 0x451751
    if ((f.sf != f.of)) goto L_00451751;
L_0045173d:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_00451740:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00451746:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00451748:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045174b:  // jne 0x4517f0
    if (!f.zf) goto L_004517f0;
L_00451751:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_00451756:  // push 0xbfc90fdb
    t0 = 0xbfc90fdbu; esp -= 4; M32(esp) = t0;
L_0045175b:  // mov esi, dword ptr [esp + 0x44]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0045175f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451764:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451766:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00451768:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045176d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451772:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00451774:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00451775:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0045177a:  // push 0x430d0000
    t0 = 0x430d0000u; esp -= 4; M32(esp) = t0;
L_0045177f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451780:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00451785u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00451785:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_00451788:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0045178e:  // push 0xbfc90fdb
    t0 = 0xbfc90fdbu; esp -= 4; M32(esp) = t0;
L_00451793:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451798:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045179a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045179c:  // fistp qword ptr [esp + 0x64]
    M64((uint32_t)(esp + 0x64u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004517a0:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004517a4:  // mov edx, dword ptr [0x89d840]
    edx = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_004517aa:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004517ac:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004517af:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004517b1:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004517b4:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004517ba:  // fsub dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x14u)));
L_004517bd:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004517c3:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004517c7:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004517cb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004517cc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004517cd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004517cf:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004517d1:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_004517d7:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_004517d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004517da:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004517db:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004517e0:  // push 0x430d0000
    t0 = 0x430d0000u; esp -= 4; M32(esp) = t0;
L_004517e5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004517e6:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004517ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004517eb:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_004517ee:  // jmp 0x4517f4
    goto L_004517f4;
L_004517f0:  // mov esi, dword ptr [esp + 0x40]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004517f4:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_004517fa:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004517fe:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00451802:  // and eax, 0x8000003f
    t0 = llog<32>(eax & 0x8000003fu, f);
    eax = (uint32_t)(t0);
L_00451807:  // jns 0x45180e
    if (!f.sf) goto L_0045180e;
L_00451809:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0045180a:  // or eax, 0xffffffc0
    t0 = llog<32>(eax | 0xffffffc0u, f);
    eax = (uint32_t)(t0);
L_0045180d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0045180e:  // cmp eax, 0x32
    t0 = lsub<32>(eax, 0x32u, f);
L_00451811:  // jl 0x451827
    if ((f.sf != f.of)) goto L_00451827;
L_00451813:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_00451816:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0045181c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045181e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00451821:  // jne 0x4518d6
    if (!f.zf) goto L_004518d6;
L_00451827:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_00451829:  // push 0x43d40000
    t0 = 0x43d40000u; esp -= 4; M32(esp) = t0;
L_0045182e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045182f:  // push 0x43ac0000
    t0 = 0x43ac0000u; esp -= 4; M32(esp) = t0;
L_00451834:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00451835:  // call 0x469390
    t0 = 0x00469390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045183au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045183a:  // mov ecx, dword ptr [0x89d840]
    ecx = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_00451840:  // push 0x3fc90fdb
    t0 = 0x3fc90fdbu; esp -= 4; M32(esp) = t0;
L_00451845:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045184a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045184c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0045184e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451853:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00451858:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0045185a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045185b:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00451860:  // push 0x43c00000
    t0 = 0x43c00000u; esp -= 4; M32(esp) = t0;
L_00451865:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00451866:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045186bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045186b:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_0045186e:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00451874:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00451877:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0045187b:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0045187f:  // push 0x3fc90fdb
    t0 = 0x3fc90fdbu; esp -= 4; M32(esp) = t0;
L_00451884:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00451886:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045188b:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0045188e:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00451890:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00451892:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00451895:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0045189b:  // fsub dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x18u)));
L_0045189e:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004518a0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004518a2:  // not edx
    edx = (uint32_t)(~edx);
L_004518a4:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004518aa:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_004518b0:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_004518b2:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_004518b7:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004518bb:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004518bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004518c0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004518c1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004518c2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004518c3:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004518c8:  // push 0x43c00000
    t0 = 0x43c00000u; esp -= 4; M32(esp) = t0;
L_004518cd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004518ce:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004518d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004518d3:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004518d6:  // mov eax, dword ptr [esp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_004518dd:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004518e0:  // je 0x4518ed
    if (f.zf) goto L_004518ed;
L_004518e2:  // mov ecx, dword ptr [esp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004518e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004518ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004518eb:  // jmp 0x4518f4
    goto L_004518f4;
L_004518ed:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004518ef:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004518f4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004518f6:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004518f8:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004518fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004518fd:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00451900:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00451905:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00451906:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045190bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045190b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0045190c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0045190d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0045190e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0045190f:  // add esp, 0xd8
    t0 = ladd<32>(esp, 0xd8u, f);
    esp = (uint32_t)(t0);
L_00451915:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004505b0, 004505b0)
