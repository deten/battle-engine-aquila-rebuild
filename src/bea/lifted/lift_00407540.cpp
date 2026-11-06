// lifted from 00407540 (FUN_00407540, 1018 bytes, 273 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00407540(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00407540;
L_00407540:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_00407545:  // sub esp, 0x7c
    t0 = lsub<32>(esp, 0x7cu, f);
    esp = (uint32_t)(t0);
L_00407548:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040754a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040754b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040754c:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0040754e:  // jne 0x407934
    if (!f.zf) goto L_00407934;
L_00407554:  // mov esi, dword ptr [0x6601f8]
    esi = (uint32_t)(M32((uint32_t)(0x6601f8u)));
L_0040755a:  // mov ecx, dword ptr [0x8a9ac4]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9ac4u)));
L_00407560:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00407561:  // mov dword ptr [0x6601f8], esi
    M32((uint32_t)(0x6601f8u)) = (uint32_t)(esi);
L_00407567:  // mov eax, dword ptr [ebx + 0x574]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x574u)));
L_0040756d:  // mov eax, dword ptr [eax + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_00407570:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00407571:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00407573:  // jne 0x407934
    if (!f.zf) goto L_00407934;
L_00407579:  // cmp dword ptr [0x8a9ac0], 3
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac0u)), 0x3u, f);
L_00407580:  // jne 0x407934
    if (!f.zf) goto L_00407934;
L_00407586:  // test byte ptr [ebx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebx + 0x2cu)) & 0x4u, f);
L_0040758a:  // jne 0x407934
    if (!f.zf) goto L_00407934;
L_00407590:  // mov ecx, dword ptr [ebx + 0x580]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x580u)));
L_00407596:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00407598:  // je 0x407934
    if (f.zf) goto L_00407934;
L_0040759e:  // cmp dword ptr [ebx + 0x260], 2
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x260u)), 0x2u, f);
L_004075a5:  // jne 0x407934
    if (!f.zf) goto L_00407934;
L_004075ab:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004075ae:  // mov eax, dword ptr [ecx*4 + 0x889304]
    eax = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x889304u)));
L_004075b5:  // cmp eax, 0xe
    t0 = lsub<32>(eax, 0xeu, f);
L_004075b8:  // je 0x4075c3
    if (f.zf) goto L_004075c3;
L_004075ba:  // cmp eax, 0xd
    t0 = lsub<32>(eax, 0xdu, f);
L_004075bd:  // jne 0x407934
    if (!f.zf) goto L_00407934;
L_004075c3:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004075c5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004075c7:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004075cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004075cd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004075cf:  // jne 0x4075e0
    if (!f.zf) goto L_004075e0;
L_004075d1:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004075d3:  // call 0x401fd0
    t0 = 0x00401fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004075d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004075d8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004075da:  // je 0x407934
    if (f.zf) goto L_00407934;
L_004075e0:  // mov eax, dword ptr [0x622f0c]
    eax = (uint32_t)(M32((uint32_t)(0x622f0cu)));
L_004075e5:  // mov ecx, dword ptr [0x6601f8]
    ecx = (uint32_t)(M32((uint32_t)(0x6601f8u)));
L_004075eb:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004075ec:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004075ee:  // jne 0x407900
    if (!f.zf) goto L_00407900;
L_004075f4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004075f9:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004075feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004075fe:  // mov ecx, dword ptr [0x89bda8]
    ecx = (uint32_t)(M32((uint32_t)(0x89bda8u)));
L_00407604:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00407605:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00407607:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00407609:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0040760b:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_0040760f:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00407614:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00407618:  // fld dword ptr [0x6254f4]
    lpush(x, (long double)F32((uint32_t)(0x6254f4u)));
L_0040761e:  // fmul dword ptr [0x5d8bbc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bbcu)));
L_00407624:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00407626:  // fsubr dword ptr [ebx + 0x114]
    ST(0) = ((long double)F32((uint32_t)(ebx + 0x114u))) - (ST(0));
L_0040762c:  // fstp dword ptr [ebx + 0x114]
    F32((uint32_t)(ebx + 0x114u)) = lf32(ST(0));
    lpop(x);
L_00407632:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407637u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407637:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00407638:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0040763a:  // mov edx, dword ptr [0x89bda4]
    edx = (uint32_t)(M32((uint32_t)(0x89bda4u)));
L_00407640:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00407642:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00407644:  // mov eax, dword ptr [ebx + 0x574]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x574u)));
L_0040764a:  // mov dword ptr [esp + 8], edx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(edx);
L_0040764e:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00407652:  // fld dword ptr [0x6254f4]
    lpush(x, (long double)F32((uint32_t)(0x6254f4u)));
L_00407658:  // fmul dword ptr [0x5d8bbc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bbcu)));
L_0040765e:  // mov ecx, dword ptr [eax + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_00407661:  // mov eax, dword ptr [ecx*4 + 0x662ac0]
    eax = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x662ac0u)));
L_00407668:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0040766a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040766c:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00407672:  // je 0x407682
    if (f.zf) goto L_00407682;
L_00407674:  // fadd dword ptr [ebx + 0x118]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x118u)));
L_0040767a:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_00407680:  // jmp 0x407692
    goto L_00407692;
L_00407682:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407688:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0040768a:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_00407690:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407692:  // fld dword ptr [ebx + 0x4c4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4c4u)));
L_00407698:  // fcos 
    ST(0) = lfcos(ST(0));
L_0040769a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040769b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040769d:  // fmul dword ptr [ebx + 0x4c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4c0u)));
L_004076a3:  // fadd dword ptr [ebx + 0x11c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x11cu)));
L_004076a9:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004076ad:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004076b1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004076b3:  // fmul dword ptr [ebx + 0x4bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4bcu)));
L_004076b9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004076ba:  // fadd dword ptr [ebx + 0x118]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x118u)));
L_004076c0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004076c4:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004076c8:  // fmul dword ptr [ebx + 0x4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4b8u)));
L_004076ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004076cf:  // fadd dword ptr [ebx + 0x114]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x114u)));
L_004076d5:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004076d9:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004076dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004076de:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004076e2:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004076e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004076e7:  // fld dword ptr [ebx + 0x114]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x114u)));
L_004076ed:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004076ef:  // fcos 
    ST(0) = lfcos(ST(0));
L_004076f1:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004076f4:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004076f9:  // lea esi, [esp + 0x58]
    esi = (uint32_t)((uint32_t)(esp + 0x58u));
L_004076fd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004076ff:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00407701:  // lea edi, [ebx + 0x9c]
    edi = (uint32_t)((uint32_t)(ebx + 0x9cu));
L_00407707:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0040770c:  // lea esi, [esp + 0x5c]
    esi = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00407710:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00407712:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00407716:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_0040771a:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0040771e:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00407722:  // fsin 
    ST(0) = lfsin(ST(0));
L_00407724:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00407725:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00407729:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0040772d:  // fchs 
    ST(0) = -ST(0);
L_0040772f:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00407733:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00407734:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407739u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407739:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0040773b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00407740:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_00407744:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00407746:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00407749:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040774b:  // mov dword ptr [esp + 0x78], edx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(edx);
L_0040774f:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00407752:  // mov dword ptr [esp + 0x7c], ecx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ecx);
L_00407756:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0040775a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0040775d:  // mov dword ptr [esp + 0x80], edx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(edx);
L_00407764:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407769u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407769:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0040776b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0040776f:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00407772:  // mov dword ptr [esp + 0x78], ecx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ecx);
L_00407776:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_0040777a:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0040777d:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00407780:  // mov dword ptr [esp + 0x80], ecx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ecx);
L_00407787:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040778b:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0040778f:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00407793:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_00407797:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0040779b:  // mov dword ptr [esp + 0x84], edx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(edx);
L_004077a2:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004077a4:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004077a6:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004077acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004077ac:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004077ae:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004077af:  // je 0x4077f0
    if (f.zf) goto L_004077f0;
L_004077b1:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004077b3:  // call 0x401fd0
    t0 = 0x00401fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004077b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004077b8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004077ba:  // jne 0x4077f0
    if (!f.zf) goto L_004077f0;
L_004077bc:  // lea ecx, [ebx + 0x1c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004077bf:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004077c3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004077c4:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004077c9:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004077ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004077ce:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004077d2:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004077d6:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004077da:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004077de:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004077e2:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004077e6:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004077ea:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004077ee:  // jmp 0x407828
    goto L_00407828;
L_004077f0:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_004077f8:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004077fc:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_00407804:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00407808:  // mov dword ptr [esp + 0x3c], 0xbf800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0xbf800000u);
L_00407810:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00407814:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00407818:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0040781c:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00407820:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00407824:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00407828:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040782c:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00407830:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00407834:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00407838:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00407839:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0040783b:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0040783f:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407843:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00407847:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0040784b:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0040784d:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00407851:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00407855:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00407859:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0040785d:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407861:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00407863:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00407867:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040786b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040786d:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00407871:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407875:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00407877:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040787a:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0040787e:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407882:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00407886:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00407888:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00407889:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0040788b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040788e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040788f:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00407893:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407895:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00407899:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0040789d:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004078a1:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004078a5:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004078a7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004078aa:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004078afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004078af:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004078b3:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004078b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004078b8:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004078bc:  // fchs 
    ST(0) = -ST(0);
L_004078be:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_004078c4:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004078c6:  // fcom dword ptr [0x5d8bb8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb8u)));
L_004078cc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004078ce:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004078d1:  // jne 0x4078e3
    if (!f.zf) goto L_004078e3;
L_004078d3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004078d5:  // fadd dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bb8u)));
L_004078db:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_004078e1:  // jmp 0x407900
    goto L_00407900;
L_004078e3:  // fcomp dword ptr [0x5d8bb4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb4u)));
    lpop(x);
L_004078e9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004078eb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004078ee:  // je 0x4078fe
    if (f.zf) goto L_004078fe;
L_004078f0:  // fsub dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bb0u)));
L_004078f6:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_004078fc:  // jmp 0x407900
    goto L_00407900;
L_004078fe:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407900:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00407905:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040790au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040790a:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0040790b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0040790d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00407912:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00407914:  // mov dword ptr [0x89bda8], eax
    M32((uint32_t)(0x89bda8u)) = (uint32_t)(eax);
L_00407919:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040791eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040791e:  // mov ecx, dword ptr [0x6601f8]
    ecx = (uint32_t)(M32((uint32_t)(0x6601f8u)));
L_00407924:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00407925:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00407927:  // mov dword ptr [0x622f0c], ecx
    M32((uint32_t)(0x622f0cu)) = (uint32_t)(ecx);
L_0040792d:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0040792f:  // mov dword ptr [0x89bda4], eax
    M32((uint32_t)(0x89bda4u)) = (uint32_t)(eax);
L_00407934:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00407935:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00407936:  // add esp, 0x7c
    t0 = ladd<32>(esp, 0x7cu, f);
    esp = (uint32_t)(t0);
L_00407939:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00407540, 00407540)
