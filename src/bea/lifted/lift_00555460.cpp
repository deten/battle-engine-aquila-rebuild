// lifted from 00555460 (FUN_00555460, 407 bytes, 112 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00555460(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00555460;
L_00555460:  // sub esp, 0x128
    t0 = lsub<32>(esp, 0x128u, f);
    esp = (uint32_t)(t0);
L_00555466:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00555467:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00555468:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0055546a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055546b:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00555470:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_00555475:  // lea edi, [esp + 0x74]
    edi = (uint32_t)((uint32_t)(esp + 0x74u));
L_00555479:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_0055547d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0055547f:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00555484:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00555489:  // lea edi, [esp + 0xf4]
    edi = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00555490:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555491:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00555493:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00555498:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_0055549d:  // lea edi, [esp + 0x38]
    edi = (uint32_t)((uint32_t)(esp + 0x38u));
L_005554a1:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_005554a8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005554aa:  // lea ecx, [esp + 0xf8]
    ecx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_005554b1:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_005554b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005554ba:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005554bb:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_005554c3:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_005554cb:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005554d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005554d0:  // lea eax, [esp + 0xb4]
    eax = (uint32_t)((uint32_t)(esp + 0xb4u));
L_005554d7:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_005554de:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005554df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005554e0:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005554e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005554e5:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005554ea:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_005554f1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005554f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005554f4:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005554f6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005554f8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005554f9:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005554ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005554ff:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00555503:  // lea eax, [esp + 0x74]
    eax = (uint32_t)((uint32_t)(esp + 0x74u));
L_00555507:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00555508:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555509:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055550eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055550e:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00555513:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00555517:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00555519:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0055551a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0055551c:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0055551e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055551f:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555525u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555525:  // mov eax, dword ptr [0x89ce4c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_0055552a:  // mov ecx, dword ptr [eax*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89c9a4u)));
L_00555531:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00555535:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00555536:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00555538:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055553au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055553a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0055553e:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00555542:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00555546:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0055554a:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0055554e:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00555553:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00555557:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00555559:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0055555d:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00555565:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00555567:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00555568:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0055556a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055556b:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555571u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555571:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00555575:  // fsub dword ptr [ebx + 0x390]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x390u)));
L_0055557b:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0055557f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00555583:  // fsub dword ptr [ebx + 0x394]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x394u)));
L_00555589:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0055558d:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00555591:  // fsub dword ptr [ebx + 0x398]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x398u)));
L_00555597:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0055559c:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_005555a0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_005555a4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005555a6:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_005555ae:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005555b0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005555b1:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_005555b3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005555b4:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005555bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005555ba:  // fld dword ptr [0x66018c]
    lpush(x, (long double)F32((uint32_t)(0x66018cu)));
L_005555c0:  // fmul dword ptr [0x5d8c54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c54u)));
L_005555c6:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_005555ca:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_005555ce:  // cmp eax, 0x3e8
    t0 = lsub<32>(eax, 0x3e8u, f);
L_005555d3:  // jle 0x5555dc
    if ((f.zf || f.sf != f.of)) goto L_005555dc;
L_005555d5:  // mov eax, 0x3e8
    eax = (uint32_t)(0x3e8u);
L_005555da:  // jmp 0x5555e2
    goto L_005555e2;
L_005555dc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005555de:  // jge 0x5555e2
    if ((f.sf == f.of)) goto L_005555e2;
L_005555e0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005555e2:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_005555e5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005555e6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005555e8:  // call 0x5011c0
    t0 = 0x005011c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005555edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005555ed:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005555ee:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005555ef:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005555f0:  // add esp, 0x128
    t0 = ladd<32>(esp, 0x128u, f);
    esp = (uint32_t)(t0);
L_005555f6:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00555460, 00555460)
