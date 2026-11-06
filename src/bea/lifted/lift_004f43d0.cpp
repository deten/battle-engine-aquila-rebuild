// lifted from 004f43d0 (vslot14, 95 bytes, 34 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f43d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f43d0;
L_004f43d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f43d1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f43d2:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f43d4:  // test byte ptr [esi + 0x2c], 1
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x1u, f);
L_004f43d8:  // jne 0x4f43fb
    if (!f.zf) goto L_004f43fb;
L_004f43da:  // mov ecx, dword ptr [esi + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004f43dd:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f43df:  // je 0x4f43fb
    if (f.zf) goto L_004f43fb;
L_004f43e1:  // call 0x5337e0
    t0 = 0x005337e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f43e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f43e6:  // mov ecx, dword ptr [esi + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004f43e9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f43eb:  // je 0x4f43f4
    if (f.zf) goto L_004f43f4;
L_004f43ed:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f43ef:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f43f1:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f43f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f43f4:  // mov dword ptr [esi + 0x74], 0
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(0x0u);
L_004f43fb:  // mov ax, word ptr [esi + 0x2c]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x2cu))) & 0xffffu);
L_004f43ff:  // test al, 1
    t0 = llog<8>((eax & 0xffu) & 0x1u, f);
L_004f4401:  // jne 0x4f442c
    if (!f.zf) goto L_004f442c;
L_004f4403:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f4405:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f4407:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004f440b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f440d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f440e:  // or al, 1
    t0 = llog<8>((eax & 0xffu) | 0x1u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004f4410:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f4411:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_004f4416:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004f441b:  // mov word ptr [esi + 0x2c], ax
    M16((uint32_t)(esi + 0x2cu)) = (uint16_t)((eax & 0xffffu));
L_004f441f:  // mov dword ptr [esp + 0x1c], 0xbf800000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xbf800000u);
L_004f4427:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f442cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f442c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f442d:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004f442e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004f43d0, 004f43d0)
