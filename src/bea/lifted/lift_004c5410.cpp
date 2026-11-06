// lifted from 004c5410 (vslot10, 741 bytes, 235 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c5410(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c5410;
L_004c5410:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004c5412:  // push 0x5d405c
    t0 = 0x5d405cu; esp -= 4; M32(esp) = t0;
L_004c5417:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004c541d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c541e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004c5425:  // sub esp, 0x98
    t0 = lsub<32>(esp, 0x98u, f);
    esp = (uint32_t)(t0);
L_004c542b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c542c:  // mov ebx, dword ptr [esp + 0xac]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_004c5433:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c5434:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c5435:  // mov eax, dword ptr [ebx + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c5438:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c5439:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004c543b:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004c543d:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004c543f:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_004c5443:  // je 0x4c5464
    if (f.zf) goto L_004c5464;
L_004c5445:  // mov ecx, dword ptr [ebx + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_004c544b:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004c544d:  // je 0x4c5464
    if (f.zf) goto L_004c5464;
L_004c544f:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004c5452:  // mov ax, word ptr [eax + 0xb6]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + 0xb6u))) & 0xffffu);
L_004c5459:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004c545b:  // je 0x4c5464
    if (f.zf) goto L_004c5464;
L_004c545d:  // mov word ptr [ecx + 0xb6], ax
    M16((uint32_t)(ecx + 0xb6u)) = (uint16_t)((eax & 0xffffu));
L_004c5464:  // mov ecx, dword ptr [ebp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_004c5467:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004c5469:  // je 0x4c5476
    if (f.zf) goto L_004c5476;
L_004c546b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004c546d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004c5472:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c5473:  // call dword ptr [eax + 0x30]
    t0 = M32((uint32_t)(eax + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c5476u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c5476:  // cmp word ptr [ebx + 0x7e], di
    t0 = lsub<16>(M16((uint32_t)(ebx + 0x7eu)), (edi & 0xffffu), f);
L_004c547a:  // jne 0x4c5544
    if (!f.zf) goto L_004c5544;
L_004c5480:  // push 0x7e9
    t0 = 0x7e9u; esp -= 4; M32(esp) = t0;
L_004c5485:  // push 0x630cd8
    t0 = 0x630cd8u; esp -= 4; M32(esp) = t0;
L_004c548a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004c548c:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004c548e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004c5493:  // mov word ptr [ebx + 0x7e], 1
    M16((uint32_t)(ebx + 0x7eu)) = (uint16_t)(0x1u);
L_004c5499:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c549eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c549e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c54a0:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004c54a4:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_004c54a6:  // mov dword ptr [esp + 0xb0], edi
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edi);
L_004c54ad:  // je 0x4c54bb
    if (f.zf) goto L_004c54bb;
L_004c54af:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c54b1:  // mov dword ptr [esi + 4], edi
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edi);
L_004c54b4:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c54b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c54b9:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004c54bb:  // mov dword ptr [ebx + 0x88], edi
    M32((uint32_t)(ebx + 0x88u)) = (uint32_t)(edi);
L_004c54c1:  // mov esi, dword ptr [ebp + 0x5c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x5cu)));
L_004c54c4:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c54c6:  // mov dword ptr [esp + 0xb0], 0xffffffff
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(0xffffffffu);
L_004c54d1:  // je 0x4c5544
    if (f.zf) goto L_004c5544;
L_004c54d3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004c54d5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c54d7:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c54dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c54da:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004c54dd:  // jne 0x4c54ee
    if (!f.zf) goto L_004c54ee;
L_004c54df:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004c54e1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c54e3:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c54e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c54e6:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c54e8:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c54ea:  // jne 0x4c54d3
    if (!f.zf) goto L_004c54d3;
L_004c54ec:  // jmp 0x4c5544
    goto L_004c5544;
L_004c54ee:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c54f0:  // je 0x4c5544
    if (f.zf) goto L_004c5544;
L_004c54f2:  // mov eax, dword ptr [ebx + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c54f5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c54f7:  // je 0x4c550d
    if (f.zf) goto L_004c550d;
L_004c54f9:  // mov cx, word ptr [eax + 0xb6]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + 0xb6u))) & 0xffffu);
L_004c5500:  // or cx, 1
    t0 = llog<16>((ecx & 0xffffu) | 0x1u, f);
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_004c5504:  // je 0x4c550d
    if (f.zf) goto L_004c550d;
L_004c5506:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c550b:  // jmp 0x4c550f
    goto L_004c550f;
L_004c550d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c550f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5510:  // mov eax, dword ptr [0x829e40]
    eax = (uint32_t)(M32((uint32_t)(0x829e40u)));
L_004c5515:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004c5517:  // mov ecx, dword ptr [0x829e44]
    ecx = (uint32_t)(M32((uint32_t)(0x829e44u)));
L_004c551d:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004c5520:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004c5522:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c5523:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c5524:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004c5526:  // mov eax, dword ptr [0x829e48]
    eax = (uint32_t)(M32((uint32_t)(0x829e48u)));
L_004c552b:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004c552e:  // mov ecx, dword ptr [0x829e4c]
    ecx = (uint32_t)(M32((uint32_t)(0x829e4cu)));
L_004c5534:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004c5537:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004c553a:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004c553f:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c5544u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c5544:  // mov esi, dword ptr [ebx + 0x58]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c5547:  // mov edi, dword ptr [ebx + 0x88]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_004c554d:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c554f:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_004c5553:  // je 0x4c5608
    if (f.zf) goto L_004c5608;
L_004c5559:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004c555e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004c5560:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_004c5564:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004c5566:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c5567:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c556cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c556c:  // lea ebp, [ebx + 0x38]
    ebp = (uint32_t)((uint32_t)(ebx + 0x38u));
L_004c556f:  // lea edi, [esi + 0x10]
    edi = (uint32_t)((uint32_t)(esi + 0x10u));
L_004c5572:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004c5576:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c5577:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5578:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c557a:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c557fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c557f:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004c5582:  // fadd dword ptr [esi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x8u)));
L_004c5585:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5586:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c5589:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004c558c:  // fadd dword ptr [esi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x4u)));
L_004c558f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5590:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c5593:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004c5595:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_004c5597:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5598:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004c559c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c559f:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c55a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c55a4:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004c55a8:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004c55ac:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004c55b0:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004c55b4:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004c55b8:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004c55bc:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004c55c0:  // lea eax, [ebx + 8]
    eax = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004c55c3:  // lea edx, [esp + 0x78]
    edx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004c55c7:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004c55cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c55cc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c55cd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c55cf:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c55d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c55d4:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004c55d9:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c55db:  // lea edi, [esp + 0x48]
    edi = (uint32_t)((uint32_t)(esp + 0x48u));
L_004c55df:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004c55e1:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c55e5:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004c55e8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c55ea:  // je 0x4c55f6
    if (f.zf) goto L_004c55f6;
L_004c55ec:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004c55f0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c55f1:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c55f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c55f6:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004c55fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c55fb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c55fd:  // call 0x4c0450
    t0 = 0x004c0450u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c5602u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c5602:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c5606:  // jmp 0x4c561e
    goto L_004c561e;
L_004c5608:  // lea ebp, [ebx + 0x38]
    ebp = (uint32_t)((uint32_t)(ebx + 0x38u));
L_004c560b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c560d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c560e:  // call 0x4c0370
    t0 = 0x004c0370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c5613u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c5613:  // lea eax, [ebx + 8]
    eax = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004c5616:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c5618:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5619:  // call 0x4c0450
    t0 = 0x004c0450u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c561eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c561e:  // mov ecx, dword ptr [ebx + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c5621:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c5623:  // je 0x4c5638
    if (f.zf) goto L_004c5638;
L_004c5625:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004c5628:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c562a:  // je 0x4c5638
    if (f.zf) goto L_004c5638;
L_004c562c:  // fld dword ptr [ecx + 0xac]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xacu)));
L_004c5632:  // fstp dword ptr [eax + 0xac]
    F32((uint32_t)(eax + 0xacu)) = lf32(ST(0));
    lpop(x);
L_004c5638:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004c563b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c563d:  // jne 0x4c56d8
    if (!f.zf) goto L_004c56d8;
L_004c5643:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c5647:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c564c:  // mov esi, dword ptr [edx + 0x60]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x60u)));
L_004c564f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c5651:  // je 0x4c56da
    if (f.zf) goto L_004c56da;
L_004c5657:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004c5659:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c565b:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c565eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c565e:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004c5661:  // jne 0x4c5677
    if (!f.zf) goto L_004c5677;
L_004c5663:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004c5665:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004c5667:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c566au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c566a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c566c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c566e:  // jne 0x4c5657
    if (!f.zf) goto L_004c5657;
L_004c5670:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c5675:  // jmp 0x4c56da
    goto L_004c56da;
L_004c5677:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c5679:  // je 0x4c56d1
    if (f.zf) goto L_004c56d1;
L_004c567b:  // mov eax, dword ptr [ebx + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c567e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c5680:  // je 0x4c5696
    if (f.zf) goto L_004c5696;
L_004c5682:  // mov ax, word ptr [eax + 0xb6]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + 0xb6u))) & 0xffffu);
L_004c5689:  // or ax, 1
    t0 = llog<16>((eax & 0xffffu) | 0x1u, f);
    eax = (eax & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_004c568d:  // je 0x4c5696
    if (f.zf) goto L_004c5696;
L_004c568f:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c5694:  // jmp 0x4c5698
    goto L_004c5698;
L_004c5696:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c5698:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c5699:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c569a:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004c569f:  // call 0x4cb5c0
    t0 = 0x004cb5c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c56a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c56a4:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004c56a7:  // lea ecx, [eax + 0x38]
    ecx = (uint32_t)((uint32_t)(eax + 0x38u));
L_004c56aa:  // lea edi, [eax + 8]
    edi = (uint32_t)((uint32_t)(eax + 0x8u));
L_004c56ad:  // lea esi, [ebx + 8]
    esi = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004c56b0:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004c56b2:  // mov edx, dword ptr [ebp + 4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004c56b5:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004c56b8:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004c56bb:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004c56be:  // mov edx, dword ptr [ebp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004c56c1:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004c56c4:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004c56c9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004c56cb:  // mov ecx, dword ptr [ebx + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c56ce:  // mov dword ptr [eax + 0x58], ecx
    M32((uint32_t)(eax + 0x58u)) = (uint32_t)(ecx);
L_004c56d1:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c56d6:  // jmp 0x4c56da
    goto L_004c56da;
L_004c56d8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c56da:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_004c56e1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c56e2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c56e3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004c56e4:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004c56eb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c56ec:  // add esp, 0xa4
    t0 = ladd<32>(esp, 0xa4u, f);
    esp = (uint32_t)(t0);
L_004c56f2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004c5410, 004c5410)
