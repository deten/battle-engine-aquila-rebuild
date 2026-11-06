// lifted from 00535530 (FUN_00535530, 44 bytes, 18 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00535530(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00535530;
L_00535530:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00535531:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00535533:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00535536:  // test byte ptr [eax + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x10u, f);
L_0053553a:  // je 0x535558
    if (f.zf) goto L_00535558;
L_0053553c:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00535540:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00535541:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_00535543:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00535545:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00535547:  // call dword ptr [edx + 0x34]
    t0 = M32((uint32_t)(edx + 0x34u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053554au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053554a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053554b:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_0053554e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00535551:  // call dword ptr [edi + 0x1c8]
    t0 = M32((uint32_t)(edi + 0x1c8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00535557u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00535557:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00535558:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00535559:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00535530, 00535530)
