// lifted from 004269b0 (vslot3, 70 bytes, 27 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004269b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004269b0;
L_004269b0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004269b1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004269b2:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004269b6:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004269b8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004269b9:  // call 0x426150
    t0 = 0x00426150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004269beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004269be:  // mov eax, dword ptr [edi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_004269c1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004269c3:  // je 0x4269e8
    if (f.zf) goto L_004269e8;
L_004269c5:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004269c8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004269ca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004269cc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004269ce:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004269cf:  // add edi, 0x2c
    t0 = ladd<32>(edi, 0x2cu, f);
    edi = (uint32_t)(t0);
L_004269d2:  // and ah, 0xfb
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0xfbu, f);
    eax = (eax & 0xffff00ffu) | (((uint32_t)(t0) & 0xffu) << 8);
L_004269d5:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_004269da:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004269db:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004269e0:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_004269e3:  // call 0x44b2d0
    t0 = 0x0044b2d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004269e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004269e8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004269e9:  // lea ecx, [esi + 0x24]
    ecx = (uint32_t)((uint32_t)(esi + 0x24u));
L_004269ec:  // call 0x480a30
    t0 = 0x00480a30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004269f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004269f1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004269f2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004269f3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004269b0, 004269b0)
