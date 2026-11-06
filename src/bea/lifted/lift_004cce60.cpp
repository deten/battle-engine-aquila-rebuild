// lifted from 004cce60 (vslot4, 44 bytes, 19 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cce60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cce60;
L_004cce60:  // mov eax, dword ptr [ecx + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x5cu)));
L_004cce63:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004cce65:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cce67:  // jle 0x4cce89
    if ((f.zf || f.sf != f.of)) goto L_004cce89;
L_004cce69:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cce6a:  // mov esi, dword ptr [esp + 8]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004cce6e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cce6f:  // lea eax, [ecx + 0x60]
    eax = (uint32_t)((uint32_t)(ecx + 0x60u));
L_004cce72:  // cmp dword ptr [eax], esi
    t0 = lsub<32>(M32((uint32_t)(eax)), esi, f);
L_004cce74:  // jne 0x4cce7c
    if (!f.zf) goto L_004cce7c;
L_004cce76:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_004cce7c:  // mov edi, dword ptr [ecx + 0x5c]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0x5cu)));
L_004cce7f:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004cce80:  // add eax, 0xc
    t0 = ladd<32>(eax, 0xcu, f);
    eax = (uint32_t)(t0);
L_004cce83:  // cmp edx, edi
    t0 = lsub<32>(edx, edi, f);
L_004cce85:  // jl 0x4cce72
    if ((f.sf != f.of)) goto L_004cce72;
L_004cce87:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cce88:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cce89:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cce60, 004cce60)
