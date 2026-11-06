// lifted from 004dc370 (vslot1, 1502 bytes, 462 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004dc370(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004dc370;
L_004dc370:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004dc376:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004dc378:  // push 0x5d4a69
    t0 = 0x5d4a69u; esp -= 4; M32(esp) = t0;
L_004dc37d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc37e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004dc385:  // sub esp, 0x208
    t0 = lsub<32>(esp, 0x208u, f);
    esp = (uint32_t)(t0);
L_004dc38b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc38c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004dc38d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004dc38e:  // mov edi, dword ptr [esp + 0x224]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x224u)));
L_004dc395:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004dc397:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004dc398:  // call 0x4d6a30
    t0 = 0x004d6a30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc39du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc39d:  // mov al, byte ptr [0x83cd59]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x83cd59u))) & 0xffu);
L_004dc3a2:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004dc3a4:  // jne 0x4dc4d7
    if (!f.zf) goto L_004dc4d7;
L_004dc3aa:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004dc3ac:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc3b1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc3b2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc3b3:  // push 0x83cd58
    t0 = 0x83cd58u; esp -= 4; M32(esp) = t0;
L_004dc3b8:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004dc3ba:  // push 0x63217c
    t0 = 0x63217cu; esp -= 4; M32(esp) = t0;
L_004dc3bf:  // push 0x632164
    t0 = 0x632164u; esp -= 4; M32(esp) = t0;
L_004dc3c4:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc3c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc3c9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc3ca:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc3cb:  // push 0x631e94
    t0 = 0x631e94u; esp -= 4; M32(esp) = t0;
L_004dc3d0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004dc3d2:  // push 0x632134
    t0 = 0x632134u; esp -= 4; M32(esp) = t0;
L_004dc3d7:  // push 0x63211c
    t0 = 0x63211cu; esp -= 4; M32(esp) = t0;
L_004dc3dc:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc3e1:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc3e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc3e6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc3e7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc3e8:  // push 0x631e98
    t0 = 0x631e98u; esp -= 4; M32(esp) = t0;
L_004dc3ed:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004dc3ef:  // push 0x6320f0
    t0 = 0x6320f0u; esp -= 4; M32(esp) = t0;
L_004dc3f4:  // push 0x6320dc
    t0 = 0x6320dcu; esp -= 4; M32(esp) = t0;
L_004dc3f9:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc3fe:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc403u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc403:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc404:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc405:  // push 0x631e88
    t0 = 0x631e88u; esp -= 4; M32(esp) = t0;
L_004dc40a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004dc40c:  // push 0x6320b0
    t0 = 0x6320b0u; esp -= 4; M32(esp) = t0;
L_004dc411:  // push 0x6320a0
    t0 = 0x6320a0u; esp -= 4; M32(esp) = t0;
L_004dc416:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc41b:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc420u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc420:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc421:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc422:  // push 0x631e8c
    t0 = 0x631e8cu; esp -= 4; M32(esp) = t0;
L_004dc427:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004dc429:  // push 0x632078
    t0 = 0x632078u; esp -= 4; M32(esp) = t0;
L_004dc42e:  // push 0x632060
    t0 = 0x632060u; esp -= 4; M32(esp) = t0;
L_004dc433:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc438:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc43du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc43d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc43e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc43f:  // push 0x631e90
    t0 = 0x631e90u; esp -= 4; M32(esp) = t0;
L_004dc444:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004dc446:  // push 0x632038
    t0 = 0x632038u; esp -= 4; M32(esp) = t0;
L_004dc44b:  // push 0x632020
    t0 = 0x632020u; esp -= 4; M32(esp) = t0;
L_004dc450:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc455:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc45au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc45a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc45b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc45c:  // push 0x83cd5a
    t0 = 0x83cd5au; esp -= 4; M32(esp) = t0;
L_004dc461:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004dc463:  // push 0x632000
    t0 = 0x632000u; esp -= 4; M32(esp) = t0;
L_004dc468:  // push 0x631fe8
    t0 = 0x631fe8u; esp -= 4; M32(esp) = t0;
L_004dc46d:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc472:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc477u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc477:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc478:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc479:  // push 0x83cd5b
    t0 = 0x83cd5bu; esp -= 4; M32(esp) = t0;
L_004dc47e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004dc480:  // push 0x631fbc
    t0 = 0x631fbcu; esp -= 4; M32(esp) = t0;
L_004dc485:  // push 0x631fa8
    t0 = 0x631fa8u; esp -= 4; M32(esp) = t0;
L_004dc48a:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc48f:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc494u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc494:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc495:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc496:  // push 0x631e9c
    t0 = 0x631e9cu; esp -= 4; M32(esp) = t0;
L_004dc49b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004dc49d:  // push 0x631f90
    t0 = 0x631f90u; esp -= 4; M32(esp) = t0;
L_004dc4a2:  // push 0x631f78
    t0 = 0x631f78u; esp -= 4; M32(esp) = t0;
L_004dc4a7:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc4ac:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc4b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc4b1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc4b2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc4b3:  // push 0x631ea0
    t0 = 0x631ea0u; esp -= 4; M32(esp) = t0;
L_004dc4b8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004dc4ba:  // push 0x631f60
    t0 = 0x631f60u; esp -= 4; M32(esp) = t0;
L_004dc4bf:  // push 0x631f48
    t0 = 0x631f48u; esp -= 4; M32(esp) = t0;
L_004dc4c4:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004dc4c9:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc4ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc4ce:  // mov byte ptr [0x83cd59], 1
    M8((uint32_t)(0x83cd59u)) = (uint8_t)(0x1u);
L_004dc4d5:  // jmp 0x4dc4d9
    goto L_004dc4d9;
L_004dc4d7:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004dc4d9:  // mov eax, dword ptr [edi + 0x404]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x404u)));
L_004dc4df:  // mov dword ptr [esi + 0x24], eax
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(eax);
L_004dc4e2:  // mov al, byte ptr [edi]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi))) & 0xffu);
L_004dc4e4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004dc4e6:  // je 0x4dc4fa
    if (f.zf) goto L_004dc4fa;
L_004dc4e8:  // mov ecx, dword ptr [edi + 0x408]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x408u)));
L_004dc4ee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dc4ef:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004dc4f0:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc4f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc4f5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004dc4f8:  // jmp 0x4dc544
    goto L_004dc544;
L_004dc4fa:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004dc4fd:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004dc4ff:  // je 0x4dc52d
    if (f.zf) goto L_004dc52d;
L_004dc501:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004dc503:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc506u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc506:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004dc509:  // je 0x4dc52d
    if (f.zf) goto L_004dc52d;
L_004dc50b:  // cmp eax, -2
    t0 = lsub<32>(eax, 0xfffffffeu, f);
L_004dc50e:  // je 0x4dc52d
    if (f.zf) goto L_004dc52d;
L_004dc510:  // mov ecx, dword ptr [eax*4 + 0x89c9cc]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89c9ccu)));
L_004dc517:  // mov edx, dword ptr [ecx + 0x170]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x170u)));
L_004dc51d:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004dc51e:  // mov dword ptr [ecx + 0x170], edx
    M32((uint32_t)(ecx + 0x170u)) = (uint32_t)(edx);
L_004dc524:  // mov eax, dword ptr [eax*4 + 0x89c9cc]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89c9ccu)));
L_004dc52b:  // jmp 0x4dc544
    goto L_004dc544;
L_004dc52d:  // mov eax, dword ptr [0x89c9c8]
    eax = (uint32_t)(M32((uint32_t)(0x89c9c8u)));
L_004dc532:  // mov ecx, dword ptr [eax + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x170u)));
L_004dc538:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004dc539:  // mov dword ptr [eax + 0x170], ecx
    M32((uint32_t)(eax + 0x170u)) = (uint32_t)(ecx);
L_004dc53f:  // mov eax, dword ptr [0x89c9c8]
    eax = (uint32_t)(M32((uint32_t)(0x89c9c8u)));
L_004dc544:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004dc546:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_004dc549:  // jne 0x4dc565
    if (!f.zf) goto L_004dc565;
L_004dc54b:  // mov eax, dword ptr [0x89c9c8]
    eax = (uint32_t)(M32((uint32_t)(0x89c9c8u)));
L_004dc550:  // mov ecx, dword ptr [eax + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x170u)));
L_004dc556:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004dc557:  // mov dword ptr [eax + 0x170], ecx
    M32((uint32_t)(eax + 0x170u)) = (uint32_t)(ecx);
L_004dc55d:  // mov eax, dword ptr [0x89c9c8]
    eax = (uint32_t)(M32((uint32_t)(0x89c9c8u)));
L_004dc562:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_004dc565:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc568:  // push 0x5a
    t0 = 0x5au; esp -= 4; M32(esp) = t0;
L_004dc56a:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc56f:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_004dc571:  // mov ecx, dword ptr [eax + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x164u)));
L_004dc577:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004dc579:  // mov dword ptr [esi + 0x20], ecx
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(ecx);
L_004dc57c:  // mov edx, dword ptr [eax + 0x168]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x168u)));
L_004dc582:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc587:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_004dc58a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc58fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc58f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004dc591:  // je 0x4dc5b3
    if (f.zf) goto L_004dc5b3;
L_004dc593:  // mov dword ptr [eax + 0x10], ebx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebx);
L_004dc596:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_004dc599:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004dc59b:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004dc59e:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004dc5a1:  // mov dword ptr [eax + 0x18], 0xc7c34f80
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(0xc7c34f80u);
L_004dc5a8:  // mov dword ptr [eax + 0x14], 0xffffd8f1
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffffd8f1u);
L_004dc5af:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004dc5b1:  // jmp 0x4dc5b5
    goto L_004dc5b5;
L_004dc5b3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004dc5b5:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004dc5b7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004dc5b8:  // mov dword ptr [esi + 0xc], edi
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(edi);
L_004dc5bb:  // jne 0x4dc5d2
    if (!f.zf) goto L_004dc5d2;
L_004dc5bd:  // push 0x631ef8
    t0 = 0x631ef8u; esp -= 4; M32(esp) = t0;
L_004dc5c2:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc5c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc5c7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004dc5ca:  // mov dword ptr [esi + 0xc], ebx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ebx);
L_004dc5cd:  // jmp 0x4dc6c2
    goto L_004dc6c2;
L_004dc5d2:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc5d5:  // push 0x21
    t0 = 0x21u; esp -= 4; M32(esp) = t0;
L_004dc5d7:  // push 0x631ed8
    t0 = 0x631ed8u; esp -= 4; M32(esp) = t0;
L_004dc5dc:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_004dc5de:  // mov ebp, dword ptr [eax + 0x15c]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x15cu)));
L_004dc5e4:  // mov dword ptr [edi + 0x10], ebp
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(ebp);
L_004dc5e7:  // lea ecx, [ebp + ebp*2]
    ecx = (uint32_t)((uint32_t)(ebp + ebp * 2u));
L_004dc5eb:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004dc5ee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dc5ef:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc5f4:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc5f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc5f9:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004dc5fd:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004dc5ff:  // mov dword ptr [esp + 0x220], ebx
    M32((uint32_t)(esp + 0x220u)) = (uint32_t)(ebx);
L_004dc606:  // je 0x4dc63b
    if (f.zf) goto L_004dc63b;
L_004dc608:  // lea ecx, [ebp - 1]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffffu));
L_004dc60b:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004dc60d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004dc60f:  // jl 0x4dc637
    if ((f.sf != f.of)) goto L_004dc637;
L_004dc611:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004dc612:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004dc616:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004dc61b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004dc61d:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004dc61f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc620:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc625u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc625:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004dc629:  // add ebx, 0x30
    t0 = ladd<32>(ebx, 0x30u, f);
    ebx = (uint32_t)(t0);
L_004dc62c:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004dc62d:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004dc631:  // jne 0x4dc616
    if (!f.zf) goto L_004dc616;
L_004dc633:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004dc637:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004dc639:  // jmp 0x4dc63d
    goto L_004dc63d;
L_004dc63b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dc63d:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_004dc63f:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_004dc641:  // push 0x631ed8
    t0 = 0x631ed8u; esp -= 4; M32(esp) = t0;
L_004dc646:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_004dc648:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004dc64b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004dc64c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc651:  // mov dword ptr [esp + 0x230], 0xffffffff
    M32((uint32_t)(esp + 0x230u)) = (uint32_t)(0xffffffffu);
L_004dc65c:  // mov dword ptr [edi], eax
    M32((uint32_t)(edi)) = (uint32_t)(eax);
L_004dc65e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc663u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc663:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004dc665:  // je 0x4dc670
    if (f.zf) goto L_004dc670;
L_004dc667:  // lea ecx, [ebp - 1]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffffu));
L_004dc66a:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004dc66e:  // jmp 0x4dc672
    goto L_004dc672;
L_004dc670:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dc672:  // push 0x23
    t0 = 0x23u; esp -= 4; M32(esp) = t0;
L_004dc674:  // push 0x631ed8
    t0 = 0x631ed8u; esp -= 4; M32(esp) = t0;
L_004dc679:  // shl ebp, 2
    t0 = lshl<32>(ebp, 0x2u, f);
    ebp = (uint32_t)(t0);
L_004dc67c:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_004dc67e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004dc67f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc684:  // mov dword ptr [edi + 4], eax
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(eax);
L_004dc687:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc68cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc68c:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004dc68e:  // push 0x631ed8
    t0 = 0x631ed8u; esp -= 4; M32(esp) = t0;
L_004dc693:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_004dc695:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004dc696:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc69b:  // mov dword ptr [edi + 8], eax
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(eax);
L_004dc69e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc6a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc6a3:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_004dc6a6:  // mov dword ptr [edi + 0xc], eax
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(eax);
L_004dc6a9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dc6ab:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004dc6ad:  // jle 0x4dc6c2
    if ((f.zf || f.sf != f.of)) goto L_004dc6c2;
L_004dc6af:  // mov edx, dword ptr [edi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004dc6b2:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004dc6b3:  // mov dword ptr [edx + eax*4 - 4], 0xffffffff
    M32((uint32_t)(edx + eax * 4u + 0xfffffffcu)) = (uint32_t)(0xffffffffu);
L_004dc6bb:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_004dc6be:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004dc6c0:  // jl 0x4dc6af
    if ((f.sf != f.of)) goto L_004dc6af;
L_004dc6c2:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc6c5:  // mov dword ptr [esi + 0x28], ebx
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(ebx);
L_004dc6c8:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004dc6ca:  // call 0x4aa4e0
    t0 = 0x004aa4e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc6cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc6cf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004dc6d1:  // jle 0x4dc716
    if ((f.zf || f.sf != f.of)) goto L_004dc716;
L_004dc6d3:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004dc6d7:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004dc6de:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc6df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dc6e0:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc6e3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004dc6e4:  // call 0x4aa500
    t0 = 0x004aa500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc6e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc6e9:  // lea edi, [esp + 0x118]
    edi = (uint32_t)((uint32_t)(esp + 0x118u));
L_004dc6f0:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004dc6f3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dc6f5:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004dc6f7:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004dc6f9:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004dc6fa:  // je 0x4dc709
    if (f.zf) goto L_004dc709;
L_004dc6fc:  // cmp byte ptr [esp + 0x118], 0x5f
    t0 = lsub<8>(M8((uint32_t)(esp + 0x118u)), 0x5fu, f);
L_004dc704:  // jne 0x4dc709
    if (!f.zf) goto L_004dc709;
L_004dc706:  // inc dword ptr [esi + 0x28]
    t0 = linc<32>(M32((uint32_t)(esi + 0x28u)), f);
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(t0);
L_004dc709:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc70c:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004dc70d:  // call 0x4aa4e0
    t0 = 0x004aa4e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc712u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc712:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004dc714:  // jl 0x4dc6d3
    if ((f.sf != f.of)) goto L_004dc6d3;
L_004dc716:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_004dc719:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004dc71b:  // jle 0x4dc8dc
    if ((f.zf || f.sf != f.of)) goto L_004dc8dc;
L_004dc721:  // push 0x75
    t0 = 0x75u; esp -= 4; M32(esp) = t0;
L_004dc723:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc728:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004dc72a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc72b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc730:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc735u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc735:  // mov dword ptr [esi + 0x2c], eax
    M32((uint32_t)(esi + 0x2cu)) = (uint32_t)(eax);
L_004dc738:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_004dc73b:  // push 0x76
    t0 = 0x76u; esp -= 4; M32(esp) = t0;
L_004dc73d:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc742:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004dc745:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004dc747:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc748:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc74d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc752:  // mov dword ptr [esi + 0x30], eax
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(eax);
L_004dc755:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_004dc758:  // push 0x77
    t0 = 0x77u; esp -= 4; M32(esp) = t0;
L_004dc75a:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc75f:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004dc762:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004dc764:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc765:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc76a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc76fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc76f:  // mov dword ptr [esi + 0x38], eax
    M32((uint32_t)(esi + 0x38u)) = (uint32_t)(eax);
L_004dc772:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_004dc775:  // push 0x78
    t0 = 0x78u; esp -= 4; M32(esp) = t0;
L_004dc777:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc77c:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004dc77f:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004dc781:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc782:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc787:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc78cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc78c:  // mov dword ptr [esi + 0x3c], eax
    M32((uint32_t)(esi + 0x3cu)) = (uint32_t)(eax);
L_004dc78f:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_004dc792:  // push 0x79
    t0 = 0x79u; esp -= 4; M32(esp) = t0;
L_004dc794:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc799:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004dc79c:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004dc79e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc79f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc7a4:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc7a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc7a9:  // mov dword ptr [esi + 0x40], eax
    M32((uint32_t)(esi + 0x40u)) = (uint32_t)(eax);
L_004dc7ac:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_004dc7af:  // push 0x7a
    t0 = 0x7au; esp -= 4; M32(esp) = t0;
L_004dc7b1:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc7b6:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004dc7b9:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004dc7bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc7bc:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc7c1:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc7c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc7c6:  // mov dword ptr [esi + 0x34], eax
    M32((uint32_t)(esi + 0x34u)) = (uint32_t)(eax);
L_004dc7c9:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_004dc7cc:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004dc7ce:  // je 0x4dc8ca
    if (f.zf) goto L_004dc8ca;
L_004dc7d4:  // cmp dword ptr [esi + 0x30], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x30u)), ebx, f);
L_004dc7d7:  // je 0x4dc8ca
    if (f.zf) goto L_004dc8ca;
L_004dc7dd:  // cmp dword ptr [esi + 0x38], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x38u)), ebx, f);
L_004dc7e0:  // je 0x4dc8ca
    if (f.zf) goto L_004dc8ca;
L_004dc7e6:  // cmp dword ptr [esi + 0x3c], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x3cu)), ebx, f);
L_004dc7e9:  // je 0x4dc8ca
    if (f.zf) goto L_004dc8ca;
L_004dc7ef:  // cmp dword ptr [esi + 0x40], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x40u)), ebx, f);
L_004dc7f2:  // je 0x4dc8ca
    if (f.zf) goto L_004dc8ca;
L_004dc7f8:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc7fb:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004dc7fd:  // call 0x4aa4e0
    t0 = 0x004aa4e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc802u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc802:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004dc804:  // jle 0x4dc884
    if ((f.zf || f.sf != f.of)) goto L_004dc884;
L_004dc806:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc809:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004dc80d:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004dc811:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004dc812:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc813:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc814:  // call 0x4aa500
    t0 = 0x004aa500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc819u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc819:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_004dc81d:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004dc820:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dc822:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004dc824:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004dc826:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004dc827:  // je 0x4dc877
    if (f.zf) goto L_004dc877;
L_004dc829:  // cmp byte ptr [esp + 0x18], 0x5f
    t0 = lsub<8>(M8((uint32_t)(esp + 0x18u)), 0x5fu, f);
L_004dc82e:  // jne 0x4dc877
    if (!f.zf) goto L_004dc877;
L_004dc830:  // mov ecx, dword ptr [esi + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x38u)));
L_004dc833:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc834:  // mov dword ptr [ecx + ebp*4], ebx
    M32((uint32_t)(ecx + ebp * 4u)) = (uint32_t)(ebx);
L_004dc837:  // mov edx, dword ptr [esi + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_004dc83a:  // mov byte ptr [edx + ebp], 0
    M8((uint32_t)(edx + ebp)) = (uint8_t)(0x0u);
L_004dc83e:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004dc841:  // mov dword ptr [eax + ebp*4], 0
    M32((uint32_t)(eax + ebp * 4u)) = (uint32_t)(0x0u);
L_004dc848:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc84b:  // call 0x4aa5a0
    t0 = 0x004aa5a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc850u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc850:  // mov ecx, dword ptr [esi + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x3cu)));
L_004dc853:  // mov dword ptr [ecx + ebp*4], eax
    M32((uint32_t)(ecx + ebp * 4u)) = (uint32_t)(eax);
L_004dc856:  // mov edx, dword ptr [esi + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x40u)));
L_004dc859:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004dc85d:  // lea ecx, [esp + 0x19]
    ecx = (uint32_t)((uint32_t)(esp + 0x19u));
L_004dc861:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dc862:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_004dc867:  // mov dword ptr [edx + ebp*4], eax
    M32((uint32_t)(edx + ebp * 4u)) = (uint32_t)(eax);
L_004dc86a:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc86fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc86f:  // mov edx, dword ptr [esi + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_004dc872:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004dc873:  // mov dword ptr [edx + ebp*4 - 4], eax
    M32((uint32_t)(edx + ebp * 4u + 0xfffffffcu)) = (uint32_t)(eax);
L_004dc877:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc87a:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004dc87b:  // call 0x4aa4e0
    t0 = 0x004aa4e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc880u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc880:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004dc882:  // jl 0x4dc806
    if ((f.sf != f.of)) goto L_004dc806;
L_004dc884:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004dc886:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004dc889:  // mov dword ptr [esi + 0x48], ebx
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(ebx);
L_004dc88c:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004dc88e:  // mov dword ptr [esi + 0x44], ebx
    M32((uint32_t)(esi + 0x44u)) = (uint32_t)(ebx);
L_004dc891:  // mov dword ptr [esi + 0x18], ebx
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(ebx);
L_004dc894:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004dc895:  // je 0x4dc8f0
    if (f.zf) goto L_004dc8f0;
L_004dc897:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004dc899:  // call dword ptr [eax + 0x48]
    t0 = M32((uint32_t)(eax + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc89cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc89c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004dc89e:  // je 0x4dc90f
    if (f.zf) goto L_004dc90f;
L_004dc8a0:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004dc8a3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc8a4:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004dc8a6:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004dc8aa:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004dc8ac:  // call dword ptr [edx + 0x50]
    t0 = M32((uint32_t)(edx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc8afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc8af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc8b0:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004dc8b2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004dc8b4:  // call dword ptr [eax + 0x4c]
    t0 = M32((uint32_t)(eax + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc8b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc8b7:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc8ba:  // mov edx, dword ptr [esp + 0x22c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x22cu)));
L_004dc8c1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc8c2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004dc8c4:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004dc8c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dc8c7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004dc8c8:  // jmp 0x4dc904
    goto L_004dc904;
L_004dc8ca:  // push 0x631ea4
    t0 = 0x631ea4u; esp -= 4; M32(esp) = t0;
L_004dc8cf:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc8d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc8d4:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004dc8d7:  // mov dword ptr [esi + 0x28], ebx
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(ebx);
L_004dc8da:  // jmp 0x4dc886
    goto L_004dc886;
L_004dc8dc:  // mov dword ptr [esi + 0x2c], ebx
    M32((uint32_t)(esi + 0x2cu)) = (uint32_t)(ebx);
L_004dc8df:  // mov dword ptr [esi + 0x30], ebx
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(ebx);
L_004dc8e2:  // mov dword ptr [esi + 0x38], ebx
    M32((uint32_t)(esi + 0x38u)) = (uint32_t)(ebx);
L_004dc8e5:  // mov dword ptr [esi + 0x3c], ebx
    M32((uint32_t)(esi + 0x3cu)) = (uint32_t)(ebx);
L_004dc8e8:  // mov dword ptr [esi + 0x40], ebx
    M32((uint32_t)(esi + 0x40u)) = (uint32_t)(ebx);
L_004dc8eb:  // mov dword ptr [esi + 0x34], ebx
    M32((uint32_t)(esi + 0x34u)) = (uint32_t)(ebx);
L_004dc8ee:  // jmp 0x4dc886
    goto L_004dc886;
L_004dc8f0:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004dc8f3:  // mov ecx, dword ptr [esp + 0x224]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x224u)));
L_004dc8fa:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc8fb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dc8fc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004dc8fe:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004dc900:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004dc902:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dc903:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dc904:  // call 0x4888f0
    t0 = 0x004888f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc909u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc909:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_004dc90c:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_004dc90f:  // cmp dword ptr [esi + 0x18], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x18u)), ebx, f);
L_004dc912:  // je 0x4dc931
    if (f.zf) goto L_004dc931;
L_004dc914:  // push 0xb2
    t0 = 0xb2u; esp -= 4; M32(esp) = t0;
L_004dc919:  // push 0x631f28
    t0 = 0x631f28u; esp -= 4; M32(esp) = t0;
L_004dc91e:  // push 0x39
    t0 = 0x39u; esp -= 4; M32(esp) = t0;
L_004dc920:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004dc922:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004dc927:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004dc92cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004dc92c:  // mov dword ptr [esi + 0x1c], eax
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(eax);
L_004dc92f:  // jmp 0x4dc934
    goto L_004dc934;
L_004dc931:  // mov dword ptr [esi + 0x1c], ebx
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(ebx);
L_004dc934:  // mov ecx, dword ptr [esp + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x214u)));
L_004dc93b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004dc93c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004dc93d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004dc93e:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004dc945:  // add esp, 0x214
    t0 = ladd<32>(esp, 0x214u, f);
    esp = (uint32_t)(t0);
L_004dc94b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004dc370, 004dc370)
