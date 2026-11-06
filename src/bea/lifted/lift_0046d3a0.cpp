// lifted from 0046d3a0 (FUN_0046d3a0, 109 bytes, 34 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0046d3a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0046d3a0;
L_0046d3a0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0046d3a4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046d3a5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046d3a7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0046d3a9:  // jl 0x46d3f6
    if ((f.sf != f.of)) goto L_0046d3f6;
L_0046d3ab:  // cmp eax, 0x100
    t0 = lsub<32>(eax, 0x100u, f);
L_0046d3b0:  // jge 0x46d3f6
    if ((f.sf == f.of)) goto L_0046d3f6;
L_0046d3b2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0046d3b4:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_0046d3b7:  // and eax, 0x1f
    t0 = llog<32>(eax & 0x1fu, f);
    eax = (uint32_t)(t0);
L_0046d3ba:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046d3bc:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0046d3c1:  // jle 0x46d3c5
    if ((f.zf || f.sf != f.of)) goto L_0046d3c5;
L_0046d3c3:  // shl eax, cl
    t0 = lshl<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0046d3c5:  // cmp dword ptr [esp + 0xc], 1
    t0 = lsub<32>(M32((uint32_t)(esp + 0xcu)), 0x1u, f);
L_0046d3ca:  // jne 0x46d3e0
    if (!f.zf) goto L_0046d3e0;
L_0046d3cc:  // mov ecx, dword ptr [esi + edx*4 + 0x308]
    ecx = (uint32_t)(M32((uint32_t)(esi + edx * 4u + 0x308u)));
L_0046d3d3:  // or ecx, eax
    t0 = llog<32>(ecx | eax, f);
    ecx = (uint32_t)(t0);
L_0046d3d5:  // mov dword ptr [esi + edx*4 + 0x308], ecx
    M32((uint32_t)(esi + edx * 4u + 0x308u)) = (uint32_t)(ecx);
L_0046d3dc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046d3dd:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0046d3e0:  // mov ecx, dword ptr [esi + edx*4 + 0x308]
    ecx = (uint32_t)(M32((uint32_t)(esi + edx * 4u + 0x308u)));
L_0046d3e7:  // not eax
    eax = (uint32_t)(~eax);
L_0046d3e9:  // and ecx, eax
    t0 = llog<32>(ecx & eax, f);
    ecx = (uint32_t)(t0);
L_0046d3eb:  // mov dword ptr [esi + edx*4 + 0x308], ecx
    M32((uint32_t)(esi + edx * 4u + 0x308u)) = (uint32_t)(ecx);
L_0046d3f2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046d3f3:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0046d3f6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046d3f7:  // push 0x62434c
    t0 = 0x62434cu; esp -= 4; M32(esp) = t0;
L_0046d3fc:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0046d401:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046d406u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046d406:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0046d409:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046d40a:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0046d3a0, 0046d3a0)
