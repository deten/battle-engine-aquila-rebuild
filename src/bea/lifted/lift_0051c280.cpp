// lifted from 0051c280 (vslot5, 1781 bytes, 487 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051c280(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051c280;
L_0051c280:  // mov eax, 0x2080
    eax = (uint32_t)(0x2080u);
L_0051c285:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c28au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c28a:  // mov eax, dword ptr [esp + 0x2088]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2088u)));
L_0051c291:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051c292:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0051c294:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c295:  // mov ecx, dword ptr [esp + 0x208c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x208cu)));
L_0051c29c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c29d:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051c2a2:  // call 0x467200
    t0 = 0x00467200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c2a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c2a7:  // fld dword ptr [esp + 0x2088]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2088u)));
L_0051c2ae:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_0051c2b4:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_0051c2ba:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051c2c0:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_0051c2c4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051c2c6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051c2c9:  // je 0x51c2d5
    if (f.zf) goto L_0051c2d5;
L_0051c2cb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051c2cd:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051c2d3:  // jmp 0x51c2ea
    goto L_0051c2ea;
L_0051c2d5:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051c2db:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051c2dd:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051c2e0:  // jne 0x51c2ea
    if (!f.zf) goto L_0051c2ea;
L_0051c2e2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051c2e4:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051c2ea:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051c2f0:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0051c2f2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c2f7:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0051c2fb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051c2fd:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c302u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c302:  // mov dword ptr [esp + 4], eax
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(eax);
L_0051c306:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0051c30b:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_0051c30f:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0051c313:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_0051c317:  // push 0xaf1f1f1f
    t0 = 0xaf1f1f1fu; esp -= 4; M32(esp) = t0;
L_0051c31c:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0051c31e:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_0051c323:  // push 0x42980000
    t0 = 0x42980000u; esp -= 4; M32(esp) = t0;
L_0051c328:  // fmul dword ptr [0x5e4a00]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e4a00u)));
L_0051c32e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c32f:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051c334:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0051c336:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0051c33a:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0051c33e:  // fsub dword ptr [0x5db1e8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db1e8u)));
L_0051c344:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051c347:  // call 0x467ae0
    t0 = 0x00467ae0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c34cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c34c:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0051c350:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051c351:  // push 0x63fc0c
    t0 = 0x63fc0cu; esp -= 4; M32(esp) = t0;
L_0051c356:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c35bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c35b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c35e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c363:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c364:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0051c366:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c36bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c36b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c36d:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c372u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c372:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c374:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c376:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c37b:  // push 0x63fc0c
    t0 = 0x63fc0cu; esp -= 4; M32(esp) = t0;
L_0051c380:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c385u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c385:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c388:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c389:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0051c38d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0051c38e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0051c390:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c395:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0051c397:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0051c39b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c3a0:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_0051c3a4:  // push 0x3f19999a
    t0 = 0x3f19999au; esp -= 4; M32(esp) = t0;
L_0051c3a9:  // push 0x3d23d70a
    t0 = 0x3d23d70au; esp -= 4; M32(esp) = t0;
L_0051c3ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c3af:  // fsubr dword ptr [0x5e49fc]
    ST(0) = ((long double)F32((uint32_t)(0x5e49fcu))) - (ST(0));
L_0051c3b5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051c3b8:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0051c3bc:  // fsub dword ptr [0x5db538]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db538u)));
L_0051c3c2:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_0051c3c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c3c7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c3cc:  // fmul dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb8u)));
L_0051c3d2:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0051c3d4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051c3d7:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0051c3d9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c3deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c3de:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c3e0:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c3e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c3e5:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0051c3e9:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051c3ef:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0051c3f6:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0051c3fd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051c3ff:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051c402:  // je 0x51c40e
    if (f.zf) goto L_0051c40e;
L_0051c404:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051c406:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051c40c:  // jmp 0x51c423
    goto L_0051c423;
L_0051c40e:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051c414:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051c416:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051c419:  // jne 0x51c423
    if (!f.zf) goto L_0051c423;
L_0051c41b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051c41d:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051c423:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c424:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051c429:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051c42c:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c431u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c431:  // fld dword ptr [esp + 0x2088]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2088u)));
L_0051c438:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051c43e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051c440:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051c443:  // je 0x51c96b
    if (f.zf) goto L_0051c96b;
L_0051c449:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051c44a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051c44b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051c44c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c44e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c450:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c455:  // push 0x63fc04
    t0 = 0x63fc04u; esp -= 4; M32(esp) = t0;
L_0051c45a:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c45fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c45f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c462:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c467:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c468:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c46d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c472:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c477:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c47c:  // push 0x430c0000
    t0 = 0x430c0000u; esp -= 4; M32(esp) = t0;
L_0051c481:  // push 0x43020000
    t0 = 0x43020000u; esp -= 4; M32(esp) = t0;
L_0051c486:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c488:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c48du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c48d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c48f:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c494u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c494:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c496:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c498:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c49d:  // push 0x63fbf4
    t0 = 0x63fbf4u; esp -= 4; M32(esp) = t0;
L_0051c4a2:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c4a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c4a7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c4aa:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c4af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c4b0:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c4b5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c4ba:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c4bf:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c4c4:  // push 0x43200000
    t0 = 0x43200000u; esp -= 4; M32(esp) = t0;
L_0051c4c9:  // push 0x43020000
    t0 = 0x43020000u; esp -= 4; M32(esp) = t0;
L_0051c4ce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c4d0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c4d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c4d5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c4d7:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c4dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c4dc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c4de:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c4e0:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c4e5:  // push 0x63fbe8
    t0 = 0x63fbe8u; esp -= 4; M32(esp) = t0;
L_0051c4ea:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c4efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c4ef:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c4f2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c4f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c4f8:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c4fd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c502:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c507:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c50c:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_0051c511:  // push 0x43020000
    t0 = 0x43020000u; esp -= 4; M32(esp) = t0;
L_0051c516:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c518:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c51du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c51d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c51f:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c524u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c524:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c526:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c528:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c52d:  // push 0x63fbd8
    t0 = 0x63fbd8u; esp -= 4; M32(esp) = t0;
L_0051c532:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c537u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c537:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c53a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c53f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c540:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c545:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c54a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c54f:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c554:  // push 0x43520000
    t0 = 0x43520000u; esp -= 4; M32(esp) = t0;
L_0051c559:  // push 0x43020000
    t0 = 0x43020000u; esp -= 4; M32(esp) = t0;
L_0051c55e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c560:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c565u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c565:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c567:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c56cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c56c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c56e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c570:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c575:  // push 0x63fbcc
    t0 = 0x63fbccu; esp -= 4; M32(esp) = t0;
L_0051c57a:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c57fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c57f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c582:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c583:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c588:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c58d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c592:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c597:  // push 0x439b0000
    t0 = 0x439b0000u; esp -= 4; M32(esp) = t0;
L_0051c59c:  // push 0x43020000
    t0 = 0x43020000u; esp -= 4; M32(esp) = t0;
L_0051c5a1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c5a3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c5a8:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c5adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c5ad:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c5af:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c5b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c5b4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c5b6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c5b8:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c5bd:  // push 0x63fbc0
    t0 = 0x63fbc0u; esp -= 4; M32(esp) = t0;
L_0051c5c2:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c5c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c5c7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c5ca:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c5cf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c5d0:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c5d5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c5da:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c5df:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c5e4:  // push 0x43d20000
    t0 = 0x43d20000u; esp -= 4; M32(esp) = t0;
L_0051c5e9:  // push 0x43020000
    t0 = 0x43020000u; esp -= 4; M32(esp) = t0;
L_0051c5ee:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c5f0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c5f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c5f5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c5f7:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c5fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c5fc:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0051c5ff:  // mov eax, dword ptr [0x8a96a8]
    eax = (uint32_t)(M32((uint32_t)(0x8a96a8u)));
L_0051c604:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0051c605:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c606:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c607:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0051c60b:  // push 0x63fbb8
    t0 = 0x63fbb8u; esp -= 4; M32(esp) = t0;
L_0051c610:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051c611:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c616u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c616:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051c619:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0051c61d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c61f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c621:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c626:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c627:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c62cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c62c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c62f:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c634:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c635:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c63a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c63f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c644:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c649:  // push 0x430c0000
    t0 = 0x430c0000u; esp -= 4; M32(esp) = t0;
L_0051c64e:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051c653:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c655:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c65au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c65a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c65c:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c661u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c661:  // mov ecx, dword ptr [0x8a96c0]
    ecx = (uint32_t)(M32((uint32_t)(0x8a96c0u)));
L_0051c667:  // mov edx, dword ptr [0x8a96bc]
    edx = (uint32_t)(M32((uint32_t)(0x8a96bcu)));
L_0051c66d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0051c66f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051c671:  // jle 0x51c687
    if ((f.zf || f.sf != f.of)) goto L_0051c687;
L_0051c673:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0051c676:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0051c678:  // cmp dword ptr [esi], ebx
    t0 = lsub<32>(M32((uint32_t)(esi)), ebx, f);
L_0051c67a:  // jg 0x51c687
    if ((!f.zf && f.sf == f.of)) goto L_0051c687;
L_0051c67c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0051c67d:  // add esi, 0x104
    t0 = ladd<32>(esi, 0x104u, f);
    esi = (uint32_t)(t0);
L_0051c683:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0051c685:  // jl 0x51c678
    if ((f.sf != f.of)) goto L_0051c678;
L_0051c687:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c689:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c68b:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0051c68e:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0051c690:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c692:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c697:  // lea edx, [edx + ecx*4 - 0x100]
    edx = (uint32_t)((uint32_t)(edx + ecx * 4u + 0xffffff00u));
L_0051c69e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051c69f:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c6a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c6a4:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c6a7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c6ac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c6ad:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c6b2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c6b7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c6bc:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c6c1:  // push 0x43200000
    t0 = 0x43200000u; esp -= 4; M32(esp) = t0;
L_0051c6c6:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051c6cb:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c6cd:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c6d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c6d2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c6d4:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c6d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c6d9:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0051c6dc:  // mov edx, dword ptr [0x8a96c4]
    edx = (uint32_t)(M32((uint32_t)(0x8a96c4u)));
L_0051c6e2:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0051c6e5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c6e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c6e9:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0051c6eb:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c6f0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c6f1:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c6f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c6f6:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c6f9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c6fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c6ff:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c704:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c709:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c70e:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c713:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_0051c718:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051c71d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c71f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c724u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c724:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c726:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c72bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c72b:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0051c72e:  // mov edx, dword ptr [0x8a969c]
    edx = (uint32_t)(M32((uint32_t)(0x8a969cu)));
L_0051c734:  // push 0x43700000
    t0 = 0x43700000u; esp -= 4; M32(esp) = t0;
L_0051c739:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0051c73c:  // mov eax, dword ptr [edx + ecx*4 + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edx + ecx * 4u + 0x10u)));
L_0051c740:  // mov ecx, dword ptr [0x8a96a0]
    ecx = (uint32_t)(M32((uint32_t)(0x8a96a0u)));
L_0051c746:  // lea edx, [esp + 0x154]
    edx = (uint32_t)((uint32_t)(esp + 0x154u));
L_0051c74d:  // lea eax, [ecx + eax*2]
    eax = (uint32_t)((uint32_t)(ecx + eax * 2u));
L_0051c750:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c755:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c756:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051c757:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c759:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c75eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c75e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c760:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c765u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c765:  // or ebp, 0xffffffff
    t0 = llog<32>(ebp | 0xffffffffu, f);
    ebp = (uint32_t)(t0);
L_0051c768:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0051c76a:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0051c76c:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_0051c76f:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0051c773:  // jle 0x51c78c
    if ((f.zf || f.sf != f.of)) goto L_0051c78c;
L_0051c775:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0051c778:  // add eax, -6
    t0 = ladd<32>(eax, 0xfffffffau, f);
    eax = (uint32_t)(t0);
L_0051c77b:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0051c77d:  // jle 0x51c785
    if ((f.zf || f.sf != f.of)) goto L_0051c785;
L_0051c77f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c781:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0051c785:  // mov eax, 6
    eax = (uint32_t)(0x6u);
L_0051c78a:  // jmp 0x51c790
    goto L_0051c790;
L_0051c78c:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0051c790:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0051c792:  // jle 0x51c81c
    if ((f.zf || f.sf != f.of)) goto L_0051c81c;
L_0051c798:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0051c79b:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0051c79f:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0051c7a1:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0051c7a4:  // lea esi, [esp + ecx*8 + 0x150]
    esi = (uint32_t)((uint32_t)(esp + ecx * 8u + 0x150u));
L_0051c7ab:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0051c7af:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c7b4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051c7b5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051c7b6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c7b8:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c7bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c7bd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c7bf:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c7c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c7c4:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0051c7c8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c7ca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c7cc:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c7d1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051c7d2:  // fadd dword ptr [0x5e49f8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e49f8u)));
L_0051c7d8:  // push 0xff7f7f3f
    t0 = 0xff7f7f3fu; esp -= 4; M32(esp) = t0;
L_0051c7dd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c7e2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c7e7:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c7ec:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c7ed:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c7f2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051c7f5:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051c7fa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c7fc:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c801u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c801:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c803:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c808u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c808:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0051c80c:  // add esi, 0xc8
    t0 = ladd<32>(esi, 0xc8u, f);
    esi = (uint32_t)(t0);
L_0051c812:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0051c815:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0051c816:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0051c81a:  // jne 0x51c7ab
    if (!f.zf) goto L_0051c7ab;
L_0051c81c:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0051c81f:  // mov ecx, dword ptr [0x83d964]
    ecx = (uint32_t)(M32((uint32_t)(0x83d964u)));
L_0051c825:  // push 0x43700000
    t0 = 0x43700000u; esp -= 4; M32(esp) = t0;
L_0051c82a:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0051c82d:  // mov edx, dword ptr [ecx + eax*4 + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ecx + eax * 4u + 0x10u)));
L_0051c831:  // mov eax, dword ptr [0x83d968]
    eax = (uint32_t)(M32((uint32_t)(0x83d968u)));
L_0051c836:  // lea ecx, [esp + 0x154]
    ecx = (uint32_t)((uint32_t)(esp + 0x154u));
L_0051c83d:  // lea eax, [eax + edx*2]
    eax = (uint32_t)((uint32_t)(eax + edx * 2u));
L_0051c840:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c841:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c842:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c844:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c849:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c84eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c84e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c850:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c855u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c855:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0051c857:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_0051c85a:  // jle 0x51c871
    if ((f.zf || f.sf != f.of)) goto L_0051c871;
L_0051c85c:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0051c85f:  // add eax, -6
    t0 = ladd<32>(eax, 0xfffffffau, f);
    eax = (uint32_t)(t0);
L_0051c862:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0051c864:  // jle 0x51c86a
    if ((f.zf || f.sf != f.of)) goto L_0051c86a;
L_0051c866:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c868:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0051c86a:  // mov eax, 6
    eax = (uint32_t)(0x6u);
L_0051c86f:  // jmp 0x51c873
    goto L_0051c873;
L_0051c871:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0051c873:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051c875:  // jle 0x51c8e6
    if ((f.zf || f.sf != f.of)) goto L_0051c8e6;
L_0051c877:  // lea ecx, [ecx + ecx*4]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0051c87a:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0051c882:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0051c884:  // lea edx, [ecx + ecx*4]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0051c887:  // lea esi, [esp + edx*8 + 0x150]
    esi = (uint32_t)((uint32_t)(esp + edx * 8u + 0x150u));
L_0051c88e:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0051c892:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c894:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c896:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c89b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051c89c:  // fadd dword ptr [0x5e49f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e49f4u)));
L_0051c8a2:  // push 0xff3f7f7f
    t0 = 0xff3f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c8a7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c8ac:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c8b1:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c8b6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051c8b7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c8bc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051c8bf:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051c8c4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c8c6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c8cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c8cb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c8cd:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c8d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c8d2:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0051c8d6:  // add esi, 0xc8
    t0 = ladd<32>(esi, 0xc8u, f);
    esi = (uint32_t)(t0);
L_0051c8dc:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0051c8df:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0051c8e0:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0051c8e4:  // jne 0x51c88e
    if (!f.zf) goto L_0051c88e;
L_0051c8e6:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051c8ea:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0051c8ed:  // je 0x51c900
    if (f.zf) goto L_0051c900;
L_0051c8ef:  // cmp ebp, -1
    t0 = lsub<32>(ebp, 0xffffffffu, f);
L_0051c8f2:  // je 0x51c900
    if (f.zf) goto L_0051c900;
L_0051c8f4:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0051c8f6:  // jle 0x51c8fd
    if ((f.zf || f.sf != f.of)) goto L_0051c8fd;
L_0051c8f8:  // mov dword ptr [edi + 0x10], eax
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(eax);
L_0051c8fb:  // jmp 0x51c900
    goto L_0051c900;
L_0051c8fd:  // mov dword ptr [edi + 0x10], ebp
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(ebp);
L_0051c900:  // mov edi, dword ptr [edi + 8]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0051c903:  // mov edx, dword ptr [0x8a969c]
    edx = (uint32_t)(M32((uint32_t)(0x8a969cu)));
L_0051c909:  // mov ecx, dword ptr [0x8a96a4]
    ecx = (uint32_t)(M32((uint32_t)(0x8a96a4u)));
L_0051c90f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051c910:  // lea eax, [edi + edi*2]
    eax = (uint32_t)((uint32_t)(edi + edi * 2u));
L_0051c913:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0051c914:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051c915:  // mov eax, dword ptr [edx + eax*4 + 0x14]
    eax = (uint32_t)(M32((uint32_t)(edx + eax * 4u + 0x14u)));
L_0051c919:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0051c91c:  // je 0x51c923
    if (f.zf) goto L_0051c923;
L_0051c91e:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0051c920:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c921:  // jmp 0x51c928
    goto L_0051c928;
L_0051c923:  // push 0x63fbac
    t0 = 0x63fbacu; esp -= 4; M32(esp) = t0;
L_0051c928:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c92du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c92d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051c930:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051c935:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c937:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051c939:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051c93e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051c93f:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_0051c944:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c949:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051c94e:  // push 0x3e19999a
    t0 = 0x3e19999au; esp -= 4; M32(esp) = t0;
L_0051c953:  // push 0x43d20000
    t0 = 0x43d20000u; esp -= 4; M32(esp) = t0;
L_0051c958:  // push 0x437a0000
    t0 = 0x437a0000u; esp -= 4; M32(esp) = t0;
L_0051c95d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051c95f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c964u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c964:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051c966:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051c96bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051c96b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051c96c:  // add esp, 0x2080
    t0 = ladd<32>(esp, 0x2080u, f);
    esp = (uint32_t)(t0);
L_0051c972:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051c280, 0051c280)
