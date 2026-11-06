// lifted from 00411630 (FUN_00411630, 1057 bytes, 275 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00411630(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00411630;
L_00411630:  // sub esp, 0xc4
    t0 = lsub<32>(esp, 0xc4u, f);
    esp = (uint32_t)(t0);
L_00411636:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00411637:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00411639:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041163a:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0041163d:  // add eax, 0x7c
    t0 = ladd<32>(eax, 0x7cu, f);
    eax = (uint32_t)(t0);
L_00411640:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00411642:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_00411648:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0041164b:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_00411651:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00411654:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_0041165a:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00411660:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00411663:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00411664:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0041166a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041166d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041166e:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00411672:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00411678:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041167b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411680u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411680:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00411683:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00411684:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00411688:  // fadd dword ptr [eax + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x24u)));
L_0041168b:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_0041168e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00411691:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00411695:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00411698:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00411699:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041169c:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004116a0:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004116a2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004116a3:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_004116aa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004116ad:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004116b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004116b2:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004116b8:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004116bc:  // lea edx, [esp + 0x98]
    edx = (uint32_t)((uint32_t)(esp + 0x98u));
L_004116c3:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004116c8:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004116cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004116cd:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004116d1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004116d5:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004116d9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004116db:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004116de:  // je 0x4116e6
    if (f.zf) goto L_004116e6;
L_004116e0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004116e4:  // jmp 0x4116ea
    goto L_004116ea;
L_004116e6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004116ea:  // fsub dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa0u)));
L_004116f1:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004116f4:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004116f8:  // fld dword ptr [ecx + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xfcu)));
L_004116fe:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00411704:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00411706:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00411709:  // jne 0x411a49
    if (!f.zf) goto L_00411a49;
L_0041170f:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00411713:  // fcomp dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
    lpop(x);
L_00411719:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041171b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0041171e:  // je 0x411a49
    if (f.zf) goto L_00411a49;
L_00411724:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00411728:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0041172e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00411730:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00411733:  // je 0x41173d
    if (f.zf) goto L_0041173d;
L_00411735:  // mov dword ptr [esp + 4], 0
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(0x0u);
L_0041173d:  // fld dword ptr [0x5d85d8]
    lpush(x, (long double)F32((uint32_t)(0x5d85d8u)));
L_00411743:  // fsub dword ptr [esp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x4u)));
L_00411747:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00411748:  // fmul dword ptr [0x5d8cbc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cbcu)));
L_0041174e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411750:  // fmul dword ptr [ecx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x60u)));
L_00411753:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00411756:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00411757:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00411759:  // fmul dword ptr [ecx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x50u)));
L_0041175c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041175f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00411760:  // fmul dword ptr [ecx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x40u)));
L_00411763:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_0041176a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041176d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411772u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411772:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00411775:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0041177c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041177d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0041177f:  // call dword ptr [eax + 0x74]
    t0 = M32((uint32_t)(eax + 0x74u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411782u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411782:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_00411785:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00411787:  // jne 0x411a49
    if (!f.zf) goto L_00411a49;
L_0041178d:  // fld dword ptr [esi + 0x48]
    lpush(x, (long double)F32((uint32_t)(esi + 0x48u)));
L_00411790:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00411796:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00411798:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041179b:  // je 0x411a49
    if (f.zf) goto L_00411a49;
L_004117a1:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004117a4:  // fld dword ptr [ecx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x84u)));
L_004117aa:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004117b0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004117b2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004117b5:  // jne 0x4117c9
    if (!f.zf) goto L_004117c9;
L_004117b7:  // fld dword ptr [ecx + 0x84]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x84u)));
L_004117bd:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_004117c3:  // fstp dword ptr [ecx + 0x84]
    F32((uint32_t)(ecx + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004117c9:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004117cc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004117cd:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004117d2:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004117d4:  // mov ecx, dword ptr [eax + 0x114]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x114u)));
L_004117da:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004117de:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004117e0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004117e1:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004117e5:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004117eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004117ea:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004117ee:  // fsin 
    ST(0) = lfsin(ST(0));
L_004117f0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004117f2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004117f3:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004117f7:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004117fb:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004117ff:  // fcos 
    ST(0) = lfcos(ST(0));
L_00411801:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00411805:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00411809:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041180d:  // fchs 
    ST(0) = -ST(0);
L_0041180f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00411812:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00411813:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411818u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411818:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0041181a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041181c:  // mov dword ptr [esp + 0x70], ecx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ecx);
L_00411820:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00411821:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00411824:  // mov dword ptr [esp + 0x78], edx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(edx);
L_00411828:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0041182b:  // mov dword ptr [esp + 0x7c], ecx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ecx);
L_0041182f:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00411833:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00411836:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0041183a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041183b:  // mov dword ptr [esp + 0x84], edx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(edx);
L_00411842:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411847u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411847:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00411849:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0041184e:  // mov dword ptr [esp + 0x80], ecx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ecx);
L_00411855:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00411857:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0041185a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041185c:  // mov dword ptr [esp + 0x8c], edx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edx);
L_00411863:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00411866:  // mov dword ptr [esp + 0x90], ecx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(ecx);
L_0041186d:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_00411871:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00411874:  // mov dword ptr [esp + 0x94], edx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edx);
L_0041187b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411880u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411880:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00411882:  // mov dword ptr [esp + 0x8c], ecx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(ecx);
L_00411889:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0041188c:  // mov dword ptr [esp + 0x90], edx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(edx);
L_00411893:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00411896:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0041189d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041189e:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_004118a5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004118a8:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004118af:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004118b2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004118b3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004118b6:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004118ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004118bb:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_004118bf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004118c2:  // mov dword ptr [esp + 0xa4], edx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(edx);
L_004118c9:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004118ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004118ce:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004118d2:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004118d6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004118d7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004118d9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004118dc:  // je 0x411916
    if (f.zf) goto L_00411916;
L_004118de:  // lea eax, [esp + 0x98]
    eax = (uint32_t)((uint32_t)(esp + 0x98u));
L_004118e5:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004118e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004118ea:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004118ef:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004118f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004118f4:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004118f8:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004118fc:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00411900:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00411904:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00411908:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_0041190c:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00411910:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_00411914:  // jmp 0x41194e
    goto L_0041194e;
L_00411916:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0041191e:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00411922:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0041192a:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0041192e:  // mov dword ptr [esp + 0x20], 0xbf800000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xbf800000u);
L_00411936:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041193a:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0041193e:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00411942:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00411946:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_0041194a:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_0041194e:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00411952:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_00411956:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0041195a:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0041195e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041195f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00411961:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00411964:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00411968:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0041196c:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00411970:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00411974:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00411975:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00411977:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041197a:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0041197e:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00411982:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00411986:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_0041198a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041198b:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0041198f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00411991:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00411994:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411999u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411999:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_0041199d:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_004119a4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004119a5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004119a6:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004119aa:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004119afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004119af:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_004119b6:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004119bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004119bb:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004119bf:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_004119c5:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004119c8:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_004119ce:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004119d2:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004119d9:  // fchs 
    ST(0) = -ST(0);
L_004119db:  // fsub dword ptr [eax + 0x118]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x118u)));
L_004119e1:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004119e5:  // fmul dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb8u)));
L_004119eb:  // fadd dword ptr [eax + 0x280]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x280u)));
L_004119f1:  // fstp dword ptr [eax + 0x280]
    F32((uint32_t)(eax + 0x280u)) = lf32(ST(0));
    lpop(x);
L_004119f7:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004119fb:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004119ff:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00411a03:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00411a07:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00411a0b:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_00411a0f:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00411a13:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_00411a17:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_00411a1b:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00411a20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00411a20:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00411a24:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00411a2a:  // mov esi, dword ptr [esi + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00411a2d:  // fsub dword ptr [esi + 0x11c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x11cu)));
L_00411a33:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_00411a37:  // fmul dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb8u)));
L_00411a3d:  // fadd dword ptr [esi + 0x27c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x27cu)));
L_00411a43:  // fstp dword ptr [esi + 0x27c]
    F32((uint32_t)(esi + 0x27cu)) = lf32(ST(0));
    lpop(x);
L_00411a49:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00411a4a:  // add esp, 0xc4
    t0 = ladd<32>(esp, 0xc4u, f);
    esp = (uint32_t)(t0);
L_00411a50:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00411630, 00411630)
