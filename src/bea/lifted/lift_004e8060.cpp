// lifted from 004e8060 (vslot79, 76 bytes, 31 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e8060(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e8060;
L_004e8060:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e8061:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004e8067:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e8068:  // mov esi, dword ptr [ecx + 0xa4]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xa4u)));
L_004e806e:  // fst dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
L_004e8072:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e8074:  // je 0x4e807a
    if (f.zf) goto L_004e807a;
L_004e8076:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e8078:  // jmp 0x4e807c
    goto L_004e807c;
L_004e807a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e807c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e807e:  // je 0x4e80a9
    if (f.zf) goto L_004e80a9;
L_004e8080:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004e8082:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e8084:  // je 0x4e8098
    if (f.zf) goto L_004e8098;
L_004e8086:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004e8088:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e808a:  // call dword ptr [eax + 0x13c]
    t0 = M32((uint32_t)(eax + 0x13cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8090u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8090:  // fadd dword ptr [esp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x4u)));
L_004e8094:  // fst dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
L_004e8098:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004e809b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e809d:  // je 0x4e80a3
    if (f.zf) goto L_004e80a3;
L_004e809f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e80a1:  // jmp 0x4e80a5
    goto L_004e80a5;
L_004e80a3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004e80a5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e80a7:  // jne 0x4e8080
    if (!f.zf) goto L_004e8080;
L_004e80a9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e80aa:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004e80ab:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e8060, 004e8060)
