// lifted from 00460490 (vslot1, 83 bytes, 30 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00460490(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00460490;
L_00460490:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00460491:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00460492:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00460493:  // mov dword ptr [ecx + 0x3468], 0
    M32((uint32_t)(ecx + 0x3468u)) = (uint32_t)(0x0u);
L_0046049d:  // mov dword ptr [ecx + 0x346c], 0
    M32((uint32_t)(ecx + 0x346cu)) = (uint32_t)(0x0u);
L_004604a7:  // mov ebx, dword ptr [0x89d94c]
    ebx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_004604ad:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004604af:  // lea esi, [ecx + 0xcc]
    esi = (uint32_t)((uint32_t)(ecx + 0xccu));
L_004604b5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004604b7:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004604b9:  // cmp dword ptr [edx], ebx
    t0 = lsub<32>(M32((uint32_t)(edx)), ebx, f);
L_004604bb:  // je 0x4604d3
    if (f.zf) goto L_004604d3;
L_004604bd:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004604be:  // add edx, 4
    t0 = ladd<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004604c1:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004604c4:  // jl 0x4604b9
    if ((f.sf != f.of)) goto L_004604b9;
L_004604c6:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004604c7:  // add esi, 0x18
    t0 = ladd<32>(esi, 0x18u, f);
    esi = (uint32_t)(t0);
L_004604ca:  // cmp edi, 0x32
    t0 = lsub<32>(edi, 0x32u, f);
L_004604cd:  // jl 0x4604b5
    if ((f.sf != f.of)) goto L_004604b5;
L_004604cf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004604d0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004604d1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004604d2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004604d3:  // mov dword ptr [ecx + 0x3468], edi
    M32((uint32_t)(ecx + 0x3468u)) = (uint32_t)(edi);
L_004604d9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004604da:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004604db:  // mov dword ptr [ecx + 0x346c], eax
    M32((uint32_t)(ecx + 0x346cu)) = (uint32_t)(eax);
L_004604e1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004604e2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00460490, 00460490)
