// lifted from 0043eca0 (vslot2, 114 bytes, 43 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043eca0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043eca0;
L_0043eca0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043eca1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043eca2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043eca3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043eca4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043eca5:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0043eca7:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_0043ecab:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0043ecad:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ecb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ecb3:  // add edi, 0x7c
    t0 = ladd<32>(edi, 0x7cu, f);
    edi = (uint32_t)(t0);
L_0043ecb6:  // mov ebp, 0x1e
    ebp = (uint32_t)(0x1eu);
L_0043ecbb:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0043ecbd:  // mov esi, dword ptr [edi]
    esi = (uint32_t)(M32((uint32_t)(edi)));
L_0043ecbf:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_0043ecc1:  // je 0x43ecfb
    if (f.zf) goto L_0043ecfb;
L_0043ecc3:  // mov ecx, dword ptr [esi + 0x244]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x244u)));
L_0043ecc9:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0043eccb:  // je 0x43ecd3
    if (f.zf) goto L_0043ecd3;
L_0043eccd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0043eccf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043ecd1:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ecd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ecd3:  // mov ecx, dword ptr [esi + 0x248]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x248u)));
L_0043ecd9:  // mov dword ptr [esi + 0x244], ebx
    M32((uint32_t)(esi + 0x244u)) = (uint32_t)(ebx);
L_0043ecdf:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0043ece1:  // je 0x43ecea
    if (f.zf) goto L_0043ecea;
L_0043ece3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043ece5:  // call 0x43ed20
    t0 = 0x0043ed20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043eceau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ecea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043eceb:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043ecf0:  // mov dword ptr [esi + 0x248], ebx
    M32((uint32_t)(esi + 0x248u)) = (uint32_t)(ebx);
L_0043ecf6:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ecfbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ecfb:  // mov dword ptr [edi], ebx
    M32((uint32_t)(edi)) = (uint32_t)(ebx);
L_0043ecfd:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0043ed00:  // dec ebp
    t0 = ldec<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0043ed01:  // jne 0x43ecbd
    if (!f.zf) goto L_0043ecbd;
L_0043ed03:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0043ed07:  // call 0x4f41b0
    t0 = 0x004f41b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ed0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ed0c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043ed0d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043ed0e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043ed0f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043ed10:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0043ed11:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043eca0, 0043eca0)
