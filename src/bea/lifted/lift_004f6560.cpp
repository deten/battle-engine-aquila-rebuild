// lifted from 004f6560 (vslot1_t8, 894 bytes, 249 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f6560(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f6560;
L_004f6560:  // sub esp, 0x150
    t0 = lsub<32>(esp, 0x150u, f);
    esp = (uint32_t)(t0);
L_004f6566:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f6567:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f6568:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004f656a:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_004f656d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f656f:  // jne 0x4f660c
    if (!f.zf) goto L_004f660c;
L_004f6575:  // lea eax, [edi - 8]
    eax = (uint32_t)((uint32_t)(edi + 0xfffffff8u));
L_004f6578:  // shr eax, 4
    t0 = lshr<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004f657b:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_004f657e:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_004f6582:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_004f6586:  // fmul dword ptr [0x5d85e4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e4u)));
L_004f658c:  // fadd dword ptr [0x67a680]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x67a680u)));
L_004f6592:  // fmul dword ptr [0x5db2b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db2b8u)));
L_004f6598:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004f659c:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004f65a0:  // cmp ecx, 0x20
    t0 = lsub<32>(ecx, 0x20u, f);
L_004f65a3:  // mov dword ptr [edi + 0x38], ecx
    M32((uint32_t)(edi + 0x38u)) = (uint32_t)(ecx);
L_004f65a6:  // jl 0x4f65bd
    if ((f.sf != f.of)) goto L_004f65bd;
L_004f65a8:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004f65aa:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004f65ab:  // and edx, 0x1f
    t0 = llog<32>(edx & 0x1fu, f);
    edx = (uint32_t)(t0);
L_004f65ae:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004f65b0:  // sar eax, 5
    t0 = lsar<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004f65b3:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004f65b6:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004f65b8:  // mov dword ptr [edi + 0x38], ecx
    M32((uint32_t)(edi + 0x38u)) = (uint32_t)(ecx);
L_004f65bb:  // jmp 0x4f65db
    goto L_004f65db;
L_004f65bd:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f65bf:  // jge 0x4f65db
    if ((f.sf == f.of)) goto L_004f65db;
L_004f65c1:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004f65c3:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004f65c4:  // and edx, 0x1f
    t0 = llog<32>(edx & 0x1fu, f);
    edx = (uint32_t)(t0);
L_004f65c7:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004f65c9:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_004f65ce:  // sar eax, 5
    t0 = lsar<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004f65d1:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004f65d3:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004f65d6:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_004f65d8:  // mov dword ptr [edi + 0x38], edx
    M32((uint32_t)(edi + 0x38u)) = (uint32_t)(edx);
L_004f65db:  // mov dword ptr [edi + 0x34], 1
    M32((uint32_t)(edi + 0x34u)) = (uint32_t)(0x1u);
L_004f65e2:  // mov edi, dword ptr [edi + 0x38]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x38u)));
L_004f65e5:  // mov eax, dword ptr [esp + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_004f65ec:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f65f1:  // lea esi, [edi + edi*2]
    esi = (uint32_t)((uint32_t)(edi + edi * 2u));
L_004f65f4:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004f65f6:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004f65f9:  // add esi, 0x8406b8
    t0 = ladd<32>(esi, 0x8406b8u, f);
    esi = (uint32_t)(t0);
L_004f65ff:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f6601:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f6602:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f6603:  // add esp, 0x150
    t0 = ladd<32>(esp, 0x150u, f);
    esp = (uint32_t)(t0);
L_004f6609:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f660c:  // mov esi, dword ptr [edi + 0x40]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x40u)));
L_004f660f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f6611:  // je 0x4f65e2
    if (f.zf) goto L_004f65e2;
L_004f6613:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_004f6619:  // fsub dword ptr [esi + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xb4u)));
L_004f661f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6620:  // mov eax, dword ptr [0x8a9e44]
    eax = (uint32_t)(M32((uint32_t)(0x8a9e44u)));
L_004f6625:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004f6629:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f662c:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_004f6632:  // fsub dword ptr [esi + 0xb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xb0u)));
L_004f6638:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6639:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f663c:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_004f663f:  // fsub dword ptr [esi + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xacu)));
L_004f6645:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6646:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_004f664d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6650:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6655u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6655:  // fld dword ptr [esi + 0x74]
    lpush(x, (long double)F32((uint32_t)(esi + 0x74u)));
L_004f6658:  // fsub dword ptr [esi + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xa4u)));
L_004f665e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f665f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6662:  // fld dword ptr [esi + 0x70]
    lpush(x, (long double)F32((uint32_t)(esi + 0x70u)));
L_004f6665:  // fsub dword ptr [esi + 0xa0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xa0u)));
L_004f666b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f666c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f666f:  // fld dword ptr [esi + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x6cu)));
L_004f6672:  // fsub dword ptr [esi + 0x9c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x9cu)));
L_004f6678:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6679:  // lea ecx, [esp + 0x104]
    ecx = (uint32_t)((uint32_t)(esp + 0x104u));
L_004f6680:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6683:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6688u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6688:  // fld dword ptr [esi + 0x64]
    lpush(x, (long double)F32((uint32_t)(esi + 0x64u)));
L_004f668b:  // fsub dword ptr [esi + 0x94]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x94u)));
L_004f6691:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6692:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6695:  // fld dword ptr [esi + 0x60]
    lpush(x, (long double)F32((uint32_t)(esi + 0x60u)));
L_004f6698:  // fsub dword ptr [esi + 0x90]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x90u)));
L_004f669e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f669f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f66a2:  // fld dword ptr [esi + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x5cu)));
L_004f66a5:  // fsub dword ptr [esi + 0x8c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x8cu)));
L_004f66ab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f66ac:  // lea ecx, [esp + 0xd4]
    ecx = (uint32_t)((uint32_t)(esp + 0xd4u));
L_004f66b3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f66b6:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f66bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f66bb:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_004f66c2:  // lea edx, [esp + 0xf8]
    edx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_004f66c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f66ca:  // lea eax, [esp + 0xcc]
    eax = (uint32_t)((uint32_t)(esp + 0xccu));
L_004f66d1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f66d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f66d3:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004f66d7:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f66dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f66dc:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004f66e0:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004f66e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f66e5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f66e8:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004f66ec:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f66f0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f66f1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f66f4:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004f66f8:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004f66fc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f66fd:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_004f6704:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6707:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f670cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f670c:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004f6710:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004f6714:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6715:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6718:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004f671c:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f6720:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6721:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6724:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004f6728:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004f672c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f672d:  // lea ecx, [esp + 0x114]
    ecx = (uint32_t)((uint32_t)(esp + 0x114u));
L_004f6734:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6737:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f673cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f673c:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004f6740:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004f6744:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6745:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6748:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004f674c:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f6750:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6751:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6754:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004f6758:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004f675c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f675d:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_004f6764:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6767:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f676cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f676c:  // lea ecx, [esp + 0xe8]
    ecx = (uint32_t)((uint32_t)(esp + 0xe8u));
L_004f6773:  // lea edx, [esp + 0x108]
    edx = (uint32_t)((uint32_t)(esp + 0x108u));
L_004f677a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f677b:  // lea eax, [esp + 0xbc]
    eax = (uint32_t)((uint32_t)(esp + 0xbcu));
L_004f6782:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f6783:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f6784:  // lea ecx, [esp + 0x94]
    ecx = (uint32_t)((uint32_t)(esp + 0x94u));
L_004f678b:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6790u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6790:  // mov esi, dword ptr [edi + 0x40]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x40u)));
L_004f6793:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6794:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004f679b:  // fadd dword ptr [esi + 0xb4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0xb4u)));
L_004f67a1:  // add esi, 0x8c
    t0 = ladd<32>(esi, 0x8cu, f);
    esi = (uint32_t)(t0);
L_004f67a7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f67aa:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f67b1:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_004f67b4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f67b5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f67b8:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f67bf:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004f67c2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f67c3:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004f67c7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f67ca:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f67cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f67cf:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004f67d6:  // fadd dword ptr [esi + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x18u)));
L_004f67d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f67da:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f67dd:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004f67e4:  // fadd dword ptr [esi + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x14u)));
L_004f67e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f67e8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f67eb:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004f67f2:  // fadd dword ptr [esi + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x10u)));
L_004f67f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f67f6:  // lea ecx, [esp + 0x124]
    ecx = (uint32_t)((uint32_t)(esp + 0x124u));
L_004f67fd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6800:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6805u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6805:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_004f6809:  // lea edx, [esp + 0x118]
    edx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004f6810:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6811:  // lea eax, [esp + 0x8c]
    eax = (uint32_t)((uint32_t)(esp + 0x8cu));
L_004f6818:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f6819:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_004f6820:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f6821:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f6822:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f6824:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6829u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6829:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f682a:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_004f6831:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6836u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6836:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f683b:  // lea esi, [esp + 0x128]
    esi = (uint32_t)((uint32_t)(esp + 0x128u));
L_004f6842:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004f6846:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f6848:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004f684c:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6851u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6851:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004f6855:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f685au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f685a:  // lea edx, [esp + 0x28]
    edx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004f685e:  // lea eax, [esp + 0x78]
    eax = (uint32_t)((uint32_t)(esp + 0x78u));
L_004f6862:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f6863:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f6864:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004f6868:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f686du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f686d:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004f686f:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004f6873:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f6876:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004f687a:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f687d:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004f6881:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004f6885:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f6888:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004f688c:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f6891u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f6891:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004f6895:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004f6899:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f689a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f689b:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004f689f:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f68a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f68a4:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004f68a6:  // lea esi, [esp + 0x18]
    esi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004f68aa:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004f68ae:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f68b1:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004f68b5:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f68ba:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f68bd:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004f68c1:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f68c4:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004f68c8:  // mov eax, dword ptr [esp + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_004f68cf:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004f68d1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f68d3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f68d4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f68d5:  // add esp, 0x150
    t0 = ladd<32>(esp, 0x150u, f);
    esp = (uint32_t)(t0);
L_004f68db:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f6560, 004f6560)
