// lifted from 004dbec0 (vslot2, 167 bytes, 51 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004dbec0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004dbec0;
L_004dbec0:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004dbec3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dbec4:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004dbec6:  // mov al, byte ptr [ebx + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x20u))) & 0xffu);
L_004dbec9:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004dbecb:  // je 0x4dbf60
    if (f.zf) goto L_004dbf60;
L_004dbed1:  // cmp dword ptr [ebx + 0x24], -1
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x24u)), 0xffffffffu, f);
L_004dbed5:  // jne 0x4dbeeb
    if (!f.zf) goto L_004dbeeb;
L_004dbed7:  // push 0x631e50
    t0 = 0x631e50u; esp -= 4; M32(esp) = t0;
L_004dbedc:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dbee1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dbee1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004dbee4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004dbee5:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004dbee8:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004dbeeb:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004dbeed:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004dbeee:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004dbeef:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004dbef1:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dbef4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dbef4:  // mov ecx, dword ptr [0x83cd08]
    ecx = (uint32_t)(M32((uint32_t)(0x83cd08u)));
L_004dbefa:  // mov edx, dword ptr [0x83cd0c]
    edx = (uint32_t)(M32((uint32_t)(0x83cd0cu)));
L_004dbf00:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_004dbf04:  // mov ecx, dword ptr [0x83cd10]
    ecx = (uint32_t)(M32((uint32_t)(0x83cd10u)));
L_004dbf0a:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004dbf0e:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004dbf13:  // mov esi, 0x83ccd8
    esi = (uint32_t)(0x83ccd8u);
L_004dbf18:  // lea edi, [esp + 0x1c]
    edi = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004dbf1c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004dbf1e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004dbf20:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004dbf24:  // mov edx, dword ptr [0x83cd14]
    edx = (uint32_t)(M32((uint32_t)(0x83cd14u)));
L_004dbf2a:  // mov dword ptr [0x704e60], 1
    M32((uint32_t)(0x704e60u)) = (uint32_t)(0x1u);
L_004dbf34:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004dbf37:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004dbf39:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004dbf3b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dbf3c:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004dbf40:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dbf41:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dbf42:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004dbf46:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004dbf4a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004dbf4b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dbf4c:  // call 0x4b6260
    t0 = 0x004b6260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dbf51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dbf51:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004dbf54:  // mov dword ptr [0x704e60], 0
    M32((uint32_t)(0x704e60u)) = (uint32_t)(0x0u);
L_004dbf5e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004dbf5f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004dbf60:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004dbf61:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004dbf64:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004dbec0, 004dbec0)
