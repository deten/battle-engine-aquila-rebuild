// lifted from 005168d0 (FUN_005168d0, 136 bytes, 36 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005168d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005168d0;
L_005168d0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005168d2:  // push 0x5d67b8
    t0 = 0x5d67b8u; esp -= 4; M32(esp) = t0;
L_005168d7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_005168dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005168de:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_005168e5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005168e6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005168e7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_005168e9:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_005168ed:  // mov dword ptr [esi], 0x5e4988
    M32((uint32_t)(esi)) = (uint32_t)(0x5e4988u);
L_005168f3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005168f4:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_005168f9:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00516901:  // call 0x4e1200
    t0 = 0x004e1200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516906u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516906:  // mov eax, dword ptr [esi + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_00516909:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051690b:  // je 0x51691f
    if (f.zf) goto L_0051691f;
L_0051690d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051690e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00516913:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516918u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516918:  // mov dword ptr [esi + 0x78], 0
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(0x0u);
L_0051691f:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_00516925:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516927:  // je 0x516939
    if (f.zf) goto L_00516939;
L_00516929:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0051692b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051692c:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051692fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051692f:  // mov dword ptr [esi + 0x80], 0
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(0x0u);
L_00516939:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0051693b:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_00516943:  // call 0x4dff30
    t0 = 0x004dff30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516948u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516948:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0051694c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051694d:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00516954:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00516957:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005168d0, 005168d0)
