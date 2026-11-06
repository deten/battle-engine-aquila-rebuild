// lifted from 00444620 (FUN_00444620, 56 bytes, 23 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00444620(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00444620;
L_00444620:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00444621:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00444623:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00444625:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00444628:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044462a:  // jle 0x444645
    if ((f.zf || f.sf != f.of)) goto L_00444645;
L_0044462c:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00444630:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00444633:  // mov eax, dword ptr [eax + ecx*4]
    eax = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_00444636:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00444638:  // je 0x44463d
    if (f.zf) goto L_0044463d;
L_0044463a:  // mov dword ptr [eax + 0x1c], edx
    M32((uint32_t)(eax + 0x1cu)) = (uint32_t)(edx);
L_0044463d:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00444640:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00444641:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00444643:  // jl 0x444630
    if ((f.sf != f.of)) goto L_00444630;
L_00444645:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00444648:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0044464a:  // je 0x444654
    if (f.zf) goto L_00444654;
L_0044464c:  // call 0x442890
    t0 = 0x00442890u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00444651u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00444651:  // fstp dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00444654:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00444655:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00444620, 00444620)
