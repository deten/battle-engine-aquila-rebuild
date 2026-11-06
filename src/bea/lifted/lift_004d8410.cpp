// lifted from 004d8410 (vslot9, 1591 bytes, 426 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d8410(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d8410;
L_004d8410:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004d8416:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004d8418:  // push 0x5d49b5
    t0 = 0x5d49b5u; esp -= 4; M32(esp) = t0;
L_004d841d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d841e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004d8425:  // sub esp, 0x84
    t0 = lsub<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_004d842b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d842c:  // mov ebx, dword ptr [esp + 0x98]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004d8433:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d8434:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004d8436:  // lea ecx, [ebx + 0x3bc]
    ecx = (uint32_t)((uint32_t)(ebx + 0x3bcu));
L_004d843c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d843d:  // lea eax, [ebp + 0x108]
    eax = (uint32_t)((uint32_t)(ebp + 0x108u));
L_004d8443:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d8444:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d8446:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004d844b:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_004d844d:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004d8450:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004d8453:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004d8456:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_004d8459:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004d845c:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_004d845f:  // mov edx, dword ptr [ebx + 0x3cc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x3ccu)));
L_004d8465:  // mov dword ptr [ebp + 0x118], edx
    M32((uint32_t)(ebp + 0x118u)) = (uint32_t)(edx);
L_004d846b:  // mov eax, dword ptr [ebx + 0x3d0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x3d0u)));
L_004d8471:  // mov dword ptr [ebp + 0xf0], eax
    M32((uint32_t)(ebp + 0xf0u)) = (uint32_t)(eax);
L_004d8477:  // mov ecx, dword ptr [ebx + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa0u)));
L_004d847d:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_004d8482:  // mov dword ptr [ebp + 0x11c], ecx
    M32((uint32_t)(ebp + 0x11cu)) = (uint32_t)(ecx);
L_004d8488:  // mov dword ptr [ebp + 0x128], 0
    M32((uint32_t)(ebp + 0x128u)) = (uint32_t)(0x0u);
L_004d8492:  // mov dword ptr [ebx + 0x78], eax
    M32((uint32_t)(ebx + 0x78u)) = (uint32_t)(eax);
L_004d8495:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d849b:  // cmp dword ptr [edx + 0xa0], edi
    t0 = lsub<32>(M32((uint32_t)(edx + 0xa0u)), edi, f);
L_004d84a1:  // jne 0x4d84b2
    if (!f.zf) goto L_004d84b2;
L_004d84a3:  // mov ecx, dword ptr [ebx + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x70u)));
L_004d84a6:  // mov dword ptr [ebx + 0x90], edi
    M32((uint32_t)(ebx + 0x90u)) = (uint32_t)(edi);
L_004d84ac:  // or ch, 0x20
    t0 = llog<8>(((ecx >> 8) & 0xffu) | 0x20u, f);
    ecx = (ecx & 0xffff00ffu) | (((uint32_t)(t0) & 0xffu) << 8);
L_004d84af:  // mov dword ptr [ebx + 0x70], ecx
    M32((uint32_t)(ebx + 0x70u)) = (uint32_t)(ecx);
L_004d84b2:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d84b8:  // mov edx, dword ptr [ecx + 0x70]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x70u)));
L_004d84bb:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004d84bd:  // je 0x4d84ca
    if (f.zf) goto L_004d84ca;
L_004d84bf:  // mov dword ptr [ebx + 0x7c], eax
    M32((uint32_t)(ebx + 0x7cu)) = (uint32_t)(eax);
L_004d84c2:  // mov dword ptr [ebx + 0x80], eax
    M32((uint32_t)(ebx + 0x80u)) = (uint32_t)(eax);
L_004d84c8:  // jmp 0x4d84dc
    goto L_004d84dc;
L_004d84ca:  // mov ecx, dword ptr [ebx + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x70u)));
L_004d84cd:  // mov dword ptr [ebx + 0x7c], edi
    M32((uint32_t)(ebx + 0x7cu)) = (uint32_t)(edi);
L_004d84d0:  // or ecx, 4
    t0 = llog<32>(ecx | 0x4u, f);
    ecx = (uint32_t)(t0);
L_004d84d3:  // mov dword ptr [ebx + 0x80], edi
    M32((uint32_t)(ebx + 0x80u)) = (uint32_t)(edi);
L_004d84d9:  // mov dword ptr [ebx + 0x70], ecx
    M32((uint32_t)(ebx + 0x70u)) = (uint32_t)(ecx);
L_004d84dc:  // mov dword ptr [ebx + 0x84], edi
    M32((uint32_t)(ebx + 0x84u)) = (uint32_t)(edi);
L_004d84e2:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d84e8:  // cmp dword ptr [edx + 0xa4], eax
    t0 = lsub<32>(M32((uint32_t)(edx + 0xa4u)), eax, f);
L_004d84ee:  // jne 0x4d84f7
    if (!f.zf) goto L_004d84f7;
L_004d84f0:  // or dword ptr [ebx + 0x70], 0x2000000
    t0 = llog<32>(M32((uint32_t)(ebx + 0x70u)) | 0x2000000u, f);
    M32((uint32_t)(ebx + 0x70u)) = (uint32_t)(t0);
L_004d84f7:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d84fd:  // mov ecx, dword ptr [eax + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x50u)));
L_004d8500:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8502:  // je 0x4d8552
    if (f.zf) goto L_004d8552;
L_004d8504:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d8505:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d8507:  // mov dword ptr [ebx + 0x70], 0xffffffff
    M32((uint32_t)(ebx + 0x70u)) = (uint32_t)(0xffffffffu);
L_004d850e:  // call 0x4011e0
    t0 = 0x004011e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8513u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8513:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8515:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8517:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8519:  // push 0x672fd0
    t0 = 0x672fd0u; esp -= 4; M32(esp) = t0;
L_004d851e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d851f:  // push 0xfa0
    t0 = 0xfa0u; esp -= 4; M32(esp) = t0;
L_004d8524:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d8529:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d852eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d852e:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d8531:  // lea ecx, [ebp + 0xf8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xf8u));
L_004d8537:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004d8539:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004d853b:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d853e:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004d8541:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d8544:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004d8547:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d854a:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004d854d:  // jmp 0x4d8a0b
    goto L_004d8a0b;
L_004d8552:  // mov ecx, dword ptr [eax + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x6cu)));
L_004d8555:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8557:  // jne 0x4d8560
    if (!f.zf) goto L_004d8560;
L_004d8559:  // or dword ptr [ebx + 0x70], 0x1000000
    t0 = llog<32>(M32((uint32_t)(ebx + 0x70u)) | 0x1000000u, f);
    M32((uint32_t)(ebx + 0x70u)) = (uint32_t)(t0);
L_004d8560:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d8566:  // fld dword ptr [ecx + 0x8c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8cu)));
L_004d856c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d8572:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d8574:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d8577:  // jne 0x4d8611
    if (!f.zf) goto L_004d8611;
L_004d857d:  // push 0x62
    t0 = 0x62u; esp -= 4; M32(esp) = t0;
L_004d857f:  // push 0x631d38
    t0 = 0x631d38u; esp -= 4; M32(esp) = t0;
L_004d8584:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_004d8586:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004d8588:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d858d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8592u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8592:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004d8594:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004d8598:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d859a:  // mov dword ptr [esp + 0x9c], 0
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0x0u);
L_004d85a5:  // je 0x4d85df
    if (f.zf) goto L_004d85df;
L_004d85a7:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d85ad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d85af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d85b1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d85b3:  // mov eax, dword ptr [edx + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8cu)));
L_004d85b9:  // lea ecx, [esi + 4]
    ecx = (uint32_t)((uint32_t)(esi + 0x4u));
L_004d85bc:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004d85c0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d85c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d85c5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d85c9:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004d85cd:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d85d1:  // mov dword ptr [esi], 0x5d95e8
    M32((uint32_t)(esi)) = (uint32_t)(0x5d95e8u);
L_004d85d7:  // mov dword ptr [esi + 0x14], ecx
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(ecx);
L_004d85da:  // fstp dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004d85dd:  // jmp 0x4d85e1
    goto L_004d85e1;
L_004d85df:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d85e1:  // mov dword ptr [ebx + 0x74], esi
    M32((uint32_t)(ebx + 0x74u)) = (uint32_t)(esi);
L_004d85e4:  // mov eax, dword ptr [ebp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d85ea:  // mov dword ptr [ebx + 0x6c], eax
    M32((uint32_t)(ebx + 0x6cu)) = (uint32_t)(eax);
L_004d85ed:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d85f3:  // mov dword ptr [esp + 0x9c], 0xffffffff
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0xffffffffu);
L_004d85fe:  // mov eax, dword ptr [edx + 0x64]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x64u)));
L_004d8601:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8603:  // je 0x4d8678
    if (f.zf) goto L_004d8678;
L_004d8605:  // mov dword ptr [ebx + 0x84], 0
    M32((uint32_t)(ebx + 0x84u)) = (uint32_t)(0x0u);
L_004d860f:  // jmp 0x4d8678
    goto L_004d8678;
L_004d8611:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_004d8613:  // push 0x631d38
    t0 = 0x631d38u; esp -= 4; M32(esp) = t0;
L_004d8618:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_004d861a:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_004d861c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d8621:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8626u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8626:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004d8628:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004d862c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d862e:  // mov dword ptr [esp + 0x9c], edi
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edi);
L_004d8635:  // je 0x4d8656
    if (f.zf) goto L_004d8656;
L_004d8637:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d8639:  // call 0x488ef0
    t0 = 0x00488ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d863eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d863e:  // lea ecx, [esi + 0x24]
    ecx = (uint32_t)((uint32_t)(esi + 0x24u));
L_004d8641:  // mov byte ptr [esp + 0x9c], 2
    M8((uint32_t)(esp + 0x9cu)) = (uint8_t)(0x2u);
L_004d8649:  // call 0x488f00
    t0 = 0x00488f00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d864eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d864e:  // mov dword ptr [esi], 0x5de950
    M32((uint32_t)(esi)) = (uint32_t)(0x5de950u);
L_004d8654:  // jmp 0x4d8658
    goto L_004d8658;
L_004d8656:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d8658:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d865e:  // mov dword ptr [ebp + 0x38], esi
    M32((uint32_t)(ebp + 0x38u)) = (uint32_t)(esi);
L_004d8661:  // mov dword ptr [esp + 0x9c], 0xffffffff
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0xffffffffu);
L_004d866c:  // mov ecx, dword ptr [eax + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x98u)));
L_004d8672:  // mov dword ptr [ebx + 0x9c], ecx
    M32((uint32_t)(ebx + 0x9cu)) = (uint32_t)(ecx);
L_004d8678:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d8679:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d867b:  // call 0x4011e0
    t0 = 0x004011e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8680u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8680:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d8686:  // fadd dword ptr [ebx + 0x3d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x3d8u)));
L_004d868c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d868e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8690:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004d8694:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8696:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d8697:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d8698:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d869c:  // push 0xfa0
    t0 = 0xfa0u; esp -= 4; M32(esp) = t0;
L_004d86a1:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d86a6:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d86abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d86ab:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d86b1:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004d86b3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d86b5:  // je 0x4d87a4
    if (f.zf) goto L_004d87a4;
L_004d86bb:  // mov ecx, dword ptr [ebp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d86c1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d86c3:  // je 0x4d86e9
    if (f.zf) goto L_004d86e9;
L_004d86c5:  // mov ecx, dword ptr [ecx + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x164u)));
L_004d86cb:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d86cd:  // je 0x4d86de
    if (f.zf) goto L_004d86de;
L_004d86cf:  // mov ecx, dword ptr [ecx + 0x1a4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x1a4u)));
L_004d86d5:  // lea esi, [ebp + 0xe0]
    esi = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_004d86db:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d86dc:  // jmp 0x4d86f1
    goto L_004d86f1;
L_004d86de:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d86e0:  // lea esi, [ebp + 0xe0]
    esi = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_004d86e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d86e7:  // jmp 0x4d86f1
    goto L_004d86f1;
L_004d86e9:  // lea esi, [ebp + 0xe0]
    esi = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_004d86ef:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d86f1:  // mov edx, dword ptr [0x83cc88]
    edx = (uint32_t)(M32((uint32_t)(0x83cc88u)));
L_004d86f7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d86f9:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d86fc:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004d86fe:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d86ff:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d8700:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004d8702:  // mov edx, dword ptr [0x83cc8c]
    edx = (uint32_t)(M32((uint32_t)(0x83cc8cu)));
L_004d8708:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004d870b:  // mov edx, dword ptr [0x83cc90]
    edx = (uint32_t)(M32((uint32_t)(0x83cc90u)));
L_004d8711:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004d8714:  // mov edx, dword ptr [0x83cc94]
    edx = (uint32_t)(M32((uint32_t)(0x83cc94u)));
L_004d871a:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004d871d:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004d8722:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8727u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8727:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d872a:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d872d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d872f:  // je 0x4d8786
    if (f.zf) goto L_004d8786;
L_004d8731:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004d8738:  // jne 0x4d8762
    if (!f.zf) goto L_004d8762;
L_004d873a:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004d873c:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004d8742:  // mov dword ptr [ecx + 0x80], edi
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(edi);
L_004d8748:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d874b:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_004d874e:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d8751:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_004d8754:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d8757:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004d875a:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004d875d:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d8760:  // jmp 0x4d8767
    goto L_004d8767;
L_004d8762:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004d8765:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004d8767:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004d8769:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_004d876b:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d876e:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_004d8771:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d8774:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_004d8777:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d877a:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004d877d:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d8780:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d8781:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8786u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8786:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d8789:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d878b:  // je 0x4d87a4
    if (f.zf) goto L_004d87a4;
L_004d878d:  // lea esi, [ebp + 0x3c]
    esi = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_004d8790:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004d8793:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004d8798:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d879a:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004d87a4:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d87aa:  // fld dword ptr [ecx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x28u)));
L_004d87ad:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d87b3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d87b5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d87b8:  // je 0x4d8a0b
    if (f.zf) goto L_004d8a0b;
L_004d87be:  // mov eax, dword ptr [ecx + 0x68]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x68u)));
L_004d87c1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d87c3:  // jne 0x4d8a0b
    if (!f.zf) goto L_004d8a0b;
L_004d87c9:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d87cc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d87ce:  // call dword ptr [edx + 0xb4]
    t0 = M32((uint32_t)(edx + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d87d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d87d4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d87da:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d87dc:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d87df:  // je 0x4d8a0b
    if (f.zf) goto L_004d8a0b;
L_004d87e5:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d87e8:  // mov esi, dword ptr [ebp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_004d87eb:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_004d87ef:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d87f2:  // mov dword ptr [esp + 0x2c], edi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edi);
L_004d87f6:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d87f9:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_004d87fd:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004d8801:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d8804:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004d8807:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8808:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d880a:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004d880e:  // call dword ptr [eax + 0x6c]
    t0 = M32((uint32_t)(eax + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8811u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8811:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004d8814:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004d8817:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004d8819:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d881b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d881d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d881f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d8821:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d8824:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004d8828:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d882a:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004d882c:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d882e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d882f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d8831:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8833:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004d8835:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d8837:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d8839:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d883b:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004d8841:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d8845:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8848u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8848:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d884c:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004d8850:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004d8854:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004d8858:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d885a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d885e:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004d8862:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8864:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d8866:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004d886c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d886e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d8871:  // jne 0x4d8897
    if (!f.zf) goto L_004d8897;
L_004d8873:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004d8879:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d887d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d887f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004d8883:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d8887:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8889:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d888d:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004d8891:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8893:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d8897:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d8899:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d889d:  // fmul dword ptr [ebx + 0x3d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x3d8u)));
L_004d88a3:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004d88a7:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004d88ab:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004d88af:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d88b1:  // mov dword ptr [esp + 0x7c], ecx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ecx);
L_004d88b5:  // mov dword ptr [esp + 0x80], edx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(edx);
L_004d88bc:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_004d88c4:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_004d88cc:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_004d88d4:  // mov dword ptr [esp + 0x74], esi
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(esi);
L_004d88d8:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_004d88dc:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d88e0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d88e2:  // mov dword ptr [esp + 0x78], edi
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(edi);
L_004d88e6:  // mov dword ptr [esp + 0x60], 0x5d8bfc
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x5d8bfcu);
L_004d88ee:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004d88f2:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004d88f6:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d88fa:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004d88fe:  // fadd dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x5cu)));
L_004d8902:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004d8906:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_004d890a:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004d890e:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_004d8912:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004d8916:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004d891a:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004d891e:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004d8922:  // mov dword ptr [esp + 0x84], eax
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(eax);
L_004d8929:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004d892d:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004d8931:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004d8935:  // mov dword ptr [esp + 0x88], ecx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ecx);
L_004d893c:  // mov dword ptr [esp + 0x8c], edx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edx);
L_004d8943:  // mov dword ptr [esp + 0x90], eax
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(eax);
L_004d894a:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004d894e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d8950:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004d8954:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8955:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d8956:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004d895b:  // mov dword ptr [esp + 0xa8], 3
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0x3u);
L_004d8966:  // call 0x490a40
    t0 = 0x00490a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d896bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d896b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d896d:  // je 0x4d89f8
    if (f.zf) goto L_004d89f8;
L_004d8973:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004d8977:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_004d897b:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004d897f:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004d8983:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004d8987:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_004d898b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d898d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d898f:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004d8993:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004d8995:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d8997:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d8999:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d899b:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d899d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d899e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d899f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d89a1:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004d89a3:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d89a5:  // push 0xfa1
    t0 = 0xfa1u; esp -= 4; M32(esp) = t0;
L_004d89aa:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d89af:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d89b1:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004d89b3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d89b5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d89b7:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d89b9:  // fdiv dword ptr [esp + 0x28]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x28u)));
L_004d89bd:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d89c3:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004d89c5:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004d89c9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d89cb:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d89d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d89d0:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004d89d4:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004d89d8:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004d89dc:  // mov dword ptr [ebp + 0x108], ecx
    M32((uint32_t)(ebp + 0x108u)) = (uint32_t)(ecx);
L_004d89e2:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004d89e6:  // mov dword ptr [ebp + 0x10c], edx
    M32((uint32_t)(ebp + 0x10cu)) = (uint32_t)(edx);
L_004d89ec:  // mov dword ptr [ebp + 0x110], eax
    M32((uint32_t)(ebp + 0x110u)) = (uint32_t)(eax);
L_004d89f2:  // mov dword ptr [ebp + 0x114], ecx
    M32((uint32_t)(ebp + 0x114u)) = (uint32_t)(ecx);
L_004d89f8:  // mov dword ptr [esp + 0x9c], 0xffffffff
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0xffffffffu);
L_004d8a03:  // mov dword ptr [esp + 0x60], 0x5d892c
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x5d892cu);
L_004d8a0b:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d8a11:  // mov eax, dword ptr [edx + 0x58]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x58u)));
L_004d8a14:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8a16:  // je 0x4d8a23
    if (f.zf) goto L_004d8a23;
L_004d8a18:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d8a19:  // mov ecx, 0x8550f0
    ecx = (uint32_t)(0x8550f0u);
L_004d8a1e:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8a23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8a23:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8a25:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d8a27:  // call 0x4dac90
    t0 = 0x004dac90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8a2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8a2c:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004d8a33:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d8a34:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d8a35:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d8a36:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004d8a3d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d8a3e:  // add esp, 0x90
    t0 = ladd<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_004d8a44:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d8410, 004d8410)
