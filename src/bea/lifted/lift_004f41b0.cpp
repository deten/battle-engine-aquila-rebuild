// lifted from 004f41b0 (vslot2, 113 bytes, 37 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f41b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f41b0;
L_004f41b0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f41b1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f41b3:  // mov eax, dword ptr [esi + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_004f41b6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f41b8:  // je 0x4f41da
    if (f.zf) goto L_004f41da;
L_004f41ba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f41bb:  // mov ecx, 0x855130
    ecx = (uint32_t)(0x855130u);
L_004f41c0:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f41c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f41c5:  // mov eax, dword ptr [esi + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_004f41c8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f41cd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f41ce:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f41d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f41d3:  // mov dword ptr [esi + 0x78], 0
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(0x0u);
L_004f41da:  // test byte ptr [esi + 0x2c], 0x20
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x20u, f);
L_004f41de:  // je 0x4f41ef
    if (f.zf) goto L_004f41ef;
L_004f41e0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f41e1:  // mov ecx, 0x855140
    ecx = (uint32_t)(0x855140u);
L_004f41e6:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f41ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f41eb:  // and byte ptr [esi + 0x2c], 0xdf
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0xdfu, f);
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)(t0);
L_004f41ef:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f41f0:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_004f41f5:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f41fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f41fa:  // test byte ptr [esi + 0x2c], 0x40
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x40u, f);
L_004f41fe:  // je 0x4f420b
    if (f.zf) goto L_004f420b;
L_004f4200:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f4201:  // mov ecx, 0x855170
    ecx = (uint32_t)(0x855170u);
L_004f4206:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f420bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f420b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f420d:  // call 0x4bacb0
    t0 = 0x004bacb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f4212u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f4212:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f4214:  // je 0x4f421f
    if (f.zf) goto L_004f421f;
L_004f4216:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f4218:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f421a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f421c:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f421fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f421f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f4220:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004f41b0, 004f41b0)
