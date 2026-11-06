// lifted from 004a1ca0 (FUN_004a1ca0, 186 bytes, 57 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a1ca0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a1ca0;
L_004a1ca0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a1ca2:  // push 0x5d3568
    t0 = 0x5d3568u; esp -= 4; M32(esp) = t0;
L_004a1ca7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004a1cad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a1cae:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004a1cb5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a1cb6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a1cb7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a1cb8:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004a1cba:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a1cbb:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a1cbd:  // mov edi, dword ptr [esi + 0x8bc]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8bcu)));
L_004a1cc3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a1cc4:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_004a1cc8:  // call dword ptr [0x5d81bc]
    t0 = M32((uint32_t)(0x5d81bcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a1cceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a1cce:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004a1cd2:  // mov ebx, dword ptr [esi + 0x54]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x54u)));
L_004a1cd5:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_004a1cd8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a1cd9:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004a1cdc:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004a1ce4:  // and al, 0xf0
    t0 = llog<8>((eax & 0xffu) & 0xf0u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004a1ce6:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004a1ce9:  // add ebx, eax
    t0 = ladd<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_004a1ceb:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004a1ced:  // mov dword ptr [esi + 0x54], ebx
    M32((uint32_t)(esi + 0x54u)) = (uint32_t)(ebx);
L_004a1cf0:  // mov dword ptr [esi + 0x50], edx
    M32((uint32_t)(esi + 0x50u)) = (uint32_t)(edx);
L_004a1cf3:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004a1cf6:  // mov ebx, dword ptr [esi + edx*4 + 0x58]
    ebx = (uint32_t)(M32((uint32_t)(esi + edx * 4u + 0x58u)));
L_004a1cfa:  // lea edx, [esi + edx*4 + 0x58]
    edx = (uint32_t)((uint32_t)(esi + edx * 4u + 0x58u));
L_004a1cfe:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_004a1d00:  // mov dword ptr [edx], ebx
    M32((uint32_t)(edx)) = (uint32_t)(ebx);
L_004a1d02:  // mov edx, dword ptr [esi + 0x668]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x668u)));
L_004a1d08:  // mov eax, dword ptr [esi + 0x66c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x66cu)));
L_004a1d0e:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_004a1d0f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a1d10:  // mov dword ptr [esi + 0x668], edx
    M32((uint32_t)(esi + 0x668u)) = (uint32_t)(edx);
L_004a1d16:  // mov dword ptr [esi + 0x66c], eax
    M32((uint32_t)(esi + 0x66cu)) = (uint32_t)(eax);
L_004a1d1c:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004a1d1f:  // mov edx, dword ptr [esi + eax*4 + 0x670]
    edx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x670u)));
L_004a1d26:  // lea eax, [esi + eax*4 + 0x670]
    eax = (uint32_t)((uint32_t)(esi + eax * 4u + 0x670u));
L_004a1d2d:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_004a1d2e:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_004a1d30:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004a1d33:  // and al, 0xfc
    t0 = llog<8>((eax & 0xffu) & 0xfcu, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004a1d35:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004a1d38:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a1d3a:  // call 0x4a1d60
    t0 = 0x004a1d60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a1d3fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a1d3f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a1d40:  // call dword ptr [0x5d81c0]
    t0 = M32((uint32_t)(0x5d81c0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a1d46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a1d46:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004a1d4a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a1d4b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a1d4c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a1d4d:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004a1d54:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004a1d57:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004a1ca0, 004a1ca0)
