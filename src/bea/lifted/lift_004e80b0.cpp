// lifted from 004e80b0 (vslot80, 76 bytes, 31 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e80b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e80b0;
L_004e80b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e80b1:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004e80b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e80b8:  // mov esi, dword ptr [ecx + 0xa4]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_004e80be:  // fst dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
L_004e80c2:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e80c4:  // je 0x4e80ca
    if (f.zf) goto L_004e80ca;
L_004e80c6:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e80c8:  // jmp 0x4e80cc
    goto L_004e80cc;
L_004e80ca:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e80cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e80ce:  // je 0x4e80f9
    if (f.zf) goto L_004e80f9;
L_004e80d0:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004e80d2:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e80d4:  // je 0x4e80e8
    if (f.zf) goto L_004e80e8;
L_004e80d6:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004e80d8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e80da:  // call dword ptr [eax + 0x140]
    t0 = M32((uint32_t)(eax + 0x140u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e80e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e80e0:  // fadd dword ptr [esp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x4u)));
L_004e80e4:  // fst dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
L_004e80e8:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004e80eb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e80ed:  // je 0x4e80f3
    if (f.zf) goto L_004e80f3;
L_004e80ef:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e80f1:  // jmp 0x4e80f5
    goto L_004e80f5;
L_004e80f3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e80f5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e80f7:  // jne 0x4e80d0
    if (!f.zf) goto L_004e80d0;
L_004e80f9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e80fa:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004e80fb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e80b0, 004e80b0)
