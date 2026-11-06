// lifted from 004fdd00 (vslot100, 91 bytes, 29 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fdd00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fdd00;
L_004fdd00:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fdd03:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fdd04:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004fdd06:  // mov eax, dword ptr [esi + 0x244]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x244u)));
L_004fdd0c:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004fdd0f:  // je 0x4fdd56
    if (f.zf) goto L_004fdd56;
L_004fdd11:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004fdd14:  // je 0x4fdd56
    if (f.zf) goto L_004fdd56;
L_004fdd16:  // lea eax, [esp + 4]
    eax = (uint32_t)((uint32_t)(esp + 0x4u));
L_004fdd1a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fdd1b:  // call 0x4fd910
    t0 = 0x004fd910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fdd20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fdd20:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004fdd24:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fdd26:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fdd29:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004fdd2b:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004fdd2d:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004fdd2f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004fdd33:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004fdd36:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004fdd3a:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004fdd3d:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004fdd41:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_004fdd44:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fdd46:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fdd4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fdd4c:  // mov dword ptr [esi + 0x244], 1
    M32((uint32_t)(esi + 0x244u)) = (uint32_t)(0x1u);
L_004fdd56:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fdd57:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fdd5a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004fdd00, 004fdd00)
