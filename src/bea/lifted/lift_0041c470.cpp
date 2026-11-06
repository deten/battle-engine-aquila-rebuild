// lifted from 0041c470 (FUN_0041c470, 17977 bytes, 5533 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041c470(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041c470;
L_0041c470:  // sub esp, 0x18
    t0 = lsub<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0041c473:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041c474:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041c475:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041c476:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041c477:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0041c479:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041c47b:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0041c47f:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0041c483:  // lea esi, [edi + 0x1f44]
    esi = (uint32_t)((uint32_t)(edi + 0x1f44u));
L_0041c489:  // mov ecx, 0x12c
    ecx = (uint32_t)(0x12cu);
L_0041c48e:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0041c490:  // mov ebp, 2
    ebp = (uint32_t)(0x2u);
L_0041c495:  // cmp dword ptr [eax], ebp
    t0 = lsub<32>(M32((uint32_t)(eax)), ebp, f);
L_0041c497:  // jl 0x41c49a
    if ((f.sf != f.of)) goto L_0041c49a;
L_0041c499:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0041c49a:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0041c49d:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041c49e:  // jne 0x41c495
    if (!f.zf) goto L_0041c495;
L_0041c4a0:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0041c4a2:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_0041c4a7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041c4a9:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0041c4ab:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c4b1:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0041c4b5:  // setle al
    eax = (eax & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c4b8:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0041c4bc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041c4be:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041c4c0:  // jle 0x41c4d4
    if ((f.zf || f.sf != f.of)) goto L_0041c4d4;
L_0041c4c2:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041c4c7:  // cmp dword ptr [edx], 0x64
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x64u, f);
L_0041c4ca:  // je 0x41c527
    if (f.zf) goto L_0041c527;
L_0041c4cc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041c4cd:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041c4d0:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041c4d2:  // jl 0x41c4c7
    if ((f.sf != f.of)) goto L_0041c4c7;
L_0041c4d4:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0041c4d6:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041c4db:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c4e0:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c4e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c4e5:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c4e8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041c4ea:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041c4ed:  // jne 0x41c4f5
    if (!f.zf) goto L_0041c4f5;
L_0041c4ef:  // cmp dword ptr [esi], ebx
    t0 = lsub<32>(M32((uint32_t)(esi)), ebx, f);
L_0041c4f1:  // jg 0x41c4f5
    if ((!f.zf && f.sf == f.of)) goto L_0041c4f5;
L_0041c4f3:  // mov dword ptr [esi], ebp
    M32((uint32_t)(esi)) = (uint32_t)(ebp);
L_0041c4f5:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041c4f7:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041c4fc:  // mov dword ptr [esp + 0x20], 0xc61c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xc61c3c00u);
L_0041c504:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c509u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c509:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041c50c:  // jne 0x41c545
    if (!f.zf) goto L_0041c545;
L_0041c50e:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041c510:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041c515:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c51au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c51a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c51c:  // je 0x41c531
    if (f.zf) goto L_0041c531;
L_0041c51e:  // mov ecx, dword ptr [eax + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_0041c521:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0041c525:  // jmp 0x41c545
    goto L_0041c545;
L_0041c527:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041c52a:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041c52f:  // jmp 0x41c4ea
    goto L_0041c4ea;
L_0041c531:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041c533:  // push 0x6242ec
    t0 = 0x6242ecu; esp -= 4; M32(esp) = t0;
L_0041c538:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c53d:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c542u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c542:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c545:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0041c549:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041c54e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041c54f:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c554u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c554:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041c556:  // je 0x41c565
    if (f.zf) goto L_0041c565;
L_0041c558:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c55a:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041c55c:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c55f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041c561:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c563:  // je 0x41c573
    if (f.zf) goto L_0041c573;
L_0041c565:  // cmp dword ptr [edi + 0x1f48], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f48u)), ebx, f);
L_0041c56b:  // jg 0x41c573
    if ((!f.zf && f.sf == f.of)) goto L_0041c573;
L_0041c56d:  // mov dword ptr [edi + 0x1f48], ebp
    M32((uint32_t)(edi + 0x1f48u)) = (uint32_t)(ebp);
L_0041c573:  // cmp dword ptr [edi + 0x1f48], ebp
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f48u)), ebp, f);
L_0041c579:  // jl 0x41c5f8
    if ((f.sf != f.of)) goto L_0041c5f8;
L_0041c57b:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041c580:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041c585:  // mov dword ptr [esp + 0x20], 0xc61c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xc61c3c00u);
L_0041c58d:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c592u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c592:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041c595:  // jne 0x41c5ca
    if (!f.zf) goto L_0041c5ca;
L_0041c597:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041c59c:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041c5a1:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c5a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c5a6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c5a8:  // je 0x41c5b3
    if (f.zf) goto L_0041c5b3;
L_0041c5aa:  // mov edx, dword ptr [eax + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_0041c5ad:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_0041c5b1:  // jmp 0x41c5ca
    goto L_0041c5ca;
L_0041c5b3:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041c5b8:  // push 0x6242ec
    t0 = 0x6242ecu; esp -= 4; M32(esp) = t0;
L_0041c5bd:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c5c2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c5c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c5c7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c5ca:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0041c5ce:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041c5d3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041c5d4:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c5d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c5d9:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041c5db:  // je 0x41c5ea
    if (f.zf) goto L_0041c5ea;
L_0041c5dd:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c5df:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041c5e1:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c5e4:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041c5e6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c5e8:  // je 0x41c5f8
    if (f.zf) goto L_0041c5f8;
L_0041c5ea:  // cmp dword ptr [edi + 0x1f4c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f4cu)), ebx, f);
L_0041c5f0:  // jg 0x41c5f8
    if ((!f.zf && f.sf == f.of)) goto L_0041c5f8;
L_0041c5f2:  // mov dword ptr [edi + 0x1f4c], ebp
    M32((uint32_t)(edi + 0x1f4cu)) = (uint32_t)(ebp);
L_0041c5f8:  // cmp dword ptr [edi + 0x1f4c], ebp
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f4cu)), ebp, f);
L_0041c5fe:  // jl 0x41c65a
    if ((f.sf != f.of)) goto L_0041c65a;
L_0041c600:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0041c604:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_0041c609:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041c60a:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c60fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c60f:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_0041c613:  // push 0xe8
    t0 = 0xe8u; esp -= 4; M32(esp) = t0;
L_0041c618:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041c619:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c61eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c61e:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0041c622:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041c625:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041c626:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041c62a:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c62fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c62f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c631:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041c635:  // jne 0x41c63b
    if (!f.zf) goto L_0041c63b;
L_0041c637:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041c63b:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041c63d:  // je 0x41c64c
    if (f.zf) goto L_0041c64c;
L_0041c63f:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041c641:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041c643:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c646:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041c648:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c64a:  // je 0x41c65a
    if (f.zf) goto L_0041c65a;
L_0041c64c:  // cmp dword ptr [edi + 0x1f50], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f50u)), ebx, f);
L_0041c652:  // jg 0x41c65a
    if ((!f.zf && f.sf == f.of)) goto L_0041c65a;
L_0041c654:  // mov dword ptr [edi + 0x1f50], ebp
    M32((uint32_t)(edi + 0x1f50u)) = (uint32_t)(ebp);
L_0041c65a:  // cmp dword ptr [edi + 0x1f50], ebp
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f50u)), ebp, f);
L_0041c660:  // jl 0x41c6bc
    if ((f.sf != f.of)) goto L_0041c6bc;
L_0041c662:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041c666:  // push 0x141
    t0 = 0x141u; esp -= 4; M32(esp) = t0;
L_0041c66b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041c66c:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c671u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c671:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041c675:  // push 0x142
    t0 = 0x142u; esp -= 4; M32(esp) = t0;
L_0041c67a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041c67b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c680u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c680:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041c684:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041c687:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041c68b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041c68c:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c691u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c691:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c693:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041c697:  // jne 0x41c69d
    if (!f.zf) goto L_0041c69d;
L_0041c699:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041c69d:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041c69f:  // je 0x41c6ae
    if (f.zf) goto L_0041c6ae;
L_0041c6a1:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c6a3:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041c6a5:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c6a8:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041c6aa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c6ac:  // je 0x41c6bc
    if (f.zf) goto L_0041c6bc;
L_0041c6ae:  // cmp dword ptr [edi + 0x1f54], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f54u)), ebx, f);
L_0041c6b4:  // jg 0x41c6bc
    if ((!f.zf && f.sf == f.of)) goto L_0041c6bc;
L_0041c6b6:  // mov dword ptr [edi + 0x1f54], ebp
    M32((uint32_t)(edi + 0x1f54u)) = (uint32_t)(ebp);
L_0041c6bc:  // cmp dword ptr [edi + 0x1f54], ebp
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f54u)), ebp, f);
L_0041c6c2:  // jl 0x41c71e
    if ((f.sf != f.of)) goto L_0041c71e;
L_0041c6c4:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041c6c8:  // push 0x141
    t0 = 0x141u; esp -= 4; M32(esp) = t0;
L_0041c6cd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041c6ce:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c6d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c6d3:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041c6d7:  // push 0x142
    t0 = 0x142u; esp -= 4; M32(esp) = t0;
L_0041c6dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041c6dd:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c6e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c6e2:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041c6e6:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041c6e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041c6ea:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041c6ee:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c6f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c6f3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c6f5:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041c6f9:  // jne 0x41c6ff
    if (!f.zf) goto L_0041c6ff;
L_0041c6fb:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041c6ff:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041c701:  // je 0x41c710
    if (f.zf) goto L_0041c710;
L_0041c703:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041c705:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041c707:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c70a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041c70c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c70e:  // je 0x41c71e
    if (f.zf) goto L_0041c71e;
L_0041c710:  // cmp dword ptr [edi + 0x1f58], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f58u)), ebx, f);
L_0041c716:  // jg 0x41c71e
    if ((!f.zf && f.sf == f.of)) goto L_0041c71e;
L_0041c718:  // mov dword ptr [edi + 0x1f58], ebp
    M32((uint32_t)(edi + 0x1f58u)) = (uint32_t)(ebp);
L_0041c71e:  // cmp dword ptr [edi + 0x1f58], ebp
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f58u)), ebp, f);
L_0041c724:  // jl 0x41c780
    if ((f.sf != f.of)) goto L_0041c780;
L_0041c726:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041c72a:  // push 0x26d
    t0 = 0x26du; esp -= 4; M32(esp) = t0;
L_0041c72f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041c730:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c735u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c735:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041c739:  // push 0x26e
    t0 = 0x26eu; esp -= 4; M32(esp) = t0;
L_0041c73e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041c73f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c744u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c744:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041c748:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041c74b:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041c74f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041c750:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c755u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c755:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c757:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041c75b:  // jne 0x41c761
    if (!f.zf) goto L_0041c761;
L_0041c75d:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041c761:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041c763:  // je 0x41c772
    if (f.zf) goto L_0041c772;
L_0041c765:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c767:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041c769:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c76c:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041c76e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c770:  // je 0x41c780
    if (f.zf) goto L_0041c780;
L_0041c772:  // cmp dword ptr [edi + 0x1f5c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f5cu)), ebx, f);
L_0041c778:  // jg 0x41c780
    if ((!f.zf && f.sf == f.of)) goto L_0041c780;
L_0041c77a:  // mov dword ptr [edi + 0x1f5c], ebp
    M32((uint32_t)(edi + 0x1f5cu)) = (uint32_t)(ebp);
L_0041c780:  // cmp dword ptr [edi + 0x1f5c], ebp
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f5cu)), ebp, f);
L_0041c786:  // jl 0x41c7e2
    if ((f.sf != f.of)) goto L_0041c7e2;
L_0041c788:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041c78c:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0041c791:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041c792:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c797u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c797:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041c79b:  // push 0x2e6
    t0 = 0x2e6u; esp -= 4; M32(esp) = t0;
L_0041c7a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041c7a1:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c7a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c7a6:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041c7aa:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041c7ad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041c7ae:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041c7b2:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c7b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c7b7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c7b9:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041c7bd:  // jne 0x41c7c3
    if (!f.zf) goto L_0041c7c3;
L_0041c7bf:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041c7c3:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041c7c5:  // je 0x41c7d4
    if (f.zf) goto L_0041c7d4;
L_0041c7c7:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041c7c9:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041c7cb:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041c7ce:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041c7d0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c7d2:  // je 0x41c7e2
    if (f.zf) goto L_0041c7e2;
L_0041c7d4:  // cmp dword ptr [edi + 0x1f60], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f60u)), ebx, f);
L_0041c7da:  // jg 0x41c7e2
    if ((!f.zf && f.sf == f.of)) goto L_0041c7e2;
L_0041c7dc:  // mov dword ptr [edi + 0x1f60], ebp
    M32((uint32_t)(edi + 0x1f60u)) = (uint32_t)(ebp);
L_0041c7e2:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c7e7:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c7e9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c7eb:  // jle 0x41c7ff
    if ((f.zf || f.sf != f.of)) goto L_0041c7ff;
L_0041c7ed:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041c7f2:  // cmp dword ptr [edx], 0x64
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x64u, f);
L_0041c7f5:  // je 0x41c84f
    if (f.zf) goto L_0041c84f;
L_0041c7f7:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041c7f8:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041c7fb:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041c7fd:  // jl 0x41c7f2
    if ((f.sf != f.of)) goto L_0041c7f2;
L_0041c7ff:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0041c801:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041c806:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c80b:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c810u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c810:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c815:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c818:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c81a:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041c81d:  // jne 0x41c832
    if (!f.zf) goto L_0041c832;
L_0041c81f:  // cmp dword ptr [edi + 0x1f64], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f64u)), ebx, f);
L_0041c825:  // jg 0x41c832
    if ((!f.zf && f.sf == f.of)) goto L_0041c832;
L_0041c827:  // mov dword ptr [edi + 0x1f64], ebp
    M32((uint32_t)(edi + 0x1f64u)) = (uint32_t)(ebp);
L_0041c82d:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c832:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c834:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c836:  // jle 0x41c865
    if ((f.zf || f.sf != f.of)) goto L_0041c865;
L_0041c838:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041c83d:  // cmp dword ptr [edx], 0xd3
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd3u, f);
L_0041c843:  // je 0x41c85a
    if (f.zf) goto L_0041c85a;
L_0041c845:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041c846:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041c849:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041c84b:  // jl 0x41c83d
    if ((f.sf != f.of)) goto L_0041c83d;
L_0041c84d:  // jmp 0x41c865
    goto L_0041c865;
L_0041c84f:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041c852:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041c858:  // jmp 0x41c81a
    goto L_0041c81a;
L_0041c85a:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041c85d:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041c863:  // jmp 0x41c883
    goto L_0041c883;
L_0041c865:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_0041c86a:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041c86f:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c874:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c879u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c879:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c87e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c881:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c883:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041c886:  // je 0x41c8c6
    if (f.zf) goto L_0041c8c6;
L_0041c888:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c88a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c88c:  // jle 0x41c8a3
    if ((f.zf || f.sf != f.of)) goto L_0041c8a3;
L_0041c88e:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041c893:  // cmp dword ptr [edx], 0xd4
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd4u, f);
L_0041c899:  // je 0x41c8f6
    if (f.zf) goto L_0041c8f6;
L_0041c89b:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041c89c:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041c89f:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041c8a1:  // jl 0x41c893
    if ((f.sf != f.of)) goto L_0041c893;
L_0041c8a3:  // push 0xd4
    t0 = 0xd4u; esp -= 4; M32(esp) = t0;
L_0041c8a8:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041c8ad:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c8b2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c8b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c8b7:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c8bc:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c8bf:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c8c1:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041c8c4:  // jne 0x41c8d9
    if (!f.zf) goto L_0041c8d9;
L_0041c8c6:  // cmp dword ptr [edi + 0x1f68], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f68u)), ebx, f);
L_0041c8cc:  // jg 0x41c8d9
    if ((!f.zf && f.sf == f.of)) goto L_0041c8d9;
L_0041c8ce:  // mov dword ptr [edi + 0x1f68], ebp
    M32((uint32_t)(edi + 0x1f68u)) = (uint32_t)(ebp);
L_0041c8d4:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c8d9:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c8db:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c8dd:  // jle 0x41c90c
    if ((f.zf || f.sf != f.of)) goto L_0041c90c;
L_0041c8df:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041c8e4:  // cmp dword ptr [edx], 0x190
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x190u, f);
L_0041c8ea:  // je 0x41c901
    if (f.zf) goto L_0041c901;
L_0041c8ec:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041c8ed:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041c8f0:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041c8f2:  // jl 0x41c8e4
    if ((f.sf != f.of)) goto L_0041c8e4;
L_0041c8f4:  // jmp 0x41c90c
    goto L_0041c90c;
L_0041c8f6:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041c8f9:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041c8ff:  // jmp 0x41c8c1
    goto L_0041c8c1;
L_0041c901:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041c904:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041c90a:  // jmp 0x41c92a
    goto L_0041c92a;
L_0041c90c:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041c911:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041c916:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c91b:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c920u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c920:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c925:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c928:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c92a:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041c92d:  // jne 0x41c942
    if (!f.zf) goto L_0041c942;
L_0041c92f:  // cmp dword ptr [edi + 0x1f6c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f6cu)), ebx, f);
L_0041c935:  // jg 0x41c942
    if ((!f.zf && f.sf == f.of)) goto L_0041c942;
L_0041c937:  // mov dword ptr [edi + 0x1f6c], ebp
    M32((uint32_t)(edi + 0x1f6cu)) = (uint32_t)(ebp);
L_0041c93d:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c942:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c944:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c946:  // jle 0x41c95d
    if ((f.zf || f.sf != f.of)) goto L_0041c95d;
L_0041c948:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041c94d:  // cmp dword ptr [edx], 0x2c6
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x2c6u, f);
L_0041c953:  // je 0x41c9b0
    if (f.zf) goto L_0041c9b0;
L_0041c955:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041c956:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041c959:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041c95b:  // jl 0x41c94d
    if ((f.sf != f.of)) goto L_0041c94d;
L_0041c95d:  // push 0x2c6
    t0 = 0x2c6u; esp -= 4; M32(esp) = t0;
L_0041c962:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041c967:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c96c:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c971u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c971:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c976:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c979:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c97b:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041c97e:  // jne 0x41c993
    if (!f.zf) goto L_0041c993;
L_0041c980:  // cmp dword ptr [edi + 0x1f70], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f70u)), ebx, f);
L_0041c986:  // jg 0x41c993
    if ((!f.zf && f.sf == f.of)) goto L_0041c993;
L_0041c988:  // mov dword ptr [edi + 0x1f70], ebp
    M32((uint32_t)(edi + 0x1f70u)) = (uint32_t)(ebp);
L_0041c98e:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c993:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c995:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041c997:  // jle 0x41c9c6
    if ((f.zf || f.sf != f.of)) goto L_0041c9c6;
L_0041c999:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041c99e:  // cmp dword ptr [edx], 0xc8
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xc8u, f);
L_0041c9a4:  // je 0x41c9bb
    if (f.zf) goto L_0041c9bb;
L_0041c9a6:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041c9a7:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041c9aa:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041c9ac:  // jl 0x41c99e
    if ((f.sf != f.of)) goto L_0041c99e;
L_0041c9ae:  // jmp 0x41c9c6
    goto L_0041c9c6;
L_0041c9b0:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041c9b3:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041c9b9:  // jmp 0x41c97b
    goto L_0041c97b;
L_0041c9bb:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041c9be:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041c9c4:  // jmp 0x41c9e4
    goto L_0041c9e4;
L_0041c9c6:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041c9cb:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041c9d0:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041c9d5:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041c9dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041c9da:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c9df:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041c9e2:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c9e4:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041c9e7:  // jne 0x41c9fc
    if (!f.zf) goto L_0041c9fc;
L_0041c9e9:  // cmp dword ptr [edi + 0x1f74], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f74u)), ebx, f);
L_0041c9ef:  // jg 0x41c9fc
    if ((!f.zf && f.sf == f.of)) goto L_0041c9fc;
L_0041c9f1:  // mov dword ptr [edi + 0x1f74], ebp
    M32((uint32_t)(edi + 0x1f74u)) = (uint32_t)(ebp);
L_0041c9f7:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041c9fc:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041c9fe:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ca00:  // jle 0x41ca17
    if ((f.zf || f.sf != f.of)) goto L_0041ca17;
L_0041ca02:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041ca07:  // cmp dword ptr [edx], 0x14b
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x14bu, f);
L_0041ca0d:  // je 0x41ca57
    if (f.zf) goto L_0041ca57;
L_0041ca0f:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041ca10:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041ca13:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041ca15:  // jl 0x41ca07
    if ((f.sf != f.of)) goto L_0041ca07;
L_0041ca17:  // push 0x14b
    t0 = 0x14bu; esp -= 4; M32(esp) = t0;
L_0041ca1c:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041ca21:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041ca26:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ca2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ca2b:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041ca30:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041ca33:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ca35:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041ca38:  // je 0x41ca90
    if (f.zf) goto L_0041ca90;
L_0041ca3a:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ca3c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ca3e:  // jle 0x41ca6d
    if ((f.zf || f.sf != f.of)) goto L_0041ca6d;
L_0041ca40:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041ca45:  // cmp dword ptr [edx], 0x14c
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x14cu, f);
L_0041ca4b:  // je 0x41ca62
    if (f.zf) goto L_0041ca62;
L_0041ca4d:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041ca4e:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041ca51:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041ca53:  // jl 0x41ca45
    if ((f.sf != f.of)) goto L_0041ca45;
L_0041ca55:  // jmp 0x41ca6d
    goto L_0041ca6d;
L_0041ca57:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041ca5a:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041ca60:  // jmp 0x41ca35
    goto L_0041ca35;
L_0041ca62:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041ca65:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041ca6b:  // jmp 0x41ca8b
    goto L_0041ca8b;
L_0041ca6d:  // push 0x14c
    t0 = 0x14cu; esp -= 4; M32(esp) = t0;
L_0041ca72:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041ca77:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041ca7c:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ca81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ca81:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041ca86:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041ca89:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ca8b:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041ca8e:  // jne 0x41caa3
    if (!f.zf) goto L_0041caa3;
L_0041ca90:  // cmp dword ptr [edi + 0x1f78], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f78u)), ebx, f);
L_0041ca96:  // jg 0x41caa3
    if ((!f.zf && f.sf == f.of)) goto L_0041caa3;
L_0041ca98:  // mov dword ptr [edi + 0x1f78], ebp
    M32((uint32_t)(edi + 0x1f78u)) = (uint32_t)(ebp);
L_0041ca9e:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041caa3:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041caa5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041caa7:  // jle 0x41cabb
    if ((f.zf || f.sf != f.of)) goto L_0041cabb;
L_0041caa9:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041caae:  // cmp dword ptr [edx], 0x6e
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x6eu, f);
L_0041cab1:  // je 0x41cb0b
    if (f.zf) goto L_0041cb0b;
L_0041cab3:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041cab4:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cab7:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cab9:  // jl 0x41caae
    if ((f.sf != f.of)) goto L_0041caae;
L_0041cabb:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041cabd:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cac2:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cac7:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041caccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cacc:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cad1:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cad4:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cad6:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cad9:  // jne 0x41caee
    if (!f.zf) goto L_0041caee;
L_0041cadb:  // cmp dword ptr [edi + 0x1f7c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f7cu)), ebx, f);
L_0041cae1:  // jg 0x41caee
    if ((!f.zf && f.sf == f.of)) goto L_0041caee;
L_0041cae3:  // mov dword ptr [edi + 0x1f7c], ebp
    M32((uint32_t)(edi + 0x1f7cu)) = (uint32_t)(ebp);
L_0041cae9:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041caee:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041caf0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041caf2:  // jle 0x41cb21
    if ((f.zf || f.sf != f.of)) goto L_0041cb21;
L_0041caf4:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041caf9:  // cmp dword ptr [edx], 0x26d
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x26du, f);
L_0041caff:  // je 0x41cb16
    if (f.zf) goto L_0041cb16;
L_0041cb01:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041cb02:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cb05:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cb07:  // jl 0x41caf9
    if ((f.sf != f.of)) goto L_0041caf9;
L_0041cb09:  // jmp 0x41cb21
    goto L_0041cb21;
L_0041cb0b:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cb0e:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cb14:  // jmp 0x41cad6
    goto L_0041cad6;
L_0041cb16:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cb19:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cb1f:  // jmp 0x41cb3f
    goto L_0041cb3f;
L_0041cb21:  // push 0x26d
    t0 = 0x26du; esp -= 4; M32(esp) = t0;
L_0041cb26:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cb2b:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cb30:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cb35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cb35:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cb3a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cb3d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cb3f:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cb42:  // je 0x41cb7d
    if (f.zf) goto L_0041cb7d;
L_0041cb44:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cb46:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cb48:  // jle 0x41cb5f
    if ((f.zf || f.sf != f.of)) goto L_0041cb5f;
L_0041cb4a:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041cb4f:  // cmp dword ptr [edx], 0x26e
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x26eu, f);
L_0041cb55:  // je 0x41cbc3
    if (f.zf) goto L_0041cbc3;
L_0041cb57:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041cb58:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cb5b:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cb5d:  // jl 0x41cb4f
    if ((f.sf != f.of)) goto L_0041cb4f;
L_0041cb5f:  // push 0x26e
    t0 = 0x26eu; esp -= 4; M32(esp) = t0;
L_0041cb64:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cb69:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cb6e:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cb73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cb73:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cb76:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cb78:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cb7b:  // jne 0x41cb8b
    if (!f.zf) goto L_0041cb8b;
L_0041cb7d:  // cmp dword ptr [edi + 0x1f80], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f80u)), ebx, f);
L_0041cb83:  // jg 0x41cb8b
    if ((!f.zf && f.sf == f.of)) goto L_0041cb8b;
L_0041cb85:  // mov dword ptr [edi + 0x1f80], ebp
    M32((uint32_t)(edi + 0x1f80u)) = (uint32_t)(ebp);
L_0041cb8b:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041cb90:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cb95:  // mov dword ptr [esp + 0x24], 0xc61c3c00
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xc61c3c00u);
L_0041cb9d:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cba2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cba2:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041cba5:  // jne 0x41cbe5
    if (!f.zf) goto L_0041cbe5;
L_0041cba7:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041cbac:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cbb1:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cbb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cbb6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cbb8:  // je 0x41cbce
    if (f.zf) goto L_0041cbce;
L_0041cbba:  // mov eax, dword ptr [eax + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_0041cbbd:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0041cbc1:  // jmp 0x41cbe5
    goto L_0041cbe5;
L_0041cbc3:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cbc6:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cbcc:  // jmp 0x41cb78
    goto L_0041cb78;
L_0041cbce:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041cbd3:  // push 0x6242ec
    t0 = 0x6242ecu; esp -= 4; M32(esp) = t0;
L_0041cbd8:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cbdd:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cbe2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cbe2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cbe5:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041cbe9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041cbea:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cbef:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cbf4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cbf4:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041cbf6:  // je 0x41cc05
    if (f.zf) goto L_0041cc05;
L_0041cbf8:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041cbfa:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041cbfc:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041cbff:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041cc01:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cc03:  // je 0x41cc13
    if (f.zf) goto L_0041cc13;
L_0041cc05:  // cmp dword ptr [edi + 0x1f84], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f84u)), ebx, f);
L_0041cc0b:  // jg 0x41cc13
    if ((!f.zf && f.sf == f.of)) goto L_0041cc13;
L_0041cc0d:  // mov dword ptr [edi + 0x1f84], ebp
    M32((uint32_t)(edi + 0x1f84u)) = (uint32_t)(ebp);
L_0041cc13:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041cc18:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cc1d:  // mov dword ptr [esp + 0x24], 0xc61c3c00
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xc61c3c00u);
L_0041cc25:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cc2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cc2a:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041cc2d:  // jne 0x41cc62
    if (!f.zf) goto L_0041cc62;
L_0041cc2f:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041cc34:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cc39:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cc3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cc3e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cc40:  // je 0x41cc4b
    if (f.zf) goto L_0041cc4b;
L_0041cc42:  // mov eax, dword ptr [eax + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_0041cc45:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0041cc49:  // jmp 0x41cc62
    goto L_0041cc62;
L_0041cc4b:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041cc50:  // push 0x6242ec
    t0 = 0x6242ecu; esp -= 4; M32(esp) = t0;
L_0041cc55:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cc5a:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cc5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cc5f:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cc62:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041cc66:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041cc67:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cc6c:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cc71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cc71:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041cc73:  // je 0x41cc82
    if (f.zf) goto L_0041cc82;
L_0041cc75:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041cc77:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041cc79:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041cc7c:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041cc7e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cc80:  // je 0x41cc90
    if (f.zf) goto L_0041cc90;
L_0041cc82:  // cmp dword ptr [edi + 0x1f88], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f88u)), ebx, f);
L_0041cc88:  // jg 0x41cc90
    if ((!f.zf && f.sf == f.of)) goto L_0041cc90;
L_0041cc8a:  // mov dword ptr [edi + 0x1f88], ebp
    M32((uint32_t)(edi + 0x1f88u)) = (uint32_t)(ebp);
L_0041cc90:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cc95:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cc97:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cc99:  // jle 0x41ccb0
    if ((f.zf || f.sf != f.of)) goto L_0041ccb0;
L_0041cc9b:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041cca0:  // cmp dword ptr [edx], 0x200
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x200u, f);
L_0041cca6:  // je 0x41cd03
    if (f.zf) goto L_0041cd03;
L_0041cca8:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041cca9:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041ccac:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041ccae:  // jl 0x41cca0
    if ((f.sf != f.of)) goto L_0041cca0;
L_0041ccb0:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_0041ccb5:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041ccba:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041ccbf:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ccc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ccc4:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041ccc9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cccc:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ccce:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041ccd1:  // jne 0x41cce6
    if (!f.zf) goto L_0041cce6;
L_0041ccd3:  // cmp dword ptr [edi + 0x1f8c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f8cu)), ebx, f);
L_0041ccd9:  // jg 0x41cce6
    if ((!f.zf && f.sf == f.of)) goto L_0041cce6;
L_0041ccdb:  // mov dword ptr [edi + 0x1f8c], ebp
    M32((uint32_t)(edi + 0x1f8cu)) = (uint32_t)(ebp);
L_0041cce1:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cce6:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cce8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ccea:  // jle 0x41cd19
    if ((f.zf || f.sf != f.of)) goto L_0041cd19;
L_0041ccec:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041ccf1:  // cmp dword ptr [edx], 0xdd
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xddu, f);
L_0041ccf7:  // je 0x41cd0e
    if (f.zf) goto L_0041cd0e;
L_0041ccf9:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041ccfa:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041ccfd:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041ccff:  // jl 0x41ccf1
    if ((f.sf != f.of)) goto L_0041ccf1;
L_0041cd01:  // jmp 0x41cd19
    goto L_0041cd19;
L_0041cd03:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cd06:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cd0c:  // jmp 0x41ccce
    goto L_0041ccce;
L_0041cd0e:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cd11:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cd17:  // jmp 0x41cd37
    goto L_0041cd37;
L_0041cd19:  // push 0xdd
    t0 = 0xddu; esp -= 4; M32(esp) = t0;
L_0041cd1e:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cd23:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cd28:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cd2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cd2d:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cd32:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cd35:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cd37:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cd3a:  // je 0x41cd7a
    if (f.zf) goto L_0041cd7a;
L_0041cd3c:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cd3e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cd40:  // jle 0x41cd57
    if ((f.zf || f.sf != f.of)) goto L_0041cd57;
L_0041cd42:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041cd47:  // cmp dword ptr [edx], 0xde
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xdeu, f);
L_0041cd4d:  // je 0x41cdaa
    if (f.zf) goto L_0041cdaa;
L_0041cd4f:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041cd50:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cd53:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cd55:  // jl 0x41cd47
    if ((f.sf != f.of)) goto L_0041cd47;
L_0041cd57:  // push 0xde
    t0 = 0xdeu; esp -= 4; M32(esp) = t0;
L_0041cd5c:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cd61:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cd66:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cd6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cd6b:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cd70:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cd73:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cd75:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cd78:  // jne 0x41cd8d
    if (!f.zf) goto L_0041cd8d;
L_0041cd7a:  // cmp dword ptr [edi + 0x1f90], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f90u)), ebx, f);
L_0041cd80:  // jg 0x41cd8d
    if ((!f.zf && f.sf == f.of)) goto L_0041cd8d;
L_0041cd82:  // mov dword ptr [edi + 0x1f90], ebp
    M32((uint32_t)(edi + 0x1f90u)) = (uint32_t)(ebp);
L_0041cd88:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cd8d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cd8f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cd91:  // jle 0x41cdc0
    if ((f.zf || f.sf != f.of)) goto L_0041cdc0;
L_0041cd93:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041cd98:  // cmp dword ptr [edx], 0x263
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x263u, f);
L_0041cd9e:  // je 0x41cdb5
    if (f.zf) goto L_0041cdb5;
L_0041cda0:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041cda1:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cda4:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cda6:  // jl 0x41cd98
    if ((f.sf != f.of)) goto L_0041cd98;
L_0041cda8:  // jmp 0x41cdc0
    goto L_0041cdc0;
L_0041cdaa:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cdad:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cdb3:  // jmp 0x41cd75
    goto L_0041cd75;
L_0041cdb5:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cdb8:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cdbe:  // jmp 0x41cdde
    goto L_0041cdde;
L_0041cdc0:  // push 0x263
    t0 = 0x263u; esp -= 4; M32(esp) = t0;
L_0041cdc5:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cdca:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cdcf:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cdd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cdd4:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cdd9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cddc:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cdde:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cde1:  // je 0x41ce21
    if (f.zf) goto L_0041ce21;
L_0041cde3:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cde5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cde7:  // jle 0x41cdfe
    if ((f.zf || f.sf != f.of)) goto L_0041cdfe;
L_0041cde9:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041cdee:  // cmp dword ptr [edx], 0x264
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x264u, f);
L_0041cdf4:  // je 0x41ce51
    if (f.zf) goto L_0041ce51;
L_0041cdf6:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041cdf7:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cdfa:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cdfc:  // jl 0x41cdee
    if ((f.sf != f.of)) goto L_0041cdee;
L_0041cdfe:  // push 0x264
    t0 = 0x264u; esp -= 4; M32(esp) = t0;
L_0041ce03:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041ce08:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041ce0d:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ce12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ce12:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041ce17:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041ce1a:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ce1c:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041ce1f:  // jne 0x41ce34
    if (!f.zf) goto L_0041ce34;
L_0041ce21:  // cmp dword ptr [edi + 0x1f94], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f94u)), ebx, f);
L_0041ce27:  // jg 0x41ce34
    if ((!f.zf && f.sf == f.of)) goto L_0041ce34;
L_0041ce29:  // mov dword ptr [edi + 0x1f94], ebp
    M32((uint32_t)(edi + 0x1f94u)) = (uint32_t)(ebp);
L_0041ce2f:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041ce34:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ce36:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ce38:  // jle 0x41ce67
    if ((f.zf || f.sf != f.of)) goto L_0041ce67;
L_0041ce3a:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041ce3f:  // cmp dword ptr [edx], 0xd3
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd3u, f);
L_0041ce45:  // je 0x41ce5c
    if (f.zf) goto L_0041ce5c;
L_0041ce47:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041ce48:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041ce4b:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041ce4d:  // jl 0x41ce3f
    if ((f.sf != f.of)) goto L_0041ce3f;
L_0041ce4f:  // jmp 0x41ce67
    goto L_0041ce67;
L_0041ce51:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041ce54:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041ce5a:  // jmp 0x41ce1c
    goto L_0041ce1c;
L_0041ce5c:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041ce5f:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041ce65:  // jmp 0x41ce85
    goto L_0041ce85;
L_0041ce67:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_0041ce6c:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041ce71:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041ce76:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ce7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ce7b:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041ce80:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041ce83:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ce85:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041ce88:  // je 0x41cec8
    if (f.zf) goto L_0041cec8;
L_0041ce8a:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041ce8c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ce8e:  // jle 0x41cea5
    if ((f.zf || f.sf != f.of)) goto L_0041cea5;
L_0041ce90:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041ce95:  // cmp dword ptr [edx], 0xd4
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd4u, f);
L_0041ce9b:  // je 0x41cef8
    if (f.zf) goto L_0041cef8;
L_0041ce9d:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041ce9e:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cea1:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cea3:  // jl 0x41ce95
    if ((f.sf != f.of)) goto L_0041ce95;
L_0041cea5:  // push 0xd4
    t0 = 0xd4u; esp -= 4; M32(esp) = t0;
L_0041ceaa:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041ceaf:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041ceb4:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ceb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ceb9:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cebe:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cec1:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cec3:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cec6:  // jne 0x41cedb
    if (!f.zf) goto L_0041cedb;
L_0041cec8:  // cmp dword ptr [edi + 0x1f98], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f98u)), ebx, f);
L_0041cece:  // jg 0x41cedb
    if ((!f.zf && f.sf == f.of)) goto L_0041cedb;
L_0041ced0:  // mov dword ptr [edi + 0x1f98], ebp
    M32((uint32_t)(edi + 0x1f98u)) = (uint32_t)(ebp);
L_0041ced6:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cedb:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cedd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cedf:  // jle 0x41cf0e
    if ((f.zf || f.sf != f.of)) goto L_0041cf0e;
L_0041cee1:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041cee6:  // cmp dword ptr [edx], 0x12c
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x12cu, f);
L_0041ceec:  // je 0x41cf03
    if (f.zf) goto L_0041cf03;
L_0041ceee:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041ceef:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cef2:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041cef4:  // jl 0x41cee6
    if ((f.sf != f.of)) goto L_0041cee6;
L_0041cef6:  // jmp 0x41cf0e
    goto L_0041cf0e;
L_0041cef8:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cefb:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cf01:  // jmp 0x41cec3
    goto L_0041cec3;
L_0041cf03:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041cf06:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041cf0c:  // jmp 0x41cf27
    goto L_0041cf27;
L_0041cf0e:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041cf13:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cf18:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cf1d:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cf22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cf22:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cf25:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041cf27:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041cf2a:  // jne 0x41cf3a
    if (!f.zf) goto L_0041cf3a;
L_0041cf2c:  // cmp dword ptr [edi + 0x1f9c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1f9cu)), ebx, f);
L_0041cf32:  // jg 0x41cf3a
    if ((!f.zf && f.sf == f.of)) goto L_0041cf3a;
L_0041cf34:  // mov dword ptr [edi + 0x1f9c], ebp
    M32((uint32_t)(edi + 0x1f9cu)) = (uint32_t)(ebp);
L_0041cf3a:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041cf3f:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cf44:  // mov dword ptr [esp + 0x24], 0xc61c3c00
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xc61c3c00u);
L_0041cf4c:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cf51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cf51:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041cf54:  // jne 0x41cf89
    if (!f.zf) goto L_0041cf89;
L_0041cf56:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041cf5b:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cf60:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cf65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cf65:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cf67:  // je 0x41cf72
    if (f.zf) goto L_0041cf72;
L_0041cf69:  // mov eax, dword ptr [eax + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_0041cf6c:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0041cf70:  // jmp 0x41cf89
    goto L_0041cf89;
L_0041cf72:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041cf77:  // push 0x6242ec
    t0 = 0x6242ecu; esp -= 4; M32(esp) = t0;
L_0041cf7c:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cf81:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cf86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cf86:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cf89:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041cf8d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041cf8e:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041cf93:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cf98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cf98:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041cf9a:  // je 0x41cfa9
    if (f.zf) goto L_0041cfa9;
L_0041cf9c:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041cf9e:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041cfa0:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041cfa3:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041cfa5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041cfa7:  // je 0x41cfb7
    if (f.zf) goto L_0041cfb7;
L_0041cfa9:  // cmp dword ptr [edi + 0x1fa0], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fa0u)), ebx, f);
L_0041cfaf:  // jg 0x41cfb7
    if ((!f.zf && f.sf == f.of)) goto L_0041cfb7;
L_0041cfb1:  // mov dword ptr [edi + 0x1fa0], ebp
    M32((uint32_t)(edi + 0x1fa0u)) = (uint32_t)(ebp);
L_0041cfb7:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cfbd:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041cfbf:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041cfc1:  // jle 0x41cfd8
    if ((f.zf || f.sf != f.of)) goto L_0041cfd8;
L_0041cfc3:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041cfc8:  // cmp dword ptr [edx], 0x14b
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x14bu, f);
L_0041cfce:  // je 0x41d019
    if (f.zf) goto L_0041d019;
L_0041cfd0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041cfd1:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041cfd4:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041cfd6:  // jl 0x41cfc8
    if ((f.sf != f.of)) goto L_0041cfc8;
L_0041cfd8:  // push 0x14b
    t0 = 0x14bu; esp -= 4; M32(esp) = t0;
L_0041cfdd:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041cfe2:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041cfe7:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041cfecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041cfec:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041cff2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041cff5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041cff7:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041cffa:  // je 0x41d051
    if (f.zf) goto L_0041d051;
L_0041cffc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041cffe:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d000:  // jle 0x41d02d
    if ((f.zf || f.sf != f.of)) goto L_0041d02d;
L_0041d002:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d007:  // cmp dword ptr [edx], 0x14c
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x14cu, f);
L_0041d00d:  // je 0x41d023
    if (f.zf) goto L_0041d023;
L_0041d00f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d010:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d013:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d015:  // jl 0x41d007
    if ((f.sf != f.of)) goto L_0041d007;
L_0041d017:  // jmp 0x41d02d
    goto L_0041d02d;
L_0041d019:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d01c:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d021:  // jmp 0x41cff7
    goto L_0041cff7;
L_0041d023:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d026:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d02b:  // jmp 0x41d04c
    goto L_0041d04c;
L_0041d02d:  // push 0x14c
    t0 = 0x14cu; esp -= 4; M32(esp) = t0;
L_0041d032:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d037:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d03c:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d041u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d041:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d047:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d04a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d04c:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d04f:  // jne 0x41d065
    if (!f.zf) goto L_0041d065;
L_0041d051:  // cmp dword ptr [edi + 0x1fa4], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fa4u)), ebx, f);
L_0041d057:  // jg 0x41d065
    if ((!f.zf && f.sf == f.of)) goto L_0041d065;
L_0041d059:  // mov dword ptr [edi + 0x1fa4], ebp
    M32((uint32_t)(edi + 0x1fa4u)) = (uint32_t)(ebp);
L_0041d05f:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d065:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d067:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d069:  // jle 0x41d084
    if ((f.zf || f.sf != f.of)) goto L_0041d084;
L_0041d06b:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d070:  // cmp dword ptr [edx], 0x190
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x190u, f);
L_0041d076:  // je 0x41d12d
    if (f.zf) goto L_0041d12d;
L_0041d07c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d07d:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d080:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d082:  // jl 0x41d070
    if ((f.sf != f.of)) goto L_0041d070;
L_0041d084:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041d089:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d08e:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d093:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d098u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d098:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d09b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d09d:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d0a0:  // jne 0x41d0b0
    if (!f.zf) goto L_0041d0b0;
L_0041d0a2:  // cmp dword ptr [edi + 0x1fa8], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fa8u)), ebx, f);
L_0041d0a8:  // jg 0x41d0b0
    if ((!f.zf && f.sf == f.of)) goto L_0041d0b0;
L_0041d0aa:  // mov dword ptr [edi + 0x1fa8], ebp
    M32((uint32_t)(edi + 0x1fa8u)) = (uint32_t)(ebp);
L_0041d0b0:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d0b4:  // push 0xdd
    t0 = 0xddu; esp -= 4; M32(esp) = t0;
L_0041d0b9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041d0ba:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d0bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d0bf:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041d0c3:  // push 0xde
    t0 = 0xdeu; esp -= 4; M32(esp) = t0;
L_0041d0c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041d0c9:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d0ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d0ce:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041d0d2:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041d0d5:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d0d9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041d0da:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d0dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d0df:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d0e1:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041d0e5:  // jne 0x41d0eb
    if (!f.zf) goto L_0041d0eb;
L_0041d0e7:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041d0eb:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041d0ed:  // je 0x41d0fc
    if (f.zf) goto L_0041d0fc;
L_0041d0ef:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041d0f1:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041d0f3:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041d0f6:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041d0f8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d0fa:  // je 0x41d10a
    if (f.zf) goto L_0041d10a;
L_0041d0fc:  // cmp dword ptr [edi + 0x1fac], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1facu)), ebx, f);
L_0041d102:  // jg 0x41d10a
    if ((!f.zf && f.sf == f.of)) goto L_0041d10a;
L_0041d104:  // mov dword ptr [edi + 0x1fac], ebp
    M32((uint32_t)(edi + 0x1facu)) = (uint32_t)(ebp);
L_0041d10a:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d110:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d112:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d114:  // jle 0x41d144
    if ((f.zf || f.sf != f.of)) goto L_0041d144;
L_0041d116:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d11b:  // cmp dword ptr [edx], 0xdd
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xddu, f);
L_0041d121:  // je 0x41d13a
    if (f.zf) goto L_0041d13a;
L_0041d123:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d124:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d127:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d129:  // jl 0x41d11b
    if ((f.sf != f.of)) goto L_0041d11b;
L_0041d12b:  // jmp 0x41d144
    goto L_0041d144;
L_0041d12d:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d130:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d135:  // jmp 0x41d09d
    goto L_0041d09d;
L_0041d13a:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d13d:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d142:  // jmp 0x41d163
    goto L_0041d163;
L_0041d144:  // push 0xdd
    t0 = 0xddu; esp -= 4; M32(esp) = t0;
L_0041d149:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d14e:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d153:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d158u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d158:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d15e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d161:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d163:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d166:  // je 0x41d1a7
    if (f.zf) goto L_0041d1a7;
L_0041d168:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d16a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d16c:  // jle 0x41d183
    if ((f.zf || f.sf != f.of)) goto L_0041d183;
L_0041d16e:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d173:  // cmp dword ptr [edx], 0xde
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xdeu, f);
L_0041d179:  // je 0x41d1d8
    if (f.zf) goto L_0041d1d8;
L_0041d17b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d17c:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d17f:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d181:  // jl 0x41d173
    if ((f.sf != f.of)) goto L_0041d173;
L_0041d183:  // push 0xde
    t0 = 0xdeu; esp -= 4; M32(esp) = t0;
L_0041d188:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d18d:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d192:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d197u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d197:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d19d:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d1a0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d1a2:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d1a5:  // jne 0x41d1bb
    if (!f.zf) goto L_0041d1bb;
L_0041d1a7:  // cmp dword ptr [edi + 0x1fb0], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fb0u)), ebx, f);
L_0041d1ad:  // jg 0x41d1bb
    if ((!f.zf && f.sf == f.of)) goto L_0041d1bb;
L_0041d1af:  // mov dword ptr [edi + 0x1fb0], ebp
    M32((uint32_t)(edi + 0x1fb0u)) = (uint32_t)(ebp);
L_0041d1b5:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d1bb:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d1bd:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d1bf:  // jle 0x41d1ec
    if ((f.zf || f.sf != f.of)) goto L_0041d1ec;
L_0041d1c1:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d1c6:  // cmp dword ptr [edx], 0xc8
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xc8u, f);
L_0041d1cc:  // je 0x41d1e2
    if (f.zf) goto L_0041d1e2;
L_0041d1ce:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d1cf:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d1d2:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d1d4:  // jl 0x41d1c6
    if ((f.sf != f.of)) goto L_0041d1c6;
L_0041d1d6:  // jmp 0x41d1ec
    goto L_0041d1ec;
L_0041d1d8:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d1db:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d1e0:  // jmp 0x41d1a2
    goto L_0041d1a2;
L_0041d1e2:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d1e5:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d1ea:  // jmp 0x41d20b
    goto L_0041d20b;
L_0041d1ec:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041d1f1:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d1f6:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d1fb:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d200u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d200:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d206:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d209:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d20b:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d20e:  // jne 0x41d224
    if (!f.zf) goto L_0041d224;
L_0041d210:  // cmp dword ptr [edi + 0x1fb4], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fb4u)), ebx, f);
L_0041d216:  // jg 0x41d224
    if ((!f.zf && f.sf == f.of)) goto L_0041d224;
L_0041d218:  // mov dword ptr [edi + 0x1fb4], ebp
    M32((uint32_t)(edi + 0x1fb4u)) = (uint32_t)(ebp);
L_0041d21e:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d224:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d226:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d228:  // jle 0x41d23f
    if ((f.zf || f.sf != f.of)) goto L_0041d23f;
L_0041d22a:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d22f:  // cmp dword ptr [edx], 0x12c
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x12cu, f);
L_0041d235:  // je 0x41d294
    if (f.zf) goto L_0041d294;
L_0041d237:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d238:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d23b:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d23d:  // jl 0x41d22f
    if ((f.sf != f.of)) goto L_0041d22f;
L_0041d23f:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041d244:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d249:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d24e:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d253u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d253:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d259:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d25c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d25e:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d261:  // jne 0x41d277
    if (!f.zf) goto L_0041d277;
L_0041d263:  // cmp dword ptr [edi + 0x1fb8], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fb8u)), ebx, f);
L_0041d269:  // jg 0x41d277
    if ((!f.zf && f.sf == f.of)) goto L_0041d277;
L_0041d26b:  // mov dword ptr [edi + 0x1fb8], ebp
    M32((uint32_t)(edi + 0x1fb8u)) = (uint32_t)(ebp);
L_0041d271:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d277:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d279:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d27b:  // jle 0x41d2a8
    if ((f.zf || f.sf != f.of)) goto L_0041d2a8;
L_0041d27d:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d282:  // cmp dword ptr [edx], 0xd3
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd3u, f);
L_0041d288:  // je 0x41d29e
    if (f.zf) goto L_0041d29e;
L_0041d28a:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d28b:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d28e:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d290:  // jl 0x41d282
    if ((f.sf != f.of)) goto L_0041d282;
L_0041d292:  // jmp 0x41d2a8
    goto L_0041d2a8;
L_0041d294:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d297:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d29c:  // jmp 0x41d25e
    goto L_0041d25e;
L_0041d29e:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d2a1:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d2a6:  // jmp 0x41d2c7
    goto L_0041d2c7;
L_0041d2a8:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_0041d2ad:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d2b2:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d2b7:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d2bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d2bc:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d2c2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d2c5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d2c7:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d2ca:  // je 0x41d30b
    if (f.zf) goto L_0041d30b;
L_0041d2cc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d2ce:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d2d0:  // jle 0x41d2e7
    if ((f.zf || f.sf != f.of)) goto L_0041d2e7;
L_0041d2d2:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d2d7:  // cmp dword ptr [edx], 0xd4
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd4u, f);
L_0041d2dd:  // je 0x41d33c
    if (f.zf) goto L_0041d33c;
L_0041d2df:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d2e0:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d2e3:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d2e5:  // jl 0x41d2d7
    if ((f.sf != f.of)) goto L_0041d2d7;
L_0041d2e7:  // push 0xd4
    t0 = 0xd4u; esp -= 4; M32(esp) = t0;
L_0041d2ec:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d2f1:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d2f6:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d2fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d2fb:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d301:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d304:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d306:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d309:  // jne 0x41d31f
    if (!f.zf) goto L_0041d31f;
L_0041d30b:  // cmp dword ptr [edi + 0x1fbc], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fbcu)), ebx, f);
L_0041d311:  // jg 0x41d31f
    if ((!f.zf && f.sf == f.of)) goto L_0041d31f;
L_0041d313:  // mov dword ptr [edi + 0x1fbc], ebp
    M32((uint32_t)(edi + 0x1fbcu)) = (uint32_t)(ebp);
L_0041d319:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d31f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d321:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d323:  // jle 0x41d350
    if ((f.zf || f.sf != f.of)) goto L_0041d350;
L_0041d325:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d32a:  // cmp dword ptr [edx], 0xd3
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd3u, f);
L_0041d330:  // je 0x41d346
    if (f.zf) goto L_0041d346;
L_0041d332:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d333:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d336:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d338:  // jl 0x41d32a
    if ((f.sf != f.of)) goto L_0041d32a;
L_0041d33a:  // jmp 0x41d350
    goto L_0041d350;
L_0041d33c:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d33f:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d344:  // jmp 0x41d306
    goto L_0041d306;
L_0041d346:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d349:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d34e:  // jmp 0x41d36f
    goto L_0041d36f;
L_0041d350:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_0041d355:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d35a:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d35f:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d364u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d364:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d36a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d36d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d36f:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d372:  // je 0x41d3b3
    if (f.zf) goto L_0041d3b3;
L_0041d374:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d376:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d378:  // jle 0x41d38f
    if ((f.zf || f.sf != f.of)) goto L_0041d38f;
L_0041d37a:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d37f:  // cmp dword ptr [edx], 0xd4
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xd4u, f);
L_0041d385:  // je 0x41d3e4
    if (f.zf) goto L_0041d3e4;
L_0041d387:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d388:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d38b:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d38d:  // jl 0x41d37f
    if ((f.sf != f.of)) goto L_0041d37f;
L_0041d38f:  // push 0xd4
    t0 = 0xd4u; esp -= 4; M32(esp) = t0;
L_0041d394:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d399:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d39e:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d3a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d3a3:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d3a9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d3ac:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d3ae:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d3b1:  // jne 0x41d3c7
    if (!f.zf) goto L_0041d3c7;
L_0041d3b3:  // cmp dword ptr [edi + 0x1fc0], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fc0u)), ebx, f);
L_0041d3b9:  // jg 0x41d3c7
    if ((!f.zf && f.sf == f.of)) goto L_0041d3c7;
L_0041d3bb:  // mov dword ptr [edi + 0x1fc0], ebp
    M32((uint32_t)(edi + 0x1fc0u)) = (uint32_t)(ebp);
L_0041d3c1:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d3c7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d3c9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d3cb:  // jle 0x41d3f8
    if ((f.zf || f.sf != f.of)) goto L_0041d3f8;
L_0041d3cd:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d3d2:  // cmp dword ptr [edx], 0xc8
    t0 = lsub<32>(M32((uint32_t)(edx)), 0xc8u, f);
L_0041d3d8:  // je 0x41d3ee
    if (f.zf) goto L_0041d3ee;
L_0041d3da:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d3db:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d3de:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d3e0:  // jl 0x41d3d2
    if ((f.sf != f.of)) goto L_0041d3d2;
L_0041d3e2:  // jmp 0x41d3f8
    goto L_0041d3f8;
L_0041d3e4:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d3e7:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d3ec:  // jmp 0x41d3ae
    goto L_0041d3ae;
L_0041d3ee:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d3f1:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d3f6:  // jmp 0x41d417
    goto L_0041d417;
L_0041d3f8:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041d3fd:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d402:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d407:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d40cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d40c:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d412:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d415:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d417:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d41a:  // jne 0x41d430
    if (!f.zf) goto L_0041d430;
L_0041d41c:  // cmp dword ptr [edi + 0x1fc4], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fc4u)), ebx, f);
L_0041d422:  // jg 0x41d430
    if ((!f.zf && f.sf == f.of)) goto L_0041d430;
L_0041d424:  // mov dword ptr [edi + 0x1fc4], ebp
    M32((uint32_t)(edi + 0x1fc4u)) = (uint32_t)(ebp);
L_0041d42a:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d430:  // mov edx, dword ptr [0x662a20]
    edx = (uint32_t)(M32((uint32_t)(0x662a20u)));
L_0041d436:  // mov eax, dword ptr [0x6785c0]
    eax = (uint32_t)(M32((uint32_t)(0x6785c0u)));
L_0041d43b:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d441:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0041d443:  // jl 0x41d459
    if ((f.sf != f.of)) goto L_0041d459;
L_0041d445:  // cmp dword ptr [edi + 0x1fc8], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fc8u)), ebx, f);
L_0041d44b:  // jg 0x41d459
    if ((!f.zf && f.sf == f.of)) goto L_0041d459;
L_0041d44d:  // mov dword ptr [edi + 0x1fc8], ebp
    M32((uint32_t)(edi + 0x1fc8u)) = (uint32_t)(ebp);
L_0041d453:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d459:  // mov eax, dword ptr [0x662a20]
    eax = (uint32_t)(M32((uint32_t)(0x662a20u)));
L_0041d45e:  // mov edx, dword ptr [0x6785d8]
    edx = (uint32_t)(M32((uint32_t)(0x6785d8u)));
L_0041d464:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d469:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d46b:  // jl 0x41d481
    if ((f.sf != f.of)) goto L_0041d481;
L_0041d46d:  // cmp dword ptr [edi + 0x1fcc], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fccu)), ebx, f);
L_0041d473:  // jg 0x41d481
    if ((!f.zf && f.sf == f.of)) goto L_0041d481;
L_0041d475:  // mov dword ptr [edi + 0x1fcc], ebp
    M32((uint32_t)(edi + 0x1fccu)) = (uint32_t)(ebp);
L_0041d47b:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d481:  // mov edx, dword ptr [0x662a20]
    edx = (uint32_t)(M32((uint32_t)(0x662a20u)));
L_0041d487:  // mov eax, dword ptr [0x6785f0]
    eax = (uint32_t)(M32((uint32_t)(0x6785f0u)));
L_0041d48c:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d492:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0041d494:  // jl 0x41d4aa
    if ((f.sf != f.of)) goto L_0041d4aa;
L_0041d496:  // cmp dword ptr [edi + 0x1fd0], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fd0u)), ebx, f);
L_0041d49c:  // jg 0x41d4aa
    if ((!f.zf && f.sf == f.of)) goto L_0041d4aa;
L_0041d49e:  // mov dword ptr [edi + 0x1fd0], ebp
    M32((uint32_t)(edi + 0x1fd0u)) = (uint32_t)(ebp);
L_0041d4a4:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d4aa:  // mov eax, dword ptr [0x662a14]
    eax = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d4af:  // mov edx, dword ptr [0x678608]
    edx = (uint32_t)(M32((uint32_t)(0x678608u)));
L_0041d4b5:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d4ba:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d4bc:  // jl 0x41d4d2
    if ((f.sf != f.of)) goto L_0041d4d2;
L_0041d4be:  // cmp dword ptr [edi + 0x1fd4], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fd4u)), ebx, f);
L_0041d4c4:  // jg 0x41d4d2
    if ((!f.zf && f.sf == f.of)) goto L_0041d4d2;
L_0041d4c6:  // mov dword ptr [edi + 0x1fd4], ebp
    M32((uint32_t)(edi + 0x1fd4u)) = (uint32_t)(ebp);
L_0041d4cc:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d4d2:  // mov edx, dword ptr [0x662a14]
    edx = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d4d8:  // mov eax, dword ptr [0x678620]
    eax = (uint32_t)(M32((uint32_t)(0x678620u)));
L_0041d4dd:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d4e3:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0041d4e5:  // jl 0x41d4fb
    if ((f.sf != f.of)) goto L_0041d4fb;
L_0041d4e7:  // cmp dword ptr [edi + 0x1fd8], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fd8u)), ebx, f);
L_0041d4ed:  // jg 0x41d4fb
    if ((!f.zf && f.sf == f.of)) goto L_0041d4fb;
L_0041d4ef:  // mov dword ptr [edi + 0x1fd8], ebp
    M32((uint32_t)(edi + 0x1fd8u)) = (uint32_t)(ebp);
L_0041d4f5:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d4fb:  // mov eax, dword ptr [0x662a14]
    eax = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d500:  // mov edx, dword ptr [0x678638]
    edx = (uint32_t)(M32((uint32_t)(0x678638u)));
L_0041d506:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d50b:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d50d:  // jl 0x41d523
    if ((f.sf != f.of)) goto L_0041d523;
L_0041d50f:  // cmp dword ptr [edi + 0x1fdc], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fdcu)), ebx, f);
L_0041d515:  // jg 0x41d523
    if ((!f.zf && f.sf == f.of)) goto L_0041d523;
L_0041d517:  // mov dword ptr [edi + 0x1fdc], ebp
    M32((uint32_t)(edi + 0x1fdcu)) = (uint32_t)(ebp);
L_0041d51d:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d523:  // mov edx, dword ptr [0x662a14]
    edx = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d529:  // mov eax, dword ptr [0x678650]
    eax = (uint32_t)(M32((uint32_t)(0x678650u)));
L_0041d52e:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d534:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0041d536:  // jl 0x41d54c
    if ((f.sf != f.of)) goto L_0041d54c;
L_0041d538:  // cmp dword ptr [edi + 0x1fe0], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fe0u)), ebx, f);
L_0041d53e:  // jg 0x41d54c
    if ((!f.zf && f.sf == f.of)) goto L_0041d54c;
L_0041d540:  // mov dword ptr [edi + 0x1fe0], ebp
    M32((uint32_t)(edi + 0x1fe0u)) = (uint32_t)(ebp);
L_0041d546:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d54c:  // mov eax, dword ptr [0x662a14]
    eax = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d551:  // mov edx, dword ptr [0x678668]
    edx = (uint32_t)(M32((uint32_t)(0x678668u)));
L_0041d557:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d55c:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d55e:  // jl 0x41d589
    if ((f.sf != f.of)) goto L_0041d589;
L_0041d560:  // mov edx, dword ptr [0x662a20]
    edx = (uint32_t)(M32((uint32_t)(0x662a20u)));
L_0041d566:  // mov eax, dword ptr [0x67866c]
    eax = (uint32_t)(M32((uint32_t)(0x67866cu)));
L_0041d56b:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d571:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0041d573:  // jl 0x41d589
    if ((f.sf != f.of)) goto L_0041d589;
L_0041d575:  // cmp dword ptr [edi + 0x1fe4], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fe4u)), ebx, f);
L_0041d57b:  // jg 0x41d589
    if ((!f.zf && f.sf == f.of)) goto L_0041d589;
L_0041d57d:  // mov dword ptr [edi + 0x1fe4], ebp
    M32((uint32_t)(edi + 0x1fe4u)) = (uint32_t)(ebp);
L_0041d583:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d589:  // mov eax, dword ptr [0x662a14]
    eax = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d58e:  // mov edx, dword ptr [0x678680]
    edx = (uint32_t)(M32((uint32_t)(0x678680u)));
L_0041d594:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d599:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d59b:  // jl 0x41d5c5
    if ((f.sf != f.of)) goto L_0041d5c5;
L_0041d59d:  // mov eax, dword ptr [0x662a20]
    eax = (uint32_t)(M32((uint32_t)(0x662a20u)));
L_0041d5a2:  // mov edx, dword ptr [0x678684]
    edx = (uint32_t)(M32((uint32_t)(0x678684u)));
L_0041d5a8:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d5ad:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d5af:  // jl 0x41d5c5
    if ((f.sf != f.of)) goto L_0041d5c5;
L_0041d5b1:  // cmp dword ptr [edi + 0x1fe8], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fe8u)), ebx, f);
L_0041d5b7:  // jg 0x41d5c5
    if ((!f.zf && f.sf == f.of)) goto L_0041d5c5;
L_0041d5b9:  // mov dword ptr [edi + 0x1fe8], ebp
    M32((uint32_t)(edi + 0x1fe8u)) = (uint32_t)(ebp);
L_0041d5bf:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d5c5:  // mov edx, dword ptr [0x662a18]
    edx = (uint32_t)(M32((uint32_t)(0x662a18u)));
L_0041d5cb:  // mov eax, dword ptr [0x678698]
    eax = (uint32_t)(M32((uint32_t)(0x678698u)));
L_0041d5d0:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d5d6:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0041d5d8:  // jl 0x41d5ee
    if ((f.sf != f.of)) goto L_0041d5ee;
L_0041d5da:  // cmp dword ptr [edi + 0x1fec], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1fecu)), ebx, f);
L_0041d5e0:  // jg 0x41d5ee
    if ((!f.zf && f.sf == f.of)) goto L_0041d5ee;
L_0041d5e2:  // mov dword ptr [edi + 0x1fec], ebp
    M32((uint32_t)(edi + 0x1fecu)) = (uint32_t)(ebp);
L_0041d5e8:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d5ee:  // mov eax, dword ptr [0x662a18]
    eax = (uint32_t)(M32((uint32_t)(0x662a18u)));
L_0041d5f3:  // mov edx, dword ptr [0x6786b0]
    edx = (uint32_t)(M32((uint32_t)(0x6786b0u)));
L_0041d5f9:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d5fe:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d600:  // jl 0x41d616
    if ((f.sf != f.of)) goto L_0041d616;
L_0041d602:  // cmp dword ptr [edi + 0x1ff0], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1ff0u)), ebx, f);
L_0041d608:  // jg 0x41d616
    if ((!f.zf && f.sf == f.of)) goto L_0041d616;
L_0041d60a:  // mov dword ptr [edi + 0x1ff0], ebp
    M32((uint32_t)(edi + 0x1ff0u)) = (uint32_t)(ebp);
L_0041d610:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d616:  // mov edx, dword ptr [0x662a18]
    edx = (uint32_t)(M32((uint32_t)(0x662a18u)));
L_0041d61c:  // mov eax, dword ptr [0x6786c8]
    eax = (uint32_t)(M32((uint32_t)(0x6786c8u)));
L_0041d621:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d627:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0041d629:  // jl 0x41d63f
    if ((f.sf != f.of)) goto L_0041d63f;
L_0041d62b:  // cmp dword ptr [edi + 0x1ff4], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1ff4u)), ebx, f);
L_0041d631:  // jg 0x41d63f
    if ((!f.zf && f.sf == f.of)) goto L_0041d63f;
L_0041d633:  // mov dword ptr [edi + 0x1ff4], ebp
    M32((uint32_t)(edi + 0x1ff4u)) = (uint32_t)(ebp);
L_0041d639:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d63f:  // mov eax, dword ptr [0x662a18]
    eax = (uint32_t)(M32((uint32_t)(0x662a18u)));
L_0041d644:  // mov edx, dword ptr [0x6786e0]
    edx = (uint32_t)(M32((uint32_t)(0x6786e0u)));
L_0041d64a:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d64f:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d651:  // jl 0x41d667
    if ((f.sf != f.of)) goto L_0041d667;
L_0041d653:  // cmp dword ptr [edi + 0x1ff8], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1ff8u)), ebx, f);
L_0041d659:  // jg 0x41d667
    if ((!f.zf && f.sf == f.of)) goto L_0041d667;
L_0041d65b:  // mov dword ptr [edi + 0x1ff8], ebp
    M32((uint32_t)(edi + 0x1ff8u)) = (uint32_t)(ebp);
L_0041d661:  // mov ecx, dword ptr [0x624184]
    ecx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d667:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d669:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041d66b:  // jle 0x41d686
    if ((f.zf || f.sf != f.of)) goto L_0041d686;
L_0041d66d:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041d672:  // cmp dword ptr [edx], 0x1f4
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x1f4u, f);
L_0041d678:  // je 0x41d910
    if (f.zf) goto L_0041d910;
L_0041d67e:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d67f:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041d682:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d684:  // jl 0x41d672
    if ((f.sf != f.of)) goto L_0041d672;
L_0041d686:  // push 0x1f4
    t0 = 0x1f4u; esp -= 4; M32(esp) = t0;
L_0041d68b:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d690:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d695:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d69au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d69a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d69d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d69f:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d6a2:  // jne 0x41d6b2
    if (!f.zf) goto L_0041d6b2;
L_0041d6a4:  // cmp dword ptr [edi + 0x1ffc], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x1ffcu)), ebx, f);
L_0041d6aa:  // jg 0x41d6b2
    if ((!f.zf && f.sf == f.of)) goto L_0041d6b2;
L_0041d6ac:  // mov dword ptr [edi + 0x1ffc], ebp
    M32((uint32_t)(edi + 0x1ffcu)) = (uint32_t)(ebp);
L_0041d6b2:  // mov eax, dword ptr [0x662a24]
    eax = (uint32_t)(M32((uint32_t)(0x662a24u)));
L_0041d6b7:  // mov edx, dword ptr [0x678710]
    edx = (uint32_t)(M32((uint32_t)(0x678710u)));
L_0041d6bd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041d6bf:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0041d6c5:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0041d6c7:  // jl 0x41d6dc
    if ((f.sf != f.of)) goto L_0041d6dc;
L_0041d6c9:  // cmp dword ptr [edi + 0x2000], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2000u)), ebx, f);
L_0041d6cf:  // jg 0x41d6dc
    if ((!f.zf && f.sf == f.of)) goto L_0041d6dc;
L_0041d6d1:  // mov dword ptr [edi + 0x2000], ebp
    M32((uint32_t)(edi + 0x2000u)) = (uint32_t)(ebp);
L_0041d6d7:  // mov eax, dword ptr [0x662a24]
    eax = (uint32_t)(M32((uint32_t)(0x662a24u)));
L_0041d6dc:  // mov ecx, dword ptr [0x678728]
    ecx = (uint32_t)(M32((uint32_t)(0x678728u)));
L_0041d6e2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0041d6e4:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d6ea:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_0041d6ec:  // jl 0x41d701
    if ((f.sf != f.of)) goto L_0041d701;
L_0041d6ee:  // cmp dword ptr [edi + 0x2004], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2004u)), ebx, f);
L_0041d6f4:  // jg 0x41d701
    if ((!f.zf && f.sf == f.of)) goto L_0041d701;
L_0041d6f6:  // mov dword ptr [edi + 0x2004], ebp
    M32((uint32_t)(edi + 0x2004u)) = (uint32_t)(ebp);
L_0041d6fc:  // mov eax, dword ptr [0x662a24]
    eax = (uint32_t)(M32((uint32_t)(0x662a24u)));
L_0041d701:  // mov edx, dword ptr [0x678740]
    edx = (uint32_t)(M32((uint32_t)(0x678740u)));
L_0041d707:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041d709:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0041d70f:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0041d711:  // jl 0x41d726
    if ((f.sf != f.of)) goto L_0041d726;
L_0041d713:  // cmp dword ptr [edi + 0x2008], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2008u)), ebx, f);
L_0041d719:  // jg 0x41d726
    if ((!f.zf && f.sf == f.of)) goto L_0041d726;
L_0041d71b:  // mov dword ptr [edi + 0x2008], ebp
    M32((uint32_t)(edi + 0x2008u)) = (uint32_t)(ebp);
L_0041d721:  // mov eax, dword ptr [0x662a24]
    eax = (uint32_t)(M32((uint32_t)(0x662a24u)));
L_0041d726:  // mov ecx, dword ptr [0x678770]
    ecx = (uint32_t)(M32((uint32_t)(0x678770u)));
L_0041d72c:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d731:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d733:  // jl 0x41d743
    if ((f.sf != f.of)) goto L_0041d743;
L_0041d735:  // cmp dword ptr [edi + 0x2010], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2010u)), ebx, f);
L_0041d73b:  // jg 0x41d743
    if ((!f.zf && f.sf == f.of)) goto L_0041d743;
L_0041d73d:  // mov dword ptr [edi + 0x2010], ebp
    M32((uint32_t)(edi + 0x2010u)) = (uint32_t)(ebp);
L_0041d743:  // mov eax, dword ptr [0x662a1c]
    eax = (uint32_t)(M32((uint32_t)(0x662a1cu)));
L_0041d748:  // mov ecx, dword ptr [0x6787a0]
    ecx = (uint32_t)(M32((uint32_t)(0x6787a0u)));
L_0041d74e:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0041d750:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d756:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_0041d758:  // jl 0x41d783
    if ((f.sf != f.of)) goto L_0041d783;
L_0041d75a:  // mov ecx, dword ptr [0x662a14]
    ecx = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d760:  // mov edx, dword ptr [0x6787a4]
    edx = (uint32_t)(M32((uint32_t)(0x6787a4u)));
L_0041d766:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0041d76c:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0041d76e:  // jl 0x41d783
    if ((f.sf != f.of)) goto L_0041d783;
L_0041d770:  // cmp dword ptr [edi + 0x2018], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2018u)), ebx, f);
L_0041d776:  // jg 0x41d783
    if ((!f.zf && f.sf == f.of)) goto L_0041d783;
L_0041d778:  // mov dword ptr [edi + 0x2018], ebp
    M32((uint32_t)(edi + 0x2018u)) = (uint32_t)(ebp);
L_0041d77e:  // mov eax, dword ptr [0x662a1c]
    eax = (uint32_t)(M32((uint32_t)(0x662a1cu)));
L_0041d783:  // mov ecx, dword ptr [0x6787b8]
    ecx = (uint32_t)(M32((uint32_t)(0x6787b8u)));
L_0041d789:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0041d78b:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d791:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_0041d793:  // jl 0x41d7a8
    if ((f.sf != f.of)) goto L_0041d7a8;
L_0041d795:  // cmp dword ptr [edi + 0x201c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x201cu)), ebx, f);
L_0041d79b:  // jg 0x41d7a8
    if ((!f.zf && f.sf == f.of)) goto L_0041d7a8;
L_0041d79d:  // mov dword ptr [edi + 0x201c], ebp
    M32((uint32_t)(edi + 0x201cu)) = (uint32_t)(ebp);
L_0041d7a3:  // mov eax, dword ptr [0x662a1c]
    eax = (uint32_t)(M32((uint32_t)(0x662a1cu)));
L_0041d7a8:  // mov edx, dword ptr [0x6787d0]
    edx = (uint32_t)(M32((uint32_t)(0x6787d0u)));
L_0041d7ae:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041d7b0:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0041d7b6:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0041d7b8:  // jl 0x41d7cd
    if ((f.sf != f.of)) goto L_0041d7cd;
L_0041d7ba:  // cmp dword ptr [edi + 0x2020], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2020u)), ebx, f);
L_0041d7c0:  // jg 0x41d7cd
    if ((!f.zf && f.sf == f.of)) goto L_0041d7cd;
L_0041d7c2:  // mov dword ptr [edi + 0x2020], ebp
    M32((uint32_t)(edi + 0x2020u)) = (uint32_t)(ebp);
L_0041d7c8:  // mov eax, dword ptr [0x662a1c]
    eax = (uint32_t)(M32((uint32_t)(0x662a1cu)));
L_0041d7cd:  // mov ecx, dword ptr [0x6787e8]
    ecx = (uint32_t)(M32((uint32_t)(0x6787e8u)));
L_0041d7d3:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0041d7d5:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0041d7db:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_0041d7dd:  // jl 0x41d808
    if ((f.sf != f.of)) goto L_0041d808;
L_0041d7df:  // mov ecx, dword ptr [0x662a18]
    ecx = (uint32_t)(M32((uint32_t)(0x662a18u)));
L_0041d7e5:  // mov edx, dword ptr [0x6787ec]
    edx = (uint32_t)(M32((uint32_t)(0x6787ecu)));
L_0041d7eb:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0041d7f1:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0041d7f3:  // jl 0x41d808
    if ((f.sf != f.of)) goto L_0041d808;
L_0041d7f5:  // cmp dword ptr [edi + 0x2024], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2024u)), ebx, f);
L_0041d7fb:  // jg 0x41d808
    if ((!f.zf && f.sf == f.of)) goto L_0041d808;
L_0041d7fd:  // mov dword ptr [edi + 0x2024], ebp
    M32((uint32_t)(edi + 0x2024u)) = (uint32_t)(ebp);
L_0041d803:  // mov eax, dword ptr [0x662a1c]
    eax = (uint32_t)(M32((uint32_t)(0x662a1cu)));
L_0041d808:  // mov ecx, dword ptr [0x678800]
    ecx = (uint32_t)(M32((uint32_t)(0x678800u)));
L_0041d80e:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d813:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d815:  // jl 0x41d839
    if ((f.sf != f.of)) goto L_0041d839;
L_0041d817:  // mov eax, dword ptr [0x662a14]
    eax = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041d81c:  // mov ecx, dword ptr [0x678804]
    ecx = (uint32_t)(M32((uint32_t)(0x678804u)));
L_0041d822:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041d827:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041d829:  // jl 0x41d839
    if ((f.sf != f.of)) goto L_0041d839;
L_0041d82b:  // cmp dword ptr [edi + 0x2028], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2028u)), ebx, f);
L_0041d831:  // jg 0x41d839
    if ((!f.zf && f.sf == f.of)) goto L_0041d839;
L_0041d833:  // mov dword ptr [edi + 0x2028], ebp
    M32((uint32_t)(edi + 0x2028u)) = (uint32_t)(ebp);
L_0041d839:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d83d:  // push 0x14b
    t0 = 0x14bu; esp -= 4; M32(esp) = t0;
L_0041d842:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041d843:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d848u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d848:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041d84c:  // push 0x14c
    t0 = 0x14cu; esp -= 4; M32(esp) = t0;
L_0041d851:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041d852:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d857u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d857:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041d85b:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041d85e:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d862:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041d863:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d868u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d868:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d86a:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041d86e:  // jne 0x41d874
    if (!f.zf) goto L_0041d874;
L_0041d870:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041d874:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041d876:  // je 0x41d885
    if (f.zf) goto L_0041d885;
L_0041d878:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041d87a:  // cmp al, 0x41
    t0 = lsub<8>((eax & 0xffu), 0x41u, f);
L_0041d87c:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041d87f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041d881:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d883:  // je 0x41d893
    if (f.zf) goto L_0041d893;
L_0041d885:  // cmp dword ptr [edi + 0x202c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x202cu)), ebx, f);
L_0041d88b:  // jg 0x41d893
    if ((!f.zf && f.sf == f.of)) goto L_0041d893;
L_0041d88d:  // mov dword ptr [edi + 0x202c], ebp
    M32((uint32_t)(edi + 0x202cu)) = (uint32_t)(ebp);
L_0041d893:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d897:  // push 0x1af
    t0 = 0x1afu; esp -= 4; M32(esp) = t0;
L_0041d89c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041d89d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d8a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d8a2:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041d8a6:  // push 0x1b0
    t0 = 0x1b0u; esp -= 4; M32(esp) = t0;
L_0041d8ab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041d8ac:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d8b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d8b1:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041d8b5:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041d8b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041d8b9:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041d8bd:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d8c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d8c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d8c4:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041d8c8:  // jne 0x41d8ce
    if (!f.zf) goto L_0041d8ce;
L_0041d8ca:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041d8ce:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041d8d0:  // je 0x41d8df
    if (f.zf) goto L_0041d8df;
L_0041d8d2:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041d8d4:  // cmp al, 0x41
    t0 = lsub<8>((eax & 0xffu), 0x41u, f);
L_0041d8d6:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041d8d9:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041d8db:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d8dd:  // je 0x41d8ed
    if (f.zf) goto L_0041d8ed;
L_0041d8df:  // cmp dword ptr [edi + 0x2030], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2030u)), ebx, f);
L_0041d8e5:  // jg 0x41d8ed
    if ((!f.zf && f.sf == f.of)) goto L_0041d8ed;
L_0041d8e7:  // mov dword ptr [edi + 0x2030], ebp
    M32((uint32_t)(edi + 0x2030u)) = (uint32_t)(ebp);
L_0041d8ed:  // mov edx, dword ptr [0x624184]
    edx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d8f3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d8f5:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0041d8f7:  // jle 0x41d927
    if ((f.zf || f.sf != f.of)) goto L_0041d927;
L_0041d8f9:  // mov ecx, 0x660634
    ecx = (uint32_t)(0x660634u);
L_0041d8fe:  // cmp dword ptr [ecx], 0x20b
    t0 = lsub<32>(M32((uint32_t)(ecx)), 0x20bu, f);
L_0041d904:  // je 0x41d91d
    if (f.zf) goto L_0041d91d;
L_0041d906:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d907:  // add ecx, 0x40
    t0 = ladd<32>(ecx, 0x40u, f);
    ecx = (uint32_t)(t0);
L_0041d90a:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d90c:  // jl 0x41d8fe
    if ((f.sf != f.of)) goto L_0041d8fe;
L_0041d90e:  // jmp 0x41d927
    goto L_0041d927;
L_0041d910:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d913:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d918:  // jmp 0x41d69f
    goto L_0041d69f;
L_0041d91d:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041d920:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041d925:  // jmp 0x41d946
    goto L_0041d946;
L_0041d927:  // push 0x20b
    t0 = 0x20bu; esp -= 4; M32(esp) = t0;
L_0041d92c:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d931:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d936:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d93bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d93b:  // mov edx, dword ptr [0x624184]
    edx = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041d941:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d944:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d946:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d949:  // je 0x41d988
    if (f.zf) goto L_0041d988;
L_0041d94b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d94d:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0041d94f:  // jle 0x41d96a
    if ((f.zf || f.sf != f.of)) goto L_0041d96a;
L_0041d951:  // mov ecx, 0x660634
    ecx = (uint32_t)(0x660634u);
L_0041d956:  // cmp dword ptr [ecx], 0x20c
    t0 = lsub<32>(M32((uint32_t)(ecx)), 0x20cu, f);
L_0041d95c:  // je 0x41db4a
    if (f.zf) goto L_0041db4a;
L_0041d962:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0041d963:  // add ecx, 0x40
    t0 = ladd<32>(ecx, 0x40u, f);
    ecx = (uint32_t)(t0);
L_0041d966:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0041d968:  // jl 0x41d956
    if ((f.sf != f.of)) goto L_0041d956;
L_0041d96a:  // push 0x20c
    t0 = 0x20cu; esp -= 4; M32(esp) = t0;
L_0041d96f:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041d974:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041d979:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d97eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d97e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041d981:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041d983:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041d986:  // jne 0x41d996
    if (!f.zf) goto L_0041d996;
L_0041d988:  // cmp dword ptr [edi + 0x2034], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2034u)), ebx, f);
L_0041d98e:  // jg 0x41d996
    if ((!f.zf && f.sf == f.of)) goto L_0041d996;
L_0041d990:  // mov dword ptr [edi + 0x2034], ebp
    M32((uint32_t)(edi + 0x2034u)) = (uint32_t)(ebp);
L_0041d996:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d99a:  // push 0x209
    t0 = 0x209u; esp -= 4; M32(esp) = t0;
L_0041d99f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041d9a0:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d9a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d9a5:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041d9a9:  // push 0x20a
    t0 = 0x20au; esp -= 4; M32(esp) = t0;
L_0041d9ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041d9af:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d9b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d9b4:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041d9b8:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041d9bb:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d9bf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041d9c0:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d9c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d9c5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d9c7:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041d9cb:  // jne 0x41d9d1
    if (!f.zf) goto L_0041d9d1;
L_0041d9cd:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041d9d1:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041d9d3:  // je 0x41d9e2
    if (f.zf) goto L_0041d9e2;
L_0041d9d5:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041d9d7:  // cmp al, 0x41
    t0 = lsub<8>((eax & 0xffu), 0x41u, f);
L_0041d9d9:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041d9dc:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041d9de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041d9e0:  // je 0x41d9f0
    if (f.zf) goto L_0041d9f0;
L_0041d9e2:  // cmp dword ptr [edi + 0x2038], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2038u)), ebx, f);
L_0041d9e8:  // jg 0x41d9f0
    if ((!f.zf && f.sf == f.of)) goto L_0041d9f0;
L_0041d9ea:  // mov dword ptr [edi + 0x2038], ebp
    M32((uint32_t)(edi + 0x2038u)) = (uint32_t)(ebp);
L_0041d9f0:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041d9f4:  // push 0x20b
    t0 = 0x20bu; esp -= 4; M32(esp) = t0;
L_0041d9f9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041d9fa:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041d9ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041d9ff:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041da03:  // push 0x20c
    t0 = 0x20cu; esp -= 4; M32(esp) = t0;
L_0041da08:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041da09:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041da0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041da0e:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041da12:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041da15:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041da16:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041da1a:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041da1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041da1f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041da21:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041da25:  // jne 0x41da2b
    if (!f.zf) goto L_0041da2b;
L_0041da27:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041da2b:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041da2d:  // je 0x41da3c
    if (f.zf) goto L_0041da3c;
L_0041da2f:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041da31:  // cmp al, 0x41
    t0 = lsub<8>((eax & 0xffu), 0x41u, f);
L_0041da33:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041da36:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041da38:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041da3a:  // je 0x41da4a
    if (f.zf) goto L_0041da4a;
L_0041da3c:  // cmp dword ptr [edi + 0x203c], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x203cu)), ebx, f);
L_0041da42:  // jg 0x41da4a
    if ((!f.zf && f.sf == f.of)) goto L_0041da4a;
L_0041da44:  // mov dword ptr [edi + 0x203c], ebp
    M32((uint32_t)(edi + 0x203cu)) = (uint32_t)(ebp);
L_0041da4a:  // mov eax, dword ptr [0x662a14]
    eax = (uint32_t)(M32((uint32_t)(0x662a14u)));
L_0041da4f:  // mov ecx, dword ptr [0x678890]
    ecx = (uint32_t)(M32((uint32_t)(0x678890u)));
L_0041da55:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_0041da5a:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0041da5c:  // jl 0x41dab8
    if ((f.sf != f.of)) goto L_0041dab8;
L_0041da5e:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041da62:  // push 0x26d
    t0 = 0x26du; esp -= 4; M32(esp) = t0;
L_0041da67:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041da68:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041da6du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041da6d:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041da71:  // push 0x26e
    t0 = 0x26eu; esp -= 4; M32(esp) = t0;
L_0041da76:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041da77:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041da7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041da7c:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041da80:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041da83:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041da87:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041da88:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041da8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041da8d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041da8f:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041da93:  // jne 0x41da99
    if (!f.zf) goto L_0041da99;
L_0041da95:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041da99:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041da9b:  // je 0x41daaa
    if (f.zf) goto L_0041daaa;
L_0041da9d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041da9f:  // cmp al, 0x43
    t0 = lsub<8>((eax & 0xffu), 0x43u, f);
L_0041daa1:  // setle cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041daa4:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0041daa6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041daa8:  // je 0x41dab8
    if (f.zf) goto L_0041dab8;
L_0041daaa:  // cmp dword ptr [edi + 0x2040], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2040u)), ebx, f);
L_0041dab0:  // jg 0x41dab8
    if ((!f.zf && f.sf == f.of)) goto L_0041dab8;
L_0041dab2:  // mov dword ptr [edi + 0x2040], ebp
    M32((uint32_t)(edi + 0x2040u)) = (uint32_t)(ebp);
L_0041dab8:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041dabc:  // push 0x2db
    t0 = 0x2dbu; esp -= 4; M32(esp) = t0;
L_0041dac1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041dac2:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dac7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dac7:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041dacb:  // push 0x2dc
    t0 = 0x2dcu; esp -= 4; M32(esp) = t0;
L_0041dad0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041dad1:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dad6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dad6:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0041dada:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0041dadd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041dade:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041dae2:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dae7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dae7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dae9:  // mov al, byte ptr [esp + 0x20]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x20u))) & 0xffu);
L_0041daed:  // jne 0x41daf3
    if (!f.zf) goto L_0041daf3;
L_0041daef:  // mov al, byte ptr [esp + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1cu))) & 0xffu);
L_0041daf3:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041daf5:  // je 0x41db04
    if (f.zf) goto L_0041db04;
L_0041daf7:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041daf9:  // cmp al, 0x41
    t0 = lsub<8>((eax & 0xffu), 0x41u, f);
L_0041dafb:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041dafe:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041db00:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041db02:  // je 0x41db12
    if (f.zf) goto L_0041db12;
L_0041db04:  // cmp dword ptr [edi + 0x2044], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2044u)), ebx, f);
L_0041db0a:  // jg 0x41db12
    if ((!f.zf && f.sf == f.of)) goto L_0041db12;
L_0041db0c:  // mov dword ptr [edi + 0x2044], ebp
    M32((uint32_t)(edi + 0x2044u)) = (uint32_t)(ebp);
L_0041db12:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0041db17:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041db1c:  // mov dword ptr [esp + 0x24], 0xc61c3c00
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xc61c3c00u);
L_0041db24:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041db29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041db29:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041db2c:  // jne 0x41db6e
    if (!f.zf) goto L_0041db6e;
L_0041db2e:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0041db33:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041db38:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041db3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041db3d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041db3f:  // je 0x41db57
    if (f.zf) goto L_0041db57;
L_0041db41:  // mov eax, dword ptr [eax + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_0041db44:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0041db48:  // jmp 0x41db6e
    goto L_0041db6e;
L_0041db4a:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0041db4d:  // add eax, 0x660624
    t0 = ladd<32>(eax, 0x660624u, f);
    eax = (uint32_t)(t0);
L_0041db52:  // jmp 0x41d983
    goto L_0041d983;
L_0041db57:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0041db5c:  // push 0x6242ec
    t0 = 0x6242ecu; esp -= 4; M32(esp) = t0;
L_0041db61:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041db66:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041db6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041db6b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041db6e:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041db72:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041db73:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041db78:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041db7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041db7d:  // cmp al, 0x53
    t0 = lsub<8>((eax & 0xffu), 0x53u, f);
L_0041db7f:  // je 0x41db8e
    if (f.zf) goto L_0041db8e;
L_0041db81:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0041db83:  // cmp al, 0x41
    t0 = lsub<8>((eax & 0xffu), 0x41u, f);
L_0041db85:  // setle dl
    edx = (edx & 0xffffff00u) | ((uint32_t)((f.zf || f.sf != f.of)) & 0xffu);
L_0041db88:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0041db8a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041db8c:  // je 0x41db9c
    if (f.zf) goto L_0041db9c;
L_0041db8e:  // cmp dword ptr [edi + 0x2048], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2048u)), ebx, f);
L_0041db94:  // jg 0x41db9c
    if ((!f.zf && f.sf == f.of)) goto L_0041db9c;
L_0041db96:  // mov dword ptr [edi + 0x2048], ebp
    M32((uint32_t)(edi + 0x2048u)) = (uint32_t)(ebp);
L_0041db9c:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041dba1:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0041dba3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0041dba5:  // mov byte ptr [esp + 0x20], 0x43
    M8((uint32_t)(esp + 0x20u)) = (uint8_t)(0x43u);
L_0041dbaa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dbac:  // jle 0x41dbf3
    if ((f.zf || f.sf != f.of)) goto L_0041dbf3;
L_0041dbae:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041dbb2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041dbb3:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041dbb8:  // call 0x420af0
    t0 = 0x00420af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dbbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dbbd:  // mov eax, dword ptr [eax + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x3cu)));
L_0041dbc0:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041dbc5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041dbc6:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dbcbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dbcb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041dbcc:  // lea ecx, [esp + 0x16]
    ecx = (uint32_t)((uint32_t)(esp + 0x16u));
L_0041dbd0:  // mov byte ptr [esp + 0x16], al
    M8((uint32_t)(esp + 0x16u)) = (uint8_t)((eax & 0xffu));
L_0041dbd4:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dbd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dbd9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dbdb:  // je 0x41dbde
    if (f.zf) goto L_0041dbde;
L_0041dbdd:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0041dbde:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041dbe3:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0041dbe4:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0041dbe6:  // jl 0x41dbb2
    if ((f.sf != f.of)) goto L_0041dbb2;
L_0041dbe8:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0041dbec:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_0041dbf1:  // jmp 0x41dbf7
    goto L_0041dbf7;
L_0041dbf3:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0041dbf7:  // cmp ebp, dword ptr [0x6788d8]
    t0 = lsub<32>(ebp, M32((uint32_t)(0x6788d8u)), f);
L_0041dbfd:  // jl 0x41dc1a
    if ((f.sf != f.of)) goto L_0041dc1a;
L_0041dbff:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041dc03:  // cmp dword ptr [ecx + 0x204c], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x204cu)), ebx, f);
L_0041dc09:  // jg 0x41dc1a
    if ((!f.zf && f.sf == f.of)) goto L_0041dc1a;
L_0041dc0b:  // mov dword ptr [ecx + 0x204c], 2
    M32((uint32_t)(ecx + 0x204cu)) = (uint32_t)(0x2u);
L_0041dc15:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041dc1a:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041dc1c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dc1e:  // jle 0x41dc35
    if ((f.zf || f.sf != f.of)) goto L_0041dc35;
L_0041dc20:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041dc25:  // cmp dword ptr [edx], 0x2e5
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x2e5u, f);
L_0041dc2b:  // je 0x41dc75
    if (f.zf) goto L_0041dc75;
L_0041dc2d:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041dc2e:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041dc31:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041dc33:  // jl 0x41dc25
    if ((f.sf != f.of)) goto L_0041dc25;
L_0041dc35:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0041dc3a:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041dc3f:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041dc44:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dc49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dc49:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041dc4e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041dc51:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041dc53:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041dc56:  // je 0x41dcae
    if (f.zf) goto L_0041dcae;
L_0041dc58:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041dc5a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dc5c:  // jle 0x41dc8b
    if ((f.zf || f.sf != f.of)) goto L_0041dc8b;
L_0041dc5e:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041dc63:  // cmp dword ptr [edx], 0x2e6
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x2e6u, f);
L_0041dc69:  // je 0x41dc80
    if (f.zf) goto L_0041dc80;
L_0041dc6b:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041dc6c:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041dc6f:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041dc71:  // jl 0x41dc63
    if ((f.sf != f.of)) goto L_0041dc63;
L_0041dc73:  // jmp 0x41dc8b
    goto L_0041dc8b;
L_0041dc75:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041dc78:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041dc7e:  // jmp 0x41dc53
    goto L_0041dc53;
L_0041dc80:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041dc83:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041dc89:  // jmp 0x41dca9
    goto L_0041dca9;
L_0041dc8b:  // push 0x2e6
    t0 = 0x2e6u; esp -= 4; M32(esp) = t0;
L_0041dc90:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041dc95:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041dc9a:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dc9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dc9f:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041dca4:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041dca7:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041dca9:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041dcac:  // jne 0x41dccb
    if (!f.zf) goto L_0041dccb;
L_0041dcae:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041dcb2:  // cmp dword ptr [ebp + 0x2060], ebx
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x2060u)), ebx, f);
L_0041dcb8:  // jg 0x41dccf
    if ((!f.zf && f.sf == f.of)) goto L_0041dccf;
L_0041dcba:  // mov dword ptr [ebp + 0x2060], 2
    M32((uint32_t)(ebp + 0x2060u)) = (uint32_t)(0x2u);
L_0041dcc4:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041dcc9:  // jmp 0x41dccf
    goto L_0041dccf;
L_0041dccb:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041dccf:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041dcd1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dcd3:  // jle 0x41dcea
    if ((f.zf || f.sf != f.of)) goto L_0041dcea;
L_0041dcd5:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041dcda:  // cmp dword ptr [edx], 0x2e5
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x2e5u, f);
L_0041dce0:  // je 0x41dd2a
    if (f.zf) goto L_0041dd2a;
L_0041dce2:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041dce3:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041dce6:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041dce8:  // jl 0x41dcda
    if ((f.sf != f.of)) goto L_0041dcda;
L_0041dcea:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0041dcef:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041dcf4:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041dcf9:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dcfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dcfe:  // mov eax, dword ptr [0x624184]
    eax = (uint32_t)(M32((uint32_t)(0x624184u)));
L_0041dd03:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041dd06:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041dd08:  // cmp dword ptr [ecx + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), ebx, f);
L_0041dd0b:  // je 0x41dd60
    if (f.zf) goto L_0041dd60;
L_0041dd0d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0041dd0f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dd11:  // jle 0x41dd42
    if ((f.zf || f.sf != f.of)) goto L_0041dd42;
L_0041dd13:  // mov edx, 0x660634
    edx = (uint32_t)(0x660634u);
L_0041dd18:  // cmp dword ptr [edx], 0x2e6
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x2e6u, f);
L_0041dd1e:  // je 0x41dd35
    if (f.zf) goto L_0041dd35;
L_0041dd20:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0041dd21:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0041dd24:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0041dd26:  // jl 0x41dd18
    if ((f.sf != f.of)) goto L_0041dd18;
L_0041dd28:  // jmp 0x41dd42
    goto L_0041dd42;
L_0041dd2a:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0041dd2d:  // add ecx, 0x660624
    t0 = ladd<32>(ecx, 0x660624u, f);
    ecx = (uint32_t)(t0);
L_0041dd33:  // jmp 0x41dd08
    goto L_0041dd08;
L_0041dd35:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041dd36:  // mov ecx, 0x660624
    ecx = (uint32_t)(0x660624u);
L_0041dd3b:  // call 0x421970
    t0 = 0x00421970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dd40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dd40:  // jmp 0x41dd5b
    goto L_0041dd5b;
L_0041dd42:  // push 0x2e6
    t0 = 0x2e6u; esp -= 4; M32(esp) = t0;
L_0041dd47:  // push 0x6241b4
    t0 = 0x6241b4u; esp -= 4; M32(esp) = t0;
L_0041dd4c:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0041dd51:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dd56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dd56:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0041dd59:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0041dd5b:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041dd5e:  // jne 0x41dd7c
    if (!f.zf) goto L_0041dd7c;
L_0041dd60:  // push 0x48
    t0 = 0x48u; esp -= 4; M32(esp) = t0;
L_0041dd62:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dd64:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dd69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dd69:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041dd6b:  // jg 0x41dd7c
    if ((!f.zf && f.sf == f.of)) goto L_0041dd7c;
L_0041dd6d:  // push 0x48
    t0 = 0x48u; esp -= 4; M32(esp) = t0;
L_0041dd6f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dd71:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dd76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dd76:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041dd7c:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0041dd81:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041dd86:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dd8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dd8b:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041dd8e:  // je 0x41dda4
    if (f.zf) goto L_0041dda4;
L_0041dd90:  // push 0x2e6
    t0 = 0x2e6u; esp -= 4; M32(esp) = t0;
L_0041dd95:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0041dd9a:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dd9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dd9f:  // cmp dword ptr [eax + 4], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x4u)), ebx, f);
L_0041dda2:  // jne 0x41ddc0
    if (!f.zf) goto L_0041ddc0;
L_0041dda4:  // push 0x49
    t0 = 0x49u; esp -= 4; M32(esp) = t0;
L_0041dda6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dda8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ddadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ddad:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ddaf:  // jg 0x41ddc0
    if ((!f.zf && f.sf == f.of)) goto L_0041ddc0;
L_0041ddb1:  // push 0x49
    t0 = 0x49u; esp -= 4; M32(esp) = t0;
L_0041ddb3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ddb5:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ddbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ddba:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ddc0:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_0041ddc2:  // call 0x41c240
    t0 = 0x0041c240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ddc7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ddc7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0041ddca:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ddcc:  // je 0x41ddea
    if (f.zf) goto L_0041ddea;
L_0041ddce:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_0041ddd0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ddd2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ddd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ddd7:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ddd9:  // jg 0x41ddea
    if ((!f.zf && f.sf == f.of)) goto L_0041ddea;
L_0041dddb:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_0041dddd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dddf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dde4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dde4:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ddea:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_0041ddec:  // call 0x41c240
    t0 = 0x0041c240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ddf1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ddf1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0041ddf4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ddf6:  // je 0x41de14
    if (f.zf) goto L_0041de14;
L_0041ddf8:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_0041ddfa:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ddfc:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de01:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041de03:  // jg 0x41de14
    if ((!f.zf && f.sf == f.of)) goto L_0041de14;
L_0041de05:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_0041de07:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041de09:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de0e:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041de14:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_0041de16:  // call 0x41c240
    t0 = 0x0041c240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de1b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0041de1e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041de20:  // je 0x41de3e
    if (f.zf) goto L_0041de3e;
L_0041de22:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_0041de24:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041de26:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de2b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041de2d:  // jg 0x41de3e
    if ((!f.zf && f.sf == f.of)) goto L_0041de3e;
L_0041de2f:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_0041de31:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041de33:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de38:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041de3e:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_0041de40:  // call 0x41c240
    t0 = 0x0041c240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de45:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0041de48:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041de4a:  // je 0x41de68
    if (f.zf) goto L_0041de68;
L_0041de4c:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_0041de4e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041de50:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de55:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041de57:  // jg 0x41de68
    if ((!f.zf && f.sf == f.of)) goto L_0041de68;
L_0041de59:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_0041de5b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041de5d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de62:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041de68:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041de6a:  // lea ecx, [esp + 0x16]
    ecx = (uint32_t)((uint32_t)(esp + 0x16u));
L_0041de6e:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de73:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041de75:  // lea edx, [esp + 0x13]
    edx = (uint32_t)((uint32_t)(esp + 0x13u));
L_0041de79:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041de7a:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0041de7c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041de7d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de82:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041de85:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041de87:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de8c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041de8e:  // je 0x41deac
    if (f.zf) goto L_0041deac;
L_0041de90:  // push 0x4e
    t0 = 0x4eu; esp -= 4; M32(esp) = t0;
L_0041de92:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041de94:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041de99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041de99:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041de9b:  // jg 0x41deac
    if ((!f.zf && f.sf == f.of)) goto L_0041deac;
L_0041de9d:  // push 0x4e
    t0 = 0x4eu; esp -= 4; M32(esp) = t0;
L_0041de9f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dea1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dea6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dea6:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041deac:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041deae:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041deb2:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041deb7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041deb7:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041deb9:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041debd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041debe:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041dec0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041dec1:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dec6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dec6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041dec9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041decb:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ded0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ded0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ded2:  // je 0x41def0
    if (f.zf) goto L_0041def0;
L_0041ded4:  // push 0x4f
    t0 = 0x4fu; esp -= 4; M32(esp) = t0;
L_0041ded6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ded8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041deddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dedd:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041dedf:  // jg 0x41def0
    if ((!f.zf && f.sf == f.of)) goto L_0041def0;
L_0041dee1:  // push 0x4f
    t0 = 0x4fu; esp -= 4; M32(esp) = t0;
L_0041dee3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dee5:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041deeau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041deea:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041def0:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041def2:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041def6:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041defbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041defb:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041defd:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041df01:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041df02:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041df07:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041df08:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df0d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041df10:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041df12:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df17:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041df19:  // je 0x41df37
    if (f.zf) goto L_0041df37;
L_0041df1b:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_0041df1d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041df1f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df24:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041df26:  // jg 0x41df37
    if ((!f.zf && f.sf == f.of)) goto L_0041df37;
L_0041df28:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_0041df2a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041df2c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df31:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041df37:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041df39:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041df3d:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df42:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041df44:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041df48:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041df49:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_0041df4e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041df4f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df54:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041df57:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041df59:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df5e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041df60:  // je 0x41df7e
    if (f.zf) goto L_0041df7e;
L_0041df62:  // push 0x51
    t0 = 0x51u; esp -= 4; M32(esp) = t0;
L_0041df64:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041df66:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df6b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041df6d:  // jg 0x41df7e
    if ((!f.zf && f.sf == f.of)) goto L_0041df7e;
L_0041df6f:  // push 0x51
    t0 = 0x51u; esp -= 4; M32(esp) = t0;
L_0041df71:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041df73:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df78:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041df7e:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041df80:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041df84:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df89:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041df8b:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041df8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041df90:  // push 0xd4
    t0 = 0xd4u; esp -= 4; M32(esp) = t0;
L_0041df95:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041df96:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041df9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041df9b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041df9e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041dfa0:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dfa5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dfa5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dfa7:  // je 0x41dfc5
    if (f.zf) goto L_0041dfc5;
L_0041dfa9:  // push 0x52
    t0 = 0x52u; esp -= 4; M32(esp) = t0;
L_0041dfab:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dfad:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dfb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dfb2:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041dfb4:  // jg 0x41dfc5
    if ((!f.zf && f.sf == f.of)) goto L_0041dfc5;
L_0041dfb6:  // push 0x52
    t0 = 0x52u; esp -= 4; M32(esp) = t0;
L_0041dfb8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dfba:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dfbfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dfbf:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041dfc5:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041dfc7:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041dfcb:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dfd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dfd0:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041dfd2:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041dfd6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041dfd7:  // push 0xdd
    t0 = 0xddu; esp -= 4; M32(esp) = t0;
L_0041dfdc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041dfdd:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dfe2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dfe2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041dfe5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041dfe7:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dfecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dfec:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041dfee:  // je 0x41e00c
    if (f.zf) goto L_0041e00c;
L_0041dff0:  // push 0x53
    t0 = 0x53u; esp -= 4; M32(esp) = t0;
L_0041dff2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041dff4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041dff9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041dff9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041dffb:  // jg 0x41e00c
    if ((!f.zf && f.sf == f.of)) goto L_0041e00c;
L_0041dffd:  // push 0x53
    t0 = 0x53u; esp -= 4; M32(esp) = t0;
L_0041dfff:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e001:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e006u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e006:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e00c:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e00e:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e012:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e017u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e017:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e019:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e01d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e01e:  // push 0xde
    t0 = 0xdeu; esp -= 4; M32(esp) = t0;
L_0041e023:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e024:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e029u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e029:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e02c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e02e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e033u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e033:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e035:  // je 0x41e053
    if (f.zf) goto L_0041e053;
L_0041e037:  // push 0x54
    t0 = 0x54u; esp -= 4; M32(esp) = t0;
L_0041e039:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e03b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e040u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e040:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e042:  // jg 0x41e053
    if ((!f.zf && f.sf == f.of)) goto L_0041e053;
L_0041e044:  // push 0x54
    t0 = 0x54u; esp -= 4; M32(esp) = t0;
L_0041e046:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e048:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e04du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e04d:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e053:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e055:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e059:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e05eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e05e:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e060:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e064:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e065:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_0041e06a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e06b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e070u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e070:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e073:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e075:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e07au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e07a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e07c:  // je 0x41e09a
    if (f.zf) goto L_0041e09a;
L_0041e07e:  // push 0x55
    t0 = 0x55u; esp -= 4; M32(esp) = t0;
L_0041e080:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e082:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e087u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e087:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e089:  // jg 0x41e09a
    if ((!f.zf && f.sf == f.of)) goto L_0041e09a;
L_0041e08b:  // push 0x55
    t0 = 0x55u; esp -= 4; M32(esp) = t0;
L_0041e08d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e08f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e094u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e094:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e09a:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e09c:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e0a0:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e0a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e0a5:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e0a7:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e0ab:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e0ac:  // push 0xe8
    t0 = 0xe8u; esp -= 4; M32(esp) = t0;
L_0041e0b1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e0b2:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e0b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e0b7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e0ba:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e0bc:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e0c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e0c1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e0c3:  // je 0x41e0e1
    if (f.zf) goto L_0041e0e1;
L_0041e0c5:  // push 0x56
    t0 = 0x56u; esp -= 4; M32(esp) = t0;
L_0041e0c7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e0c9:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e0ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e0ce:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e0d0:  // jg 0x41e0e1
    if ((!f.zf && f.sf == f.of)) goto L_0041e0e1;
L_0041e0d2:  // push 0x56
    t0 = 0x56u; esp -= 4; M32(esp) = t0;
L_0041e0d4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e0d6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e0dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e0db:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e0e1:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e0e3:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e0e7:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e0ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e0ec:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e0ee:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e0f2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e0f3:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041e0f8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e0f9:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e0feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e0fe:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e101:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e103:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e108u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e108:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e10a:  // je 0x41e128
    if (f.zf) goto L_0041e128;
L_0041e10c:  // push 0x57
    t0 = 0x57u; esp -= 4; M32(esp) = t0;
L_0041e10e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e110:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e115u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e115:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e117:  // jg 0x41e128
    if ((!f.zf && f.sf == f.of)) goto L_0041e128;
L_0041e119:  // push 0x57
    t0 = 0x57u; esp -= 4; M32(esp) = t0;
L_0041e11b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e11d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e122u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e122:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e128:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e12a:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e12e:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e133u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e133:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e135:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e139:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e13a:  // push 0x137
    t0 = 0x137u; esp -= 4; M32(esp) = t0;
L_0041e13f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e140:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e145u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e145:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e148:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e14a:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e14fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e14f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e151:  // je 0x41e16f
    if (f.zf) goto L_0041e16f;
L_0041e153:  // push 0x58
    t0 = 0x58u; esp -= 4; M32(esp) = t0;
L_0041e155:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e157:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e15cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e15c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e15e:  // jg 0x41e16f
    if ((!f.zf && f.sf == f.of)) goto L_0041e16f;
L_0041e160:  // push 0x58
    t0 = 0x58u; esp -= 4; M32(esp) = t0;
L_0041e162:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e164:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e169u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e169:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e16f:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e171:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e175:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e17au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e17a:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e17c:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e180:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e181:  // push 0x138
    t0 = 0x138u; esp -= 4; M32(esp) = t0;
L_0041e186:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e187:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e18cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e18c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e18f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e191:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e196u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e196:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e198:  // je 0x41e1b6
    if (f.zf) goto L_0041e1b6;
L_0041e19a:  // push 0x59
    t0 = 0x59u; esp -= 4; M32(esp) = t0;
L_0041e19c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e19e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e1a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e1a3:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e1a5:  // jg 0x41e1b6
    if ((!f.zf && f.sf == f.of)) goto L_0041e1b6;
L_0041e1a7:  // push 0x59
    t0 = 0x59u; esp -= 4; M32(esp) = t0;
L_0041e1a9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e1ab:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e1b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e1b0:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e1b6:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e1b8:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e1bc:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e1c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e1c1:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e1c3:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e1c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e1c8:  // push 0x141
    t0 = 0x141u; esp -= 4; M32(esp) = t0;
L_0041e1cd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e1ce:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e1d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e1d3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e1d6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e1d8:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e1ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e1dd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e1df:  // je 0x41e1fd
    if (f.zf) goto L_0041e1fd;
L_0041e1e1:  // push 0x5a
    t0 = 0x5au; esp -= 4; M32(esp) = t0;
L_0041e1e3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e1e5:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e1eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e1ea:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e1ec:  // jg 0x41e1fd
    if ((!f.zf && f.sf == f.of)) goto L_0041e1fd;
L_0041e1ee:  // push 0x5a
    t0 = 0x5au; esp -= 4; M32(esp) = t0;
L_0041e1f0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e1f2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e1f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e1f7:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e1fd:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e1ff:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e203:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e208u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e208:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e20a:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e20e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e20f:  // push 0x142
    t0 = 0x142u; esp -= 4; M32(esp) = t0;
L_0041e214:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e215:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e21au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e21a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e21d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e21f:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e224u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e224:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e226:  // je 0x41e244
    if (f.zf) goto L_0041e244;
L_0041e228:  // push 0x5b
    t0 = 0x5bu; esp -= 4; M32(esp) = t0;
L_0041e22a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e22c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e231u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e231:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e233:  // jg 0x41e244
    if ((!f.zf && f.sf == f.of)) goto L_0041e244;
L_0041e235:  // push 0x5b
    t0 = 0x5bu; esp -= 4; M32(esp) = t0;
L_0041e237:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e239:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e23eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e23e:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e244:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e246:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e24a:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e24fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e24f:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e251:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e255:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e256:  // push 0x14b
    t0 = 0x14bu; esp -= 4; M32(esp) = t0;
L_0041e25b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e25c:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e261u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e261:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e264:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e266:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e26bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e26b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e26d:  // je 0x41e28b
    if (f.zf) goto L_0041e28b;
L_0041e26f:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_0041e271:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e273:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e278u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e278:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e27a:  // jg 0x41e28b
    if ((!f.zf && f.sf == f.of)) goto L_0041e28b;
L_0041e27c:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_0041e27e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e280:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e285u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e285:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e28b:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e28d:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e291:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e296u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e296:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e298:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e29c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e29d:  // push 0x14c
    t0 = 0x14cu; esp -= 4; M32(esp) = t0;
L_0041e2a2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e2a3:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e2a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e2a8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e2ab:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e2ad:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e2b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e2b2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e2b4:  // je 0x41e2d2
    if (f.zf) goto L_0041e2d2;
L_0041e2b6:  // push 0x5d
    t0 = 0x5du; esp -= 4; M32(esp) = t0;
L_0041e2b8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e2ba:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e2bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e2bf:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e2c1:  // jg 0x41e2d2
    if ((!f.zf && f.sf == f.of)) goto L_0041e2d2;
L_0041e2c3:  // push 0x5d
    t0 = 0x5du; esp -= 4; M32(esp) = t0;
L_0041e2c5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e2c7:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e2ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e2cc:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e2d2:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e2d4:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e2d8:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e2ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e2dd:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e2df:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e2e3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e2e4:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041e2e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e2ea:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e2efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e2ef:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e2f2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e2f4:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e2f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e2f9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e2fb:  // je 0x41e319
    if (f.zf) goto L_0041e319;
L_0041e2fd:  // push 0x5e
    t0 = 0x5eu; esp -= 4; M32(esp) = t0;
L_0041e2ff:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e301:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e306u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e306:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e308:  // jg 0x41e319
    if ((!f.zf && f.sf == f.of)) goto L_0041e319;
L_0041e30a:  // push 0x5e
    t0 = 0x5eu; esp -= 4; M32(esp) = t0;
L_0041e30c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e30e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e313u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e313:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e319:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e31b:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e31f:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e324u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e324:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e326:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e32a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e32b:  // push 0x19b
    t0 = 0x19bu; esp -= 4; M32(esp) = t0;
L_0041e330:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e331:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e336u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e336:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e339:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e33b:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e340u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e340:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e342:  // je 0x41e360
    if (f.zf) goto L_0041e360;
L_0041e344:  // push 0x5f
    t0 = 0x5fu; esp -= 4; M32(esp) = t0;
L_0041e346:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e348:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e34du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e34d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e34f:  // jg 0x41e360
    if ((!f.zf && f.sf == f.of)) goto L_0041e360;
L_0041e351:  // push 0x5f
    t0 = 0x5fu; esp -= 4; M32(esp) = t0;
L_0041e353:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e355:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e35au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e35a:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e360:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e362:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e366:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e36bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e36b:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e36d:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e371:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e372:  // push 0x19c
    t0 = 0x19cu; esp -= 4; M32(esp) = t0;
L_0041e377:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e378:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e37du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e37d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e380:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e382:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e387u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e387:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e389:  // je 0x41e3a7
    if (f.zf) goto L_0041e3a7;
L_0041e38b:  // push 0x60
    t0 = 0x60u; esp -= 4; M32(esp) = t0;
L_0041e38d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e38f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e394u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e394:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e396:  // jg 0x41e3a7
    if ((!f.zf && f.sf == f.of)) goto L_0041e3a7;
L_0041e398:  // push 0x60
    t0 = 0x60u; esp -= 4; M32(esp) = t0;
L_0041e39a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e39c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e3a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e3a1:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e3a7:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e3a9:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e3ad:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e3b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e3b2:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e3b4:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e3b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e3b9:  // push 0x1a5
    t0 = 0x1a5u; esp -= 4; M32(esp) = t0;
L_0041e3be:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e3bf:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e3c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e3c4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e3c7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e3c9:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e3ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e3ce:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e3d0:  // je 0x41e3ee
    if (f.zf) goto L_0041e3ee;
L_0041e3d2:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_0041e3d4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e3d6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e3dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e3db:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e3dd:  // jg 0x41e3ee
    if ((!f.zf && f.sf == f.of)) goto L_0041e3ee;
L_0041e3df:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_0041e3e1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e3e3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e3e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e3e8:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e3ee:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e3f0:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e3f4:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e3f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e3f9:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e3fb:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e3ff:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e400:  // push 0x1a6
    t0 = 0x1a6u; esp -= 4; M32(esp) = t0;
L_0041e405:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e406:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e40bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e40b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e40e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e410:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e415u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e415:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e417:  // je 0x41e435
    if (f.zf) goto L_0041e435;
L_0041e419:  // push 0x62
    t0 = 0x62u; esp -= 4; M32(esp) = t0;
L_0041e41b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e41d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e422u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e422:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e424:  // jg 0x41e435
    if ((!f.zf && f.sf == f.of)) goto L_0041e435;
L_0041e426:  // push 0x62
    t0 = 0x62u; esp -= 4; M32(esp) = t0;
L_0041e428:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e42a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e42fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e42f:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e435:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e437:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e43b:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e440u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e440:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e442:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e446:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e447:  // push 0x1af
    t0 = 0x1afu; esp -= 4; M32(esp) = t0;
L_0041e44c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e44d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e452u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e452:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e455:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e457:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e45cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e45c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e45e:  // je 0x41e47c
    if (f.zf) goto L_0041e47c;
L_0041e460:  // push 0x63
    t0 = 0x63u; esp -= 4; M32(esp) = t0;
L_0041e462:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e464:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e469u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e469:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e46b:  // jg 0x41e47c
    if ((!f.zf && f.sf == f.of)) goto L_0041e47c;
L_0041e46d:  // push 0x63
    t0 = 0x63u; esp -= 4; M32(esp) = t0;
L_0041e46f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e471:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e476u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e476:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e47c:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e47e:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e482:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e487u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e487:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e489:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e48d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e48e:  // push 0x1b0
    t0 = 0x1b0u; esp -= 4; M32(esp) = t0;
L_0041e493:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e494:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e499u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e499:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e49c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e49e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e4a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e4a3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e4a5:  // je 0x41e4c3
    if (f.zf) goto L_0041e4c3;
L_0041e4a7:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0041e4a9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e4ab:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e4b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e4b0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e4b2:  // jg 0x41e4c3
    if ((!f.zf && f.sf == f.of)) goto L_0041e4c3;
L_0041e4b4:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0041e4b6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e4b8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e4bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e4bd:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e4c3:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e4c5:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e4c9:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e4ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e4ce:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e4d0:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e4d4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e4d5:  // push 0x1f4
    t0 = 0x1f4u; esp -= 4; M32(esp) = t0;
L_0041e4da:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e4db:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e4e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e4e0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e4e3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e4e5:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e4eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e4ea:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e4ec:  // je 0x41e50a
    if (f.zf) goto L_0041e50a;
L_0041e4ee:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0041e4f0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e4f2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e4f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e4f7:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e4f9:  // jg 0x41e50a
    if ((!f.zf && f.sf == f.of)) goto L_0041e50a;
L_0041e4fb:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0041e4fd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e4ff:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e504u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e504:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e50a:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e50c:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e510:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e515u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e515:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e517:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e51b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e51c:  // push 0x1ff
    t0 = 0x1ffu; esp -= 4; M32(esp) = t0;
L_0041e521:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e522:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e527u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e527:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e52a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e52c:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e531u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e531:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e533:  // je 0x41e551
    if (f.zf) goto L_0041e551;
L_0041e535:  // push 0x66
    t0 = 0x66u; esp -= 4; M32(esp) = t0;
L_0041e537:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e539:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e53eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e53e:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e540:  // jg 0x41e551
    if ((!f.zf && f.sf == f.of)) goto L_0041e551;
L_0041e542:  // push 0x66
    t0 = 0x66u; esp -= 4; M32(esp) = t0;
L_0041e544:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e546:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e54bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e54b:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e551:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e553:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e557:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e55cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e55c:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e55e:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e562:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e563:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_0041e568:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e569:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e56eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e56e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e571:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e573:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e578u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e578:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e57a:  // je 0x41e598
    if (f.zf) goto L_0041e598;
L_0041e57c:  // push 0x67
    t0 = 0x67u; esp -= 4; M32(esp) = t0;
L_0041e57e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e580:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e585u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e585:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e587:  // jg 0x41e598
    if ((!f.zf && f.sf == f.of)) goto L_0041e598;
L_0041e589:  // push 0x67
    t0 = 0x67u; esp -= 4; M32(esp) = t0;
L_0041e58b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e58d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e592u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e592:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e598:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e59a:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e59e:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e5a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e5a3:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e5a5:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e5a9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e5aa:  // push 0x209
    t0 = 0x209u; esp -= 4; M32(esp) = t0;
L_0041e5af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e5b0:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e5b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e5b5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e5b8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e5ba:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e5bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e5bf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e5c1:  // je 0x41e5df
    if (f.zf) goto L_0041e5df;
L_0041e5c3:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_0041e5c5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e5c7:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e5ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e5cc:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e5ce:  // jg 0x41e5df
    if ((!f.zf && f.sf == f.of)) goto L_0041e5df;
L_0041e5d0:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_0041e5d2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e5d4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e5d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e5d9:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e5df:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e5e1:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e5e5:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e5eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e5ea:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e5ec:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e5f0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e5f1:  // push 0x20a
    t0 = 0x20au; esp -= 4; M32(esp) = t0;
L_0041e5f6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e5f7:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e5fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e5fc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e5ff:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e601:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e606u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e606:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e608:  // je 0x41e626
    if (f.zf) goto L_0041e626;
L_0041e60a:  // push 0x69
    t0 = 0x69u; esp -= 4; M32(esp) = t0;
L_0041e60c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e60e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e613u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e613:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e615:  // jg 0x41e626
    if ((!f.zf && f.sf == f.of)) goto L_0041e626;
L_0041e617:  // push 0x69
    t0 = 0x69u; esp -= 4; M32(esp) = t0;
L_0041e619:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e61b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e620u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e620:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e626:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e628:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e62c:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e631u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e631:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e633:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e637:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e638:  // push 0x20b
    t0 = 0x20bu; esp -= 4; M32(esp) = t0;
L_0041e63d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e63e:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e643u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e643:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e646:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e648:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e64du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e64d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e64f:  // je 0x41e66d
    if (f.zf) goto L_0041e66d;
L_0041e651:  // push 0x6a
    t0 = 0x6au; esp -= 4; M32(esp) = t0;
L_0041e653:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e655:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e65au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e65a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e65c:  // jg 0x41e66d
    if ((!f.zf && f.sf == f.of)) goto L_0041e66d;
L_0041e65e:  // push 0x6a
    t0 = 0x6au; esp -= 4; M32(esp) = t0;
L_0041e660:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e662:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e667u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e667:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e66d:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e66f:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e673:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e678u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e678:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e67a:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e67e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e67f:  // push 0x20c
    t0 = 0x20cu; esp -= 4; M32(esp) = t0;
L_0041e684:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e685:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e68au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e68a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e68d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e68f:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e694u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e694:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e696:  // je 0x41e6b4
    if (f.zf) goto L_0041e6b4;
L_0041e698:  // push 0x6b
    t0 = 0x6bu; esp -= 4; M32(esp) = t0;
L_0041e69a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e69c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e6a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e6a1:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e6a3:  // jg 0x41e6b4
    if ((!f.zf && f.sf == f.of)) goto L_0041e6b4;
L_0041e6a5:  // push 0x6b
    t0 = 0x6bu; esp -= 4; M32(esp) = t0;
L_0041e6a7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e6a9:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e6aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e6ae:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e6b4:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e6b6:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e6ba:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e6bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e6bf:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e6c1:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e6c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e6c6:  // push 0x258
    t0 = 0x258u; esp -= 4; M32(esp) = t0;
L_0041e6cb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e6cc:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e6d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e6d1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e6d4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e6d6:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e6dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e6db:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e6dd:  // je 0x41e6fb
    if (f.zf) goto L_0041e6fb;
L_0041e6df:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_0041e6e1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e6e3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e6e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e6e8:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e6ea:  // jg 0x41e6fb
    if ((!f.zf && f.sf == f.of)) goto L_0041e6fb;
L_0041e6ec:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_0041e6ee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e6f0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e6f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e6f5:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e6fb:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e6fd:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e701:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e706u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e706:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e708:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e70c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e70d:  // push 0x263
    t0 = 0x263u; esp -= 4; M32(esp) = t0;
L_0041e712:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e713:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e718u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e718:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e71b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e71d:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e722u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e722:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e724:  // je 0x41e742
    if (f.zf) goto L_0041e742;
L_0041e726:  // push 0x6d
    t0 = 0x6du; esp -= 4; M32(esp) = t0;
L_0041e728:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e72a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e72fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e72f:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e731:  // jg 0x41e742
    if ((!f.zf && f.sf == f.of)) goto L_0041e742;
L_0041e733:  // push 0x6d
    t0 = 0x6du; esp -= 4; M32(esp) = t0;
L_0041e735:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e737:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e73cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e73c:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e742:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e744:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e748:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e74du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e74d:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e74f:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e753:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e754:  // push 0x264
    t0 = 0x264u; esp -= 4; M32(esp) = t0;
L_0041e759:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e75a:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e75fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e75f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e762:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e764:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e769u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e769:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e76b:  // je 0x41e789
    if (f.zf) goto L_0041e789;
L_0041e76d:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041e76f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e771:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e776u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e776:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e778:  // jg 0x41e789
    if ((!f.zf && f.sf == f.of)) goto L_0041e789;
L_0041e77a:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041e77c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e77e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e783u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e783:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e789:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e78b:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e78f:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e794u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e794:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e796:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e79a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e79b:  // push 0x26d
    t0 = 0x26du; esp -= 4; M32(esp) = t0;
L_0041e7a0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e7a1:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e7a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e7a6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e7a9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e7ab:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e7b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e7b0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e7b2:  // je 0x41e7d0
    if (f.zf) goto L_0041e7d0;
L_0041e7b4:  // push 0x6f
    t0 = 0x6fu; esp -= 4; M32(esp) = t0;
L_0041e7b6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e7b8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e7bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e7bd:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e7bf:  // jg 0x41e7d0
    if ((!f.zf && f.sf == f.of)) goto L_0041e7d0;
L_0041e7c1:  // push 0x6f
    t0 = 0x6fu; esp -= 4; M32(esp) = t0;
L_0041e7c3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e7c5:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e7cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e7ca:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e7d0:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e7d2:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e7d6:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e7dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e7db:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e7dd:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e7e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e7e2:  // push 0x26e
    t0 = 0x26eu; esp -= 4; M32(esp) = t0;
L_0041e7e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e7e8:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e7edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e7ed:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e7f0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e7f2:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e7f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e7f7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e7f9:  // je 0x41e817
    if (f.zf) goto L_0041e817;
L_0041e7fb:  // push 0x70
    t0 = 0x70u; esp -= 4; M32(esp) = t0;
L_0041e7fd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e7ff:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e804u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e804:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e806:  // jg 0x41e817
    if ((!f.zf && f.sf == f.of)) goto L_0041e817;
L_0041e808:  // push 0x70
    t0 = 0x70u; esp -= 4; M32(esp) = t0;
L_0041e80a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e80c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e811u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e811:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e817:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e819:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e81d:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e822u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e822:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e824:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e828:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e829:  // push 0x2bc
    t0 = 0x2bcu; esp -= 4; M32(esp) = t0;
L_0041e82e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e82f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e834u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e834:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e837:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e839:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e83eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e83e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e840:  // je 0x41e85e
    if (f.zf) goto L_0041e85e;
L_0041e842:  // push 0x71
    t0 = 0x71u; esp -= 4; M32(esp) = t0;
L_0041e844:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e846:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e84bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e84b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e84d:  // jg 0x41e85e
    if ((!f.zf && f.sf == f.of)) goto L_0041e85e;
L_0041e84f:  // push 0x71
    t0 = 0x71u; esp -= 4; M32(esp) = t0;
L_0041e851:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e853:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e858u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e858:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e85e:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e860:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e864:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e869u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e869:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e86b:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e86f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e870:  // push 0x2c6
    t0 = 0x2c6u; esp -= 4; M32(esp) = t0;
L_0041e875:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e876:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e87bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e87b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e87e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e880:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e885u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e885:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e887:  // je 0x41e8a5
    if (f.zf) goto L_0041e8a5;
L_0041e889:  // push 0x72
    t0 = 0x72u; esp -= 4; M32(esp) = t0;
L_0041e88b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e88d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e892u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e892:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e894:  // jg 0x41e8a5
    if ((!f.zf && f.sf == f.of)) goto L_0041e8a5;
L_0041e896:  // push 0x72
    t0 = 0x72u; esp -= 4; M32(esp) = t0;
L_0041e898:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e89a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e89fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e89f:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e8a5:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e8a7:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e8ab:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e8b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e8b0:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e8b2:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e8b6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e8b7:  // push 0x2d0
    t0 = 0x2d0u; esp -= 4; M32(esp) = t0;
L_0041e8bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e8bd:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e8c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e8c2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e8c5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e8c7:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e8ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e8cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e8ce:  // je 0x41e8ec
    if (f.zf) goto L_0041e8ec;
L_0041e8d0:  // push 0x73
    t0 = 0x73u; esp -= 4; M32(esp) = t0;
L_0041e8d2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e8d4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e8d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e8d9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e8db:  // jg 0x41e8ec
    if ((!f.zf && f.sf == f.of)) goto L_0041e8ec;
L_0041e8dd:  // push 0x73
    t0 = 0x73u; esp -= 4; M32(esp) = t0;
L_0041e8df:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e8e1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e8e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e8e6:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e8ec:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e8ee:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e8f2:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e8f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e8f7:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e8f9:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e8fd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e8fe:  // push 0x2db
    t0 = 0x2dbu; esp -= 4; M32(esp) = t0;
L_0041e903:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e904:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e909u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e909:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e90c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e90e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e913u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e913:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e915:  // je 0x41e933
    if (f.zf) goto L_0041e933;
L_0041e917:  // push 0x74
    t0 = 0x74u; esp -= 4; M32(esp) = t0;
L_0041e919:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e91b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e920u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e920:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e922:  // jg 0x41e933
    if ((!f.zf && f.sf == f.of)) goto L_0041e933;
L_0041e924:  // push 0x74
    t0 = 0x74u; esp -= 4; M32(esp) = t0;
L_0041e926:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e928:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e92du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e92d:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e933:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e935:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e939:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e93eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e93e:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e940:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e944:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e945:  // push 0x2dc
    t0 = 0x2dcu; esp -= 4; M32(esp) = t0;
L_0041e94a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e94b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e950u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e950:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e953:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e955:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e95au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e95a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e95c:  // je 0x41e97a
    if (f.zf) goto L_0041e97a;
L_0041e95e:  // push 0x75
    t0 = 0x75u; esp -= 4; M32(esp) = t0;
L_0041e960:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e962:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e967u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e967:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e969:  // jg 0x41e97a
    if ((!f.zf && f.sf == f.of)) goto L_0041e97a;
L_0041e96b:  // push 0x75
    t0 = 0x75u; esp -= 4; M32(esp) = t0;
L_0041e96d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e96f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e974u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e974:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e97a:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e97c:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e980:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e985u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e985:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e987:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e98b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e98c:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0041e991:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041e992:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e997u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e997:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e99a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e99c:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e9a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e9a1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e9a3:  // je 0x41e9c1
    if (f.zf) goto L_0041e9c1;
L_0041e9a5:  // push 0x76
    t0 = 0x76u; esp -= 4; M32(esp) = t0;
L_0041e9a7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e9a9:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e9aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e9ae:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e9b0:  // jg 0x41e9c1
    if ((!f.zf && f.sf == f.of)) goto L_0041e9c1;
L_0041e9b2:  // push 0x76
    t0 = 0x76u; esp -= 4; M32(esp) = t0;
L_0041e9b4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e9b6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e9bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e9bb:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041e9c1:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041e9c3:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041e9c7:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e9ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e9cc:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041e9ce:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041e9d2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041e9d3:  // push 0x2e6
    t0 = 0x2e6u; esp -= 4; M32(esp) = t0;
L_0041e9d8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041e9d9:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e9deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e9de:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041e9e1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041e9e3:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e9e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e9e8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041e9ea:  // je 0x41ea08
    if (f.zf) goto L_0041ea08;
L_0041e9ec:  // push 0x77
    t0 = 0x77u; esp -= 4; M32(esp) = t0;
L_0041e9ee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e9f0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041e9f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041e9f5:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041e9f7:  // jg 0x41ea08
    if ((!f.zf && f.sf == f.of)) goto L_0041ea08;
L_0041e9f9:  // push 0x77
    t0 = 0x77u; esp -= 4; M32(esp) = t0;
L_0041e9fb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041e9fd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea02:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ea08:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0041ea0a:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ea0e:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea13:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ea15:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ea19:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ea1a:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0041ea1f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ea20:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea25:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ea28:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ea2a:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea2f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ea31:  // je 0x41ea4f
    if (f.zf) goto L_0041ea4f;
L_0041ea33:  // push 0x78
    t0 = 0x78u; esp -= 4; M32(esp) = t0;
L_0041ea35:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ea37:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea3c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ea3e:  // jg 0x41ea4f
    if ((!f.zf && f.sf == f.of)) goto L_0041ea4f;
L_0041ea40:  // push 0x78
    t0 = 0x78u; esp -= 4; M32(esp) = t0;
L_0041ea42:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ea44:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea49:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ea4f:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ea51:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ea55:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea5a:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ea5c:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ea60:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ea61:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0041ea63:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ea64:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea69:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ea6c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ea6e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea73:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ea75:  // je 0x41ea93
    if (f.zf) goto L_0041ea93;
L_0041ea77:  // push 0x79
    t0 = 0x79u; esp -= 4; M32(esp) = t0;
L_0041ea79:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ea7b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea80:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ea82:  // jg 0x41ea93
    if ((!f.zf && f.sf == f.of)) goto L_0041ea93;
L_0041ea84:  // push 0x79
    t0 = 0x79u; esp -= 4; M32(esp) = t0;
L_0041ea86:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ea88:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea8d:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ea93:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ea95:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ea99:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ea9eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ea9e:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041eaa0:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041eaa4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041eaa5:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041eaa7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041eaa8:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eaadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eaad:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eab0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eab2:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eab7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eab7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041eab9:  // je 0x41ead7
    if (f.zf) goto L_0041ead7;
L_0041eabb:  // push 0x7a
    t0 = 0x7au; esp -= 4; M32(esp) = t0;
L_0041eabd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eabf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eac4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eac4:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041eac6:  // jg 0x41ead7
    if ((!f.zf && f.sf == f.of)) goto L_0041ead7;
L_0041eac8:  // push 0x7a
    t0 = 0x7au; esp -= 4; M32(esp) = t0;
L_0041eaca:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eacc:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ead1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ead1:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ead7:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ead9:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041eadd:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eae2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eae2:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041eae4:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041eae8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041eae9:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041eaee:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041eaef:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eaf4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eaf4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eaf7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eaf9:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eafeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eafe:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041eb00:  // je 0x41eb1e
    if (f.zf) goto L_0041eb1e;
L_0041eb02:  // push 0x7b
    t0 = 0x7bu; esp -= 4; M32(esp) = t0;
L_0041eb04:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eb06:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb0b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041eb0d:  // jg 0x41eb1e
    if ((!f.zf && f.sf == f.of)) goto L_0041eb1e;
L_0041eb0f:  // push 0x7b
    t0 = 0x7bu; esp -= 4; M32(esp) = t0;
L_0041eb11:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eb13:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb18:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041eb1e:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041eb20:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041eb24:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb29:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041eb2b:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041eb2f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041eb30:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_0041eb35:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041eb36:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb3b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eb3e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eb40:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb45:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041eb47:  // je 0x41eb65
    if (f.zf) goto L_0041eb65;
L_0041eb49:  // push 0x7c
    t0 = 0x7cu; esp -= 4; M32(esp) = t0;
L_0041eb4b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eb4d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb52:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041eb54:  // jg 0x41eb65
    if ((!f.zf && f.sf == f.of)) goto L_0041eb65;
L_0041eb56:  // push 0x7c
    t0 = 0x7cu; esp -= 4; M32(esp) = t0;
L_0041eb58:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eb5a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb5f:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041eb65:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041eb67:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041eb6b:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb70:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041eb72:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041eb76:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041eb77:  // push 0xd4
    t0 = 0xd4u; esp -= 4; M32(esp) = t0;
L_0041eb7c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041eb7d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb82:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eb85:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eb87:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb8c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041eb8e:  // je 0x41ebac
    if (f.zf) goto L_0041ebac;
L_0041eb90:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_0041eb92:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eb94:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eb99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eb99:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041eb9b:  // jg 0x41ebac
    if ((!f.zf && f.sf == f.of)) goto L_0041ebac;
L_0041eb9d:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_0041eb9f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eba1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eba6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eba6:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ebac:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ebae:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ebb2:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ebb7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ebb7:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ebb9:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ebbd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ebbe:  // push 0xdd
    t0 = 0xddu; esp -= 4; M32(esp) = t0;
L_0041ebc3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ebc4:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ebc9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ebc9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ebcc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ebce:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ebd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ebd3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ebd5:  // je 0x41ebf3
    if (f.zf) goto L_0041ebf3;
L_0041ebd7:  // push 0x7e
    t0 = 0x7eu; esp -= 4; M32(esp) = t0;
L_0041ebd9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ebdb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ebe0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ebe0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ebe2:  // jg 0x41ebf3
    if ((!f.zf && f.sf == f.of)) goto L_0041ebf3;
L_0041ebe4:  // push 0x7e
    t0 = 0x7eu; esp -= 4; M32(esp) = t0;
L_0041ebe6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ebe8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ebedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ebed:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ebf3:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ebf5:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ebf9:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ebfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ebfe:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ec00:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ec04:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ec05:  // push 0xde
    t0 = 0xdeu; esp -= 4; M32(esp) = t0;
L_0041ec0a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ec0b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec10:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ec13:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ec15:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec1a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ec1c:  // je 0x41ec3a
    if (f.zf) goto L_0041ec3a;
L_0041ec1e:  // push 0x7f
    t0 = 0x7fu; esp -= 4; M32(esp) = t0;
L_0041ec20:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ec22:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec27:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ec29:  // jg 0x41ec3a
    if ((!f.zf && f.sf == f.of)) goto L_0041ec3a;
L_0041ec2b:  // push 0x7f
    t0 = 0x7fu; esp -= 4; M32(esp) = t0;
L_0041ec2d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ec2f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec34:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ec3a:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ec3c:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ec40:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec45:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ec47:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ec4b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ec4c:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_0041ec51:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ec52:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec57:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ec5a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ec5c:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec61:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ec63:  // je 0x41ec87
    if (f.zf) goto L_0041ec87;
L_0041ec65:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0041ec6a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ec6c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec71:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ec73:  // jg 0x41ec87
    if ((!f.zf && f.sf == f.of)) goto L_0041ec87;
L_0041ec75:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0041ec7a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ec7c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec81:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ec87:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ec89:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ec8d:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ec92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ec92:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ec94:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ec98:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ec99:  // push 0xe8
    t0 = 0xe8u; esp -= 4; M32(esp) = t0;
L_0041ec9e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ec9f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eca4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eca4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eca7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eca9:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ecaeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ecae:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ecb0:  // je 0x41ecd4
    if (f.zf) goto L_0041ecd4;
L_0041ecb2:  // push 0x81
    t0 = 0x81u; esp -= 4; M32(esp) = t0;
L_0041ecb7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ecb9:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ecbeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ecbe:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ecc0:  // jg 0x41ecd4
    if ((!f.zf && f.sf == f.of)) goto L_0041ecd4;
L_0041ecc2:  // push 0x81
    t0 = 0x81u; esp -= 4; M32(esp) = t0;
L_0041ecc7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ecc9:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ecceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ecce:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ecd4:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ecd6:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ecda:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ecdfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ecdf:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ece1:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ece5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ece6:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041eceb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ecec:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ecf1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ecf1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ecf4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ecf6:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ecfbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ecfb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ecfd:  // je 0x41ed21
    if (f.zf) goto L_0041ed21;
L_0041ecff:  // push 0x82
    t0 = 0x82u; esp -= 4; M32(esp) = t0;
L_0041ed04:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ed06:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed0b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ed0d:  // jg 0x41ed21
    if ((!f.zf && f.sf == f.of)) goto L_0041ed21;
L_0041ed0f:  // push 0x82
    t0 = 0x82u; esp -= 4; M32(esp) = t0;
L_0041ed14:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ed16:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed1b:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ed21:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ed23:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ed27:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed2c:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ed2e:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ed32:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ed33:  // push 0x137
    t0 = 0x137u; esp -= 4; M32(esp) = t0;
L_0041ed38:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ed39:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed3e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ed41:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ed43:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed48:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ed4a:  // je 0x41ed6e
    if (f.zf) goto L_0041ed6e;
L_0041ed4c:  // push 0x83
    t0 = 0x83u; esp -= 4; M32(esp) = t0;
L_0041ed51:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ed53:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed58:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ed5a:  // jg 0x41ed6e
    if ((!f.zf && f.sf == f.of)) goto L_0041ed6e;
L_0041ed5c:  // push 0x83
    t0 = 0x83u; esp -= 4; M32(esp) = t0;
L_0041ed61:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ed63:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed68:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ed6e:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ed70:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ed74:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed79:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ed7b:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ed7f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ed80:  // push 0x138
    t0 = 0x138u; esp -= 4; M32(esp) = t0;
L_0041ed85:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ed86:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed8b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ed8e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ed90:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ed95u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ed95:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ed97:  // je 0x41edbb
    if (f.zf) goto L_0041edbb;
L_0041ed99:  // push 0x84
    t0 = 0x84u; esp -= 4; M32(esp) = t0;
L_0041ed9e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eda0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eda5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eda5:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041eda7:  // jg 0x41edbb
    if ((!f.zf && f.sf == f.of)) goto L_0041edbb;
L_0041eda9:  // push 0x84
    t0 = 0x84u; esp -= 4; M32(esp) = t0;
L_0041edae:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041edb0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041edb5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041edb5:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041edbb:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041edbd:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041edc1:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041edc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041edc6:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041edc8:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041edcc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041edcd:  // push 0x141
    t0 = 0x141u; esp -= 4; M32(esp) = t0;
L_0041edd2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041edd3:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041edd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041edd8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eddb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eddd:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ede2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ede2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ede4:  // je 0x41ee08
    if (f.zf) goto L_0041ee08;
L_0041ede6:  // push 0x85
    t0 = 0x85u; esp -= 4; M32(esp) = t0;
L_0041edeb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eded:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041edf2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041edf2:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041edf4:  // jg 0x41ee08
    if ((!f.zf && f.sf == f.of)) goto L_0041ee08;
L_0041edf6:  // push 0x85
    t0 = 0x85u; esp -= 4; M32(esp) = t0;
L_0041edfb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041edfd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee02:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ee08:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ee0a:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ee0e:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee13:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ee15:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ee19:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ee1a:  // push 0x142
    t0 = 0x142u; esp -= 4; M32(esp) = t0;
L_0041ee1f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ee20:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee25:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ee28:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ee2a:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee2f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ee31:  // je 0x41ee55
    if (f.zf) goto L_0041ee55;
L_0041ee33:  // push 0x86
    t0 = 0x86u; esp -= 4; M32(esp) = t0;
L_0041ee38:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ee3a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee3fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee3f:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ee41:  // jg 0x41ee55
    if ((!f.zf && f.sf == f.of)) goto L_0041ee55;
L_0041ee43:  // push 0x86
    t0 = 0x86u; esp -= 4; M32(esp) = t0;
L_0041ee48:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ee4a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee4f:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ee55:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ee57:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ee5b:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee60:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ee62:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ee66:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ee67:  // push 0x14b
    t0 = 0x14bu; esp -= 4; M32(esp) = t0;
L_0041ee6c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ee6d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee72:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ee75:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ee77:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee7c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ee7e:  // je 0x41eea2
    if (f.zf) goto L_0041eea2;
L_0041ee80:  // push 0x87
    t0 = 0x87u; esp -= 4; M32(esp) = t0;
L_0041ee85:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ee87:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee8c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ee8e:  // jg 0x41eea2
    if ((!f.zf && f.sf == f.of)) goto L_0041eea2;
L_0041ee90:  // push 0x87
    t0 = 0x87u; esp -= 4; M32(esp) = t0;
L_0041ee95:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ee97:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ee9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ee9c:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041eea2:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041eea4:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041eea8:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eeadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eead:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041eeaf:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041eeb3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041eeb4:  // push 0x14c
    t0 = 0x14cu; esp -= 4; M32(esp) = t0;
L_0041eeb9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041eeba:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eebfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eebf:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eec2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eec4:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eec9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eec9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041eecb:  // je 0x41eeef
    if (f.zf) goto L_0041eeef;
L_0041eecd:  // push 0x88
    t0 = 0x88u; esp -= 4; M32(esp) = t0;
L_0041eed2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eed4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eed9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eed9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041eedb:  // jg 0x41eeef
    if ((!f.zf && f.sf == f.of)) goto L_0041eeef;
L_0041eedd:  // push 0x88
    t0 = 0x88u; esp -= 4; M32(esp) = t0;
L_0041eee2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041eee4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eee9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eee9:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041eeef:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041eef1:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041eef5:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eefau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eefa:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041eefc:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ef00:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ef01:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041ef06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ef07:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef0c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ef0f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ef11:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef16:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ef18:  // je 0x41ef3c
    if (f.zf) goto L_0041ef3c;
L_0041ef1a:  // push 0x89
    t0 = 0x89u; esp -= 4; M32(esp) = t0;
L_0041ef1f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ef21:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef26u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef26:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ef28:  // jg 0x41ef3c
    if ((!f.zf && f.sf == f.of)) goto L_0041ef3c;
L_0041ef2a:  // push 0x89
    t0 = 0x89u; esp -= 4; M32(esp) = t0;
L_0041ef2f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ef31:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef36:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ef3c:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ef3e:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ef42:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef47:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ef49:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ef4d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ef4e:  // push 0x19b
    t0 = 0x19bu; esp -= 4; M32(esp) = t0;
L_0041ef53:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ef54:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef59:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ef5c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ef5e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef63:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ef65:  // je 0x41ef89
    if (f.zf) goto L_0041ef89;
L_0041ef67:  // push 0x8a
    t0 = 0x8au; esp -= 4; M32(esp) = t0;
L_0041ef6c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ef6e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef73:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ef75:  // jg 0x41ef89
    if ((!f.zf && f.sf == f.of)) goto L_0041ef89;
L_0041ef77:  // push 0x8a
    t0 = 0x8au; esp -= 4; M32(esp) = t0;
L_0041ef7c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ef7e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef83:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ef89:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041ef8b:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ef8f:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ef94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ef94:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ef96:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ef9a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ef9b:  // push 0x19c
    t0 = 0x19cu; esp -= 4; M32(esp) = t0;
L_0041efa0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041efa1:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041efa6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041efa6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041efa9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041efab:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041efb0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041efb0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041efb2:  // je 0x41efd6
    if (f.zf) goto L_0041efd6;
L_0041efb4:  // push 0x8b
    t0 = 0x8bu; esp -= 4; M32(esp) = t0;
L_0041efb9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041efbb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041efc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041efc0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041efc2:  // jg 0x41efd6
    if ((!f.zf && f.sf == f.of)) goto L_0041efd6;
L_0041efc4:  // push 0x8b
    t0 = 0x8bu; esp -= 4; M32(esp) = t0;
L_0041efc9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041efcb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041efd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041efd0:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041efd6:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041efd8:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041efdc:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041efe1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041efe1:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041efe3:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041efe7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041efe8:  // push 0x1a5
    t0 = 0x1a5u; esp -= 4; M32(esp) = t0;
L_0041efed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041efee:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041eff3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041eff3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041eff6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041eff8:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041effdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041effd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041efff:  // je 0x41f023
    if (f.zf) goto L_0041f023;
L_0041f001:  // push 0x8c
    t0 = 0x8cu; esp -= 4; M32(esp) = t0;
L_0041f006:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f008:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f00du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f00d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f00f:  // jg 0x41f023
    if ((!f.zf && f.sf == f.of)) goto L_0041f023;
L_0041f011:  // push 0x8c
    t0 = 0x8cu; esp -= 4; M32(esp) = t0;
L_0041f016:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f018:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f01du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f01d:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f023:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f025:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f029:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f02eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f02e:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f030:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f034:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f035:  // push 0x1a6
    t0 = 0x1a6u; esp -= 4; M32(esp) = t0;
L_0041f03a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f03b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f040u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f040:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f043:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f045:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f04au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f04a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f04c:  // je 0x41f070
    if (f.zf) goto L_0041f070;
L_0041f04e:  // push 0x8d
    t0 = 0x8du; esp -= 4; M32(esp) = t0;
L_0041f053:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f055:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f05au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f05a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f05c:  // jg 0x41f070
    if ((!f.zf && f.sf == f.of)) goto L_0041f070;
L_0041f05e:  // push 0x8d
    t0 = 0x8du; esp -= 4; M32(esp) = t0;
L_0041f063:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f065:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f06au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f06a:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f070:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f072:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f076:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f07bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f07b:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f07d:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f081:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f082:  // push 0x1af
    t0 = 0x1afu; esp -= 4; M32(esp) = t0;
L_0041f087:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f088:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f08du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f08d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f090:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f092:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f097u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f097:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f099:  // je 0x41f0bd
    if (f.zf) goto L_0041f0bd;
L_0041f09b:  // push 0x8e
    t0 = 0x8eu; esp -= 4; M32(esp) = t0;
L_0041f0a0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f0a2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f0a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f0a7:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f0a9:  // jg 0x41f0bd
    if ((!f.zf && f.sf == f.of)) goto L_0041f0bd;
L_0041f0ab:  // push 0x8e
    t0 = 0x8eu; esp -= 4; M32(esp) = t0;
L_0041f0b0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f0b2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f0b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f0b7:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f0bd:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f0bf:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f0c3:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f0c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f0c8:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f0ca:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f0ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f0cf:  // push 0x1b0
    t0 = 0x1b0u; esp -= 4; M32(esp) = t0;
L_0041f0d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f0d5:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f0dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f0da:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f0dd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f0df:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f0e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f0e4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f0e6:  // je 0x41f10a
    if (f.zf) goto L_0041f10a;
L_0041f0e8:  // push 0x8f
    t0 = 0x8fu; esp -= 4; M32(esp) = t0;
L_0041f0ed:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f0ef:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f0f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f0f4:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f0f6:  // jg 0x41f10a
    if ((!f.zf && f.sf == f.of)) goto L_0041f10a;
L_0041f0f8:  // push 0x8f
    t0 = 0x8fu; esp -= 4; M32(esp) = t0;
L_0041f0fd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f0ff:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f104u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f104:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f10a:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f10c:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f110:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f115u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f115:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f117:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f11b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f11c:  // push 0x1f4
    t0 = 0x1f4u; esp -= 4; M32(esp) = t0;
L_0041f121:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f122:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f127u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f127:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f12a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f12c:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f131u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f131:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f133:  // je 0x41f157
    if (f.zf) goto L_0041f157;
L_0041f135:  // push 0x90
    t0 = 0x90u; esp -= 4; M32(esp) = t0;
L_0041f13a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f13c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f141u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f141:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f143:  // jg 0x41f157
    if ((!f.zf && f.sf == f.of)) goto L_0041f157;
L_0041f145:  // push 0x90
    t0 = 0x90u; esp -= 4; M32(esp) = t0;
L_0041f14a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f14c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f151u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f151:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f157:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f159:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f15d:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f162u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f162:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f164:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f168:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f169:  // push 0x1ff
    t0 = 0x1ffu; esp -= 4; M32(esp) = t0;
L_0041f16e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f16f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f174u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f174:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f177:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f179:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f17eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f17e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f180:  // je 0x41f1a4
    if (f.zf) goto L_0041f1a4;
L_0041f182:  // push 0x91
    t0 = 0x91u; esp -= 4; M32(esp) = t0;
L_0041f187:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f189:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f18eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f18e:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f190:  // jg 0x41f1a4
    if ((!f.zf && f.sf == f.of)) goto L_0041f1a4;
L_0041f192:  // push 0x91
    t0 = 0x91u; esp -= 4; M32(esp) = t0;
L_0041f197:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f199:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f19eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f19e:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f1a4:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f1a6:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f1aa:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f1afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f1af:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f1b1:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f1b5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f1b6:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_0041f1bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f1bc:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f1c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f1c1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f1c4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f1c6:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f1cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f1cb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f1cd:  // je 0x41f1f1
    if (f.zf) goto L_0041f1f1;
L_0041f1cf:  // push 0x92
    t0 = 0x92u; esp -= 4; M32(esp) = t0;
L_0041f1d4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f1d6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f1dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f1db:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f1dd:  // jg 0x41f1f1
    if ((!f.zf && f.sf == f.of)) goto L_0041f1f1;
L_0041f1df:  // push 0x92
    t0 = 0x92u; esp -= 4; M32(esp) = t0;
L_0041f1e4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f1e6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f1ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f1eb:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f1f1:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f1f3:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f1f7:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f1fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f1fc:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f1fe:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f202:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f203:  // push 0x209
    t0 = 0x209u; esp -= 4; M32(esp) = t0;
L_0041f208:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f209:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f20eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f20e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f211:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f213:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f218u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f218:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f21a:  // je 0x41f23e
    if (f.zf) goto L_0041f23e;
L_0041f21c:  // push 0x93
    t0 = 0x93u; esp -= 4; M32(esp) = t0;
L_0041f221:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f223:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f228u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f228:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f22a:  // jg 0x41f23e
    if ((!f.zf && f.sf == f.of)) goto L_0041f23e;
L_0041f22c:  // push 0x93
    t0 = 0x93u; esp -= 4; M32(esp) = t0;
L_0041f231:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f233:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f238u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f238:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f23e:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f240:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f244:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f249u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f249:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f24b:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f24f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f250:  // push 0x20a
    t0 = 0x20au; esp -= 4; M32(esp) = t0;
L_0041f255:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f256:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f25bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f25b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f25e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f260:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f265u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f265:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f267:  // je 0x41f28b
    if (f.zf) goto L_0041f28b;
L_0041f269:  // push 0x94
    t0 = 0x94u; esp -= 4; M32(esp) = t0;
L_0041f26e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f270:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f275u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f275:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f277:  // jg 0x41f28b
    if ((!f.zf && f.sf == f.of)) goto L_0041f28b;
L_0041f279:  // push 0x94
    t0 = 0x94u; esp -= 4; M32(esp) = t0;
L_0041f27e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f280:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f285u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f285:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f28b:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f28d:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f291:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f296u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f296:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f298:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f29c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f29d:  // push 0x20b
    t0 = 0x20bu; esp -= 4; M32(esp) = t0;
L_0041f2a2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f2a3:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f2a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f2a8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f2ab:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f2ad:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f2b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f2b2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f2b4:  // je 0x41f2d8
    if (f.zf) goto L_0041f2d8;
L_0041f2b6:  // push 0x95
    t0 = 0x95u; esp -= 4; M32(esp) = t0;
L_0041f2bb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f2bd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f2c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f2c2:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f2c4:  // jg 0x41f2d8
    if ((!f.zf && f.sf == f.of)) goto L_0041f2d8;
L_0041f2c6:  // push 0x95
    t0 = 0x95u; esp -= 4; M32(esp) = t0;
L_0041f2cb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f2cd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f2d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f2d2:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f2d8:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f2da:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f2de:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f2e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f2e3:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f2e5:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f2e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f2ea:  // push 0x20c
    t0 = 0x20cu; esp -= 4; M32(esp) = t0;
L_0041f2ef:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f2f0:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f2f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f2f5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f2f8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f2fa:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f2ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f2ff:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f301:  // je 0x41f325
    if (f.zf) goto L_0041f325;
L_0041f303:  // push 0x96
    t0 = 0x96u; esp -= 4; M32(esp) = t0;
L_0041f308:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f30a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f30fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f30f:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f311:  // jg 0x41f325
    if ((!f.zf && f.sf == f.of)) goto L_0041f325;
L_0041f313:  // push 0x96
    t0 = 0x96u; esp -= 4; M32(esp) = t0;
L_0041f318:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f31a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f31fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f31f:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f325:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f327:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f32b:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f330u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f330:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f332:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f336:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f337:  // push 0x258
    t0 = 0x258u; esp -= 4; M32(esp) = t0;
L_0041f33c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f33d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f342u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f342:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f345:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f347:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f34cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f34c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f34e:  // je 0x41f372
    if (f.zf) goto L_0041f372;
L_0041f350:  // push 0x97
    t0 = 0x97u; esp -= 4; M32(esp) = t0;
L_0041f355:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f357:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f35cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f35c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f35e:  // jg 0x41f372
    if ((!f.zf && f.sf == f.of)) goto L_0041f372;
L_0041f360:  // push 0x97
    t0 = 0x97u; esp -= 4; M32(esp) = t0;
L_0041f365:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f367:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f36cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f36c:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f372:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f374:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f378:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f37du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f37d:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f37f:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f383:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f384:  // push 0x263
    t0 = 0x263u; esp -= 4; M32(esp) = t0;
L_0041f389:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f38a:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f38fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f38f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f392:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f394:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f399u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f399:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f39b:  // je 0x41f3bf
    if (f.zf) goto L_0041f3bf;
L_0041f39d:  // push 0x98
    t0 = 0x98u; esp -= 4; M32(esp) = t0;
L_0041f3a2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f3a4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f3a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f3a9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f3ab:  // jg 0x41f3bf
    if ((!f.zf && f.sf == f.of)) goto L_0041f3bf;
L_0041f3ad:  // push 0x98
    t0 = 0x98u; esp -= 4; M32(esp) = t0;
L_0041f3b2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f3b4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f3b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f3b9:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f3bf:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f3c1:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f3c5:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f3cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f3ca:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f3cc:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f3d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f3d1:  // push 0x264
    t0 = 0x264u; esp -= 4; M32(esp) = t0;
L_0041f3d6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f3d7:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f3dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f3dc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f3df:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f3e1:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f3e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f3e6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f3e8:  // je 0x41f40c
    if (f.zf) goto L_0041f40c;
L_0041f3ea:  // push 0x99
    t0 = 0x99u; esp -= 4; M32(esp) = t0;
L_0041f3ef:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f3f1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f3f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f3f6:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f3f8:  // jg 0x41f40c
    if ((!f.zf && f.sf == f.of)) goto L_0041f40c;
L_0041f3fa:  // push 0x99
    t0 = 0x99u; esp -= 4; M32(esp) = t0;
L_0041f3ff:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f401:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f406u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f406:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f40c:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f40e:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f412:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f417u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f417:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f419:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f41d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f41e:  // push 0x26d
    t0 = 0x26du; esp -= 4; M32(esp) = t0;
L_0041f423:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f424:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f429u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f429:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f42c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f42e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f433u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f433:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f435:  // je 0x41f459
    if (f.zf) goto L_0041f459;
L_0041f437:  // push 0x9a
    t0 = 0x9au; esp -= 4; M32(esp) = t0;
L_0041f43c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f43e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f443u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f443:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f445:  // jg 0x41f459
    if ((!f.zf && f.sf == f.of)) goto L_0041f459;
L_0041f447:  // push 0x9a
    t0 = 0x9au; esp -= 4; M32(esp) = t0;
L_0041f44c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f44e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f453u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f453:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f459:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f45b:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f45f:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f464u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f464:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f466:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f46a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f46b:  // push 0x26e
    t0 = 0x26eu; esp -= 4; M32(esp) = t0;
L_0041f470:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f471:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f476u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f476:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f479:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f47b:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f480u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f480:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f482:  // je 0x41f4a6
    if (f.zf) goto L_0041f4a6;
L_0041f484:  // push 0x9b
    t0 = 0x9bu; esp -= 4; M32(esp) = t0;
L_0041f489:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f48b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f490u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f490:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f492:  // jg 0x41f4a6
    if ((!f.zf && f.sf == f.of)) goto L_0041f4a6;
L_0041f494:  // push 0x9b
    t0 = 0x9bu; esp -= 4; M32(esp) = t0;
L_0041f499:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f49b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f4a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f4a0:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f4a6:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f4a8:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f4ac:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f4b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f4b1:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f4b3:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f4b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f4b8:  // push 0x2bc
    t0 = 0x2bcu; esp -= 4; M32(esp) = t0;
L_0041f4bd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f4be:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f4c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f4c3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f4c6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f4c8:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f4cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f4cd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f4cf:  // je 0x41f4f3
    if (f.zf) goto L_0041f4f3;
L_0041f4d1:  // push 0x9c
    t0 = 0x9cu; esp -= 4; M32(esp) = t0;
L_0041f4d6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f4d8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f4ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f4dd:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f4df:  // jg 0x41f4f3
    if ((!f.zf && f.sf == f.of)) goto L_0041f4f3;
L_0041f4e1:  // push 0x9c
    t0 = 0x9cu; esp -= 4; M32(esp) = t0;
L_0041f4e6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f4e8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f4edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f4ed:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f4f3:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f4f5:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f4f9:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f4feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f4fe:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f500:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f504:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f505:  // push 0x2c6
    t0 = 0x2c6u; esp -= 4; M32(esp) = t0;
L_0041f50a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f50b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f510u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f510:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f513:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f515:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f51au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f51a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f51c:  // je 0x41f540
    if (f.zf) goto L_0041f540;
L_0041f51e:  // push 0x9d
    t0 = 0x9du; esp -= 4; M32(esp) = t0;
L_0041f523:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f525:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f52au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f52a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f52c:  // jg 0x41f540
    if ((!f.zf && f.sf == f.of)) goto L_0041f540;
L_0041f52e:  // push 0x9d
    t0 = 0x9du; esp -= 4; M32(esp) = t0;
L_0041f533:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f535:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f53au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f53a:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f540:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f542:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f546:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f54bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f54b:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f54d:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f551:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f552:  // push 0x2d0
    t0 = 0x2d0u; esp -= 4; M32(esp) = t0;
L_0041f557:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f558:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f55du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f55d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f560:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f562:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f567u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f567:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f569:  // je 0x41f58d
    if (f.zf) goto L_0041f58d;
L_0041f56b:  // push 0x9e
    t0 = 0x9eu; esp -= 4; M32(esp) = t0;
L_0041f570:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f572:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f577u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f577:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f579:  // jg 0x41f58d
    if ((!f.zf && f.sf == f.of)) goto L_0041f58d;
L_0041f57b:  // push 0x9e
    t0 = 0x9eu; esp -= 4; M32(esp) = t0;
L_0041f580:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f582:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f587u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f587:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f58d:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f58f:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f593:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f598u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f598:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f59a:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f59e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f59f:  // push 0x2db
    t0 = 0x2dbu; esp -= 4; M32(esp) = t0;
L_0041f5a4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f5a5:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f5aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f5aa:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f5ad:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f5af:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f5b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f5b4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f5b6:  // je 0x41f5da
    if (f.zf) goto L_0041f5da;
L_0041f5b8:  // push 0x9f
    t0 = 0x9fu; esp -= 4; M32(esp) = t0;
L_0041f5bd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f5bf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f5c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f5c4:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f5c6:  // jg 0x41f5da
    if ((!f.zf && f.sf == f.of)) goto L_0041f5da;
L_0041f5c8:  // push 0x9f
    t0 = 0x9fu; esp -= 4; M32(esp) = t0;
L_0041f5cd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f5cf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f5d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f5d4:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f5da:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f5dc:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f5e0:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f5e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f5e5:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f5e7:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f5eb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f5ec:  // push 0x2dc
    t0 = 0x2dcu; esp -= 4; M32(esp) = t0;
L_0041f5f1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f5f2:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f5f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f5f7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f5fa:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f5fc:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f601u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f601:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f603:  // je 0x41f627
    if (f.zf) goto L_0041f627;
L_0041f605:  // push 0xa0
    t0 = 0xa0u; esp -= 4; M32(esp) = t0;
L_0041f60a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f60c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f611u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f611:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f613:  // jg 0x41f627
    if ((!f.zf && f.sf == f.of)) goto L_0041f627;
L_0041f615:  // push 0xa0
    t0 = 0xa0u; esp -= 4; M32(esp) = t0;
L_0041f61a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f61c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f621u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f621:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f627:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f629:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f62d:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f632u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f632:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f634:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f638:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f639:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0041f63e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f63f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f644u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f644:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f647:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f649:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f64eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f64e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f650:  // je 0x41f674
    if (f.zf) goto L_0041f674;
L_0041f652:  // push 0xa1
    t0 = 0xa1u; esp -= 4; M32(esp) = t0;
L_0041f657:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f659:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f65eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f65e:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f660:  // jg 0x41f674
    if ((!f.zf && f.sf == f.of)) goto L_0041f674;
L_0041f662:  // push 0xa1
    t0 = 0xa1u; esp -= 4; M32(esp) = t0;
L_0041f667:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f669:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f66eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f66e:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f674:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f676:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f67a:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f67fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f67f:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f681:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f685:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f686:  // push 0x2e6
    t0 = 0x2e6u; esp -= 4; M32(esp) = t0;
L_0041f68b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f68c:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f691u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f691:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f694:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f696:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f69bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f69b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f69d:  // je 0x41f6c1
    if (f.zf) goto L_0041f6c1;
L_0041f69f:  // push 0xa2
    t0 = 0xa2u; esp -= 4; M32(esp) = t0;
L_0041f6a4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f6a6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f6abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f6ab:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f6ad:  // jg 0x41f6c1
    if ((!f.zf && f.sf == f.of)) goto L_0041f6c1;
L_0041f6af:  // push 0xa2
    t0 = 0xa2u; esp -= 4; M32(esp) = t0;
L_0041f6b4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f6b6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f6bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f6bb:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f6c1:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0041f6c3:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f6c7:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f6ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f6cc:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f6ce:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f6d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f6d3:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0041f6d8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f6d9:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f6deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f6de:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f6e1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f6e3:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f6e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f6e8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f6ea:  // je 0x41f70e
    if (f.zf) goto L_0041f70e;
L_0041f6ec:  // push 0xa3
    t0 = 0xa3u; esp -= 4; M32(esp) = t0;
L_0041f6f1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f6f3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f6f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f6f8:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f6fa:  // jg 0x41f70e
    if ((!f.zf && f.sf == f.of)) goto L_0041f70e;
L_0041f6fc:  // push 0xa3
    t0 = 0xa3u; esp -= 4; M32(esp) = t0;
L_0041f701:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f703:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f708u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f708:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f70e:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f710:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f714:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f719u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f719:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f71b:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f71f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f720:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0041f722:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f723:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f728u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f728:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f72b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f72d:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f732u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f732:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f734:  // je 0x41f758
    if (f.zf) goto L_0041f758;
L_0041f736:  // push 0xa4
    t0 = 0xa4u; esp -= 4; M32(esp) = t0;
L_0041f73b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f73d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f742u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f742:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f744:  // jg 0x41f758
    if ((!f.zf && f.sf == f.of)) goto L_0041f758;
L_0041f746:  // push 0xa4
    t0 = 0xa4u; esp -= 4; M32(esp) = t0;
L_0041f74b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f74d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f752:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f758:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f75a:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f75e:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f763u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f763:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f765:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f769:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f76a:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0041f76c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f76d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f772u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f772:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f775:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f777:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f77cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f77c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f77e:  // je 0x41f7a2
    if (f.zf) goto L_0041f7a2;
L_0041f780:  // push 0xa5
    t0 = 0xa5u; esp -= 4; M32(esp) = t0;
L_0041f785:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f787:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f78cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f78c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f78e:  // jg 0x41f7a2
    if ((!f.zf && f.sf == f.of)) goto L_0041f7a2;
L_0041f790:  // push 0xa5
    t0 = 0xa5u; esp -= 4; M32(esp) = t0;
L_0041f795:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f797:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f79cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f79c:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f7a2:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f7a4:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f7a8:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f7adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f7ad:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f7af:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f7b3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f7b4:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0041f7b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f7ba:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f7bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f7bf:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f7c2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f7c4:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f7c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f7c9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f7cb:  // je 0x41f7ef
    if (f.zf) goto L_0041f7ef;
L_0041f7cd:  // push 0xa6
    t0 = 0xa6u; esp -= 4; M32(esp) = t0;
L_0041f7d2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f7d4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f7d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f7d9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f7db:  // jg 0x41f7ef
    if ((!f.zf && f.sf == f.of)) goto L_0041f7ef;
L_0041f7dd:  // push 0xa6
    t0 = 0xa6u; esp -= 4; M32(esp) = t0;
L_0041f7e2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f7e4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f7e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f7e9:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f7ef:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f7f1:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f7f5:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f7fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f7fa:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f7fc:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f800:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f801:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_0041f806:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f807:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f80cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f80c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f80f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f811:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f816u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f816:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f818:  // je 0x41f83c
    if (f.zf) goto L_0041f83c;
L_0041f81a:  // push 0xa7
    t0 = 0xa7u; esp -= 4; M32(esp) = t0;
L_0041f81f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f821:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f826u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f826:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f828:  // jg 0x41f83c
    if ((!f.zf && f.sf == f.of)) goto L_0041f83c;
L_0041f82a:  // push 0xa7
    t0 = 0xa7u; esp -= 4; M32(esp) = t0;
L_0041f82f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f831:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f836u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f836:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f83c:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f83e:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f842:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f847u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f847:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f849:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f84d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f84e:  // push 0xd4
    t0 = 0xd4u; esp -= 4; M32(esp) = t0;
L_0041f853:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f854:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f859u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f859:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f85c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f85e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f863u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f863:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f865:  // je 0x41f889
    if (f.zf) goto L_0041f889;
L_0041f867:  // push 0xa8
    t0 = 0xa8u; esp -= 4; M32(esp) = t0;
L_0041f86c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f86e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f873u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f873:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f875:  // jg 0x41f889
    if ((!f.zf && f.sf == f.of)) goto L_0041f889;
L_0041f877:  // push 0xa8
    t0 = 0xa8u; esp -= 4; M32(esp) = t0;
L_0041f87c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f87e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f883u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f883:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f889:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f88b:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f88f:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f894:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f896:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f89a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f89b:  // push 0xdd
    t0 = 0xddu; esp -= 4; M32(esp) = t0;
L_0041f8a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f8a1:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f8a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f8a6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f8a9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f8ab:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f8b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f8b0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f8b2:  // je 0x41f8d6
    if (f.zf) goto L_0041f8d6;
L_0041f8b4:  // push 0xa9
    t0 = 0xa9u; esp -= 4; M32(esp) = t0;
L_0041f8b9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f8bb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f8c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f8c0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f8c2:  // jg 0x41f8d6
    if ((!f.zf && f.sf == f.of)) goto L_0041f8d6;
L_0041f8c4:  // push 0xa9
    t0 = 0xa9u; esp -= 4; M32(esp) = t0;
L_0041f8c9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f8cb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f8d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f8d0:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f8d6:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f8d8:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f8dc:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f8e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f8e1:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f8e3:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f8e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f8e8:  // push 0xde
    t0 = 0xdeu; esp -= 4; M32(esp) = t0;
L_0041f8ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f8ee:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f8f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f8f3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f8f6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f8f8:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f8fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f8fd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f8ff:  // je 0x41f923
    if (f.zf) goto L_0041f923;
L_0041f901:  // push 0xaa
    t0 = 0xaau; esp -= 4; M32(esp) = t0;
L_0041f906:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f908:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f90du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f90d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f90f:  // jg 0x41f923
    if ((!f.zf && f.sf == f.of)) goto L_0041f923;
L_0041f911:  // push 0xaa
    t0 = 0xaau; esp -= 4; M32(esp) = t0;
L_0041f916:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f918:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f91du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f91d:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f923:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f925:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f929:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f92eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f92e:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f930:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f934:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f935:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_0041f93a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f93b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f940u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f940:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f943:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f945:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f94au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f94a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f94c:  // je 0x41f970
    if (f.zf) goto L_0041f970;
L_0041f94e:  // push 0xab
    t0 = 0xabu; esp -= 4; M32(esp) = t0;
L_0041f953:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f955:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f95au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f95a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f95c:  // jg 0x41f970
    if ((!f.zf && f.sf == f.of)) goto L_0041f970;
L_0041f95e:  // push 0xab
    t0 = 0xabu; esp -= 4; M32(esp) = t0;
L_0041f963:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f965:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f96au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f96a:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f970:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f972:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f976:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f97bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f97b:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f97d:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f981:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f982:  // push 0xe8
    t0 = 0xe8u; esp -= 4; M32(esp) = t0;
L_0041f987:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041f988:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f98du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f98d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f990:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f992:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f997u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f997:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f999:  // je 0x41f9bd
    if (f.zf) goto L_0041f9bd;
L_0041f99b:  // push 0xac
    t0 = 0xacu; esp -= 4; M32(esp) = t0;
L_0041f9a0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f9a2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f9a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f9a7:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f9a9:  // jg 0x41f9bd
    if ((!f.zf && f.sf == f.of)) goto L_0041f9bd;
L_0041f9ab:  // push 0xac
    t0 = 0xacu; esp -= 4; M32(esp) = t0;
L_0041f9b0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f9b2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f9b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f9b7:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041f9bd:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041f9bf:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041f9c3:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f9c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f9c8:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041f9ca:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041f9ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041f9cf:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_0041f9d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041f9d5:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f9dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f9da:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041f9dd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041f9df:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f9e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f9e4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041f9e6:  // je 0x41fa0a
    if (f.zf) goto L_0041fa0a;
L_0041f9e8:  // push 0xad
    t0 = 0xadu; esp -= 4; M32(esp) = t0;
L_0041f9ed:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f9ef:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041f9f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041f9f4:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041f9f6:  // jg 0x41fa0a
    if ((!f.zf && f.sf == f.of)) goto L_0041fa0a;
L_0041f9f8:  // push 0xad
    t0 = 0xadu; esp -= 4; M32(esp) = t0;
L_0041f9fd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041f9ff:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa04:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fa0a:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fa0c:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fa10:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa15:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fa17:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fa1b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fa1c:  // push 0x137
    t0 = 0x137u; esp -= 4; M32(esp) = t0;
L_0041fa21:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fa22:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa27:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fa2a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fa2c:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa31:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fa33:  // je 0x41fa57
    if (f.zf) goto L_0041fa57;
L_0041fa35:  // push 0xae
    t0 = 0xaeu; esp -= 4; M32(esp) = t0;
L_0041fa3a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fa3c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa41:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fa43:  // jg 0x41fa57
    if ((!f.zf && f.sf == f.of)) goto L_0041fa57;
L_0041fa45:  // push 0xae
    t0 = 0xaeu; esp -= 4; M32(esp) = t0;
L_0041fa4a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fa4c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa51:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fa57:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fa59:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fa5d:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa62:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fa64:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fa68:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fa69:  // push 0x138
    t0 = 0x138u; esp -= 4; M32(esp) = t0;
L_0041fa6e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fa6f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa74:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fa77:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fa79:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa7e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fa80:  // je 0x41faa4
    if (f.zf) goto L_0041faa4;
L_0041fa82:  // push 0xaf
    t0 = 0xafu; esp -= 4; M32(esp) = t0;
L_0041fa87:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fa89:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa8e:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fa90:  // jg 0x41faa4
    if ((!f.zf && f.sf == f.of)) goto L_0041faa4;
L_0041fa92:  // push 0xaf
    t0 = 0xafu; esp -= 4; M32(esp) = t0;
L_0041fa97:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fa99:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fa9eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fa9e:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041faa4:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041faa6:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041faaa:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041faafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041faaf:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fab1:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fab5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fab6:  // push 0x141
    t0 = 0x141u; esp -= 4; M32(esp) = t0;
L_0041fabb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fabc:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fac1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fac1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fac4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fac6:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041facbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041facb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041facd:  // je 0x41faf1
    if (f.zf) goto L_0041faf1;
L_0041facf:  // push 0xb0
    t0 = 0xb0u; esp -= 4; M32(esp) = t0;
L_0041fad4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fad6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fadbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fadb:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fadd:  // jg 0x41faf1
    if ((!f.zf && f.sf == f.of)) goto L_0041faf1;
L_0041fadf:  // push 0xb0
    t0 = 0xb0u; esp -= 4; M32(esp) = t0;
L_0041fae4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fae6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041faebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041faeb:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041faf1:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041faf3:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041faf7:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fafcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fafc:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fafe:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fb02:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fb03:  // push 0x142
    t0 = 0x142u; esp -= 4; M32(esp) = t0;
L_0041fb08:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fb09:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb0e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fb11:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fb13:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb18:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fb1a:  // je 0x41fb3e
    if (f.zf) goto L_0041fb3e;
L_0041fb1c:  // push 0xb1
    t0 = 0xb1u; esp -= 4; M32(esp) = t0;
L_0041fb21:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fb23:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb28:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fb2a:  // jg 0x41fb3e
    if ((!f.zf && f.sf == f.of)) goto L_0041fb3e;
L_0041fb2c:  // push 0xb1
    t0 = 0xb1u; esp -= 4; M32(esp) = t0;
L_0041fb31:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fb33:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb38:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fb3e:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fb40:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fb44:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb49:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fb4b:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fb4f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fb50:  // push 0x14b
    t0 = 0x14bu; esp -= 4; M32(esp) = t0;
L_0041fb55:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fb56:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb5b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fb5e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fb60:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb65:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fb67:  // je 0x41fb8b
    if (f.zf) goto L_0041fb8b;
L_0041fb69:  // push 0xb2
    t0 = 0xb2u; esp -= 4; M32(esp) = t0;
L_0041fb6e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fb70:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb75:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fb77:  // jg 0x41fb8b
    if ((!f.zf && f.sf == f.of)) goto L_0041fb8b;
L_0041fb79:  // push 0xb2
    t0 = 0xb2u; esp -= 4; M32(esp) = t0;
L_0041fb7e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fb80:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb85:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fb8b:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fb8d:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fb91:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fb96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fb96:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fb98:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fb9c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fb9d:  // push 0x14c
    t0 = 0x14cu; esp -= 4; M32(esp) = t0;
L_0041fba2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fba3:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fba8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fba8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fbab:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fbad:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fbb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fbb2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fbb4:  // je 0x41fbd8
    if (f.zf) goto L_0041fbd8;
L_0041fbb6:  // push 0xb3
    t0 = 0xb3u; esp -= 4; M32(esp) = t0;
L_0041fbbb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fbbd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fbc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fbc2:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fbc4:  // jg 0x41fbd8
    if ((!f.zf && f.sf == f.of)) goto L_0041fbd8;
L_0041fbc6:  // push 0xb3
    t0 = 0xb3u; esp -= 4; M32(esp) = t0;
L_0041fbcb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fbcd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fbd2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fbd2:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fbd8:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fbda:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fbde:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fbe3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fbe3:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fbe5:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fbe9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fbea:  // push 0x190
    t0 = 0x190u; esp -= 4; M32(esp) = t0;
L_0041fbef:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fbf0:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fbf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fbf5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fbf8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fbfa:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fbffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fbff:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fc01:  // je 0x41fc25
    if (f.zf) goto L_0041fc25;
L_0041fc03:  // push 0xb4
    t0 = 0xb4u; esp -= 4; M32(esp) = t0;
L_0041fc08:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fc0a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc0f:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fc11:  // jg 0x41fc25
    if ((!f.zf && f.sf == f.of)) goto L_0041fc25;
L_0041fc13:  // push 0xb4
    t0 = 0xb4u; esp -= 4; M32(esp) = t0;
L_0041fc18:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fc1a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc1f:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fc25:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fc27:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fc2b:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc30:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fc32:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fc36:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fc37:  // push 0x19b
    t0 = 0x19bu; esp -= 4; M32(esp) = t0;
L_0041fc3c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fc3d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc42:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fc45:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fc47:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc4c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fc4e:  // je 0x41fc72
    if (f.zf) goto L_0041fc72;
L_0041fc50:  // push 0xb5
    t0 = 0xb5u; esp -= 4; M32(esp) = t0;
L_0041fc55:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fc57:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc5c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fc5e:  // jg 0x41fc72
    if ((!f.zf && f.sf == f.of)) goto L_0041fc72;
L_0041fc60:  // push 0xb5
    t0 = 0xb5u; esp -= 4; M32(esp) = t0;
L_0041fc65:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fc67:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc6c:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fc72:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fc74:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fc78:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc7d:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fc7f:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fc83:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fc84:  // push 0x19c
    t0 = 0x19cu; esp -= 4; M32(esp) = t0;
L_0041fc89:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fc8a:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc8f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fc92:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fc94:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fc99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fc99:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fc9b:  // je 0x41fcbf
    if (f.zf) goto L_0041fcbf;
L_0041fc9d:  // push 0xb6
    t0 = 0xb6u; esp -= 4; M32(esp) = t0;
L_0041fca2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fca4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fca9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fca9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fcab:  // jg 0x41fcbf
    if ((!f.zf && f.sf == f.of)) goto L_0041fcbf;
L_0041fcad:  // push 0xb6
    t0 = 0xb6u; esp -= 4; M32(esp) = t0;
L_0041fcb2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fcb4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fcb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fcb9:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fcbf:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fcc1:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fcc5:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fccau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fcca:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fccc:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fcd0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fcd1:  // push 0x1a5
    t0 = 0x1a5u; esp -= 4; M32(esp) = t0;
L_0041fcd6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fcd7:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fcdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fcdc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fcdf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fce1:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fce6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fce6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fce8:  // je 0x41fd0c
    if (f.zf) goto L_0041fd0c;
L_0041fcea:  // push 0xb7
    t0 = 0xb7u; esp -= 4; M32(esp) = t0;
L_0041fcef:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fcf1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fcf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fcf6:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fcf8:  // jg 0x41fd0c
    if ((!f.zf && f.sf == f.of)) goto L_0041fd0c;
L_0041fcfa:  // push 0xb7
    t0 = 0xb7u; esp -= 4; M32(esp) = t0;
L_0041fcff:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fd01:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd06u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd06:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fd0c:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fd0e:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fd12:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd17:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fd19:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fd1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fd1e:  // push 0x1a6
    t0 = 0x1a6u; esp -= 4; M32(esp) = t0;
L_0041fd23:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fd24:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd29:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fd2c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fd2e:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd33:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fd35:  // je 0x41fd59
    if (f.zf) goto L_0041fd59;
L_0041fd37:  // push 0xb8
    t0 = 0xb8u; esp -= 4; M32(esp) = t0;
L_0041fd3c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fd3e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd43:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fd45:  // jg 0x41fd59
    if ((!f.zf && f.sf == f.of)) goto L_0041fd59;
L_0041fd47:  // push 0xb8
    t0 = 0xb8u; esp -= 4; M32(esp) = t0;
L_0041fd4c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fd4e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd53:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fd59:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fd5b:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fd5f:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd64:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fd66:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fd6a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fd6b:  // push 0x1af
    t0 = 0x1afu; esp -= 4; M32(esp) = t0;
L_0041fd70:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fd71:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd76:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fd79:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fd7b:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd80:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fd82:  // je 0x41fda6
    if (f.zf) goto L_0041fda6;
L_0041fd84:  // push 0xb9
    t0 = 0xb9u; esp -= 4; M32(esp) = t0;
L_0041fd89:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fd8b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fd90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fd90:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fd92:  // jg 0x41fda6
    if ((!f.zf && f.sf == f.of)) goto L_0041fda6;
L_0041fd94:  // push 0xb9
    t0 = 0xb9u; esp -= 4; M32(esp) = t0;
L_0041fd99:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fd9b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fda0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fda0:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fda6:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fda8:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fdac:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fdb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fdb1:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fdb3:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fdb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fdb8:  // push 0x1b0
    t0 = 0x1b0u; esp -= 4; M32(esp) = t0;
L_0041fdbd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fdbe:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fdc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fdc3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fdc6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fdc8:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fdcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fdcd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fdcf:  // je 0x41fdf3
    if (f.zf) goto L_0041fdf3;
L_0041fdd1:  // push 0xba
    t0 = 0xbau; esp -= 4; M32(esp) = t0;
L_0041fdd6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fdd8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fdddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fddd:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fddf:  // jg 0x41fdf3
    if ((!f.zf && f.sf == f.of)) goto L_0041fdf3;
L_0041fde1:  // push 0xba
    t0 = 0xbau; esp -= 4; M32(esp) = t0;
L_0041fde6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fde8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fdedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fded:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fdf3:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fdf5:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fdf9:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fdfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fdfe:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fe00:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fe04:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fe05:  // push 0x1f4
    t0 = 0x1f4u; esp -= 4; M32(esp) = t0;
L_0041fe0a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fe0b:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe10:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fe13:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fe15:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe1a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fe1c:  // je 0x41fe40
    if (f.zf) goto L_0041fe40;
L_0041fe1e:  // push 0xbb
    t0 = 0xbbu; esp -= 4; M32(esp) = t0;
L_0041fe23:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fe25:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe2a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fe2c:  // jg 0x41fe40
    if ((!f.zf && f.sf == f.of)) goto L_0041fe40;
L_0041fe2e:  // push 0xbb
    t0 = 0xbbu; esp -= 4; M32(esp) = t0;
L_0041fe33:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fe35:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe3a:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fe40:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fe42:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fe46:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe4b:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fe4d:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fe51:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fe52:  // push 0x1ff
    t0 = 0x1ffu; esp -= 4; M32(esp) = t0;
L_0041fe57:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041fe58:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe5d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fe60:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fe62:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe67:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041fe69:  // je 0x41fe8d
    if (f.zf) goto L_0041fe8d;
L_0041fe6b:  // push 0xbc
    t0 = 0xbcu; esp -= 4; M32(esp) = t0;
L_0041fe70:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fe72:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe77:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fe79:  // jg 0x41fe8d
    if ((!f.zf && f.sf == f.of)) goto L_0041fe8d;
L_0041fe7b:  // push 0xbc
    t0 = 0xbcu; esp -= 4; M32(esp) = t0;
L_0041fe80:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fe82:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe87:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041fe8d:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fe8f:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fe93:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fe98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fe98:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fe9a:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041fe9e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fe9f:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_0041fea4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041fea5:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041feaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041feaa:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fead:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041feaf:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041feb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041feb4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041feb6:  // je 0x41feda
    if (f.zf) goto L_0041feda;
L_0041feb8:  // push 0xbd
    t0 = 0xbdu; esp -= 4; M32(esp) = t0;
L_0041febd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041febf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fec4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fec4:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fec6:  // jg 0x41feda
    if ((!f.zf && f.sf == f.of)) goto L_0041feda;
L_0041fec8:  // push 0xbd
    t0 = 0xbdu; esp -= 4; M32(esp) = t0;
L_0041fecd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fecf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fed4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fed4:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041feda:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041fedc:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041fee0:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fee5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fee5:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041fee7:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041feeb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041feec:  // push 0x209
    t0 = 0x209u; esp -= 4; M32(esp) = t0;
L_0041fef1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041fef2:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fef7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fef7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041fefa:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041fefc:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff01:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ff03:  // je 0x41ff27
    if (f.zf) goto L_0041ff27;
L_0041ff05:  // push 0xbe
    t0 = 0xbeu; esp -= 4; M32(esp) = t0;
L_0041ff0a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ff0c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff11:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ff13:  // jg 0x41ff27
    if ((!f.zf && f.sf == f.of)) goto L_0041ff27;
L_0041ff15:  // push 0xbe
    t0 = 0xbeu; esp -= 4; M32(esp) = t0;
L_0041ff1a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ff1c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff21:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ff27:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041ff29:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ff2d:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff32:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ff34:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ff38:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ff39:  // push 0x20a
    t0 = 0x20au; esp -= 4; M32(esp) = t0;
L_0041ff3e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ff3f:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff44:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ff47:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ff49:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff4eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff4e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ff50:  // je 0x41ff74
    if (f.zf) goto L_0041ff74;
L_0041ff52:  // push 0xbf
    t0 = 0xbfu; esp -= 4; M32(esp) = t0;
L_0041ff57:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ff59:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff5e:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ff60:  // jg 0x41ff74
    if ((!f.zf && f.sf == f.of)) goto L_0041ff74;
L_0041ff62:  // push 0xbf
    t0 = 0xbfu; esp -= 4; M32(esp) = t0;
L_0041ff67:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ff69:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff6e:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ff74:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041ff76:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ff7a:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff7f:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ff81:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ff85:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ff86:  // push 0x20b
    t0 = 0x20bu; esp -= 4; M32(esp) = t0;
L_0041ff8b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ff8c:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff91:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ff94:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ff96:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ff9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ff9b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ff9d:  // je 0x41ffc1
    if (f.zf) goto L_0041ffc1;
L_0041ff9f:  // push 0xc0
    t0 = 0xc0u; esp -= 4; M32(esp) = t0;
L_0041ffa4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ffa6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ffabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ffab:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041ffad:  // jg 0x41ffc1
    if ((!f.zf && f.sf == f.of)) goto L_0041ffc1;
L_0041ffaf:  // push 0xc0
    t0 = 0xc0u; esp -= 4; M32(esp) = t0;
L_0041ffb4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041ffb6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ffbbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ffbb:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0041ffc1:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0041ffc3:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0041ffc7:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ffccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ffcc:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0041ffce:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0041ffd2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ffd3:  // push 0x20c
    t0 = 0x20cu; esp -= 4; M32(esp) = t0;
L_0041ffd8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ffd9:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ffdeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ffde:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0041ffe1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041ffe3:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041ffe8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041ffe8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041ffea:  // je 0x42000e
    if (f.zf) goto L_0042000e;
L_0041ffec:  // push 0xc1
    t0 = 0xc1u; esp -= 4; M32(esp) = t0;
L_0041fff1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041fff3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0041fff8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0041fff8:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0041fffa:  // jg 0x42000e
    if ((!f.zf && f.sf == f.of)) goto L_0042000e;
L_0041fffc:  // push 0xc1
    t0 = 0xc1u; esp -= 4; M32(esp) = t0;
L_00420001:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420003:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420008u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420008:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0042000e:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_00420010:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_00420014:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420019u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420019:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0042001b:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_0042001f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00420020:  // push 0x258
    t0 = 0x258u; esp -= 4; M32(esp) = t0;
L_00420025:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00420026:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042002bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042002b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042002e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00420030:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420035u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420035:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00420037:  // je 0x42005b
    if (f.zf) goto L_0042005b;
L_00420039:  // push 0xc2
    t0 = 0xc2u; esp -= 4; M32(esp) = t0;
L_0042003e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420040:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420045u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420045:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420047:  // jg 0x42005b
    if ((!f.zf && f.sf == f.of)) goto L_0042005b;
L_00420049:  // push 0xc2
    t0 = 0xc2u; esp -= 4; M32(esp) = t0;
L_0042004e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420050:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420055u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420055:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0042005b:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_0042005d:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_00420061:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420066u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420066:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00420068:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_0042006c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042006d:  // push 0x263
    t0 = 0x263u; esp -= 4; M32(esp) = t0;
L_00420072:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00420073:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420078u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420078:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042007b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042007d:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420082u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420082:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00420084:  // je 0x4200a8
    if (f.zf) goto L_004200a8;
L_00420086:  // push 0xc3
    t0 = 0xc3u; esp -= 4; M32(esp) = t0;
L_0042008b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042008d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420092u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420092:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420094:  // jg 0x4200a8
    if ((!f.zf && f.sf == f.of)) goto L_004200a8;
L_00420096:  // push 0xc3
    t0 = 0xc3u; esp -= 4; M32(esp) = t0;
L_0042009b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042009d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004200a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004200a2:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_004200a8:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_004200aa:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_004200ae:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004200b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004200b3:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004200b5:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_004200b9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004200ba:  // push 0x264
    t0 = 0x264u; esp -= 4; M32(esp) = t0;
L_004200bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004200c0:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004200c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004200c5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004200c8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004200ca:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004200cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004200cf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004200d1:  // je 0x4200f5
    if (f.zf) goto L_004200f5;
L_004200d3:  // push 0xc4
    t0 = 0xc4u; esp -= 4; M32(esp) = t0;
L_004200d8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004200da:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004200dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004200df:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004200e1:  // jg 0x4200f5
    if ((!f.zf && f.sf == f.of)) goto L_004200f5;
L_004200e3:  // push 0xc4
    t0 = 0xc4u; esp -= 4; M32(esp) = t0;
L_004200e8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004200ea:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004200efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004200ef:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_004200f5:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_004200f7:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_004200fb:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420100u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420100:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00420102:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_00420106:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00420107:  // push 0x26d
    t0 = 0x26du; esp -= 4; M32(esp) = t0;
L_0042010c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042010d:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420112u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420112:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00420115:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00420117:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042011cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042011c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042011e:  // je 0x420142
    if (f.zf) goto L_00420142;
L_00420120:  // push 0xc5
    t0 = 0xc5u; esp -= 4; M32(esp) = t0;
L_00420125:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420127:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042012cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042012c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042012e:  // jg 0x420142
    if ((!f.zf && f.sf == f.of)) goto L_00420142;
L_00420130:  // push 0xc5
    t0 = 0xc5u; esp -= 4; M32(esp) = t0;
L_00420135:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420137:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042013cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042013c:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_00420142:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_00420144:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_00420148:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042014du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042014d:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0042014f:  // lea edx, [esp + 0x12]
    edx = (uint32_t)((uint32_t)(esp + 0x12u));
L_00420153:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00420154:  // push 0x26e
    t0 = 0x26eu; esp -= 4; M32(esp) = t0;
L_00420159:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042015a:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042015fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042015f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00420162:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00420164:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420169u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420169:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042016b:  // je 0x42018f
    if (f.zf) goto L_0042018f;
L_0042016d:  // push 0xc6
    t0 = 0xc6u; esp -= 4; M32(esp) = t0;
L_00420172:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420174:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420179u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420179:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042017b:  // jg 0x42018f
    if ((!f.zf && f.sf == f.of)) goto L_0042018f;
L_0042017d:  // push 0xc6
    t0 = 0xc6u; esp -= 4; M32(esp) = t0;
L_00420182:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420184:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420189u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420189:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0042018f:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_00420191:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_00420195:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042019au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042019a:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0042019c:  // lea ecx, [esp + 0x12]
    ecx = (uint32_t)((uint32_t)(esp + 0x12u));
L_004201a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004201a1:  // push 0x2bc
    t0 = 0x2bcu; esp -= 4; M32(esp) = t0;
L_004201a6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004201a7:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004201acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004201ac:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004201af:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004201b1:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004201b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004201b6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004201b8:  // je 0x4201dc
    if (f.zf) goto L_004201dc;
L_004201ba:  // push 0xc7
    t0 = 0xc7u; esp -= 4; M32(esp) = t0;
L_004201bf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004201c1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004201c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004201c6:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004201c8:  // jg 0x4201dc
    if ((!f.zf && f.sf == f.of)) goto L_004201dc;
L_004201ca:  // push 0xc7
    t0 = 0xc7u; esp -= 4; M32(esp) = t0;
L_004201cf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004201d1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004201d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004201d6:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_004201dc:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_004201de:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_004201e2:  // call 0x420ab0
    t0 = 0x00420ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004201e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004201e7:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004201e9:  // lea eax, [esp + 0x12]
    eax = (uint32_t)((uint32_t)(esp + 0x12u));
L_004201ed:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004201ee:  // push 0x2c6
    t0 = 0x2c6u; esp -= 4; M32(esp) = t0;
L_004201f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004201f4:  // call 0x41c330
    t0 = 0x0041c330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004201f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004201f9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004201fc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004201fe:  // call 0x420ac0
    t0 = 0x00420ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420203u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420203:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00420205:  // je 0x420229
    if (f.zf) goto L_00420229;
L_00420207:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0042020c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042020e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420213u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420213:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420215:  // jg 0x420229
    if ((!f.zf && f.sf == f.of)) goto L_00420229;
L_00420217:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_0042021c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042021e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420223u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420223:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_00420229:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0042022b:  // call 0x41c450
    t0 = 0x0041c450u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420230u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420230:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_00420233:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00420235:  // sub ecx, edi
    t0 = lsub<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_00420237:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00420239:  // mov eax, dword ptr [0x662b20]
    eax = (uint32_t)(M32((uint32_t)(0x662b20u)));
L_0042023e:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00420240:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420242:  // mov dword ptr [0x662b20], eax
    M32((uint32_t)(0x662b20u)) = (uint32_t)(eax);
L_00420247:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042024cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042024c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042024e:  // jle 0x420258
    if ((f.zf || f.sf != f.of)) goto L_00420258;
L_00420250:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00420254:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00420256:  // jne 0x420263
    if (!f.zf) goto L_00420263;
L_00420258:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0042025b:  // sub edx, edi
    t0 = lsub<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_0042025d:  // jne 0x420269
    if (!f.zf) goto L_00420269;
L_0042025f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00420261:  // je 0x420269
    if (f.zf) goto L_00420269;
L_00420263:  // mov dword ptr [0x662b24], ebx
    M32((uint32_t)(0x662b24u)) = (uint32_t)(ebx);
L_00420269:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042026a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0042026c:  // mov dword ptr [ebp], 0
    M32((uint32_t)(ebp)) = (uint32_t)(0x0u);
L_00420273:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420278u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420278:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042027a:  // je 0x420356
    if (f.zf) goto L_00420356;
L_00420280:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00420282:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420284:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420289u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420289:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042028b:  // jg 0x420298
    if ((!f.zf && f.sf == f.of)) goto L_00420298;
L_0042028d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0042028f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420291:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420296u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420296:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420298:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00420299:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042029b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202a0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004202a2:  // jg 0x4202ae
    if ((!f.zf && f.sf == f.of)) goto L_004202ae;
L_004202a4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004202a5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202a7:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202ac:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004202ae:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004202b0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202b2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202b7:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004202b9:  // jg 0x4202c6
    if ((!f.zf && f.sf == f.of)) goto L_004202c6;
L_004202bb:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004202bd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202bf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202c4:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004202c6:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_004202c8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202ca:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202cf:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004202d1:  // jg 0x4202de
    if ((!f.zf && f.sf == f.of)) goto L_004202de;
L_004202d3:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_004202d5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202d7:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202dc:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004202de:  // push 0x21
    t0 = 0x21u; esp -= 4; M32(esp) = t0;
L_004202e0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202e2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202e7:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004202e9:  // jg 0x4202f6
    if ((!f.zf && f.sf == f.of)) goto L_004202f6;
L_004202eb:  // push 0x21
    t0 = 0x21u; esp -= 4; M32(esp) = t0;
L_004202ed:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202ef:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202f4:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004202f6:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004202f8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004202fa:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004202ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004202ff:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420301:  // jg 0x42030e
    if ((!f.zf && f.sf == f.of)) goto L_0042030e;
L_00420303:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_00420305:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420307:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042030cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042030c:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042030e:  // push 0x29
    t0 = 0x29u; esp -= 4; M32(esp) = t0;
L_00420310:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420312:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420317u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420317:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420319:  // jg 0x420326
    if ((!f.zf && f.sf == f.of)) goto L_00420326;
L_0042031b:  // push 0x29
    t0 = 0x29u; esp -= 4; M32(esp) = t0;
L_0042031d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042031f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420324u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420324:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420326:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_00420328:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042032a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042032fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042032f:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420331:  // jg 0x42033e
    if ((!f.zf && f.sf == f.of)) goto L_0042033e;
L_00420333:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_00420335:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420337:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042033cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042033c:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042033e:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_00420340:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420342:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420347u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420347:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420349:  // jg 0x420356
    if ((!f.zf && f.sf == f.of)) goto L_00420356;
L_0042034b:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_0042034d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042034f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420354u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420354:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420356:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00420358:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0042035a:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042035fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042035f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00420361:  // je 0x4204e7
    if (f.zf) goto L_004204e7;
L_00420367:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00420369:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042036b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420370u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420370:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420372:  // jg 0x42037f
    if ((!f.zf && f.sf == f.of)) goto L_0042037f;
L_00420374:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00420376:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420378:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042037du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042037d:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042037f:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00420381:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420383:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420388u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420388:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042038a:  // jg 0x420397
    if ((!f.zf && f.sf == f.of)) goto L_00420397;
L_0042038c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0042038e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420390:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420395u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420395:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420397:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_00420399:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042039b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203a0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004203a2:  // jg 0x4203af
    if ((!f.zf && f.sf == f.of)) goto L_004203af;
L_004203a4:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_004203a6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203a8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203ad:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004203af:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_004203b1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203b3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203b8:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004203ba:  // jg 0x4203c7
    if ((!f.zf && f.sf == f.of)) goto L_004203c7;
L_004203bc:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_004203be:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203c0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203c5:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004203c7:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004203c9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203cb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203d0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004203d2:  // jg 0x4203df
    if ((!f.zf && f.sf == f.of)) goto L_004203df;
L_004203d4:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004203d6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203d8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203dd:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004203df:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004203e1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203e3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203e8:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004203ea:  // jg 0x4203f7
    if ((!f.zf && f.sf == f.of)) goto L_004203f7;
L_004203ec:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004203ee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203f0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004203f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004203f5:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004203f7:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004203f9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004203fb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420400u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420400:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420402:  // jg 0x42040f
    if ((!f.zf && f.sf == f.of)) goto L_0042040f;
L_00420404:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00420406:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420408:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042040du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042040d:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042040f:  // push 0x1a
    t0 = 0x1au; esp -= 4; M32(esp) = t0;
L_00420411:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420413:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420418u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420418:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042041a:  // jg 0x420427
    if ((!f.zf && f.sf == f.of)) goto L_00420427;
L_0042041c:  // push 0x1a
    t0 = 0x1au; esp -= 4; M32(esp) = t0;
L_0042041e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420420:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420425u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420425:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420427:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00420429:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042042b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420430u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420430:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420432:  // jg 0x42043f
    if ((!f.zf && f.sf == f.of)) goto L_0042043f;
L_00420434:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00420436:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420438:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042043du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042043d:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042043f:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_00420441:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420443:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420448u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420448:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042044a:  // jg 0x420457
    if ((!f.zf && f.sf == f.of)) goto L_00420457;
L_0042044c:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_0042044e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420450:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420455u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420455:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420457:  // push 0x1e
    t0 = 0x1eu; esp -= 4; M32(esp) = t0;
L_00420459:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042045b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420460u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420460:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420462:  // jg 0x42046f
    if ((!f.zf && f.sf == f.of)) goto L_0042046f;
L_00420464:  // push 0x1e
    t0 = 0x1eu; esp -= 4; M32(esp) = t0;
L_00420466:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420468:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042046du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042046d:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042046f:  // push 0x1f
    t0 = 0x1fu; esp -= 4; M32(esp) = t0;
L_00420471:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420473:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420478u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420478:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042047a:  // jg 0x420487
    if ((!f.zf && f.sf == f.of)) goto L_00420487;
L_0042047c:  // push 0x1f
    t0 = 0x1fu; esp -= 4; M32(esp) = t0;
L_0042047e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420480:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420485u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420485:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420487:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_00420489:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042048b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420490u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420490:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420492:  // jg 0x42049f
    if ((!f.zf && f.sf == f.of)) goto L_0042049f;
L_00420494:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_00420496:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420498:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042049du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042049d:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042049f:  // push 0x23
    t0 = 0x23u; esp -= 4; M32(esp) = t0;
L_004204a1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004204a3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004204a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004204a8:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004204aa:  // jg 0x4204b7
    if ((!f.zf && f.sf == f.of)) goto L_004204b7;
L_004204ac:  // push 0x23
    t0 = 0x23u; esp -= 4; M32(esp) = t0;
L_004204ae:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004204b0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004204b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004204b5:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004204b7:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_004204b9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004204bb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004204c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004204c0:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004204c2:  // jg 0x4204cf
    if ((!f.zf && f.sf == f.of)) goto L_004204cf;
L_004204c4:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_004204c6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004204c8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004204cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004204cd:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004204cf:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004204d1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004204d3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004204d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004204d8:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004204da:  // jg 0x4204e7
    if ((!f.zf && f.sf == f.of)) goto L_004204e7;
L_004204dc:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004204de:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004204e0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004204e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004204e5:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004204e7:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004204e9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004204eb:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004204f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004204f0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004204f2:  // je 0x4206a8
    if (f.zf) goto L_004206a8;
L_004204f8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004204fa:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004204fc:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420501u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420501:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420503:  // jg 0x420510
    if ((!f.zf && f.sf == f.of)) goto L_00420510;
L_00420505:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00420507:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420509:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042050eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042050e:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420510:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00420512:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420514:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420519u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420519:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042051b:  // jg 0x420528
    if ((!f.zf && f.sf == f.of)) goto L_00420528;
L_0042051d:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0042051f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420521:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420526u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420526:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420528:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_0042052a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042052c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420531u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420531:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420533:  // jg 0x420540
    if ((!f.zf && f.sf == f.of)) goto L_00420540;
L_00420535:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_00420537:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420539:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042053eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042053e:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420540:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_00420542:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420544:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420549u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420549:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042054b:  // jg 0x420558
    if ((!f.zf && f.sf == f.of)) goto L_00420558;
L_0042054d:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_0042054f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420551:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420556u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420556:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420558:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_0042055a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042055c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420561u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420561:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420563:  // jg 0x420570
    if ((!f.zf && f.sf == f.of)) goto L_00420570;
L_00420565:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_00420567:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420569:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042056eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042056e:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420570:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00420572:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420574:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420579u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420579:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042057b:  // jg 0x420588
    if ((!f.zf && f.sf == f.of)) goto L_00420588;
L_0042057d:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0042057f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420581:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420586u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420586:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420588:  // push 0x1d
    t0 = 0x1du; esp -= 4; M32(esp) = t0;
L_0042058a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042058c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420591u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420591:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420593:  // jg 0x4205a0
    if ((!f.zf && f.sf == f.of)) goto L_004205a0;
L_00420595:  // push 0x1d
    t0 = 0x1du; esp -= 4; M32(esp) = t0;
L_00420597:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420599:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042059eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042059e:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004205a0:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_004205a2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205a4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205a9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004205ab:  // jg 0x4205b8
    if ((!f.zf && f.sf == f.of)) goto L_004205b8;
L_004205ad:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_004205af:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205b1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205b6:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004205b8:  // push 0x27
    t0 = 0x27u; esp -= 4; M32(esp) = t0;
L_004205ba:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205bc:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205c1:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004205c3:  // jg 0x4205d0
    if ((!f.zf && f.sf == f.of)) goto L_004205d0;
L_004205c5:  // push 0x27
    t0 = 0x27u; esp -= 4; M32(esp) = t0;
L_004205c7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205c9:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205ce:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004205d0:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_004205d2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205d4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205d9:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004205db:  // jg 0x4205e8
    if ((!f.zf && f.sf == f.of)) goto L_004205e8;
L_004205dd:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_004205df:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205e1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205e6:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004205e8:  // push 0x2d
    t0 = 0x2du; esp -= 4; M32(esp) = t0;
L_004205ea:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205ec:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205f1:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004205f3:  // jg 0x420600
    if ((!f.zf && f.sf == f.of)) goto L_00420600;
L_004205f5:  // push 0x2d
    t0 = 0x2du; esp -= 4; M32(esp) = t0;
L_004205f7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004205f9:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004205feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004205fe:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420600:  // push 0x2f
    t0 = 0x2fu; esp -= 4; M32(esp) = t0;
L_00420602:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420604:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420609u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420609:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042060b:  // jg 0x420618
    if ((!f.zf && f.sf == f.of)) goto L_00420618;
L_0042060d:  // push 0x2f
    t0 = 0x2fu; esp -= 4; M32(esp) = t0;
L_0042060f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420611:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420616u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420616:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420618:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_0042061a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042061c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420621u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420621:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420623:  // jg 0x420630
    if ((!f.zf && f.sf == f.of)) goto L_00420630;
L_00420625:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_00420627:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420629:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042062eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042062e:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420630:  // push 0x36
    t0 = 0x36u; esp -= 4; M32(esp) = t0;
L_00420632:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420634:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420639u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420639:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042063b:  // jg 0x420648
    if ((!f.zf && f.sf == f.of)) goto L_00420648;
L_0042063d:  // push 0x36
    t0 = 0x36u; esp -= 4; M32(esp) = t0;
L_0042063f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420641:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420646u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420646:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420648:  // push 0x37
    t0 = 0x37u; esp -= 4; M32(esp) = t0;
L_0042064a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042064c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420651u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420651:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420653:  // jg 0x420660
    if ((!f.zf && f.sf == f.of)) goto L_00420660;
L_00420655:  // push 0x37
    t0 = 0x37u; esp -= 4; M32(esp) = t0;
L_00420657:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420659:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042065eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042065e:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420660:  // push 0x38
    t0 = 0x38u; esp -= 4; M32(esp) = t0;
L_00420662:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420664:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420669u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420669:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042066b:  // jg 0x420678
    if ((!f.zf && f.sf == f.of)) goto L_00420678;
L_0042066d:  // push 0x38
    t0 = 0x38u; esp -= 4; M32(esp) = t0;
L_0042066f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420671:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420676u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420676:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420678:  // push 0x39
    t0 = 0x39u; esp -= 4; M32(esp) = t0;
L_0042067a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042067c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420681u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420681:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420683:  // jg 0x420690
    if ((!f.zf && f.sf == f.of)) goto L_00420690;
L_00420685:  // push 0x39
    t0 = 0x39u; esp -= 4; M32(esp) = t0;
L_00420687:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420689:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042068eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042068e:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420690:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_00420692:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420694:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420699u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420699:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042069b:  // jg 0x4206a8
    if ((!f.zf && f.sf == f.of)) goto L_004206a8;
L_0042069d:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0042069f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004206a1:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206a6:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004206a8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004206aa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004206ac:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206b1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004206b3:  // je 0x420761
    if (f.zf) goto L_00420761;
L_004206b9:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004206bb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004206bd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206c2:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004206c4:  // jg 0x4206d1
    if ((!f.zf && f.sf == f.of)) goto L_004206d1;
L_004206c6:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004206c8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004206ca:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206cf:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004206d1:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004206d3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004206d5:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206da:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004206dc:  // jg 0x4206e9
    if ((!f.zf && f.sf == f.of)) goto L_004206e9;
L_004206de:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004206e0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004206e2:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206e7:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004206e9:  // push 0x19
    t0 = 0x19u; esp -= 4; M32(esp) = t0;
L_004206eb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004206ed:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206f2:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004206f4:  // jg 0x420701
    if ((!f.zf && f.sf == f.of)) goto L_00420701;
L_004206f6:  // push 0x19
    t0 = 0x19u; esp -= 4; M32(esp) = t0;
L_004206f8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004206fa:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004206ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004206ff:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420701:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_00420703:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420705:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042070au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042070a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042070c:  // jg 0x420719
    if ((!f.zf && f.sf == f.of)) goto L_00420719;
L_0042070e:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_00420710:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420712:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420717u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420717:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420719:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_0042071b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042071d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420722u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420722:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420724:  // jg 0x420731
    if ((!f.zf && f.sf == f.of)) goto L_00420731;
L_00420726:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_00420728:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042072a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042072fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042072f:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420731:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_00420733:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420735:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042073au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042073a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042073c:  // jg 0x420749
    if ((!f.zf && f.sf == f.of)) goto L_00420749;
L_0042073e:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_00420740:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420742:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420747u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420747:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420749:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_0042074b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042074d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420752:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420754:  // jg 0x420761
    if ((!f.zf && f.sf == f.of)) goto L_00420761;
L_00420756:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_00420758:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042075a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042075fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042075f:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420761:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00420763:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00420765:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042076au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042076a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042076c:  // je 0x42084a
    if (f.zf) goto L_0042084a;
L_00420772:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_00420774:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420776:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042077bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042077b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042077d:  // jg 0x42078a
    if ((!f.zf && f.sf == f.of)) goto L_0042078a;
L_0042077f:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_00420781:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420783:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420788u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420788:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042078a:  // push 0x2e
    t0 = 0x2eu; esp -= 4; M32(esp) = t0;
L_0042078c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042078e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420793u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420793:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420795:  // jg 0x4207a2
    if ((!f.zf && f.sf == f.of)) goto L_004207a2;
L_00420797:  // push 0x2e
    t0 = 0x2eu; esp -= 4; M32(esp) = t0;
L_00420799:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042079b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207a0:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004207a2:  // push 0x31
    t0 = 0x31u; esp -= 4; M32(esp) = t0;
L_004207a4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207a6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207ab:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004207ad:  // jg 0x4207ba
    if ((!f.zf && f.sf == f.of)) goto L_004207ba;
L_004207af:  // push 0x31
    t0 = 0x31u; esp -= 4; M32(esp) = t0;
L_004207b1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207b3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207b8:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004207ba:  // push 0x32
    t0 = 0x32u; esp -= 4; M32(esp) = t0;
L_004207bc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207be:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207c3:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004207c5:  // jg 0x4207d2
    if ((!f.zf && f.sf == f.of)) goto L_004207d2;
L_004207c7:  // push 0x32
    t0 = 0x32u; esp -= 4; M32(esp) = t0;
L_004207c9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207cb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207d0:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004207d2:  // push 0x33
    t0 = 0x33u; esp -= 4; M32(esp) = t0;
L_004207d4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207d6:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207db:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004207dd:  // jg 0x4207ea
    if ((!f.zf && f.sf == f.of)) goto L_004207ea;
L_004207df:  // push 0x33
    t0 = 0x33u; esp -= 4; M32(esp) = t0;
L_004207e1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207e3:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207e8:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004207ea:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_004207ec:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207ee:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004207f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004207f3:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004207f5:  // jg 0x420802
    if ((!f.zf && f.sf == f.of)) goto L_00420802;
L_004207f7:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_004207f9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004207fb:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420800u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420800:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420802:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_00420804:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420806:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042080bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042080b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042080d:  // jg 0x42081a
    if ((!f.zf && f.sf == f.of)) goto L_0042081a;
L_0042080f:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_00420811:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420813:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420818u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420818:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042081a:  // push 0x3d
    t0 = 0x3du; esp -= 4; M32(esp) = t0;
L_0042081c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042081e:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420823u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420823:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420825:  // jg 0x420832
    if ((!f.zf && f.sf == f.of)) goto L_00420832;
L_00420827:  // push 0x3d
    t0 = 0x3du; esp -= 4; M32(esp) = t0;
L_00420829:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042082b:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420830u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420830:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420832:  // push 0x3e
    t0 = 0x3eu; esp -= 4; M32(esp) = t0;
L_00420834:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420836:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042083bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042083b:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042083d:  // jg 0x42084a
    if ((!f.zf && f.sf == f.of)) goto L_0042084a;
L_0042083f:  // push 0x3e
    t0 = 0x3eu; esp -= 4; M32(esp) = t0;
L_00420841:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420843:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420848u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420848:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042084a:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0042084c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0042084e:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420853u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420853:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00420855:  // je 0x4208eb
    if (f.zf) goto L_004208eb;
L_0042085b:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0042085d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042085f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420864u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420864:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420866:  // jg 0x420873
    if ((!f.zf && f.sf == f.of)) goto L_00420873;
L_00420868:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0042086a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042086c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420871u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420871:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420873:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00420875:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420877:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042087cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042087c:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042087e:  // jg 0x42088b
    if ((!f.zf && f.sf == f.of)) goto L_0042088b;
L_00420880:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00420882:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420884:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420889u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420889:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042088b:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0042088d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042088f:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420894:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420896:  // jg 0x4208a3
    if ((!f.zf && f.sf == f.of)) goto L_004208a3;
L_00420898:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0042089a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042089c:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208a1:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004208a3:  // push 0x25
    t0 = 0x25u; esp -= 4; M32(esp) = t0;
L_004208a5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004208a7:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208ac:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004208ae:  // jg 0x4208bb
    if ((!f.zf && f.sf == f.of)) goto L_004208bb;
L_004208b0:  // push 0x25
    t0 = 0x25u; esp -= 4; M32(esp) = t0;
L_004208b2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004208b4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208b9:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004208bb:  // push 0x3f
    t0 = 0x3fu; esp -= 4; M32(esp) = t0;
L_004208bd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004208bf:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208c4:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004208c6:  // jg 0x4208d3
    if ((!f.zf && f.sf == f.of)) goto L_004208d3;
L_004208c8:  // push 0x3f
    t0 = 0x3fu; esp -= 4; M32(esp) = t0;
L_004208ca:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004208cc:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208d1:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004208d3:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_004208d5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004208d7:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208dc:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004208de:  // jg 0x4208eb
    if ((!f.zf && f.sf == f.of)) goto L_004208eb;
L_004208e0:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_004208e2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004208e4:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208e9:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004208eb:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_004208ed:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004208ef:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004208f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004208f4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004208f6:  // je 0x420a4c
    if (f.zf) goto L_00420a4c;
L_004208fc:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_004208fe:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420900:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420905u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420905:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420907:  // jg 0x420914
    if ((!f.zf && f.sf == f.of)) goto L_00420914;
L_00420909:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0042090b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042090d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420912u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420912:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420914:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00420916:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420918:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042091du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042091d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042091f:  // jg 0x42092c
    if ((!f.zf && f.sf == f.of)) goto L_0042092c;
L_00420921:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00420923:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420925:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042092au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042092a:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042092c:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_0042092e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420930:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420935u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420935:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420937:  // jg 0x420944
    if ((!f.zf && f.sf == f.of)) goto L_00420944;
L_00420939:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_0042093b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042093d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420942u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420942:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420944:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_00420946:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420948:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042094du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042094d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042094f:  // jg 0x42095c
    if ((!f.zf && f.sf == f.of)) goto L_0042095c;
L_00420951:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_00420953:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420955:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042095au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042095a:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042095c:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0042095e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420960:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420965u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420965:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420967:  // jg 0x420974
    if ((!f.zf && f.sf == f.of)) goto L_00420974;
L_00420969:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0042096b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042096d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420972u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420972:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420974:  // push 0x44
    t0 = 0x44u; esp -= 4; M32(esp) = t0;
L_00420976:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420978:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042097du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042097d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_0042097f:  // jg 0x42098c
    if ((!f.zf && f.sf == f.of)) goto L_0042098c;
L_00420981:  // push 0x44
    t0 = 0x44u; esp -= 4; M32(esp) = t0;
L_00420983:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420985:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042098au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042098a:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0042098c:  // push 0x45
    t0 = 0x45u; esp -= 4; M32(esp) = t0;
L_0042098e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420990:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420995u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420995:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420997:  // jg 0x4209a4
    if ((!f.zf && f.sf == f.of)) goto L_004209a4;
L_00420999:  // push 0x45
    t0 = 0x45u; esp -= 4; M32(esp) = t0;
L_0042099b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042099d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209a2:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004209a4:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004209a6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209a8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209ad:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004209af:  // jg 0x4209bc
    if ((!f.zf && f.sf == f.of)) goto L_004209bc;
L_004209b1:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004209b3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209b5:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209ba:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004209bc:  // push 0x47
    t0 = 0x47u; esp -= 4; M32(esp) = t0;
L_004209be:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209c0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209c5:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004209c7:  // jg 0x4209d4
    if ((!f.zf && f.sf == f.of)) goto L_004209d4;
L_004209c9:  // push 0x47
    t0 = 0x47u; esp -= 4; M32(esp) = t0;
L_004209cb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209cd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209d2:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004209d4:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_004209d6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209d8:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209dd:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004209df:  // jg 0x4209ec
    if ((!f.zf && f.sf == f.of)) goto L_004209ec;
L_004209e1:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_004209e3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209e5:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209ea:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004209ec:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_004209ee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209f0:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004209f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004209f5:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_004209f7:  // jg 0x420a04
    if ((!f.zf && f.sf == f.of)) goto L_00420a04;
L_004209f9:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_004209fb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004209fd:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a02:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420a04:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_00420a06:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a08:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a0d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420a0f:  // jg 0x420a1c
    if ((!f.zf && f.sf == f.of)) goto L_00420a1c;
L_00420a11:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_00420a13:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a15:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a1a:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420a1c:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_00420a1e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a20:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a25:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420a27:  // jg 0x420a34
    if ((!f.zf && f.sf == f.of)) goto L_00420a34;
L_00420a29:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_00420a2b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a2d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a32:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420a34:  // push 0x4e
    t0 = 0x4eu; esp -= 4; M32(esp) = t0;
L_00420a36:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a38:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a3d:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420a3f:  // jg 0x420a4c
    if ((!f.zf && f.sf == f.of)) goto L_00420a4c;
L_00420a41:  // push 0x4e
    t0 = 0x4eu; esp -= 4; M32(esp) = t0;
L_00420a43:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a45:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a4a:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420a4c:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00420a4e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00420a50:  // call 0x421570
    t0 = 0x00421570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a55:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00420a57:  // je 0x420aa1
    if (f.zf) goto L_00420aa1;
L_00420a59:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_00420a5b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a5d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a62:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420a64:  // jg 0x420a71
    if ((!f.zf && f.sf == f.of)) goto L_00420a71;
L_00420a66:  // push 0x41
    t0 = 0x41u; esp -= 4; M32(esp) = t0;
L_00420a68:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a6a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a6f:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420a71:  // push 0x48
    t0 = 0x48u; esp -= 4; M32(esp) = t0;
L_00420a73:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a75:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a7a:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420a7c:  // jg 0x420a89
    if ((!f.zf && f.sf == f.of)) goto L_00420a89;
L_00420a7e:  // push 0x48
    t0 = 0x48u; esp -= 4; M32(esp) = t0;
L_00420a80:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a82:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a87:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420a89:  // push 0x49
    t0 = 0x49u; esp -= 4; M32(esp) = t0;
L_00420a8b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a8d:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a92:  // cmp dword ptr [eax], ebx
    t0 = lsub<32>(M32((uint32_t)(eax)), ebx, f);
L_00420a94:  // jg 0x420aa1
    if ((!f.zf && f.sf == f.of)) goto L_00420aa1;
L_00420a96:  // push 0x49
    t0 = 0x49u; esp -= 4; M32(esp) = t0;
L_00420a98:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00420a9a:  // call 0x421980
    t0 = 0x00421980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00420a9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00420a9f:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00420aa1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00420aa2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00420aa3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00420aa4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00420aa5:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00420aa8:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0041c470, 0041c470)
