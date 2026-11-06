// lifted from 005345d0 (FUN_005345d0, 170 bytes, 56 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005345d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005345d0;
L_005345d0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005345d2:  // push 0x5d6f29
    t0 = 0x5d6f29u; esp -= 4; M32(esp) = t0;
L_005345d7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_005345dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005345de:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_005345e5:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_005345e8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005345e9:  // push 0x283
    t0 = 0x283u; esp -= 4; M32(esp) = t0;
L_005345ee:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_005345f3:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_005345f5:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_005345f7:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005345fc:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534601u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534601:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00534603:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_00534607:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00534609:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0053460b:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0053460f:  // je 0x534662
    if (f.zf) goto L_00534662;
L_00534611:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00534615:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00534617:  // lea eax, [esp + 8]
    eax = (uint32_t)((uint32_t)(esp + 0x8u));
L_0053461b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053461c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053461e:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534621u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534621:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00534624:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00534627:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00534629:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0053462b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053462d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0053462f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00534631:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00534635:  // mov dword ptr [esi], 0x5e4ea4
    M32((uint32_t)(esi)) = (uint32_t)(0x5e4ea4u);
L_0053463b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053463d:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0053463f:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00534641:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00534643:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00534645:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00534647:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00534649:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053464b:  // fstp dword ptr [esi + 4]
    F32((uint32_t)(esi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0053464e:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_00534650:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00534651:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00534655:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0053465c:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0053465f:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00534662:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00534666:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053466a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053466b:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0053466d:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00534674:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00534677:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005345d0, 005345d0)
