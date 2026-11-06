// lifted from 00505f90 (FUN_00505f90, 116 bytes, 35 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00505f90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00505f90;
L_00505f90:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00505f92:  // push 0x5d58fe
    t0 = 0x5d58feu; esp -= 4; M32(esp) = t0;
L_00505f97:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00505f9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00505f9e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00505fa5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00505fa6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00505fa7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00505fa9:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_00505fad:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_00505fb0:  // lea edx, [esi + 0x2c]
    edx = (uint32_t)((uint32_t)(esi + 0x2cu));
L_00505fb3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505fb5:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_00505fbd:  // je 0x505fce
    if (f.zf) goto L_00505fce;
L_00505fbf:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00505fc2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505fc4:  // je 0x505fce
    if (f.zf) goto L_00505fce;
L_00505fc6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00505fc7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00505fc9:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00505fceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00505fce:  // push 0x405d80
    t0 = 0x405d80u; esp -= 4; M32(esp) = t0;
L_00505fd3:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00505fd5:  // lea eax, [esi + 0x14]
    eax = (uint32_t)((uint32_t)(esi + 0x14u));
L_00505fd8:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00505fda:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00505fdb:  // mov byte ptr [esp + 0x20], 0
    M8((uint32_t)(esp + 0x20u)) = (uint8_t)(0x0u);
L_00505fe0:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00505fe5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00505fe5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00505fe7:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_00505fef:  // call 0x4bac40
    t0 = 0x004bac40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00505ff4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00505ff4:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00505ff8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00505ff9:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00506000:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00506003:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00505f90, 00505f90)
