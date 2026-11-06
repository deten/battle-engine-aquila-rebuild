// lifted from 00443890 (vslot3, 298 bytes, 99 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00443890(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00443890;
L_00443890:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00443893:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00443894:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00443896:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_00443899:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044389b:  // je 0x4438ca
    if (f.zf) goto L_004438ca;
L_0044389d:  // fld dword ptr [esi + 0xc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xcu)));
L_004438a0:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004438a4:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004438a8:  // fst dword ptr [esi + 0xc]
    F32((uint32_t)(esi + 0xcu)) = lf32(ST(0));
L_004438ab:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004438b1:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004438b6:  // mov dword ptr [esi + 0x18], ecx
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(ecx);
L_004438b9:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_004438bc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004438be:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004438c1:  // je 0x4438ca
    if (f.zf) goto L_004438ca;
L_004438c3:  // mov dword ptr [esi + 0xc], 0
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(0x0u);
L_004438ca:  // fld dword ptr [esi + 0xc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xcu)));
L_004438cd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004438d3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004438d5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004438d8:  // je 0x4439b3
    if (f.zf) goto L_004439b3;
L_004438de:  // mov eax, dword ptr [esi + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x38u)));
L_004438e1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004438e3:  // jne 0x4439b3
    if (!f.zf) goto L_004439b3;
L_004438e9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004438ea:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004438ee:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004438f2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004438f4:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004438f6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004438f7:  // call dword ptr [edx + 0x78]
    t0 = M32((uint32_t)(edx + 0x78u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004438fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004438fa:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_004438fd:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004438ff:  // lea ecx, [esi + 0x40]
    ecx = (uint32_t)((uint32_t)(esi + 0x40u));
L_00443902:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00443904:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00443908:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_0044390b:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0044390e:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00443912:  // fld dword ptr [edi + 0x24]
    lpush(x, (long double)F32((uint32_t)(edi + 0x24u)));
L_00443915:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_00443918:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0044391c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044391d:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0044391f:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00443923:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00443927:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0044392a:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0044392e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00443931:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00443935:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00443938:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0044393b:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_0044393e:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_00443940:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00443942:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00443944:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00443946:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00443948:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0044394a:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0044394c:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0044394e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00443950:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00443952:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00443954:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00443956:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00443958:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0044395e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00443960:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00443963:  // jne 0x443981
    if (!f.zf) goto L_00443981;
L_00443965:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0044396b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0044396d:  // fmul dword ptr [ecx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx)));
L_0044396f:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_00443971:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00443973:  // fmul dword ptr [ecx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x4u)));
L_00443976:  // fstp dword ptr [ecx + 4]
    F32((uint32_t)(ecx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00443979:  // fmul dword ptr [ecx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x8u)));
L_0044397c:  // fstp dword ptr [ecx + 8]
    F32((uint32_t)(ecx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0044397f:  // jmp 0x443983
    goto L_00443983;
L_00443981:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00443983:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_00443985:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_0044398b:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_0044398d:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_00443990:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_00443996:  // fstp dword ptr [ecx + 4]
    F32((uint32_t)(ecx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00443999:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0044399c:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_004439a2:  // fstp dword ptr [ecx + 8]
    F32((uint32_t)(ecx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004439a5:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004439a7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004439a9:  // mov dword ptr [esi + 0x50], 1
    M32((uint32_t)(esi + 0x50u)) = (uint32_t)(0x1u);
L_004439b0:  // call dword ptr [edx + 0x20]
    t0 = M32((uint32_t)(edx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004439b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004439b3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004439b4:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004439b7:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00443890, 00443890)
