// lifted from 004d63c0 (vslot66, 240 bytes, 63 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d63c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d63c0;
L_004d63c0:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004d63c3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d63c4:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d63c6:  // call 0x4fa8d0
    t0 = 0x004fa8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d63cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d63cb:  // fld dword ptr [esi + 0x280]
    lpush(x, (long double)F32((uint32_t)(esi + 0x280u)));
L_004d63d1:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004d63d7:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_004d63dd:  // fst dword ptr [esi + 0x280]
    F32((uint32_t)(esi + 0x280u)) = lf32(ST(0));
L_004d63e3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d63e5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d63e8:  // jne 0x4d63f8
    if (!f.zf) goto L_004d63f8;
L_004d63ea:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004d63f0:  // fstp dword ptr [esi + 0x280]
    F32((uint32_t)(esi + 0x280u)) = lf32(ST(0));
    lpop(x);
L_004d63f6:  // jmp 0x4d63fa
    goto L_004d63fa;
L_004d63f8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d63fa:  // mov eax, dword ptr [esi + 0x280]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x280u)));
L_004d6400:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004d6408:  // mov dword ptr [esp + 4], eax
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(eax);
L_004d640c:  // lea eax, [esi + 0x250]
    eax = (uint32_t)((uint32_t)(esi + 0x250u));
L_004d6412:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004d6416:  // fcos 
    ST(0) = lfcos(ST(0));
L_004d6418:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d641a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d641b:  // fst dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
L_004d641f:  // fld dword ptr [esp]
    lpush(x, (long double)F32((uint32_t)(esp)));
L_004d6423:  // fsin 
    ST(0) = lfsin(ST(0));
L_004d6425:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004d6429:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004d642b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d642d:  // fchs 
    ST(0) = -ST(0);
L_004d642f:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004d6433:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004d6437:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004d643b:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004d643e:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d6442:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004d6446:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004d6449:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d644d:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_004d6455:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004d6458:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004d645c:  // lea ecx, [eax + 0x10]
    ecx = (uint32_t)((uint32_t)(eax + 0x10u));
L_004d645f:  // mov dword ptr [esp + 4], 0
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(0x0u);
L_004d6467:  // add eax, 0x20
    t0 = ladd<32>(eax, 0x20u, f);
    eax = (uint32_t)(t0);
L_004d646a:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004d646c:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004d6470:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_004d6478:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004d647b:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d647f:  // mov dword ptr [esp + 0xc], 0x3f800000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x3f800000u);
L_004d6487:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004d648a:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d648e:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004d6491:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004d6495:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004d6499:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004d649b:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d649f:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004d64a2:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d64a6:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004d64a9:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004d64ac:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004d64af:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d63c0, 004d63c0)
