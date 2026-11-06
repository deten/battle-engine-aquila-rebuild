// lifted from 00483530 (FUN_00483530, 3570 bytes, 966 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00483530(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00483530;
L_00483530:  // sub esp, 0x334
    t0 = lsub<32>(esp, 0x334u, f);
    esp = (uint32_t)(t0);
L_00483536:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00483537:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00483538:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0048353a:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0048353c:  // mov ecx, 0x3f800000
    ecx = (uint32_t)(0x3f800000u);
L_00483541:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483542:  // mov eax, dword ptr [ebp + 0x94]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x94u)));
L_00483548:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00483549:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0048354b:  // mov dword ptr [esp + 0x2c], ebp
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebp);
L_0048354f:  // mov dword ptr [esp + 0x28], ebx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebx);
L_00483553:  // je 0x483570
    if (f.zf) goto L_00483570;
L_00483555:  // mov eax, 0x20c
    eax = (uint32_t)(0x20cu);
L_0048355a:  // cmp dword ptr [eax + 0x855090], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x855090u)), ebx, f);
L_00483560:  // jne 0x4835f0
    if (!f.zf) goto L_004835f0;
L_00483566:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00483569:  // cmp eax, 0x21c
    t0 = lsub<32>(eax, 0x21cu, f);
L_0048356e:  // jl 0x48355a
    if ((f.sf != f.of)) goto L_0048355a;
L_00483570:  // fld dword ptr [ebp + 0x94]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x94u)));
L_00483576:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0048357c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048357e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00483581:  // jne 0x48364c
    if (!f.zf) goto L_0048364c;
L_00483587:  // mov eax, 0x20c
    eax = (uint32_t)(0x20cu);
L_0048358c:  // cmp dword ptr [eax + 0x855090], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x855090u)), ebx, f);
L_00483592:  // jne 0x48364c
    if (!f.zf) goto L_0048364c;
L_00483598:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0048359b:  // cmp eax, 0x21c
    t0 = lsub<32>(eax, 0x21cu, f);
L_004835a0:  // jl 0x48358c
    if ((f.sf != f.of)) goto L_0048358c;
L_004835a2:  // fld dword ptr [ebp + 0x98]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x98u)));
L_004835a8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004835ae:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004835b0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004835b3:  // jne 0x48361e
    if (!f.zf) goto L_0048361e;
L_004835b5:  // fld dword ptr [ebp + 0x98]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x98u)));
L_004835bb:  // fchs 
    ST(0) = -ST(0);
L_004835bd:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_004835c3:  // fadd dword ptr [ebp + 0x98]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x98u)));
L_004835c9:  // fst dword ptr [ebp + 0x98]
    F32((uint32_t)(ebp + 0x98u)) = lf32(ST(0));
L_004835cf:  // fchs 
    ST(0) = -ST(0);
L_004835d1:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004835d3:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_004835d9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004835db:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004835de:  // je 0x4835e6
    if (f.zf) goto L_004835e6;
L_004835e0:  // mov dword ptr [ebp + 0x98], ebx
    M32((uint32_t)(ebp + 0x98u)) = (uint32_t)(ebx);
L_004835e6:  // mov dword ptr [esp + 0x28], 1
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x1u);
L_004835ee:  // jmp 0x48364c
    goto L_0048364c;
L_004835f0:  // fld dword ptr [ebp + 0x94]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x94u)));
L_004835f6:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004835fc:  // fst dword ptr [ebp + 0x94]
    F32((uint32_t)(ebp + 0x94u)) = lf32(ST(0));
L_00483602:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00483608:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048360a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048360d:  // jne 0x48370d
    if (!f.zf) goto L_0048370d;
L_00483613:  // mov dword ptr [ebp + 0x94], ecx
    M32((uint32_t)(ebp + 0x94u)) = (uint32_t)(ecx);
L_00483619:  // jmp 0x48370d
    goto L_0048370d;
L_0048361e:  // fld dword ptr [ebp + 0x94]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x94u)));
L_00483624:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_0048362a:  // fst dword ptr [ebp + 0x94]
    F32((uint32_t)(ebp + 0x94u)) = lf32(ST(0));
L_00483630:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00483636:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483638:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048363b:  // je 0x48370d
    if (f.zf) goto L_0048370d;
L_00483641:  // mov dword ptr [ebp + 0x94], ebx
    M32((uint32_t)(ebp + 0x94u)) = (uint32_t)(ebx);
L_00483647:  // jmp 0x48370d
    goto L_0048370d;
L_0048364c:  // lea edi, [ebp + 0x68]
    edi = (uint32_t)((uint32_t)(ebp + 0x68u));
L_0048364f:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00483651:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00483653:  // mov ecx, 0x20c
    ecx = (uint32_t)(0x20cu);
L_00483658:  // cmp dword ptr [ecx + 0x855090], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x855090u)), ebx, f);
L_0048365e:  // jne 0x48366f
    if (!f.zf) goto L_0048366f;
L_00483660:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00483662:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00483668:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048366a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0048366d:  // je 0x4836af
    if (f.zf) goto L_004836af;
L_0048366f:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_00483672:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00483673:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_00483676:  // cmp ecx, 0x21c
    t0 = lsub<32>(ecx, 0x21cu, f);
L_0048367c:  // jl 0x483658
    if ((f.sf != f.of)) goto L_00483658;
L_0048367e:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00483680:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00483682:  // mov ecx, 0x20c
    ecx = (uint32_t)(0x20cu);
L_00483687:  // cmp dword ptr [ecx + 0x855090], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x855090u)), ebx, f);
L_0048368d:  // je 0x48369e
    if (f.zf) goto L_0048369e;
L_0048368f:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00483691:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00483697:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483699:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048369c:  // jne 0x4836d7
    if (!f.zf) goto L_004836d7;
L_0048369e:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004836a1:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004836a2:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_004836a5:  // cmp ecx, 0x21c
    t0 = lsub<32>(ecx, 0x21cu, f);
L_004836ab:  // jl 0x483687
    if ((f.sf != f.of)) goto L_00483687;
L_004836ad:  // jmp 0x48370d
    goto L_0048370d;
L_004836af:  // fld dword ptr [0x8a9e20]
    lpush(x, (long double)F32((uint32_t)(0x8a9e20u)));
L_004836b5:  // lea eax, [edx + edx*2]
    eax = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004836b8:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_004836be:  // lea ecx, [ebp + eax*4 + 0x68]
    ecx = (uint32_t)((uint32_t)(ebp + eax * 4u + 0x68u));
L_004836c2:  // fsubr dword ptr [ecx]
    ST(0) = ((long double)F32((uint32_t)(ecx))) - (ST(0));
L_004836c4:  // fst dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
L_004836c6:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004836cc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004836ce:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004836d1:  // je 0x48370d
    if (f.zf) goto L_0048370d;
L_004836d3:  // mov dword ptr [ecx], ebx
    M32((uint32_t)(ecx)) = (uint32_t)(ebx);
L_004836d5:  // jmp 0x48370d
    goto L_0048370d;
L_004836d7:  // fld dword ptr [0x8a9e20]
    lpush(x, (long double)F32((uint32_t)(0x8a9e20u)));
L_004836dd:  // lea ecx, [edx + edx*2]
    ecx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004836e0:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_004836e6:  // lea ecx, [ebp + ecx*4 + 0x68]
    ecx = (uint32_t)((uint32_t)(ebp + ecx * 4u + 0x68u));
L_004836ea:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_004836ec:  // fst dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
L_004836ee:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004836f4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004836f6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004836f9:  // jne 0x48370d
    if (!f.zf) goto L_0048370d;
L_004836fb:  // lea edx, [edx + edx*2 + 0x1b]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u + 0x1bu));
L_004836ff:  // mov dword ptr [ecx], 0x3f800000
    M32((uint32_t)(ecx)) = (uint32_t)(0x3f800000u);
L_00483705:  // mov dword ptr [ebp + edx*4], 0xbf800000
    M32((uint32_t)(ebp + edx * 4u)) = (uint32_t)(0xbf800000u);
L_0048370d:  // fld dword ptr [ebp + 0x94]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x94u)));
L_00483713:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00483719:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048371b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0048371e:  // jne 0x484309
    if (!f.zf) goto L_00484309;
L_00483724:  // fld dword ptr [ebp + 0x94]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x94u)));
L_0048372a:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_0048372e:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00483734:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483736:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00483739:  // je 0x48376c
    if (f.zf) goto L_0048376c;
L_0048373b:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0048373f:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483744:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483745:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00483746:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00483747:  // push 0x42200000
    t0 = 0x42200000u; esp -= 4; M32(esp) = t0;
L_0048374c:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483751u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483751:  // sub eax, 0x5a
    t0 = lsub<32>(eax, 0x5au, f);
    eax = (uint32_t)(t0);
L_00483754:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483755:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00483759:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0048375b:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_0048375f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00483762:  // call 0x482210
    t0 = 0x00482210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483767u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483767:  // jmp 0x484309
    goto L_00484309;
L_0048376c:  // mov dword ptr [esp + 0x30], 0x422c0000
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x422c0000u);
L_00483774:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0048377c:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00483784:  // lea edi, [ebp + 0x68]
    edi = (uint32_t)((uint32_t)(ebp + 0x68u));
L_00483787:  // mov esi, 0x22c
    esi = (uint32_t)(0x22cu);
L_0048378c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048378e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483793:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483798u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483798:  // mov ecx, dword ptr [eax + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x54u)));
L_0048379b:  // mov eax, dword ptr [esi + 0x855070]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x855070u)));
L_004837a1:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004837a5:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004837a7:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004837ab:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_004837ad:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004837b1:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004837b5:  // je 0x4837ed
    if (f.zf) goto L_004837ed;
L_004837b7:  // mov eax, dword ptr [esi + 0x855090]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x855090u)));
L_004837bd:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004837c1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004837c2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004837c3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004837c5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004837ca:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004837cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004837cf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004837d1:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004837d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004837d6:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_004837da:  // fcom dword ptr [esp + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x24u)));
L_004837de:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004837e0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004837e3:  // jne 0x4837eb
    if (!f.zf) goto L_004837eb;
L_004837e5:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004837e9:  // jmp 0x4837ed
    goto L_004837ed;
L_004837eb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004837ed:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004837f0:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_004837f3:  // cmp esi, 0x23c
    t0 = lsub<32>(esi, 0x23cu, f);
L_004837f9:  // jl 0x48378c
    if ((f.sf != f.of)) goto L_0048378c;
L_004837fb:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004837ff:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00483805:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483807:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0048380a:  // jne 0x483878
    if (!f.zf) goto L_00483878;
L_0048380c:  // cmp dword ptr [esp + 0x28], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x28u)), ebx, f);
L_00483810:  // jne 0x483878
    if (!f.zf) goto L_00483878;
L_00483812:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483817:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048381cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048381c:  // mov esi, 0x4b
    esi = (uint32_t)(0x4bu);
L_00483821:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483826:  // sub esi, eax
    t0 = lsub<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_00483828:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048382du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048382d:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0048382f:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_00483833:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00483837:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_0048383b:  // fsub dword ptr [0x5d85d8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d8u)));
L_00483841:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00483843:  // fsub dword ptr [ebp + 0x98]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x98u)));
L_00483849:  // fmul dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb4u)));
L_0048384f:  // fadd dword ptr [ebp + 0x98]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x98u)));
L_00483855:  // fst dword ptr [ebp + 0x98]
    F32((uint32_t)(ebp + 0x98u)) = lf32(ST(0));
L_0048385b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0048385d:  // fsubrp st(1)
    ST(1) = (ST(0)) - (ST(1));
    lpop(x);
L_0048385f:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00483861:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_00483867:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483869:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048386c:  // je 0x483876
    if (f.zf) goto L_00483876;
L_0048386e:  // fstp dword ptr [ebp + 0x98]
    F32((uint32_t)(ebp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00483874:  // jmp 0x483878
    goto L_00483878;
L_00483876:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00483878:  // mov eax, dword ptr [ebp + 0x98]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_0048387e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483883:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00483887:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048388cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048388c:  // sub eax, 0x5a
    t0 = lsub<32>(eax, 0x5au, f);
    eax = (uint32_t)(t0);
L_0048388f:  // mov ecx, dword ptr [ebp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x94u)));
L_00483895:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00483899:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0048389d:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004838a1:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004838a5:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004838ab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004838ac:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004838ae:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004838b2:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004838b6:  // fadd dword ptr [0x5d85d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d8u)));
L_004838bc:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004838c0:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004838c4:  // fmul dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb8u)));
L_004838ca:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004838ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004838cf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004838d0:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_004838d6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004838d7:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004838db:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004838de:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004838df:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004838e1:  // call 0x482210
    t0 = 0x00482210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004838e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004838e6:  // fld dword ptr [0x8a9e20]
    lpush(x, (long double)F32((uint32_t)(0x8a9e20u)));
L_004838ec:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_004838f2:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004838f8:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004838fa:  // je 0x483927
    if (f.zf) goto L_00483927;
L_004838fc:  // fadd dword ptr [ebp + 0xac]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xacu)));
L_00483902:  // fst dword ptr [ebp + 0xac]
    F32((uint32_t)(ebp + 0xacu)) = lf32(ST(0));
L_00483908:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0048390e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483910:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00483913:  // jne 0x483954
    if (!f.zf) goto L_00483954;
L_00483915:  // mov dword ptr [ebp + 0xac], 0x3f800000
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(0x3f800000u);
L_0048391f:  // mov dword ptr [ebp + 0xb0], ebx
    M32((uint32_t)(ebp + 0xb0u)) = (uint32_t)(ebx);
L_00483925:  // jmp 0x483954
    goto L_00483954;
L_00483927:  // fsubr dword ptr [ebp + 0xac]
    ST(0) = ((long double)F32((uint32_t)(ebp + 0xacu))) - (ST(0));
L_0048392d:  // fst dword ptr [ebp + 0xac]
    F32((uint32_t)(ebp + 0xacu)) = lf32(ST(0));
L_00483933:  // fcomp dword ptr [0x5d8c40]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c40u)));
    lpop(x);
L_00483939:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048393b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048393e:  // je 0x483954
    if (f.zf) goto L_00483954;
L_00483940:  // mov dword ptr [ebp + 0xac], 0x3ecccccd
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(0x3ecccccdu);
L_0048394a:  // mov dword ptr [ebp + 0xb0], 1
    M32((uint32_t)(ebp + 0xb0u)) = (uint32_t)(0x1u);
L_00483954:  // lea edi, [ebp + 0x64]
    edi = (uint32_t)((uint32_t)(ebp + 0x64u));
L_00483957:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00483959:  // mov dword ptr [esp + 0x28], edi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edi);
L_0048395d:  // mov ebx, 0x24c
    ebx = (uint32_t)(0x24cu);
L_00483962:  // cmp dword ptr [edi + 4], 0x3f800000
    t0 = lsub<32>(M32((uint32_t)(edi + 0x4u)), 0x3f800000u, f);
L_00483969:  // jne 0x4842d0
    if (!f.zf) goto L_004842d0;
L_0048396f:  // mov eax, dword ptr [ebx + 0x855050]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x855050u)));
L_00483975:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00483977:  // je 0x4842d0
    if (f.zf) goto L_004842d0;
L_0048397d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048397e:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483983:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483988u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483988:  // fcomp dword ptr [edi + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0x8u)));
    lpop(x);
L_0048398b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048398d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00483990:  // jne 0x4839a8
    if (!f.zf) goto L_004839a8;
L_00483992:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483993:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483998:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048399du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048399d:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004839a0:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004839a6:  // mov dword ptr [edi], edx
    M32((uint32_t)(edi)) = (uint32_t)(edx);
L_004839a8:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004839ae:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004839b0:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004839b4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004839ba:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004839bc:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004839bf:  // je 0x4839cb
    if (f.zf) goto L_004839cb;
L_004839c1:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004839c9:  // jmp 0x4839e4
    goto L_004839e4;
L_004839cb:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004839cf:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004839d5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004839d7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004839da:  // jne 0x4839e4
    if (!f.zf) goto L_004839e4;
L_004839dc:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_004839e4:  // cmp dword ptr [ebx + 0x855050], 3
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x855050u)), 0x3u, f);
L_004839eb:  // jne 0x4839f5
    if (!f.zf) goto L_004839f5;
L_004839ed:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_004839f5:  // mov eax, dword ptr [ebx + 0x855070]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x855070u)));
L_004839fb:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004839ff:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483a00:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483a01:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00483a03:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483a08:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483a0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483a0d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00483a0f:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483a14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483a14:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_00483a18:  // fsub dword ptr [0x5d85d8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d8u)));
L_00483a1e:  // fcomp dword ptr [ebp + 0x98]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x98u)));
    lpop(x);
L_00483a24:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483a26:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00483a29:  // je 0x4842d0
    if (f.zf) goto L_004842d0;
L_00483a2f:  // mov eax, dword ptr [ebx + 0x855050]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x855050u)));
L_00483a35:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_00483a3d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00483a3e:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_00483a41:  // ja 0x483a70
    if ((!f.cf && !f.zf)) goto L_00483a70;
L_00483a43:  // jmp dword ptr [eax*4 + 0x484324]
    t0 = M32((uint32_t)(eax * 4u + 0x484324u));
    switch (t0) {
    case 0x00483a4au: goto L_00483a4a;
    case 0x00483be2u: goto L_00483be2;
    case 0x00483c05u: goto L_00483c05;
    case 0x00483cbdu: goto L_00483cbd;
    case 0x00483db9u: goto L_00483db9;
    case 0x00483e64u: goto L_00483e64;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00483a4a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483a4b:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483a50:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483a55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483a55:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483a59:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483a5d:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_00483a61:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483a62:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_00483a67:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483a68:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483a6du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483a6d:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00483a70:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00483a76:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_00483a7a:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00483a80:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00483a84:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483a88:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00483a8e:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483a92:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483a96:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483a9a:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00483a9d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483aa1:  // fmul dword ptr [0x5d964c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d964cu)));
L_00483aa7:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483aab:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483aaf:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483ab3:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00483ab7:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00483ab9:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00483abc:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483ac0:  // fmul dword ptr [0x5dbb64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb64u)));
L_00483ac6:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483aca:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483ace:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483ad2:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00483ad4:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00483ad8:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00483adb:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483adf:  // fmul dword ptr [0x5db4e4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4e4u)));
L_00483ae5:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483ae9:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483aed:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483af1:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00483af3:  // mov ecx, dword ptr [ebx + 0x855070]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x855070u)));
L_00483af9:  // mov ebp, dword ptr [esp + 0x30]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00483afd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00483aff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00483b01:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483b06:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483b07:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483b08:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483b0d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00483b12:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00483b17:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00483b18:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483b1d:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483b22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483b22:  // sub eax, 0xa5
    t0 = lsub<32>(eax, 0xa5u, f);
    eax = (uint32_t)(t0);
L_00483b27:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483b28:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00483b2c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483b31:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_00483b35:  // fild dword ptr [esp + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x60u)));
L_00483b39:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00483b3b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00483b3e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00483b40:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483b45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483b45:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00483b47:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483b4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483b4c:  // mov eax, dword ptr [ebx + 0x855050]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x855050u)));
L_00483b52:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00483b55:  // je 0x484042
    if (f.zf) goto L_00484042;
L_00483b5b:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_00483b5e:  // je 0x484042
    if (f.zf) goto L_00484042;
L_00483b64:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00483b68:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00483b6a:  // je 0x483fb0
    if (f.zf) goto L_00483fb0;
L_00483b70:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00483b74:  // fld dword ptr [edx + 0xac]
    lpush(x, (long double)F32((uint32_t)(edx + 0xacu)));
L_00483b7a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00483b80:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00483b82:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00483b88:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00483b8a:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00483b90:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00483b92:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483b96:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483b9a:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00483b9d:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00483b9f:  // fmul dword ptr [0x5dbb64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb64u)));
L_00483ba5:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00483ba7:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483bab:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483baf:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_00483bb1:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00483bb4:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00483bb6:  // fmul dword ptr [0x5d964c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d964cu)));
L_00483bbc:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00483bbe:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483bc2:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483bc6:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00483bc8:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00483bcb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00483bcd:  // fmul dword ptr [0x5db5dc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db5dcu)));
L_00483bd3:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483bd7:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483bdb:  // sub edi, edx
    t0 = lsub<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_00483bdd:  // jmp 0x483fda
    goto L_00483fda;
L_00483be2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483be3:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483be8:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483bedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483bed:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483bf1:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483bf5:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00483bf9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483bfa:  // push 0x62d348
    t0 = 0x62d348u; esp -= 4; M32(esp) = t0;
L_00483bff:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483c00:  // jmp 0x483a68
    goto L_00483a68;
L_00483c05:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483c06:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483c0b:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483c10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483c10:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483c14:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483c18:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_00483c1d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483c1e:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483c20:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483c25:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483c26:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483c27:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483c2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483c2c:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483c30:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00483c34:  // mov eax, 0x66666667
    eax = (uint32_t)(0x66666667u);
L_00483c39:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00483c3b:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00483c3d:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_00483c42:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00483c45:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00483c47:  // shr edx, 0x1f
    t0 = lshr<32>(edx, 0x1fu, f);
    edx = (uint32_t)(t0);
L_00483c4a:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00483c4c:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483c4d:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483c4f:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483c54:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483c55:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483c56:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483c5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483c5b:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483c5f:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00483c63:  // mov eax, 0x88888889
    eax = (uint32_t)(0x88888889u);
L_00483c68:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00483c6a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00483c6c:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00483c6e:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_00483c73:  // sar eax, 5
    t0 = lsar<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_00483c76:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00483c78:  // shr edx, 0x1f
    t0 = lshr<32>(edx, 0x1fu, f);
    edx = (uint32_t)(t0);
L_00483c7b:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00483c7d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483c7e:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483c80:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483c85:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483c86:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483c87:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483c8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483c8c:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483c90:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00483c94:  // mov eax, 0x1b4e81b5
    eax = (uint32_t)(0x1b4e81b5u);
L_00483c99:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00483c9b:  // sar edx, 6
    t0 = lsar<32>(edx, 0x6u, f);
    edx = (uint32_t)(t0);
L_00483c9e:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00483ca0:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00483ca4:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00483ca7:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00483ca9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483caa:  // push 0x62d33c
    t0 = 0x62d33cu; esp -= 4; M32(esp) = t0;
L_00483caf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483cb0:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483cb5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483cb5:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00483cb8:  // jmp 0x483a70
    goto L_00483a70;
L_00483cbd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483cbe:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483cc3:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483cc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483cc8:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_00483cce:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_00483cd3:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483cd7:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483cdb:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483cdc:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483cde:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483ce3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483ce4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483ce5:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483ceau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483cea:  // fmul dword ptr [0x5d85cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ccu)));
L_00483cf0:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_00483cf5:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483cf9:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00483cfd:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483cfe:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483d00:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483d05:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483d06:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483d07:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483d0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483d0c:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483d10:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00483d14:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_00483d19:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483d1a:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483d1c:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483d21:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483d22:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483d23:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483d28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483d28:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483d2c:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00483d30:  // mov eax, 0x66666667
    eax = (uint32_t)(0x66666667u);
L_00483d35:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00483d37:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00483d39:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_00483d3e:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00483d41:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00483d43:  // shr edx, 0x1f
    t0 = lshr<32>(edx, 0x1fu, f);
    edx = (uint32_t)(t0);
L_00483d46:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00483d48:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483d49:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483d4b:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483d50:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483d51:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483d52:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483d57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483d57:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483d5b:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00483d5f:  // mov eax, 0x88888889
    eax = (uint32_t)(0x88888889u);
L_00483d64:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00483d66:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00483d68:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00483d6a:  // mov ecx, 0xa
    ecx = (uint32_t)(0xau);
L_00483d6f:  // sar eax, 5
    t0 = lsar<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_00483d72:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00483d74:  // shr edx, 0x1f
    t0 = lshr<32>(edx, 0x1fu, f);
    edx = (uint32_t)(t0);
L_00483d77:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00483d79:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00483d7a:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00483d7c:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483d81:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483d82:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483d83:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483d88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483d88:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483d8c:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00483d90:  // mov eax, 0x1b4e81b5
    eax = (uint32_t)(0x1b4e81b5u);
L_00483d95:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00483d97:  // sar edx, 6
    t0 = lsar<32>(edx, 0x6u, f);
    edx = (uint32_t)(t0);
L_00483d9a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00483d9c:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_00483da0:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00483da3:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00483da5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483da6:  // push 0x62d32c
    t0 = 0x62d32cu; esp -= 4; M32(esp) = t0;
L_00483dab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483dac:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483db1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483db1:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00483db4:  // jmp 0x483a70
    goto L_00483a70;
L_00483db9:  // fld dword ptr [ebx + 0x855090]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x855090u)));
L_00483dbf:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483dc3:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483dc7:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483dcc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483dcd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483dce:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483dd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483dd3:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_00483dd7:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483ddb:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00483ddf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483de0:  // push 0x62d324
    t0 = 0x62d324u; esp -= 4; M32(esp) = t0;
L_00483de5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483de6:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483debu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483deb:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00483dee:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483df3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483df4:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483df9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483df9:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483dfd:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483e01:  // lea eax, [esp + 0x244]
    eax = (uint32_t)((uint32_t)(esp + 0x244u));
L_00483e08:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483e09:  // push 0x62d320
    t0 = 0x62d320u; esp -= 4; M32(esp) = t0;
L_00483e0e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483e0f:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483e14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483e14:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00483e17:  // lea edx, [esp + 0x144]
    edx = (uint32_t)((uint32_t)(esp + 0x144u));
L_00483e1e:  // fld dword ptr [ebx + 0x855090]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x855090u)));
L_00483e24:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483e28:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483e2c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483e2d:  // push 0x62d318
    t0 = 0x62d318u; esp -= 4; M32(esp) = t0;
L_00483e32:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483e33:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483e38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483e38:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00483e3b:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483e40:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483e41:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483e46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483e46:  // fsub dword ptr [ebx + 0x855090]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x855090u)));
L_00483e4c:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00483e4e:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00483e54:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483e56:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00483e59:  // je 0x483a70
    if (f.zf) goto L_00483a70;
L_00483e5f:  // jmp 0x483f18
    goto L_00483f18;
L_00483e64:  // fld dword ptr [ebx + 0x855090]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x855090u)));
L_00483e6a:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483e6e:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483e72:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483e77:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483e78:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483e79:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483e7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483e7e:  // lea edx, [esp + 0x48]
    edx = (uint32_t)((uint32_t)(esp + 0x48u));
L_00483e82:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483e86:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00483e8a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483e8b:  // push 0x62d324
    t0 = 0x62d324u; esp -= 4; M32(esp) = t0;
L_00483e90:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483e91:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483e96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483e96:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00483e99:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483e9e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483e9f:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483ea4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483ea4:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483ea8:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483eac:  // lea ecx, [esp + 0x244]
    ecx = (uint32_t)((uint32_t)(esp + 0x244u));
L_00483eb3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483eb4:  // push 0x62d320
    t0 = 0x62d320u; esp -= 4; M32(esp) = t0;
L_00483eb9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00483eba:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483ebfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483ebf:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00483ec2:  // lea eax, [esp + 0x144]
    eax = (uint32_t)((uint32_t)(esp + 0x144u));
L_00483ec9:  // fld dword ptr [ebx + 0x855090]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x855090u)));
L_00483ecf:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483ed3:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483ed7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483ed8:  // push 0x62d318
    t0 = 0x62d318u; esp -= 4; M32(esp) = t0;
L_00483edd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483ede:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483ee3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483ee3:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00483ee6:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00483eeb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00483eec:  // call 0x50d760
    t0 = 0x0050d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483ef1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483ef1:  // mov ecx, dword ptr [ebx + 0x855090]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x855090u)));
L_00483ef7:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00483efb:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_00483eff:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00483f01:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00483f05:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_00483f0b:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_00483f0d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00483f0f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00483f12:  // jne 0x483a70
    if (!f.zf) goto L_00483a70;
L_00483f18:  // mov edx, dword ptr [ebp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_00483f1e:  // mov dword ptr [esp + 0x34], 1
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x1u);
L_00483f26:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00483f2c:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00483f30:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_00483f34:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00483f3a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00483f3e:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483f42:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00483f48:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483f4c:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483f50:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483f54:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00483f57:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483f5b:  // fmul dword ptr [0x5d964c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d964cu)));
L_00483f61:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483f65:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483f69:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483f6d:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_00483f71:  // add ecx, edi
    t0 = ladd<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_00483f73:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00483f76:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483f7a:  // fmul dword ptr [0x5dbb64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb64u)));
L_00483f80:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483f84:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483f88:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483f8c:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00483f8e:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00483f92:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00483f95:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00483f97:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483f9b:  // fmul dword ptr [0x5dbe50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe50u)));
L_00483fa1:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483fa5:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483fa9:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00483fab:  // jmp 0x483af3
    goto L_00483af3;
L_00483fb0:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00483fb4:  // fmul dword ptr [0x5db2b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db2b8u)));
L_00483fba:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00483fbe:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00483fc2:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_00483fc4:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00483fc8:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00483fcb:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_00483fcd:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00483fd1:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00483fd5:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00483fd8:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00483fda:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00483fde:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_00483fe2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00483fe3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483fe4:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483fe9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483fe9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00483fec:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00483ff1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00483ff2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00483ff4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00483ff9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00483ff9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00483ffb:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484000u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484000:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00484002:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00484004:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00484008:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048400d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048400e:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484013u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484013:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00484016:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048401b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048401c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048401d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00484022:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00484027:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_0048402c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048402d:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484032u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484032:  // sub eax, 0x55
    t0 = lsub<32>(eax, 0x55u, f);
    eax = (uint32_t)(t0);
L_00484035:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00484039:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_0048403d:  // jmp 0x4842ab
    goto L_004842ab;
L_00484042:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00484046:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484048:  // je 0x4840d9
    if (f.zf) goto L_004840d9;
L_0048404e:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00484052:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00484058:  // mov eax, dword ptr [edx + 0xac]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xacu)));
L_0048405e:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00484062:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_00484066:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0048406c:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00484070:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00484074:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0048407a:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0048407e:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00484082:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00484086:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00484089:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048408d:  // fmul dword ptr [0x5dbb64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb64u)));
L_00484093:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00484097:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0048409b:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048409f:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004840a3:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_004840a5:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004840a8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004840ac:  // fmul dword ptr [0x5d964c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d964cu)));
L_004840b2:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004840b6:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004840ba:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004840be:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_004840c0:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_004840c3:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004840c7:  // fmul dword ptr [0x5db5dc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db5dcu)));
L_004840cd:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004840d1:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004840d5:  // sub ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_004840d7:  // jmp 0x484104
    goto L_00484104;
L_004840d9:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004840dd:  // fmul dword ptr [0x5db2b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db2b8u)));
L_004840e3:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004840e7:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004840eb:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004840ef:  // lea ebp, [edx + edi]
    ebp = (uint32_t)((uint32_t)(edx + edi));
L_004840f2:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_004840f5:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_004840f7:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004840fb:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004840ff:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00484102:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00484104:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00484108:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0048410c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048410d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048410e:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484113u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484113:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00484116:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048411b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048411c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048411e:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484123u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484123:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00484125:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048412au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048412a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048412c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048412e:  // lea eax, [esp + 0x24c]
    eax = (uint32_t)((uint32_t)(esp + 0x24cu));
L_00484135:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048413a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048413b:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484140u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484140:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00484144:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00484147:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484148:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00484149:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048414e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00484153:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00484158:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00484159:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048415e:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484163u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484163:  // sub eax, 0x55
    t0 = lsub<32>(eax, 0x55u, f);
    eax = (uint32_t)(t0);
L_00484166:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00484167:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_0048416b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00484170:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_00484174:  // fild dword ptr [esp + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x60u)));
L_00484178:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0048417a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0048417d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048417f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484184u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484184:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00484186:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048418bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048418b:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0048418f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484191:  // je 0x484202
    if (f.zf) goto L_00484202;
L_00484193:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00484197:  // fld dword ptr [edx + 0xac]
    lpush(x, (long double)F32((uint32_t)(edx + 0xacu)));
L_0048419d:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004841a3:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004841a5:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004841ab:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004841ad:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004841b3:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004841b5:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004841b9:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004841bd:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_004841c0:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004841c2:  // fmul dword ptr [0x5dbe4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe4cu)));
L_004841c8:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004841ca:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004841ce:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004841d2:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_004841d4:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_004841d7:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004841d9:  // fmul dword ptr [0x5dbb64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb64u)));
L_004841df:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004841e1:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004841e5:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004841e9:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_004841eb:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_004841ee:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004841f0:  // fmul dword ptr [0x5db5dc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db5dcu)));
L_004841f6:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004841fa:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004841fe:  // sub ebp, edx
    t0 = lsub<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_00484200:  // jmp 0x48423e
    goto L_0048423e;
L_00484202:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00484206:  // fmul dword ptr [0x5dbe4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe4cu)));
L_0048420c:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00484210:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00484214:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00484218:  // add ebp, edi
    t0 = ladd<32>(ebp, edi, f);
    ebp = (uint32_t)(t0);
L_0048421a:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0048421e:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00484221:  // add ebp, edi
    t0 = ladd<32>(ebp, edi, f);
    ebp = (uint32_t)(t0);
L_00484223:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00484226:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048422a:  // fmul dword ptr [0x5db2b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db2b8u)));
L_00484230:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00484234:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00484238:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048423c:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0048423e:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00484242:  // lea edx, [esp + 0x144]
    edx = (uint32_t)((uint32_t)(esp + 0x144u));
L_00484249:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048424a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048424b:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484250u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484250:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00484253:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00484258:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484259:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048425b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484260u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484260:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00484262:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484267u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484267:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00484269:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048426b:  // lea eax, [esp + 0x14c]
    eax = (uint32_t)((uint32_t)(esp + 0x14cu));
L_00484272:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00484277:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484278:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048427du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048427d:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00484281:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00484284:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484285:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00484286:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048428b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00484290:  // push 0x3c03126f
    t0 = 0x3c03126fu; esp -= 4; M32(esp) = t0;
L_00484295:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00484296:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0048429b:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004842a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004842a0:  // sub eax, 0x55
    t0 = lsub<32>(eax, 0x55u, f);
    eax = (uint32_t)(t0);
L_004842a3:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004842a7:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_004842ab:  // fild dword ptr [esp + 0x5c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x5cu)));
L_004842af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004842b0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004842b5:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004842b7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004842ba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004842bc:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004842c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004842c1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004842c3:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004842c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004842c8:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004842cc:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004842d0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004842d2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004842d7:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004842dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004842dc:  // mov edx, dword ptr [eax + 0x54]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x54u)));
L_004842df:  // add ebx, 4
    t0 = ladd<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_004842e2:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004842e6:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004842e7:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004842eb:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_004842ee:  // cmp ebx, 0x25c
    t0 = lsub<32>(ebx, 0x25cu, f);
L_004842f4:  // mov dword ptr [esp + 0x28], edi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edi);
L_004842f8:  // fmul dword ptr [edi - 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0xfffffff8u)));
L_004842fb:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004842ff:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00484303:  // jl 0x483962
    if ((f.sf != f.of)) goto L_00483962;
L_00484309:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048430a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048430b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048430c:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00484313:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0048431a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048431b:  // add esp, 0x334
    t0 = ladd<32>(esp, 0x334u, f);
    esp = (uint32_t)(t0);
L_00484321:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00483530, 00483530)
