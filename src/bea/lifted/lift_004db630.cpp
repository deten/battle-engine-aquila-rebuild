// lifted from 004db630 (FUN_004db630, 541 bytes, 159 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004db630(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004db630;
L_004db630:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004db631:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004db632:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004db633:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004db635:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004db637:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004db638:  // cmp dword ptr [esi + 0x12c], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x12cu)), ebx, f);
L_004db63e:  // jne 0x4db848
    if (!f.zf) goto L_004db848;
L_004db644:  // mov eax, dword ptr [esi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004db64a:  // cmp dword ptr [eax + 0x6c], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x6cu)), ebx, f);
L_004db64d:  // je 0x4db848
    if (f.zf) goto L_004db848;
L_004db653:  // mov dword ptr [esi + 0x12c], 1
    M32((uint32_t)(esi + 0x12cu)) = (uint32_t)(0x1u);
L_004db65d:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004db663:  // fsub dword ptr [0x5d8578]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8578u)));
L_004db669:  // fstp dword ptr [esi + 0x24]
    F32((uint32_t)(esi + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004db66c:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_004db672:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_004db678:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_004db67b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004db67d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004db67f:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004db681:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004db683:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db685:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004db687:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004db689:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db68b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004db68d:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004db68f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db691:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db693:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004db699:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004db69b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004db69e:  // jne 0x4db6ca
    if (!f.zf) goto L_004db6ca;
L_004db6a0:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004db6a6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004db6a8:  // fmul dword ptr [esi + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x7cu)));
L_004db6ab:  // fstp dword ptr [esi + 0x7c]
    F32((uint32_t)(esi + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004db6ae:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004db6b0:  // fmul dword ptr [esi + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x80u)));
L_004db6b6:  // fstp dword ptr [esi + 0x80]
    F32((uint32_t)(esi + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004db6bc:  // fmul dword ptr [esi + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x84u)));
L_004db6c2:  // fstp dword ptr [esi + 0x84]
    F32((uint32_t)(esi + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004db6c8:  // jmp 0x4db6cc
    goto L_004db6cc;
L_004db6ca:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db6cc:  // mov ecx, dword ptr [esi + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004db6d2:  // mov dword ptr [esi + 0x84], ebx
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(ebx);
L_004db6d8:  // lea edi, [esi + 0xe0]
    edi = (uint32_t)((uint32_t)(esi + 0xe0u));
L_004db6de:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004db6df:  // fld dword ptr [ecx + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x2cu)));
L_004db6e2:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_004db6e8:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004db6ea:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004db6ec:  // fmul dword ptr [esi + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x7cu)));
L_004db6ef:  // fstp dword ptr [esi + 0x7c]
    F32((uint32_t)(esi + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004db6f2:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004db6f4:  // fmul dword ptr [esi + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x80u)));
L_004db6fa:  // fstp dword ptr [esi + 0x80]
    F32((uint32_t)(esi + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004db700:  // fmul dword ptr [esi + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x84u)));
L_004db706:  // fstp dword ptr [esi + 0x84]
    F32((uint32_t)(esi + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004db70c:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db711u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db711:  // mov edx, dword ptr [esi + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004db717:  // cmp dword ptr [edx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(edx + 0x4u)), ebx, f);
L_004db71a:  // je 0x4db848
    if (f.zf) goto L_004db848;
L_004db720:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004db721:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004db722:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004db725:  // mov dword ptr [esi + 0xe4], ebx
    M32((uint32_t)(esi + 0xe4u)) = (uint32_t)(ebx);
L_004db72b:  // mov ecx, dword ptr [0x83cc88]
    ecx = (uint32_t)(M32((uint32_t)(0x83cc88u)));
L_004db731:  // mov edx, dword ptr [0x83cc8c]
    edx = (uint32_t)(M32((uint32_t)(0x83cc8cu)));
L_004db737:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004db739:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004db73a:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004db73c:  // mov ecx, dword ptr [0x83cc90]
    ecx = (uint32_t)(M32((uint32_t)(0x83cc90u)));
L_004db742:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004db745:  // mov edx, dword ptr [0x83cc94]
    edx = (uint32_t)(M32((uint32_t)(0x83cc94u)));
L_004db74b:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004db74e:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004db751:  // mov eax, dword ptr [esi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf0u)));
L_004db757:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004db75a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db75b:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004db760:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db765u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db765:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004db768:  // lea ecx, [esi + 0x1c]
    ecx = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004db76b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004db76d:  // je 0x4db82a
    if (f.zf) goto L_004db82a;
L_004db773:  // cmp dword ptr [eax + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(eax + 0x48u)), 0x461c4000u, f);
L_004db77a:  // jne 0x4db7dd
    if (!f.zf) goto L_004db7dd;
L_004db77c:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004db77e:  // lea edx, [eax + 0x80]
    edx = (uint32_t)((uint32_t)(eax + 0x80u));
L_004db784:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_004db786:  // mov dword ptr [edx], ebp
    M32((uint32_t)(edx)) = (uint32_t)(ebp);
L_004db788:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004db78b:  // mov dword ptr [edx + 4], ebp
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebp);
L_004db78e:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004db791:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_004db794:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004db797:  // mov dword ptr [edx + 0xc], ebx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ebx);
L_004db79a:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004db79c:  // lea edx, [eax + 0x40]
    edx = (uint32_t)((uint32_t)(eax + 0x40u));
L_004db79f:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_004db7a1:  // mov dword ptr [edx], ebp
    M32((uint32_t)(edx)) = (uint32_t)(ebp);
L_004db7a3:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004db7a6:  // mov dword ptr [edx + 4], ebp
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebp);
L_004db7a9:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004db7ac:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_004db7af:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004db7b2:  // mov dword ptr [edx + 0xc], ebx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ebx);
L_004db7b5:  // mov ebx, dword ptr [ecx]
    ebx = (uint32_t)(M32((uint32_t)(ecx)));
L_004db7b7:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004db7b9:  // mov dword ptr [edx], ebx
    M32((uint32_t)(edx)) = (uint32_t)(ebx);
L_004db7bb:  // mov ebx, dword ptr [ecx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004db7be:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_004db7c1:  // mov ebx, dword ptr [ecx + 8]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004db7c4:  // mov dword ptr [edx + 8], ebx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebx);
L_004db7c7:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004db7ca:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004db7cd:  // mov ecx, dword ptr [eax + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_004db7d3:  // cmp ecx, 0xbf800000
    t0 = lsub<32>(ecx, 0xbf800000u, f);
L_004db7d9:  // je 0x4db82a
    if (f.zf) goto L_004db82a;
L_004db7db:  // jmp 0x4db81e
    goto L_004db81e;
L_004db7dd:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004db7df:  // lea edx, [eax + 0x40]
    edx = (uint32_t)((uint32_t)(eax + 0x40u));
L_004db7e2:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_004db7e4:  // mov dword ptr [edx], ebp
    M32((uint32_t)(edx)) = (uint32_t)(ebp);
L_004db7e6:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004db7e9:  // mov dword ptr [edx + 4], ebp
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebp);
L_004db7ec:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004db7ef:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_004db7f2:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004db7f5:  // mov dword ptr [edx + 0xc], ebx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ebx);
L_004db7f8:  // mov ebx, dword ptr [ecx]
    ebx = (uint32_t)(M32((uint32_t)(ecx)));
L_004db7fa:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004db7fc:  // mov dword ptr [edx], ebx
    M32((uint32_t)(edx)) = (uint32_t)(ebx);
L_004db7fe:  // mov ebx, dword ptr [ecx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004db801:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_004db804:  // mov ebx, dword ptr [ecx + 8]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004db807:  // mov dword ptr [edx + 8], ebx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebx);
L_004db80a:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004db80d:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004db810:  // mov ecx, dword ptr [eax + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_004db816:  // cmp ecx, 0xbf800000
    t0 = lsub<32>(ecx, 0xbf800000u, f);
L_004db81c:  // je 0x4db82a
    if (f.zf) goto L_004db82a;
L_004db81e:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004db824:  // mov dword ptr [eax + 0xac], edx
    M32((uint32_t)(eax + 0xacu)) = (uint32_t)(edx);
L_004db82a:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004db82d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004db82f:  // je 0x4db848
    if (f.zf) goto L_004db848;
L_004db831:  // add esi, 0x3c
    t0 = ladd<32>(esi, 0x3cu, f);
    esi = (uint32_t)(t0);
L_004db834:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004db837:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004db83c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004db83e:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004db848:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004db849:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004db84a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004db84b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004db84c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004db630, 004db630)
