// lifted from 004254f0 (vslot1_t8, 621 bytes, 194 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004254f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004254f0;
L_004254f0:  // sub esp, 0x184
    t0 = lsub<32>(esp, 0x184u, f);
    esp = (uint32_t)(t0);
L_004254f6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004254f7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004254f9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004254fa:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_004254fe:  // mov edi, dword ptr [esi + 0x108]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x108u)));
L_00425504:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425505:  // fld dword ptr [esi + 0x34]
    lpush(x, (long double)F32((uint32_t)(esi + 0x34u)));
L_00425508:  // fmul dword ptr [edi + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x60u)));
L_0042550b:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_0042550e:  // fmul dword ptr [edi + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x5cu)));
L_00425511:  // add edi, 0x3c
    t0 = ladd<32>(edi, 0x3cu, f);
    edi = (uint32_t)(t0);
L_00425514:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00425515:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00425517:  // fld dword ptr [esi + 0x44]
    lpush(x, (long double)F32((uint32_t)(esi + 0x44u)));
L_0042551a:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_0042551d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0042551f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00425523:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_00425526:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_00425529:  // fld dword ptr [esi + 0x48]
    lpush(x, (long double)F32((uint32_t)(esi + 0x48u)));
L_0042552c:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_0042552f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00425531:  // fld dword ptr [edi + 0x24]
    lpush(x, (long double)F32((uint32_t)(edi + 0x24u)));
L_00425534:  // fmul dword ptr [esi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x38u)));
L_00425537:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00425539:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0042553d:  // fld dword ptr [esi + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4cu)));
L_00425540:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_00425543:  // fld dword ptr [esi + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x3cu)));
L_00425546:  // fmul dword ptr [edi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x24u)));
L_00425549:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0042554b:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_0042554e:  // fmul dword ptr [esi + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x2cu)));
L_00425551:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00425553:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00425557:  // fld dword ptr [esi + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4cu)));
L_0042555a:  // fmul dword ptr [edi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x18u)));
L_0042555d:  // fld dword ptr [esi + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x3cu)));
L_00425560:  // fmul dword ptr [edi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x14u)));
L_00425563:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00425565:  // fld dword ptr [edi + 0x10]
    lpush(x, (long double)F32((uint32_t)(edi + 0x10u)));
L_00425568:  // fmul dword ptr [esi + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x2cu)));
L_0042556b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0042556d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00425570:  // fld dword ptr [edi + 0x18]
    lpush(x, (long double)F32((uint32_t)(edi + 0x18u)));
L_00425573:  // fmul dword ptr [esi + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x48u)));
L_00425576:  // fld dword ptr [edi + 0x14]
    lpush(x, (long double)F32((uint32_t)(edi + 0x14u)));
L_00425579:  // fmul dword ptr [esi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x38u)));
L_0042557c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042557d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0042557f:  // fld dword ptr [edi + 0x10]
    lpush(x, (long double)F32((uint32_t)(edi + 0x10u)));
L_00425582:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_00425585:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00425587:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0042558a:  // fld dword ptr [esi + 0x34]
    lpush(x, (long double)F32((uint32_t)(esi + 0x34u)));
L_0042558d:  // fmul dword ptr [edi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x14u)));
L_00425590:  // fld dword ptr [edi + 0x18]
    lpush(x, (long double)F32((uint32_t)(edi + 0x18u)));
L_00425593:  // fmul dword ptr [esi + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x44u)));
L_00425596:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00425597:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_0042559b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0042559d:  // fld dword ptr [edi + 0x10]
    lpush(x, (long double)F32((uint32_t)(edi + 0x10u)));
L_004255a0:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004255a3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004255a5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004255a8:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004255adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004255ad:  // fld dword ptr [esi + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4cu)));
L_004255b0:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_004255b3:  // fld dword ptr [esi + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x3cu)));
L_004255b6:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_004255b9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004255ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004255bb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004255bd:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004255bf:  // fmul dword ptr [esi + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x2cu)));
L_004255c2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004255c4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004255c7:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004255ca:  // fmul dword ptr [esi + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x48u)));
L_004255cd:  // fld dword ptr [edi + 4]
    lpush(x, (long double)F32((uint32_t)(edi + 0x4u)));
L_004255d0:  // fmul dword ptr [esi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x38u)));
L_004255d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004255d4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004255d6:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_004255d8:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004255db:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004255dd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004255e0:  // fld dword ptr [esi + 0x34]
    lpush(x, (long double)F32((uint32_t)(esi + 0x34u)));
L_004255e3:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_004255e6:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004255e9:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_004255eb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004255ec:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004255f0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004255f2:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_004255f5:  // fmul dword ptr [esi + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x44u)));
L_004255f8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004255fa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004255fd:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425602u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425602:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425603:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_0042560a:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042560fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042560f:  // mov ecx, dword ptr [esi + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x108u)));
L_00425615:  // add esi, 0x54
    t0 = ladd<32>(esi, 0x54u, f);
    esi = (uint32_t)(t0);
L_00425618:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0042561c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042561d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0042561f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00425620:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00425624:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00425625:  // call dword ptr [eax + 0x7c]
    t0 = M32((uint32_t)(eax + 0x7cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425628u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425628:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042562a:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042562fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042562f:  // mov eax, dword ptr [0x8a9e44]
    eax = (uint32_t)(M32((uint32_t)(0x8a9e44u)));
L_00425634:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00425638:  // lea edx, [esp + 0x4c]
    edx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_0042563c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042563d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042563e:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_00425645:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00425649:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042564eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042564e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042564f:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00425653:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_00425657:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425658:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00425659:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00425660:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425665u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425665:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425666:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042566a:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042566e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042566f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425670:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_00425677:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042567cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042567c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042567d:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_00425684:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425689u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425689:  // mov esi, dword ptr [esp + 8]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0042568d:  // lea ecx, [esp + 0x11c]
    ecx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_00425694:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00425695:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00425696:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0042569d:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004256a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004256a2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004256a3:  // lea edx, [esp + 0x130]
    edx = (uint32_t)((uint32_t)(esp + 0x130u));
L_004256aa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004256ab:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004256ac:  // lea ecx, [esp + 0xe8]
    ecx = (uint32_t)((uint32_t)(esp + 0xe8u));
L_004256b3:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004256b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004256b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004256b9:  // lea eax, [esp + 0x114]
    eax = (uint32_t)((uint32_t)(esp + 0x114u));
L_004256c0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004256c1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004256c2:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_004256c9:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004256ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004256ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004256cf:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004256d3:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004256d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004256d8:  // lea ecx, [esp + 0x8c]
    ecx = (uint32_t)((uint32_t)(esp + 0x8cu));
L_004256df:  // lea edx, [esp + 0xfc]
    edx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_004256e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004256e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004256e8:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004256ec:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004256f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004256f1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004256f2:  // lea eax, [esp + 0x80]
    eax = (uint32_t)((uint32_t)(esp + 0x80u));
L_004256f9:  // lea ecx, [esp + 0x140]
    ecx = (uint32_t)((uint32_t)(esp + 0x140u));
L_00425700:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425701:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00425702:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00425706:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042570bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042570b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042570c:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00425710:  // lea eax, [esp + 0x154]
    eax = (uint32_t)((uint32_t)(esp + 0x154u));
L_00425717:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00425718:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425719:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0042571d:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425722u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425722:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00425723:  // lea ecx, [esp + 0x168]
    ecx = (uint32_t)((uint32_t)(esp + 0x168u));
L_0042572a:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042572fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042572f:  // lea ecx, [esp + 0x15c]
    ecx = (uint32_t)((uint32_t)(esp + 0x15cu));
L_00425736:  // call 0x425760
    t0 = 0x00425760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042573bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042573b:  // mov eax, dword ptr [esp + 0x190]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_00425742:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00425747:  // lea esi, [esp + 0x15c]
    esi = (uint32_t)((uint32_t)(esp + 0x15cu));
L_0042574e:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00425750:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00425752:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00425753:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00425754:  // add esp, 0x184
    t0 = ladd<32>(esp, 0x184u, f);
    esp = (uint32_t)(t0);
L_0042575a:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004254f0, 004254f0)
