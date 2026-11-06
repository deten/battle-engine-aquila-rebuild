// lifted from 00444960 (FUN_00444960, 93 bytes, 28 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00444960(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00444960;
L_00444960:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00444962:  // push 0x5d21c8
    t0 = 0x5d21c8u; esp -= 4; M32(esp) = t0;
L_00444967:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0044496d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044496e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00444975:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00444976:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00444977:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00444979:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_0044497d:  // mov eax, dword ptr [esi + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x40u)));
L_00444980:  // lea edx, [esi + 0x40]
    edx = (uint32_t)((uint32_t)(esi + 0x40u));
L_00444983:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00444985:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0044498d:  // je 0x44499e
    if (f.zf) goto L_0044499e;
L_0044498f:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00444992:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00444994:  // je 0x44499e
    if (f.zf) goto L_0044499e;
L_00444996:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00444997:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00444999:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044499eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044499e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004449a0:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_004449a8:  // call 0x442660
    t0 = 0x00442660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004449adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004449ad:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004449b1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004449b2:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004449b9:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004449bc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00444960, 00444960)
