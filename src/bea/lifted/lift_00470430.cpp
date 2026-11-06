// lifted from 00470430 (FUN_00470430, 414 bytes, 123 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00470430(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00470430;
L_00470430:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00470432:  // push 0x5d29b9
    t0 = 0x5d29b9u; esp -= 4; M32(esp) = t0;
L_00470437:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0047043d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047043e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00470445:  // sub esp, 0x7c
    t0 = lsub<32>(esp, 0x7cu, f);
    esp = (uint32_t)(t0);
L_00470448:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00470449:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047044a:  // mov ebp, dword ptr [esp + 0x94]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_00470451:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00470453:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00470454:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_00470458:  // mov ecx, dword ptr [ebx + ebp*4 + 0x2c4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + ebp * 4u + 0x2c4u)));
L_0047045f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00470460:  // mov dword ptr [ebx + ebp*4 + 0x2d4], ecx
    M32((uint32_t)(ebx + ebp * 4u + 0x2d4u)) = (uint32_t)(ecx);
L_00470467:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00470468:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047046a:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047046du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047046d:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_00470470:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_00470473:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00470477:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0047047a:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0047047e:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00470482:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00470486:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0047048a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047048c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047048e:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00470490:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00470492:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00470494:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0047049a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047049c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047049f:  // jne 0x4704ba
    if (!f.zf) goto L_004704ba;
L_004704a1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004704a3:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004704a5:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004704a9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004704ab:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004704af:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004704b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004704b4:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004704b8:  // jmp 0x4704c6
    goto L_004704c6;
L_004704ba:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004704bc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004704be:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004704c6:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004704ca:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004704ce:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004704d0:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004704d4:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004704d6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004704d7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004704d8:  // fchs 
    ST(0) = -ST(0);
L_004704da:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004704de:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004704e2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004704e3:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004704e7:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004704ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004704ec:  // push 0xe2f
    t0 = 0xe2fu; esp -= 4; M32(esp) = t0;
L_004704f1:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_004704f6:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_004704f8:  // push 0xd0
    t0 = 0xd0u; esp -= 4; M32(esp) = t0;
L_004704fd:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00470502:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00470507u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00470507:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0047050b:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0047050d:  // mov dword ptr [esp + 0x94], esi
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(esi);
L_00470514:  // je 0x47055e
    if (f.zf) goto L_0047055e;
L_00470516:  // mov eax, dword ptr [ebx + ebp*4 + 0x2d4]
    eax = (uint32_t)(M32((uint32_t)(ebx + ebp * 4u + 0x2d4u)));
L_0047051d:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00470520:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00470525:  // lea esi, [esp + 0x5c]
    esi = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00470529:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0047052b:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0047052d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0047052f:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00470533:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00470534:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00470536:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00470538u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00470538:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0047053a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047053d:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0047053f:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_00470541:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00470544:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00470547:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0047054a:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0047054d:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00470550:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00470554:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00470557:  // call 0x41a740
    t0 = 0x0041a740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047055cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047055c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0047055e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00470560:  // mov dword ptr [esp + 0x94], 0xffffffff
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0xffffffffu);
L_0047056b:  // je 0x470572
    if (f.zf) goto L_00470572;
L_0047056d:  // lea eax, [esi + 4]
    eax = (uint32_t)((uint32_t)(esi + 0x4u));
L_00470570:  // jmp 0x470574
    goto L_00470574;
L_00470572:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00470574:  // mov ecx, dword ptr [ebx + ebp*4 + 0x2b4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + ebp * 4u + 0x2b4u)));
L_0047057b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047057c:  // call 0x42e610
    t0 = 0x0042e610u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00470581u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00470581:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00470583:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00470584:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00470585:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00470587:  // call 0x4705e0
    t0 = 0x004705e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047058cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047058c:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00470591:  // mov dword ptr [ebx + ebp*4 + 0x9d0], eax
    M32((uint32_t)(ebx + ebp * 4u + 0x9d0u)) = (uint32_t)(eax);
L_00470598:  // mov ecx, dword ptr [ebx + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_0047059b:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0047059d:  // jne 0x4705a8
    if (!f.zf) goto L_004705a8;
L_0047059f:  // mov dword ptr [ebx + ebp*4 + 0x9e0], eax
    M32((uint32_t)(ebx + ebp * 4u + 0x9e0u)) = (uint32_t)(eax);
L_004705a6:  // jmp 0x4705b3
    goto L_004705b3;
L_004705a8:  // mov dword ptr [ebx + ebp*4 + 0x9e0], 0
    M32((uint32_t)(ebx + ebp * 4u + 0x9e0u)) = (uint32_t)(0x0u);
L_004705b3:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004705ba:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004705bb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004705bc:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004705bd:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004705c4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004705c5:  // add esp, 0x88
    t0 = ladd<32>(esp, 0x88u, f);
    esp = (uint32_t)(t0);
L_004705cb:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00470430, 00470430)
