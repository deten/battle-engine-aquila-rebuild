// lifted from 004cd1b0 (vslot4, 61 bytes, 22 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cd1b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cd1b0;
L_004cd1b0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004cd1b4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd1b5:  // mov esi, dword ptr [ecx + 0x60]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x60u)));
L_004cd1b8:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cd1ba:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd1bc:  // jne 0x4cd1c1
    if (!f.zf) goto L_004cd1c1;
L_004cd1be:  // mov dword ptr [ecx + 0x60], edx
    M32((uint32_t)(ecx + 0x60u)) = (uint32_t)(edx);
L_004cd1c1:  // cmp dword ptr [ecx + 0x68], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x68u)), eax, f);
L_004cd1c4:  // jne 0x4cd1c9
    if (!f.zf) goto L_004cd1c9;
L_004cd1c6:  // mov dword ptr [ecx + 0x68], edx
    M32((uint32_t)(ecx + 0x68u)) = (uint32_t)(edx);
L_004cd1c9:  // cmp dword ptr [ecx + 0x70], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x70u)), eax, f);
L_004cd1cc:  // jne 0x4cd1d1
    if (!f.zf) goto L_004cd1d1;
L_004cd1ce:  // mov dword ptr [ecx + 0x70], edx
    M32((uint32_t)(ecx + 0x70u)) = (uint32_t)(edx);
L_004cd1d1:  // cmp dword ptr [ecx + 0x78], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x78u)), eax, f);
L_004cd1d4:  // jne 0x4cd1d9
    if (!f.zf) goto L_004cd1d9;
L_004cd1d6:  // mov dword ptr [ecx + 0x78], edx
    M32((uint32_t)(ecx + 0x78u)) = (uint32_t)(edx);
L_004cd1d9:  // mov esi, dword ptr [ecx + 0x8c]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x8cu)));
L_004cd1df:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cd1e1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd1e2:  // jne 0x4cd1ea
    if (!f.zf) goto L_004cd1ea;
L_004cd1e4:  // mov dword ptr [ecx + 0x8c], edx
    M32((uint32_t)(ecx + 0x8cu)) = (uint32_t)(edx);
L_004cd1ea:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cd1b0, 004cd1b0)
