// lifted from 00494310 (FUN_00494310, 62 bytes, 23 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00494310(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00494310;
L_00494310:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00494311:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_00494313:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00494316:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00494317:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00494319:  // rdtsc 
    __asm__ volatile("rdtsc" : "=a"(eax), "=d"(edx));
L_0049431b:  // mov dword ptr [ebp - 4], edx
    M32((uint32_t)(ebp + 0xfffffffcu)) = (uint32_t)(edx);
L_0049431e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00494320:  // mov esi, dword ptr [ecx + 4]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00494323:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_00494326:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00494328:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00494329:  // lea edx, [edx + edx*4]
    edx = (uint32_t)((uint32_t)(edx + edx * 4u));
L_0049432c:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_0049432f:  // mov ecx, dword ptr [edx + 0x82ce84]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x82ce84u)));
L_00494335:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00494337:  // mov dword ptr [edx + 0x82ce84], ecx
    M32((uint32_t)(edx + 0x82ce84u)) = (uint32_t)(ecx);
L_0049433d:  // mov eax, dword ptr [edx + 0x82d054]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x82d054u)));
L_00494343:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00494344:  // mov dword ptr [edx + 0x82d054], eax
    M32((uint32_t)(edx + 0x82d054u)) = (uint32_t)(eax);
L_0049434a:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_0049434c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049434d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00494310, 00494310)
