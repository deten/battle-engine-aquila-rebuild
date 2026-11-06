// lifted from 004db960 (vslot28, 106 bytes, 36 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004db960(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004db960;
L_004db960:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004db962:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004db965:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004db968:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004db96a:  // je 0x4db9c6
    if (f.zf) goto L_004db9c6;
L_004db96c:  // mov ecx, dword ptr [0x83ccc8]
    ecx = (uint32_t)(M32((uint32_t)(0x83ccc8u)));
L_004db972:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004db973:  // mov dword ptr [esp + 4], ecx
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(ecx);
L_004db977:  // mov ecx, dword ptr [0x83cccc]
    ecx = (uint32_t)(M32((uint32_t)(0x83ccccu)));
L_004db97d:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_004db981:  // mov ecx, dword ptr [0x83ccd0]
    ecx = (uint32_t)(M32((uint32_t)(0x83ccd0u)));
L_004db987:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004db988:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004db98c:  // mov ecx, dword ptr [0x83ccd4]
    ecx = (uint32_t)(M32((uint32_t)(0x83ccd4u)));
L_004db992:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004db994:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004db996:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004db99a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004db99c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004db9a1:  // mov esi, 0x83cc98
    esi = (uint32_t)(0x83cc98u);
L_004db9a6:  // lea edi, [esp + 0x24]
    edi = (uint32_t)((uint32_t)(esp + 0x24u));
L_004db9aa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004db9ab:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004db9ac:  // mov edx, dword ptr [eax + 0x14]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_004db9af:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004db9b3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004db9b5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004db9b6:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004db9ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004db9bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db9bc:  // call 0x4b6260
    t0 = 0x004b6260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004db9c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004db9c1:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004db9c4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004db9c5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004db9c6:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004db9c9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004db960, 004db960)
