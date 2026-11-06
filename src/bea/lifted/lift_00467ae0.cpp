// lifted from 00467ae0 (FUN_00467ae0, 240 bytes, 83 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00467ae0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00467ae0;
L_00467ae0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00467ae1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00467ae2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00467ae3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00467ae5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00467ae7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467ae9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00467aee:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467af3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467af3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00467af5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00467af7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467af9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00467afe:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467b03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467b03:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00467b07:  // fmul dword ptr [0x5db2b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db2b8u)));
L_00467b0d:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00467b11:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00467b13:  // lea edi, [eax + 2]
    edi = (uint32_t)((uint32_t)(eax + 0x2u));
L_00467b16:  // fsubr dword ptr [esp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x14u))) - (ST(0));
L_00467b1a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00467b1c:  // shl ecx, 5
    t0 = lshl<32>(ecx, 0x5u, f);
    ecx = (uint32_t)(t0);
L_00467b1f:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00467b23:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_00467b27:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00467b2b:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00467b2d:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00467b31:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_00467b35:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00467b39:  // jle 0x467baa
    if ((f.zf || f.sf != f.of)) goto L_00467baa;
L_00467b3b:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00467b3f:  // fmul dword ptr [0x5dbb64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb64u)));
L_00467b45:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00467b46:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00467b4a:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00467b4b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00467b4c:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00467b50:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00467b54:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00467b58:  // mov eax, dword ptr [0x89d7b0]
    eax = (uint32_t)(M32((uint32_t)(0x89d7b0u)));
L_00467b5d:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00467b5f:  // jne 0x467b66
    if (!f.zf) goto L_00467b66;
L_00467b61:  // mov eax, dword ptr [0x89d7ac]
    eax = (uint32_t)(M32((uint32_t)(0x89d7acu)));
L_00467b66:  // cmp esi, dword ptr [esp + 0x24]
    t0 = lsub<32>(esi, M32((uint32_t)(esp + 0x24u)), f);
L_00467b6a:  // jne 0x467b71
    if (!f.zf) goto L_00467b71;
L_00467b6c:  // mov eax, dword ptr [0x89d7b4]
    eax = (uint32_t)(M32((uint32_t)(0x89d7b4u)));
L_00467b71:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00467b75:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467b77:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00467b7c:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00467b80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467b82:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467b84:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00467b85:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00467b86:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00467b87:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00467b88:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00467b8c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00467b8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00467b8e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00467b8f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467b94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467b94:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00467b98:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_00467b9c:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00467b9f:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00467ba0:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_00467ba2:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00467ba6:  // jl 0x467b58
    if ((f.sf != f.of)) goto L_00467b58;
L_00467ba8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00467ba9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00467baa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00467bac:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00467bae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467bb0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00467bb5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467bbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467bba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00467bbc:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00467bbe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467bc0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00467bc5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467bcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467bca:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00467bcb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00467bcc:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00467bcd:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00467ae0, 00467ae0)
