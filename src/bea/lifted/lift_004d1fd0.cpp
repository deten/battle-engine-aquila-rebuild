// lifted from 004d1fd0 (FUN_004d1fd0, 61 bytes, 21 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d1fd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d1fd0;
L_004d1fd0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d1fd1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d1fd3:  // cmp dword ptr [esi + 0x27c], 4
    t0 = lsub<32>(M32((uint32_t)(esi + 0x27cu)), 0x4u, f);
L_004d1fda:  // jne 0x4d200b
    if (!f.zf) goto L_004d200b;
L_004d1fdc:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004d1fdf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d1fe0:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004d1fe2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d1fe4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d1fe6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d1fe8:  // push 0x62442c
    t0 = 0x62442cu; esp -= 4; M32(esp) = t0;
L_004d1fed:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d1ff0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d1ff0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d1ff2:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d1ff7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d1ff7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1ff8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d1ffa:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d2000u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d2000:  // mov dword ptr [esi + 0x27c], 3
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x3u);
L_004d200a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d200b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d200c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004d1fd0, 004d1fd0)
