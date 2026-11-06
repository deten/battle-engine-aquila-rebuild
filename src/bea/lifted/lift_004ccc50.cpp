// lifted from 004ccc50 (vslot8, 39 bytes, 19 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ccc50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ccc50;
L_004ccc50:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ccc51:  // mov ebx, dword ptr [esp + 8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004ccc55:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ccc56:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ccc57:  // lea esi, [ecx + 0x5c]
    esi = (uint32_t)((uint32_t)(ecx + 0x5cu));
L_004ccc5a:  // mov edi, 4
    edi = (uint32_t)(0x4u);
L_004ccc5f:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004ccc61:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004ccc63:  // je 0x4ccc6b
    if (f.zf) goto L_004ccc6b;
L_004ccc65:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004ccc67:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ccc68:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ccc6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ccc6b:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004ccc6e:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004ccc6f:  // jne 0x4ccc5f
    if (!f.zf) goto L_004ccc5f;
L_004ccc71:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ccc72:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ccc73:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ccc74:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004ccc50, 004ccc50)
