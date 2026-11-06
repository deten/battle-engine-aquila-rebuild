// lifted from 004c5c50 (FUN_004c5c50, 228 bytes, 71 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c5c50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c5c50;
L_004c5c50:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c5c51:  // mov edx, dword ptr [esp]
    edx = (uint32_t)(M32((uint32_t)(esp)));
L_004c5c55:  // mov ecx, dword ptr [esp]
    ecx = (uint32_t)(M32((uint32_t)(esp)));
L_004c5c59:  // fld dword ptr [esp]
    lpush(x, (long double)F32((uint32_t)(esp)));
L_004c5c5d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c5c5e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c5c5f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c5c60:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004c5c62:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004c5c64:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004c5c66:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004c5c69:  // add eax, 0x829e58
    t0 = ladd<32>(eax, 0x829e58u, f);
    eax = (uint32_t)(t0);
L_004c5c6e:  // cmp edi, 4
    t0 = lsub<32>(edi, 0x4u, f);
L_004c5c71:  // ja 0x4c5cd9
    if ((!f.cf && !f.zf)) goto L_004c5cd9;
L_004c5c73:  // jmp dword ptr [edi*4 + 0x4c5d34]
    t0 = M32((uint32_t)(edi * 4u + 0x4c5d34u));
    switch (t0) {
    case 0x004c5c7au: goto L_004c5c7a;
    case 0x004c5c8eu: goto L_004c5c8e;
    case 0x004c5ca2u: goto L_004c5ca2;
    case 0x004c5cb6u: goto L_004c5cb6;
    case 0x004c5ccau: goto L_004c5cca;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004c5c7a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c5c7c:  // fld dword ptr [0x5dbb50]
    lpush(x, (long double)F32((uint32_t)(0x5dbb50u)));
L_004c5c82:  // mov edx, 0x10
    edx = (uint32_t)(0x10u);
L_004c5c87:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_004c5c8c:  // jmp 0x4c5cd9
    goto L_004c5cd9;
L_004c5c8e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c5c90:  // fld dword ptr [0x5d8c4c]
    lpush(x, (long double)F32((uint32_t)(0x5d8c4cu)));
L_004c5c96:  // mov edx, 8
    edx = (uint32_t)(0x8u);
L_004c5c9b:  // mov ecx, 3
    ecx = (uint32_t)(0x3u);
L_004c5ca0:  // jmp 0x4c5cd9
    goto L_004c5cd9;
L_004c5ca2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c5ca4:  // fld dword ptr [0x5d858c]
    lpush(x, (long double)F32((uint32_t)(0x5d858cu)));
L_004c5caa:  // mov edx, 4
    edx = (uint32_t)(0x4u);
L_004c5caf:  // mov ecx, 2
    ecx = (uint32_t)(0x2u);
L_004c5cb4:  // jmp 0x4c5cd9
    goto L_004c5cd9;
L_004c5cb6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c5cb8:  // fld dword ptr [0x5d85ec]
    lpush(x, (long double)F32((uint32_t)(0x5d85ecu)));
L_004c5cbe:  // mov edx, 2
    edx = (uint32_t)(0x2u);
L_004c5cc3:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_004c5cc8:  // jmp 0x4c5cd9
    goto L_004c5cd9;
L_004c5cca:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c5ccc:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c5cd2:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_004c5cd7:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004c5cd9:  // lea ebx, [edx - 1]
    ebx = (uint32_t)((uint32_t)(edx + 0xffffffffu));
L_004c5cdc:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004c5cdf:  // and ebx, esi
    t0 = llog<32>(ebx & esi, f);
    ebx = (uint32_t)(t0);
L_004c5ce1:  // mov dword ptr [esp + 0xc], ebx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ebx);
L_004c5ce5:  // mov ebx, esi
    ebx = (uint32_t)(esi);
L_004c5ce7:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004c5ceb:  // sar ebx, cl
    t0 = lsar<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_004c5ced:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004c5cee:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c5cf0:  // cmp esi, 0x10
    t0 = lsub<32>(esi, 0x10u, f);
L_004c5cf3:  // mov dword ptr [esp + 0xc], ebx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ebx);
L_004c5cf7:  // fstp dword ptr [eax - 0x10]
    F32((uint32_t)(eax + 0xfffffff0u)) = lf32(ST(0));
    lpop(x);
L_004c5cfa:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004c5cfe:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c5d00:  // fstp dword ptr [eax - 0xc]
    F32((uint32_t)(eax + 0xfffffff4u)) = lf32(ST(0));
    lpop(x);
L_004c5d03:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c5d05:  // fadd dword ptr [eax - 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0xfffffff0u)));
L_004c5d08:  // fstp dword ptr [eax - 8]
    F32((uint32_t)(eax + 0xfffffff8u)) = lf32(ST(0));
    lpop(x);
L_004c5d0b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c5d0d:  // fadd dword ptr [eax - 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0xfffffff4u)));
L_004c5d10:  // fstp dword ptr [eax - 4]
    F32((uint32_t)(eax + 0xfffffffcu)) = lf32(ST(0));
    lpop(x);
L_004c5d13:  // jl 0x4c5c6e
    if ((f.sf != f.of)) goto L_004c5c6e;
L_004c5d19:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004c5d1a:  // cmp edi, 5
    t0 = lsub<32>(edi, 0x5u, f);
L_004c5d1d:  // jl 0x4c5c62
    if ((f.sf != f.of)) goto L_004c5c62;
L_004c5d23:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c5d24:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c5d25:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c5d27:  // mov dword ptr [0x82b39c], 1
    M32((uint32_t)(0x82b39cu)) = (uint32_t)(0x1u);
L_004c5d31:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c5d32:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004c5d33:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004c5c50, 004c5c50)
