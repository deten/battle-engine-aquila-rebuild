// lifted from 004c0490 (vslot22, 39 bytes, 20 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c0490(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c0490;
L_004c0490:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c0491:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004c0493:  // mov eax, dword ptr [edi + 0x54]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x54u)));
L_004c0496:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c0498:  // je 0x4c04b5
    if (f.zf) goto L_004c04b5;
L_004c049a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c049b:  // mov esi, dword ptr [edi + 0x58]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x58u)));
L_004c049e:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004c04a0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c04a1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c04a3:  // call dword ptr [eax + 0x28]
    t0 = M32((uint32_t)(eax + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c04a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c04a6:  // mov ecx, dword ptr [esi + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c04a9:  // or ecx, eax
    t0 = llog<32>(ecx | eax, f);
    ecx = (uint32_t)(t0);
L_004c04ab:  // mov dword ptr [esi + 0x64], ecx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ecx);
L_004c04ae:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_004c04b0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c04b2:  // jne 0x4c049e
    if (!f.zf) goto L_004c049e;
L_004c04b4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c04b5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c04b6:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c0490, 004c0490)
