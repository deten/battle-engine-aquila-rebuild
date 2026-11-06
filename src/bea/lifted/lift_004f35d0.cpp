// lifted from 004f35d0 (vslot34, 38 bytes, 17 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f35d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f35d0;
L_004f35d0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f35d1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f35d3:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f35d5:  // je 0x4f35dc
    if (f.zf) goto L_004f35dc;
L_004f35d7:  // lea eax, [esi + 8]
    eax = (uint32_t)((uint32_t)(esi + 0x8u));
L_004f35da:  // jmp 0x4f35de
    goto L_004f35de;
L_004f35dc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f35de:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f35df:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004f35e1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f35e3:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f35e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f35e6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f35e7:  // call 0x5164b0
    t0 = 0x005164b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f35ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f35ec:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f35ef:  // mov dword ptr [esi + 0x30], eax
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(eax);
L_004f35f2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f35f3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004f35d0, 004f35d0)
