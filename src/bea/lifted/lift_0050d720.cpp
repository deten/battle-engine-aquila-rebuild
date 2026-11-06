// lifted from 0050d720 (FUN_0050d720, 64 bytes, 21 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050d720(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050d720;
L_0050d720:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0050d724:  // lea eax, [ecx + 0x23c]
    eax = (uint32_t)((uint32_t)(ecx + 0x23cu));
L_0050d72a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050d72b:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_0050d730:  // cmp dword ptr [eax - 0x20], edx
    t0 = lsub<32>(M32((uint32_t)(eax + 0xffffffe0u)), edx, f);
L_0050d733:  // jne 0x50d756
    if (!f.zf) goto L_0050d756;
L_0050d735:  // cmp dword ptr [eax - 0x30], 3
    t0 = lsub<32>(M32((uint32_t)(eax + 0xffffffd0u)), 0x3u, f);
L_0050d739:  // jne 0x50d749
    if (!f.zf) goto L_0050d749;
L_0050d73b:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0050d741:  // fadd dword ptr [esp + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xcu)));
L_0050d745:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_0050d747:  // jmp 0x50d756
    goto L_0050d756;
L_0050d749:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0050d74d:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_0050d74f:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0050d753:  // mov dword ptr [eax + 0x10], edi
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(edi);
L_0050d756:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0050d759:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0050d75a:  // jne 0x50d730
    if (!f.zf) goto L_0050d730;
L_0050d75c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050d75d:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0050d720, 0050d720)
