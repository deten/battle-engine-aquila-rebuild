// lifted from 004670b0 (FUN_004670b0, 321 bytes, 107 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004670b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004670b0;
L_004670b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004670b1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004670b2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004670b3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004670b4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004670b5:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004670b7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004670b9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004670bb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004670c0:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004670c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004670c5:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004670c7:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004670c9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004670cb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004670d0:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004670d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004670d5:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004670d9:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004670dd:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004670e1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004670e3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004670e8:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004670ec:  // fmul dword ptr [0x5dbb50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb50u)));
L_004670f2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004670f4:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004670f8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004670fa:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004670fe:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00467102:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00467106:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_0046710a:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046710e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046710f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00467110:  // mov ecx, dword ptr [0x89d8ec]
    ecx = (uint32_t)(M32((uint32_t)(0x89d8ecu)));
L_00467116:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0046711a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0046711e:  // fmul dword ptr [0x5dbb50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb50u)));
L_00467124:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00467127:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00467128:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00467129:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046712a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046712b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046712c:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467131u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467131:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00467134:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00467139:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046713b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046713d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046713f:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467144u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467144:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00467146:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00467148:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046714a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0046714f:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467154u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467154:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00467158:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0046715e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00467160:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00467163:  // jne 0x4671e9
    if (!f.zf) goto L_004671e9;
L_00467169:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0046716b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046716d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046716f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00467174:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467179u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467179:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0046717b:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0046717d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046717f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00467184:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00467189u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00467189:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0046718d:  // fdiv dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00467191:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00467195:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00467197:  // mov eax, dword ptr [0x89d8ec]
    eax = (uint32_t)(M32((uint32_t)(0x89d8ecu)));
L_0046719c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004671a1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004671a3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004671a5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004671a6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004671a7:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004671ab:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004671af:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_004671b3:  // fmul dword ptr [0x5dbb50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbb50u)));
L_004671b9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004671bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004671bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004671be:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004671bf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004671c0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004671c1:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004671c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004671c6:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004671c9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004671ce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004671d0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004671d2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004671d4:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004671d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004671d9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004671db:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004671dd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004671df:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004671e4:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004671e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004671e9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004671ea:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004671eb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004671ec:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004671ed:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004671ee:  // ret 0x28
    c->target = M32(esp); esp += 44u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004670b0, 004670b0)
