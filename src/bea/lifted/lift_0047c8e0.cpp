// lifted from 0047c8e0 (vslot35, 132 bytes, 44 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047c8e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047c8e0;
L_0047c8e0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047c8e1:  // mov ebx, dword ptr [esp + 8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0047c8e5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047c8e6:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047c8e8:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_0047c8eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047c8ed:  // jne 0x47c957
    if (!f.zf) goto L_0047c957;
L_0047c8ef:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0047c8f1:  // call dword ptr [eax + 0x44]
    t0 = M32((uint32_t)(eax + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c8f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c8f4:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0047c8f8:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0047c8fa:  // push 0x62cb0c
    t0 = 0x62cb0cu; esp -= 4; M32(esp) = t0;
L_0047c8ff:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_0047c901:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_0047c903:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0047c908:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c90du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c90d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047c90f:  // je 0x47c952
    if (f.zf) goto L_0047c952;
L_0047c911:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0047c915:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_0047c91b:  // mov dword ptr [eax + 4], 0
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x0u);
L_0047c922:  // mov dword ptr [eax + 8], 0
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x0u);
L_0047c929:  // mov dword ptr [eax + 0xc], 0
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(0x0u);
L_0047c930:  // mov dword ptr [eax], 0x5d95e8
    M32((uint32_t)(eax)) = (uint32_t)(0x5d95e8u);
L_0047c936:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047c937:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047c939:  // fst dword ptr [eax + 0x14]
    F32((uint32_t)(eax + 0x14u)) = lf32(ST(0));
L_0047c93c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047c93e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047c940:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0047c943:  // mov dword ptr [ebx + 0xc], eax
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(eax);
L_0047c946:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047c948:  // call 0x4f39c0
    t0 = 0x004f39c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c94du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c94d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047c94e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047c94f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0047c952:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0047c954:  // mov dword ptr [ebx + 0xc], eax
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(eax);
L_0047c957:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047c958:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047c95a:  // call 0x4f39c0
    t0 = 0x004f39c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c95fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c95f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047c960:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047c961:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0047c8e0, 0047c8e0)
