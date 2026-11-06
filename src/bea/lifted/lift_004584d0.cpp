// lifted from 004584d0 (vslot5, 83 bytes, 21 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004584d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004584d0;
L_004584d0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004584d1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004584d3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004584d5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004584da:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004584dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004584df:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004584e4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004584e6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004584e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004584e9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004584ee:  // mov byte ptr [0x9c68ad], al
    M8((uint32_t)(0x9c68adu)) = (uint8_t)((eax & 0xffu));
L_004584f3:  // mov byte ptr [0x9c6910], al
    M8((uint32_t)(0x9c6910u)) = (uint8_t)((eax & 0xffu));
L_004584f8:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_004584ff:  // mov byte ptr [0x9c690d], al
    M8((uint32_t)(0x9c690du)) = (uint8_t)((eax & 0xffu));
L_00458504:  // mov dword ptr [0x9c68a8], 0xffffffff
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(0xffffffffu);
L_0045850e:  // mov byte ptr [0x9c690c], al
    M8((uint32_t)(0x9c690cu)) = (uint8_t)((eax & 0xffu));
L_00458513:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00458518u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00458518:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0045851a:  // call 0x4583c0
    t0 = 0x004583c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0045851fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0045851f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00458520:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004584d0, 004584d0)
