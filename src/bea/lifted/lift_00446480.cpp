// lifted from 00446480 (vslot3, 720 bytes, 225 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00446480(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00446480;
L_00446480:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00446481:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00446482:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00446484:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00446485:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00446487:  // mov eax, dword ptr [esi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_0044648a:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_0044648c:  // je 0x44667e
    if (f.zf) goto L_0044667e;
L_00446492:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00446493:  // je 0x446595
    if (f.zf) goto L_00446595;
L_00446499:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044649a:  // jne 0x446676
    if (!f.zf) goto L_00446676;
L_004464a0:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004464a2:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004464a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004464a5:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004464a8:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004464aa:  // call dword ptr [edx + 0x150]
    t0 = M32((uint32_t)(edx + 0x150u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004464b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004464b0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004464b2:  // je 0x446500
    if (f.zf) goto L_00446500;
L_004464b4:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004464b7:  // lea eax, [esi + 0x34]
    eax = (uint32_t)((uint32_t)(esi + 0x34u));
L_004464ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004464bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004464bc:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004464bf:  // call 0x4fb650
    t0 = 0x004fb650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004464c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004464c4:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004464c7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004464c9:  // call dword ptr [edx + 0x128]
    t0 = M32((uint32_t)(edx + 0x128u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004464cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004464cf:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004464d5:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004464dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004464da:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004464df:  // jns 0x4464e8
    if (!f.sf) goto L_004464e8;
L_004464e1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004464e2:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004464e7:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004464e8:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_004464ec:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004464ed:  // fild dword ptr [esp + 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4u)));
L_004464f1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004464f2:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004464f8:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004464fe:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004464ff:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00446500:  // cmp dword ptr [esi + 0x18], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x18u)), edi, f);
L_00446503:  // je 0x446542
    if (f.zf) goto L_00446542;
L_00446505:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00446508:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0044650a:  // je 0x446542
    if (f.zf) goto L_00446542;
L_0044650c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0044650e:  // lea edi, [esi + 0x34]
    edi = (uint32_t)((uint32_t)(esi + 0x34u));
L_00446511:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00446512:  // call dword ptr [eax + 0x168]
    t0 = M32((uint32_t)(eax + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446518u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446518:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0044651b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044651c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044651d:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446520:  // call 0x4fb650
    t0 = 0x004fb650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446525u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446525:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446528:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0044652a:  // call dword ptr [edx + 0x158]
    t0 = M32((uint32_t)(edx + 0x158u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446530u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446530:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446533:  // call 0x4fbc90
    t0 = 0x004fbc90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446538u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446538:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_0044653e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044653f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00446540:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00446541:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00446542:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446545:  // mov eax, dword ptr [ecx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x164u)));
L_0044654b:  // mov dword ptr [ecx + 0x1ec], edi
    M32((uint32_t)(ecx + 0x1ecu)) = (uint32_t)(edi);
L_00446551:  // mov dword ptr [ecx + 0x1e8], edi
    M32((uint32_t)(ecx + 0x1e8u)) = (uint32_t)(edi);
L_00446557:  // cmp dword ptr [eax + 0x108], edi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x108u)), edi, f);
L_0044655d:  // je 0x446564
    if (f.zf) goto L_00446564;
L_0044655f:  // call 0x4fde70
    t0 = 0x004fde70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446564u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446564:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0044656a:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044656fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044656f:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00446574:  // jns 0x44657d
    if (!f.sf) goto L_0044657d;
L_00446576:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00446577:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0044657c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044657d:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_00446581:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00446582:  // fild dword ptr [esp + 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4u)));
L_00446586:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00446587:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_0044658d:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00446593:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00446594:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00446595:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0044659b:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004465a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004465a0:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004465a5:  // jns 0x4465ae
    if (!f.sf) goto L_004465ae;
L_004465a7:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004465a8:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004465ad:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004465ae:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_004465b2:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004465b5:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_004465b9:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004465bb:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004465c1:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004465c7:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_004465cb:  // je 0x446652
    if (f.zf) goto L_00446652;
L_004465d1:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004465d4:  // fld dword ptr [eax + 0x1c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x1cu)));
L_004465d7:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004465da:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_004465dd:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004465e0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004465e2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004465e4:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004465e6:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004465e8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004465ea:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004465ec:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004465ee:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004465f0:  // fcomp dword ptr [0x5d8c48]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c48u)));
    lpop(x);
L_004465f6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004465f8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004465fb:  // je 0x446652
    if (f.zf) goto L_00446652;
L_004465fd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004465ff:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00446601:  // call dword ptr [edx + 0x158]
    t0 = M32((uint32_t)(edx + 0x158u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446607u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446607:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044660a:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0044660c:  // call dword ptr [eax + 0x150]
    t0 = M32((uint32_t)(eax + 0x150u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446612u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446612:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00446614:  // je 0x446676
    if (f.zf) goto L_00446676;
L_00446616:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446619:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0044661b:  // call dword ptr [edx + 0x128]
    t0 = M32((uint32_t)(edx + 0x128u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446621u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446621:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00446627:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044662cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044662c:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00446631:  // jns 0x44663a
    if (!f.sf) goto L_0044663a;
L_00446633:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00446634:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00446639:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044663a:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_0044663e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044663f:  // fild dword ptr [esp + 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4u)));
L_00446643:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00446644:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_0044664a:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_00446650:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00446651:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00446652:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446655:  // mov eax, dword ptr [ecx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x164u)));
L_0044665b:  // mov dword ptr [ecx + 0x1ec], edi
    M32((uint32_t)(ecx + 0x1ecu)) = (uint32_t)(edi);
L_00446661:  // mov dword ptr [ecx + 0x1e8], edi
    M32((uint32_t)(ecx + 0x1e8u)) = (uint32_t)(edi);
L_00446667:  // cmp dword ptr [eax + 0x108], edi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x108u)), edi, f);
L_0044666d:  // je 0x44667a
    if (f.zf) goto L_0044667a;
L_0044666f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00446671:  // call 0x4fde70
    t0 = 0x004fde70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446676u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446676:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_0044667a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044667b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044667c:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0044667d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044667e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00446680:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00446682:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446685u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446685:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446688:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0044668a:  // call dword ptr [eax + 0x150]
    t0 = M32((uint32_t)(eax + 0x150u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446690u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446690:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00446692:  // je 0x4466e0
    if (f.zf) goto L_004466e0;
L_00446694:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00446697:  // lea ecx, [esi + 0x34]
    ecx = (uint32_t)((uint32_t)(esi + 0x34u));
L_0044669a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044669b:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044669e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0044669f:  // call 0x4fb650
    t0 = 0x004fb650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004466a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004466a4:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004466a7:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004466a9:  // call dword ptr [eax + 0x128]
    t0 = M32((uint32_t)(eax + 0x128u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004466afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004466af:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004466b5:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004466bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004466ba:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004466bf:  // jns 0x4466c8
    if (!f.sf) goto L_004466c8;
L_004466c1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004466c2:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004466c7:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004466c8:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_004466cc:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004466cd:  // fild dword ptr [esp + 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4u)));
L_004466d1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004466d2:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004466d8:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004466de:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004466df:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004466e0:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004466e3:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004466e5:  // je 0x4466fd
    if (f.zf) goto L_004466fd;
L_004466e7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004466e9:  // lea edi, [esi + 0x34]
    edi = (uint32_t)((uint32_t)(esi + 0x34u));
L_004466ec:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004466ed:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004466f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004466f3:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004466f6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004466f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004466f8:  // jmp 0x44651d
    goto L_0044651d;
L_004466fd:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446700:  // mov eax, dword ptr [ecx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x164u)));
L_00446706:  // mov dword ptr [ecx + 0x1ec], edi
    M32((uint32_t)(ecx + 0x1ecu)) = (uint32_t)(edi);
L_0044670c:  // mov dword ptr [ecx + 0x1e8], edi
    M32((uint32_t)(ecx + 0x1e8u)) = (uint32_t)(edi);
L_00446712:  // cmp dword ptr [eax + 0x108], edi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x108u)), edi, f);
L_00446718:  // je 0x44671f
    if (f.zf) goto L_0044671f;
L_0044671a:  // call 0x4fde70
    t0 = 0x004fde70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044671fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044671f:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00446725:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044672au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044672a:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0044672f:  // jns 0x446738
    if (!f.sf) goto L_00446738;
L_00446731:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00446732:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00446737:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00446738:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_0044673c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044673d:  // fild dword ptr [esp + 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4u)));
L_00446741:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00446742:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_00446748:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_0044674e:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0044674f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00446480, 00446480)
