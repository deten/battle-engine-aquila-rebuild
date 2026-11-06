// lifted from 004cc980 (vslot4, 131 bytes, 37 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cc980(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cc980;
L_004cc980:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004cc984:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cc985:  // mov esi, dword ptr [ecx + 0x68]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x68u)));
L_004cc988:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cc98a:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cc98c:  // jne 0x4cc991
    if (!f.zf) goto L_004cc991;
L_004cc98e:  // mov dword ptr [ecx + 0x68], edx
    M32((uint32_t)(ecx + 0x68u)) = (uint32_t)(edx);
L_004cc991:  // cmp dword ptr [ecx + 0xa0], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xa0u)), eax, f);
L_004cc997:  // jne 0x4cc99f
    if (!f.zf) goto L_004cc99f;
L_004cc999:  // mov dword ptr [ecx + 0xa0], edx
    M32((uint32_t)(ecx + 0xa0u)) = (uint32_t)(edx);
L_004cc99f:  // cmp dword ptr [ecx + 0xb0], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xb0u)), eax, f);
L_004cc9a5:  // jne 0x4cc9ad
    if (!f.zf) goto L_004cc9ad;
L_004cc9a7:  // mov dword ptr [ecx + 0xb0], edx
    M32((uint32_t)(ecx + 0xb0u)) = (uint32_t)(edx);
L_004cc9ad:  // cmp dword ptr [ecx + 0x60], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x60u)), eax, f);
L_004cc9b0:  // jne 0x4cc9b5
    if (!f.zf) goto L_004cc9b5;
L_004cc9b2:  // mov dword ptr [ecx + 0x60], edx
    M32((uint32_t)(ecx + 0x60u)) = (uint32_t)(edx);
L_004cc9b5:  // cmp dword ptr [ecx + 0x70], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x70u)), eax, f);
L_004cc9b8:  // jne 0x4cc9bd
    if (!f.zf) goto L_004cc9bd;
L_004cc9ba:  // mov dword ptr [ecx + 0x70], edx
    M32((uint32_t)(ecx + 0x70u)) = (uint32_t)(edx);
L_004cc9bd:  // cmp dword ptr [ecx + 0x78], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x78u)), eax, f);
L_004cc9c0:  // jne 0x4cc9c5
    if (!f.zf) goto L_004cc9c5;
L_004cc9c2:  // mov dword ptr [ecx + 0x78], edx
    M32((uint32_t)(ecx + 0x78u)) = (uint32_t)(edx);
L_004cc9c5:  // cmp dword ptr [ecx + 0x80], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x80u)), eax, f);
L_004cc9cb:  // jne 0x4cc9d3
    if (!f.zf) goto L_004cc9d3;
L_004cc9cd:  // mov dword ptr [ecx + 0x80], edx
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(edx);
L_004cc9d3:  // cmp dword ptr [ecx + 0x88], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x88u)), eax, f);
L_004cc9d9:  // jne 0x4cc9e1
    if (!f.zf) goto L_004cc9e1;
L_004cc9db:  // mov dword ptr [ecx + 0x88], edx
    M32((uint32_t)(ecx + 0x88u)) = (uint32_t)(edx);
L_004cc9e1:  // cmp dword ptr [ecx + 0x98], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x98u)), eax, f);
L_004cc9e7:  // jne 0x4cc9ef
    if (!f.zf) goto L_004cc9ef;
L_004cc9e9:  // mov dword ptr [ecx + 0x98], edx
    M32((uint32_t)(ecx + 0x98u)) = (uint32_t)(edx);
L_004cc9ef:  // mov esi, dword ptr [ecx + 0xac]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_004cc9f5:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004cc9f7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cc9f8:  // jne 0x4cca00
    if (!f.zf) goto L_004cca00;
L_004cc9fa:  // mov dword ptr [ecx + 0xac], edx
    M32((uint32_t)(ecx + 0xacu)) = (uint32_t)(edx);
L_004cca00:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cc980, 004cc980)
