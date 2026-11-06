// lifted from 004685a0 (FUN_004685a0, 65 bytes, 19 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004685a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004685a0;
L_004685a0:  // mov edx, dword ptr [0x89d760]
    edx = (uint32_t)(M32((uint32_t)(0x89d760u)));
L_004685a6:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004685a9:  // lea eax, [esp]
    eax = (uint32_t)((uint32_t)(esp));
L_004685ad:  // mov ecx, 0x89d760
    ecx = (uint32_t)(0x89d760u);
L_004685b2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004685b3:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004685b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004685b5:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004685b9:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004685be:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004685bf:  // push 0x89d760
    t0 = 0x89d760u; esp -= 4; M32(esp) = t0;
L_004685c4:  // call 0x449ef0
    t0 = 0x00449ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004685c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004685c9:  // lea ecx, [esp]
    ecx = (uint32_t)((uint32_t)(esp));
L_004685cd:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004685d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004685d2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004685d3:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004685d8:  // call 0x550be0
    t0 = 0x00550be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004685ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004685dd:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004685e0:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004685a0, 004685a0)
