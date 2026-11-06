// lifted from 004bbcd0 (vslot9, 206 bytes, 65 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004bbcd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004bbcd0;
L_004bbcd0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004bbcd4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bbcd5:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004bbcd7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bbcd8:  // mov ecx, dword ptr [eax + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x64u)));
L_004bbcdb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bbcdc:  // mov dword ptr [esi + 0xe0], ecx
    M32((uint32_t)(esi + 0xe0u)) = (uint32_t)(ecx);
L_004bbce2:  // mov edx, dword ptr [eax + 0x70]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x70u)));
L_004bbce5:  // or edx, 0x20
    t0 = llog<32>(edx | 0x20u, f);
    edx = (uint32_t)(t0);
L_004bbce8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004bbcea:  // mov dword ptr [eax + 0x70], edx
    M32((uint32_t)(eax + 0x70u)) = (uint32_t)(edx);
L_004bbced:  // mov dword ptr [eax + 0x7c], 2
    M32((uint32_t)(eax + 0x7cu)) = (uint32_t)(0x2u);
L_004bbcf4:  // mov dword ptr [eax + 0x8c], 1
    M32((uint32_t)(eax + 0x8cu)) = (uint32_t)(0x1u);
L_004bbcfe:  // call 0x4011e0
    t0 = 0x004011e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd03:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004bbd05:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004bbd07:  // call dword ptr [edx + 0x48]
    t0 = M32((uint32_t)(edx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd0a:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004bbd0d:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004bbd0f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004bbd11:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004bbd13:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004bbd15:  // push 0x623adc
    t0 = 0x623adcu; esp -= 4; M32(esp) = t0;
L_004bbd1a:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd1d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004bbd1f:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd24:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bbd25:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004bbd27:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd2d:  // lea ecx, [esi + 0x1c]
    ecx = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004bbd30:  // lea edi, [esi + 8]
    edi = (uint32_t)((uint32_t)(esi + 0x8u));
L_004bbd33:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004bbd35:  // mov dword ptr [0x807528], edx
    M32((uint32_t)(0x807528u)) = (uint32_t)(edx);
L_004bbd3b:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004bbd3e:  // mov dword ptr [0x80752c], eax
    M32((uint32_t)(0x80752cu)) = (uint32_t)(eax);
L_004bbd43:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004bbd46:  // mov dword ptr [0x807530], edx
    M32((uint32_t)(0x807530u)) = (uint32_t)(edx);
L_004bbd4c:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004bbd4f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004bbd51:  // mov dword ptr [0x807534], eax
    M32((uint32_t)(0x807534u)) = (uint32_t)(eax);
L_004bbd56:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004bbd58:  // call dword ptr [edx + 0x58]
    t0 = M32((uint32_t)(edx + 0x58u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd5b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004bbd5d:  // je 0x4bbd8e
    if (f.zf) goto L_004bbd8e;
L_004bbd5f:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004bbd61:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004bbd63:  // call dword ptr [eax + 0x58]
    t0 = M32((uint32_t)(eax + 0x58u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd66:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004bbd69:  // je 0x4bbd8e
    if (f.zf) goto L_004bbd8e;
L_004bbd6b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbd6d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbd6f:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004bbd73:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbd75:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bbd76:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bbd77:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_004bbd7c:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004bbd81:  // mov dword ptr [esp + 0x24], 0xbf800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xbf800000u);
L_004bbd89:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd8e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bbd8f:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_004bbd94:  // call 0x50b010
    t0 = 0x0050b010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004bbd99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004bbd99:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004bbd9a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bbd9b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004bbcd0, 004bbcd0)
