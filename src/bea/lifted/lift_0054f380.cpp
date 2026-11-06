// lifted from 0054f380 (FUN_0054f380, 575 bytes, 186 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0054f380(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0054f380;
L_0054f380:  // mov eax, 0x402c
    eax = (uint32_t)(0x402cu);
L_0054f385:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054f38au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054f38a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054f38b:  // mov ebx, dword ptr [esp + 0x4034]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x4034u)));
L_0054f392:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054f393:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0054f395:  // mov eax, 0x400
    eax = (uint32_t)(0x400u);
L_0054f39a:  // sar eax, cl
    t0 = lsar<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0054f39c:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_0054f39e:  // je 0x54f3a6
    if (f.zf) goto L_0054f3a6;
L_0054f3a0:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054f3a1:  // cmp ecx, 0xb
    t0 = lsub<32>(ecx, 0xbu, f);
L_0054f3a4:  // jl 0x54f395
    if ((f.sf != f.of)) goto L_0054f395;
L_0054f3a6:  // cmp ecx, 0xb
    t0 = lsub<32>(ecx, 0xbu, f);
L_0054f3a9:  // jne 0x54f3b7
    if (!f.zf) goto L_0054f3b7;
L_0054f3ab:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054f3ac:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0054f3af:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054f3b0:  // add esp, 0x402c
    t0 = ladd<32>(esp, 0x402cu, f);
    esp = (uint32_t)(t0);
L_0054f3b6:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0054f3b7:  // mov esi, dword ptr [esp + 0x403c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x403cu)));
L_0054f3be:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0054f3c0:  // mov edx, 0x400
    edx = (uint32_t)(0x400u);
L_0054f3c5:  // sar edx, cl
    t0 = lsar<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_0054f3c7:  // cmp esi, edx
    t0 = lsub<32>(esi, edx, f);
L_0054f3c9:  // je 0x54f3d1
    if (f.zf) goto L_0054f3d1;
L_0054f3cb:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054f3cc:  // cmp ecx, 0xb
    t0 = lsub<32>(ecx, 0xbu, f);
L_0054f3cf:  // jl 0x54f3c0
    if ((f.sf != f.of)) goto L_0054f3c0;
L_0054f3d1:  // cmp ecx, 0xb
    t0 = lsub<32>(ecx, 0xbu, f);
L_0054f3d4:  // jne 0x54f3e2
    if (!f.zf) goto L_0054f3e2;
L_0054f3d6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054f3d7:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0054f3da:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054f3db:  // add esp, 0x402c
    t0 = ladd<32>(esp, 0x402cu, f);
    esp = (uint32_t)(t0);
L_0054f3e1:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0054f3e2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054f3e3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054f3e4:  // mov ecx, 0x800
    ecx = (uint32_t)(0x800u);
L_0054f3e9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054f3eb:  // lea edi, [esp + 0x3c]
    edi = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0054f3ef:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0054f3f1:  // mov ecx, 0x800
    ecx = (uint32_t)(0x800u);
L_0054f3f6:  // lea edi, [esp + 0x203c]
    edi = (uint32_t)((uint32_t)(esp + 0x203cu));
L_0054f3fd:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0054f3ff:  // lea eax, [ebx - 1]
    eax = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_0054f402:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054f403:  // and edx, 0x7f
    t0 = llog<32>(edx & 0x7fu, f);
    edx = (uint32_t)(t0);
L_0054f406:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0054f408:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0054f40a:  // lea eax, [esi - 1]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_0054f40d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054f40e:  // and edx, 0x3f
    t0 = llog<32>(edx & 0x3fu, f);
    edx = (uint32_t)(t0);
L_0054f411:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0054f413:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0054f415:  // sar ebp, 7
    t0 = lsar<32>(ebp, 0x7u, f);
    ebp = (uint32_t)(t0);
L_0054f418:  // sar ecx, 6
    t0 = lsar<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0054f41b:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0054f41c:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054f41d:  // cmp ebp, 1
    t0 = lsub<32>(ebp, 0x1u, f);
L_0054f420:  // mov dword ptr [esp + 0x38], ebp
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebp);
L_0054f424:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_0054f428:  // jne 0x54f437
    if (!f.zf) goto L_0054f437;
L_0054f42a:  // lea eax, [ebx + ebx]
    eax = (uint32_t)((uint32_t)(ebx + ebx));
L_0054f42d:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0054f431:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0054f435:  // jmp 0x54f447
    goto L_0054f447;
L_0054f437:  // mov dword ptr [esp + 0x14], 0x80
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x80u);
L_0054f43f:  // mov dword ptr [esp + 0x24], 0x100
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x100u);
L_0054f447:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_0054f44a:  // jne 0x54f461
    if (!f.zf) goto L_0054f461;
L_0054f44c:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0054f44e:  // mov ebx, esi
    ebx = (uint32_t)(esi);
L_0054f450:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054f451:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0054f453:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0054f457:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0054f459:  // sar edi, 1
    t0 = lsar<32>(edi, 0x1u, f);
    edi = (uint32_t)(t0);
L_0054f45b:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0054f45f:  // jmp 0x54f476
    goto L_0054f476;
L_0054f461:  // mov ebx, 0x40
    ebx = (uint32_t)(0x40u);
L_0054f466:  // mov dword ptr [esp + 0x18], 0x20
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x20u);
L_0054f46e:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054f472:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0054f476:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054f478:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0054f47a:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0054f47e:  // jle 0x54f5b2
    if ((f.zf || f.sf != f.of)) goto L_0054f5b2;
L_0054f484:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0054f486:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_0054f48e:  // jle 0x54f5a5
    if ((f.zf || f.sf != f.of)) goto L_0054f5a5;
L_0054f494:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054f498:  // imul esi, ebp
    t0 = limul32(esi, ebp, f);
    esi = (uint32_t)(t0);
L_0054f49b:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_0054f49f:  // imul esi, eax
    t0 = limul32(esi, eax, f);
    esi = (uint32_t)(t0);
L_0054f4a2:  // mov eax, dword ptr [esp + 0x4048]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4048u)));
L_0054f4a9:  // shl esi, 6
    t0 = lshl<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_0054f4ac:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0054f4ae:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_0054f4b2:  // jmp 0x54f4b8
    goto L_0054f4b8;
L_0054f4b4:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054f4b8:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0054f4ba:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0054f4bc:  // lea edx, [esp + 0x3c]
    edx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0054f4c0:  // jle 0x54f4fb
    if ((f.zf || f.sf != f.of)) goto L_0054f4fb;
L_0054f4c2:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0054f4c6:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054f4ca:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0054f4cc:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0054f4ce:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0054f4d0:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0054f4d3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054f4d5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0054f4d7:  // add edx, 0x80
    t0 = ladd<32>(edx, 0x80u, f);
    edx = (uint32_t)(t0);
L_0054f4dd:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054f4e0:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0054f4e2:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0054f4e6:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054f4ea:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_0054f4ec:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054f4ed:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0054f4f1:  // jne 0x54f4c6
    if (!f.zf) goto L_0054f4c6;
L_0054f4f3:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054f4f7:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054f4fb:  // lea ecx, [esp + 0x203c]
    ecx = (uint32_t)((uint32_t)(esp + 0x203cu));
L_0054f502:  // lea edx, [esp + 0x3c]
    edx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0054f506:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054f507:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054f508:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_0054f50a:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0054f50f:  // call 0x54f090
    t0 = 0x0054f090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0054f514u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0054f514:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0054f516:  // mov ebx, dword ptr [esp + 0x3c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0054f51a:  // imul eax, ebp
    t0 = limul32(eax, ebp, f);
    eax = (uint32_t)(t0);
L_0054f51d:  // imul eax, dword ptr [esp + 0x2c]
    t0 = limul32(eax, M32((uint32_t)(esp + 0x2cu)), f);
    eax = (uint32_t)(t0);
L_0054f522:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0054f524:  // mov ebx, dword ptr [esp + 0x34]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054f528:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0054f52b:  // mov edx, dword ptr [esp + 0x405c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x405cu)));
L_0054f532:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0054f535:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0054f537:  // lea edx, [esp + 0x203c]
    edx = (uint32_t)((uint32_t)(esp + 0x203cu));
L_0054f53e:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0054f540:  // jle 0x54f57e
    if ((f.zf || f.sf != f.of)) goto L_0054f57e;
L_0054f542:  // imul ebx, ebp
    t0 = limul32(ebx, ebp, f);
    ebx = (uint32_t)(t0);
L_0054f545:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_0054f549:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054f54d:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0054f54f:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0054f551:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0054f553:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0054f556:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054f558:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0054f55a:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0054f55c:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054f55f:  // add edx, 0x100
    t0 = ladd<32>(edx, 0x100u, f);
    edx = (uint32_t)(t0);
L_0054f565:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0054f567:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054f56b:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054f56c:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0054f570:  // jne 0x54f549
    if (!f.zf) goto L_0054f549;
L_0054f572:  // mov ebp, dword ptr [esp + 0x38]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0054f576:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054f57a:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054f57e:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054f582:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054f586:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054f587:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0054f589:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0054f58b:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0054f58f:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_0054f593:  // jl 0x54f4b4
    if ((f.sf != f.of)) goto L_0054f4b4;
L_0054f599:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054f59d:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054f5a1:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054f5a5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054f5a6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054f5a8:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0054f5ac:  // jl 0x54f484
    if ((f.sf != f.of)) goto L_0054f484;
L_0054f5b2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054f5b3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054f5b4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054f5b5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054f5b7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054f5b8:  // add esp, 0x402c
    t0 = ladd<32>(esp, 0x402cu, f);
    esp = (uint32_t)(t0);
L_0054f5be:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0054f380, 0054f380)
