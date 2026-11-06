// lifted from 00402fa0 (vslot66, 1708 bytes, 483 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00402fa0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00402fa0;
L_00402fa0:  // sub esp, 0x84
    t0 = lsub<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_00402fa6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00402fa7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00402fa8:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00402faa:  // mov bl, 4
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
L_00402fac:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00402fad:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00402fae:  // test byte ptr [ebp + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & (ebx & 0xffu), f);
L_00402fb1:  // je 0x402feb
    if (f.zf) goto L_00402feb;
L_00402fb3:  // mov eax, dword ptr [ebp + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_00402fb9:  // lea ecx, [ebp + 0x12c]
    ecx = (uint32_t)((uint32_t)(ebp + 0x12cu));
L_00402fbf:  // fld dword ptr [eax + 0xb8]
    lpush(x, (long double)F32((uint32_t)(eax + 0xb8u)));
L_00402fc5:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_00402fcb:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00402fcf:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00402fd3:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_00402fd7:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00402fdb:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00402fdd:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00402fe1:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00402fe5:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_00402fe8:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00402feb:  // fld dword ptr [ebp + 0x14c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x14cu)));
L_00402ff1:  // fadd dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_00402ff4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00402ff6:  // fstp dword ptr [ebp + 0x7c]
    F32((uint32_t)(ebp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00402ff9:  // fld dword ptr [ebp + 0x150]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x150u)));
L_00402fff:  // fadd dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x80u)));
L_00403005:  // fstp dword ptr [ebp + 0x80]
    F32((uint32_t)(ebp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0040300b:  // fld dword ptr [ebp + 0x154]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x154u)));
L_00403011:  // fadd dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x84u)));
L_00403017:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0040301d:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_00403020:  // call dword ptr [eax + 0xb4]
    t0 = M32((uint32_t)(eax + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403026u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403026:  // fadd dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x84u)));
L_0040302c:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_00403032:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00403038:  // mov eax, dword ptr [ecx + 0x124]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x124u)));
L_0040303e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403040:  // je 0x4030aa
    if (f.zf) goto L_004030aa;
L_00403042:  // mov edx, dword ptr [0x6fbdfc]
    edx = (uint32_t)(M32((uint32_t)(0x6fbdfcu)));
L_00403048:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0040304b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040304d:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00403051:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403054u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403054:  // fmul dword ptr [0x5d8604]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8604u)));
L_0040305a:  // fadd dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x24u)));
L_0040305d:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00403061:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403063:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00403066:  // jne 0x4030aa
    if (!f.zf) goto L_004030aa;
L_00403068:  // fld dword ptr [ebp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x7cu)));
L_0040306b:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_00403071:  // fstp dword ptr [ebp + 0x7c]
    F32((uint32_t)(ebp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00403074:  // fld dword ptr [ebp + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x80u)));
L_0040307a:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_00403080:  // fstp dword ptr [ebp + 0x80]
    F32((uint32_t)(ebp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_00403086:  // fld dword ptr [ebp + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x84u)));
L_0040308c:  // fmul dword ptr [0x5d8600]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8600u)));
L_00403092:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00403098:  // test byte ptr [ebp + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & (ebx & 0xffu), f);
L_0040309b:  // je 0x4030d7
    if (f.zf) goto L_004030d7;
L_0040309d:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004030a0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004030a2:  // call dword ptr [edx + 0x180]
    t0 = M32((uint32_t)(edx + 0x180u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004030a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004030a8:  // jmp 0x4030d7
    goto L_004030d7;
L_004030aa:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004030ad:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004030af:  // call dword ptr [eax + 0x124]
    t0 = M32((uint32_t)(eax + 0x124u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004030b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004030b5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004030b7:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_004030ba:  // fstp dword ptr [ebp + 0x7c]
    F32((uint32_t)(ebp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004030bd:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004030bf:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_004030c5:  // fstp dword ptr [ebp + 0x80]
    F32((uint32_t)(ebp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004030cb:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004030d1:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004030d7:  // fld dword ptr [ebp + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x84u)));
L_004030dd:  // fld dword ptr [ebp + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x80u)));
L_004030e3:  // fld dword ptr [ebp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x7cu)));
L_004030e6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004030e8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004030ea:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004030ec:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004030ee:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004030f0:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004030f2:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004030f4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004030f6:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004030f8:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004030fa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004030fc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004030fe:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00403102:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00403108:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040310a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040310d:  // jne 0x403157
    if (!f.zf) goto L_00403157;
L_0040310f:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00403112:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00403114:  // call dword ptr [edx + 0x1bc]
    t0 = M32((uint32_t)(edx + 0x1bcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040311au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040311a:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00403120:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00403124:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00403126:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403128:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040312b:  // jne 0x403155
    if (!f.zf) goto L_00403155;
L_0040312d:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_00403131:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00403133:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_00403136:  // fstp dword ptr [ebp + 0x7c]
    F32((uint32_t)(ebp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00403139:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040313b:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_00403141:  // fstp dword ptr [ebp + 0x80]
    F32((uint32_t)(ebp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_00403147:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_0040314d:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00403153:  // jmp 0x403157
    goto L_00403157;
L_00403155:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00403157:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00403159:  // call 0x4fa8d0
    t0 = 0x004fa8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040315eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040315e:  // fld dword ptr [ebp + 0x170]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x170u)));
L_00403164:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_0040316a:  // fcom dword ptr [ebp + 0x174]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x174u)));
L_00403170:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403172:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00403175:  // je 0x40317f
    if (f.zf) goto L_0040317f;
L_00403177:  // fstp dword ptr [ebp + 0x170]
    F32((uint32_t)(ebp + 0x170u)) = lf32(ST(0));
    lpop(x);
L_0040317d:  // jmp 0x4031b0
    goto L_004031b0;
L_0040317f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00403181:  // fld dword ptr [ebp + 0x170]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x170u)));
L_00403187:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_0040318d:  // fcom dword ptr [ebp + 0x174]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x174u)));
L_00403193:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403195:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00403198:  // jne 0x4031a2
    if (!f.zf) goto L_004031a2;
L_0040319a:  // fstp dword ptr [ebp + 0x170]
    F32((uint32_t)(ebp + 0x170u)) = lf32(ST(0));
    lpop(x);
L_004031a0:  // jmp 0x4031b0
    goto L_004031b0;
L_004031a2:  // mov eax, dword ptr [ebp + 0x174]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x174u)));
L_004031a8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004031aa:  // mov dword ptr [ebp + 0x170], eax
    M32((uint32_t)(ebp + 0x170u)) = (uint32_t)(eax);
L_004031b0:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004031b3:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004031b5:  // call dword ptr [edx + 0x16c]
    t0 = M32((uint32_t)(edx + 0x16cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004031bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004031bb:  // fmul dword ptr [0x5d85fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85fcu)));
L_004031c1:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_004031c9:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_004031cf:  // fmul dword ptr [ebp + 0x170]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x170u)));
L_004031d5:  // fstp dword ptr [ebp + 0x170]
    F32((uint32_t)(ebp + 0x170u)) = lf32(ST(0));
    lpop(x);
L_004031db:  // mov eax, dword ptr [ebp + 0x25c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x25cu)));
L_004031e1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004031e3:  // mov dword ptr [ebp + 0x264], eax
    M32((uint32_t)(ebp + 0x264u)) = (uint32_t)(eax);
L_004031e9:  // je 0x4031ef
    if (f.zf) goto L_004031ef;
L_004031eb:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004031ed:  // jmp 0x4031f1
    goto L_004031f1;
L_004031ef:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004031f1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004031f3:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004031f5:  // je 0x403356
    if (f.zf) goto L_00403356;
L_004031fb:  // fld dword ptr [ebp + 0x170]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x170u)));
L_00403201:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00403207:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403209:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040320c:  // jne 0x403256
    if (!f.zf) goto L_00403256;
L_0040320e:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00403211:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403213:  // jne 0x403256
    if (!f.zf) goto L_00403256;
L_00403215:  // mov ecx, dword ptr [0x6600e0]
    ecx = (uint32_t)(M32((uint32_t)(0x6600e0u)));
L_0040321b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040321d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040321f:  // mov edx, dword ptr [0x6600e4]
    edx = (uint32_t)(M32((uint32_t)(0x6600e4u)));
L_00403225:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00403228:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0040322a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040322b:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0040322d:  // mov ecx, dword ptr [0x6600e8]
    ecx = (uint32_t)(M32((uint32_t)(0x6600e8u)));
L_00403233:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00403236:  // mov edx, dword ptr [0x6600ec]
    edx = (uint32_t)(M32((uint32_t)(0x6600ecu)));
L_0040323c:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0040323f:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00403242:  // mov eax, dword ptr [ebp + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_00403248:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0040324b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040324c:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00403251:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403256u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403256:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00403259:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_0040325d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040325e:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00403262:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00403266:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00403267:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00403268:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0040326a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040326c:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403272u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403272:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00403275:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00403277:  // je 0x4032f2
    if (f.zf) goto L_004032f2;
L_00403279:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_00403280:  // jne 0x4032cd
    if (!f.zf) goto L_004032cd;
L_00403282:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00403286:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_0040328c:  // mov dword ptr [ecx + 0x80], eax
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(eax);
L_00403292:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00403296:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_00403299:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0040329d:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004032a0:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004032a4:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004032a7:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004032ab:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004032ae:  // mov dword ptr [ecx + 0x40], eax
    M32((uint32_t)(ecx + 0x40u)) = (uint32_t)(eax);
L_004032b1:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004032b5:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004032b8:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004032bc:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004032bf:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004032c3:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004032c6:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004032ca:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004032cb:  // jmp 0x4032ed
    goto L_004032ed;
L_004032cd:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004032cf:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004032d2:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_004032d4:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_004032d6:  // mov esi, dword ptr [edx + 4]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004032d9:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_004032dc:  // mov esi, dword ptr [edx + 8]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004032df:  // mov dword ptr [eax + 8], esi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(esi);
L_004032e2:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004032e5:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004032e8:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004032ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004032ed:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004032f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004032f2:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004032f5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004032f7:  // je 0x403310
    if (f.zf) goto L_00403310;
L_004032f9:  // lea esi, [ebp + 0x3c]
    esi = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_004032fc:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004032ff:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00403304:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00403306:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_00403310:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00403313:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00403315:  // je 0x40332a
    if (f.zf) goto L_0040332a;
L_00403317:  // mov ebx, dword ptr [ebx + 0xa8]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_0040331d:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0040331f:  // je 0x40332a
    if (f.zf) goto L_0040332a;
L_00403321:  // mov ecx, dword ptr [ebp + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x170u)));
L_00403327:  // mov dword ptr [ebx + 0x74], ecx
    M32((uint32_t)(ebx + 0x74u)) = (uint32_t)(ecx);
L_0040332a:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040332e:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0040332f:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00403333:  // mov edx, dword ptr [ebp + 0x264]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x264u)));
L_00403339:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0040333c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040333e:  // mov dword ptr [ebp + 0x264], eax
    M32((uint32_t)(ebp + 0x264u)) = (uint32_t)(eax);
L_00403344:  // je 0x40334a
    if (f.zf) goto L_0040334a;
L_00403346:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00403348:  // jmp 0x40334c
    goto L_0040334c;
L_0040334a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0040334c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040334e:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00403350:  // jne 0x4031fb
    if (!f.zf) goto L_004031fb;
L_00403356:  // mov eax, dword ptr [ebp + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x26cu)));
L_0040335c:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_00403361:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403363:  // mov dword ptr [ebp + 0x274], eax
    M32((uint32_t)(ebp + 0x274u)) = (uint32_t)(eax);
L_00403369:  // je 0x40336f
    if (f.zf) goto L_0040336f;
L_0040336b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0040336d:  // jmp 0x403371
    goto L_00403371;
L_0040336f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00403371:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403373:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00403375:  // je 0x4034ee
    if (f.zf) goto L_004034ee;
L_0040337b:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0040337e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00403380:  // call dword ptr [eax + 0x1d4]
    t0 = M32((uint32_t)(eax + 0x1d4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403386u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403386:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403388:  // je 0x4034c1
    if (f.zf) goto L_004034c1;
L_0040338e:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00403391:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403393:  // jne 0x4033d4
    if (!f.zf) goto L_004033d4;
L_00403395:  // mov edx, dword ptr [0x6600e0]
    edx = (uint32_t)(M32((uint32_t)(0x6600e0u)));
L_0040339b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040339d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040339f:  // mov eax, dword ptr [0x6600e4]
    eax = (uint32_t)(M32((uint32_t)(0x6600e4u)));
L_004033a4:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004033a7:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004033a9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004033aa:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004033ac:  // mov edx, dword ptr [0x6600e8]
    edx = (uint32_t)(M32((uint32_t)(0x6600e8u)));
L_004033b2:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004033b5:  // mov eax, dword ptr [0x6600ec]
    eax = (uint32_t)(M32((uint32_t)(0x6600ecu)));
L_004033ba:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004033bd:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004033c0:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004033c6:  // mov edx, dword ptr [ecx + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_004033c9:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004033ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004033cf:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004033d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004033d4:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004033d7:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004033db:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004033df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004033e0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004033e1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004033e2:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004033e4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004033e6:  // call dword ptr [eax + 0x160]
    t0 = M32((uint32_t)(eax + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004033ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004033ec:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004033ef:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004033f1:  // je 0x4034a0
    if (f.zf) goto L_004034a0;
L_004033f7:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004033fe:  // jne 0x40347b
    if (!f.zf) goto L_0040347b;
L_00403400:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00403404:  // lea eax, [ecx + 0x80]
    eax = (uint32_t)((uint32_t)(ecx + 0x80u));
L_0040340a:  // mov dword ptr [ecx + 0x80], edx
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(edx);
L_00403410:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00403414:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00403417:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0040341b:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0040341e:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00403422:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00403425:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00403429:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_0040342c:  // mov dword ptr [ecx + 0x40], edx
    M32((uint32_t)(ecx + 0x40u)) = (uint32_t)(edx);
L_0040342f:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00403433:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00403436:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0040343a:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0040343d:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00403441:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00403444:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00403448:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0040344a:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0040344c:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00403450:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00403453:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00403457:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0040345a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0040345e:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00403461:  // mov eax, dword ptr [ecx + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_00403467:  // cmp eax, 0xbf800000
    t0 = lsub<32>(eax, 0xbf800000u, f);
L_0040346c:  // je 0x4034a0
    if (f.zf) goto L_004034a0;
L_0040346e:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00403473:  // mov dword ptr [ecx + 0xac], eax
    M32((uint32_t)(ecx + 0xacu)) = (uint32_t)(eax);
L_00403479:  // jmp 0x4034a0
    goto L_004034a0;
L_0040347b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0040347d:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_00403480:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_00403482:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_00403484:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00403487:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_0040348a:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0040348d:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_00403490:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00403493:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00403496:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0040349a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040349b:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004034a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004034a0:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004034a3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004034a5:  // je 0x4034ca
    if (f.zf) goto L_004034ca;
L_004034a7:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004034aa:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004034af:  // lea esi, [esp + 0x34]
    esi = (uint32_t)((uint32_t)(esp + 0x34u));
L_004034b3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004034b5:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004034bf:  // jmp 0x4034ca
    goto L_004034ca;
L_004034c1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004034c3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004034c5:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004034cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004034ca:  // mov eax, dword ptr [ebp + 0x274]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x274u)));
L_004034d0:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004034d1:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004034d4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004034d6:  // mov dword ptr [ebp + 0x274], eax
    M32((uint32_t)(ebp + 0x274u)) = (uint32_t)(eax);
L_004034dc:  // je 0x4034e2
    if (f.zf) goto L_004034e2;
L_004034de:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004034e0:  // jmp 0x4034e4
    goto L_004034e4;
L_004034e2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004034e4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004034e6:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004034e8:  // jne 0x40337b
    if (!f.zf) goto L_0040337b;
L_004034ee:  // fld dword ptr [ebp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xf8u)));
L_004034f4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004034fa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004034fc:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004034ff:  // je 0x403641
    if (f.zf) goto L_00403641;
L_00403505:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_0040350b:  // fld dword ptr [ecx + 0xc0]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xc0u)));
L_00403511:  // fchs 
    ST(0) = -ST(0);
L_00403513:  // fcomp dword ptr [ebp + 0xf8]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xf8u)));
    lpop(x);
L_00403519:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040351b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040351e:  // jne 0x403539
    if (!f.zf) goto L_00403539;
L_00403520:  // mov eax, dword ptr [ecx + 0x11c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x11cu)));
L_00403526:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403528:  // jne 0x403539
    if (!f.zf) goto L_00403539;
L_0040352a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040352c:  // call 0x4fd230
    t0 = 0x004fd230u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403531u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403531:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00403534:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00403536:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403539u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403539:  // mov eax, dword ptr [ebp + 0x258]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x258u)));
L_0040353f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403541:  // je 0x403641
    if (f.zf) goto L_00403641;
L_00403547:  // test byte ptr [ebp + 0x2c], 1
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x1u, f);
L_0040354b:  // jne 0x403641
    if (!f.zf) goto L_00403641;
L_00403551:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00403554:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00403558:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00403559:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0040355d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040355e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040355f:  // push 0x19
    t0 = 0x19u; esp -= 4; M32(esp) = t0;
L_00403561:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00403563:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403569u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403569:  // mov ebp, dword ptr [ebp + 0x254]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x254u)));
L_0040356f:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00403571:  // je 0x403641
    if (f.zf) goto L_00403641;
L_00403577:  // cmp dword ptr [ebp + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x48u)), 0x461c4000u, f);
L_0040357e:  // jne 0x4035f0
    if (!f.zf) goto L_004035f0;
L_00403580:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00403584:  // lea edx, [ebp + 0x80]
    edx = (uint32_t)((uint32_t)(ebp + 0x80u));
L_0040358a:  // mov dword ptr [ebp + 0x80], eax
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(eax);
L_00403590:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00403594:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00403597:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0040359b:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0040359e:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004035a2:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004035a5:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004035a9:  // lea edx, [ebp + 0x40]
    edx = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004035ac:  // mov dword ptr [ebp + 0x40], eax
    M32((uint32_t)(ebp + 0x40u)) = (uint32_t)(eax);
L_004035af:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004035b3:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004035b6:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004035ba:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004035bd:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004035c1:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004035c4:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004035c8:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_004035ca:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004035cc:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004035d0:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004035d3:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004035d7:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004035da:  // mov eax, dword ptr [ebp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_004035e0:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004035e4:  // cmp eax, 0xbf800000
    t0 = lsub<32>(eax, 0xbf800000u, f);
L_004035e9:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004035ec:  // je 0x403641
    if (f.zf) goto L_00403641;
L_004035ee:  // jmp 0x403635
    goto L_00403635;
L_004035f0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004035f2:  // lea eax, [ebp + 0x40]
    eax = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004035f5:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004035f7:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_004035f9:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004035fc:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004035ff:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00403602:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_00403605:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_00403607:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0040360a:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_0040360d:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00403611:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00403613:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00403617:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0040361a:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0040361e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00403621:  // mov eax, dword ptr [ebp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_00403627:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0040362b:  // cmp eax, 0xbf800000
    t0 = lsub<32>(eax, 0xbf800000u, f);
L_00403630:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00403633:  // je 0x403641
    if (f.zf) goto L_00403641;
L_00403635:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040363b:  // mov dword ptr [ebp + 0xac], edx
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(edx);
L_00403641:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00403642:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00403643:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00403644:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00403645:  // add esp, 0x84
    t0 = ladd<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_0040364b:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00402fa0, 00402fa0)
