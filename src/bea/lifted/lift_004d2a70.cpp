// lifted from 004d2a70 (FUN_004d2a70, 108 bytes, 35 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d2a70(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d2a70;
L_004d2a70:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d2a73:  // mov eax, dword ptr [ecx + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x2cu)));
L_004d2a76:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d2a77:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d2a78:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d2a79:  // mov ecx, dword ptr [eax*4 + 0x8a9d58]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x8a9d58u)));
L_004d2a80:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_004d2a88:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d2a8a:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004d2a92:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004d2a9a:  // je 0x4d2ab2
    if (f.zf) goto L_004d2ab2;
L_004d2a9c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d2a9e:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_004d2aa2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d2aa3:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d2aa5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d2aa5:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004d2aa7:  // mov esi, dword ptr [eax + 4]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d2aaa:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d2aad:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d2ab0:  // jmp 0x4d2ac2
    goto L_004d2ac2;
L_004d2ab2:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d2ab6:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d2aba:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d2abe:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d2ac2:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d2ac6:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004d2ac8:  // mov dword ptr [ebx], edi
    M32((uint32_t)(ebx)) = (uint32_t)(edi);
L_004d2aca:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d2acb:  // mov dword ptr [ebx + 4], esi
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(esi);
L_004d2ace:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d2acf:  // mov dword ptr [ebx + 8], edx
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(edx);
L_004d2ad2:  // mov dword ptr [ebx + 0xc], ecx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(ecx);
L_004d2ad5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d2ad6:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d2ad9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004d2a70, 004d2a70)
