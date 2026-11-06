// lifted from 005147b0 (vslot3, 53 bytes, 16 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005147b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005147b0;
L_005147b0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_005147b4:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_005147b8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005147b9:  // mov edx, dword ptr [eax*4 + 0x888fa4]
    edx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x888fa4u)));
L_005147c0:  // mov bl, byte ptr [edx + ecx + 0x30]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + ecx + 0x30u))) & 0xffu);
L_005147c4:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_005147c6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005147c7:  // jne 0x5147e0
    if (!f.zf) goto L_005147e0;
L_005147c9:  // mov eax, dword ptr [eax*4 + 0x888f94]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x888f94u)));
L_005147d0:  // mov dl, byte ptr [eax + ecx + 0x30]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + ecx + 0x30u))) & 0xffu);
L_005147d4:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_005147d6:  // je 0x5147e0
    if (f.zf) goto L_005147e0;
L_005147d8:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_005147dd:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_005147e0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005147e2:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005147b0, 005147b0)
