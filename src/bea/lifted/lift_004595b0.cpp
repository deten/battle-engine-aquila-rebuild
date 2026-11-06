// lifted from 004595b0 (FUN_004595b0, 596 bytes, 184 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004595b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004595b0;
L_004595b0:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004595b4:  // sub esp, 0xc
    t0 = lsub<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004595b7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004595b9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004595ba:  // mov ebx, dword ptr [esp + 0x38]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004595be:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004595bf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004595c0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004595c1:  // je 0x4595ca
    if (f.zf) goto L_004595ca;
L_004595c3:  // mov eax, 0x53
    eax = (uint32_t)(0x53u);
L_004595c8:  // jmp 0x4595d3
    goto L_004595d3;
L_004595ca:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004595cc:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_004595ce:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004595d0:  // add eax, 0x55
    t0 = ladd<32>(eax, 0x55u, f);
    eax = (uint32_t)(t0);
L_004595d3:  // mov eax, dword ptr [eax*4 + 0x89d7a8]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89d7a8u)));
L_004595da:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004595dc:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004595e0:  // je 0x4597fa
    if (f.zf) goto L_004597fa;
L_004595e6:  // fild dword ptr [eax + 0xac]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + 0xacu)));
L_004595ec:  // movsx eax, word ptr [eax + 0xb0]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0xb0u))));
L_004595f3:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004595f7:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_004595fb:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004595ff:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00459601:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00459605:  // fild dword ptr [esp + 0x44]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x44u)));
L_00459609:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_0045960d:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00459611:  // je 0x459668
    if (f.zf) goto L_00459668;
L_00459613:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_00459619:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_0045961f:  // mov ecx, 0xbf
    ecx = (uint32_t)(0xbfu);
L_00459624:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00459628:  // fmul dword ptr [0x5db4f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f0u)));
L_0045962e:  // fsin 
    ST(0) = lfsin(ST(0));
L_00459630:  // fmul dword ptr [0x5db4ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4ecu)));
L_00459636:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0045963a:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0045963e:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00459640:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00459642:  // and al, 0xfe
    t0 = llog<8>((eax & 0xffu) & 0xfeu, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00459644:  // add eax, 0xde0000
    t0 = ladd<32>(eax, 0xde0000u, f);
    eax = (uint32_t)(t0);
L_00459649:  // shl eax, 7
    t0 = lshl<32>(eax, 0x7u, f);
    eax = (uint32_t)(t0);
L_0045964c:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0045964e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00459650:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_00459655:  // shr esi, 0x18
    t0 = lshr<32>(esi, 0x18u, f);
    esi = (uint32_t)(t0);
L_00459658:  // imul esi, edi
    t0 = limul32(esi, edi, f);
    esi = (uint32_t)(t0);
L_0045965b:  // and esi, 0xffffff00
    t0 = llog<32>(esi & 0xffffff00u, f);
    esi = (uint32_t)(t0);
L_00459661:  // shl esi, 0x10
    t0 = lshl<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_00459664:  // or esi, eax
    t0 = llog<32>(esi | eax, f);
    esi = (uint32_t)(t0);
L_00459666:  // jmp 0x45967e
    goto L_0045967e;
L_00459668:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0045966c:  // lea eax, [edi + edi*8]
    eax = (uint32_t)((uint32_t)(edi + edi * 8u));
L_0045966f:  // lea eax, [edi + eax*4]
    eax = (uint32_t)((uint32_t)(edi + eax * 4u));
L_00459672:  // lea esi, [eax + eax*2]
    esi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00459675:  // shl esi, 0x10
    t0 = lshl<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_00459678:  // and esi, 0xff000000
    t0 = llog<32>(esi & 0xff000000u, f);
    esi = (uint32_t)(t0);
L_0045967e:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00459682:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459683:  // call 0x421430
    t0 = 0x00421430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459688u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459688:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459689:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_0045968e:  // call 0x515190
    t0 = 0x00515190u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459693u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459693:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00459697:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_0045969b:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0045969f:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004596a1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004596a3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004596a6:  // jne 0x4596c8
    if (!f.zf) goto L_004596c8;
L_004596a8:  // mov eax, dword ptr [0x8a9580]
    eax = (uint32_t)(M32((uint32_t)(0x8a9580u)));
L_004596ad:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004596af:  // je 0x4596c8
    if (f.zf) goto L_004596c8;
L_004596b1:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004596b3:  // je 0x4596c8
    if (f.zf) goto L_004596c8;
L_004596b5:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004596b7:  // and esi, 0xff000000
    t0 = llog<32>(esi & 0xff000000u, f);
    esi = (uint32_t)(t0);
L_004596bd:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_004596c3:  // shl edx, 0x10
    t0 = lshl<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_004596c6:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_004596c8:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004596cc:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004596d0:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004596d4:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004596d8:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004596dc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004596dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004596de:  // fst dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
L_004596e2:  // fadd dword ptr [0x5d8bc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bc0u)));
L_004596e8:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004596ec:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004596f0:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004596f4:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004596f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004596f9:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004596fe:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00459702:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00459706:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00459707:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459708:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00459709:  // call 0x467010
    t0 = 0x00467010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045970eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045970e:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00459710:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00459714:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_00459717:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0045971b:  // sub esi, edi
    t0 = lsub<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_0045971d:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00459721:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459722:  // shl esi, 0x10
    t0 = lshl<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_00459725:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00459727:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_0045972c:  // or edi, 0xffffff
    t0 = llog<32>(edi | 0xffffffu, f);
    edi = (uint32_t)(t0);
L_00459732:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00459733:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459734:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00459735:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459736:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00459737:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0045973c:  // call 0x466e70
    t0 = 0x00466e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459741u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459741:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00459745:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00459747:  // je 0x4597fa
    if (f.zf) goto L_004597fa;
L_0045974d:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00459751:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00459753:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00459758:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045975a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045975c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045975d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045975e:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00459762:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00459763:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459764:  // push 0x3f4a3d71
    t0 = 0x3f4a3d71u; esp -= 4; M32(esp) = t0;
L_00459769:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045976a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045976b:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459770u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459770:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00459774:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0045977a:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0045977d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045977f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00459782:  // jne 0x4597fa
    if (!f.zf) goto L_004597fa;
L_00459784:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00459788:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0045978a:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0045978e:  // and ecx, 0xffff0000
    t0 = llog<32>(ecx & 0xffff0000u, f);
    ecx = (uint32_t)(t0);
L_00459794:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00459798:  // fadd dword ptr [0x5db4e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4e8u)));
L_0045979e:  // and esi, 0xff004000
    t0 = llog<32>(esi & 0xff004000u, f);
    esi = (uint32_t)(t0);
L_004597a4:  // or ecx, 0xff0000
    t0 = llog<32>(ecx | 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_004597aa:  // or esi, 0x4000
    t0 = llog<32>(esi | 0x4000u, f);
    esi = (uint32_t)(t0);
L_004597b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004597b1:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004597b5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004597b6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004597b7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004597b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004597b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004597ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004597bb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004597be:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004597c2:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_004597c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004597c9:  // fadd dword ptr [esp + 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x40u)));
L_004597cd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004597d0:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004597d4:  // fadd dword ptr [0x5d85bc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85bcu)));
L_004597da:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004597db:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004597de:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004597e2:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_004597e8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004597e9:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004597ee:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_004597f2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004597f5:  // call 0x4670b0
    t0 = 0x004670b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004597fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004597fa:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004597fb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004597fc:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004597fd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004597fe:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00459801:  // ret 0x2c
    c->target = M32(esp); esp += 48u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004595b0, 004595b0)
