// lifted from 004cf430 (vslot17, 117 bytes, 32 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cf430(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cf430;
L_004cf430:  // mov ecx, dword ptr [0x8889f0]
    ecx = (uint32_t)(M32((uint32_t)(0x8889f0u)));
L_004cf436:  // lea edx, [ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + 0x1u));
L_004cf439:  // lea eax, [edx + edx*2]
    eax = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004cf43c:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_004cf43f:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004cf441:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004cf444:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_004cf447:  // mov eax, dword ptr [eax*4 + 0x855bb0]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x855bb0u)));
L_004cf44e:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_004cf451:  // lea edx, [eax + edx*8]
    edx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_004cf454:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004cf457:  // lea edx, [eax + edx*4]
    edx = (uint32_t)((uint32_t)(eax + edx * 4u));
L_004cf45a:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_004cf45d:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_004cf460:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004cf462:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004cf465:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_004cf468:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004cf46b:  // lea ecx, [eax + edx*8 + 0x856014]
    ecx = (uint32_t)((uint32_t)(eax + edx * 8u + 0x856014u));
L_004cf472:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004cf476:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004cf479:  // lea eax, [ecx + edx*8]
    eax = (uint32_t)((uint32_t)(ecx + edx * 8u));
L_004cf47c:  // mov ecx, dword ptr [ecx + edx*8 + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edx * 8u + 0x144u)));
L_004cf483:  // mov edx, dword ptr [eax + 0x140]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x140u)));
L_004cf489:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cf48a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004cf48b:  // push 0x6314fc
    t0 = 0x6314fcu; esp -= 4; M32(esp) = t0;
L_004cf490:  // push 0x9d3200
    t0 = 0x9d3200u; esp -= 4; M32(esp) = t0;
L_004cf495:  // call 0x55e598
    t0 = 0x0055e598u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cf49au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cf49a:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004cf49d:  // mov eax, 0x9d3200
    eax = (uint32_t)(0x9d3200u);
L_004cf4a2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cf430, 004cf430)
