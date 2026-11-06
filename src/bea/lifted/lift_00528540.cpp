// lifted from 00528540 (FUN_00528540, 111 bytes, 38 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00528540(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00528540;
L_00528540:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00528541:  // mov eax, dword ptr [0x89bec8]
    eax = (uint32_t)(M32((uint32_t)(0x89bec8u)));
L_00528546:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00528547:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00528549:  // je 0x5285ac
    if (f.zf) goto L_005285ac;
L_0052854b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052854d:  // lea edx, [esp + 4]
    edx = (uint32_t)((uint32_t)(esp + 0x4u));
L_00528551:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00528552:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00528553:  // call dword ptr [ecx + 0x24]
    t0 = M32((uint32_t)(ecx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00528556u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00528556:  // mov al, byte ptr [esp + 4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4u))) & 0xffu);
L_0052855a:  // mov esi, dword ptr [esp + 0xc]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0052855e:  // test al, 5
    t0 = llog<8>((eax & 0xffu) & 0x5u, f);
L_00528560:  // jne 0x528574
    if (!f.zf) goto L_00528574;
L_00528562:  // mov eax, dword ptr [0x89beb0]
    eax = (uint32_t)(M32((uint32_t)(0x89beb0u)));
L_00528567:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00528569:  // je 0x528586
    if (f.zf) goto L_00528586;
L_0052856b:  // mov eax, dword ptr [0x89bea8]
    eax = (uint32_t)(M32((uint32_t)(0x89bea8u)));
L_00528570:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00528572:  // jne 0x528586
    if (!f.zf) goto L_00528586;
L_00528574:  // push 0x89bed4
    t0 = 0x89bed4u; esp -= 4; M32(esp) = t0;
L_00528579:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052857a:  // call 0x55f8a1
    t0 = 0x0055f8a1u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052857fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052857f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00528582:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00528584:  // je 0x5285ac
    if (f.zf) goto L_005285ac;
L_00528586:  // push 0xff
    t0 = 0xffu; esp -= 4; M32(esp) = t0;
L_0052858b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052858c:  // push 0x89bed4
    t0 = 0x89bed4u; esp -= 4; M32(esp) = t0;
L_00528591:  // call 0x55f807
    t0 = 0x0055f807u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00528596u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00528596:  // mov eax, dword ptr [0x89beb8]
    eax = (uint32_t)(M32((uint32_t)(0x89beb8u)));
L_0052859b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052859e:  // mov byte ptr [0x89beac], 0
    M8((uint32_t)(0x89beacu)) = (uint8_t)(0x0u);
L_005285a5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005285a6:  // call dword ptr [0x5d8120]
    t0 = M32((uint32_t)(0x5d8120u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005285acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005285ac:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005285ad:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_005285ae:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00528540, 00528540)
