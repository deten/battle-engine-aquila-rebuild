// lifted from 004454c0 (vslot66, 164 bytes, 35 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004454c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004454c0;
L_004454c0:  // mov edx, dword ptr [ecx + 0x168]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x168u)));
L_004454c6:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004454cb:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_004454cd:  // jne 0x4454df
    if (!f.zf) goto L_004454df;
L_004454cf:  // mov dword ptr [ecx + 0x168], 0
    M32((uint32_t)(ecx + 0x168u)) = (uint32_t)(0x0u);
L_004454d9:  // mov dword ptr [ecx + 0x1e8], eax
    M32((uint32_t)(ecx + 0x1e8u)) = (uint32_t)(eax);
L_004454df:  // test byte ptr [ecx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x2cu)) & 0x4u, f);
L_004454e3:  // je 0x445520
    if (f.zf) goto L_00445520;
L_004454e5:  // fld dword ptr [ecx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x11cu)));
L_004454eb:  // fadd dword ptr [0x5d85f8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85f8u)));
L_004454f1:  // mov dword ptr [ecx + 0x134], 0x3e4ccccd
    M32((uint32_t)(ecx + 0x134u)) = (uint32_t)(0x3e4ccccdu);
L_004454fb:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_00445501:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445503:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00445506:  // jne 0x44550e
    if (!f.zf) goto L_0044550e;
L_00445508:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0044550e:  // fstp dword ptr [ecx + 0x128]
    F32((uint32_t)(ecx + 0x128u)) = lf32(ST(0));
    lpop(x);
L_00445514:  // mov dword ptr [ecx + 0x124], 0x3fc90fdb
    M32((uint32_t)(ecx + 0x124u)) = (uint32_t)(0x3fc90fdbu);
L_0044551e:  // jmp 0x44555f
    goto L_0044555f;
L_00445520:  // fld dword ptr [ecx + 0x284]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x284u)));
L_00445526:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_0044552c:  // fst dword ptr [ecx + 0x284]
    F32((uint32_t)(ecx + 0x284u)) = lf32(ST(0));
L_00445532:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00445534:  // fsin 
    ST(0) = lfsin(ST(0));
L_00445536:  // fmul dword ptr [0x5d8604]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8604u)));
L_0044553c:  // fstp dword ptr [ecx + 0x27c]
    F32((uint32_t)(ecx + 0x27cu)) = lf32(ST(0));
    lpop(x);
L_00445542:  // fcom dword ptr [0x5d85e0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e0u)));
L_00445548:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044554a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044554d:  // jne 0x44555d
    if (!f.zf) goto L_0044555d;
L_0044554f:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00445555:  // fstp dword ptr [ecx + 0x284]
    F32((uint32_t)(ecx + 0x284u)) = lf32(ST(0));
    lpop(x);
L_0044555b:  // jmp 0x44555f
    goto L_0044555f;
L_0044555d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0044555f:  // jmp 0x402fa0
    { c->target = 0x00402fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
}

LIFT_FUNCTION(0x004454c0, 004454c0)
