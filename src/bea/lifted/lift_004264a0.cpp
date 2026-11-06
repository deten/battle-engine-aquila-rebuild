// lifted from 004264a0 (vslot6, 1105 bytes, 330 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004264a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004264a0;
L_004264a0:  // sub esp, 0x14c
    t0 = lsub<32>(esp, 0x14cu, f);
    esp = (uint32_t)(t0);
L_004264a6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004264a7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004264a8:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004264aa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004264ab:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004264ac:  // mov eax, dword ptr [ebp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004264af:  // test ah, 4
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x4u, f);
L_004264b2:  // je 0x4268e4
    if (f.zf) goto L_004268e4;
L_004264b8:  // mov esi, dword ptr [esp + 0x160]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_004264bf:  // mov ecx, dword ptr [ebp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_004264c2:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004264c5:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004264c7:  // je 0x4268e4
    if (f.zf) goto L_004268e4;
L_004264cd:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004264d0:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004264d3:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_004264d5:  // je 0x4268e4
    if (f.zf) goto L_004268e4;
L_004264db:  // mov cx, word ptr [eax + 0x2c]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + 0x2cu))) & 0xffffu);
L_004264df:  // test cl, 0x10
    t0 = llog<8>((ecx & 0xffu) & 0x10u, f);
L_004264e2:  // jne 0x4268e4
    if (!f.zf) goto L_004268e4;
L_004264e8:  // test byte ptr [edx + 0x2c], 0x10
    t0 = llog<8>(M8((uint32_t)(edx + 0x2cu)) & 0x10u, f);
L_004264ec:  // jne 0x4268e4
    if (!f.zf) goto L_004268e4;
L_004264f2:  // test cl, 4
    t0 = llog<8>((ecx & 0xffu) & 0x4u, f);
L_004264f5:  // mov edi, 0x100
    edi = (uint32_t)(0x100u);
L_004264fa:  // je 0x426512
    if (f.zf) goto L_00426512;
L_004264fc:  // test dword ptr [eax + 0x34], edi
    t0 = llog<32>(M32((uint32_t)(eax + 0x34u)) & edi, f);
L_004264ff:  // je 0x426512
    if (f.zf) goto L_00426512;
L_00426501:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_00426504:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00426507:  // call dword ptr [eax + 0x70]
    t0 = M32((uint32_t)(eax + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042650au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042650a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042650c:  // je 0x4268e4
    if (f.zf) goto L_004268e4;
L_00426512:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00426515:  // test byte ptr [eax + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(eax + 0x2cu)) & 0x4u, f);
L_00426519:  // je 0x426531
    if (f.zf) goto L_00426531;
L_0042651b:  // test dword ptr [eax + 0x34], edi
    t0 = llog<32>(M32((uint32_t)(eax + 0x34u)) & edi, f);
L_0042651e:  // je 0x426531
    if (f.zf) goto L_00426531;
L_00426520:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00426523:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_00426526:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426529u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426529:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042652b:  // je 0x4268e4
    if (f.zf) goto L_004268e4;
L_00426531:  // mov esi, dword ptr [esi + 0xc]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00426534:  // mov edx, dword ptr [ebp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_00426537:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00426539:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0042653b:  // shr eax, 6
    t0 = lshr<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0042653e:  // shr ecx, 6
    t0 = lshr<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00426541:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_00426544:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00426547:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00426549:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0042654d:  // jl 0x426553
    if ((f.sf != f.of)) goto L_00426553;
L_0042654f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00426553:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00426555:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00426557:  // shr eax, 2
    t0 = lshr<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0042655a:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042655d:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_00426560:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00426562:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00426566:  // jle 0x42656e
    if ((f.zf || f.sf != f.of)) goto L_0042656e;
L_00426568:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0042656c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042656e:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00426570:  // shr eax, 4
    t0 = lshr<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00426573:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_00426576:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00426578:  // jge 0x426580
    if ((f.sf == f.of)) goto L_00426580;
L_0042657a:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0042657e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00426580:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00426582:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00426585:  // shr eax, 2
    t0 = lshr<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00426588:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_0042658a:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_0042658d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0042658f:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_00426593:  // jle 0x42659b
    if ((f.zf || f.sf != f.of)) goto L_0042659b;
L_00426595:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00426599:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0042659b:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0042659d:  // shr eax, 4
    t0 = lshr<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004265a0:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_004265a3:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004265a5:  // jge 0x4265ad
    if ((f.sf == f.of)) goto L_004265ad;
L_004265a7:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004265ab:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004265ad:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_004265b0:  // jg 0x4265be
    if ((!f.zf && f.sf == f.of)) goto L_004265be;
L_004265b2:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004265b5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004265b7:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004265bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004265ba:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004265bc:  // jmp 0x4265d6
    goto L_004265d6;
L_004265be:  // mov edi, dword ptr [ebp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_004265c1:  // and esi, 0x200
    t0 = llog<32>(esi & 0x200u, f);
    esi = (uint32_t)(t0);
L_004265c7:  // cmp esi, 0x200
    t0 = lsub<32>(esi, 0x200u, f);
L_004265cd:  // jne 0x4265d6
    if (!f.zf) goto L_004265d6;
L_004265cf:  // mov dword ptr [edi + 0x18], 1
    M32((uint32_t)(edi + 0x18u)) = (uint32_t)(0x1u);
L_004265d6:  // cmp ebx, 1
    t0 = lsub<32>(ebx, 0x1u, f);
L_004265d9:  // jg 0x4265eb
    if ((!f.zf && f.sf == f.of)) goto L_004265eb;
L_004265db:  // mov ecx, dword ptr [esp + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_004265e2:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004265e4:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004265e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004265e7:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004265e9:  // jmp 0x426604
    goto L_00426604;
L_004265eb:  // mov eax, dword ptr [esp + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_004265f2:  // mov esi, dword ptr [eax + 0x18]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_004265f5:  // mov eax, dword ptr [ebp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004265f8:  // test ah, 2
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x2u, f);
L_004265fb:  // je 0x426604
    if (f.zf) goto L_00426604;
L_004265fd:  // mov dword ptr [esi + 0x18], 1
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(0x1u);
L_00426604:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00426607:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00426609:  // mov dword ptr [esp + 0x4c], ebx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ebx);
L_0042660d:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_00426610:  // fadd dword ptr [edi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x4u)));
L_00426613:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00426617:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_0042661a:  // fadd dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x20u)));
L_0042661d:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00426621:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00426625:  // fld dword ptr [edi + 0xc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xcu)));
L_00426628:  // fadd dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x24u)));
L_0042662b:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0042662f:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_00426633:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00426637:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0042663b:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0042663f:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00426643:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_00426647:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_0042664b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0042664d:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_00426651:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00426652:  // call dword ptr [edx + 0x64]
    t0 = M32((uint32_t)(edx + 0x64u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426655u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426655:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00426657:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_0042665b:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0042665e:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_00426662:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00426665:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_00426669:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0042666c:  // mov eax, dword ptr [esp + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_00426673:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00426677:  // mov dword ptr [esp + 0x70], ebx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ebx);
L_0042667b:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0042667e:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00426681:  // fadd dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_00426684:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00426688:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0042668b:  // fadd dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x20u)));
L_0042668e:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00426692:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00426696:  // fld dword ptr [esi + 0xc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xcu)));
L_00426699:  // fadd dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x24u)));
L_0042669c:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004266a0:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004266a4:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_004266a8:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004266ac:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004266b0:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004266b4:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_004266b8:  // mov dword ptr [esp + 0x68], edx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edx);
L_004266bc:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004266be:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004266c2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004266c3:  // call dword ptr [edx + 0x64]
    t0 = M32((uint32_t)(edx + 0x64u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004266c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004266c6:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004266c8:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_004266cc:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004266cf:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004266d3:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004266d7:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_004266db:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004266de:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_004266e2:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004266e5:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004266e9:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004266ed:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_004266f1:  // mov dword ptr [esp + 0x74], ebx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ebx);
L_004266f5:  // mov dword ptr [esp + 0xf4], ebx
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(ebx);
L_004266fc:  // mov dword ptr [esp + 0x11c], ebx
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(ebx);
L_00426703:  // mov dword ptr [esp + 0x13c], ebx
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(ebx);
L_0042670a:  // mov dword ptr [esp + 0x144], ebx
    M32((uint32_t)(esp + 0x144u)) = (uint32_t)(ebx);
L_00426711:  // mov dword ptr [esp + 0x140], eax
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(eax);
L_00426718:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0042671c:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_00426720:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00426724:  // mov dword ptr [esp + 0x10c], ecx
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(ecx);
L_0042672b:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0042672f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00426733:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00426737:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_0042673b:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0042673f:  // mov dword ptr [esp + 0x118], ecx
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(ecx);
L_00426746:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0042674a:  // mov dword ptr [esp + 0x110], edx
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(edx);
L_00426751:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00426755:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00426759:  // mov dword ptr [esp + 0x114], eax
    M32((uint32_t)(esp + 0x114u)) = (uint32_t)(eax);
L_00426760:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_00426765:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00426767:  // jne 0x4267b7
    if (!f.zf) goto L_004267b7;
L_00426769:  // cmp dword ptr [esp + 0x24], eax
    t0 = lsub<32>(M32((uint32_t)(esp + 0x24u)), eax, f);
L_0042676d:  // jne 0x4267b7
    if (!f.zf) goto L_004267b7;
L_0042676f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00426771:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00426773:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426776u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426776:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00426779:  // jne 0x42688f
    if (!f.zf) goto L_0042688f;
L_0042677f:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00426781:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00426783:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426786u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426786:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00426789:  // jne 0x42688f
    if (!f.zf) goto L_0042688f;
L_0042678f:  // mov ecx, dword ptr [esp + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_00426796:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00426799:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_0042679c:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_0042679e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004267a0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004267a3:  // je 0x426879
    if (f.zf) goto L_00426879;
L_004267a9:  // mov dword ptr [edi + 0x18], 1
    M32((uint32_t)(edi + 0x18u)) = (uint32_t)(0x1u);
L_004267b0:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004267b2:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004267b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004267b5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004267b7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004267b9:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_004267bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004267be:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004267c2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004267c3:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_004267c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004267c8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004267c9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004267cb:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004267ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004267ce:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004267d0:  // je 0x4268e4
    if (f.zf) goto L_004268e4;
L_004267d6:  // cmp dword ptr [esp + 0x28], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x28u)), ebx, f);
L_004267da:  // je 0x4268ae
    if (f.zf) goto L_004268ae;
L_004267e0:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004267e3:  // mov bl, 0x20
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
L_004267e5:  // test byte ptr [ecx + 0x34], bl
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & (ebx & 0xffu), f);
L_004267e8:  // jne 0x426829
    if (!f.zf) goto L_00426829;
L_004267ea:  // cmp dword ptr [esp + 0x4c], 1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x4cu)), 0x1u, f);
L_004267ef:  // jne 0x426829
    if (!f.zf) goto L_00426829;
L_004267f1:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004267f5:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004267f8:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004267fc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004267fd:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00426801:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00426805:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_00426808:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0042680c:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00426810:  // fsub dword ptr [edi + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0xcu)));
L_00426813:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00426817:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00426819:  // call dword ptr [edx + 0x4c]
    t0 = M32((uint32_t)(edx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042681cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042681c:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0042681f:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00426823:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00426824:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00426826:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426829u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426829:  // mov edi, dword ptr [esp + 0x160]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_00426830:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00426833:  // test byte ptr [ecx + 0x34], bl
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & (ebx & 0xffu), f);
L_00426836:  // jne 0x4268b5
    if (!f.zf) goto L_004268b5;
L_00426838:  // cmp dword ptr [esp + 0x70], 1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x70u)), 0x1u, f);
L_0042683d:  // jne 0x4268b5
    if (!f.zf) goto L_004268b5;
L_0042683f:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00426843:  // fsub dword ptr [esi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x4u)));
L_00426846:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0042684a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042684b:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0042684f:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00426853:  // fsub dword ptr [esi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x8u)));
L_00426856:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0042685a:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0042685e:  // fsub dword ptr [esi + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xcu)));
L_00426861:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00426865:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00426867:  // call dword ptr [edx + 0x4c]
    t0 = M32((uint32_t)(edx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042686au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042686a:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0042686d:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_00426871:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00426872:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00426874:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426877u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426877:  // jmp 0x4268b5
    goto L_004268b5;
L_00426879:  // mov dword ptr [esi + 0x18], 1
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(0x1u);
L_00426880:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_00426883:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00426885:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426888u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426888:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0042688a:  // jmp 0x4267b7
    goto L_004267b7;
L_0042688f:  // push 0x624730
    t0 = 0x624730u; esp -= 4; M32(esp) = t0;
L_00426894:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00426899:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042689eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042689e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004268a1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004268a2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004268a3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004268a4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004268a5:  // add esp, 0x14c
    t0 = ladd<32>(esp, 0x14cu, f);
    esp = (uint32_t)(t0);
L_004268ab:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004268ae:  // mov edi, dword ptr [esp + 0x160]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_004268b5:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004268b8:  // mov esi, dword ptr [edi + 8]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_004268bb:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_004268bf:  // mov dword ptr [esp + 0x74], 1
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x1u);
L_004268c7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004268c9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004268ca:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004268cb:  // call dword ptr [edx + 0x9c]
    t0 = M32((uint32_t)(edx + 0x9cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004268d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004268d1:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004268d4:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004268d6:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_004268da:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004268db:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004268dc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004268de:  // call dword ptr [edx + 0x9c]
    t0 = M32((uint32_t)(edx + 0x9cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004268e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004268e4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004268e5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004268e6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004268e7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004268e8:  // add esp, 0x14c
    t0 = ladd<32>(esp, 0x14cu, f);
    esp = (uint32_t)(t0);
L_004268ee:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004264a0, 004264a0)
