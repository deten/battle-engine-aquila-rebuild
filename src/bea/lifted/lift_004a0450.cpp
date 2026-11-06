// lifted from 004a0450 (vslot9, 1242 bytes, 371 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a0450(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a0450;
L_004a0450:  // sub esp, 0xa8
    t0 = lsub<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_004a0456:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a0457:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a0458:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004a045a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a045b:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a045e:  // test byte ptr [ecx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x2cu)) & 0x4u, f);
L_004a0462:  // jne 0x4a091e
    if (!f.zf) goto L_004a091e;
L_004a0468:  // mov eax, dword ptr [ecx + 0x244]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x244u)));
L_004a046e:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004a0471:  // je 0x4a091e
    if (f.zf) goto L_004a091e;
L_004a0477:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004a047a:  // je 0x4a091e
    if (f.zf) goto L_004a091e;
L_004a0480:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004a0483:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a0485:  // je 0x4a091e
    if (f.zf) goto L_004a091e;
L_004a048b:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004a048e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a0490:  // je 0x4a0779
    if (f.zf) goto L_004a0779;
L_004a0496:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a0497:  // call 0x4fb670
    t0 = 0x004fb670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a049cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a049c:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004a049f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004a04a1:  // jne 0x4a04a8
    if (!f.zf) goto L_004a04a8;
L_004a04a3:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004a04a8:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004a04ab:  // je 0x4a0512
    if (f.zf) goto L_004a0512;
L_004a04ad:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a04ae:  // je 0x4a04e5
    if (f.zf) goto L_004a04e5;
L_004a04b0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a04b1:  // jne 0x4a0779
    if (!f.zf) goto L_004a0779;
L_004a04b7:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004a04ba:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004a04bd:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004a04c0:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004a04c2:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004a04c4:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004a04c6:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004a04c9:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004a04cc:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004a04cf:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004a04d2:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004a04d5:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004a04d8:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a04db:  // call 0x4fce40
    t0 = 0x004fce40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a04e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a04e0:  // jmp 0x4a0779
    goto L_004a0779;
L_004a04e5:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004a04e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a04ea:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004a04ed:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004a04f0:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004a04f2:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a04f5:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_004a04f7:  // mov dword ptr [edi], ebx
    M32((uint32_t)(edi)) = (uint32_t)(ebx);
L_004a04f9:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004a04fb:  // mov ebx, dword ptr [eax + 4]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004a04fe:  // mov dword ptr [edi + 4], ebx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebx);
L_004a0501:  // mov ebx, dword ptr [eax + 8]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004a0504:  // mov dword ptr [edi + 8], ebx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebx);
L_004a0507:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004a050a:  // mov dword ptr [edi + 0xc], eax
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(eax);
L_004a050d:  // jmp 0x4a0773
    goto L_004a0773;
L_004a0512:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004a0515:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a0518:  // add ecx, 0x1c
    t0 = ladd<32>(ecx, 0x1cu, f);
    ecx = (uint32_t)(t0);
L_004a051b:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004a051e:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004a0520:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004a0522:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004a0526:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_004a0529:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004a052c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004a0530:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_004a0533:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004a0536:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_004a053a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004a053e:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004a0542:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004a0546:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004a0548:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004a054a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a054c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004a054e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004a0550:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a0552:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004a0554:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004a0556:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a0558:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004a055e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a0560:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004a0563:  // jne 0x4a0589
    if (!f.zf) goto L_004a0589;
L_004a0565:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004a056b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004a056f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004a0571:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004a0575:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004a0579:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004a057b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004a057f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004a0583:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004a0585:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004a0589:  // mov eax, dword ptr [esi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_004a058c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a058e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a0590:  // je 0x4a0636
    if (f.zf) goto L_004a0636;
L_004a0596:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a0598:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a059a:  // push 0x3fc90fdb
    t0 = 0x3fc90fdbu; esp -= 4; M32(esp) = t0;
L_004a059f:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004a05a3:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a05a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a05a8:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004a05ac:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a05b0:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004a05b4:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a05b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a05b9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a05bb:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004a05bf:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a05c3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a05c5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a05c8:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004a05cc:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a05d0:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004a05d4:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a05d8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a05d9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a05db:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004a05df:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a05e3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a05e5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a05e8:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004a05ec:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004a05f0:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004a05f4:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a05f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a05f9:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004a05fd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a05ff:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004a0603:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004a0607:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a0609:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a060c:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a0611u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a0611:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004a0615:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004a0619:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004a061d:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_004a0621:  // mov ecx, dword ptr [esp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004a0625:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004a0629:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004a062d:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004a0631:  // jmp 0x4a070b
    goto L_004a070b;
L_004a0636:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004a063b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004a063d:  // lea edx, [esp + 0x8c]
    edx = (uint32_t)((uint32_t)(esp + 0x8cu));
L_004a0644:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004a0646:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a0647:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a064cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a064c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a064e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a0650:  // push 0xbfc90fdb
    t0 = 0xbfc90fdbu; esp -= 4; M32(esp) = t0;
L_004a0655:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_004a065c:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a0661u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a0661:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004a0668:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a066c:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_004a0673:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a0677:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a0678:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a067a:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_004a0681:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a0685:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a0687:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a068a:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004a0691:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a0695:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004a069c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a06a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a06a1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a06a3:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004a06aa:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a06ae:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a06b0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a06b3:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_004a06ba:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004a06be:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004a06c5:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a06c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a06ca:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_004a06d1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a06d3:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004a06da:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a06de:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a06e0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a06e3:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a06e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a06e8:  // mov eax, dword ptr [esp + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004a06ec:  // mov ecx, dword ptr [esp + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004a06f0:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004a06f4:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004a06f8:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004a06ff:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004a0703:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004a0707:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004a070b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004a070f:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_004a0715:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004a0719:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_004a071f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004a0723:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a0726:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a0727:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_004a072d:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004a0730:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004a0733:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a0736:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a0737:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004a073a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a073d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a073e:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004a0742:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004a0744:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a0747:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a074cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a074c:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004a0750:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a0752:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004a0755:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a0758:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004a075a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004a075c:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004a075e:  // mov edi, dword ptr [esp + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004a0762:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004a0765:  // mov edi, dword ptr [esp + 0x40]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004a0769:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004a076c:  // mov edi, dword ptr [esp + 0x44]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004a0770:  // mov dword ptr [eax + 0xc], edi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edi);
L_004a0773:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a0779u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a0779:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a077c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004a077e:  // mov edx, dword ptr [ecx + 0x164]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x164u)));
L_004a0784:  // mov eax, dword ptr [edx + 0x19c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x19cu)));
L_004a078a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a078c:  // je 0x4a08dc
    if (f.zf) goto L_004a08dc;
L_004a0792:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004a0795:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a0797:  // je 0x4a08dc
    if (f.zf) goto L_004a08dc;
L_004a079d:  // call 0x4fd760
    t0 = 0x004fd760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a07a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a07a2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a07a4:  // je 0x4a07f6
    if (f.zf) goto L_004a07f6;
L_004a07a6:  // fld dword ptr [esi + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4cu)));
L_004a07a9:  // fsub dword ptr [esi + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x50u)));
L_004a07ac:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004a07ae:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_004a07b4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a07b6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004a07b9:  // jne 0x4a07cd
    if (!f.zf) goto L_004a07cd;
L_004a07bb:  // fld dword ptr [esi + 0x50]
    lpush(x, (long double)F32((uint32_t)(esi + 0x50u)));
L_004a07be:  // fsub dword ptr [esi + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x48u)));
L_004a07c1:  // fmul dword ptr [0x5dbfa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbfa0u)));
L_004a07c7:  // fadd dword ptr [esi + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4cu)));
L_004a07ca:  // fstp dword ptr [esi + 0x4c]
    F32((uint32_t)(esi + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004a07cd:  // fld dword ptr [esi + 0x58]
    lpush(x, (long double)F32((uint32_t)(esi + 0x58u)));
L_004a07d0:  // fsub dword ptr [esi + 0x5c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x5cu)));
L_004a07d3:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004a07d5:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_004a07db:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a07dd:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004a07e0:  // jne 0x4a080c
    if (!f.zf) goto L_004a080c;
L_004a07e2:  // fld dword ptr [esi + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x5cu)));
L_004a07e5:  // fsub dword ptr [esi + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x54u)));
L_004a07e8:  // fmul dword ptr [0x5dbfa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbfa0u)));
L_004a07ee:  // fadd dword ptr [esi + 0x58]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x58u)));
L_004a07f1:  // fstp dword ptr [esi + 0x58]
    F32((uint32_t)(esi + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004a07f4:  // jmp 0x4a080c
    goto L_004a080c;
L_004a07f6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a07f8:  // call 0x4ffe00
    t0 = 0x004ffe00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a07fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a07fd:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004a0800:  // lea edx, [esi + 0x34]
    edx = (uint32_t)((uint32_t)(esi + 0x34u));
L_004a0803:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a0804:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004a0806:  // call dword ptr [eax + 0x168]
    t0 = M32((uint32_t)(eax + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a080cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a080c:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a080f:  // mov ecx, dword ptr [esi + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4cu)));
L_004a0812:  // fld dword ptr [esi + 0x34]
    lpush(x, (long double)F32((uint32_t)(esi + 0x34u)));
L_004a0815:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_004a0818:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004a081b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a081d:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004a0821:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004a0825:  // fld dword ptr [esi + 0x38]
    lpush(x, (long double)F32((uint32_t)(esi + 0x38u)));
L_004a0828:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004a082b:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004a082f:  // fld dword ptr [esi + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x3cu)));
L_004a0832:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004a0835:  // mov eax, dword ptr [esi + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x58u)));
L_004a0838:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004a083c:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004a083e:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004a0840:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a0841:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004a0845:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a0846:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004a084a:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a084fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a084f:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004a0853:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a0857:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004a085b:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a085f:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a0862:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a0863:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a0865:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004a0869:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a086d:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004a0870:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a0872:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004a0876:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a087a:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004a087e:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a0882:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a0884:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004a0888:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a088c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a088e:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004a0892:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004a0896:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004a089a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004a089e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a08a0:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004a08a4:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004a08a8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a08aa:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004a08ad:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a08b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a08b1:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004a08b4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a08b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a08b8:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004a08bc:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004a08be:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004a08c1:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a08c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a08c6:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004a08c9:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004a08cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a08ce:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004a08d1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a08d2:  // call 0x4fb650
    t0 = 0x004fb650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a08d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a08d7:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004a08dc:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a08de:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a08e0:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a08e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a08e3:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004a08e5:  // je 0x4a08ef
    if (f.zf) goto L_004a08ef;
L_004a08e7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a08e9:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004a08ef:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004a08f5:  // mov ecx, dword ptr [esp + 0xb8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_004a08fc:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004a0900:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004a0902:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a0903:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a0905:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a0907:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a0908:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a0909:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_004a090e:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004a0912:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004a0917:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a0919:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a091eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a091e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a091f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a0920:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a0921:  // add esp, 0xa8
    t0 = ladd<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_004a0927:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004a0450, 004a0450)
