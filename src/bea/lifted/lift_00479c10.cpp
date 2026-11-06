// lifted from 00479c10 (FUN_00479c10, 159 bytes, 51 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00479c10(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00479c10;
L_00479c10:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00479c12:  // push 0x5d2a7e
    t0 = 0x5d2a7eu; esp -= 4; M32(esp) = t0;
L_00479c17:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00479c1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00479c1e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00479c25:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00479c26:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00479c27:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00479c29:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_00479c2d:  // mov dword ptr [esi], 0x5d8d1c
    M32((uint32_t)(esi)) = (uint32_t)(0x5d8d1cu);
L_00479c33:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_00479c36:  // lea edx, [esi + 0x28]
    edx = (uint32_t)((uint32_t)(esi + 0x28u));
L_00479c39:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00479c3b:  // mov dword ptr [esp + 0x10], 2
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x2u);
L_00479c43:  // je 0x479c54
    if (f.zf) goto L_00479c54;
L_00479c45:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00479c48:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00479c4a:  // je 0x479c54
    if (f.zf) goto L_00479c54;
L_00479c4c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00479c4d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00479c4f:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00479c54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00479c54:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00479c57:  // lea edx, [esi + 0x24]
    edx = (uint32_t)((uint32_t)(esi + 0x24u));
L_00479c5a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00479c5c:  // mov byte ptr [esp + 0x10], 1
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x1u);
L_00479c61:  // je 0x479c72
    if (f.zf) goto L_00479c72;
L_00479c63:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00479c66:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00479c68:  // je 0x479c72
    if (f.zf) goto L_00479c72;
L_00479c6a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00479c6b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00479c6d:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00479c72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00479c72:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00479c75:  // lea edx, [esi + 0xc]
    edx = (uint32_t)((uint32_t)(esi + 0xcu));
L_00479c78:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00479c7a:  // mov byte ptr [esp + 0x10], 0
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x0u);
L_00479c7f:  // je 0x479c90
    if (f.zf) goto L_00479c90;
L_00479c81:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00479c84:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00479c86:  // je 0x479c90
    if (f.zf) goto L_00479c90;
L_00479c88:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00479c89:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00479c8b:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00479c90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00479c90:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00479c92:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_00479c9a:  // call 0x4bac40
    t0 = 0x004bac40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00479c9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00479c9f:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00479ca3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00479ca4:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00479cab:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00479cae:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00479c10, 00479c10)
