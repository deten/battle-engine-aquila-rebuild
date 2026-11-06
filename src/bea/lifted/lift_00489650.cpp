// lifted from 00489650 (vslot40, 1257 bytes, 384 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00489650(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00489650;
L_00489650:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00489653:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00489654:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00489655:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00489657:  // mov bl, 4
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
L_00489659:  // test byte ptr [esi + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & (ebx & 0xffu), f);
L_0048965c:  // jne 0x489b31
    if (!f.zf) goto L_00489b31;
L_00489662:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00489663:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00489664:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00489668:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0048966a:  // test dword ptr [edi + 0x34], 0x1000000
    t0 = llog<32>(M32((uint32_t)(edi + 0x34u)) & 0x1000000u, f);
L_00489671:  // je 0x48968a
    if (f.zf) goto L_0048968a;
L_00489673:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00489675:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00489677:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048967du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048967d:  // fcomp dword ptr [0x5d8578]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8578u)));
    lpop(x);
L_00489683:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489685:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00489688:  // je 0x4896ad
    if (f.zf) goto L_004896ad;
L_0048968a:  // test byte ptr [edi + 0x34], bl
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & (ebx & 0xffu), f);
L_0048968d:  // je 0x4896a3
    if (f.zf) goto L_004896a3;
L_0048968f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00489691:  // call 0x4db090
    t0 = 0x004db090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489696u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489696:  // fcomp dword ptr [0x5d8578]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8578u)));
    lpop(x);
L_0048969c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048969e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004896a1:  // je 0x4896ad
    if (f.zf) goto L_004896ad;
L_004896a3:  // test byte ptr [edi + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x8u, f);
L_004896a7:  // je 0x48989e
    if (f.zf) goto L_0048989e;
L_004896ad:  // mov eax, dword ptr [esi + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x26cu)));
L_004896b3:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004896b8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004896ba:  // jne 0x489707
    if (!f.zf) goto L_00489707;
L_004896bc:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004896bf:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004896c0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004896c1:  // push 0x62d4ec
    t0 = 0x62d4ecu; esp -= 4; M32(esp) = t0;
L_004896c6:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004896c8:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004896cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004896cb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004896cd:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004896d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004896d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004896d3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004896d5:  // call 0x4f44a0
    t0 = 0x004f44a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004896dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004896da:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004896e0:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004896e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004896e5:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004896ea:  // jns 0x4896f3
    if (!f.sf) goto L_004896f3;
L_004896ec:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004896ed:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004896f2:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004896f3:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_004896f7:  // mov eax, dword ptr [esi + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6cu)));
L_004896fa:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_004896fe:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_00489704:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00489707:  // lea ecx, [esi + 0x1c]
    ecx = (uint32_t)((uint32_t)(esi + 0x1cu));
L_0048970a:  // mov edx, dword ptr [esi + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0048970d:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_00489711:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00489714:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00489718:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0048971b:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0048971f:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00489723:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00489729:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0048972d:  // fsub dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x1cu)));
L_00489730:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00489733:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00489737:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048973b:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0048973f:  // fsub dword ptr [edi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x20u)));
L_00489742:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00489746:  // fsub dword ptr [edi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x24u)));
L_00489749:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_0048974d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00489751:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00489753:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00489755:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00489757:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00489759:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0048975b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048975d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00489761:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00489765:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00489767:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00489769:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0048976b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048976d:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00489773:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489775:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00489778:  // jne 0x48979c
    if (!f.zf) goto L_0048979c;
L_0048977a:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00489780:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00489784:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00489786:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048978a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0048978e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00489790:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00489794:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00489796:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_0048979a:  // jmp 0x48979e
    goto L_0048979e;
L_0048979c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048979e:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_004897a1:  // test eax, 0x1000000
    t0 = llog<32>(eax & 0x1000000u, f);
L_004897a6:  // je 0x4897d7
    if (f.zf) goto L_004897d7;
L_004897a8:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004897ae:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004897b0:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004897b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004897b5:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004897ba:  // jns 0x4897c3
    if (!f.sf) goto L_004897c3;
L_004897bc:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004897bd:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004897c2:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004897c3:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_004897c7:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_004897cb:  // fmul dword ptr [0x5d8d50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d50u)));
L_004897d1:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_004897d5:  // jmp 0x48980c
    goto L_0048980c;
L_004897d7:  // test al, 8
    t0 = llog<8>((eax & 0xffu) & 0x8u, f);
L_004897d9:  // je 0x48980c
    if (f.zf) goto L_0048980c;
L_004897db:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004897e1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004897e3:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004897e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004897e8:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004897ed:  // jns 0x4897f6
    if (!f.sf) goto L_004897f6;
L_004897ef:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004897f0:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004897f5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004897f6:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_004897fa:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_004897fe:  // fmul dword ptr [0x5dbf9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbf9cu)));
L_00489804:  // fadd dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cb4u)));
L_0048980a:  // fchs 
    ST(0) = -ST(0);
L_0048980c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00489810:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00489812:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00489814:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00489816:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00489818:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0048981a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048981c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00489820:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00489824:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00489826:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00489828:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0048982a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048982c:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00489832:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489834:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00489837:  // jne 0x489857
    if (!f.zf) goto L_00489857;
L_00489839:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0048983f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00489841:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00489845:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00489849:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0048984d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0048984f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00489853:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00489855:  // jmp 0x489859
    goto L_00489859;
L_00489857:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00489859:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048985d:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0048985f:  // lea ecx, [esi + 0x14c]
    ecx = (uint32_t)((uint32_t)(esi + 0x14cu));
L_00489865:  // mov dword ptr [esi + 0x26c], 1
    M32((uint32_t)(esi + 0x26cu)) = (uint32_t)(0x1u);
L_0048986f:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00489873:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00489877:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00489879:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048987d:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0048987f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00489883:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00489887:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00489889:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0048988c:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00489890:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00489894:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00489898:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0048989b:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0048989e:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004898a2:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004898a6:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004898aa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004898ab:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004898ac:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004898ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004898ae:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004898b0:  // call 0x4f9a90
    t0 = 0x004f9a90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004898b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004898b5:  // test byte ptr [esi + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & (ebx & 0xffu), f);
L_004898b8:  // je 0x489b1c
    if (f.zf) goto L_00489b1c;
L_004898be:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004898c0:  // jne 0x489b1c
    if (!f.zf) goto L_00489b1c;
L_004898c6:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_004898c9:  // test bl, al
    t0 = llog<8>((ebx & 0xffu) & (eax & 0xffu), f);
L_004898cb:  // je 0x48990f
    if (f.zf) goto L_0048990f;
L_004898cd:  // test eax, 0x80000000
    t0 = llog<32>(eax & 0x80000000u, f);
L_004898d2:  // lea eax, [edi + 0x3c]
    eax = (uint32_t)((uint32_t)(edi + 0x3cu));
L_004898d5:  // jne 0x4898dc
    if (!f.zf) goto L_004898dc;
L_004898d7:  // mov eax, 0x83d9c0
    eax = (uint32_t)(0x83d9c0u);
L_004898dc:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004898df:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004898e3:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_004898e6:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004898ea:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_004898ed:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004898f1:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004898f5:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004898f9:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004898fd:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00489901:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00489905:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00489909:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0048990d:  // jmp 0x489949
    goto L_00489949;
L_0048990f:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_00489912:  // fsub dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x1cu)));
L_00489915:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00489919:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_0048991c:  // fsub dword ptr [edi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x20u)));
L_0048991f:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00489923:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_00489927:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0048992b:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_0048992e:  // fsub dword ptr [edi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x24u)));
L_00489931:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00489935:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00489939:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0048993d:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00489941:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00489945:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00489949:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0048994d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00489951:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00489953:  // fchs 
    ST(0) = -ST(0);
L_00489955:  // fld dword ptr [esi + 0x114]
    lpush(x, (long double)F32((uint32_t)(esi + 0x114u)));
L_0048995b:  // fcom dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
L_00489961:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489963:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00489966:  // je 0x489981
    if (f.zf) goto L_00489981;
L_00489968:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0048996a:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00489970:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489972:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00489975:  // jne 0x489981
    if (!f.zf) goto L_00489981;
L_00489977:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00489979:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0048997f:  // jmp 0x4899a5
    goto L_004899a5;
L_00489981:  // fcom dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
L_00489987:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489989:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048998c:  // jne 0x4899a7
    if (!f.zf) goto L_004899a7;
L_0048998e:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00489990:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00489996:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489998:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048999b:  // je 0x4899a7
    if (f.zf) goto L_004899a7;
L_0048999d:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0048999f:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004899a5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004899a7:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004899a9:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004899ad:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004899af:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004899b3:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004899b5:  // fcomp dword ptr [0x5d8de8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8de8u)));
    lpop(x);
L_004899bb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004899bd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004899c0:  // je 0x4899d7
    if (f.zf) goto L_004899d7;
L_004899c2:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004899c5:  // mov ebx, dword ptr [esi]
    ebx = (uint32_t)(M32((uint32_t)(esi)));
L_004899c7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004899c9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004899cb:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004899cd:  // push 0x62d554
    t0 = 0x62d554u; esp -= 4; M32(esp) = t0;
L_004899d2:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004899d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004899d5:  // jmp 0x489a53
    goto L_00489a53;
L_004899d7:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004899db:  // fcomp dword ptr [0x5d8de8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8de8u)));
    lpop(x);
L_004899e1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004899e3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004899e6:  // jne 0x489a09
    if (!f.zf) goto L_00489a09;
L_004899e8:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004899ec:  // fcomp dword ptr [0x5dbf98]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbf98u)));
    lpop(x);
L_004899f2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004899f4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004899f7:  // je 0x489a09
    if (f.zf) goto L_00489a09;
L_004899f9:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004899fc:  // mov ebx, dword ptr [esi]
    ebx = (uint32_t)(M32((uint32_t)(esi)));
L_004899fe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00489a00:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00489a02:  // push 0x62d548
    t0 = 0x62d548u; esp -= 4; M32(esp) = t0;
L_00489a07:  // jmp 0x489a4e
    goto L_00489a4e;
L_00489a09:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00489a0d:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_00489a13:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489a15:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00489a18:  // je 0x489a40
    if (f.zf) goto L_00489a40;
L_00489a1a:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00489a1e:  // fcomp dword ptr [0x5dbf94]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbf94u)));
    lpop(x);
L_00489a24:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489a26:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00489a29:  // jne 0x489a40
    if (!f.zf) goto L_00489a40;
L_00489a2b:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00489a2e:  // mov ebx, dword ptr [esi]
    ebx = (uint32_t)(M32((uint32_t)(esi)));
L_00489a30:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00489a32:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00489a34:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00489a36:  // push 0x62d53c
    t0 = 0x62d53cu; esp -= 4; M32(esp) = t0;
L_00489a3b:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489a3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489a3e:  // jmp 0x489a53
    goto L_00489a53;
L_00489a40:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00489a43:  // mov ebx, dword ptr [esi]
    ebx = (uint32_t)(M32((uint32_t)(esi)));
L_00489a45:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00489a47:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00489a49:  // push 0x62d530
    t0 = 0x62d530u; esp -= 4; M32(esp) = t0;
L_00489a4e:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00489a50:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489a53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489a53:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00489a55:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489a5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489a5a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00489a5b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00489a5d:  // call dword ptr [ebx + 0xf0]
    t0 = M32((uint32_t)(ebx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489a63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489a63:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00489a67:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00489a6b:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00489a6f:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00489a71:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00489a73:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00489a7b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00489a7d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00489a7f:  // fstp st(1)
    ST(1) = ST(0);
    lpop(x);
L_00489a81:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00489a87:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00489a89:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00489a8c:  // jne 0x489ab4
    if (!f.zf) goto L_00489ab4;
L_00489a8e:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00489a94:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00489a9c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00489a9e:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00489aa2:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00489aa6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00489aaa:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00489aac:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00489ab0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00489ab2:  // jmp 0x489ab6
    goto L_00489ab6;
L_00489ab4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00489ab6:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00489abc:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489ac1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489ac1:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00489ac6:  // jns 0x489acf
    if (!f.sf) goto L_00489acf;
L_00489ac8:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00489ac9:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00489ace:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00489acf:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00489ad3:  // lea ecx, [esi + 0x14c]
    ecx = (uint32_t)((uint32_t)(esi + 0x14cu));
L_00489ad9:  // fild dword ptr [esp + 0x38]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_00489add:  // fmul dword ptr [0x5dbf90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbf90u)));
L_00489ae3:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00489ae9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00489aeb:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00489aef:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00489af3:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00489af7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00489af9:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00489afd:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00489aff:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00489b03:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00489b07:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00489b0b:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_00489b0e:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00489b12:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00489b16:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00489b19:  // mov dword ptr [ecx + 0xc], edi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edi);
L_00489b1c:  // mov esi, dword ptr [esi + 0x13c]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00489b22:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_00489b27:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00489b28:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00489b29:  // cmp dword ptr [esi + 0x20], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0x20u)), eax, f);
L_00489b2c:  // jne 0x489b31
    if (!f.zf) goto L_00489b31;
L_00489b2e:  // mov dword ptr [esi + 0x20], eax
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(eax);
L_00489b31:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00489b32:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00489b33:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00489b36:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00489650, 00489650)
