// lifted from 005147f0 (vslot4, 31 bytes, 10 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005147f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005147f0;
L_005147f0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_005147f4:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_005147f8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005147f9:  // mov ecx, dword ptr [eax*4 + 0x888f94]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x888f94u)));
L_00514800:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00514802:  // mov bl, byte ptr [ecx + edx + 0x30]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + edx + 0x30u))) & 0xffu);
L_00514806:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_00514808:  // setne al
    eax = (eax & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0051480b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051480c:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005147f0, 005147f0)
