// lifted from 0053e2e0 (FUN_0053e2e0, 2519 bytes, 646 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053e2e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053e2e0;
L_0053e2e0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0053e2e6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053e2e8:  // push 0x5d77ab
    t0 = 0x5d77abu; esp -= 4; M32(esp) = t0;
L_0053e2ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e2ee:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053e2f2:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0053e2f9:  // sub esp, 0x140
    t0 = lsub<32>(esp, 0x140u, f);
    esp = (uint32_t)(t0);
L_0053e2ff:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e300:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053e301:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0053e303:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0053e305:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053e306:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053e307:  // mov dword ptr [ebp + 0x430], 0x3dcccccd
    M32((uint32_t)(ebp + 0x430u)) = (uint32_t)(0x3dcccccdu);
L_0053e311:  // mov ecx, dword ptr [ebp + eax*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x4u)));
L_0053e315:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0053e317:  // je 0x53ec9a
    if (f.zf) goto L_0053ec9a;
L_0053e31d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e31e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053e320:  // call 0x44a0d0
    t0 = 0x0044a0d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e325u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e325:  // mov eax, dword ptr [ebp + 0x4ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e32b:  // mov ecx, dword ptr [ebp + eax*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x4u)));
L_0053e32f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e331:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e334u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e334:  // mov eax, dword ptr [ebp + 0x4ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e33a:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0053e33e:  // mov ecx, dword ptr [ebp + eax*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x4u)));
L_0053e342:  // lea eax, [esp + 0x4c]
    eax = (uint32_t)((uint32_t)(esp + 0x4cu));
L_0053e346:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e347:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e349:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e34bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e34b:  // mov edx, dword ptr [ebp + 0x4ac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e351:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_0053e358:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e359:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053e35b:  // mov eax, dword ptr [ebp + edx*4 + 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x4u)));
L_0053e35f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e360:  // call 0x449ef0
    t0 = 0x00449ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e365u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e365:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0053e36b:  // je 0x53e427
    if (f.zf) goto L_0053e427;
L_0053e371:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_0053e377:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_0053e37d:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0053e381:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0053e383:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0053e388:  // lea esi, [esp + 0x90]
    esi = (uint32_t)((uint32_t)(esp + 0x90u));
L_0053e38f:  // lea edi, [esp + 0xc0]
    edi = (uint32_t)((uint32_t)(esp + 0xc0u));
L_0053e396:  // fsubr st(2)
    ST(0) = (ST(2)) - (ST(0));
L_0053e398:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_0053e39c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053e39e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053e3a0:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_0053e3a7:  // fchs 
    ST(0) = -ST(0);
L_0053e3a9:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_0053e3b0:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_0053e3b7:  // fchs 
    ST(0) = -ST(0);
L_0053e3b9:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_0053e3c0:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_0053e3c7:  // fchs 
    ST(0) = -ST(0);
L_0053e3c9:  // fstp dword ptr [esp + 0xb8]
    F32((uint32_t)(esp + 0xb8u)) = lf32(ST(0));
    lpop(x);
L_0053e3d0:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_0053e3d7:  // fchs 
    ST(0) = -ST(0);
L_0053e3d9:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_0053e3e0:  // fchs 
    ST(0) = -ST(0);
L_0053e3e2:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0053e3e9:  // fchs 
    ST(0) = -ST(0);
L_0053e3eb:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0053e3ef:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053e3f1:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0053e3f5:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0053e3f9:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053e3fd:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0053e401:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053e405:  // mov dword ptr [esp + 0xc0], ecx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(ecx);
L_0053e40c:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053e410:  // mov dword ptr [esp + 0xc4], edx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(edx);
L_0053e417:  // mov dword ptr [esp + 0xc8], eax
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(eax);
L_0053e41e:  // mov dword ptr [esp + 0xcc], ecx
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(ecx);
L_0053e425:  // jmp 0x53e43c
    goto L_0053e43c;
L_0053e427:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0053e42c:  // lea esi, [esp + 0x90]
    esi = (uint32_t)((uint32_t)(esp + 0x90u));
L_0053e433:  // lea edi, [esp + 0xc0]
    edi = (uint32_t)((uint32_t)(esp + 0xc0u));
L_0053e43a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053e43c:  // mov edx, dword ptr [ebp + 0x4ac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e442:  // lea eax, [esp + 0x4c]
    eax = (uint32_t)((uint32_t)(esp + 0x4cu));
L_0053e446:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e447:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e448:  // mov ecx, dword ptr [ebp + edx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x4u)));
L_0053e44c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e44e:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e451u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e451:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_0053e455:  // mov esi, dword ptr [esp + 0x40]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0053e459:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e45a:  // mov ecx, dword ptr [ebp + 0x470]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x470u)));
L_0053e460:  // lea eax, [esp + 0xcc]
    eax = (uint32_t)((uint32_t)(esp + 0xccu));
L_0053e467:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053e46a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053e46b:  // push 0x45000000
    t0 = 0x45000000u; esp -= 4; M32(esp) = t0;
L_0053e470:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e471:  // call 0x476a20
    t0 = 0x00476a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e476u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e476:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0053e47b:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e480u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e480:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053e482:  // je 0x53e4ad
    if (f.zf) goto L_0053e4ad;
L_0053e484:  // mov edi, dword ptr [esp + 0x160]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_0053e48b:  // mov eax, dword ptr [0x89d684]
    eax = (uint32_t)(M32((uint32_t)(0x89d684u)));
L_0053e490:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0053e492:  // jne 0x53e4a4
    if (!f.zf) goto L_0053e4a4;
L_0053e494:  // mov ecx, dword ptr [ebp + 0x470]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x470u)));
L_0053e49a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053e49b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e49c:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0053e49f:  // call 0x546b40
    t0 = 0x00546b40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e4a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e4a4:  // xor dword ptr [0x89d684], 1
    t0 = llog<32>(M32((uint32_t)(0x89d684u)) ^ 0x1u, f);
    M32((uint32_t)(0x89d684u)) = (uint32_t)(t0);
L_0053e4ab:  // jmp 0x53e4cb
    goto L_0053e4cb;
L_0053e4ad:  // mov edx, dword ptr [esp + 0x160]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_0053e4b4:  // mov eax, dword ptr [ebp + 0x470]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x470u)));
L_0053e4ba:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0053e4bd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e4be:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e4bf:  // call 0x546b40
    t0 = 0x00546b40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e4c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e4c4:  // mov edi, dword ptr [esp + 0x160]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_0053e4cb:  // mov ecx, 0x83d248
    ecx = (uint32_t)(0x83d248u);
L_0053e4d0:  // call 0x4eb1e0
    t0 = 0x004eb1e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e4d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e4d5:  // mov ecx, 0x9c7490
    ecx = (uint32_t)(0x9c7490u);
L_0053e4da:  // call 0x5515d0
    t0 = 0x005515d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e4dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e4df:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_0053e4e3:  // lea edx, [esp + 0x90]
    edx = (uint32_t)((uint32_t)(esp + 0x90u));
L_0053e4ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e4eb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e4ec:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053e4f1:  // call 0x550be0
    t0 = 0x00550be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e4f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e4f6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e4f7:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053e4f9:  // call 0x44a640
    t0 = 0x0044a640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e4feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e4fe:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_0053e503:  // call 0x5528b0
    t0 = 0x005528b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e508u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e508:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053e50d:  // call 0x5158c0
    t0 = 0x005158c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e512u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e512:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053e514:  // je 0x53ec9a
    if (f.zf) goto L_0053ec9a;
L_0053e51a:  // mov eax, dword ptr [ebp + 0x4ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e520:  // add eax, 0x2d
    t0 = ladd<32>(eax, 0x2du, f);
    eax = (uint32_t)(t0);
L_0053e523:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0053e526:  // lea ecx, [ebp + eax*8]
    ecx = (uint32_t)((uint32_t)(ebp + eax * 8u));
L_0053e52a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e52b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053e530:  // call 0x515ab0
    t0 = 0x00515ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e535u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e535:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e537:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053e539:  // call 0x44a640
    t0 = 0x0044a640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e53eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e53e:  // mov edx, dword ptr [ebp + 0x4ac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e544:  // mov ecx, dword ptr [ebp + edx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x4u)));
L_0053e548:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0053e54c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e54d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e54f:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e551u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e551:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0053e553:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0053e556:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0053e558:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0053e55a:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0053e55d:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0053e560:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053e563:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0053e566:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0053e569:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0053e56c:  // call 0x441490
    t0 = 0x00441490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e571u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e571:  // mov ecx, dword ptr [0x6fbdfc]
    ecx = (uint32_t)(M32((uint32_t)(0x6fbdfcu)));
L_0053e577:  // mov edx, dword ptr [ebp + 0x4ac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e57d:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_0053e581:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0053e584:  // mov ecx, dword ptr [ebp + edx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x4u)));
L_0053e588:  // lea edx, [esp + 0x100]
    edx = (uint32_t)((uint32_t)(esp + 0x100u));
L_0053e58f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e590:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e592:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e595u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e595:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_0053e59c:  // fld dword ptr [esp + 0x114]
    lpush(x, (long double)F32((uint32_t)(esp + 0x114u)));
L_0053e5a3:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0053e5a5:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0053e5a9:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053e5ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e5ae:  // call 0x542a50
    t0 = 0x00542a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e5b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e5b3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053e5b6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053e5b8:  // call 0x44a2d0
    t0 = 0x0044a2d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e5bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e5bd:  // mov ecx, dword ptr [ebp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_0053e5c0:  // call 0x4905f0
    t0 = 0x004905f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e5c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e5c5:  // mov eax, dword ptr [0x6fbe40]
    eax = (uint32_t)(M32((uint32_t)(0x6fbe40u)));
L_0053e5ca:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e5cf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e5d0:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_0053e5d2:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e5d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e5d7:  // fld dword ptr [0x6fbe60]
    lpush(x, (long double)F32((uint32_t)(0x6fbe60u)));
L_0053e5dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e5de:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053e5e3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053e5e6:  // call 0x5513d0
    t0 = 0x005513d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e5ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e5eb:  // fld qword ptr [0x5e4fd8]
    lpush(x, (long double)F64((uint32_t)(0x5e4fd8u)));
L_0053e5f1:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0053e5f3:  // mov ecx, dword ptr [ebp + 0x4ac]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e5f9:  // mov ecx, dword ptr [ebp + ecx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + ecx * 4u + 0x4u)));
L_0053e5fd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e5ff:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0053e603:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e606u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e606:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_0053e60a:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053e60e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e60f:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053e614:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053e617:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053e618:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e619:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053e61e:  // call 0x550b10
    t0 = 0x00550b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e623u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e623:  // mov ecx, dword ptr [ebp + 0x498]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x498u)));
L_0053e629:  // call 0x5441b0
    t0 = 0x005441b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e62eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e62e:  // mov ecx, dword ptr [ebp + 0x4ac]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e634:  // mov ecx, dword ptr [ebp + ecx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + ecx * 4u + 0x4u)));
L_0053e638:  // mov edx, dword ptr [ebp + 0x430]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x430u)));
L_0053e63e:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0053e642:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e644:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e647u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e647:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_0053e64b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e64c:  // fmul dword ptr [ebp + 0x430]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x430u)));
L_0053e652:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053e655:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0053e659:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_0053e65d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e65e:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0053e662:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053e665:  // push 0x442f0000
    t0 = 0x442f0000u; esp -= 4; M32(esp) = t0;
L_0053e66a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e66b:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053e670:  // call 0x550b10
    t0 = 0x00550b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e675u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e675:  // cmp byte ptr [ebp + 0x4a8], bl
    t0 = lsub<8>(M8((uint32_t)(ebp + 0x4a8u)), (ebx & 0xffu), f);
L_0053e67b:  // je 0x53e6aa
    if (f.zf) goto L_0053e6aa;
L_0053e67d:  // mov edx, dword ptr [ebp + 0x470]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x470u)));
L_0053e683:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0053e686:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053e687:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e688:  // call 0x545410
    t0 = 0x00545410u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e68du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e68d:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_0053e692:  // call 0x553960
    t0 = 0x00553960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e697u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e697:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0053e69c:  // push 0x83d248
    t0 = 0x83d248u; esp -= 4; M32(esp) = t0;
L_0053e6a1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e6a2:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053e6a4:  // call dword ptr [ecx + 0xc4]
    t0 = M32((uint32_t)(ecx + 0xc4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e6aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e6aa:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_0053e6af:  // call 0x554170
    t0 = 0x00554170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e6b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e6b4:  // mov eax, dword ptr [0x89d634]
    eax = (uint32_t)(M32((uint32_t)(0x89d634u)));
L_0053e6b9:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053e6bd:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053e6bf:  // jne 0x53e70f
    if (!f.zf) goto L_0053e70f;
L_0053e6c1:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0053e6c7:  // jne 0x53e70f
    if (!f.zf) goto L_0053e70f;
L_0053e6c9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053e6cb:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e6cd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e6ce:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e6d3:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e6d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e6d8:  // mov byte ptr [0x9c68ad], bl
    M8((uint32_t)(0x9c68adu)) = (uint8_t)((ebx & 0xffu));
L_0053e6de:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0053e6e5:  // cmp byte ptr [ebp + 0xaf4], bl
    t0 = lsub<8>(M8((uint32_t)(ebp + 0xaf4u)), (ebx & 0xffu), f);
L_0053e6eb:  // jne 0x53e6f6
    if (!f.zf) goto L_0053e6f6;
L_0053e6ed:  // mov ecx, dword ptr [ebp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0053e6f0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053e6f1:  // call 0x55b6c0
    t0 = 0x0055b6c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e6f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e6f6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e6f7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e6fc:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_0053e703:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0053e70a:  // call 0x513b60
    t0 = 0x00513b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e70fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e70f:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_0053e714:  // call 0x552660
    t0 = 0x00552660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e719u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e719:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e71b:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0053e71d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e722:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e727u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e727:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e728:  // call 0x551420
    t0 = 0x00551420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e72du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e72d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053e730:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e735:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053e737:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053e739:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e73a:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e73fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e73f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053e741:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_0053e743:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e744:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e749:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e74eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e74e:  // mov dword ptr [esp + 0x20], 0xbf800000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xbf800000u);
L_0053e756:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e75b:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053e75f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e760:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0053e762:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e763:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e768u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e768:  // mov ecx, dword ptr [ebp + 0x470]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x470u)));
L_0053e76e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053e770:  // mov al, byte ptr [0x9c7c56]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x9c7c56u))) & 0xffu);
L_0053e775:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e776:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e777:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e778:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_0053e77d:  // call 0x50ab60
    t0 = 0x0050ab60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e782u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e782:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e783:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0053e785:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e786:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e78b:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e790u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e790:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e791:  // call 0x551460
    t0 = 0x00551460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e796u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e796:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053e799:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e79e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053e7a0:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053e7a2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e7a3:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e7a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e7a8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e7aa:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_0053e7ac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e7ad:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e7b2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e7b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e7b7:  // call 0x5438c0
    t0 = 0x005438c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e7bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e7bc:  // mov ecx, 0x9cc148
    ecx = (uint32_t)(0x9cc148u);
L_0053e7c1:  // call 0x55aa10
    t0 = 0x0055aa10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e7c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e7c6:  // call 0x4dd0c0
    t0 = 0x004dd0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e7cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e7cb:  // cmp dword ptr [0x89d634], ebx
    t0 = lsub<32>(M32((uint32_t)(0x89d634u)), ebx, f);
L_0053e7d1:  // je 0x53e821
    if (f.zf) goto L_0053e821;
L_0053e7d3:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0053e7d9:  // jne 0x53e821
    if (!f.zf) goto L_0053e821;
L_0053e7db:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053e7dd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e7df:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e7e0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e7e5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e7eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e7ea:  // mov byte ptr [0x9c68ad], bl
    M8((uint32_t)(0x9c68adu)) = (uint8_t)((ebx & 0xffu));
L_0053e7f0:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0053e7f7:  // cmp byte ptr [ebp + 0xaf4], bl
    t0 = lsub<8>(M8((uint32_t)(ebp + 0xaf4u)), (ebx & 0xffu), f);
L_0053e7fd:  // jne 0x53e808
    if (!f.zf) goto L_0053e808;
L_0053e7ff:  // mov ecx, dword ptr [ebp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0053e802:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053e803:  // call 0x55b6c0
    t0 = 0x0055b6c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e808u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e808:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e809:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e80e:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_0053e815:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0053e81c:  // call 0x513b60
    t0 = 0x00513b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e821u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e821:  // mov ecx, 0x66ffb0
    ecx = (uint32_t)(0x66ffb0u);
L_0053e826:  // call 0x441ea0
    t0 = 0x00441ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e82bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e82b:  // cmp byte ptr [0x9c7c56], bl
    t0 = lsub<8>(M8((uint32_t)(0x9c7c56u)), (ebx & 0xffu), f);
L_0053e831:  // je 0x53e84b
    if (f.zf) goto L_0053e84b;
L_0053e833:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e835:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0053e837:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e83c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e841u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e841:  // mov ecx, 0x9c7550
    ecx = (uint32_t)(0x9c7550u);
L_0053e846:  // call 0x554df0
    t0 = 0x00554df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e84bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e84b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053e84c:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0053e84e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053e853:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e858u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e858:  // mov eax, dword ptr [0x8a9ac4]
    eax = (uint32_t)(M32((uint32_t)(0x8a9ac4u)));
L_0053e85d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053e85f:  // jne 0x53e892
    if (!f.zf) goto L_0053e892;
L_0053e861:  // cmp dword ptr [0x89ce58], ebx
    t0 = lsub<32>(M32((uint32_t)(0x89ce58u)), ebx, f);
L_0053e867:  // jne 0x53e892
    if (!f.zf) goto L_0053e892;
L_0053e869:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_0053e86b:  // jne 0x53e892
    if (!f.zf) goto L_0053e892;
L_0053e86d:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0053e873:  // jne 0x53e892
    if (!f.zf) goto L_0053e892;
L_0053e875:  // mov eax, dword ptr [0x8a9e28]
    eax = (uint32_t)(M32((uint32_t)(0x8a9e28u)));
L_0053e87a:  // mov edx, dword ptr [0x8a9e20]
    edx = (uint32_t)(M32((uint32_t)(0x8a9e20u)));
L_0053e880:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e881:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0053e883:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e884:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_0053e889:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0053e88d:  // call 0x4cb210
    t0 = 0x004cb210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e892u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e892:  // cmp dword ptr [ebp + 0x4b8], ebx
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x4b8u)), ebx, f);
L_0053e898:  // jne 0x53e8c8
    if (!f.zf) goto L_0053e8c8;
L_0053e89a:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0053e8a0:  // jne 0x53e8c8
    if (!f.zf) goto L_0053e8c8;
L_0053e8a2:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_0053e8a4:  // jne 0x53e8b0
    if (!f.zf) goto L_0053e8b0;
L_0053e8a6:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_0053e8ab:  // call 0x4cb300
    t0 = 0x004cb300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e8b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e8b0:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_0053e8b5:  // mov byte ptr [0x9c68ac], 1
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x1u);
L_0053e8bc:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0053e8c3:  // call 0x4cbc60
    t0 = 0x004cbc60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e8c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e8c8:  // mov ecx, 0x9c7490
    ecx = (uint32_t)(0x9c7490u);
L_0053e8cd:  // call 0x551920
    t0 = 0x00551920u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e8d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e8d2:  // call 0x404bd0
    t0 = 0x00404bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e8d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e8d7:  // test byte ptr [ebp + 0x4b4], 1
    t0 = llog<8>(M8((uint32_t)(ebp + 0x4b4u)) & 0x1u, f);
L_0053e8de:  // je 0x53e8f1
    if (f.zf) goto L_0053e8f1;
L_0053e8e0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053e8e2:  // call 0x44a650
    t0 = 0x0044a650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e8e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e8e7:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0053e8ec:  // call 0x492950
    t0 = 0x00492950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e8f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e8f1:  // cmp dword ptr [0x8a9ac4], ebx
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac4u)), ebx, f);
L_0053e8f7:  // jne 0x53eb7a
    if (!f.zf) goto L_0053eb7a;
L_0053e8fd:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0053e903:  // jne 0x53eb7a
    if (!f.zf) goto L_0053eb7a;
L_0053e909:  // cmp byte ptr [0x6fbe68], bl
    t0 = lsub<8>(M8((uint32_t)(0x6fbe68u)), (ebx & 0xffu), f);
L_0053e90f:  // je 0x53eb7a
    if (f.zf) goto L_0053eb7a;
L_0053e915:  // fld dword ptr [0x6fbe74]
    lpush(x, (long double)F32((uint32_t)(0x6fbe74u)));
L_0053e91b:  // fld dword ptr [0x6fbe70]
    lpush(x, (long double)F32((uint32_t)(0x6fbe70u)));
L_0053e921:  // fld dword ptr [0x6fbe6c]
    lpush(x, (long double)F32((uint32_t)(0x6fbe6cu)));
L_0053e927:  // fmul dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb8u)));
L_0053e92d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0053e931:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053e935:  // fmul dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb8u)));
L_0053e93b:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0053e93f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053e943:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_0053e947:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0053e94b:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0053e94f:  // fmul dword ptr [0x5d8bb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb8u)));
L_0053e955:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_0053e959:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0053e95d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0053e961:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0053e965:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0053e969:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0053e96d:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053e971:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053e973:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053e977:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0053e97b:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0053e97f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053e981:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0053e983:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0053e989:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0053e98b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0053e98e:  // jne 0x53e9b0
    if (!f.zf) goto L_0053e9b0;
L_0053e990:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0053e996:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053e99a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053e99c:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0053e9a0:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0053e9a4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053e9a6:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0053e9aa:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_0053e9ae:  // jmp 0x53e9b6
    goto L_0053e9b6;
L_0053e9b0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053e9b2:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053e9b6:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0053e9ba:  // fmul dword ptr [0x5d8c58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c58u)));
L_0053e9c0:  // mov edx, dword ptr [ebp + 0x4ac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053e9c6:  // mov ecx, dword ptr [ebp + edx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x4u)));
L_0053e9ca:  // lea edx, [esp + 0x130]
    edx = (uint32_t)((uint32_t)(esp + 0x130u));
L_0053e9d1:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0053e9d5:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0053e9d9:  // fmul dword ptr [0x5d8c58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c58u)));
L_0053e9df:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0053e9e1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e9e2:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0053e9e6:  // fmul dword ptr [0x5d8c58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c58u)));
L_0053e9ec:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0053e9f0:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e9f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e9f2:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0053e9f6:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0053e9f9:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0053e9fd:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053ea00:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0053ea04:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0053ea06:  // mov eax, dword ptr [ebp + 0x4ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053ea0c:  // mov ecx, dword ptr [ebp + eax*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x4u)));
L_0053ea10:  // lea eax, [esp + 0x140]
    eax = (uint32_t)((uint32_t)(esp + 0x140u));
L_0053ea17:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0053ea1b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053ea1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053ea1e:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0053ea22:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0053ea26:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ea28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ea28:  // mov edi, 0x5d892c
    edi = (uint32_t)(0x5d892cu);
L_0053ea2d:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_0053ea35:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_0053ea3d:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_0053ea45:  // mov dword ptr [esp + 0x5c], edi
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edi);
L_0053ea49:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053ea4b:  // mov dword ptr [esp + 0x70], ecx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ecx);
L_0053ea4f:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0053ea52:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_0053ea56:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053ea59:  // mov dword ptr [esp + 0x78], ecx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ecx);
L_0053ea5d:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0053ea60:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053ea64:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0053ea68:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_0053ea6c:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0053ea70:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_0053ea77:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0053ea7b:  // mov dword ptr [esp + 0x84], ecx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ecx);
L_0053ea82:  // mov dword ptr [esp + 0x88], edx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edx);
L_0053ea89:  // mov dword ptr [esp + 0x8c], eax
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(eax);
L_0053ea90:  // mov dword ptr [esp + 0x5c], 0x5d8bfc
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(0x5d8bfcu);
L_0053ea98:  // mov edx, dword ptr [ebp + 0x4ac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053ea9e:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0053eaa1:  // mov dword ptr [esp + 0x3c], ebx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebx);
L_0053eaa5:  // mov dword ptr [esp + 0x40], esi
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(esi);
L_0053eaa9:  // mov dword ptr [esp + 0x44], ebx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebx);
L_0053eaad:  // mov dword ptr [esp + 0x48], 0xbf800000
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0xbf800000u);
L_0053eab5:  // mov eax, dword ptr [ebp + edx*4 + 0x468]
    eax = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x468u)));
L_0053eabc:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0053eabe:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053eac0:  // mov dword ptr [esp + 0x158], ebx
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(ebx);
L_0053eac7:  // je 0x53ead2
    if (f.zf) goto L_0053ead2;
L_0053eac9:  // mov eax, dword ptr [eax + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x1cu)));
L_0053eacc:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053eace:  // je 0x53ead2
    if (f.zf) goto L_0053ead2;
L_0053ead0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053ead2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053ead3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ead5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053ead7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ead9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053eadb:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_0053eadf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053eae1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053eae2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053eae3:  // lea edx, [esp + 0x7c]
    edx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_0053eae7:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_0053eaea:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0053eaec:  // mov dword ptr [esp + 0x74], esp
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(esp);
L_0053eaf0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053eaf1:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053eaf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053eaf6:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_0053eafb:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053eb00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053eb00:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053eb02:  // jne 0x53eb6f
    if (!f.zf) goto L_0053eb6f;
L_0053eb04:  // mov eax, dword ptr [ebp + 0x4ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053eb0a:  // mov ecx, dword ptr [ebp + eax*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x4u)));
L_0053eb0e:  // lea eax, [esp + 0xf0]
    eax = (uint32_t)((uint32_t)(esp + 0xf0u));
L_0053eb15:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053eb16:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053eb18:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053eb1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053eb1a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0053eb1e:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0053eb21:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0053eb25:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053eb28:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053eb2c:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0053eb2e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053eb30:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053eb31:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0053eb34:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0053eb36:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0053eb3a:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053eb3e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053eb3f:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0053eb43:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0053eb47:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0053eb49:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0053eb4d:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0053eb51:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0053eb54:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0053eb58:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0053eb5b:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0053eb5e:  // mov ecx, dword ptr [ebp + 0xc80]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xc80u)));
L_0053eb64:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053eb65:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_0053eb6a:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053eb6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053eb6f:  // mov dword ptr [esp + 0x158], esi
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(esi);
L_0053eb76:  // mov dword ptr [esp + 0x5c], edi
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edi);
L_0053eb7a:  // mov eax, dword ptr [0x89d670]
    eax = (uint32_t)(M32((uint32_t)(0x89d670u)));
L_0053eb7f:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0053eb82:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0053eb84:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0053eb87:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0053eb8c:  // mov esi, 0x89d640
    esi = (uint32_t)(0x89d640u);
L_0053eb91:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0053eb93:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053eb95:  // mov ecx, dword ptr [0x89d674]
    ecx = (uint32_t)(M32((uint32_t)(0x89d674u)));
L_0053eb9b:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0053eb9d:  // mov eax, dword ptr [0x89d678]
    eax = (uint32_t)(M32((uint32_t)(0x89d678u)));
L_0053eba2:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0053eba5:  // mov ecx, dword ptr [0x89d67c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d67cu)));
L_0053ebab:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0053ebae:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0053ebb1:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053ebb6:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ebbbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ebbb:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0053ebc0:  // push 0x83d248
    t0 = 0x83d248u; esp -= 4; M32(esp) = t0;
L_0053ebc5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053ebc6:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0053ebc8:  // call dword ptr [edx + 0xc4]
    t0 = M32((uint32_t)(edx + 0xc4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ebceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ebce:  // cmp dword ptr [ebp + 0x4b8], ebx
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x4b8u)), ebx, f);
L_0053ebd4:  // jne 0x53ebe8
    if (!f.zf) goto L_0053ebe8;
L_0053ebd6:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0053ebdc:  // jne 0x53ebe8
    if (!f.zf) goto L_0053ebe8;
L_0053ebde:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_0053ebe3:  // call 0x54f7e0
    t0 = 0x0054f7e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ebe8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ebe8:  // mov eax, dword ptr [ebp + 0x4ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4acu)));
L_0053ebee:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053ebf3:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_0053ebf8:  // mov ebp, dword ptr [ebp + eax*4 + 0x468]
    ebp = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x468u)));
L_0053ebff:  // mov eax, dword ptr [esp + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_0053ec06:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0053ec09:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_0053ec0b:  // lea edi, [eax + 0x89d4a0]
    edi = (uint32_t)((uint32_t)(eax + 0x89d4a0u));
L_0053ec11:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053ec13:  // lea edi, [eax + 0x89d520]
    edi = (uint32_t)((uint32_t)(eax + 0x89d520u));
L_0053ec19:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053ec1e:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_0053ec23:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053ec25:  // lea edi, [eax + 0x89d5a0]
    edi = (uint32_t)((uint32_t)(eax + 0x89d5a0u));
L_0053ec2b:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053ec30:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_0053ec35:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053ec37:  // je 0x53ec86
    if (f.zf) goto L_0053ec86;
L_0053ec39:  // mov esi, dword ptr [ebp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_0053ec3c:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_0053ec3e:  // je 0x53ec86
    if (f.zf) goto L_0053ec86;
L_0053ec40:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_0053ec44:  // jne 0x53ec86
    if (!f.zf) goto L_0053ec86;
L_0053ec46:  // cmp dword ptr [ebp + 0x24], 1
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x24u)), 0x1u, f);
L_0053ec4a:  // jne 0x53ec86
    if (!f.zf) goto L_0053ec86;
L_0053ec4c:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0053ec51:  // call 0x44a650
    t0 = 0x0044a650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ec56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ec56:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_0053ec5d:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0053ec64:  // mov ecx, dword ptr [esi + 0x528]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x528u)));
L_0053ec6a:  // call 0x53bb50
    t0 = 0x0053bb50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ec6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ec6f:  // mov ecx, 0x9c7490
    ecx = (uint32_t)(0x9c7490u);
L_0053ec74:  // call 0x551920
    t0 = 0x00551920u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ec79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ec79:  // mov byte ptr [0x9c68ad], bl
    M8((uint32_t)(0x9c68adu)) = (uint8_t)((ebx & 0xffu));
L_0053ec7f:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_0053ec86:  // mov ecx, 0x9c74f8
    ecx = (uint32_t)(0x9c74f8u);
L_0053ec8b:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ec90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ec90:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053ec95:  // call 0x5158e0
    t0 = 0x005158e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ec9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ec9a:  // mov ecx, dword ptr [esp + 0x150]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x150u)));
L_0053eca1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053eca2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053eca3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053eca4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053eca6:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0053ecad:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053ecae:  // add esp, 0x14c
    t0 = ladd<32>(esp, 0x14cu, f);
    esp = (uint32_t)(t0);
L_0053ecb4:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053e2e0, 0053e2e0)
