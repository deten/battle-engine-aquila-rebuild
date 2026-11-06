// lifted from 004d2b40 (FUN_004d2b40, 109 bytes, 35 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d2b40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d2b40;
L_004d2b40:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d2b43:  // mov eax, dword ptr [ecx + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x2cu)));
L_004d2b46:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d2b47:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d2b48:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d2b49:  // mov ecx, dword ptr [eax*4 + 0x8a9d58]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x8a9d58u)));
L_004d2b50:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_004d2b58:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d2b5a:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004d2b62:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004d2b6a:  // je 0x4d2b83
    if (f.zf) goto L_004d2b83;
L_004d2b6c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d2b6e:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_004d2b72:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d2b73:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004d2b76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004d2b76:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004d2b78:  // mov esi, dword ptr [eax + 4]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d2b7b:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d2b7e:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d2b81:  // jmp 0x4d2b93
    goto L_004d2b93;
L_004d2b83:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d2b87:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d2b8b:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d2b8f:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d2b93:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d2b97:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004d2b99:  // mov dword ptr [ebx], edi
    M32((uint32_t)(ebx)) = (uint32_t)(edi);
L_004d2b9b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d2b9c:  // mov dword ptr [ebx + 4], esi
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(esi);
L_004d2b9f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d2ba0:  // mov dword ptr [ebx + 8], edx
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(edx);
L_004d2ba3:  // mov dword ptr [ebx + 0xc], ecx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(ecx);
L_004d2ba6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d2ba7:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d2baa:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004d2b40, 004d2b40)
