// lifted from 004bc510 (FUN_004bc510, 448 bytes, 158 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004bc510(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004bc510;
L_004bc510:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004bc513:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bc517:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bc518:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bc519:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bc51a:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004bc51c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bc51d:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004bc521:  // jl 0x4bc6c1
    if ((f.sf != f.of)) goto L_004bc6c1;
L_004bc527:  // cmp edx, 0xff
    t0 = lsub<32>(edx, 0xffu, f);
L_004bc52d:  // jg 0x4bc6c1
    if ((!f.zf && f.sf == f.of)) goto L_004bc6c1;
L_004bc533:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004bc537:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004bc539:  // jl 0x4bc6c1
    if ((f.sf != f.of)) goto L_004bc6c1;
L_004bc53f:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_004bc545:  // jg 0x4bc6c1
    if ((!f.zf && f.sf == f.of)) goto L_004bc6c1;
L_004bc54b:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bc54f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004bc551:  // jl 0x4bc6c1
    if ((f.sf != f.of)) goto L_004bc6c1;
L_004bc557:  // cmp ecx, 0xff
    t0 = lsub<32>(ecx, 0xffu, f);
L_004bc55d:  // jg 0x4bc6c1
    if ((!f.zf && f.sf == f.of)) goto L_004bc6c1;
L_004bc563:  // mov ebp, dword ptr [esp + 0x30]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004bc567:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004bc569:  // jl 0x4bc6c1
    if ((f.sf != f.of)) goto L_004bc6c1;
L_004bc56f:  // cmp ebp, 0xff
    t0 = lsub<32>(ebp, 0xffu, f);
L_004bc575:  // jg 0x4bc6c1
    if ((!f.zf && f.sf == f.of)) goto L_004bc6c1;
L_004bc57b:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_004bc57d:  // jle 0x4bc58d
    if ((f.zf || f.sf != f.of)) goto L_004bc58d;
L_004bc57f:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004bc581:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004bc583:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004bc587:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004bc58b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004bc58d:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_004bc58f:  // jle 0x4bc59b
    if ((f.zf || f.sf != f.of)) goto L_004bc59b;
L_004bc591:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004bc593:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_004bc595:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_004bc599:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004bc59b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004bc59d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004bc59f:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004bc5a1:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_004bc5a3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004bc5a5:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004bc5a9:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004bc5ad:  // jne 0x4bc5b7
    if (!f.zf) goto L_004bc5b7;
L_004bc5af:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004bc5b1:  // je 0x4bc642
    if (f.zf) goto L_004bc642;
L_004bc5b7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004bc5b9:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_004bc5c1:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004bc5c3:  // jge 0x4bc5c7
    if ((f.sf == f.of)) goto L_004bc5c7;
L_004bc5c5:  // neg ebx
    t0 = lneg<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004bc5c7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004bc5c9:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004bc5cb:  // jge 0x4bc5cf
    if ((f.sf == f.of)) goto L_004bc5cf;
L_004bc5cd:  // neg edi
    t0 = lneg<32>(edi, f);
    edi = (uint32_t)(t0);
L_004bc5cf:  // cmp ebx, edi
    t0 = lsub<32>(ebx, edi, f);
L_004bc5d1:  // jle 0x4bc64e
    if ((f.zf || f.sf != f.of)) goto L_004bc64e;
L_004bc5d3:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004bc5d7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004bc5d9:  // je 0x4bc5e7
    if (f.zf) goto L_004bc5e7;
L_004bc5db:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004bc5df:  // fidiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004bc5e3:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004bc5e7:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bc5eb:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004bc5ed:  // lea edi, [ecx + 1]
    edi = (uint32_t)((uint32_t)(ecx + 0x1u));
L_004bc5f0:  // cmp edx, edi
    t0 = lsub<32>(edx, edi, f);
L_004bc5f2:  // jge 0x4bc640
    if ((f.sf == f.of)) goto L_004bc640;
L_004bc5f4:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004bc5f6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004bc5f8:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bc5fc:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bc600:  // and ecx, 0x80000007
    t0 = llog<32>(ecx & 0x80000007u, f);
    ecx = (uint32_t)(t0);
L_004bc606:  // jns 0x4bc60d
    if (!f.sf) goto L_004bc60d;
L_004bc608:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004bc609:  // or ecx, 0xfffffff8
    t0 = llog<32>(ecx | 0xfffffff8u, f);
    ecx = (uint32_t)(t0);
L_004bc60c:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004bc60d:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_004bc612:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bc616:  // shl edx, cl
    t0 = lshl<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_004bc618:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004bc61a:  // sar ecx, 3
    t0 = lsar<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_004bc61d:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004bc620:  // add ecx, esi
    t0 = ladd<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_004bc622:  // mov cl, byte ptr [ecx + ebx]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + ebx))) & 0xffu);
L_004bc625:  // test cl, dl
    t0 = llog<8>((ecx & 0xffu) & (edx & 0xffu), f);
L_004bc627:  // je 0x4bc6bf
    if (f.zf) goto L_004bc6bf;
L_004bc62d:  // cmp eax, dword ptr [esp + 0x2c]
    t0 = lsub<32>(eax, M32((uint32_t)(esp + 0x2cu)), f);
L_004bc631:  // jne 0x4bc637
    if (!f.zf) goto L_004bc637;
L_004bc633:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_004bc635:  // je 0x4bc640
    if (f.zf) goto L_004bc640;
L_004bc637:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004bc63b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004bc63c:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004bc63e:  // jl 0x4bc5f4
    if ((f.sf != f.of)) goto L_004bc5f4;
L_004bc640:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004bc642:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004bc643:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bc644:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004bc645:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004bc647:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004bc648:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004bc64b:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004bc64e:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004bc652:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004bc654:  // je 0x4bc662
    if (f.zf) goto L_004bc662;
L_004bc656:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004bc65a:  // fidiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004bc65e:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004bc662:  // lea edi, [ebp + 1]
    edi = (uint32_t)((uint32_t)(ebp + 0x1u));
L_004bc665:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_004bc667:  // jge 0x4bc640
    if ((f.sf == f.of)) goto L_004bc640;
L_004bc669:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bc66d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004bc66f:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bc673:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bc677:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004bc679:  // jne 0x4bc67f
    if (!f.zf) goto L_004bc67f;
L_004bc67b:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_004bc67d:  // je 0x4bc640
    if (f.zf) goto L_004bc640;
L_004bc67f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004bc681:  // and ecx, 0x80000007
    t0 = llog<32>(ecx & 0x80000007u, f);
    ecx = (uint32_t)(t0);
L_004bc687:  // jns 0x4bc68e
    if (!f.sf) goto L_004bc68e;
L_004bc689:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004bc68a:  // or ecx, 0xfffffff8
    t0 = llog<32>(ecx | 0xfffffff8u, f);
    ecx = (uint32_t)(t0);
L_004bc68d:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004bc68e:  // sar eax, 3
    t0 = lsar<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_004bc691:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_004bc696:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004bc699:  // shl edx, cl
    t0 = lshl<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_004bc69b:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bc69f:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004bc6a1:  // mov al, byte ptr [eax + ecx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + ecx))) & 0xffu);
L_004bc6a4:  // test al, dl
    t0 = llog<8>((eax & 0xffu) & (edx & 0xffu), f);
L_004bc6a6:  // je 0x4bc6bf
    if (f.zf) goto L_004bc6bf;
L_004bc6a8:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004bc6ac:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004bc6ad:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_004bc6af:  // jl 0x4bc669
    if ((f.sf != f.of)) goto L_004bc669;
L_004bc6b1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004bc6b2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bc6b3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004bc6b4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004bc6b6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004bc6b8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004bc6b9:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004bc6bc:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004bc6bf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004bc6c1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004bc6c2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bc6c3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004bc6c4:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004bc6c9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004bc6ca:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004bc6cd:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004bc510, 004bc510)
