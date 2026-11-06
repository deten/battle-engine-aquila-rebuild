// lifted from 004ccca0 (vslot4, 117 bytes, 34 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ccca0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ccca0;
L_004ccca0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004ccca4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ccca5:  // mov esi, dword ptr [ecx + 0x60]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x60u)));
L_004ccca8:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cccaa:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cccac:  // jne 0x4cccb1
    if (!f.zf) goto L_004cccb1;
L_004cccae:  // mov dword ptr [ecx + 0x60], edx
    M32((uint32_t)(ecx + 0x60u)) = (uint32_t)(edx);
L_004cccb1:  // cmp dword ptr [ecx + 0x68], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x68u)), eax, f);
L_004cccb4:  // jne 0x4cccb9
    if (!f.zf) goto L_004cccb9;
L_004cccb6:  // mov dword ptr [ecx + 0x68], edx
    M32((uint32_t)(ecx + 0x68u)) = (uint32_t)(edx);
L_004cccb9:  // cmp dword ptr [ecx + 0x70], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x70u)), eax, f);
L_004cccbc:  // jne 0x4cccc1
    if (!f.zf) goto L_004cccc1;
L_004cccbe:  // mov dword ptr [ecx + 0x70], edx
    M32((uint32_t)(ecx + 0x70u)) = (uint32_t)(edx);
L_004cccc1:  // cmp dword ptr [ecx + 0x78], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x78u)), eax, f);
L_004cccc4:  // jne 0x4cccc9
    if (!f.zf) goto L_004cccc9;
L_004cccc6:  // mov dword ptr [ecx + 0x78], edx
    M32((uint32_t)(ecx + 0x78u)) = (uint32_t)(edx);
L_004cccc9:  // cmp dword ptr [ecx + 0x80], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x80u)), eax, f);
L_004ccccf:  // jne 0x4cccd7
    if (!f.zf) goto L_004cccd7;
L_004cccd1:  // mov dword ptr [ecx + 0x80], edx
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(edx);
L_004cccd7:  // cmp dword ptr [ecx + 0x88], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x88u)), eax, f);
L_004cccdd:  // jne 0x4ccce5
    if (!f.zf) goto L_004ccce5;
L_004cccdf:  // mov dword ptr [ecx + 0x88], edx
    M32((uint32_t)(ecx + 0x88u)) = (uint32_t)(edx);
L_004ccce5:  // cmp dword ptr [ecx + 0x90], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x90u)), eax, f);
L_004ccceb:  // jne 0x4cccf3
    if (!f.zf) goto L_004cccf3;
L_004ccced:  // mov dword ptr [ecx + 0x90], edx
    M32((uint32_t)(ecx + 0x90u)) = (uint32_t)(edx);
L_004cccf3:  // cmp dword ptr [ecx + 0x98], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x98u)), eax, f);
L_004cccf9:  // jne 0x4ccd01
    if (!f.zf) goto L_004ccd01;
L_004cccfb:  // mov dword ptr [ecx + 0x98], edx
    M32((uint32_t)(ecx + 0x98u)) = (uint32_t)(edx);
L_004ccd01:  // mov esi, dword ptr [ecx + 0xa0]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xa0u)));
L_004ccd07:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004ccd09:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ccd0a:  // jne 0x4ccd12
    if (!f.zf) goto L_004ccd12;
L_004ccd0c:  // mov dword ptr [ecx + 0xa0], edx
    M32((uint32_t)(ecx + 0xa0u)) = (uint32_t)(edx);
L_004ccd12:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004ccca0, 004ccca0)
