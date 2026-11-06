// lifted from 004e04c0 (FUN_004e04c0, 488 bytes, 152 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e04c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e04c0;
L_004e04c0:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004e04c4:  // sub esp, 0x18
    t0 = lsub<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004e04c7:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004e04cb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e04cc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e04cd:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e04d0:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004e04d2:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004e04d5:  // push 0x632464
    t0 = 0x632464u; esp -= 4; M32(esp) = t0;
L_004e04da:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004e04df:  // mov dword ptr [edi + 0x20], eax
    M32((uint32_t)(edi + 0x20u)) = (uint32_t)(eax);
L_004e04e2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e04e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e04e7:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004e04eb:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e04ee:  // mov dword ptr [0x662aac], ecx
    M32((uint32_t)(0x662aacu)) = (uint32_t)(ecx);
L_004e04f4:  // mov esi, dword ptr [edi + 0xc]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004e04f7:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e04f9:  // je 0x4e06a0
    if (f.zf) goto L_004e06a0;
L_004e04ff:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e0500:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e0503:  // mov dword ptr [esp + 0x28], 0x7f
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x7fu);
L_004e050b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e050d:  // je 0x4e05b1
    if (f.zf) goto L_004e05b1;
L_004e0513:  // lea edx, [esi + 0x44]
    edx = (uint32_t)((uint32_t)(esi + 0x44u));
L_004e0516:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e0518:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004e051a:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004e051e:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004e0521:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004e0525:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004e0528:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004e052c:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004e052f:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004e0533:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004e0538:  // call 0x46f2c0
    t0 = 0x0046f2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e053du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e053d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e0541:  // fchs 
    ST(0) = -ST(0);
L_004e0543:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004e0547:  // fchs 
    ST(0) = -ST(0);
L_004e0549:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e054d:  // fchs 
    ST(0) = -ST(0);
L_004e054f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e0551:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e0553:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e0555:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e0557:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e0559:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004e055b:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004e055d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e055f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e0561:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004e0563:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e0565:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e0567:  // fsubr dword ptr [0x5d85d0]
    ST(0) = ((long double)F32((uint32_t)(0x5d85d0u))) - (ST(0));
L_004e056d:  // fcom dword ptr [0x5d85d0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d0u)));
L_004e0573:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e0575:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e0578:  // jne 0x4e0584
    if (!f.zf) goto L_004e0584;
L_004e057a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e057c:  // fld dword ptr [0x5d85d0]
    lpush(x, (long double)F32((uint32_t)(0x5d85d0u)));
L_004e0582:  // jmp 0x4e0599
    goto L_004e0599;
L_004e0584:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004e058a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e058c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e058f:  // je 0x4e0599
    if (f.zf) goto L_004e0599;
L_004e0591:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e0593:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004e0599:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_004e059f:  // fmul dword ptr [0x5d8cc8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc8u)));
L_004e05a5:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e05a9:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004e05ad:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004e05b1:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004e05b4:  // fmul dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004e05b7:  // mov ebx, dword ptr [esi + 0x14]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004e05ba:  // cmp ebx, 1
    t0 = lsub<32>(ebx, 0x1u, f);
L_004e05bd:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e05bf:  // jne 0x4e05d7
    if (!f.zf) goto L_004e05d7;
L_004e05c1:  // fmul dword ptr [edi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x24u)));
L_004e05c4:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_004e05c7:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004e05cd:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e05d1:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004e05d5:  // jmp 0x4e05eb
    goto L_004e05eb;
L_004e05d7:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_004e05da:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_004e05dd:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004e05e3:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e05e7:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004e05eb:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_004e05ee:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_004e05f1:  // shl eax, 3
    t0 = lshl<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_004e05f4:  // cmp eax, 0x2710
    t0 = lsub<32>(eax, 0x2710u, f);
L_004e05f9:  // jle 0x4e0600
    if ((f.zf || f.sf != f.of)) goto L_004e0600;
L_004e05fb:  // mov eax, 0x2710
    eax = (uint32_t)(0x2710u);
L_004e0600:  // add eax, 0xffffd8f0
    t0 = ladd<32>(eax, 0xffffd8f0u, f);
    eax = (uint32_t)(t0);
L_004e0605:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e0606:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e0608:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e060a:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_004e060c:  // cmp ecx, 0xffffd8f0
    t0 = lsub<32>(ecx, 0xffffd8f0u, f);
L_004e0612:  // jge 0x4e0619
    if ((f.sf == f.of)) goto L_004e0619;
L_004e0614:  // mov ecx, 0xffffd8f0
    ecx = (uint32_t)(0xffffd8f0u);
L_004e0619:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004e061d:  // cmp ebx, 1
    t0 = lsub<32>(ebx, 0x1u, f);
L_004e0620:  // jne 0x4e0636
    if (!f.zf) goto L_004e0636;
L_004e0622:  // fmul dword ptr [edi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x24u)));
L_004e0625:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e0627:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_004e062a:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e062e:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004e0632:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e0634:  // jmp 0x4e0648
    goto L_004e0648;
L_004e0636:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_004e0639:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e063b:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_004e063e:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e0642:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004e0646:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e0648:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_004e064b:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_004e064e:  // shl eax, 3
    t0 = lshl<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_004e0651:  // cmp eax, 0x2710
    t0 = lsub<32>(eax, 0x2710u, f);
L_004e0656:  // jle 0x4e065d
    if ((f.zf || f.sf != f.of)) goto L_004e065d;
L_004e0658:  // mov eax, 0x2710
    eax = (uint32_t)(0x2710u);
L_004e065d:  // add eax, 0xffffd8f0
    t0 = ladd<32>(eax, 0xffffd8f0u, f);
    eax = (uint32_t)(t0);
L_004e0662:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e0663:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e0665:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004e0667:  // cmp eax, 0xffffd8f0
    t0 = lsub<32>(eax, 0xffffd8f0u, f);
L_004e066c:  // jge 0x4e0673
    if ((f.sf == f.of)) goto L_004e0673;
L_004e066e:  // mov eax, 0xffffd8f0
    eax = (uint32_t)(0xffffd8f0u);
L_004e0673:  // mov dword ptr [esi + 0x68], eax
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(eax);
L_004e0676:  // mov al, byte ptr [esi + 8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x8u))) & 0xffu);
L_004e0679:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004e067b:  // mov dword ptr [esi + 0x64], ecx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ecx);
L_004e067e:  // je 0x4e0694
    if (f.zf) goto L_004e0694;
L_004e0680:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004e0683:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e0685:  // jl 0x4e0694
    if ((f.sf != f.of)) goto L_004e0694;
L_004e0687:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e0689:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e068a:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004e068f:  // call 0x517ae0
    t0 = 0x00517ae0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e0694u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e0694:  // mov esi, dword ptr [esi + 0x74]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004e0697:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e0699:  // jne 0x4e0500
    if (!f.zf) goto L_004e0500;
L_004e069f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e06a0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e06a1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e06a2:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004e06a5:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e04c0, 004e04c0)
