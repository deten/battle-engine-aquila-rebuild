// lifted from 0053c510 (FUN_0053c510, 2068 bytes, 608 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053c510(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053c510;
L_0053c510:  // sub esp, 0xb8
    t0 = lsub<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_0053c516:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053c517:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053c518:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053c519:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053c51a:  // mov edi, dword ptr [esp + 0xcc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_0053c521:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0053c523:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053c525:  // mov dword ptr [esp + 0x8c], ebx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(ebx);
L_0053c52c:  // call 0x4f99f0
    t0 = 0x004f99f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c531u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c531:  // mov esi, dword ptr [0x65042c]
    esi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053c537:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0053c53f:  // lea eax, [esi + esi*2]
    eax = (uint32_t)((uint32_t)(esi + esi * 2u));
L_0053c542:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053c545:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053c54a:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0053c54d:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c54f:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053c551:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c553:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053c558:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c55a:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c55c:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053c55f:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0053c561:  // lea ecx, [esi + esi*2]
    ecx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_0053c564:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0053c567:  // shl ecx, 2
    t0 = lshl<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0053c56a:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053c56c:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c56e:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c570:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c572:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053c575:  // sub ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0053c577:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053c579:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0053c57d:  // fimul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0053c581:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0053c585:  // call 0x406040
    t0 = 0x00406040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c58au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c58a:  // fdivr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) / (ST(0));
L_0053c58e:  // mov esi, dword ptr [0x65042c]
    esi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053c594:  // lea eax, [esi + esi*2]
    eax = (uint32_t)((uint32_t)(esi + esi * 2u));
L_0053c597:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053c59a:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053c59f:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0053c5a2:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c5a4:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053c5a6:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0053c5aa:  // fld dword ptr [edi + 0xfc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xfcu)));
L_0053c5b0:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053c5b4:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c5b6:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c5b8:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c5ba:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053c5bf:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053c5c2:  // sub ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0053c5c4:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0053c5cc:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_0053c5d0:  // lea ecx, [esi + esi*4]
    ecx = (uint32_t)((uint32_t)(esi + esi * 4u));
L_0053c5d3:  // lea esi, [esi + esi*4]
    esi = (uint32_t)((uint32_t)(esi + esi * 4u));
L_0053c5d6:  // lea ecx, [ecx + ecx*8]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 8u));
L_0053c5d9:  // shl ecx, 3
    t0 = lshl<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_0053c5dc:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053c5de:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c5e0:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053c5e5:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c5e7:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c5e9:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053c5ec:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0053c5ee:  // lea ecx, [esi + esi*8]
    ecx = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0053c5f1:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0053c5f4:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053c5f6:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c5f8:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c5fa:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c5fc:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053c5ff:  // sub ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0053c601:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053c603:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0053c607:  // fild qword ptr [esp + 0x10]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x10u)));
L_0053c60b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053c60d:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0053c611:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053c613:  // call 0x40c630
    t0 = 0x0040c630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c618u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c618:  // fdivr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) / (ST(0));
L_0053c61c:  // mov eax, dword ptr [0x65042c]
    eax = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053c621:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053c624:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0053c627:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053c62c:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0053c62f:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053c631:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0053c635:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053c639:  // mov eax, dword ptr [ebx + 0x3c10]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x3c10u)));
L_0053c63f:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c641:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053c643:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053c645:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053c648:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0053c64a:  // mov ecx, dword ptr [ebx + eax*4 + 0x3f04]
    ecx = (uint32_t)(M32((uint32_t)(ebx + eax * 4u + 0x3f04u)));
L_0053c651:  // mov dword ptr [esp + 0x48], esi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(esi);
L_0053c655:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c65au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c65a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053c65c:  // push 0x800
    t0 = 0x800u; esp -= 4; M32(esp) = t0;
L_0053c661:  // lea edx, [esp + 0xac]
    edx = (uint32_t)((uint32_t)(esp + 0xacu));
L_0053c668:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053c66a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053c66b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053c66d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c66e:  // call dword ptr [ecx + 0x4c]
    t0 = M32((uint32_t)(ecx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c671u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c671:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053c673:  // jl 0x53cd17
    if ((f.sf != f.of)) goto L_0053cd17;
L_0053c679:  // mov eax, dword ptr [0x65042c]
    eax = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053c67e:  // mov edi, dword ptr [esp + 0xac]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0053c685:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0053c687:  // mov dword ptr [esp + 0x7c], 8
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x8u);
L_0053c68f:  // lea ecx, [eax + eax]
    ecx = (uint32_t)((uint32_t)(eax + eax));
L_0053c692:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053c694:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0053c696:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0053c699:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0053c69b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0053c69d:  // mov esi, 3
    esi = (uint32_t)(0x3u);
L_0053c6a2:  // and ecx, esi
    t0 = llog<32>(ecx & esi, f);
    ecx = (uint32_t)(t0);
L_0053c6a4:  // mov dword ptr [esp + 0x6c], esi
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(esi);
L_0053c6a8:  // rep stosb byte ptr es:[edi], al
    while (ecx) { M8(edi) = (uint8_t)eax; edi += 1; ecx--; }
L_0053c6aa:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_0053c6b1:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_0053c6b6:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0053c6b8:  // mov ecx, dword ptr [esp + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_0053c6bf:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0053c6c3:  // mov dword ptr [esp + 0x70], esi
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(esi);
L_0053c6c7:  // mov edx, dword ptr [ecx + 0x574]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x574u)));
L_0053c6cd:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0053c6cf:  // mov dword ptr [esp + 0x74], esi
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(esi);
L_0053c6d3:  // mov dword ptr [esp + 0x5c], esi
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(esi);
L_0053c6d7:  // mov eax, dword ptr [edx + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x2cu)));
L_0053c6da:  // mov edx, dword ptr [esp + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0053c6e1:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0053c6e3:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0053c6e7:  // setne cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0053c6ea:  // mov dword ptr [esp + 0x60], esi
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(esi);
L_0053c6ee:  // mov dword ptr [esp + 0x64], esi
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esi);
L_0053c6f2:  // cmp eax, dword ptr [edx + ecx*4 + 0x3c14]
    t0 = lsub<32>(eax, M32((uint32_t)(edx + ecx * 4u + 0x3c14u)), f);
L_0053c6f9:  // mov dword ptr [esp + 0x78], edi
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(edi);
L_0053c6fd:  // mov ebx, edi
    ebx = (uint32_t)(edi);
L_0053c6ff:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_0053c701:  // mov esi, 8
    esi = (uint32_t)(0x8u);
L_0053c706:  // jge 0x53c714
    if ((f.sf == f.of)) goto L_0053c714;
L_0053c708:  // mov dword ptr [esp + 0x78], 0xf
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0xfu);
L_0053c710:  // mov dword ptr [esp + 0x7c], ebx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ebx);
L_0053c714:  // mov eax, dword ptr [esp + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_0053c71b:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0053c721:  // fsub dword ptr [eax + 0x2d4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x2d4u)));
L_0053c727:  // fcom dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
L_0053c72d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0053c72f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0053c732:  // jne 0x53c73c
    if (!f.zf) goto L_0053c73c;
L_0053c734:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053c736:  // fld dword ptr [0x5d8ba0]
    lpush(x, (long double)F32((uint32_t)(0x5d8ba0u)));
L_0053c73c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0053c73e:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0053c744:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0053c74a:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0053c74e:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_0053c754:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0053c756:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0053c759:  // je 0x53c79b
    if (f.zf) goto L_0053c79b;
L_0053c75b:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0053c761:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_0053c765:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0053c767:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0053c76b:  // fmul dword ptr [0x5d85d4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d4u)));
L_0053c771:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0053c773:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0053c777:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053c77b:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0053c77f:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0053c783:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053c787:  // fmul dword ptr [0x5d8c44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c44u)));
L_0053c78d:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0053c791:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0053c795:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053c799:  // jmp 0x53c7b7
    goto L_0053c7b7;
L_0053c79b:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0053c79f:  // cmp eax, dword ptr [edx + ecx*4 + 0x3c1c]
    t0 = lsub<32>(eax, M32((uint32_t)(edx + ecx * 4u + 0x3c1cu)), f);
L_0053c7a6:  // jle 0x53c7b7
    if ((f.zf || f.sf != f.of)) goto L_0053c7b7;
L_0053c7a8:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_0053c7ad:  // mov edi, 5
    edi = (uint32_t)(0x5u);
L_0053c7b2:  // mov esi, 8
    esi = (uint32_t)(0x8u);
L_0053c7b7:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0053c7bb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053c7bd:  // mov dword ptr [edx + ecx*4 + 0x3c1c], eax
    M32((uint32_t)(edx + ecx * 4u + 0x3c1cu)) = (uint32_t)(eax);
L_0053c7c4:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0053c7c8:  // mov dword ptr [edx + ecx*4 + 0x3c14], eax
    M32((uint32_t)(edx + ecx * 4u + 0x3c14u)) = (uint32_t)(eax);
L_0053c7cf:  // mov ecx, 0x8aa4e8
    ecx = (uint32_t)(0x8aa4e8u);
L_0053c7d4:  // call 0x4881e0
    t0 = 0x004881e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c7d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c7d9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053c7db:  // jne 0x53c7f3
    if (!f.zf) goto L_0053c7f3;
L_0053c7dd:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0053c7df:  // mov dword ptr [esp + 0x7c], ebx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ebx);
L_0053c7e3:  // mov dword ptr [esp + 0x78], ebx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ebx);
L_0053c7e7:  // mov dword ptr [esp + 0x74], ebx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ebx);
L_0053c7eb:  // mov dword ptr [esp + 0x70], ebx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ebx);
L_0053c7ef:  // mov dword ptr [esp + 0x6c], ebx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ebx);
L_0053c7f3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053c7f5:  // mov ecx, 0x8aa4e8
    ecx = (uint32_t)(0x8aa4e8u);
L_0053c7fa:  // call 0x4881e0
    t0 = 0x004881e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c7ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c7ff:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053c801:  // jne 0x53c819
    if (!f.zf) goto L_0053c819;
L_0053c803:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0053c805:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0053c807:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0053c809:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0053c80b:  // mov dword ptr [esp + 0x64], ecx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ecx);
L_0053c80f:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_0053c813:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0053c817:  // jmp 0x53c81b
    goto L_0053c81b;
L_0053c819:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0053c81b:  // mov edx, dword ptr [0x650430]
    edx = (uint32_t)(M32((uint32_t)(0x650430u)));
L_0053c821:  // lea eax, [edx - 2]
    eax = (uint32_t)((uint32_t)(edx + 0xfffffffeu));
L_0053c824:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0053c826:  // je 0x53ccd9
    if (f.zf) goto L_0053ccd9;
L_0053c82c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c82e:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0053c830:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0053c833:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0053c837:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c839:  // imul ecx, edi
    t0 = limul32(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_0053c83c:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_0053c840:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c842:  // imul ecx, ebp
    t0 = limul32(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0053c845:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_0053c849:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c84b:  // imul ecx, dword ptr [esp + 0x64]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x64u)), f);
    ecx = (uint32_t)(t0);
L_0053c850:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_0053c854:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c856:  // imul ecx, dword ptr [esp + 0x60]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x60u)), f);
    ecx = (uint32_t)(t0);
L_0053c85b:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_0053c85f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c861:  // imul ecx, dword ptr [esp + 0x5c]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x5cu)), f);
    ecx = (uint32_t)(t0);
L_0053c866:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0053c86a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c86c:  // imul ecx, ebx
    t0 = limul32(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_0053c86f:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_0053c873:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c875:  // imul ecx, dword ptr [esp + 0x7c]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x7cu)), f);
    ecx = (uint32_t)(t0);
L_0053c87a:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_0053c87e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c880:  // imul ecx, dword ptr [esp + 0x78]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x78u)), f);
    ecx = (uint32_t)(t0);
L_0053c885:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_0053c889:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c88b:  // imul ecx, dword ptr [esp + 0x74]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x74u)), f);
    ecx = (uint32_t)(t0);
L_0053c890:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_0053c894:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c896:  // imul ecx, dword ptr [esp + 0x70]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x70u)), f);
    ecx = (uint32_t)(t0);
L_0053c89b:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_0053c89f:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0053c8a3:  // imul edx, ecx
    t0 = limul32(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0053c8a6:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_0053c8aa:  // lea edx, [eax*4]
    edx = (uint32_t)((uint32_t)(eax * 4u));
L_0053c8b1:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0053c8b5:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0053c8b9:  // neg edx
    t0 = lneg<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053c8bb:  // mov dword ptr [esp + 0x94], edx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edx);
L_0053c8c2:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0053c8c6:  // neg edx
    t0 = lneg<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053c8c8:  // mov dword ptr [esp + 0xa4], edx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(edx);
L_0053c8cf:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0053c8d3:  // neg edx
    t0 = lneg<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053c8d5:  // mov dword ptr [esp + 0xc0], edx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(edx);
L_0053c8dc:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_0053c8e0:  // neg edx
    t0 = lneg<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053c8e2:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_0053c8e9:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0053c8ed:  // neg edx
    t0 = lneg<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053c8ef:  // mov dword ptr [esp + 0xb4], edx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(edx);
L_0053c8f6:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0053c8fa:  // neg edx
    t0 = lneg<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053c8fc:  // mov dword ptr [esp + 0xa0], edx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(edx);
L_0053c903:  // mov edx, dword ptr [esp + 0x70]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0053c907:  // neg esi
    t0 = lneg<32>(esi, f);
    esi = (uint32_t)(t0);
L_0053c909:  // neg edi
    t0 = lneg<32>(edi, f);
    edi = (uint32_t)(t0);
L_0053c90b:  // neg ebp
    t0 = lneg<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0053c90d:  // neg ebx
    t0 = lneg<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0053c90f:  // neg edx
    t0 = lneg<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053c911:  // neg ecx
    t0 = lneg<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0053c913:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_0053c917:  // mov dword ptr [esp + 0x98], edi
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(edi);
L_0053c91e:  // mov dword ptr [esp + 0xb0], ebp
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ebp);
L_0053c925:  // mov dword ptr [esp + 0x9c], ebx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(ebx);
L_0053c92c:  // mov dword ptr [esp + 0xb8], edx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(edx);
L_0053c933:  // mov dword ptr [esp + 0xc4], ecx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(ecx);
L_0053c93a:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0053c93e:  // mov eax, dword ptr [0x650430]
    eax = (uint32_t)(M32((uint32_t)(0x650430u)));
L_0053c943:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c945:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053c947:  // lea ecx, [eax - 2]
    ecx = (uint32_t)((uint32_t)(eax + 0xfffffffeu));
L_0053c94a:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053c94e:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c950:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c952:  // shl eax, 0xc
    t0 = lshl<32>(eax, 0xcu, f);
    eax = (uint32_t)(t0);
L_0053c955:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0053c959:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0053c95d:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c95f:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c961:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0053c963:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0053c967:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c969:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0053c96c:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c96e:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0053c970:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0053c974:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c976:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0053c979:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c97b:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0053c97d:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0053c981:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c983:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c985:  // mov dword ptr [esp + 0x94], esi
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(esi);
L_0053c98c:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0053c98e:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0053c992:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c994:  // shl ebp, 4
    t0 = lshl<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0053c997:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c999:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0053c99b:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0053c99f:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c9a1:  // shl ebp, 4
    t0 = lshl<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0053c9a4:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c9a6:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0053c9a8:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0053c9ac:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c9ae:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c9b0:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0053c9b2:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0053c9b6:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c9b8:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0053c9bb:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c9bd:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_0053c9bf:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0053c9c3:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c9c5:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0053c9c8:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c9ca:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_0053c9cc:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0053c9d0:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c9d2:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c9d4:  // mov dword ptr [esp + 0x8c], edi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edi);
L_0053c9db:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0053c9dd:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0053c9e1:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c9e3:  // shl ebx, 4
    t0 = lshl<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_0053c9e6:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053c9e8:  // add ebx, eax
    t0 = ladd<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0053c9ea:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0053c9ee:  // div ecx
    { uint64_t n = ((uint64_t)edx << 32) | eax; uint32_t d = ecx; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_0053c9f0:  // shl ebx, 4
    t0 = lshl<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_0053c9f3:  // mov ecx, 0x8aa4e8
    ecx = (uint32_t)(0x8aa4e8u);
L_0053c9f8:  // add ebx, eax
    t0 = ladd<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0053c9fa:  // mov dword ptr [esp + 0x88], ebx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ebx);
L_0053ca01:  // call 0x4881e0
    t0 = 0x004881e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ca06u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ca06:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053ca08:  // je 0x53ca19
    if (f.zf) goto L_0053ca19;
L_0053ca0a:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053ca0e:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0053ca10:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0053ca12:  // mov dword ptr [esp + 0x90], esi
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(esi);
L_0053ca19:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ca1b:  // mov ecx, 0x8aa4e8
    ecx = (uint32_t)(0x8aa4e8u);
L_0053ca20:  // call 0x4881e0
    t0 = 0x004881e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ca25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ca25:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053ca27:  // je 0x53ca3f
    if (f.zf) goto L_0053ca3f;
L_0053ca29:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053ca2d:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_0053ca2f:  // add ebx, eax
    t0 = ladd<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0053ca31:  // mov dword ptr [esp + 0x88], edi
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edi);
L_0053ca38:  // mov dword ptr [esp + 0x84], ebx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ebx);
L_0053ca3f:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053ca45:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053ca49:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0053ca4b:  // lea eax, [edi + edi*2]
    eax = (uint32_t)((uint32_t)(edi + edi * 2u));
L_0053ca4e:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053ca51:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053ca56:  // shl ecx, 2
    t0 = lshl<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0053ca59:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053ca5b:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053ca5d:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053ca5f:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053ca61:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053ca64:  // je 0x53ca92
    if (f.zf) goto L_0053ca92;
L_0053ca66:  // mov word ptr [ebx], 0
    M16((uint32_t)(ebx)) = (uint16_t)(0x0u);
L_0053ca6b:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053ca71:  // add ebx, 2
    t0 = ladd<32>(ebx, 0x2u, f);
    ebx = (uint32_t)(t0);
L_0053ca74:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0053ca75:  // lea eax, [edi + edi*2]
    eax = (uint32_t)((uint32_t)(edi + edi * 2u));
L_0053ca78:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053ca7b:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053ca80:  // shl ecx, 2
    t0 = lshl<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0053ca83:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053ca85:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053ca87:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053ca89:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053ca8b:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053ca8e:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053ca90:  // jb 0x53ca66
    if (f.cf) goto L_0053ca66;
L_0053ca92:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0053ca96:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053ca98:  // jge 0x53cacc
    if ((f.sf == f.of)) goto L_0053cacc;
L_0053ca9a:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0053caa1:  // sub ecx, esi
    t0 = lsub<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0053caa3:  // mov dx, ax
    edx = (edx & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
L_0053caa6:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0053caaa:  // shl edx, 0x10
    t0 = lshl<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_0053caad:  // mov dx, ax
    edx = (edx & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
L_0053cab0:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0053cab2:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0053cab4:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cab6:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0053cab8:  // adc ecx, ecx
    t0 = ladc<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0053caba:  // rep stosw word ptr es:[edi], ax
    while (ecx) { M16(edi) = (uint16_t)eax; edi += 2; ecx--; }
L_0053cabd:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053cac1:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053cac7:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0053cac9:  // lea ebx, [ebx + eax*2]
    ebx = (uint32_t)((uint32_t)(ebx + eax * 2u));
L_0053cacc:  // lea eax, [edi + edi*2]
    eax = (uint32_t)((uint32_t)(edi + edi * 2u));
L_0053cacf:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053cad2:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053cad5:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053cada:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cadc:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053cade:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cae0:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cae2:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cae4:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053cae7:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053cae9:  // jae 0x53cb17
    if (!f.cf) goto L_0053cb17;
L_0053caeb:  // mov word ptr [ebx], bp
    M16((uint32_t)(ebx)) = (uint16_t)((ebp & 0xffffu));
L_0053caee:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053caf4:  // add ebx, 2
    t0 = ladd<32>(ebx, 0x2u, f);
    ebx = (uint32_t)(t0);
L_0053caf7:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0053caf8:  // lea eax, [edi + edi*2]
    eax = (uint32_t)((uint32_t)(edi + edi * 2u));
L_0053cafb:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053cafe:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053cb01:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053cb06:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cb08:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053cb0a:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cb0c:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cb0e:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cb10:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053cb13:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053cb15:  // jb 0x53caeb
    if (f.cf) goto L_0053caeb;
L_0053cb17:  // lea eax, [edi + edi*4]
    eax = (uint32_t)((uint32_t)(edi + edi * 4u));
L_0053cb1a:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0053cb1d:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053cb20:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053cb25:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053cb27:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cb29:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cb2b:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cb2d:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053cb30:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053cb32:  // jae 0x53cb60
    if (!f.cf) goto L_0053cb60;
L_0053cb34:  // mov word ptr [ebx], 0
    M16((uint32_t)(ebx)) = (uint16_t)(0x0u);
L_0053cb39:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053cb3f:  // add ebx, 2
    t0 = ladd<32>(ebx, 0x2u, f);
    ebx = (uint32_t)(t0);
L_0053cb42:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0053cb43:  // lea eax, [edi + edi*4]
    eax = (uint32_t)((uint32_t)(edi + edi * 4u));
L_0053cb46:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0053cb49:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0053cb4c:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053cb51:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053cb53:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cb55:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cb57:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cb59:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053cb5c:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053cb5e:  // jb 0x53cb34
    if (f.cf) goto L_0053cb34;
L_0053cb60:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0053cb64:  // cmp esi, edx
    t0 = lsub<32>(esi, edx, f);
L_0053cb66:  // jge 0x53cb94
    if ((f.sf == f.of)) goto L_0053cb94;
L_0053cb68:  // mov eax, dword ptr [esp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_0053cb6f:  // sub edx, esi
    t0 = lsub<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_0053cb71:  // mov bp, ax
    ebp = (ebp & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
L_0053cb74:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0053cb76:  // shl ebp, 0x10
    t0 = lshl<32>(ebp, 0x10u, f);
    ebp = (uint32_t)(t0);
L_0053cb79:  // mov bp, ax
    ebp = (ebp & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
L_0053cb7c:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0053cb7e:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0053cb80:  // lea ebx, [ebx + edx*2]
    ebx = (uint32_t)((uint32_t)(ebx + edx * 2u));
L_0053cb83:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cb85:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0053cb87:  // adc ecx, ecx
    t0 = ladc<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0053cb89:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0053cb8b:  // rep stosw word ptr es:[edi], ax
    while (ecx) { M16(edi) = (uint16_t)eax; edi += 2; ecx--; }
L_0053cb8e:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053cb94:  // lea eax, [edi + edi*4]
    eax = (uint32_t)((uint32_t)(edi + edi * 4u));
L_0053cb97:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0053cb9a:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053cb9f:  // shl ecx, 3
    t0 = lshl<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_0053cba2:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053cba4:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cba6:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cba8:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cbaa:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053cbad:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053cbaf:  // jae 0x53cbe3
    if (!f.cf) goto L_0053cbe3;
L_0053cbb1:  // mov ax, word ptr [esp + 0x88]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x88u))) & 0xffffu);
L_0053cbb9:  // mov word ptr [ebx], ax
    M16((uint32_t)(ebx)) = (uint16_t)((eax & 0xffffu));
L_0053cbbc:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053cbc2:  // add ebx, 2
    t0 = ladd<32>(ebx, 0x2u, f);
    ebx = (uint32_t)(t0);
L_0053cbc5:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0053cbc6:  // lea eax, [edi + edi*4]
    eax = (uint32_t)((uint32_t)(edi + edi * 4u));
L_0053cbc9:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0053cbcc:  // mov eax, 0x6c16c16d
    eax = (uint32_t)(0x6c16c16du);
L_0053cbd1:  // shl ecx, 3
    t0 = lshl<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_0053cbd4:  // mul ecx
    { uint64_t w = (uint64_t)eax * ecx; eax = (uint32_t)w; edx = (uint32_t)(w >> 32); f.cf = f.of = edx != 0; }
L_0053cbd6:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cbd8:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053cbda:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0053cbdc:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0053cbdf:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0053cbe1:  // jb 0x53cbb1
    if (f.cf) goto L_0053cbb1;
L_0053cbe3:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_0053cbea:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053cbee:  // mov edx, dword ptr [esp + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_0053cbf5:  // mov ebx, dword ptr [esp + 0x50]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0053cbf9:  // mov esi, dword ptr [esp + 0x68]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0053cbfd:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053cc01:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0053cc03:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_0053cc0a:  // add ebx, edx
    t0 = ladd<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_0053cc0c:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0053cc10:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0053cc14:  // mov eax, dword ptr [esp + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_0053cc1b:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0053cc1d:  // mov ecx, dword ptr [esp + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_0053cc24:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0053cc26:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0053cc2a:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_0053cc2e:  // mov edx, dword ptr [esp + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0053cc35:  // sub ebp, 4
    t0 = lsub<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0053cc38:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0053cc3a:  // mov edx, dword ptr [esp + 0xc0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0053cc41:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_0053cc45:  // mov ebp, dword ptr [esp + 0x58]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0053cc49:  // mov dword ptr [esp + 0x50], ebx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ebx);
L_0053cc4d:  // mov ebx, dword ptr [esp + 0x3c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0053cc51:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0053cc55:  // mov eax, dword ptr [esp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_0053cc5c:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0053cc5e:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0053cc62:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0053cc64:  // mov eax, dword ptr [esp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0053cc6b:  // mov dword ptr [esp + 0x68], esi
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(esi);
L_0053cc6f:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053cc73:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0053cc75:  // mov eax, dword ptr [esp + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_0053cc7c:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0053cc7e:  // mov edx, dword ptr [esp + 0xb0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_0053cc85:  // mov dword ptr [esp + 0x58], ebp
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ebp);
L_0053cc89:  // mov ebp, dword ptr [esp + 0x54]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0053cc8d:  // mov dword ptr [esp + 0x3c], ebx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebx);
L_0053cc91:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0053cc95:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_0053cc99:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_0053cca0:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_0053cca4:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0053cca8:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0053ccaa:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053ccae:  // add ebx, edx
    t0 = ladd<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_0053ccb0:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0053ccb4:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0053ccb6:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053ccba:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0053ccbc:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0053ccbd:  // mov dword ptr [esp + 0x54], ebp
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ebp);
L_0053ccc1:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0053ccc5:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_0053ccc9:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_0053cccd:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0053ccd1:  // jne 0x53c93e
    if (!f.zf) goto L_0053c93e;
L_0053ccd7:  // jmp 0x53ccdf
    goto L_0053ccdf;
L_0053ccd9:  // mov edi, dword ptr [0x65042c]
    edi = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053ccdf:  // lea ecx, [edi + edi]
    ecx = (uint32_t)((uint32_t)(edi + edi));
L_0053cce2:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053cce6:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0053cce8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053ccea:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0053cced:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0053ccef:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0053ccf1:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0053ccf4:  // rep stosb byte ptr es:[edi], al
    while (ecx) { M8(edi) = (uint8_t)eax; edi += 1; ecx--; }
L_0053ccf6:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0053ccfd:  // mov ecx, dword ptr [eax + 0x3c10]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x3c10u)));
L_0053cd03:  // mov ecx, dword ptr [eax + ecx*4 + 0x3f04]
    ecx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u + 0x3f04u)));
L_0053cd0a:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cd0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cd0f:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0053cd11:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cd13:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053cd14:  // call dword ptr [edx + 0x50]
    t0 = M32((uint32_t)(edx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cd17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cd17:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053cd18:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053cd19:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053cd1a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053cd1b:  // add esp, 0xb8
    t0 = ladd<32>(esp, 0xb8u, f);
    esp = (uint32_t)(t0);
L_0053cd21:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053c510, 0053c510)
