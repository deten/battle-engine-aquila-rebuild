// lifted from 004063b0 (FUN_004063b0, 169 bytes, 53 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004063b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004063b0;
L_004063b0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004063b2:  // push 0x5d1209
    t0 = 0x5d1209u; esp -= 4; M32(esp) = t0;
L_004063b7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004063bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004063be:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004063c5:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004063c8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004063c9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004063ca:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004063cb:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004063cd:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004063cf:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004063d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004063d2:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004063d6:  // push 0x1f5
    t0 = 0x1f5u; esp -= 4; M32(esp) = t0;
L_004063db:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_004063e0:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004063e2:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004063e4:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004063e9:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004063eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004063ee:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004063f0:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004063f4:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004063f6:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004063f8:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_004063fc:  // je 0x406434
    if (f.zf) goto L_00406434;
L_004063fe:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00406400:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00406402:  // call dword ptr [edx + 0xc0]
    t0 = M32((uint32_t)(edx + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406408u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406408:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0040640e:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00406412:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00406416:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0040641a:  // mov dword ptr [esi + 4], ebx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ebx);
L_0040641d:  // mov dword ptr [esi + 8], ebx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ebx);
L_00406420:  // mov dword ptr [esi + 0xc], ebx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ebx);
L_00406423:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_00406426:  // mov dword ptr [esi], 0x5d88cc
    M32((uint32_t)(esi)) = (uint32_t)(0x5d88ccu);
L_0040642c:  // fstp dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0040642f:  // fstp dword ptr [esi + 0x1c]
    F32((uint32_t)(esi + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00406432:  // jmp 0x406436
    goto L_00406436;
L_00406434:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00406436:  // mov ecx, dword ptr [edi + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x38u)));
L_00406439:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040643a:  // mov dword ptr [esp + 0x20], 0xffffffff
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xffffffffu);
L_00406442:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00406444:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00406447u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00406447:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0040644b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040644c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040644d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0040644e:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00406455:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00406458:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004063b0, 004063b0)
