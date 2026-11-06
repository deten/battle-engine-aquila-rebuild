// lifted from 005514a0 (FUN_005514a0, 110 bytes, 32 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005514a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005514a0;
L_005514a0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_005514a4:  // sub esp, 0x48
    t0 = lsub<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_005514a7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005514a8:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_005514aa:  // cmp eax, dword ptr [ebp + 0xe24]
    t0 = lsub<32>(eax, M32((uint32_t)(ebp + 0xe24u)), f);
L_005514b0:  // je 0x551507
    if (f.zf) goto L_00551507;
L_005514b2:  // mov dword ptr [ebp + 0xe24], eax
    M32((uint32_t)(ebp + 0xe24u)) = (uint32_t)(eax);
L_005514b8:  // mov dword ptr [esp + 4], eax
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(eax);
L_005514bc:  // fld dword ptr [0x9c742c]
    lpush(x, (long double)F32((uint32_t)(0x9c742cu)));
L_005514c2:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_005514ca:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005514cf:  // fimul dword ptr [esp + 4]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esp + 0x4u)));
L_005514d3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005514d4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005514d5:  // lea esi, [ebp + 0x3d4]
    esi = (uint32_t)((uint32_t)(ebp + 0x3d4u));
L_005514db:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_005514e0:  // lea edi, [esp + 0x14]
    edi = (uint32_t)((uint32_t)(esp + 0x14u));
L_005514e4:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_005514e8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005514ea:  // fsubr dword ptr [esp + 0x4c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x4cu))) - (ST(0));
L_005514ee:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_005514f2:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005514f4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005514f5:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005514f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005514f8:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005514feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005514fe:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005514ff:  // mov byte ptr [ebp + 0xe2a], 0
    M8((uint32_t)(ebp + 0xe2au)) = (uint8_t)(0x0u);
L_00551506:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00551507:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00551508:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_0055150b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005514a0, 005514a0)
