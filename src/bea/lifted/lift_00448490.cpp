// lifted from 00448490 (vslot8, 239 bytes, 89 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00448490(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00448490;
L_00448490:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00448491:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00448492:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00448493:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00448494:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00448496:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00448497:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0044849a:  // lea edi, [esi + 0x24]
    edi = (uint32_t)((uint32_t)(esi + 0x24u));
L_0044849d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044849f:  // je 0x448570
    if (f.zf) goto L_00448570;
L_004484a5:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004484a8:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004484aa:  // call dword ptr [eax + 0x130]
    t0 = M32((uint32_t)(eax + 0x130u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004484b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004484b0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004484b2:  // je 0x44853a
    if (f.zf) goto L_0044853a;
L_004484b8:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004484bb:  // mov eax, dword ptr [ecx + 0x27c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x27cu)));
L_004484c1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004484c3:  // jne 0x448570
    if (!f.zf) goto L_00448570;
L_004484c9:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004484cb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004484cd:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004484d0:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004484d3:  // mov ebx, esp
    ebx = (uint32_t)(esp);
L_004484d5:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004484d7:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_004484d9:  // mov dword ptr [ebx], ebp
    M32((uint32_t)(ebx)) = (uint32_t)(ebp);
L_004484db:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004484de:  // mov dword ptr [ebx + 4], ebp
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(ebp);
L_004484e1:  // mov ebp, dword ptr [eax + 8]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004484e4:  // mov dword ptr [ebx + 8], ebp
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ebp);
L_004484e7:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004484ea:  // mov dword ptr [ebx + 0xc], eax
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(eax);
L_004484ed:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004484f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004484f3:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004484f5:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004484f8:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004484fb:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004484fd:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004484ff:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_00448502:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00448505:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_00448508:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0044850a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0044850c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0044850e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00448510:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00448512:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00448514:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00448516:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00448518:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0044851c:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00448522u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00448522:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00448526:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00448528:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044852b:  // jne 0x44853a
    if (!f.zf) goto L_0044853a;
L_0044852d:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0044852f:  // mov ecx, dword ptr [eax + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_00448532:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00448533:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00448535:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044853au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044853a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0044853e:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00448542:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00448548:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0044854e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044854f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00448551:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00448553:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00448554:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00448555:  // push 0xbb9
    t0 = 0xbb9u; esp -= 4; M32(esp) = t0;
L_0044855a:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0044855e:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00448563:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00448568u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00448568:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00448569:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044856a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044856b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044856c:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0044856d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00448570:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00448572:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00448574:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00448577u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00448577:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00448578:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00448579:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044857a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044857b:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0044857c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00448490, 00448490)
