// lifted from 004c2400 (vslot7, 190 bytes, 67 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c2400(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c2400;
L_004c2400:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c2401:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c2403:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c2404:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c2408:  // lea eax, [esi + 0x5c]
    eax = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c240b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c240d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c240e:  // push 0x31
    t0 = 0x31u; esp -= 4; M32(esp) = t0;
L_004c2410:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2415u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2415:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c2418:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2419:  // push 0x32
    t0 = 0x32u; esp -= 4; M32(esp) = t0;
L_004c241b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c241d:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2422u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2422:  // lea edx, [esi + 0x6c]
    edx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c2425:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2427:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2428:  // push 0x33
    t0 = 0x33u; esp -= 4; M32(esp) = t0;
L_004c242a:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c242fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c242f:  // lea eax, [esi + 0x74]
    eax = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c2432:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2434:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2435:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_004c2437:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c243cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c243c:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c243f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2440:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_004c2442:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2444:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2449u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2449:  // lea edx, [esi + 0x84]
    edx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c244f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2451:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2452:  // push 0x36
    t0 = 0x36u; esp -= 4; M32(esp) = t0;
L_004c2454:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2459u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2459:  // lea eax, [esi + 0x8c]
    eax = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004c245f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2461:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2462:  // push 0x37
    t0 = 0x37u; esp -= 4; M32(esp) = t0;
L_004c2464:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2469u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2469:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004c246f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2470:  // push 0x38
    t0 = 0x38u; esp -= 4; M32(esp) = t0;
L_004c2472:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2474:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2479u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2479:  // lea edx, [esi + 0x9c]
    edx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004c247f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2481:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c2482:  // push 0x39
    t0 = 0x39u; esp -= 4; M32(esp) = t0;
L_004c2484:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2489u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2489:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004c248f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2491:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2492:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_004c2494:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c2499u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c2499:  // mov ecx, dword ptr [esi + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004c249f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c24a0:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004c24a2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c24a4:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c24a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c24a9:  // mov edx, dword ptr [esi + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004c24af:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c24b1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c24b2:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_004c24b4:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c24b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c24b9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c24ba:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c24bb:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c2400, 004c2400)
