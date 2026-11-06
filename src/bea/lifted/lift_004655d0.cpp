// lifted from 004655d0 (FUN_004655d0, 110 bytes, 41 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004655d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004655d0;
L_004655d0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004655d1:  // mov esi, dword ptr [esp + 8]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004655d5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004655d6:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004655d8:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004655db:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004655dd:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004655df:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004655e1:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004655e2:  // cmp ecx, 9
    t0 = lsub<32>(ecx, 0x9u, f);
L_004655e5:  // jbe 0x465629
    if ((f.cf || f.zf)) goto L_00465629;
L_004655e7:  // mov edx, dword ptr [0x6630cc]
    edx = (uint32_t)(M32((uint32_t)(0x6630ccu)));
L_004655ed:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004655ef:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004655f1:  // setne al
    eax = (eax & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_004655f4:  // mov dword ptr [0x89d69c], eax
    M32((uint32_t)(0x89d69cu)) = (uint32_t)(eax);
L_004655f9:  // call 0x42d7d0
    t0 = 0x0042d7d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004655feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004655fe:  // mov eax, dword ptr [0x89d690]
    eax = (uint32_t)(M32((uint32_t)(0x89d690u)));
L_00465603:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00465606:  // add esi, 9
    t0 = ladd<32>(esi, 0x9u, f);
    esi = (uint32_t)(t0);
L_00465609:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_0046560e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00465610:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00465612:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00465614:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00465616:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00465618:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00465619:  // call dword ptr [eax + 0x2c]
    t0 = M32((uint32_t)(eax + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046561cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046561c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046561e:  // call 0x42d7d0
    t0 = 0x0042d7d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00465623u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00465623:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00465626:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00465627:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00465628:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00465629:  // push 0x629abc
    t0 = 0x629abcu; esp -= 4; M32(esp) = t0;
L_0046562e:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_00465633:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00465638u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00465638:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0046563b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0046563c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046563d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004655d0, 004655d0)
