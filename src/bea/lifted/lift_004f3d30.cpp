// lifted from 004f3d30 (vslot52, 175 bytes, 55 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f3d30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f3d30;
L_004f3d30:  // sub esp, 0x50
    t0 = lsub<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_004f3d33:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f3d34:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f3d35:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004f3d37:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f3d38:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f3d3d:  // mov esi, 0x83d9f0
    esi = (uint32_t)(0x83d9f0u);
L_004f3d42:  // lea edi, [esp + 0x2c]
    edi = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004f3d46:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004f3d49:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f3d4b:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f3d50:  // mov esi, 0x83d9f0
    esi = (uint32_t)(0x83d9f0u);
L_004f3d55:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004f3d57:  // lea eax, [ebx + 0x1c]
    eax = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004f3d5a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f3d5c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004f3d5e:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f3d61:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004f3d63:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f3d65:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f3d68:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004f3d6b:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f3d6e:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f3d71:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f3d74:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f3d77:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004f3d7c:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3d81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3d81:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004f3d83:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004f3d85:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3d88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3d88:  // mov eax, dword ptr [0x89ce88]
    eax = (uint32_t)(M32((uint32_t)(0x89ce88u)));
L_004f3d8d:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f3d92:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f3d93:  // lea esi, [esp + 0x30]
    esi = (uint32_t)((uint32_t)(esp + 0x30u));
L_004f3d97:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004f3d9a:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_004f3d9e:  // fst dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
L_004f3da2:  // fst dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
L_004f3da6:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004f3da8:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_004f3db0:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004f3db4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f3db6:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004f3dba:  // mov dword ptr [esp + 0x44], 0
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x0u);
L_004f3dc2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f3dc3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f3dc4:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004f3dc6:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004f3dcb:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_004f3dd3:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3dd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3dd8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f3dd9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f3dda:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f3ddb:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_004f3dde:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f3d30, 004f3d30)
