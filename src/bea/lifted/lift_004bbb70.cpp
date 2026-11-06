// lifted from 004bbb70 (vslot3, 92 bytes, 28 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004bbb70(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004bbb70;
L_004bbb70:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004bbb74:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004bbb76:  // jne 0x4bbba9
    if (!f.zf) goto L_004bbba9;
L_004bbb78:  // mov al, byte ptr [0x889a50]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x889a50u))) & 0xffu);
L_004bbb7d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004bbb7f:  // je 0x4bbb98
    if (f.zf) goto L_004bbb98;
L_004bbb81:  // mov eax, dword ptr [0x889a48]
    eax = (uint32_t)(M32((uint32_t)(0x889a48u)));
L_004bbb86:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_004bbb8b:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbb8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbb8e:  // mov byte ptr [0x889a50], 0
    M8((uint32_t)(0x889a50u)) = (uint8_t)(0x0u);
L_004bbb95:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004bbb98:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004bbb9a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbb9c:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_004bbba1:  // call 0x4bb7e0
    t0 = 0x004bb7e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbba6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbba6:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004bbba9:  // mov eax, dword ptr [0x889a54]
    eax = (uint32_t)(M32((uint32_t)(0x889a54u)));
L_004bbbae:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004bbbaf:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004bbbb1:  // jle 0x4bbbbc
    if ((f.zf || f.sf != f.of)) goto L_004bbbbc;
L_004bbbb3:  // mov eax, dword ptr [eax + 0x104]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x104u)));
L_004bbbb9:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004bbbba:  // jne 0x4bbbb3
    if (!f.zf) goto L_004bbbb3;
L_004bbbbc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004bbbbe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bbbbf:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_004bbbc4:  // call 0x4bb7e0
    t0 = 0x004bb7e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbbc9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbbc9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004bbb70, 004bbb70)
