// lifted from 0051e1b0 (vslot5, 4506 bytes, 1160 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051e1b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051e1b0;
L_0051e1b0:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_0051e1b4:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051e1ba:  // sub esp, 0x164
    t0 = lsub<32>(esp, 0x164u, f);
    esp = (uint32_t)(t0);
L_0051e1c0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051e1c1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051e1c2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051e1c4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051e1c5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051e1c6:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051e1c9:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0051e1cb:  // je 0x51e21f
    if (f.zf) goto L_0051e21f;
L_0051e1cd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e1d2:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051e1d7:  // call 0x452fd0
    t0 = 0x00452fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e1dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e1dc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e1e1:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051e1e6:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e1ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e1eb:  // mov eax, dword ptr [0x89d810]
    eax = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_0051e1f0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e1f2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e1f7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e1f9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051e1fb:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_0051e200:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_0051e205:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051e207:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e208:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_0051e20d:  // push 0x43610000
    t0 = 0x43610000u; esp -= 4; M32(esp) = t0;
L_0051e212:  // push 0x438e8000
    t0 = 0x438e8000u; esp -= 4; M32(esp) = t0;
L_0051e217:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e21cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e21c:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051e21f:  // fld dword ptr [esp + 0x178]
    lpush(x, (long double)F32((uint32_t)(esp + 0x178u)));
L_0051e226:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_0051e22c:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_0051e232:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051e238:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051e23a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051e23d:  // je 0x51e249
    if (f.zf) goto L_0051e249;
L_0051e23f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051e241:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051e247:  // jmp 0x51e25e
    goto L_0051e25e;
L_0051e249:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051e24f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051e251:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051e254:  // jne 0x51e25e
    if (!f.zf) goto L_0051e25e;
L_0051e256:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051e258:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051e25e:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051e264:  // fistp qword ptr [esp + 0x3c]
    M64((uint32_t)(esp + 0x3cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051e268:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0051e26c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051e26e:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0051e272:  // jge 0x51e27e
    if ((f.sf == f.of)) goto L_0051e27e;
L_0051e274:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_0051e27c:  // jmp 0x51e28e
    goto L_0051e28e;
L_0051e27e:  // cmp ecx, 0xff
    t0 = lsub<32>(ecx, 0xffu, f);
L_0051e284:  // jle 0x51e292
    if ((f.zf || f.sf != f.of)) goto L_0051e292;
L_0051e286:  // mov dword ptr [esp + 0x38], 0xff
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0xffu);
L_0051e28e:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0051e292:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0051e294:  // mov esi, dword ptr [ebp + 8]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0051e297:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_0051e29a:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0051e29c:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0051e29e:  // shl edi, 0x10
    t0 = lshl<32>(edi, 0x10u, f);
    edi = (uint32_t)(t0);
L_0051e2a1:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0051e2a3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e2a5:  // not eax
    eax = (uint32_t)(~eax);
L_0051e2a7:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0051e2ac:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e2b1:  // xor eax, edi
    t0 = llog<32>(eax ^ edi, f);
    eax = (uint32_t)(t0);
L_0051e2b3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e2b5:  // neg esi
    t0 = lneg<32>(esi, f);
    esi = (uint32_t)(t0);
L_0051e2b7:  // sbb esi, esi
    t0 = lsbb<32>(esi, esi, f);
    esi = (uint32_t)(t0);
L_0051e2b9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051e2bb:  // shl ebx, 6
    t0 = lshl<32>(ebx, 0x6u, f);
    ebx = (uint32_t)(t0);
L_0051e2be:  // sub ebx, ecx
    t0 = lsub<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0051e2c0:  // mov dword ptr [esp + 0x5c], eax
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(eax);
L_0051e2c4:  // mov eax, dword ptr [0x89d8d0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_0051e2c9:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_0051e2ce:  // shl ebx, 0x10
    t0 = lshl<32>(ebx, 0x10u, f);
    ebx = (uint32_t)(t0);
L_0051e2d1:  // and ebx, 0xff000000
    t0 = llog<32>(ebx & 0xff000000u, f);
    ebx = (uint32_t)(t0);
L_0051e2d7:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_0051e2dc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051e2dd:  // and esi, 0x3c7f9f
    t0 = llog<32>(esi & 0x3c7f9fu, f);
    esi = (uint32_t)(t0);
L_0051e2e3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e2e4:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_0051e2e9:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051e2ee:  // add esi, 0xff037fa0
    t0 = ladd<32>(esi, 0xff037fa0u, f);
    esi = (uint32_t)(t0);
L_0051e2f4:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e2f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e2f9:  // fadd dword ptr [0x5db38c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db38cu)));
L_0051e2ff:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e300:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051e305:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051e308:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e30du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e30d:  // fadd dword ptr [0x5e4a20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4a20u)));
L_0051e313:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e314:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051e317:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e31cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e31c:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0051e320:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0051e322:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051e325:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0051e327:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0051e32c:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_0051e332:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0051e335:  // imul edx, ecx
    t0 = limul32(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0051e338:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e33a:  // xor edx, esi
    t0 = llog<32>(edx ^ esi, f);
    edx = (uint32_t)(t0);
L_0051e33c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e341:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e343:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0051e349:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051e34b:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e350:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0051e352:  // mov eax, dword ptr [0x89d8d4]
    eax = (uint32_t)(M32((uint32_t)(0x89d8d4u)));
L_0051e357:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e35c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051e35d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e35e:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_0051e363:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_0051e368:  // push 0x43220000
    t0 = 0x43220000u; esp -= 4; M32(esp) = t0;
L_0051e36d:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e372u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e372:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0051e379:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0051e37c:  // mov edx, dword ptr [0x89d8d0]
    edx = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_0051e382:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e384:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e389:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e38b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051e38d:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e392:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e397:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e398:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051e399:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_0051e39e:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_0051e3a3:  // push 0x43220000
    t0 = 0x43220000u; esp -= 4; M32(esp) = t0;
L_0051e3a8:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e3adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e3ad:  // mov esi, dword ptr [ebp + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0051e3b0:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051e3b3:  // mov eax, dword ptr [0x89d8d0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_0051e3b8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e3ba:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e3bf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e3c1:  // neg esi
    t0 = lneg<32>(esi, f);
    esi = (uint32_t)(t0);
L_0051e3c3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051e3c5:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_0051e3ca:  // sbb esi, esi
    t0 = lsbb<32>(esi, esi, f);
    esi = (uint32_t)(t0);
L_0051e3cc:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_0051e3d1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051e3d2:  // and esi, 0x3c7f9f
    t0 = llog<32>(esi & 0x3c7f9fu, f);
    esi = (uint32_t)(t0);
L_0051e3d8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e3d9:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_0051e3de:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051e3e3:  // add esi, 0xff037fa0
    t0 = ladd<32>(esi, 0xff037fa0u, f);
    esi = (uint32_t)(t0);
L_0051e3e9:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e3eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e3ee:  // fadd dword ptr [0x5db38c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db38cu)));
L_0051e3f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e3f5:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051e3fa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051e3fd:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e402u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e402:  // fadd dword ptr [0x5e4a1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4a1cu)));
L_0051e408:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e409:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051e40c:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e411u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e411:  // mov ebx, dword ptr [esp + 0x64]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0051e415:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0051e417:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051e41a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051e41c:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0051e421:  // and ecx, 0xffff0000
    t0 = llog<32>(ecx & 0xffff0000u, f);
    ecx = (uint32_t)(t0);
L_0051e427:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0051e42a:  // imul ecx, ebx
    t0 = limul32(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_0051e42d:  // mov edx, dword ptr [0x89d8d4]
    edx = (uint32_t)(M32((uint32_t)(0x89d8d4u)));
L_0051e433:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e435:  // xor ecx, esi
    t0 = llog<32>(ecx ^ esi, f);
    ecx = (uint32_t)(t0);
L_0051e437:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e43c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e43e:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0051e444:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051e446:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e44b:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_0051e44d:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e452:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e453:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051e454:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_0051e459:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_0051e45e:  // push 0x43e70000
    t0 = 0x43e70000u; esp -= 4; M32(esp) = t0;
L_0051e463:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e468u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e468:  // mov eax, dword ptr [esp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0051e46f:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0051e472:  // mov ecx, dword ptr [0x89d8d0]
    ecx = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_0051e478:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e47a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e47f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e481:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051e483:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e488:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051e48d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e48e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e48f:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_0051e494:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_0051e499:  // push 0x43e70000
    t0 = 0x43e70000u; esp -= 4; M32(esp) = t0;
L_0051e49e:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e4a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e4a3:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051e4a6:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0051e4aa:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0051e4af:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051e4b0:  // push 0x700283
    t0 = 0x700283u; esp -= 4; M32(esp) = t0;
L_0051e4b5:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e4bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e4ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e4bb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e4bd:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051e4c2:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e4c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e4c7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051e4c9:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e4ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e4ce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e4d0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e4d2:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051e4d7:  // or edi, 0xffffff
    t0 = llog<32>(edi | 0xffffffu, f);
    edi = (uint32_t)(t0);
L_0051e4dd:  // push 0x700283
    t0 = 0x700283u; esp -= 4; M32(esp) = t0;
L_0051e4e2:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0051e4e7:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e4ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e4ec:  // fild dword ptr [esp + 0x5c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x5cu)));
L_0051e4f0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e4f1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051e4f2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e4f7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e4fc:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051e502:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051e507:  // push 0x42fa0000
    t0 = 0x42fa0000u; esp -= 4; M32(esp) = t0;
L_0051e50c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e50d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051e512:  // fsubr dword ptr [0x5db390]
    ST(0) = ((long double)F32((uint32_t)(0x5db390u))) - (ST(0));
L_0051e518:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051e51b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e51d:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e522u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e522:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051e524:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e529u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e529:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_0051e52d:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0051e532:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e533:  // push 0x70caa4
    t0 = 0x70caa4u; esp -= 4; M32(esp) = t0;
L_0051e538:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e53du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e53d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e53e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e540:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051e545:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e54au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e54a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051e54c:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e551u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e551:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e553:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e555:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051e55a:  // push 0x70caa4
    t0 = 0x70caa4u; esp -= 4; M32(esp) = t0;
L_0051e55f:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0051e564:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e569u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e569:  // fild dword ptr [esp + 0x5c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x5cu)));
L_0051e56d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051e56e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051e56f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e574:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e579:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051e57f:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051e584:  // push 0x42fa0000
    t0 = 0x42fa0000u; esp -= 4; M32(esp) = t0;
L_0051e589:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e58a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051e58f:  // fsubr dword ptr [0x5db5c4]
    ST(0) = ((long double)F32((uint32_t)(0x5db5c4u))) - (ST(0));
L_0051e595:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051e598:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e59a:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e59fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e59f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051e5a1:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e5a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e5a6:  // cmp byte ptr [ebp + 5], 0xff
    t0 = lsub<8>(M8((uint32_t)(ebp + 0x5u)), 0xffu, f);
L_0051e5aa:  // jne 0x51e63b
    if (!f.zf) goto L_0051e63b;
L_0051e5b0:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0051e5b6:  // fistp qword ptr [esp + 0x3c]
    M64((uint32_t)(esp + 0x3cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051e5ba:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0051e5be:  // and ecx, 0x8000003f
    t0 = llog<32>(ecx & 0x8000003fu, f);
    ecx = (uint32_t)(t0);
L_0051e5c4:  // jns 0x51e5cb
    if (!f.sf) goto L_0051e5cb;
L_0051e5c6:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0051e5c7:  // or ecx, 0xffffffc0
    t0 = llog<32>(ecx | 0xffffffc0u, f);
    ecx = (uint32_t)(t0);
L_0051e5ca:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0051e5cb:  // cmp ecx, 0x32
    t0 = lsub<32>(ecx, 0x32u, f);
L_0051e5ce:  // jge 0x51e63b
    if ((f.sf == f.of)) goto L_0051e63b;
L_0051e5d0:  // push 0x75
    t0 = 0x75u; esp -= 4; M32(esp) = t0;
L_0051e5d2:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e5d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e5d7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051e5da:  // lea edx, [esp + 0x3c]
    edx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0051e5de:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0051e5e0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051e5e5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051e5e6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051e5e7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051e5e9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e5eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e5ee:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051e5f0:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e5f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e5f5:  // fild dword ptr [esp + 0x3c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x3cu)));
L_0051e5f9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e5fb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e5fd:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051e602:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051e603:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051e609:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051e60a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e60f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051e614:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051e619:  // fsubr dword ptr [0x5db5c4]
    ST(0) = ((long double)F32((uint32_t)(0x5db5c4u))) - (ST(0));
L_0051e61f:  // push 0x437e0000
    t0 = 0x437e0000u; esp -= 4; M32(esp) = t0;
L_0051e624:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051e625:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051e62a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051e62d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051e62f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e634u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e634:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051e636:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e63bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e63b:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0051e642:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0051e649:  // call 0x450400
    t0 = 0x00450400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e64eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e64e:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051e650:  // lea ecx, [esp + 0x164]
    ecx = (uint32_t)((uint32_t)(esp + 0x164u));
L_0051e657:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051e658:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051e659:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051e65a:  // mov dword ptr [esp + 0x124], esi
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(esi);
L_0051e661:  // mov dword ptr [esp + 0x138], esi
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(esi);
L_0051e668:  // mov dword ptr [esp + 0x13c], esi
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(esi);
L_0051e66f:  // mov dword ptr [esp + 0x140], esi
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(esi);
L_0051e676:  // mov dword ptr [esp + 0x148], esi
    M32((uint32_t)(esp + 0x148u)) = (uint32_t)(esi);
L_0051e67d:  // mov dword ptr [esp + 0x14c], esi
    M32((uint32_t)(esp + 0x14cu)) = (uint32_t)(esi);
L_0051e684:  // mov dword ptr [esp + 0x150], esi
    M32((uint32_t)(esp + 0x150u)) = (uint32_t)(esi);
L_0051e68b:  // mov dword ptr [esp + 0x154], esi
    M32((uint32_t)(esp + 0x154u)) = (uint32_t)(esi);
L_0051e692:  // mov dword ptr [esp + 0x128], esi
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(esi);
L_0051e699:  // mov dword ptr [esp + 0x12c], esi
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(esi);
L_0051e6a0:  // mov dword ptr [esp + 0x130], esi
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(esi);
L_0051e6a7:  // mov dword ptr [esp + 0x158], esi
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(esi);
L_0051e6ae:  // mov dword ptr [esp + 0x15c], esi
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(esi);
L_0051e6b5:  // mov dword ptr [esp + 0x160], esi
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(esi);
L_0051e6bc:  // mov dword ptr [esp + 0x164], esi
    M32((uint32_t)(esp + 0x164u)) = (uint32_t)(esi);
L_0051e6c3:  // mov dword ptr [esp + 0x168], esi
    M32((uint32_t)(esp + 0x168u)) = (uint32_t)(esi);
L_0051e6ca:  // mov dword ptr [esp + 0x16c], esi
    M32((uint32_t)(esp + 0x16cu)) = (uint32_t)(esi);
L_0051e6d1:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e6d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e6d6:  // fld qword ptr [0x5db378]
    lpush(x, (long double)F64((uint32_t)(0x5db378u)));
L_0051e6dc:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0051e6de:  // mov dword ptr [esp + 0x28], 0xc59c4000
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xc59c4000u);
L_0051e6e6:  // mov dword ptr [esp + 0x2c], 0x459c4000
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x459c4000u);
L_0051e6ee:  // mov dword ptr [esp + 0x30], 0x44bb8000
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x44bb8000u);
L_0051e6f6:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051e6fc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051e6fe:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051e701:  // jne 0x51e72d
    if (!f.zf) goto L_0051e72d;
L_0051e703:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0051e709:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051e70b:  // fmul dword ptr [0x5db370]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db370u)));
L_0051e711:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0051e715:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051e717:  // fmul dword ptr [0x5db36c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db36cu)));
L_0051e71d:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0051e721:  // fmul dword ptr [0x5db368]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db368u)));
L_0051e727:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0051e72b:  // jmp 0x51e72f
    goto L_0051e72f;
L_0051e72d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051e72f:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0051e733:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_0051e738:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_0051e73d:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_0051e742:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0051e746:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051e749:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0051e74b:  // mov dword ptr [0x9c68a8], esi
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(esi);
L_0051e751:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051e752:  // mov byte ptr [0x9c690c], 1
    M8((uint32_t)(0x9c690cu)) = (uint8_t)(0x1u);
L_0051e759:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0051e75b:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0051e75f:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0051e762:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0051e766:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0051e769:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_0051e770:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0051e773:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e778u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e778:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0051e77c:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_0051e781:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_0051e786:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_0051e78b:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0051e78f:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_0051e794:  // lea esi, [esp + 0x124]
    esi = (uint32_t)((uint32_t)(esp + 0x124u));
L_0051e79b:  // mov edi, 0x9c65c0
    edi = (uint32_t)(0x9c65c0u);
L_0051e7a0:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051e7a3:  // fchs 
    ST(0) = -ST(0);
L_0051e7a5:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0051e7a9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0051e7ab:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0051e7af:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0051e7b1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e7b3:  // mov byte ptr [0x9c68fc], 1
    M8((uint32_t)(0x9c68fcu)) = (uint8_t)(0x1u);
L_0051e7ba:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0051e7bc:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0051e7c0:  // mov byte ptr [0x9c68a0], 1
    M8((uint32_t)(0x9c68a0u)) = (uint8_t)(0x1u);
L_0051e7c7:  // mov byte ptr [0x9c6904], 1
    M8((uint32_t)(0x9c6904u)) = (uint8_t)(0x1u);
L_0051e7ce:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0051e7d1:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0051e7d5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0051e7d8:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_0051e7df:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0051e7e2:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e7e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e7e7:  // fld qword ptr [0x5db360]
    lpush(x, (long double)F64((uint32_t)(0x5db360u)));
L_0051e7ed:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0051e7ef:  // mov dword ptr [esp + 0x40], 0x447a0000
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x447a0000u);
L_0051e7f7:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0051e7fb:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0051e7ff:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_0051e804:  // lea esi, [esp + 0x118]
    esi = (uint32_t)((uint32_t)(esp + 0x118u));
L_0051e80b:  // mov edi, 0x9c661c
    edi = (uint32_t)(0x9c661cu);
L_0051e810:  // mov dword ptr [esp + 0x44], 0x43480000
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x43480000u);
L_0051e818:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0051e81c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0051e81e:  // mov dword ptr [esp + 0x3c], 0
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x0u);
L_0051e826:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0051e82a:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_0051e82e:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0051e832:  // mov byte ptr [0x9c68fd], 1
    M8((uint32_t)(0x9c68fdu)) = (uint8_t)(0x1u);
L_0051e839:  // mov byte ptr [0x9c68a1], 1
    M8((uint32_t)(0x9c68a1u)) = (uint8_t)(0x1u);
L_0051e840:  // mov byte ptr [0x9c6905], 1
    M8((uint32_t)(0x9c6905u)) = (uint8_t)(0x1u);
L_0051e847:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051e84d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051e84f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051e852:  // jne 0x51e87e
    if (!f.zf) goto L_0051e87e;
L_0051e854:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0051e85a:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_0051e862:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0051e866:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0051e86a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051e86c:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0051e870:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0051e874:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051e876:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0051e87a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051e87c:  // jmp 0x51e880
    goto L_0051e880;
L_0051e87e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051e880:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_0051e885:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_0051e88a:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_0051e88f:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051e892:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0051e894:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e896:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0051e898:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0051e89c:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_0051e89f:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0051e8a3:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0051e8a6:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_0051e8ad:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0051e8b0:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e8b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e8b5:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_0051e8ba:  // lea esi, [esp + 0x118]
    esi = (uint32_t)((uint32_t)(esp + 0x118u));
L_0051e8c1:  // mov edi, 0x9c6678
    edi = (uint32_t)(0x9c6678u);
L_0051e8c6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e8c8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0051e8ca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051e8cc:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0051e8d1:  // mov byte ptr [0x9c68fe], 1
    M8((uint32_t)(0x9c68feu)) = (uint8_t)(0x1u);
L_0051e8d8:  // mov byte ptr [0x9c68a2], 1
    M8((uint32_t)(0x9c68a2u)) = (uint8_t)(0x1u);
L_0051e8df:  // mov byte ptr [0x9c6906], 1
    M8((uint32_t)(0x9c6906u)) = (uint8_t)(0x1u);
L_0051e8e6:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_0051e8ed:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0051e8f4:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051e8f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051e8f9:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051e8fb:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0051e8ff:  // fld dword ptr [esp + 0x178]
    lpush(x, (long double)F32((uint32_t)(esp + 0x178u)));
L_0051e906:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051e90c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051e90e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051e911:  // je 0x51ecb3
    if (f.zf) goto L_0051ecb3;
L_0051e917:  // cmp esi, 1
    t0 = lsub<32>(esi, 0x1u, f);
L_0051e91a:  // jne 0x51e927
    if (!f.zf) goto L_0051e927;
L_0051e91c:  // mov al, byte ptr [ebp + 5]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x5u))) & 0xffu);
L_0051e91f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051e921:  // jl 0x51ecb3
    if ((f.sf != f.of)) goto L_0051ecb3;
L_0051e927:  // mov eax, dword ptr [ebp + esi*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x8u)));
L_0051e92b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051e92d:  // jne 0x51ecb3
    if (!f.zf) goto L_0051ecb3;
L_0051e933:  // fld dword ptr [0x5e4a18]
    lpush(x, (long double)F32((uint32_t)(0x5e4a18u)));
L_0051e939:  // cmp esi, 1
    t0 = lsub<32>(esi, 0x1u, f);
L_0051e93c:  // jne 0x51e946
    if (!f.zf) goto L_0051e946;
L_0051e93e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051e940:  // fld dword ptr [0x5e4a14]
    lpush(x, (long double)F32((uint32_t)(0x5e4a14u)));
L_0051e946:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051e948:  // fcos 
    ST(0) = lfcos(ST(0));
L_0051e94a:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_0051e952:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0051e956:  // fsin 
    ST(0) = lfsin(ST(0));
L_0051e958:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0051e95e:  // fcos 
    ST(0) = lfcos(ST(0));
L_0051e960:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0051e964:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0051e96a:  // fsin 
    ST(0) = lfsin(ST(0));
L_0051e96c:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0051e970:  // fld qword ptr [0x5db380]
    lpush(x, (long double)F64((uint32_t)(0x5db380u)));
L_0051e976:  // fcos 
    ST(0) = lfcos(ST(0));
L_0051e978:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0051e97c:  // fld qword ptr [0x5db380]
    lpush(x, (long double)F64((uint32_t)(0x5db380u)));
L_0051e982:  // fsin 
    ST(0) = lfsin(ST(0));
L_0051e984:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051e986:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0051e98a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051e98e:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051e992:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0051e994:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0051e996:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0051e998:  // fstp dword ptr [0x89d764]
    F32((uint32_t)(0x89d764u)) = lf32(ST(0));
    lpop(x);
L_0051e99e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0051e9a2:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0051e9a4:  // fchs 
    ST(0) = -ST(0);
L_0051e9a6:  // fstp dword ptr [0x89d768]
    F32((uint32_t)(0x89d768u)) = lf32(ST(0));
    lpop(x);
L_0051e9ac:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0051e9ae:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0051e9b2:  // fst dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
L_0051e9b6:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0051e9b8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0051e9bc:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051e9c0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0051e9c2:  // fstp dword ptr [0x89d76c]
    F32((uint32_t)(0x89d76cu)) = lf32(ST(0));
    lpop(x);
L_0051e9c8:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051e9cc:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051e9d0:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0051e9d2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0051e9d4:  // fstp dword ptr [0x89d774]
    F32((uint32_t)(0x89d774u)) = lf32(ST(0));
    lpop(x);
L_0051e9da:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0051e9de:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051e9e2:  // fstp dword ptr [0x89d778]
    F32((uint32_t)(0x89d778u)) = lf32(ST(0));
    lpop(x);
L_0051e9e8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0051e9ec:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0051e9ee:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0051e9f2:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0051e9f6:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0051e9f8:  // fstp dword ptr [0x89d77c]
    F32((uint32_t)(0x89d77cu)) = lf32(ST(0));
    lpop(x);
L_0051e9fe:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0051ea02:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0051ea06:  // fchs 
    ST(0) = -ST(0);
L_0051ea08:  // fstp dword ptr [0x89d784]
    F32((uint32_t)(0x89d784u)) = lf32(ST(0));
    lpop(x);
L_0051ea0e:  // fstp dword ptr [0x89d788]
    F32((uint32_t)(0x89d788u)) = lf32(ST(0));
    lpop(x);
L_0051ea14:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051ea16:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0051ea1a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0051ea1e:  // fstp dword ptr [0x89d78c]
    F32((uint32_t)(0x89d78cu)) = lf32(ST(0));
    lpop(x);
L_0051ea24:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0051ea28:  // mov dword ptr [esp + 0x30], 0xbfb33333
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0xbfb33333u);
L_0051ea30:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051ea34:  // mov dword ptr [esp + 0x2c], 0xc0e00000
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0xc0e00000u);
L_0051ea3c:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051ea40:  // mov dword ptr [0x89d794], edx
    M32((uint32_t)(0x89d794u)) = (uint32_t)(edx);
L_0051ea46:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0051ea4a:  // mov dword ptr [0x89d79c], ecx
    M32((uint32_t)(0x89d79cu)) = (uint32_t)(ecx);
L_0051ea50:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051ea55:  // mov dword ptr [0x89d798], eax
    M32((uint32_t)(0x89d798u)) = (uint32_t)(eax);
L_0051ea5a:  // mov dword ptr [0x89d7a0], edx
    M32((uint32_t)(0x89d7a0u)) = (uint32_t)(edx);
L_0051ea60:  // call 0x4685a0
    t0 = 0x004685a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ea65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ea65:  // cmp esi, 1
    t0 = lsub<32>(esi, 0x1u, f);
L_0051ea68:  // jne 0x51eb9a
    if (!f.zf) goto L_0051eb9a;
L_0051ea6e:  // mov eax, dword ptr [0x8a180c]
    eax = (uint32_t)(M32((uint32_t)(0x8a180cu)));
L_0051ea73:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051ea75:  // jle 0x51eb9a
    if ((f.zf || f.sf != f.of)) goto L_0051eb9a;
L_0051ea7b:  // mov eax, dword ptr [ebp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0051ea7e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051ea80:  // je 0x51ecb3
    if (f.zf) goto L_0051ecb3;
L_0051ea86:  // fld dword ptr [ebp + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x30u)));
L_0051ea89:  // fchs 
    ST(0) = -ST(0);
L_0051ea8b:  // fst dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
L_0051ea8f:  // fcos 
    ST(0) = lfcos(ST(0));
L_0051ea91:  // mov dword ptr [esp + 0x90], 0
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(0x0u);
L_0051ea9c:  // mov dword ptr [esp + 0xa0], 0
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0x0u);
L_0051eaa7:  // mov dword ptr [esp + 0x58], 0
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x0u);
L_0051eaaf:  // mov dword ptr [esp + 0x5c], 0
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(0x0u);
L_0051eab7:  // mov dword ptr [esp + 0x60], 0x3f800000
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x3f800000u);
L_0051eabf:  // lea edi, [eax + 0x14]
    edi = (uint32_t)((uint32_t)(eax + 0x14u));
L_0051eac2:  // lea esi, [esp + 0xb8]
    esi = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0051eac9:  // fst dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
L_0051ead0:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0051ead4:  // fsin 
    ST(0) = lfsin(ST(0));
L_0051ead6:  // mov ecx, dword ptr [esp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_0051eadd:  // mov dword ptr [esp + 0xb8], ecx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(ecx);
L_0051eae4:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0051eaeb:  // mov dword ptr [esp + 0xc0], ecx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(ecx);
L_0051eaf2:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051eaf4:  // fchs 
    ST(0) = -ST(0);
L_0051eaf6:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_0051eafd:  // mov edx, dword ptr [esp + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0051eb04:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_0051eb0b:  // mov ecx, dword ptr [esp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_0051eb12:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_0051eb19:  // mov edx, dword ptr [esp + 0x94]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_0051eb20:  // mov dword ptr [esp + 0xc8], ecx
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(ecx);
L_0051eb27:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_0051eb2e:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_0051eb35:  // mov dword ptr [esp + 0xc4], edx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(edx);
L_0051eb3c:  // mov edx, dword ptr [esp + 0x9c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_0051eb43:  // mov dword ptr [esp + 0xd0], ecx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(ecx);
L_0051eb4a:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0051eb4e:  // mov dword ptr [esp + 0xcc], edx
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(edx);
L_0051eb55:  // mov edx, dword ptr [esp + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0051eb5c:  // mov dword ptr [esp + 0xd8], ecx
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(ecx);
L_0051eb63:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0051eb67:  // mov dword ptr [esp + 0xd4], edx
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(edx);
L_0051eb6e:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0051eb72:  // mov dword ptr [esp + 0xe0], ecx
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(ecx);
L_0051eb79:  // mov dword ptr [esp + 0xdc], edx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(edx);
L_0051eb80:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0051eb84:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0051eb89:  // mov dword ptr [esp + 0xe4], edx
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(edx);
L_0051eb90:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0051eb92:  // mov ecx, dword ptr [ebp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0051eb95:  // jmp 0x51ecaa
    goto L_0051ecaa;
L_0051eb9a:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0051eb9d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051eb9f:  // je 0x51ecb3
    if (f.zf) goto L_0051ecb3;
L_0051eba5:  // fld dword ptr [ebp + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x30u)));
L_0051eba8:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051ebaa:  // je 0x51ebae
    if (f.zf) goto L_0051ebae;
L_0051ebac:  // fchs 
    ST(0) = -ST(0);
L_0051ebae:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051ebb0:  // fcos 
    ST(0) = lfcos(ST(0));
L_0051ebb2:  // mov dword ptr [esp + 0xb0], 0
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(0x0u);
L_0051ebbd:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_0051ebc5:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_0051ebcd:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_0051ebd5:  // mov dword ptr [esp + 0x80], 0x3f800000
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x3f800000u);
L_0051ebe0:  // lea edi, [eax + 0x14]
    edi = (uint32_t)((uint32_t)(eax + 0x14u));
L_0051ebe3:  // lea esi, [esp + 0xe8]
    esi = (uint32_t)((uint32_t)(esp + 0xe8u));
L_0051ebea:  // fst dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
L_0051ebee:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_0051ebf5:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_0051ebfc:  // fsin 
    ST(0) = lfsin(ST(0));
L_0051ebfe:  // mov dword ptr [esp + 0xe8], ecx
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(ecx);
L_0051ec05:  // mov ecx, dword ptr [esp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_0051ec0c:  // mov dword ptr [esp + 0xf0], ecx
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(ecx);
L_0051ec13:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0051ec17:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_0051ec1b:  // mov dword ptr [esp + 0xfc], ecx
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(ecx);
L_0051ec22:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0051ec26:  // mov dword ptr [esp + 0x104], ecx
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(ecx);
L_0051ec2d:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_0051ec31:  // mov dword ptr [esp + 0x10c], ecx
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(ecx);
L_0051ec38:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_0051ec3f:  // mov dword ptr [esp + 0x114], ecx
    M32((uint32_t)(esp + 0x114u)) = (uint32_t)(ecx);
L_0051ec46:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0051ec4b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051ec4d:  // fchs 
    ST(0) = -ST(0);
L_0051ec4f:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_0051ec56:  // mov edx, dword ptr [esp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0051ec5d:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_0051ec61:  // mov dword ptr [esp + 0xec], edx
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(edx);
L_0051ec68:  // mov edx, dword ptr [esp + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0051ec6f:  // mov dword ptr [esp + 0xf4], edx
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(edx);
L_0051ec76:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0051ec7a:  // mov dword ptr [esp + 0xf8], edx
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(edx);
L_0051ec81:  // mov edx, dword ptr [esp + 0x70]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0051ec85:  // mov dword ptr [esp + 0x100], edx
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(edx);
L_0051ec8c:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0051ec90:  // mov dword ptr [esp + 0x108], edx
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(edx);
L_0051ec97:  // mov edx, dword ptr [esp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_0051ec9e:  // mov dword ptr [esp + 0x110], edx
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(edx);
L_0051eca5:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0051eca7:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0051ecaa:  // call 0x46bc20
    t0 = 0x0046bc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ecafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ecaf:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051ecb3:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0051ecb4:  // cmp esi, 2
    t0 = lsub<32>(esi, 0x2u, f);
L_0051ecb7:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0051ecbb:  // jl 0x51e8ff
    if ((f.sf != f.of)) goto L_0051e8ff;
L_0051ecc1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ecc3:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0051ecc5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051ecca:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_0051ecd1:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0051ecd8:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ecddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ecdd:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0051ecdf:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0051ece1:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051ece6:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ecebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051eceb:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0051eced:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0051ecef:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051ecf4:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ecf9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ecf9:  // call 0x450440
    t0 = 0x00450440u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ecfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ecfe:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051ed00:  // cmp byte ptr [esi + ebp + 4], 0xff
    t0 = lsub<8>(M8((uint32_t)(esi + ebp + 0x4u)), 0xffu, f);
L_0051ed05:  // jle 0x51f2d2
    if ((f.zf || f.sf != f.of)) goto L_0051f2d2;
L_0051ed0b:  // mov eax, dword ptr [ebp + esi*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x8u)));
L_0051ed0f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051ed11:  // jne 0x51f2d2
    if (!f.zf) goto L_0051f2d2;
L_0051ed17:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051ed19:  // jne 0x51ed23
    if (!f.zf) goto L_0051ed23;
L_0051ed1b:  // fld dword ptr [0x5db390]
    lpush(x, (long double)F32((uint32_t)(0x5db390u)));
L_0051ed21:  // jmp 0x51ed29
    goto L_0051ed29;
L_0051ed23:  // fld dword ptr [0x5db5c4]
    lpush(x, (long double)F32((uint32_t)(0x5db5c4u)));
L_0051ed29:  // fst dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
L_0051ed2d:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0051ed33:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051ed37:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051ed3b:  // and edx, 0x8000003f
    t0 = llog<32>(edx & 0x8000003fu, f);
    edx = (uint32_t)(t0);
L_0051ed41:  // jns 0x51ed48
    if (!f.sf) goto L_0051ed48;
L_0051ed43:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0051ed44:  // or edx, 0xffffffc0
    t0 = llog<32>(edx | 0xffffffc0u, f);
    edx = (uint32_t)(t0);
L_0051ed47:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0051ed48:  // cmp edx, 0x32
    t0 = lsub<32>(edx, 0x32u, f);
L_0051ed4b:  // jl 0x51ed62
    if ((f.sf != f.of)) goto L_0051ed62;
L_0051ed4d:  // fld dword ptr [ebp + esi*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + esi * 4u + 0x20u)));
L_0051ed51:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0051ed57:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051ed59:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051ed5c:  // jne 0x51ee36
    if (!f.zf) goto L_0051ee36;
L_0051ed62:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0051ed66:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_0051ed6b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0051ed6f:  // push 0xbfc90fdb
    t0 = 0xbfc90fdbu; esp -= 4; M32(esp) = t0;
L_0051ed74:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051ed78:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ed7d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051ed7f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051ed81:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ed86:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051ed8b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051ed8c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051ed8d:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051ed92:  // push 0x432b0000
    t0 = 0x432b0000u; esp -= 4; M32(esp) = t0;
L_0051ed97:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051ed98:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ed9du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ed9d:  // fld dword ptr [ebp + esi*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + esi * 4u + 0x20u)));
L_0051eda1:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051eda7:  // push 0xbfc90fdb
    t0 = 0xbfc90fdbu; esp -= 4; M32(esp) = t0;
L_0051edac:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051edb1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051edb3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051edb5:  // fistp qword ptr [esp + 0x5c]
    M64((uint32_t)(esp + 0x5cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051edb9:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0051edbd:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051edbf:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051edc2:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0051edc4:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0051edc7:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051edcd:  // fsub dword ptr [ebp + esi*4 + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + esi * 4u + 0x20u)));
L_0051edd1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051edd3:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0051edd5:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0051eddb:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0051ede1:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_0051ede3:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051ede5:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_0051ede9:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0051eded:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051edf0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051edf1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051edf2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0051edf4:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0051edf9:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_0051edff:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0051ee02:  // imul edx, ebx
    t0 = limul32(edx, ebx, f);
    edx = (uint32_t)(t0);
L_0051ee05:  // xor edx, ecx
    t0 = llog<32>(edx ^ ecx, f);
    edx = (uint32_t)(t0);
L_0051ee07:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0051ee0b:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0051ee11:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0051ee13:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_0051ee18:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051ee19:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051ee1a:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051ee1f:  // push 0x432b0000
    t0 = 0x432b0000u; esp -= 4; M32(esp) = t0;
L_0051ee24:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051ee25:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ee2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ee2a:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_0051ee31:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0051ee34:  // jmp 0x51ee3a
    goto L_0051ee3a;
L_0051ee36:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0051ee3a:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0051ee3e:  // fadd dword ptr [0x5db2b8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db2b8u)));
L_0051ee44:  // push 0x434b0000
    t0 = 0x434b0000u; esp -= 4; M32(esp) = t0;
L_0051ee49:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0051ee4d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051ee51:  // fsub dword ptr [0x5db2b8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db2b8u)));
L_0051ee57:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0051ee5b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051ee5c:  // push 0x430b0000
    t0 = 0x430b0000u; esp -= 4; M32(esp) = t0;
L_0051ee61:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0051ee65:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051ee69:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051ee6a:  // call 0x523cc0
    t0 = 0x00523cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ee6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ee6f:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051ee72:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051ee74:  // je 0x51ee80
    if (f.zf) goto L_0051ee80;
L_0051ee76:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051ee77:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_0051ee79:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0051ee7b:  // call 0x51ddd0
    t0 = 0x0051ddd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ee80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ee80:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0051ee86:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051ee8a:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051ee8e:  // and ecx, 0x8000003f
    t0 = llog<32>(ecx & 0x8000003fu, f);
    ecx = (uint32_t)(t0);
L_0051ee94:  // jns 0x51ee9b
    if (!f.sf) goto L_0051ee9b;
L_0051ee96:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0051ee97:  // or ecx, 0xffffffc0
    t0 = llog<32>(ecx | 0xffffffc0u, f);
    ecx = (uint32_t)(t0);
L_0051ee9a:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0051ee9b:  // cmp ecx, 0x32
    t0 = lsub<32>(ecx, 0x32u, f);
L_0051ee9e:  // jl 0x51eeb5
    if ((f.sf != f.of)) goto L_0051eeb5;
L_0051eea0:  // fld dword ptr [ebp + esi*4 + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + esi * 4u + 0x28u)));
L_0051eea4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0051eeaa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051eeac:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051eeaf:  // jne 0x51ef79
    if (!f.zf) goto L_0051ef79;
L_0051eeb5:  // mov edx, dword ptr [0x89d840]
    edx = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_0051eebb:  // push 0x3fc90fdb
    t0 = 0x3fc90fdbu; esp -= 4; M32(esp) = t0;
L_0051eec0:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051eec4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051eec9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051eecb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051eecd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051eed2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051eed7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051eed8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051eed9:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051eede:  // push 0x43c00000
    t0 = 0x43c00000u; esp -= 4; M32(esp) = t0;
L_0051eee3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051eee4:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051eee9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051eee9:  // fld dword ptr [ebp + esi*4 + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebp + esi * 4u + 0x28u)));
L_0051eeed:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051eef3:  // push 0x3fc90fdb
    t0 = 0x3fc90fdbu; esp -= 4; M32(esp) = t0;
L_0051eef8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051eefd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051eeff:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051ef01:  // fistp qword ptr [esp + 0x5c]
    M64((uint32_t)(esp + 0x5cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051ef05:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0051ef09:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051ef0b:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051ef0e:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0051ef10:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0051ef13:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051ef19:  // fsub dword ptr [ebp + esi*4 + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + esi * 4u + 0x28u)));
L_0051ef1d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051ef1f:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0051ef21:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0051ef27:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0051ef2d:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_0051ef2f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051ef31:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_0051ef35:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0051ef39:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051ef3c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051ef3d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051ef3e:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0051ef40:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0051ef45:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_0051ef4b:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0051ef4e:  // imul edx, ebx
    t0 = limul32(edx, ebx, f);
    edx = (uint32_t)(t0);
L_0051ef51:  // xor edx, ecx
    t0 = llog<32>(edx ^ ecx, f);
    edx = (uint32_t)(t0);
L_0051ef53:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0051ef57:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0051ef5d:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0051ef5f:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_0051ef64:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051ef65:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051ef66:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051ef6b:  // push 0x43c00000
    t0 = 0x43c00000u; esp -= 4; M32(esp) = t0;
L_0051ef70:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051ef71:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ef76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ef76:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0051ef79:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0051ef7d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051ef81:  // push 0x43d00000
    t0 = 0x43d00000u; esp -= 4; M32(esp) = t0;
L_0051ef86:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051ef87:  // push 0x43b00000
    t0 = 0x43b00000u; esp -= 4; M32(esp) = t0;
L_0051ef8c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051ef8d:  // call 0x523cc0
    t0 = 0x00523cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ef92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ef92:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051ef95:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051ef97:  // je 0x51efa3
    if (f.zf) goto L_0051efa3;
L_0051ef99:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051ef9a:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_0051ef9c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0051ef9e:  // call 0x51ddd0
    t0 = 0x0051ddd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051efa3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051efa3:  // mov ecx, dword ptr [ebp + esi*4 + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051efa7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051efa8:  // call 0x44eb30
    t0 = 0x0044eb30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051efadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051efad:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051efb0:  // lea edx, [esp + 0x28]
    edx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0051efb4:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0051efb6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051efbb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051efbc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051efbd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051efbf:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051efc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051efc4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051efc6:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051efcbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051efcb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051efcd:  // jne 0x51efd7
    if (!f.zf) goto L_0051efd7;
L_0051efcf:  // fld dword ptr [0x5db390]
    lpush(x, (long double)F32((uint32_t)(0x5db390u)));
L_0051efd5:  // jmp 0x51efdd
    goto L_0051efdd;
L_0051efd7:  // fld dword ptr [0x5db5c4]
    lpush(x, (long double)F32((uint32_t)(0x5db5c4u)));
L_0051efdd:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_0051efe1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051efe3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051efe5:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051efea:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051efeb:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051eff1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051eff2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051eff7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051effc:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051f001:  // push 0x433e0000
    t0 = 0x433e0000u; esp -= 4; M32(esp) = t0;
L_0051f006:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f007:  // fsubr st(1)
    ST(0) = (ST(1)) - (ST(0));
L_0051f009:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051f00e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f011:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051f013:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051f015:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f01au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f01a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051f01c:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f021u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f021:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051f023:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0051f02a:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0051f031:  // jne 0x51f03b
    if (!f.zf) goto L_0051f03b;
L_0051f033:  // fld dword ptr [0x5e4a10]
    lpush(x, (long double)F32((uint32_t)(0x5e4a10u)));
L_0051f039:  // jmp 0x51f041
    goto L_0051f041;
L_0051f03b:  // fld dword ptr [0x5e4a0c]
    lpush(x, (long double)F32((uint32_t)(0x5e4a0cu)));
L_0051f041:  // fadd dword ptr [0x5e49f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e49f4u)));
L_0051f047:  // mov eax, dword ptr [0x89d868]
    eax = (uint32_t)(M32((uint32_t)(0x89d868u)));
L_0051f04c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f04e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f053:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f055:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f057:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f05c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f061:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f062:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f063:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051f068:  // fsub dword ptr [0x5d85d4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d4u)));
L_0051f06e:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_0051f073:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f074:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f077:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f07cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f07c:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051f07f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051f081:  // jne 0x51f08b
    if (!f.zf) goto L_0051f08b;
L_0051f083:  // fld dword ptr [0x5e4a10]
    lpush(x, (long double)F32((uint32_t)(0x5e4a10u)));
L_0051f089:  // jmp 0x51f091
    goto L_0051f091;
L_0051f08b:  // fld dword ptr [0x5e4a0c]
    lpush(x, (long double)F32((uint32_t)(0x5e4a0cu)));
L_0051f091:  // fadd dword ptr [0x5e4a08]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4a08u)));
L_0051f097:  // mov ecx, dword ptr [0x89d86c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d86cu)));
L_0051f09d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f09f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f0a4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f0a6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f0a8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f0ad:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f0b2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f0b3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f0b4:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051f0b9:  // fsub dword ptr [0x5d85d4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d4u)));
L_0051f0bf:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_0051f0c4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f0c5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f0c8:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f0cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f0cd:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051f0d0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051f0d2:  // jne 0x51f0dc
    if (!f.zf) goto L_0051f0dc;
L_0051f0d4:  // fld dword ptr [0x5e4a10]
    lpush(x, (long double)F32((uint32_t)(0x5e4a10u)));
L_0051f0da:  // jmp 0x51f0e2
    goto L_0051f0e2;
L_0051f0dc:  // fld dword ptr [0x5e4a0c]
    lpush(x, (long double)F32((uint32_t)(0x5e4a0cu)));
L_0051f0e2:  // fadd dword ptr [0x5e4a04]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4a04u)));
L_0051f0e8:  // mov edx, dword ptr [0x89d870]
    edx = (uint32_t)(M32((uint32_t)(0x89d870u)));
L_0051f0ee:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f0f0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f0f5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f0f7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f0f9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f0fe:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051f103:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f104:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051f105:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051f10a:  // fsub dword ptr [0x5d85d4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d4u)));
L_0051f110:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_0051f115:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f116:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f119:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f11eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f11e:  // mov eax, dword ptr [ebp + esi*4 + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f122:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0051f124:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0051f126:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f127:  // mov dword ptr [esp + 0x50], ebx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ebx);
L_0051f12b:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_0051f12f:  // mov dword ptr [esp + 0x48], edi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edi);
L_0051f133:  // mov dword ptr [esp + 0x40], edi
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edi);
L_0051f137:  // call 0x44eea0
    t0 = 0x0044eea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f13cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f13c:  // add esp, 0x30
    t0 = ladd<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0051f13f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051f141:  // jle 0x51f19f
    if ((f.zf || f.sf != f.of)) goto L_0051f19f;
L_0051f143:  // mov ecx, dword ptr [ebp + esi*4 + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f147:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f149:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f14a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f14b:  // call 0x44f030
    t0 = 0x0044f030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f150u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f150:  // mov edx, dword ptr [ebp + esi*4 + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f154:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051f156:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f157:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051f158:  // add ebx, eax
    t0 = ladd<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0051f15a:  // call 0x44f030
    t0 = 0x0044f030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f15fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f15f:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0051f163:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0051f165:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051f167:  // mov eax, dword ptr [ebp + esi*4 + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f16b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f16c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f16d:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_0051f171:  // call 0x44f030
    t0 = 0x0044f030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f176u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f176:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0051f17a:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0051f17e:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051f180:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0051f181:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_0051f185:  // mov ecx, dword ptr [ebp + esi*4 + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f189:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f18a:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_0051f18e:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0051f18f:  // call 0x44eea0
    t0 = 0x0044eea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f194u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f194:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0051f197:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0051f199:  // jl 0x51f143
    if ((f.sf != f.of)) goto L_0051f143;
L_0051f19b:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0051f19f:  // mov edx, dword ptr [ebp + esi*4 + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f1a3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0051f1a5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051f1a6:  // call 0x44ed40
    t0 = 0x0044ed40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f1abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f1ab:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051f1ae:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051f1b0:  // jle 0x51f20e
    if ((f.zf || f.sf != f.of)) goto L_0051f20e;
L_0051f1b2:  // mov eax, dword ptr [ebp + esi*4 + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f1b6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f1b8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f1b9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f1ba:  // call 0x44f300
    t0 = 0x0044f300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f1bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f1bf:  // mov ecx, dword ptr [ebp + esi*4 + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f1c3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051f1c5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f1c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f1c7:  // add ebx, eax
    t0 = ladd<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0051f1c9:  // call 0x44f300
    t0 = 0x0044f300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f1ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f1ce:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0051f1d2:  // mov edx, dword ptr [ebp + esi*4 + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f1d6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0051f1d8:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051f1da:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f1db:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051f1dc:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_0051f1e0:  // call 0x44f300
    t0 = 0x0044f300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f1e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f1e5:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0051f1e9:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051f1eb:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0051f1ef:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0051f1f0:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_0051f1f4:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0051f1f8:  // mov eax, dword ptr [ebp + esi*4 + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + esi * 4u + 0x18u)));
L_0051f1fc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f1fd:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0051f1fe:  // call 0x44ed40
    t0 = 0x0044ed40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f203u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f203:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0051f206:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0051f208:  // jl 0x51f1b2
    if ((f.sf != f.of)) goto L_0051f1b2;
L_0051f20a:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0051f20e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051f210:  // jne 0x51f21a
    if (!f.zf) goto L_0051f21a;
L_0051f212:  // fld dword ptr [0x5e4a10]
    lpush(x, (long double)F32((uint32_t)(0x5e4a10u)));
L_0051f218:  // jmp 0x51f220
    goto L_0051f220;
L_0051f21a:  // fld dword ptr [0x5e4a0c]
    lpush(x, (long double)F32((uint32_t)(0x5e4a0cu)));
L_0051f220:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0051f224:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0051f228:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f229:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f22a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0051f22e:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_0051f232:  // fdiv dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0051f236:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_0051f23c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f23f:  // push 0x43b40000
    t0 = 0x43b40000u; esp -= 4; M32(esp) = t0;
L_0051f244:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f245:  // fadd dword ptr [0x5e49f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e49f4u)));
L_0051f24b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f24e:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f253u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f253:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051f256:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051f258:  // jne 0x51f262
    if (!f.zf) goto L_0051f262;
L_0051f25a:  // fld dword ptr [0x5e4a10]
    lpush(x, (long double)F32((uint32_t)(0x5e4a10u)));
L_0051f260:  // jmp 0x51f268
    goto L_0051f268;
L_0051f262:  // fld dword ptr [0x5e4a0c]
    lpush(x, (long double)F32((uint32_t)(0x5e4a0cu)));
L_0051f268:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_0051f26c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f26d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f26e:  // fdiv dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0051f272:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_0051f278:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f27b:  // push 0x43b40000
    t0 = 0x43b40000u; esp -= 4; M32(esp) = t0;
L_0051f280:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f281:  // fadd dword ptr [0x5e4a08]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4a08u)));
L_0051f287:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f28a:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f28fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f28f:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051f292:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0051f294:  // jne 0x51f29e
    if (!f.zf) goto L_0051f29e;
L_0051f296:  // fld dword ptr [0x5e4a10]
    lpush(x, (long double)F32((uint32_t)(0x5e4a10u)));
L_0051f29c:  // jmp 0x51f2a4
    goto L_0051f2a4;
L_0051f29e:  // fld dword ptr [0x5e4a0c]
    lpush(x, (long double)F32((uint32_t)(0x5e4a0cu)));
L_0051f2a4:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_0051f2a8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f2a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f2aa:  // fdiv dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0051f2ae:  // fmul dword ptr [0x5d8c68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c68u)));
L_0051f2b4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f2b7:  // push 0x43b40000
    t0 = 0x43b40000u; esp -= 4; M32(esp) = t0;
L_0051f2bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051f2bd:  // fadd dword ptr [0x5e4a04]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4a04u)));
L_0051f2c3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051f2c6:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f2cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f2cb:  // mov ebx, dword ptr [esp + 0x48]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0051f2cf:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051f2d2:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0051f2d3:  // cmp esi, 2
    t0 = lsub<32>(esi, 0x2u, f);
L_0051f2d6:  // jl 0x51ed00
    if ((f.sf != f.of)) goto L_0051ed00;
L_0051f2dc:  // mov al, byte ptr [ebp + 5]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x5u))) & 0xffu);
L_0051f2df:  // cmp al, 0xff
    t0 = lsub<8>((eax & 0xffu), 0xffu, f);
L_0051f2e1:  // je 0x51f2fc
    if (f.zf) goto L_0051f2fc;
L_0051f2e3:  // movsx ecx, al
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu)));
L_0051f2e6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051f2e8:  // mov edx, dword ptr [ecx*4 + 0x8a9564]
    edx = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x8a9564u)));
L_0051f2ef:  // mov ecx, 0x89be5c
    ecx = (uint32_t)(0x89be5cu);
L_0051f2f4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051f2f5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f2f7:  // call 0x527990
    t0 = 0x00527990u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f2fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f2fc:  // mov eax, dword ptr [esp + 0x17c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x17cu)));
L_0051f303:  // mov esi, dword ptr [esp + 0x178]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x178u)));
L_0051f30a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f30b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051f30c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f30e:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0051f310:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f315u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f315:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051f318:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051f31d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f31e:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f323u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f323:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051f324:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0051f326:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051f32b:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f330u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f330:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051f331:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051f333:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051f338:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f33du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f33d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051f33e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051f33f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0051f340:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051f341:  // add esp, 0x164
    t0 = ladd<32>(esp, 0x164u, f);
    esp = (uint32_t)(t0);
L_0051f347:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051e1b0, 0051e1b0)
