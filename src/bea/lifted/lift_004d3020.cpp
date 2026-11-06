// lifted from 004d3020 (FUN_004d3020, 88 bytes, 32 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d3020(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d3020;
L_004d3020:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d3021:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d3023:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d3024:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d3028:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_004d302b:  // mov dword ptr [esi + 0x20], edi
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(edi);
L_004d302e:  // mov dword ptr [eax*4 + 0x662ab0], edi
    M32((uint32_t)(eax * 4u + 0x662ab0u)) = (uint32_t)(edi);
L_004d3035:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004d3038:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d303a:  // je 0x4d306c
    if (f.zf) goto L_004d306c;
L_004d303c:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004d303f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d3041:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004d3044:  // jne 0x4d3057
    if (!f.zf) goto L_004d3057;
L_004d3046:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d3048:  // call dword ptr [edx + 0xe0]
    t0 = M32((uint32_t)(edx + 0xe0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d304eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d304e:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004d3051:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d3053:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d3055:  // jmp 0x4d3066
    goto L_004d3066;
L_004d3057:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d3059:  // call dword ptr [edx + 0xe0]
    t0 = M32((uint32_t)(edx + 0xe0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d305fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d305f:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004d3062:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d3064:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d3066:  // call dword ptr [eax + 0x154]
    t0 = M32((uint32_t)(eax + 0x154u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d306cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d306c:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d306e:  // je 0x4d3073
    if (f.zf) goto L_004d3073;
L_004d3070:  // inc dword ptr [esi + 0x3c]
    t0 = linc<32>(M32((uint32_t)(esi + 0x3cu)), f);
    M32((uint32_t)(esi + 0x3cu)) = (uint32_t)(t0);
L_004d3073:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3074:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3075:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004d3020, 004d3020)
