// lifted from 004cac80 (FUN_004cac80, 211 bytes, 65 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cac80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cac80;
L_004cac80:  // sub esp, 0xc
    t0 = lsub<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004cac83:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004cac87:  // fmul dword ptr [0x5db2b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db2b8u)));
L_004cac8d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cac8e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cac8f:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004cac92:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004cac96:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004cac9a:  // fmul dword ptr [0x5db2b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db2b8u)));
L_004caca0:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004caca4:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004caca8:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004cacab:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cacb0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cacb0:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004cacb4:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004cacb8:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004cacbc:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004cacc0:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004cacc3:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cacc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cacc8:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004caccc:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004cacd0:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004cacd2:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004cacd4:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004cacd8:  // and eax, 0x1f
    t0 = llog<32>(eax & 0x1fu, f);
    eax = (uint32_t)(t0);
L_004cacdb:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004cacde:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004cace1:  // and edx, 0x1f
    t0 = llog<32>(edx & 0x1fu, f);
    edx = (uint32_t)(t0);
L_004cace4:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004cace5:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_004cace9:  // and esi, 0x1f
    t0 = llog<32>(esi & 0x1fu, f);
    esi = (uint32_t)(t0);
L_004cacec:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004caced:  // and ecx, 0x1f
    t0 = llog<32>(ecx & 0x1fu, f);
    ecx = (uint32_t)(t0);
L_004cacf0:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_004cacf4:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004cacf8:  // lea edi, [esi + eax]
    edi = (uint32_t)((uint32_t)(esi + eax));
L_004cacfb:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004cacfd:  // shl ecx, 5
    t0 = lshl<32>(ecx, 0x5u, f);
    ecx = (uint32_t)(t0);
L_004cad00:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_004cad04:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004cad0a:  // fsub st(2)
    ST(0) = (ST(0)) - (ST(2));
L_004cad0c:  // fld dword ptr [edi*4 + 0x82a358]
    lpush(x, (long double)F32((uint32_t)(edi * 4u + 0x82a358u)));
L_004cad13:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004cad15:  // fld dword ptr [eax*4 + 0x82a358]
    lpush(x, (long double)F32((uint32_t)(eax * 4u + 0x82a358u)));
L_004cad1c:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004cad1e:  // lea eax, [ecx + esi]
    eax = (uint32_t)((uint32_t)(ecx + esi));
L_004cad21:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004cad23:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cad24:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cad25:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004cad27:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004cad2d:  // fsub st(3)
    ST(0) = (ST(0)) - (ST(3));
L_004cad2f:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004cad31:  // fld dword ptr [eax*4 + 0x82a358]
    lpush(x, (long double)F32((uint32_t)(eax * 4u + 0x82a358u)));
L_004cad38:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004cad3a:  // fld dword ptr [ecx*4 + 0x82a358]
    lpush(x, (long double)F32((uint32_t)(ecx * 4u + 0x82a358u)));
L_004cad41:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004cad43:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004cad45:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004cad47:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004cad49:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004cad4b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004cad4d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004cad4f:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004cad52:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004cac80, 004cac80)
