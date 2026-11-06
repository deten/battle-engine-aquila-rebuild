// lifted from 005096a0 (FUN_005096a0, 768 bytes, 233 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005096a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005096a0;
L_005096a0:  // sub esp, 0x24
    t0 = lsub<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_005096a3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005096a4:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_005096a6:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_005096ac:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005096ae:  // je 0x509993
    if (f.zf) goto L_00509993;
L_005096b4:  // mov eax, dword ptr [eax + 0x18]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_005096b7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005096b9:  // je 0x509993
    if (f.zf) goto L_00509993;
L_005096bf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005096c1:  // call 0x40d0f0
    t0 = 0x0040d0f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005096c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005096c6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005096c8:  // je 0x509983
    if (f.zf) goto L_00509983;
L_005096ce:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_005096d2:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005096d8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005096da:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_005096dd:  // je 0x509709
    if (f.zf) goto L_00509709;
L_005096df:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_005096e3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005096e9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005096eb:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_005096ee:  // je 0x509709
    if (f.zf) goto L_00509709;
L_005096f0:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_005096f4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005096fa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005096fc:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_005096ff:  // je 0x509709
    if (f.zf) goto L_00509709;
L_00509701:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00509707:  // jmp 0x50971c
    goto L_0050971c;
L_00509709:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0050970d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050970f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00509710:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00509715u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00509715:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00509719:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0050971c:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00509722:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_00509725:  // mov edx, dword ptr [eax + 0x80]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x80u)));
L_0050972b:  // mov dword ptr [esp + 0xc], edx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(edx);
L_0050972f:  // fld dword ptr [ecx + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x2cu)));
L_00509732:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00509738:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0050973c:  // fld dword ptr [ecx + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x3cu)));
L_0050973f:  // fmul dword ptr [0x5d8c6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c6cu)));
L_00509745:  // mov ecx, dword ptr [eax + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x7cu)));
L_00509748:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_0050974c:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00509750:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00509754:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_0050975a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050975c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0050975f:  // jne 0x509772
    if (!f.zf) goto L_00509772;
L_00509761:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00509765:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_0050976b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050976d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00509770:  // je 0x50979c
    if (f.zf) goto L_0050979c;
L_00509772:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00509776:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_0050977c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050977e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00509781:  // je 0x509840
    if (f.zf) goto L_00509840;
L_00509787:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0050978b:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_00509791:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00509793:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00509796:  // je 0x509840
    if (f.zf) goto L_00509840;
L_0050979c:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_005097a0:  // fsin 
    ST(0) = lfsin(ST(0));
L_005097a2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_005097a6:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_005097aa:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005097ac:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_005097ae:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_005097b2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005097b4:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_005097b8:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_005097bc:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005097c0:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005097c4:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_005097c8:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_005097ca:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_005097cc:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_005097d0:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005097d4:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_005097d6:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_005097da:  // fcos 
    ST(0) = lfcos(ST(0));
L_005097dc:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_005097de:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_005097e0:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_005097e2:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005097e6:  // fdiv dword ptr [esp + 4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4u)));
L_005097ea:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_005097ee:  // fsin 
    ST(0) = lfsin(ST(0));
L_005097f0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005097f2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005097f4:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005097f8:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005097fc:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00509800:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00509802:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00509804:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00509806:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0050980a:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0050980c:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00509810:  // fcos 
    ST(0) = lfcos(ST(0));
L_00509812:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00509814:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00509816:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00509818:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0050981c:  // fdiv dword ptr [esp + 4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4u)));
L_00509820:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00509824:  // fcom dword ptr [esp + 0x2c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x2cu)));
L_00509828:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050982a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0050982d:  // jne 0x509999
    if (!f.zf) goto L_00509999;
L_00509833:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00509835:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00509839:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050983a:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_0050983d:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00509840:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00509844:  // fsin 
    ST(0) = lfsin(ST(0));
L_00509846:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0050984a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0050984e:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00509852:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00509854:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00509856:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0050985a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050985c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00509860:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00509864:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_00509868:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0050986a:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050986e:  // fdiv dword ptr [esp + 4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4u)));
L_00509872:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00509876:  // fcos 
    ST(0) = lfcos(ST(0));
L_00509878:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050987a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050987c:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00509880:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00509882:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00509888:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050988a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050988d:  // je 0x509897
    if (f.zf) goto L_00509897;
L_0050988f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00509891:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00509897:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0050989b:  // fsin 
    ST(0) = lfsin(ST(0));
L_0050989d:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005098a1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005098a3:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005098a5:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_005098a9:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_005098ab:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_005098ad:  // fdiv dword ptr [esp + 4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4u)));
L_005098b1:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_005098b5:  // fcos 
    ST(0) = lfcos(ST(0));
L_005098b7:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_005098b9:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_005098bb:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005098bf:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_005098c1:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_005098c5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005098cb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005098cd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005098d0:  // je 0x5098da
    if (f.zf) goto L_005098da;
L_005098d2:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_005098da:  // fld qword ptr [0x5dfca8]
    lpush(x, (long double)F64((uint32_t)(0x5dfca8u)));
L_005098e0:  // fsin 
    ST(0) = lfsin(ST(0));
L_005098e2:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005098e6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005098e8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005098ea:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_005098ee:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_005098f0:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_005098f2:  // fdiv dword ptr [esp + 4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x4u)));
L_005098f6:  // fld qword ptr [0x5dfca8]
    lpush(x, (long double)F64((uint32_t)(0x5dfca8u)));
L_005098fc:  // fcos 
    ST(0) = lfcos(ST(0));
L_005098fe:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00509900:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00509902:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00509906:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00509908:  // fst dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
L_0050990c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00509912:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00509914:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00509917:  // je 0x509921
    if (f.zf) goto L_00509921;
L_00509919:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_00509921:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00509927:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00509929:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0050992c:  // je 0x509934
    if (f.zf) goto L_00509934;
L_0050992e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00509930:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00509934:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00509938:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0050993a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050993c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050993f:  // je 0x509958
    if (f.zf) goto L_00509958;
L_00509941:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00509945:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0050994b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050994d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00509950:  // jne 0x509958
    if (!f.zf) goto L_00509958;
L_00509952:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00509954:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00509958:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0050995c:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0050995e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00509960:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00509963:  // je 0x509999
    if (f.zf) goto L_00509999;
L_00509965:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00509969:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0050996f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00509971:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00509974:  // jne 0x509999
    if (!f.zf) goto L_00509999;
L_00509976:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00509978:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0050997c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050997d:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00509980:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00509983:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00509989:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050998a:  // fld dword ptr [eax + 0x74]
    lpush(x, (long double)F32((uint32_t)(eax + 0x74u)));
L_0050998d:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00509990:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00509993:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00509999:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050999a:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_0050999d:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005096a0, 005096a0)
