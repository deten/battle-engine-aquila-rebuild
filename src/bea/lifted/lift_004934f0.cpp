// lifted from 004934f0 (FUN_004934f0, 3613 bytes, 1116 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004934f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004934f0;
L_004934f0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004934f1:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_004934f3:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004934f5:  // push 0x5d324b
    t0 = 0x5d324bu; esp -= 4; M32(esp) = t0;
L_004934fa:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00493500:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493501:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00493508:  // sub esp, 0x204
    t0 = lsub<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0049350e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049350f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00493510:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00493511:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00493513:  // mov dword ptr [ebp - 0x120], 0x85
    M32((uint32_t)(ebp + 0xfffffee0u)) = (uint32_t)(0x85u);
L_0049351d:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0049351f:  // rdtsc 
    __asm__ volatile("rdtsc" : "=a"(eax), "=d"(edx));
L_00493521:  // mov dword ptr [ebp - 0xd4], edx
    M32((uint32_t)(ebp + 0xffffff2cu)) = (uint32_t)(edx);
L_00493527:  // mov dword ptr [ebp - 0xd8], eax
    M32((uint32_t)(ebp + 0xffffff28u)) = (uint32_t)(eax);
L_0049352d:  // mov dword ptr [ebp - 0x11c], eax
    M32((uint32_t)(ebp + 0xfffffee4u)) = (uint32_t)(eax);
L_00493533:  // mov eax, dword ptr [ebx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1cu)));
L_00493536:  // mov edi, dword ptr [ebp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x48u)));
L_00493539:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049353b:  // mov dword ptr [ebp - 4], 0
    M32((uint32_t)(ebp + 0xfffffffcu)) = (uint32_t)(0x0u);
L_00493542:  // jne 0x493550
    if (!f.zf) goto L_00493550;
L_00493544:  // mov eax, dword ptr [edi + 0x128]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x128u)));
L_0049354a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049354b:  // call 0x493190
    t0 = 0x00493190u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493550u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493550:  // mov dword ptr [ebp - 0x38], 0x3f800000
    M32((uint32_t)(ebp + 0xffffffc8u)) = (uint32_t)(0x3f800000u);
L_00493557:  // mov ecx, dword ptr [ebp - 0x38]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_0049355a:  // mov dword ptr [ebp - 0xd0], ecx
    M32((uint32_t)(ebp + 0xffffff30u)) = (uint32_t)(ecx);
L_00493560:  // mov ecx, dword ptr [ebp - 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_00493563:  // mov dword ptr [ebp - 0x34], 0
    M32((uint32_t)(ebp + 0xffffffccu)) = (uint32_t)(0x0u);
L_0049356a:  // mov edx, dword ptr [ebp - 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_0049356d:  // mov dword ptr [ebp - 0x30], 0
    M32((uint32_t)(ebp + 0xffffffd0u)) = (uint32_t)(0x0u);
L_00493574:  // mov eax, dword ptr [ebp - 0x30]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_00493577:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493579:  // mov dword ptr [ebp - 0xc4], ecx
    M32((uint32_t)(ebp + 0xffffff3cu)) = (uint32_t)(ecx);
L_0049357f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00493584:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493586:  // lea ecx, [ebp - 0x6c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_00493589:  // mov byte ptr [ebp - 0xd], 0
    M8((uint32_t)(ebp + 0xfffffff3u)) = (uint8_t)(0x0u);
L_0049358d:  // mov dword ptr [ebp - 0xcc], edx
    M32((uint32_t)(ebp + 0xffffff34u)) = (uint32_t)(edx);
L_00493593:  // mov dword ptr [ebp - 0xc8], eax
    M32((uint32_t)(ebp + 0xffffff38u)) = (uint32_t)(eax);
L_00493599:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049359eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049359e:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004935a0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004935a5:  // mov dword ptr [ebp - 0xc0], edx
    M32((uint32_t)(ebp + 0xffffff40u)) = (uint32_t)(edx);
L_004935ab:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004935ad:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004935b0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004935b2:  // mov dword ptr [ebp - 0xbc], ecx
    M32((uint32_t)(ebp + 0xffffff44u)) = (uint32_t)(ecx);
L_004935b8:  // lea ecx, [ebp - 0x6c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_004935bb:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004935be:  // mov dword ptr [ebp - 0xb8], edx
    M32((uint32_t)(ebp + 0xffffff48u)) = (uint32_t)(edx);
L_004935c4:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004935c7:  // mov dword ptr [ebp - 0xb4], eax
    M32((uint32_t)(ebp + 0xffffff4cu)) = (uint32_t)(eax);
L_004935cd:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004935d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004935d2:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004935d4:  // mov esi, dword ptr [ebx + 8]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004935d7:  // mov dword ptr [ebp - 0xb0], ecx
    M32((uint32_t)(ebp + 0xffffff50u)) = (uint32_t)(ecx);
L_004935dd:  // mov dword ptr [ebp - 0x18], esi
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(esi);
L_004935e0:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004935e3:  // mov dword ptr [ebp - 0xac], edx
    M32((uint32_t)(ebp + 0xffffff54u)) = (uint32_t)(edx);
L_004935e9:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004935ec:  // mov dword ptr [ebp - 0xa8], ecx
    M32((uint32_t)(ebp + 0xffffff58u)) = (uint32_t)(ecx);
L_004935f2:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004935f5:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004935f7:  // mov dword ptr [ebp - 0xa4], edx
    M32((uint32_t)(ebp + 0xffffff5cu)) = (uint32_t)(edx);
L_004935fd:  // je 0x493683
    if (f.zf) goto L_00493683;
L_00493603:  // cmp dword ptr [edi + 0xb8], 1
    t0 = lsub<32>(M32((uint32_t)(edi + 0xb8u)), 0x1u, f);
L_0049360a:  // jle 0x493683
    if ((f.zf || f.sf != f.of)) goto L_00493683;
L_0049360c:  // mov eax, dword ptr [edi + 0x128]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x128u)));
L_00493612:  // mov ecx, dword ptr [eax + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_00493615:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00493617:  // je 0x493683
    if (f.zf) goto L_00493683;
L_00493619:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049361b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049361d:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493620u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493620:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00493622:  // jl 0x493683
    if ((f.sf != f.of)) goto L_00493683;
L_00493624:  // mov ecx, dword ptr [edi + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x128u)));
L_0049362a:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0049362d:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00493630:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00493632:  // lea eax, [edx + eax*4]
    eax = (uint32_t)((uint32_t)(edx + eax * 4u));
L_00493635:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00493637:  // mov dword ptr [ebp - 0x14], eax
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(eax);
L_0049363a:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049363du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049363d:  // mov eax, dword ptr [ebp - 0x14]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_00493640:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00493643:  // fimul dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(eax + 0x1cu)));
L_00493646:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00493649:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049364eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049364e:  // mov ecx, dword ptr [ebp - 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_00493651:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00493654:  // fistp qword ptr [ebp - 0x44]
    M64((uint32_t)(ebp + 0xffffffbcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00493657:  // mov eax, dword ptr [ebp - 0x44]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_0049365a:  // mov edx, dword ptr [ecx + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_0049365d:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0049365f:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00493660:  // idiv dword ptr [edi + 0xb8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(edi + 0xb8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00493666:  // cmp dword ptr [ebp + 0x4c], -1
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x4cu)), 0xffffffffu, f);
L_0049366a:  // mov dword ptr [ebp - 0x14], edx
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(edx);
L_0049366d:  // je 0x493675
    if (f.zf) goto L_00493675;
L_0049366f:  // mov edx, dword ptr [ebp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_00493672:  // mov dword ptr [ebp - 0x14], edx
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(edx);
L_00493675:  // mov eax, dword ptr [edi + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xc4u)));
L_0049367b:  // mov cl, byte ptr [eax + edx]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + edx))) & 0xffu);
L_0049367e:  // mov byte ptr [ebp - 0x3c], cl
    M8((uint32_t)(ebp + 0xffffffc4u)) = (uint8_t)((ecx & 0xffu));
L_00493681:  // jmp 0x4936a8
    goto L_004936a8;
L_00493683:  // mov eax, dword ptr [ebp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4cu)));
L_00493686:  // mov byte ptr [ebp - 0x3c], 0
    M8((uint32_t)(ebp + 0xffffffc4u)) = (uint8_t)(0x0u);
L_0049368a:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0049368d:  // mov dword ptr [ebp - 0x14], 0
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(0x0u);
L_00493694:  // je 0x4936a8
    if (f.zf) goto L_004936a8;
L_00493696:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_00493699:  // mov edx, dword ptr [edi + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xc4u)));
L_0049369f:  // mov dword ptr [ebp - 0x14], eax
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(eax);
L_004936a2:  // mov al, byte ptr [edx + eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + eax))) & 0xffu);
L_004936a5:  // mov byte ptr [ebp - 0x3c], al
    M8((uint32_t)(ebp + 0xffffffc4u)) = (uint8_t)((eax & 0xffu));
L_004936a8:  // lea eax, [edi + 0xdc]
    eax = (uint32_t)((uint32_t)(edi + 0xdcu));
L_004936ae:  // push 0x62dcbc
    t0 = 0x62dcbcu; esp -= 4; M32(esp) = t0;
L_004936b3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004936b4:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004936b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004936b9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004936bc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004936be:  // jne 0x493953
    if (!f.zf) goto L_00493953;
L_004936c4:  // mov edi, dword ptr [edi + 0xc8]
    edi = (uint32_t)(M32((uint32_t)(edi + 0xc8u)));
L_004936ca:  // lea ecx, [ebp - 0x6c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_004936cd:  // fld dword ptr [ebp + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x18u)));
L_004936d0:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_004936d2:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_004936d5:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_004936d8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004936d9:  // lea edx, [ebp - 0x28]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffd8u));
L_004936dc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004936de:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_004936e1:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_004936e4:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004936e9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004936eb:  // fld dword ptr [ebp + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x28u)));
L_004936ee:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_004936f0:  // fld dword ptr [ebp + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x30u)));
L_004936f3:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_004936f6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004936f8:  // fld dword ptr [ebp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2cu)));
L_004936fb:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_004936fe:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493700:  // fstp dword ptr [ebp - 0x58]
    F32((uint32_t)(ebp + 0xffffffa8u)) = lf32(ST(0));
    lpop(x);
L_00493703:  // fld dword ptr [ebp + 0x38]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x38u)));
L_00493706:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_00493708:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_0049370b:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_0049370e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493710:  // fld dword ptr [ebp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x3cu)));
L_00493713:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_00493716:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493718:  // fstp dword ptr [ebp - 0x54]
    F32((uint32_t)(ebp + 0xffffffacu)) = lf32(ST(0));
    lpop(x);
L_0049371b:  // fld dword ptr [ebp + 8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x8u)));
L_0049371e:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00493720:  // fstp dword ptr [ebp - 0x6c]
    F32((uint32_t)(ebp + 0xffffff94u)) = lf32(ST(0));
    lpop(x);
L_00493723:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00493725:  // fld dword ptr [ebp + 0xc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xcu)));
L_00493728:  // fadd dword ptr [ebp - 0x58]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffa8u)));
L_0049372b:  // fstp dword ptr [ebp - 0x68]
    F32((uint32_t)(ebp + 0xffffff98u)) = lf32(ST(0));
    lpop(x);
L_0049372e:  // fld dword ptr [ebp + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x10u)));
L_00493731:  // fadd dword ptr [ebp - 0x54]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffacu)));
L_00493734:  // fstp dword ptr [ebp - 0x64]
    F32((uint32_t)(ebp + 0xffffff9cu)) = lf32(ST(0));
    lpop(x);
L_00493737:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049373cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049373c:  // fld dword ptr [ebx + 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebx + 0xb0u)));
L_00493742:  // fmul dword ptr [0x5d8cc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc4u)));
L_00493748:  // fld dword ptr [ebx + 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0xb4u)));
L_0049374e:  // fmul dword ptr [0x5d8cc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc4u)));
L_00493754:  // fstp dword ptr [ebp - 0x78]
    F32((uint32_t)(ebp + 0xffffff88u)) = lf32(ST(0));
    lpop(x);
L_00493757:  // fld dword ptr [ebx + 0xb8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0xb8u)));
L_0049375d:  // fmul dword ptr [0x5d8cc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc4u)));
L_00493763:  // fstp dword ptr [ebp - 0x74]
    F32((uint32_t)(ebp + 0xffffff8cu)) = lf32(ST(0));
    lpop(x);
L_00493766:  // fld dword ptr [ebp - 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd8u)));
L_00493769:  // fmul dword ptr [0x5d8574]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8574u)));
L_0049376f:  // fld dword ptr [ebp - 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffdcu)));
L_00493772:  // fmul dword ptr [0x5d8574]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8574u)));
L_00493778:  // fstp dword ptr [ebp - 0x58]
    F32((uint32_t)(ebp + 0xffffffa8u)) = lf32(ST(0));
    lpop(x);
L_0049377b:  // fld dword ptr [ebp - 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049377e:  // fmul dword ptr [0x5d8574]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8574u)));
L_00493784:  // fstp dword ptr [ebp - 0x54]
    F32((uint32_t)(ebp + 0xffffffacu)) = lf32(ST(0));
    lpop(x);
L_00493787:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00493789:  // fstp dword ptr [ebp - 0x4c]
    F32((uint32_t)(ebp + 0xffffffb4u)) = lf32(ST(0));
    lpop(x);
L_0049378c:  // mov eax, dword ptr [ebp - 0x4c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb4u)));
L_0049378f:  // mov esi, dword ptr [ebp - 0x40]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_00493792:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00493794:  // fld dword ptr [ebp - 0x58]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffa8u)));
L_00493797:  // fadd dword ptr [ebp - 0x78]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff88u)));
L_0049379a:  // mov dword ptr [ebp - 0x28], eax
    M32((uint32_t)(ebp + 0xffffffd8u)) = (uint32_t)(eax);
L_0049379d:  // mov dword ptr [ebx + 0xb0], eax
    M32((uint32_t)(ebx + 0xb0u)) = (uint32_t)(eax);
L_004937a3:  // mov dword ptr [ebp - 0x1c], esi
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(esi);
L_004937a6:  // fstp dword ptr [ebp - 0x48]
    F32((uint32_t)(ebp + 0xffffffb8u)) = lf32(ST(0));
    lpop(x);
L_004937a9:  // fld dword ptr [ebp - 0x54]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffacu)));
L_004937ac:  // fadd dword ptr [ebp - 0x74]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff8cu)));
L_004937af:  // mov ecx, dword ptr [ebp - 0x48]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb8u)));
L_004937b2:  // mov dword ptr [ebx + 0xb4], ecx
    M32((uint32_t)(ebx + 0xb4u)) = (uint32_t)(ecx);
L_004937b8:  // mov dword ptr [ebp - 0x24], ecx
    M32((uint32_t)(ebp + 0xffffffdcu)) = (uint32_t)(ecx);
L_004937bb:  // fstp dword ptr [ebp - 0x44]
    F32((uint32_t)(ebp + 0xffffffbcu)) = lf32(ST(0));
    lpop(x);
L_004937be:  // fld dword ptr [ebp - 0x44]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffbcu)));
L_004937c1:  // fmul dword ptr [ebp - 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffbcu)));
L_004937c4:  // fld dword ptr [ebp - 0x48]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb8u)));
L_004937c7:  // fmul dword ptr [ebp - 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffb8u)));
L_004937ca:  // mov edx, dword ptr [ebp - 0x44]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_004937cd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004937cf:  // fld dword ptr [ebp - 0x4c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb4u)));
L_004937d2:  // fmul dword ptr [ebp - 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffb4u)));
L_004937d5:  // mov dword ptr [ebx + 0xb8], edx
    M32((uint32_t)(ebx + 0xb8u)) = (uint32_t)(edx);
L_004937db:  // mov dword ptr [ebp - 0x20], edx
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(edx);
L_004937de:  // mov dword ptr [ebx + 0xbc], esi
    M32((uint32_t)(ebx + 0xbcu)) = (uint32_t)(esi);
L_004937e4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004937e6:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004937e8:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004937ee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004937f0:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004937f3:  // jne 0x493813
    if (!f.zf) goto L_00493813;
L_004937f5:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004937fb:  // fld dword ptr [ebp - 0x4c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb4u)));
L_004937fe:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00493800:  // fstp dword ptr [ebp - 0x28]
    F32((uint32_t)(ebp + 0xffffffd8u)) = lf32(ST(0));
    lpop(x);
L_00493803:  // fld dword ptr [ebp - 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffdcu)));
L_00493806:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00493808:  // fstp dword ptr [ebp - 0x24]
    F32((uint32_t)(ebp + 0xffffffdcu)) = lf32(ST(0));
    lpop(x);
L_0049380b:  // fld dword ptr [ebp - 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049380e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00493810:  // fstp dword ptr [ebp - 0x20]
    F32((uint32_t)(ebp + 0xffffffe0u)) = lf32(ST(0));
    lpop(x);
L_00493813:  // mov edx, dword ptr [ebp - 0x28]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd8u)));
L_00493816:  // mov ecx, dword ptr [ebp - 0x20]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe0u)));
L_00493819:  // mov eax, dword ptr [ebp - 0x24]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffdcu)));
L_0049381c:  // mov dword ptr [ebp - 0x7c], edx
    M32((uint32_t)(ebp + 0xffffff84u)) = (uint32_t)(edx);
L_0049381f:  // lea edx, [ebp - 0x8c]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffff74u));
L_00493825:  // mov dword ptr [ebp - 0x74], ecx
    M32((uint32_t)(ebp + 0xffffff8cu)) = (uint32_t)(ecx);
L_00493828:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00493829:  // lea ecx, [ebp - 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_0049382c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049382e:  // mov dword ptr [ebp - 0x38], 0
    M32((uint32_t)(ebp + 0xffffffc8u)) = (uint32_t)(0x0u);
L_00493835:  // mov dword ptr [ebp - 0x34], 0xbf800000
    M32((uint32_t)(ebp + 0xffffffccu)) = (uint32_t)(0xbf800000u);
L_0049383c:  // mov dword ptr [ebp - 0x30], 0
    M32((uint32_t)(ebp + 0xffffffd0u)) = (uint32_t)(0x0u);
L_00493843:  // mov dword ptr [ebp - 0x78], eax
    M32((uint32_t)(ebp + 0xffffff88u)) = (uint32_t)(eax);
L_00493846:  // mov dword ptr [ebp - 0x70], esi
    M32((uint32_t)(ebp + 0xffffff90u)) = (uint32_t)(esi);
L_00493849:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049384eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049384e:  // mov ecx, dword ptr [ebp - 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_00493851:  // mov edx, dword ptr [ebp - 0x30]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_00493854:  // mov eax, dword ptr [ebp - 0x38]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_00493857:  // mov dword ptr [ebp - 0x48], ecx
    M32((uint32_t)(ebp + 0xffffffb8u)) = (uint32_t)(ecx);
L_0049385a:  // mov dword ptr [ebp - 0x44], edx
    M32((uint32_t)(ebp + 0xffffffbcu)) = (uint32_t)(edx);
L_0049385d:  // lea ecx, [ebp - 0x4c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffb4u));
L_00493860:  // mov dword ptr [ebp - 0x4c], eax
    M32((uint32_t)(ebp + 0xffffffb4u)) = (uint32_t)(eax);
L_00493863:  // mov eax, dword ptr [ebp - 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_00493866:  // lea edx, [ebp - 0x9c]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffff64u));
L_0049386c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049386d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049386e:  // lea ecx, [ebp - 0x8c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff74u));
L_00493874:  // mov dword ptr [ebp - 0x40], eax
    M32((uint32_t)(ebp + 0xffffffc0u)) = (uint32_t)(eax);
L_00493877:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049387cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049387c:  // lea eax, [ebp - 0x9c]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffff64u));
L_00493882:  // lea ecx, [ebp - 0x5c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffa4u));
L_00493885:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493886:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493887:  // lea ecx, [ebp - 0x8c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff74u));
L_0049388d:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493892u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493892:  // lea ecx, [ebp - 0x9c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff64u));
L_00493898:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049389du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049389d:  // lea ecx, [ebp - 0x5c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffa4u));
L_004938a0:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004938a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004938a5:  // lea ecx, [ebp - 0x8c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff74u));
L_004938ab:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004938b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004938b0:  // mov ecx, dword ptr [ebp - 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff74u)));
L_004938b6:  // mov edx, dword ptr [ebp - 0x9c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff64u)));
L_004938bc:  // mov eax, dword ptr [ebp - 0x5c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa4u)));
L_004938bf:  // mov dword ptr [ebp - 0xc8], ecx
    M32((uint32_t)(ebp + 0xffffff38u)) = (uint32_t)(ecx);
L_004938c5:  // mov ecx, dword ptr [ebp - 0x88]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff78u)));
L_004938cb:  // mov dword ptr [ebp - 0xd0], edx
    M32((uint32_t)(ebp + 0xffffff30u)) = (uint32_t)(edx);
L_004938d1:  // mov edx, dword ptr [ebp - 0x98]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff68u)));
L_004938d7:  // mov dword ptr [ebp - 0xcc], eax
    M32((uint32_t)(ebp + 0xffffff34u)) = (uint32_t)(eax);
L_004938dd:  // mov eax, dword ptr [ebp - 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa8u)));
L_004938e0:  // mov dword ptr [ebp - 0xb8], ecx
    M32((uint32_t)(ebp + 0xffffff48u)) = (uint32_t)(ecx);
L_004938e6:  // mov ecx, dword ptr [ebp - 0x84]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff7cu)));
L_004938ec:  // mov dword ptr [ebp - 0xc0], edx
    M32((uint32_t)(ebp + 0xffffff40u)) = (uint32_t)(edx);
L_004938f2:  // mov edx, dword ptr [ebp - 0x94]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff6cu)));
L_004938f8:  // mov dword ptr [ebp - 0xbc], eax
    M32((uint32_t)(ebp + 0xffffff44u)) = (uint32_t)(eax);
L_004938fe:  // mov eax, dword ptr [ebp - 0x54]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffacu)));
L_00493901:  // mov dword ptr [ebp - 0xa8], ecx
    M32((uint32_t)(ebp + 0xffffff58u)) = (uint32_t)(ecx);
L_00493907:  // lea edi, [ebx + 0x40]
    edi = (uint32_t)((uint32_t)(ebx + 0x40u));
L_0049390a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049390f:  // lea esi, [ebp - 0xd0]
    esi = (uint32_t)((uint32_t)(ebp + 0xffffff30u));
L_00493915:  // mov dword ptr [ebp - 0xb0], edx
    M32((uint32_t)(ebp + 0xffffff50u)) = (uint32_t)(edx);
L_0049391b:  // mov dword ptr [ebp - 0xac], eax
    M32((uint32_t)(ebp + 0xffffff54u)) = (uint32_t)(eax);
L_00493921:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00493924:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00493926:  // lea edi, [ebx + 0x80]
    edi = (uint32_t)((uint32_t)(ebx + 0x80u));
L_0049392c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00493931:  // lea esi, [ebp + 0x18]
    esi = (uint32_t)((uint32_t)(ebp + 0x18u));
L_00493934:  // lea edx, [ebx + 0x70]
    edx = (uint32_t)((uint32_t)(ebx + 0x70u));
L_00493937:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00493939:  // mov ecx, dword ptr [ebp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0049393c:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0049393e:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_00493941:  // mov edi, dword ptr [ebp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x48u)));
L_00493944:  // mov esi, dword ptr [ebp - 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_00493947:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0049394a:  // mov ecx, dword ptr [ebp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0049394d:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00493950:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00493953:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00493955:  // lea eax, [edi + 0xdc]
    eax = (uint32_t)((uint32_t)(edi + 0xdcu));
L_0049395b:  // push 0x62dcb4
    t0 = 0x62dcb4u; esp -= 4; M32(esp) = t0;
L_00493960:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493961:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493966u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493966:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00493969:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049396b:  // jne 0x493c3f
    if (!f.zf) goto L_00493c3f;
L_00493971:  // lea edx, [edi + 0xe0]
    edx = (uint32_t)((uint32_t)(edi + 0xe0u));
L_00493977:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00493978:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049397du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049397d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00493980:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00493982:  // lea eax, [ebp - 0x1e0]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffe20u));
L_00493988:  // mov dword ptr [ebp + 0x4c], esi
    M32((uint32_t)(ebp + 0x4cu)) = (uint32_t)(esi);
L_0049398b:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00493990:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00493992:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00493994:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493995:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049399au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049399a:  // mov ecx, dword ptr [edi + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x128u)));
L_004939a0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004939a1:  // push 0x62dca0
    t0 = 0x62dca0u; esp -= 4; M32(esp) = t0;
L_004939a6:  // call 0x4aa820
    t0 = 0x004aa820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004939abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004939ab:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004939ae:  // lea eax, [ebp - 0x180]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffe80u));
L_004939b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004939b5:  // mov dword ptr [ebp - 0xa0], 0
    M32((uint32_t)(ebp + 0xffffff60u)) = (uint32_t)(0x0u);
L_004939bf:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004939c1:  // mov dword ptr [ebp + 0x50], 0
    M32((uint32_t)(ebp + 0x50u)) = (uint32_t)(0x0u);
L_004939c8:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004939cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004939cb:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004939cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004939ce:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004939d1:  // fmul dword ptr [ebx + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x64u)));
L_004939d4:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004939d7:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004939da:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004939dc:  // fld dword ptr [ebx + 0x68]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x68u)));
L_004939df:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004939e2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004939e4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004939e7:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004939ea:  // fmul dword ptr [ebx + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x64u)));
L_004939ed:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004939f0:  // fmul dword ptr [ebx + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x68u)));
L_004939f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004939f4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004939f6:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004939f9:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004939fc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004939fe:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493a01:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_00493a04:  // fmul dword ptr [ebx + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x68u)));
L_00493a07:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_00493a0a:  // fmul dword ptr [ebx + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x64u)));
L_00493a0d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493a0e:  // lea ecx, [ebp - 0x6c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_00493a11:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a13:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00493a15:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_00493a18:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a1a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493a1d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493a22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493a22:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_00493a25:  // fmul dword ptr [ebx + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x54u)));
L_00493a28:  // fld dword ptr [ebx + 0x58]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x58u)));
L_00493a2b:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_00493a2e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493a2f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493a30:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a32:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00493a35:  // fmul dword ptr [ebx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x50u)));
L_00493a38:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a3a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493a3d:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_00493a40:  // fmul dword ptr [ebx + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x58u)));
L_00493a43:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_00493a46:  // fmul dword ptr [ebx + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x54u)));
L_00493a49:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493a4a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a4c:  // fld dword ptr [ebx + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x50u)));
L_00493a4f:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_00493a52:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a54:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493a57:  // fld dword ptr [ebx + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x50u)));
L_00493a5a:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_00493a5c:  // fld dword ptr [ebx + 0x58]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x58u)));
L_00493a5f:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_00493a62:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a64:  // fld dword ptr [ebx + 0x54]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x54u)));
L_00493a67:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_00493a6a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493a6b:  // lea ecx, [ebp - 0x5c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffa4u));
L_00493a6e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a70:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493a73:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493a78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493a78:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_00493a7b:  // fmul dword ptr [ebx + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x44u)));
L_00493a7e:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_00493a81:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_00493a84:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493a85:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493a86:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a88:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00493a8b:  // fmul dword ptr [ebx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x40u)));
L_00493a8e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493a90:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493a93:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_00493a96:  // fmul dword ptr [ebx + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x48u)));
L_00493a99:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_00493a9c:  // fmul dword ptr [ebx + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x44u)));
L_00493a9f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493aa0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493aa2:  // fld dword ptr [ebx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x40u)));
L_00493aa5:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_00493aa8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493aaa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493aad:  // fld dword ptr [ebx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x40u)));
L_00493ab0:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_00493ab2:  // fld dword ptr [ebx + 0x48]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x48u)));
L_00493ab5:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_00493ab8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493ab9:  // lea ecx, [ebp - 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_00493abc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493abe:  // fld dword ptr [ebx + 0x44]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x44u)));
L_00493ac1:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_00493ac4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493ac6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493ac9:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493aceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493ace:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493acf:  // lea ecx, [ebp - 0x108]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffef8u));
L_00493ad5:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493adau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493ada:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00493add:  // lea eax, [ebp - 0x6c]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_00493ae0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493ae1:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00493ae3:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493ae5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493ae5:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00493ae7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00493ae9:  // mov dword ptr [ebp - 0x38], ecx
    M32((uint32_t)(ebp + 0xffffffc8u)) = (uint32_t)(ecx);
L_00493aec:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00493aef:  // mov dword ptr [ebp - 0x34], edx
    M32((uint32_t)(ebp + 0xffffffccu)) = (uint32_t)(edx);
L_00493af2:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00493af5:  // mov dword ptr [ebp - 0x30], ecx
    M32((uint32_t)(ebp + 0xffffffd0u)) = (uint32_t)(ecx);
L_00493af8:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00493afb:  // mov eax, dword ptr [ebx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1cu)));
L_00493afe:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00493b00:  // mov dword ptr [ebp - 0x2c], edx
    M32((uint32_t)(ebp + 0xffffffd4u)) = (uint32_t)(edx);
L_00493b03:  // jle 0x493c2e
    if ((f.zf || f.sf != f.of)) goto L_00493c2e;
L_00493b09:  // mov ecx, dword ptr [ebp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4cu)));
L_00493b0c:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00493b0d:  // mov dword ptr [ebp - 0x40], ecx
    M32((uint32_t)(ebp + 0xffffffc0u)) = (uint32_t)(ecx);
L_00493b10:  // mov edx, dword ptr [ebp - 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_00493b13:  // imul edx, eax
    t0 = limul32(edx, eax, f);
    edx = (uint32_t)(t0);
L_00493b16:  // mov eax, dword ptr [ebx + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xc4u)));
L_00493b1c:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_00493b1e:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_00493b21:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00493b23:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00493b25:  // mov dword ptr [ebp - 0x28], eax
    M32((uint32_t)(ebp + 0xffffffd8u)) = (uint32_t)(eax);
L_00493b28:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00493b2b:  // fld dword ptr [ebp - 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd8u)));
L_00493b2e:  // fmul dword ptr [ebp - 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff18u)));
L_00493b34:  // fld dword ptr [ebp - 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff20u)));
L_00493b3a:  // mov dword ptr [ebp - 0x24], ecx
    M32((uint32_t)(ebp + 0xffffffdcu)) = (uint32_t)(ecx);
L_00493b3d:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00493b40:  // mov dword ptr [ebp - 0x20], eax
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(eax);
L_00493b43:  // fmul dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_00493b46:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00493b49:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493b4b:  // fld dword ptr [ebp - 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffdcu)));
L_00493b4e:  // fmul dword ptr [ebp - 0xe4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff1cu)));
L_00493b54:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493b55:  // mov dword ptr [ebp - 0x1c], ecx
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(ecx);
L_00493b58:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493b5a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493b5d:  // fld dword ptr [ebp - 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd8u)));
L_00493b60:  // fmul dword ptr [ebp - 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff08u)));
L_00493b66:  // fld dword ptr [ebp - 0xf0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff10u)));
L_00493b6c:  // fmul dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_00493b6f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493b70:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493b72:  // fld dword ptr [ebp - 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffdcu)));
L_00493b75:  // fmul dword ptr [ebp - 0xf4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff0cu)));
L_00493b7b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493b7d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493b80:  // fld dword ptr [ebp - 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd8u)));
L_00493b83:  // fmul dword ptr [ebp - 0x108]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffef8u)));
L_00493b89:  // fld dword ptr [ebp - 0x100]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff00u)));
L_00493b8f:  // fmul dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_00493b92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493b93:  // lea ecx, [ebp - 0x6c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_00493b96:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493b98:  // fld dword ptr [ebp - 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffdcu)));
L_00493b9b:  // fmul dword ptr [ebp - 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffefcu)));
L_00493ba1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493ba3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493ba6:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493babu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493bab:  // fld dword ptr [ebp - 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd0u)));
L_00493bae:  // fadd dword ptr [ebp - 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_00493bb1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493bb2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493bb5:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_00493bb8:  // fadd dword ptr [ebp - 0x68]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff98u)));
L_00493bbb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493bbc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493bbf:  // fld dword ptr [ebp - 0x38]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffc8u)));
L_00493bc2:  // fadd dword ptr [ebp - 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff94u)));
L_00493bc5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493bc6:  // lea ecx, [ebp - 0x5c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffa4u));
L_00493bc9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493bcc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493bd1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493bd1:  // mov edx, dword ptr [ebp - 0x5c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa4u)));
L_00493bd4:  // mov ecx, dword ptr [ebp - 0x54]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffacu)));
L_00493bd7:  // mov eax, dword ptr [ebp - 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa8u)));
L_00493bda:  // mov dword ptr [ebp - 0x28], edx
    M32((uint32_t)(ebp + 0xffffffd8u)) = (uint32_t)(edx);
L_00493bdd:  // mov edx, dword ptr [ebp - 0x50]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb0u)));
L_00493be0:  // mov dword ptr [ebp - 0x20], ecx
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(ecx);
L_00493be3:  // mov dword ptr [ebp - 0x1c], edx
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(edx);
L_00493be6:  // lea edx, [ebp - 0x28]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffd8u));
L_00493be9:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00493bee:  // mov dword ptr [ebp - 0x24], eax
    M32((uint32_t)(ebp + 0xffffffdcu)) = (uint32_t)(eax);
L_00493bf1:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493bf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493bf6:  // fsub dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_00493bf9:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00493bfb:  // fld dword ptr [ebp + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x50u)));
L_00493bfe:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00493c04:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00493c06:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00493c09:  // jne 0x493c15
    if (!f.zf) goto L_00493c15;
L_00493c0b:  // fcom dword ptr [ebp + 0x50]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x50u)));
L_00493c0e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00493c10:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00493c13:  // je 0x493c20
    if (f.zf) goto L_00493c20;
L_00493c15:  // fstp dword ptr [ebp + 0x50]
    F32((uint32_t)(ebp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00493c18:  // mov dword ptr [ebp - 0xa0], esi
    M32((uint32_t)(ebp + 0xffffff60u)) = (uint32_t)(esi);
L_00493c1e:  // jmp 0x493c22
    goto L_00493c22;
L_00493c20:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00493c22:  // mov eax, dword ptr [ebx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1cu)));
L_00493c25:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00493c26:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00493c28:  // jl 0x493b10
    if ((f.sf != f.of)) goto L_00493b10;
L_00493c2e:  // mov eax, dword ptr [ebx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x20u)));
L_00493c31:  // mov ecx, dword ptr [ebp - 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff60u)));
L_00493c37:  // mov esi, dword ptr [ebp - 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_00493c3a:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00493c3c:  // mov dword ptr [ebp + 0x50], eax
    M32((uint32_t)(ebp + 0x50u)) = (uint32_t)(eax);
L_00493c3f:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00493c41:  // lea eax, [edi + 0xdc]
    eax = (uint32_t)((uint32_t)(edi + 0xdcu));
L_00493c47:  // push 0x62dcac
    t0 = 0x62dcacu; esp -= 4; M32(esp) = t0;
L_00493c4c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493c4d:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493c52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493c52:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00493c55:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00493c57:  // jne 0x49402a
    if (!f.zf) goto L_0049402a;
L_00493c5d:  // mov esi, dword ptr [ebp - 0x3c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_00493c60:  // mov ecx, dword ptr [edi + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xc8u)));
L_00493c66:  // fld dword ptr [ebp + 0x38]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x38u)));
L_00493c69:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_00493c6f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493c70:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00493c72:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00493c75:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00493c77:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00493c79:  // fld dword ptr [ebp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x3cu)));
L_00493c7c:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00493c7f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493c81:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_00493c84:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00493c87:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493c89:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493c8c:  // fld dword ptr [ebp + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x28u)));
L_00493c8f:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00493c91:  // fld dword ptr [ebp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2cu)));
L_00493c94:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00493c97:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493c98:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493c9a:  // fld dword ptr [ebp + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x30u)));
L_00493c9d:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00493ca0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493ca2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493ca5:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00493ca8:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00493cab:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00493cae:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00493cb1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493cb2:  // lea ecx, [ebp - 0x6c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_00493cb5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493cb7:  // fld dword ptr [ebp + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x18u)));
L_00493cba:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00493cbc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493cbe:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493cc1:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493cc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493cc6:  // fld dword ptr [ebp + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x10u)));
L_00493cc9:  // fadd dword ptr [ebp - 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_00493ccc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493ccd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493cd0:  // fld dword ptr [ebp + 0xc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xcu)));
L_00493cd3:  // fadd dword ptr [ebp - 0x68]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff98u)));
L_00493cd6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493cd7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493cda:  // fld dword ptr [ebp - 0x6c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff94u)));
L_00493cdd:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_00493ce0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493ce1:  // lea ecx, [ebp - 0x38]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffc8u));
L_00493ce4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493ce7:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493cecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493cec:  // fld dword ptr [ebp + 0x38]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x38u)));
L_00493cef:  // lea eax, [esi + esi*2]
    eax = (uint32_t)((uint32_t)(esi + esi * 2u));
L_00493cf2:  // mov esi, dword ptr [edi + 0x10c]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x10cu)));
L_00493cf8:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00493cfb:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_00493cfd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493cfe:  // mov dword ptr [ebp - 0x40], eax
    M32((uint32_t)(ebp + 0xffffffc0u)) = (uint32_t)(eax);
L_00493d01:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_00493d04:  // fld dword ptr [ebp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x3cu)));
L_00493d07:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_00493d0a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d0c:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_00493d0f:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_00493d12:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d14:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493d17:  // fld dword ptr [ebp + 0x38]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x38u)));
L_00493d1a:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_00493d1d:  // fld dword ptr [ebp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x3cu)));
L_00493d20:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_00493d23:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d25:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_00493d28:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_00493d2b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493d2c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d2e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493d31:  // fld dword ptr [ebp + 0x38]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x38u)));
L_00493d34:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_00493d36:  // fld dword ptr [ebp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x3cu)));
L_00493d39:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_00493d3c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493d3d:  // lea ecx, [ebp - 0x6c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff94u));
L_00493d40:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d42:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_00493d45:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_00493d48:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d4a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493d4d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493d52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493d52:  // fld dword ptr [ebp + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x28u)));
L_00493d55:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_00493d58:  // fld dword ptr [ebp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2cu)));
L_00493d5b:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_00493d5e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493d5f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493d60:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d62:  // fld dword ptr [ebp + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x30u)));
L_00493d65:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_00493d68:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d6a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493d6d:  // fld dword ptr [ebp + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x28u)));
L_00493d70:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_00493d73:  // fld dword ptr [ebp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2cu)));
L_00493d76:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_00493d79:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493d7a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d7c:  // fld dword ptr [ebp + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x30u)));
L_00493d7f:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_00493d82:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d84:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493d87:  // fld dword ptr [ebp + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x28u)));
L_00493d8a:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_00493d8c:  // fld dword ptr [ebp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2cu)));
L_00493d8f:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_00493d92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493d93:  // lea ecx, [ebp - 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_00493d96:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493d98:  // fld dword ptr [ebp + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x30u)));
L_00493d9b:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_00493d9e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493da0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493da3:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493da8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493da8:  // fld dword ptr [ebp + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x18u)));
L_00493dab:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_00493dae:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00493db1:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_00493db4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493db5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493db6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493db8:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00493dbb:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_00493dbe:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493dc0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493dc3:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00493dc6:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_00493dc9:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00493dcc:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_00493dcf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493dd0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493dd2:  // fld dword ptr [ebp + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x18u)));
L_00493dd5:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_00493dd8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493dda:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493ddd:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00493de0:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_00493de3:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00493de6:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_00493de9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493dea:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493dec:  // fld dword ptr [ebp + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x18u)));
L_00493def:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_00493df1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00493df3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493df6:  // lea ecx, [ebp - 0x118]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffee8u));
L_00493dfc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493e01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493e01:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493e02:  // lea ecx, [ebp - 0x180]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe80u));
L_00493e08:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493e0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493e0d:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00493e12:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00493e14:  // lea eax, [ebp - 0x210]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffdf0u));
L_00493e1a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00493e1c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493e1d:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493e22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493e22:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00493e27:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00493e29:  // lea ecx, [ebp - 0x1b0]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe50u));
L_00493e2f:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00493e31:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493e32:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493e37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493e37:  // mov esi, dword ptr [ebp + 0x4c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x4cu)));
L_00493e3a:  // mov ecx, dword ptr [edi + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x128u)));
L_00493e40:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00493e41:  // push 0x62dca0
    t0 = 0x62dca0u; esp -= 4; M32(esp) = t0;
L_00493e46:  // call 0x4aa820
    t0 = 0x004aa820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493e4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493e4b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e4d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e4f:  // lea edx, [ebp - 0x8c]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffff74u));
L_00493e55:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00493e57:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00493e58:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00493e5b:  // lea ecx, [ebp - 0x210]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffdf0u));
L_00493e61:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493e62:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00493e63:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e65:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e67:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e69:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00493e6b:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493e70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493e70:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00493e73:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e75:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e77:  // lea eax, [ebp - 0x5c]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffffa4u));
L_00493e7a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00493e7c:  // lea ecx, [ebp - 0x1b0]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe50u));
L_00493e82:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493e83:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493e84:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00493e85:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e87:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e89:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493e8b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00493e8d:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493e92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493e92:  // fld dword ptr [ebp - 0x84]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff7cu)));
L_00493e98:  // fsub dword ptr [ebp - 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffffacu)));
L_00493e9b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493e9c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493e9f:  // fld dword ptr [ebp - 0x88]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff78u)));
L_00493ea5:  // fsub dword ptr [ebp - 0x58]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffffa8u)));
L_00493ea8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493ea9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493eac:  // fld dword ptr [ebp - 0x8c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff74u)));
L_00493eb2:  // fsub dword ptr [ebp - 0x5c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffffa4u)));
L_00493eb5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493eb6:  // lea ecx, [ebp - 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_00493eb9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493ebc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493ec1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493ec1:  // mov eax, dword ptr [ebp - 0x7c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff84u)));
L_00493ec4:  // mov ecx, dword ptr [ebp - 0x78]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff88u)));
L_00493ec7:  // mov edx, dword ptr [ebp - 0x74]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff8cu)));
L_00493eca:  // mov dword ptr [ebp - 0x8c], eax
    M32((uint32_t)(ebp + 0xffffff74u)) = (uint32_t)(eax);
L_00493ed0:  // mov eax, dword ptr [ebp - 0x70]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff90u)));
L_00493ed3:  // mov dword ptr [ebp - 0x88], ecx
    M32((uint32_t)(ebp + 0xffffff78u)) = (uint32_t)(ecx);
L_00493ed9:  // mov ecx, dword ptr [ebx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00493edc:  // mov dword ptr [ebp - 0x80], eax
    M32((uint32_t)(ebp + 0xffffff80u)) = (uint32_t)(eax);
L_00493edf:  // fld dword ptr [ebp - 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd0u)));
L_00493ee2:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00493ee5:  // mov dword ptr [ebp - 0x84], edx
    M32((uint32_t)(ebp + 0xffffff7cu)) = (uint32_t)(edx);
L_00493eeb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493eec:  // fsub dword ptr [ecx + esi - 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + esi + 0xfffffff8u)));
L_00493ef0:  // lea eax, [ecx + esi - 0x10]
    eax = (uint32_t)((uint32_t)(ecx + esi + 0xfffffff0u));
L_00493ef4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493ef7:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_00493efa:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00493efd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493efe:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493f01:  // fld dword ptr [ebp - 0x38]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffc8u)));
L_00493f04:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00493f06:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493f07:  // lea ecx, [ebp - 0x9c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff64u));
L_00493f0d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00493f10:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493f15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493f15:  // mov edx, dword ptr [ebx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00493f18:  // mov ecx, dword ptr [ebp - 0x38]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_00493f1b:  // lea eax, [edx + esi - 0x10]
    eax = (uint32_t)((uint32_t)(edx + esi + 0xfffffff0u));
L_00493f1f:  // mov dword ptr [edx + esi - 0x10], ecx
    M32((uint32_t)(edx + esi + 0xfffffff0u)) = (uint32_t)(ecx);
L_00493f23:  // mov edx, dword ptr [ebp - 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_00493f26:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00493f29:  // mov ecx, dword ptr [ebp - 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_00493f2c:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00493f2f:  // mov edx, dword ptr [ebp - 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_00493f32:  // lea ecx, [ebp - 0x118]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffee8u));
L_00493f38:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00493f3b:  // lea eax, [ebp - 0x9c]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffff64u));
L_00493f41:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493f42:  // lea edx, [ebp - 0x150]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffeb0u));
L_00493f48:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493f49:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00493f4a:  // lea ecx, [ebp - 0x180]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe80u));
L_00493f50:  // call 0x494350
    t0 = 0x00494350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493f55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493f55:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00493f57:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493f5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493f5c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00493f5e:  // mov esi, dword ptr [ebp + 0x4c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x4cu)));
L_00493f61:  // mov dword ptr [ebp - 0x9c], ecx
    M32((uint32_t)(ebp + 0xffffff64u)) = (uint32_t)(ecx);
L_00493f67:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00493f6c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00493f6f:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00493f71:  // mov dword ptr [ebp - 0x98], edx
    M32((uint32_t)(ebp + 0xffffff68u)) = (uint32_t)(edx);
L_00493f77:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00493f79:  // fld dword ptr [ebp - 0x98]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff68u)));
L_00493f7f:  // fld dword ptr [ebp - 0x74]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff8cu)));
L_00493f82:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00493f84:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00493f86:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00493f88:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_00493f8a:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00493f8d:  // mov dword ptr [ebp - 0x94], ecx
    M32((uint32_t)(ebp + 0xffffff6cu)) = (uint32_t)(ecx);
L_00493f93:  // lea ecx, [ebp - 0x108]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffef8u));
L_00493f99:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00493f9c:  // mov eax, dword ptr [ebx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00493f9f:  // mov dword ptr [ebp - 0x90], edx
    M32((uint32_t)(ebp + 0xffffff70u)) = (uint32_t)(edx);
L_00493fa5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493fa6:  // lea eax, [eax + esi*4 - 4]
    eax = (uint32_t)((uint32_t)(eax + esi * 4u + 0xfffffffcu));
L_00493faa:  // fld1 
    lpush(x, 1.0L);
L_00493fac:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00493fae:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00493fb0:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00493fb2:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493fb7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493fb7:  // mov edx, dword ptr [ebx + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00493fba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493fbc:  // lea ecx, [ebp - 0x108]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffef8u));
L_00493fc2:  // mov eax, dword ptr [edx + esi*4 - 4]
    eax = (uint32_t)(M32((uint32_t)(edx + esi * 4u + 0xfffffffcu)));
L_00493fc6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493fc7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00493fc9:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493fceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493fce:  // mov ecx, dword ptr [edi + 0x10c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10cu)));
L_00493fd4:  // mov eax, dword ptr [ebp - 0x40]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_00493fd7:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00493fd9:  // lea edx, [ebp - 0x150]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffeb0u));
L_00493fdf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00493fe0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00493fe1:  // lea ecx, [ebp + 0x18]
    ecx = (uint32_t)((uint32_t)(ebp + 0x18u));
L_00493fe4:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00493fe9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00493fe9:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00493feb:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00493ff0:  // lea edi, [ebp - 0xd0]
    edi = (uint32_t)((uint32_t)(ebp + 0xffffff30u));
L_00493ff6:  // lea eax, [ebp - 0x108]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffef8u));
L_00493ffc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00493ffe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00493fff:  // lea ecx, [ebp - 0x150]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffeb0u));
L_00494005:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494006:  // lea ecx, [ebp - 0xd0]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff30u));
L_0049400c:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494011u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494011:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00494016:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00494018:  // lea edi, [ebp - 0xd0]
    edi = (uint32_t)((uint32_t)(ebp + 0xffffff30u));
L_0049401e:  // mov byte ptr [ebp - 0xd], 1
    M8((uint32_t)(ebp + 0xfffffff3u)) = (uint8_t)(0x1u);
L_00494022:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00494024:  // mov edi, dword ptr [ebp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x48u)));
L_00494027:  // mov esi, dword ptr [ebp - 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049402a:  // cmp dword ptr [ebp + 0x4c], -1
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x4cu)), 0xffffffffu, f);
L_0049402e:  // je 0x494042
    if (f.zf) goto L_00494042;
L_00494030:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_00494033:  // mov edx, dword ptr [edi + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xc4u)));
L_00494039:  // mov dword ptr [ebp - 0x14], eax
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(eax);
L_0049403c:  // mov al, byte ptr [edx + eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + eax))) & 0xffu);
L_0049403f:  // mov byte ptr [ebp - 0x3c], al
    M8((uint32_t)(ebp + 0xffffffc4u)) = (uint8_t)((eax & 0xffu));
L_00494042:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00494044:  // je 0x494121
    if (f.zf) goto L_00494121;
L_0049404a:  // mov eax, dword ptr [edi + 0x88]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x88u)));
L_00494050:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00494052:  // jne 0x4940ab
    if (!f.zf) goto L_004940ab;
L_00494054:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00494056:  // lea eax, [ebp - 0x118]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffee8u));
L_0049405c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049405d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049405f:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494061u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494061:  // fld dword ptr [ebp + 8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x8u)));
L_00494064:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00494066:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00494068:  // fstp dword ptr [ebp + 8]
    F32((uint32_t)(ebp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0049406b:  // fld dword ptr [ebp + 0xc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xcu)));
L_0049406e:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00494071:  // fstp dword ptr [ebp + 0xc]
    F32((uint32_t)(ebp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00494074:  // fld dword ptr [ebp + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x10u)));
L_00494077:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049407a:  // lea eax, [ebp - 0x150]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffeb0u));
L_00494080:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494081:  // fstp dword ptr [ebp + 0x10]
    F32((uint32_t)(ebp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00494084:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00494086:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494089u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494089:  // lea ecx, [ebp - 0x1e0]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe20u));
L_0049408f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494090:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494091:  // lea ecx, [ebp + 0x18]
    ecx = (uint32_t)((uint32_t)(ebp + 0x18u));
L_00494094:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494099u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494099:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049409e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004940a0:  // lea edi, [ebp + 0x18]
    edi = (uint32_t)((uint32_t)(ebp + 0x18u));
L_004940a3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004940a5:  // mov edi, dword ptr [ebp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x48u)));
L_004940a8:  // mov esi, dword ptr [ebp - 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_004940ab:  // mov eax, dword ptr [edi + 0x88]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x88u)));
L_004940b1:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004940b3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004940b4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004940b6:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004940b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004940b9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004940bb:  // jne 0x494121
    if (!f.zf) goto L_00494121;
L_004940bd:  // mov esi, dword ptr [ebp - 0x3c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_004940c0:  // mov eax, dword ptr [edi + 0xc8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xc8u)));
L_004940c6:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004940cc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004940ce:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004940d1:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004940d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004940d4:  // lea ecx, [ebp + 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004940d7:  // call 0x41ad10
    t0 = 0x0041ad10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004940dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004940dc:  // mov al, byte ptr [ebp - 0xd]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xfffffff3u))) & 0xffu);
L_004940df:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004940e1:  // jne 0x4941a0
    if (!f.zf) goto L_004941a0;
L_004940e7:  // mov eax, dword ptr [edi + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x10cu)));
L_004940ed:  // lea esi, [esi + esi*2]
    esi = (uint32_t)((uint32_t)(esi + esi * 2u));
L_004940f0:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004940f3:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_004940f5:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004940fa:  // lea edi, [ebp + 0x18]
    edi = (uint32_t)((uint32_t)(ebp + 0x18u));
L_004940fd:  // lea edx, [ebp + 0x18]
    edx = (uint32_t)((uint32_t)(ebp + 0x18u));
L_00494100:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00494102:  // lea eax, [ebp - 0x150]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffeb0u));
L_00494108:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00494109:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049410a:  // lea ecx, [ebp - 0xd0]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff30u));
L_00494110:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494115u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494115:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049411a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049411c:  // jmp 0x4941ab
    goto L_004941ab;
L_00494121:  // mov esi, dword ptr [ebp - 0x3c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_00494124:  // mov eax, dword ptr [edi + 0xc8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xc8u)));
L_0049412a:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_00494130:  // lea edx, [ebp - 0x118]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffee8u));
L_00494136:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00494138:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049413b:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0049413d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049413e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049413f:  // lea ecx, [ebp + 0x18]
    ecx = (uint32_t)((uint32_t)(ebp + 0x18u));
L_00494142:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494147u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494147:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00494148:  // lea ecx, [ebp + 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0049414b:  // call 0x41ad10
    t0 = 0x0041ad10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494150u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494150:  // mov al, byte ptr [ebp - 0xd]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xfffffff3u))) & 0xffu);
L_00494153:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00494155:  // jne 0x4941a0
    if (!f.zf) goto L_004941a0;
L_00494157:  // mov edx, dword ptr [edi + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x10cu)));
L_0049415d:  // lea eax, [esi + esi*2]
    eax = (uint32_t)((uint32_t)(esi + esi * 2u));
L_00494160:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00494163:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00494165:  // lea ecx, [ebp - 0x150]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffeb0u));
L_0049416b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049416c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049416d:  // lea ecx, [ebp + 0x18]
    ecx = (uint32_t)((uint32_t)(ebp + 0x18u));
L_00494170:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494175u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494175:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049417a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049417c:  // lea edi, [ebp + 0x18]
    edi = (uint32_t)((uint32_t)(ebp + 0x18u));
L_0049417f:  // lea edx, [ebp + 0x18]
    edx = (uint32_t)((uint32_t)(ebp + 0x18u));
L_00494182:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00494184:  // lea eax, [ebp - 0x150]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffeb0u));
L_0049418a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049418b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049418c:  // lea ecx, [ebp - 0xd0]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff30u));
L_00494192:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494197u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494197:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049419c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049419e:  // jmp 0x4941ab
    goto L_004941ab;
L_004941a0:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004941a5:  // lea esi, [ebp - 0xd0]
    esi = (uint32_t)((uint32_t)(ebp + 0xffffff30u));
L_004941ab:  // mov eax, dword ptr [ebp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x48u)));
L_004941ae:  // mov edx, dword ptr [ebx + 0x28]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_004941b1:  // lea edi, [ebp + 0x18]
    edi = (uint32_t)((uint32_t)(ebp + 0x18u));
L_004941b4:  // mov dword ptr [ebp - 0x18], 0
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(0x0u);
L_004941bb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004941bd:  // fild dword ptr [ebp - 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebp + 0xffffffecu)));
L_004941c0:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_004941c6:  // mov esi, dword ptr [ebx + 0x34]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x34u)));
L_004941c9:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004941cc:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_004941ce:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004941d0:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_004941d2:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_004941d4:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004941d7:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_004941da:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004941dd:  // mov dword ptr [esi + 8], ecx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ecx);
L_004941e0:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004941e3:  // mov dword ptr [esi + 0xc], edx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(edx);
L_004941e6:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_004941ec:  // mov esi, dword ptr [ebx + 0x24]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x24u)));
L_004941ef:  // mov edi, dword ptr [ebx + 0x30]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004941f2:  // lea ecx, [ecx + ecx*2]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_004941f5:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004941f8:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004941fa:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004941fc:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00494201:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00494203:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_00494209:  // mov edx, dword ptr [ebx + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_0049420c:  // mov esi, dword ptr [ebx + 0x38]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x38u)));
L_0049420f:  // shl ecx, 2
    t0 = lshl<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00494212:  // mov edx, dword ptr [edx + ecx]
    edx = (uint32_t)(M32((uint32_t)(edx + ecx)));
L_00494215:  // mov dword ptr [esi + ecx], edx
    M32((uint32_t)(esi + ecx)) = (uint32_t)(edx);
L_00494218:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049421e:  // mov edi, dword ptr [ebx + 0x28]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_00494221:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00494224:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_00494227:  // add ecx, edi
    t0 = ladd<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_00494229:  // lea esi, [ebp + 0x18]
    esi = (uint32_t)((uint32_t)(ebp + 0x18u));
L_0049422c:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0049422e:  // mov edx, dword ptr [ebp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_00494231:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00494234:  // mov edx, dword ptr [ebp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_00494237:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0049423a:  // mov edx, dword ptr [ebp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0049423d:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_00494240:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_00494246:  // mov edx, dword ptr [ebx + 0x24]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x24u)));
L_00494249:  // lea edi, [ecx + ecx*2]
    edi = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0049424c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00494251:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_00494254:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_00494256:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00494258:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049425e:  // mov edx, dword ptr [ebx + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_00494261:  // fstp dword ptr [edx + ecx*4]
    F32((uint32_t)(edx + ecx * 4u)) = lf32(ST(0));
    lpop(x);
L_00494264:  // mov ecx, dword ptr [eax + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x90u)));
L_0049426a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0049426c:  // jle 0x4942d2
    if ((f.zf || f.sf != f.of)) goto L_004942d2;
L_0049426e:  // jmp 0x494273
    goto L_00494273;
L_00494270:  // mov eax, dword ptr [ebp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x48u)));
L_00494273:  // mov ecx, dword ptr [ebp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x54u)));
L_00494276:  // mov edx, dword ptr [ebp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_00494279:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049427a:  // mov ecx, dword ptr [ebp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4cu)));
L_0049427d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049427e:  // mov edx, dword ptr [eax + 0x94]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x94u)));
L_00494284:  // mov eax, dword ptr [ebp - 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_00494287:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494288:  // lea esi, [ebp + 0x18]
    esi = (uint32_t)((uint32_t)(ebp + 0x18u));
L_0049428b:  // mov ecx, dword ptr [edx + eax*4]
    ecx = (uint32_t)(M32((uint32_t)(edx + eax * 4u)));
L_0049428e:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00494291:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494292:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00494297:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0049429a:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0049429c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0049429f:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004942a1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004942a3:  // mov ecx, dword ptr [ebp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004942a6:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004942a8:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_004942ab:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004942ae:  // mov ecx, dword ptr [ebp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_004942b1:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004942b4:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004942b7:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004942b9:  // call 0x4934f0
    t0 = 0x004934f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004942beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004942be:  // mov edx, dword ptr [ebp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x48u)));
L_004942c1:  // mov eax, dword ptr [ebp - 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_004942c4:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004942c5:  // mov ecx, dword ptr [edx + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x90u)));
L_004942cb:  // mov dword ptr [ebp - 0x18], eax
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(eax);
L_004942ce:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004942d0:  // jl 0x494270
    if ((f.sf != f.of)) goto L_00494270;
L_004942d2:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004942d4:  // rdtsc 
    __asm__ volatile("rdtsc" : "=a"(eax), "=d"(edx));
L_004942d6:  // mov ecx, dword ptr [0x83c7e4]
    ecx = (uint32_t)(M32((uint32_t)(0x83c7e4u)));
L_004942dc:  // mov dword ptr [ebp + 0x14], edx
    M32((uint32_t)(ebp + 0x14u)) = (uint32_t)(edx);
L_004942df:  // mov edx, dword ptr [ebp - 0xd8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff28u)));
L_004942e5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004942e6:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004942e8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004942e9:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004942eb:  // mov eax, dword ptr [0x83c9b4]
    eax = (uint32_t)(M32((uint32_t)(0x83c9b4u)));
L_004942f0:  // mov dword ptr [0x83c7e4], ecx
    M32((uint32_t)(0x83c7e4u)) = (uint32_t)(ecx);
L_004942f6:  // mov ecx, dword ptr [ebp - 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xfffffff4u)));
L_004942f9:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004942fa:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00494301:  // mov dword ptr [0x83c9b4], eax
    M32((uint32_t)(0x83c9b4u)) = (uint32_t)(eax);
L_00494306:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00494307:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_00494309:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049430a:  // ret 0x50
    c->target = M32(esp); esp += 84u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004934f0, 004934f0)
