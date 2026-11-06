// lifted from 00550be0 (FUN_00550be0, 190 bytes, 49 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00550be0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00550be0;
L_00550be0:  // sub esp, 0x80
    t0 = lsub<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_00550be6:  // mov eax, dword ptr [esp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_00550bed:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00550bee:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00550bf0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00550bf1:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00550bf3:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00550bf6:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_00550bfa:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00550bfd:  // mov dword ptr [esp + 0xc], edx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(edx);
L_00550c01:  // mov edx, dword ptr [eax + 0x10]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_00550c04:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_00550c08:  // mov ecx, dword ptr [eax + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_00550c0b:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00550c0f:  // mov edx, dword ptr [eax + 0x18]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_00550c12:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00550c16:  // mov ecx, dword ptr [eax + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_00550c19:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_00550c1d:  // mov edx, dword ptr [eax + 0x24]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x24u)));
L_00550c20:  // mov eax, dword ptr [eax + 0x28]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x28u)));
L_00550c23:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00550c27:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00550c2b:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_00550c32:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_00550c36:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00550c3e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00550c40:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00550c43:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00550c46:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_00550c4a:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_00550c4e:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_00550c52:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00550c53:  // lea edx, [esp + 0x4c]
    edx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00550c57:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00550c59:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00550c5a:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00550c62:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_00550c6a:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_00550c6e:  // mov dword ptr [esp + 0x50], 0x3f800000
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x3f800000u);
L_00550c76:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00550c7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00550c7b:  // mov byte ptr [esi + 0xe29], 1
    M8((uint32_t)(esi + 0xe29u)) = (uint8_t)(0x1u);
L_00550c82:  // lea edi, [esi + 0x394]
    edi = (uint32_t)((uint32_t)(esi + 0x394u));
L_00550c88:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00550c8d:  // lea esi, [esp + 0x48]
    esi = (uint32_t)((uint32_t)(esp + 0x48u));
L_00550c91:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00550c93:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00550c94:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00550c95:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_00550c9b:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00550be0, 00550be0)
