// lifted from 0044c720 (FUN_0044c720, 91 bytes, 35 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0044c720(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0044c720;
L_0044c720:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044c723:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0044c727:  // fistp qword ptr [esp]
    M64((uint32_t)(esp)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0044c72b:  // mov eax, dword ptr [esp]
    eax = (uint32_t)(M32((uint32_t)(esp)));
L_0044c72f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044c730:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0044c731:  // and edx, 7
    t0 = llog<32>(edx & 0x7u, f);
    edx = (uint32_t)(t0);
L_0044c734:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0044c736:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0044c73a:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0044c73e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0044c740:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0044c744:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0044c745:  // and edx, 7
    t0 = llog<32>(edx & 0x7u, f);
    edx = (uint32_t)(t0);
L_0044c748:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0044c74a:  // sar esi, 3
    t0 = lsar<32>(esi, 0x3u, f);
    esi = (uint32_t)(t0);
L_0044c74d:  // sar eax, 3
    t0 = lsar<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_0044c750:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0044c752:  // jl 0x44c772
    if ((f.sf != f.of)) goto L_0044c772;
L_0044c754:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044c756:  // jl 0x44c772
    if ((f.sf != f.of)) goto L_0044c772;
L_0044c758:  // cmp esi, 0x40
    t0 = lsub<32>(esi, 0x40u, f);
L_0044c75b:  // jge 0x44c772
    if ((f.sf == f.of)) goto L_0044c772;
L_0044c75d:  // cmp eax, 0x40
    t0 = lsub<32>(eax, 0x40u, f);
L_0044c760:  // jge 0x44c772
    if ((f.sf == f.of)) goto L_0044c772;
L_0044c762:  // shl esi, 6
    t0 = lshl<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_0044c765:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0044c767:  // mov eax, dword ptr [ecx + esi*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + esi * 4u + 0x8u)));
L_0044c76b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044c76c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044c76f:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044c772:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0044c774:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044c775:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044c778:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0044c720, 0044c720)
