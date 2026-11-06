// lifted from 0045ffa0 (vslot6, 125 bytes, 33 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0045ffa0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0045ffa0;
L_0045ffa0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045ffa1:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0045ffa3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045ffa4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045ffa5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045ffaa:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045ffafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045ffaf:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_0045ffb5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0045ffb7:  // lea edi, [ebx + 0x1a0]
    edi = (uint32_t)((uint32_t)(ebx + 0x1a0u));
L_0045ffbd:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0045ffc2:  // mov esi, 0x679870
    esi = (uint32_t)(0x679870u);
L_0045ffc7:  // mov dword ptr [ebx + 0x190], 0x3f800000
    M32((uint32_t)(ebx + 0x190u)) = (uint32_t)(0x3f800000u);
L_0045ffd1:  // mov dword ptr [ebx + 0x194], eax
    M32((uint32_t)(ebx + 0x194u)) = (uint32_t)(eax);
L_0045ffd7:  // fstp dword ptr [ebx + 4]
    F32((uint32_t)(ebx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0045ffda:  // mov dword ptr [ebx + 0x198], eax
    M32((uint32_t)(ebx + 0x198u)) = (uint32_t)(eax);
L_0045ffe0:  // mov dword ptr [ebx + 0x19c], eax
    M32((uint32_t)(ebx + 0x19cu)) = (uint32_t)(eax);
L_0045ffe6:  // mov dword ptr [ebx + 0x1d4], eax
    M32((uint32_t)(ebx + 0x1d4u)) = (uint32_t)(eax);
L_0045ffec:  // mov dword ptr [ebx + 0x1d8], eax
    M32((uint32_t)(ebx + 0x1d8u)) = (uint32_t)(eax);
L_0045fff2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0045fff4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0045fff5:  // mov dword ptr [ebx + 0x1d0], 0x41200000
    M32((uint32_t)(ebx + 0x1d0u)) = (uint32_t)(0x41200000u);
L_0045ffff:  // mov dword ptr [ebx + 0x184], eax
    M32((uint32_t)(ebx + 0x184u)) = (uint32_t)(eax);
L_00460005:  // mov dword ptr [ebx + 0x180], eax
    M32((uint32_t)(ebx + 0x180u)) = (uint32_t)(eax);
L_0046000b:  // mov dword ptr [ebx + 0x15c], eax
    M32((uint32_t)(ebx + 0x15cu)) = (uint32_t)(eax);
L_00460011:  // mov dword ptr [ebx + 0x160], eax
    M32((uint32_t)(ebx + 0x160u)) = (uint32_t)(eax);
L_00460017:  // mov dword ptr [ebx + 0x164], eax
    M32((uint32_t)(ebx + 0x164u)) = (uint32_t)(eax);
L_0046001d:  // mov dword ptr [ebx + 0x174], 0x41000000
    M32((uint32_t)(ebx + 0x174u)) = (uint32_t)(0x41000000u);
L_00460027:  // mov dword ptr [ebx + 0x188], 0xc2480000
    M32((uint32_t)(ebx + 0x188u)) = (uint32_t)(0xc2480000u);
L_00460031:  // mov dword ptr [ebx + 0x18c], eax
    M32((uint32_t)(ebx + 0x18cu)) = (uint32_t)(eax);
L_00460037:  // mov dword ptr [ebx + 0x158], eax
    M32((uint32_t)(ebx + 0x158u)) = (uint32_t)(eax);
L_0046003d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046003e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046003f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0045ffa0, 0045ffa0)
