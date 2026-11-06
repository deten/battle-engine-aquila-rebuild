// lifted from 0047d3b0 (vslot86, 108 bytes, 41 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047d3b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047d3b0;
L_0047d3b0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047d3b1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047d3b2:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047d3b4:  // call 0x4fbcb0
    t0 = 0x004fbcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047d3b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047d3b9:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0047d3bb:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_0047d3c1:  // mov ecx, dword ptr [eax + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x108u)));
L_0047d3c7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047d3c9:  // je 0x47d3d4
    if (f.zf) goto L_0047d3d4;
L_0047d3cb:  // cmp dword ptr [esi + 0x244], 4
    t0 = lsub<32>(M32((uint32_t)(esi + 0x244u)), 0x4u, f);
L_0047d3d2:  // jne 0x47d417
    if (!f.zf) goto L_0047d417;
L_0047d3d4:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0047d3d7:  // push 0x62cb60
    t0 = 0x62cb60u; esp -= 4; M32(esp) = t0;
L_0047d3dc:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047d3de:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047d3e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047d3e1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047d3e3:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047d3e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047d3e8:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0047d3eb:  // je 0x47d417
    if (f.zf) goto L_0047d417;
L_0047d3ed:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0047d3f0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047d3f1:  // mov ebx, dword ptr [esi]
    ebx = (uint32_t)(M32((uint32_t)(esi)));
L_0047d3f3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047d3f5:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047d3f7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047d3f9:  // push 0x62cb60
    t0 = 0x62cb60u; esp -= 4; M32(esp) = t0;
L_0047d3fe:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047d401u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047d401:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047d403:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047d408u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047d408:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047d409:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047d40b:  // call dword ptr [ebx + 0xf0]
    t0 = M32((uint32_t)(ebx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047d411u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047d411:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0047d413:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047d414:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047d415:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047d416:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0047d417:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0047d419:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047d41a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047d41b:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0047d3b0, 0047d3b0)
