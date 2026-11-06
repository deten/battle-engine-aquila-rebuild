// lifted from 0050fe10 (FUN_0050fe10, 115 bytes, 31 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050fe10(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050fe10;
L_0050fe10:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0050fe12:  // push 0x5d63d6
    t0 = 0x5d63d6u; esp -= 4; M32(esp) = t0;
L_0050fe17:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0050fe1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050fe1e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0050fe25:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050fe26:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050fe27:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0050fe29:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_0050fe2d:  // mov eax, dword ptr [esi + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x26cu)));
L_0050fe33:  // lea edx, [esi + 0x26c]
    edx = (uint32_t)((uint32_t)(esi + 0x26cu));
L_0050fe39:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050fe3b:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_0050fe43:  // je 0x50fe54
    if (f.zf) goto L_0050fe54;
L_0050fe45:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050fe48:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050fe4a:  // je 0x50fe54
    if (f.zf) goto L_0050fe54;
L_0050fe4c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050fe4d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050fe4f:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050fe54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050fe54:  // lea ecx, [esi + 0x258]
    ecx = (uint32_t)((uint32_t)(esi + 0x258u));
L_0050fe5a:  // mov byte ptr [esp + 0x10], 0
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x0u);
L_0050fe5f:  // call 0x4cb050
    t0 = 0x004cb050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050fe64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050fe64:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050fe66:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_0050fe6e:  // call 0x4f84e0
    t0 = 0x004f84e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050fe73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050fe73:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050fe77:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050fe78:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050fe7f:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0050fe82:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0050fe10, 0050fe10)
