// lifted from 00557300 (FUN_00557300, 1650 bytes, 447 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00557300(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00557300;
L_00557300:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00557306:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00557308:  // push 0x5d7dab
    t0 = 0x5d7dabu; esp -= 4; M32(esp) = t0;
L_0055730d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055730e:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00557312:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00557319:  // sub esp, 0x344
    t0 = lsub<32>(esp, 0x344u, f);
    esp = (uint32_t)(t0);
L_0055731f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00557320:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00557321:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00557323:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557324:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00557325:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00557327:  // lea eax, [ebp + eax*4 + 0xb8]
    eax = (uint32_t)((uint32_t)(ebp + eax * 4u + 0xb8u));
L_0055732e:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_00557330:  // mov ecx, dword ptr [0x8889f0]
    ecx = (uint32_t)(M32((uint32_t)(0x8889f0u)));
L_00557336:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_00557339:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0055733c:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0055733e:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00557341:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00557344:  // lea ecx, [eax*4 + 0x855bb4]
    ecx = (uint32_t)((uint32_t)(eax * 4u + 0x855bb4u));
L_0055734b:  // mov eax, dword ptr [eax*4 + 0x85ad1c]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x85ad1cu)));
L_00557352:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00557355:  // lea edx, [eax + edx*8]
    edx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_00557358:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_0055735b:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0055735e:  // lea eax, [ecx + eax*8 + 0x460]
    eax = (uint32_t)((uint32_t)(ecx + eax * 8u + 0x460u));
L_00557365:  // mov ecx, dword ptr [eax + 0xf50]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xf50u)));
L_0055736b:  // lea ecx, [ecx + ecx*2]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0055736e:  // mov edx, dword ptr [eax + ecx*8 + 0x150]
    edx = (uint32_t)(M32((uint32_t)(eax + ecx * 8u + 0x150u)));
L_00557375:  // lea eax, [eax + ecx*8 + 0x140]
    eax = (uint32_t)((uint32_t)(eax + ecx * 8u + 0x140u));
L_0055737c:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_0055737f:  // mov ecx, 0x9cc0d8
    ecx = (uint32_t)(0x9cc0d8u);
L_00557384:  // cmp dl, 3
    t0 = lsub<8>((edx & 0xffu), 0x3u, f);
L_00557387:  // sete bl
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_0055738a:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055738fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055738f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557391:  // je 0x55739a
    if (f.zf) goto L_0055739a;
L_00557393:  // mov eax, dword ptr [0x9cc0e4]
    eax = (uint32_t)(M32((uint32_t)(0x9cc0e4u)));
L_00557398:  // jmp 0x5573ad
    goto L_005573ad;
L_0055739a:  // mov ecx, 0x9cc0e8
    ecx = (uint32_t)(0x9cc0e8u);
L_0055739f:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005573a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005573a4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005573a6:  // je 0x5573ec
    if (f.zf) goto L_005573ec;
L_005573a8:  // mov eax, dword ptr [0x9cc0f4]
    eax = (uint32_t)(M32((uint32_t)(0x9cc0f4u)));
L_005573ad:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_005573b0:  // je 0x5573ec
    if (f.zf) goto L_005573ec;
L_005573b2:  // mov ecx, 0x9cc0d8
    ecx = (uint32_t)(0x9cc0d8u);
L_005573b7:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005573bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005573bc:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005573be:  // je 0x5573c7
    if (f.zf) goto L_005573c7;
L_005573c0:  // mov eax, dword ptr [0x9cc0e4]
    eax = (uint32_t)(M32((uint32_t)(0x9cc0e4u)));
L_005573c5:  // jmp 0x5573da
    goto L_005573da;
L_005573c7:  // mov ecx, 0x9cc0e8
    ecx = (uint32_t)(0x9cc0e8u);
L_005573cc:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005573d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005573d1:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005573d3:  // je 0x5573e8
    if (f.zf) goto L_005573e8;
L_005573d5:  // mov eax, dword ptr [0x9cc0f4]
    eax = (uint32_t)(M32((uint32_t)(0x9cc0f4u)));
L_005573da:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005573dd:  // jne 0x5573e8
    if (!f.zf) goto L_005573e8;
L_005573df:  // test byte ptr [ebp + 0x155], 1
    t0 = llog<8>(M8((uint32_t)(ebp + 0x155u)) & 0x1u, f);
L_005573e6:  // jne 0x5573ec
    if (!f.zf) goto L_005573ec;
L_005573e8:  // xor dl, dl
    t0 = llog<8>((edx & 0xffu) ^ (edx & 0xffu), f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005573ea:  // jmp 0x5573ee
    goto L_005573ee;
L_005573ec:  // mov dl, 1
    edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_005573ee:  // mov eax, dword ptr [0x9cc134]
    eax = (uint32_t)(M32((uint32_t)(0x9cc134u)));
L_005573f3:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_005573f7:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_005573f9:  // je 0x55749f
    if (f.zf) goto L_0055749f;
L_005573ff:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00557401:  // je 0x55750d
    if (f.zf) goto L_0055750d;
L_00557407:  // mov eax, dword ptr [ebp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_0055740d:  // cmp eax, 0xa
    t0 = lsub<32>(eax, 0xau, f);
L_00557410:  // ja 0x557499
    if ((!f.cf && !f.zf)) goto L_00557499;
L_00557416:  // jmp dword ptr [eax*4 + 0x557974]
    t0 = M32((uint32_t)(eax * 4u + 0x557974u));
    switch (t0) {
    case 0x0055741du: goto L_0055741d;
    case 0x0055742au: goto L_0055742a;
    case 0x00557437u: goto L_00557437;
    case 0x00557444u: goto L_00557444;
    case 0x00557451u: goto L_00557451;
    case 0x0055745eu: goto L_0055745e;
    case 0x0055746bu: goto L_0055746b;
    case 0x00557478u: goto L_00557478;
    case 0x00557485u: goto L_00557485;
    case 0x0055748fu: goto L_0055748f;
    case 0x00557499u: goto L_00557499;
    case 0x005574b9u: goto L_005574b9;
    case 0x005574c0u: goto L_005574c0;
    case 0x005574c7u: goto L_005574c7;
    case 0x005574ceu: goto L_005574ce;
    case 0x005574d5u: goto L_005574d5;
    case 0x005574dcu: goto L_005574dc;
    case 0x005574e3u: goto L_005574e3;
    case 0x005574eau: goto L_005574ea;
    case 0x005574f1u: goto L_005574f1;
    case 0x005574fdu: goto L_005574fd;
    case 0x00557504u: goto L_00557504;
    case 0x00557588u: goto L_00557588;
    case 0x0055758fu: goto L_0055758f;
    case 0x00557596u: goto L_00557596;
    case 0x0055759du: goto L_0055759d;
    case 0x005575a4u: goto L_005575a4;
    case 0x005575abu: goto L_005575ab;
    case 0x005575b2u: goto L_005575b2;
    case 0x005575b9u: goto L_005575b9;
    case 0x005575c0u: goto L_005575c0;
    case 0x005575ccu: goto L_005575cc;
    case 0x005575d3u: goto L_005575d3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_0055741d:  // mov dword ptr [esp + 0x14], 0x19
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x19u);
L_00557425:  // jmp 0x55750d
    goto L_0055750d;
L_0055742a:  // mov dword ptr [esp + 0x14], 0x1a
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x1au);
L_00557432:  // jmp 0x55750d
    goto L_0055750d;
L_00557437:  // mov dword ptr [esp + 0x14], 0x16
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x16u);
L_0055743f:  // jmp 0x55750d
    goto L_0055750d;
L_00557444:  // mov dword ptr [esp + 0x14], 0x15
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x15u);
L_0055744c:  // jmp 0x55750d
    goto L_0055750d;
L_00557451:  // mov dword ptr [esp + 0x14], 0x17
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x17u);
L_00557459:  // jmp 0x55750d
    goto L_0055750d;
L_0055745e:  // mov dword ptr [esp + 0x14], 0x31545844
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x31545844u);
L_00557466:  // jmp 0x55750d
    goto L_0055750d;
L_0055746b:  // mov dword ptr [esp + 0x14], 0x32545844
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x32545844u);
L_00557473:  // jmp 0x55750d
    goto L_0055750d;
L_00557478:  // mov dword ptr [esp + 0x14], 0x34545844
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x34545844u);
L_00557480:  // jmp 0x55750d
    goto L_0055750d;
L_00557485:  // mov dword ptr [esp + 0x14], 0x3c
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3cu);
L_0055748d:  // jmp 0x55750d
    goto L_0055750d;
L_0055748f:  // mov dword ptr [esp + 0x14], 0x3f
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3fu);
L_00557497:  // jmp 0x55750d
    goto L_0055750d;
L_00557499:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0055749d:  // jmp 0x55750d
    goto L_0055750d;
L_0055749f:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_005574a1:  // jne 0x55750d
    if (!f.zf) goto L_0055750d;
L_005574a3:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_005574a5:  // jne 0x55750d
    if (!f.zf) goto L_0055750d;
L_005574a7:  // mov eax, dword ptr [ebp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_005574ad:  // cmp eax, 0xa
    t0 = lsub<32>(eax, 0xau, f);
L_005574b0:  // ja 0x5574f1
    if ((!f.cf && !f.zf)) goto L_005574f1;
L_005574b2:  // jmp dword ptr [eax*4 + 0x5579a0]
    t0 = M32((uint32_t)(eax * 4u + 0x5579a0u));
    switch (t0) {
    case 0x005574b9u: goto L_005574b9;
    case 0x005574c0u: goto L_005574c0;
    case 0x005574c7u: goto L_005574c7;
    case 0x005574ceu: goto L_005574ce;
    case 0x005574d5u: goto L_005574d5;
    case 0x005574dcu: goto L_005574dc;
    case 0x005574e3u: goto L_005574e3;
    case 0x005574eau: goto L_005574ea;
    case 0x005574f1u: goto L_005574f1;
    case 0x005574fdu: goto L_005574fd;
    case 0x00557504u: goto L_00557504;
    case 0x00557588u: goto L_00557588;
    case 0x0055758fu: goto L_0055758f;
    case 0x00557596u: goto L_00557596;
    case 0x0055759du: goto L_0055759d;
    case 0x005575a4u: goto L_005575a4;
    case 0x005575abu: goto L_005575ab;
    case 0x005575b2u: goto L_005575b2;
    case 0x005575b9u: goto L_005575b9;
    case 0x005575c0u: goto L_005575c0;
    case 0x005575ccu: goto L_005575cc;
    case 0x005575d3u: goto L_005575d3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_005574b9:  // mov eax, 0x19
    eax = (uint32_t)(0x19u);
L_005574be:  // jmp 0x5574f3
    goto L_005574f3;
L_005574c0:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_005574c5:  // jmp 0x5574f3
    goto L_005574f3;
L_005574c7:  // mov eax, 0x16
    eax = (uint32_t)(0x16u);
L_005574cc:  // jmp 0x5574f3
    goto L_005574f3;
L_005574ce:  // mov eax, 0x15
    eax = (uint32_t)(0x15u);
L_005574d3:  // jmp 0x5574f3
    goto L_005574f3;
L_005574d5:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_005574da:  // jmp 0x5574f3
    goto L_005574f3;
L_005574dc:  // mov eax, 0x34545844
    eax = (uint32_t)(0x34545844u);
L_005574e1:  // jmp 0x557509
    goto L_00557509;
L_005574e3:  // mov eax, 0x3c
    eax = (uint32_t)(0x3cu);
L_005574e8:  // jmp 0x5574f3
    goto L_005574f3;
L_005574ea:  // mov eax, 0x3f
    eax = (uint32_t)(0x3fu);
L_005574ef:  // jmp 0x5574f3
    goto L_005574f3;
L_005574f1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005574f3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005574f5:  // sub ecx, 0x15
    t0 = lsub<32>(ecx, 0x15u, f);
    ecx = (uint32_t)(t0);
L_005574f8:  // je 0x557504
    if (f.zf) goto L_00557504;
L_005574fa:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005574fb:  // jne 0x557509
    if (!f.zf) goto L_00557509;
L_005574fd:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_00557502:  // jmp 0x557509
    goto L_00557509;
L_00557504:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_00557509:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0055750d:  // cmp dword ptr [0x663064], edi
    t0 = lsub<32>(M32((uint32_t)(0x663064u)), edi, f);
L_00557513:  // je 0x557524
    if (f.zf) goto L_00557524;
L_00557515:  // mov al, byte ptr [ebp + 0x154]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x154u))) & 0xffu);
L_0055751b:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_00557520:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557522:  // jne 0x557529
    if (!f.zf) goto L_00557529;
L_00557524:  // mov byte ptr [esp + 0x13], 0
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x0u);
L_00557529:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0055752c:  // mov esi, 0x640058
    esi = (uint32_t)(0x640058u);
L_00557531:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00557533:  // mov cl, bl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00557535:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_00557537:  // jne 0x557555
    if (!f.zf) goto L_00557555;
L_00557539:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0055753b:  // je 0x557551
    if (f.zf) goto L_00557551;
L_0055753d:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00557540:  // mov cl, bl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00557542:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00557545:  // jne 0x557555
    if (!f.zf) goto L_00557555;
L_00557547:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0055754a:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0055754d:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0055754f:  // jne 0x557531
    if (!f.zf) goto L_00557531;
L_00557551:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557553:  // jmp 0x55755a
    goto L_0055755a;
L_00557555:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00557557:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0055755a:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0055755c:  // jne 0x55756a
    if (!f.zf) goto L_0055756a;
L_0055755e:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00557560:  // je 0x55756a
    if (f.zf) goto L_0055756a;
L_00557562:  // mov dword ptr [esp + 0x14], 0x15
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x15u);
L_0055756a:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0055756e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557570:  // jne 0x5575dc
    if (!f.zf) goto L_005575dc;
L_00557572:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00557574:  // jne 0x5575dc
    if (!f.zf) goto L_005575dc;
L_00557576:  // mov eax, dword ptr [ebp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_0055757c:  // cmp eax, 0xa
    t0 = lsub<32>(eax, 0xau, f);
L_0055757f:  // ja 0x5575c0
    if ((!f.cf && !f.zf)) goto L_005575c0;
L_00557581:  // jmp dword ptr [eax*4 + 0x5579cc]
    t0 = M32((uint32_t)(eax * 4u + 0x5579ccu));
    switch (t0) {
    case 0x00557588u: goto L_00557588;
    case 0x0055758fu: goto L_0055758f;
    case 0x00557596u: goto L_00557596;
    case 0x0055759du: goto L_0055759d;
    case 0x005575a4u: goto L_005575a4;
    case 0x005575abu: goto L_005575ab;
    case 0x005575b2u: goto L_005575b2;
    case 0x005575b9u: goto L_005575b9;
    case 0x005575c0u: goto L_005575c0;
    case 0x005575ccu: goto L_005575cc;
    case 0x005575d3u: goto L_005575d3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00557588:  // mov eax, 0x19
    eax = (uint32_t)(0x19u);
L_0055758d:  // jmp 0x5575c2
    goto L_005575c2;
L_0055758f:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_00557594:  // jmp 0x5575c2
    goto L_005575c2;
L_00557596:  // mov eax, 0x16
    eax = (uint32_t)(0x16u);
L_0055759b:  // jmp 0x5575c2
    goto L_005575c2;
L_0055759d:  // mov eax, 0x15
    eax = (uint32_t)(0x15u);
L_005575a2:  // jmp 0x5575c2
    goto L_005575c2;
L_005575a4:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_005575a9:  // jmp 0x5575c2
    goto L_005575c2;
L_005575ab:  // mov eax, 0x34545844
    eax = (uint32_t)(0x34545844u);
L_005575b0:  // jmp 0x5575d8
    goto L_005575d8;
L_005575b2:  // mov eax, 0x3c
    eax = (uint32_t)(0x3cu);
L_005575b7:  // jmp 0x5575c2
    goto L_005575c2;
L_005575b9:  // mov eax, 0x3f
    eax = (uint32_t)(0x3fu);
L_005575be:  // jmp 0x5575c2
    goto L_005575c2;
L_005575c0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005575c2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005575c4:  // sub ecx, 0x15
    t0 = lsub<32>(ecx, 0x15u, f);
    ecx = (uint32_t)(t0);
L_005575c7:  // je 0x5575d3
    if (f.zf) goto L_005575d3;
L_005575c9:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_005575ca:  // jne 0x5575d8
    if (!f.zf) goto L_005575d8;
L_005575cc:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_005575d1:  // jmp 0x5575d8
    goto L_005575d8;
L_005575d3:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_005575d8:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_005575dc:  // mov cl, byte ptr [ebp + 0x154]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x154u))) & 0xffu);
L_005575e2:  // lea edi, [ebp + 8]
    edi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_005575e5:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_005575e7:  // setne dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_005575ea:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005575ed:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005575ef:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005575f1:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005575f3:  // lea esi, [esp + 0x250]
    esi = (uint32_t)((uint32_t)(esp + 0x250u));
L_005575fa:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_005575fc:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_005575fe:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_00557602:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00557604:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00557608:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0055760b:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0055760d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0055760f:  // mov ebx, dword ptr [ebp + 0x144]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_00557615:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00557618:  // lea eax, [esp + 0x250]
    eax = (uint32_t)((uint32_t)(esp + 0x250u));
L_0055761f:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00557621:  // mov cl, byte ptr [esp + 0x250]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x250u))) & 0xffu);
L_00557628:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0055762a:  // je 0x55763c
    if (f.zf) goto L_0055763c;
L_0055762c:  // cmp byte ptr [eax], 0x5c
    t0 = lsub<8>(M8((uint32_t)(eax)), 0x5cu, f);
L_0055762f:  // jne 0x557634
    if (!f.zf) goto L_00557634;
L_00557631:  // mov byte ptr [eax], 0x25
    M8((uint32_t)(eax)) = (uint8_t)(0x25u);
L_00557634:  // mov cl, byte ptr [eax + 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00557637:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00557638:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0055763a:  // jne 0x55762c
    if (!f.zf) goto L_0055762c;
L_0055763c:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_00557640:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557642:  // je 0x557650
    if (f.zf) goto L_00557650;
L_00557644:  // mov edi, 0x652710
    edi = (uint32_t)(0x652710u);
L_00557649:  // mov esi, 0x1c
    esi = (uint32_t)(0x1cu);
L_0055764e:  // jmp 0x557663
    goto L_00557663;
L_00557650:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00557652:  // mov edi, 0x6526e8
    edi = (uint32_t)(0x6526e8u);
L_00557657:  // jne 0x55765e
    if (!f.zf) goto L_0055765e;
L_00557659:  // mov edi, 0x6526bc
    edi = (uint32_t)(0x6526bcu);
L_0055765e:  // mov esi, 0x18
    esi = (uint32_t)(0x18u);
L_00557663:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00557664:  // call 0x557a00
    t0 = 0x00557a00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557669u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557669:  // mov ecx, dword ptr [esp + 0x368]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x368u)));
L_00557670:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557673:  // lea edx, [esp + 0x250]
    edx = (uint32_t)((uint32_t)(esp + 0x250u));
L_0055767a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055767b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055767c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0055767d:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_00557681:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00557682:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557683:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557688u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557688:  // lea edi, [esp + 0x30]
    edi = (uint32_t)((uint32_t)(esp + 0x30u));
L_0055768c:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0055768f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557691:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00557694:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00557696:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00557698:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00557699:  // lea edx, [esi + 0x41]
    edx = (uint32_t)((uint32_t)(esi + 0x41u));
L_0055769c:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0055769e:  // jbe 0x5576b8
    if ((f.cf || f.zf)) goto L_005576b8;
L_005576a0:  // mov byte ptr [esp + esi + 0x59], 0x2e
    M8((uint32_t)(esp + esi + 0x59u)) = (uint8_t)(0x2eu);
L_005576a5:  // mov byte ptr [esp + esi + 0x5a], 0x61
    M8((uint32_t)(esp + esi + 0x5au)) = (uint8_t)(0x61u);
L_005576aa:  // mov byte ptr [esp + esi + 0x5b], 0x79
    M8((uint32_t)(esp + esi + 0x5bu)) = (uint8_t)(0x79u);
L_005576af:  // mov byte ptr [esp + esi + 0x5c], 0x61
    M8((uint32_t)(esp + esi + 0x5cu)) = (uint8_t)(0x61u);
L_005576b4:  // mov byte ptr [esp + esi + 0x5d], al
    M8((uint32_t)(esp + esi + 0x5du)) = (uint8_t)((eax & 0xffu));
L_005576b8:  // lea ecx, [esp + 0x11c]
    ecx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_005576bf:  // call 0x547d70
    t0 = 0x00547d70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005576c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005576c4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005576c6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005576c8:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_005576cc:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_005576ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005576cf:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_005576d6:  // mov dword ptr [esp + 0x36c], 0
    M32((uint32_t)(esp + 0x36cu)) = (uint32_t)(0x0u);
L_005576e1:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_005576e4:  // call 0x547ec0
    t0 = 0x00547ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005576e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005576e9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005576eb:  // je 0x5578f5
    if (f.zf) goto L_005578f5;
L_005576f1:  // push 0x1a2
    t0 = 0x1a2u; esp -= 4; M32(esp) = t0;
L_005576f6:  // push 0x65269c
    t0 = 0x65269cu; esp -= 4; M32(esp) = t0;
L_005576fb:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_005576fd:  // push 0x500000
    t0 = 0x500000u; esp -= 4; M32(esp) = t0;
L_00557702:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00557707:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055770cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055770c:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0055770e:  // push 0x500000
    t0 = 0x500000u; esp -= 4; M32(esp) = t0;
L_00557713:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00557714:  // lea ecx, [esp + 0x124]
    ecx = (uint32_t)((uint32_t)(esp + 0x124u));
L_0055771b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557720u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557720:  // cmp eax, 0x500000
    t0 = lsub<32>(eax, 0x500000u, f);
L_00557725:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00557729:  // jne 0x557743
    if (!f.zf) goto L_00557743;
L_0055772b:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0055772d:  // push 0xd1
    t0 = 0xd1u; esp -= 4; M32(esp) = t0;
L_00557732:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557734:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00557739:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055773eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055773e:  // jmp 0x5578da
    goto L_005578da;
L_00557743:  // mov ax, word ptr [ebp + 0xb2]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebp + 0xb2u))) & 0xffffu);
L_0055774a:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0055774d:  // or edi, 0xffffffff
    t0 = llog<32>(edi | 0xffffffffu, f);
    edi = (uint32_t)(t0);
L_00557750:  // test ax, ax
    t0 = llog<16>((eax & 0xffffu) & (eax & 0xffffu), f);
L_00557753:  // je 0x557778
    if (f.zf) goto L_00557778;
L_00557755:  // mov edx, dword ptr [ebp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_0055775b:  // mov cl, al
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_0055775d:  // shl edx, cl
    t0 = lshl<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_0055775f:  // mov cx, ax
    ecx = (ecx & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
L_00557762:  // mov word ptr [ebp + 0xb2], 0
    M16((uint32_t)(ebp + 0xb2u)) = (uint16_t)(0x0u);
L_0055776b:  // shl word ptr [ebp + 0xb0], cl
    t0 = lshl<16>(M16((uint32_t)(ebp + 0xb0u)), (ecx & 0xffu), f);
    M16((uint32_t)(ebp + 0xb0u)) = (uint16_t)(t0);
L_00557772:  // mov dword ptr [ebp + 0xac], edx
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(edx);
L_00557778:  // mov ecx, 0x9cc0f8
    ecx = (uint32_t)(0x9cc0f8u);
L_0055777d:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557782u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557782:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557784:  // je 0x55778d
    if (f.zf) goto L_0055778d;
L_00557786:  // mov eax, dword ptr [0x9cc104]
    eax = (uint32_t)(M32((uint32_t)(0x9cc104u)));
L_0055778b:  // jmp 0x5577a4
    goto L_005577a4;
L_0055778d:  // mov ecx, 0x9cc108
    ecx = (uint32_t)(0x9cc108u);
L_00557792:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557797u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557797:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557799:  // je 0x557896
    if (f.zf) goto L_00557896;
L_0055779f:  // mov eax, dword ptr [0x9cc114]
    eax = (uint32_t)(M32((uint32_t)(0x9cc114u)));
L_005577a4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005577a6:  // je 0x557896
    if (f.zf) goto L_00557896;
L_005577ac:  // mov eax, dword ptr [ebp + 0x148]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x148u)));
L_005577b2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005577b4:  // je 0x5577bb
    if (f.zf) goto L_005577bb;
L_005577b6:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005577b9:  // jne 0x5577c4
    if (!f.zf) goto L_005577c4;
L_005577bb:  // test byte ptr [ebp + 0x155], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x155u)) & 0x4u, f);
L_005577c2:  // jne 0x5577e2
    if (!f.zf) goto L_005577e2;
L_005577c4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005577c6:  // je 0x557896
    if (f.zf) goto L_00557896;
L_005577cc:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005577cf:  // je 0x557896
    if (f.zf) goto L_00557896;
L_005577d5:  // test byte ptr [ebp + 0x155], 2
    t0 = llog<8>(M8((uint32_t)(ebp + 0x155u)) & 0x2u, f);
L_005577dc:  // jne 0x557896
    if (!f.zf) goto L_00557896;
L_005577e2:  // mov ecx, 0x9cc0f8
    ecx = (uint32_t)(0x9cc0f8u);
L_005577e7:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005577ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005577ec:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005577ee:  // je 0x5577f7
    if (f.zf) goto L_005577f7;
L_005577f0:  // mov eax, dword ptr [0x9cc104]
    eax = (uint32_t)(M32((uint32_t)(0x9cc104u)));
L_005577f5:  // jmp 0x55780e
    goto L_0055780e;
L_005577f7:  // mov ecx, 0x9cc108
    ecx = (uint32_t)(0x9cc108u);
L_005577fc:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557801u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557801:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557803:  // je 0x55780c
    if (f.zf) goto L_0055780c;
L_00557805:  // mov eax, dword ptr [0x9cc114]
    eax = (uint32_t)(M32((uint32_t)(0x9cc114u)));
L_0055780a:  // jmp 0x55780e
    goto L_0055780e;
L_0055780c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0055780e:  // mov ecx, 0x9cc0f8
    ecx = (uint32_t)(0x9cc0f8u);
L_00557813:  // mov word ptr [ebp + 0xb2], ax
    M16((uint32_t)(ebp + 0xb2u)) = (uint16_t)((eax & 0xffffu));
L_0055781a:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055781fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055781f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557821:  // je 0x55782b
    if (f.zf) goto L_0055782b;
L_00557823:  // mov ecx, dword ptr [0x9cc104]
    ecx = (uint32_t)(M32((uint32_t)(0x9cc104u)));
L_00557829:  // jmp 0x557843
    goto L_00557843;
L_0055782b:  // mov ecx, 0x9cc108
    ecx = (uint32_t)(0x9cc108u);
L_00557830:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557835u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557835:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557837:  // je 0x557841
    if (f.zf) goto L_00557841;
L_00557839:  // mov ecx, dword ptr [0x9cc114]
    ecx = (uint32_t)(M32((uint32_t)(0x9cc114u)));
L_0055783f:  // jmp 0x557843
    goto L_00557843;
L_00557841:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00557843:  // mov edx, dword ptr [ebp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_00557849:  // sar edx, cl
    t0 = lsar<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_0055784b:  // mov ecx, 0x9cc0f8
    ecx = (uint32_t)(0x9cc0f8u);
L_00557850:  // mov dword ptr [ebp + 0xac], edx
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(edx);
L_00557856:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055785bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055785b:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0055785d:  // je 0x557867
    if (f.zf) goto L_00557867;
L_0055785f:  // mov ecx, dword ptr [0x9cc104]
    ecx = (uint32_t)(M32((uint32_t)(0x9cc104u)));
L_00557865:  // jmp 0x55787f
    goto L_0055787f;
L_00557867:  // mov ecx, 0x9cc108
    ecx = (uint32_t)(0x9cc108u);
L_0055786c:  // call 0x528af0
    t0 = 0x00528af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557871u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557871:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557873:  // je 0x55787d
    if (f.zf) goto L_0055787d;
L_00557875:  // mov ecx, dword ptr [0x9cc114]
    ecx = (uint32_t)(M32((uint32_t)(0x9cc114u)));
L_0055787b:  // jmp 0x55787f
    goto L_0055787f;
L_0055787d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0055787f:  // sar word ptr [ebp + 0xb0], cl
    t0 = lsar<16>(M16((uint32_t)(ebp + 0xb0u)), (ecx & 0xffu), f);
    M16((uint32_t)(ebp + 0xb0u)) = (uint16_t)(t0);
L_00557886:  // mov ax, word ptr [ebp + 0xb0]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebp + 0xb0u))) & 0xffffu);
L_0055788d:  // mov esi, dword ptr [ebp + 0xac]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_00557893:  // movsx edi, ax
    edi = (uint32_t)((uint32_t)(int32_t)(int16_t)((eax & 0xffffu)));
L_00557896:  // mov ecx, dword ptr [esp + 0x364]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x364u)));
L_0055789d:  // mov edx, dword ptr [ebp + 0x150]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x150u)));
L_005578a3:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005578a8:  // lea ecx, [ebp + ecx*4 + 0xb8]
    ecx = (uint32_t)((uint32_t)(ebp + ecx * 4u + 0xb8u));
L_005578af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005578b0:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005578b4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005578b6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005578b8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005578ba:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005578bc:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005578be:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005578bf:  // movsx edx, word ptr [ebp + 0x156]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebp + 0x156u))));
L_005578c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005578c7:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005578cb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005578cd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005578ce:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005578cf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005578d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005578d1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005578d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005578d3:  // call 0x5758e6
    t0 = 0x005758e6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005578d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005578d8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_005578da:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005578db:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005578e0:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005578e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005578e5:  // lea ecx, [esp + 0x11c]
    ecx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_005578ec:  // call 0x548c00
    t0 = 0x00548c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005578f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005578f1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_005578f3:  // jge 0x55793e
    if ((f.sf == f.of)) goto L_0055793e;
L_005578f5:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_005578f9:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005578fb:  // jne 0x55790e
    if (!f.zf) goto L_0055790e;
L_005578fd:  // mov al, byte ptr [ebp + 0x154]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x154u))) & 0xffu);
L_00557903:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557905:  // je 0x55790e
    if (f.zf) goto L_0055790e;
L_00557907:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_0055790c:  // jmp 0x557922
    goto L_00557922;
L_0055790e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00557910:  // jge 0x55793e
    if ((f.sf == f.of)) goto L_0055793e;
L_00557912:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00557916:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557918:  // je 0x55793e
    if (f.zf) goto L_0055793e;
L_0055791a:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00557922:  // lea ecx, [esp + 0x11c]
    ecx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_00557929:  // mov dword ptr [esp + 0x35c], 0xffffffff
    M32((uint32_t)(esp + 0x35cu)) = (uint32_t)(0xffffffffu);
L_00557934:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557939u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557939:  // jmp 0x5575dc
    goto L_005575dc;
L_0055793e:  // lea ecx, [esp + 0x11c]
    ecx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_00557945:  // mov dword ptr [esp + 0x35c], 0xffffffff
    M32((uint32_t)(esp + 0x35cu)) = (uint32_t)(0xffffffffu);
L_00557950:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557955u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557955:  // mov ecx, dword ptr [esp + 0x354]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x354u)));
L_0055795c:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0055795e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0055795f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00557960:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00557961:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00557962:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00557969:  // add esp, 0x350
    t0 = ladd<32>(esp, 0x350u, f);
    esp = (uint32_t)(t0);
L_0055796f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00557300, 00557300)
