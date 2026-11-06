// lifted from 004b6350 (FUN_004b6350, 2134 bytes, 614 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b6350(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b6350;
L_004b6350:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004b6356:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004b6358:  // push 0x5d3ad9
    t0 = 0x5d3ad9u; esp -= 4; M32(esp) = t0;
L_004b635d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b635e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004b6365:  // sub esp, 0x64
    t0 = lsub<32>(esp, 0x64u, f);
    esp = (uint32_t)(t0);
L_004b6368:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b6369:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b636a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b636b:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004b6372:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b6373:  // mov eax, dword ptr [esi + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004b6379:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004b637c:  // je 0x4b6383
    if (f.zf) goto L_004b6383;
L_004b637e:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004b6381:  // jne 0x4b6394
    if (!f.zf) goto L_004b6394;
L_004b6383:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004b638a:  // test al, 4
    t0 = llog<8>((eax & 0xffu) & 0x4u, f);
L_004b638c:  // je 0x4b6b93
    if (f.zf) goto L_004b6b93;
L_004b6392:  // jmp 0x4b639b
    goto L_004b639b;
L_004b6394:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004b639b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004b639d:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004b63a2:  // and ecx, edi
    t0 = llog<32>(ecx & edi, f);
    ecx = (uint32_t)(t0);
L_004b63a4:  // cmp cl, 1
    t0 = lsub<8>((ecx & 0xffu), 0x1u, f);
L_004b63a7:  // je 0x4b6b93
    if (f.zf) goto L_004b6b93;
L_004b63ad:  // and eax, 0x10
    t0 = llog<32>(eax & 0x10u, f);
    eax = (uint32_t)(t0);
L_004b63b0:  // cmp al, 0x10
    t0 = lsub<8>((eax & 0xffu), 0x10u, f);
L_004b63b2:  // jne 0x4b63e1
    if (!f.zf) goto L_004b63e1;
L_004b63b4:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004b63bb:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b63bd:  // je 0x4b63e1
    if (f.zf) goto L_004b63e1;
L_004b63bf:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b63c1:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b63c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b63c4:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004b63c7:  // je 0x4b63e1
    if (f.zf) goto L_004b63e1;
L_004b63c9:  // cmp dword ptr [esi + 0xbc], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0xbcu)), edi, f);
L_004b63cf:  // jg 0x4b6b93
    if ((!f.zf && f.sf == f.of)) goto L_004b6b93;
L_004b63d5:  // cmp dword ptr [esi + 0xb4], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0xb4u)), edi, f);
L_004b63db:  // jg 0x4b6b93
    if ((!f.zf && f.sf == f.of)) goto L_004b6b93;
L_004b63e1:  // mov eax, dword ptr [esi + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004b63e7:  // mov ebp, dword ptr [esp + 0x94]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004b63ee:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_004b63f1:  // jne 0x4b69bc
    if (!f.zf) goto L_004b69bc;
L_004b63f7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004b63f9:  // je 0x4b6902
    if (f.zf) goto L_004b6902;
L_004b63ff:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004b6402:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b6403:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b6405:  // call dword ptr [eax + 0x4c]
    t0 = M32((uint32_t)(eax + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6408u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6408:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b640a:  // cmp esi, -1
    t0 = lsub<32>(esi, 0xffffffffu, f);
L_004b640d:  // je 0x4b6902
    if (f.zf) goto L_004b6902;
L_004b6413:  // mov ecx, dword ptr [ebp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_004b6416:  // cmp dword ptr [ecx + esi*4], 0
    t0 = lsub<32>(M32((uint32_t)(ecx + esi * 4u)), 0x0u, f);
L_004b641a:  // je 0x4b6902
    if (f.zf) goto L_004b6902;
L_004b6420:  // mov edx, dword ptr [ebp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004b6423:  // cmp dword ptr [edx + esi*4], 0
    t0 = lsub<32>(M32((uint32_t)(edx + esi * 4u)), 0x0u, f);
L_004b6427:  // jne 0x4b6616
    if (!f.zf) goto L_004b6616;
L_004b642d:  // push 0x207
    t0 = 0x207u; esp -= 4; M32(esp) = t0;
L_004b6432:  // push 0x630178
    t0 = 0x630178u; esp -= 4; M32(esp) = t0;
L_004b6437:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004b6439:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004b643b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004b6440:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6445u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6445:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004b6447:  // mov dword ptr [esp + 0x94], edi
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edi);
L_004b644e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004b6450:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004b6452:  // mov dword ptr [esp + 0x7c], ebx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ebx);
L_004b6456:  // je 0x4b6464
    if (f.zf) goto L_004b6464;
L_004b6458:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b645a:  // mov dword ptr [edi + 4], ebx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebx);
L_004b645d:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6462u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6462:  // jmp 0x4b6466
    goto L_004b6466;
L_004b6464:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004b6466:  // mov eax, dword ptr [ebp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004b6469:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b646a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b646c:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004b6474:  // mov dword ptr [eax + esi*4], edi
    M32((uint32_t)(eax + esi * 4u)) = (uint32_t)(edi);
L_004b6477:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004b647a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b647d:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_004b6485:  // mov edx, dword ptr [ecx + esi*4]
    edx = (uint32_t)(M32((uint32_t)(ecx + esi * 4u)));
L_004b6488:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b648c:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004b648e:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_004b6496:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_004b6499:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b649d:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b649f:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b64a3:  // mov dword ptr [esp + 0x94], 0xffffffff
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0xffffffffu);
L_004b64ae:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004b64b1:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004b64b5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b64b8:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b64bb:  // mov eax, dword ptr [ebp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004b64be:  // mov edx, dword ptr [ebp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_004b64c1:  // mov ecx, dword ptr [eax + esi*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + esi * 4u)));
L_004b64c4:  // mov eax, dword ptr [edx + esi*4]
    eax = (uint32_t)(M32((uint32_t)(edx + esi * 4u)));
L_004b64c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b64c8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b64c9:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004b64ce:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b64d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b64d3:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004b64d6:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004b64de:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004b64e6:  // mov dword ptr [esp + 0x1c], 0x42c80000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x42c80000u);
L_004b64ee:  // mov eax, dword ptr [ecx + esi*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + esi * 4u)));
L_004b64f1:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b64f4:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004b64f6:  // je 0x4b6571
    if (f.zf) goto L_004b6571;
L_004b64f8:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004b64ff:  // jne 0x4b654c
    if (!f.zf) goto L_004b654c;
L_004b6501:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b6505:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004b650b:  // mov dword ptr [ecx + 0x80], eax
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(eax);
L_004b6511:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b6515:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004b6518:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b651c:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b651f:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b6523:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b6526:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b652a:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b652d:  // mov dword ptr [ecx + 0x40], eax
    M32((uint32_t)(ecx + 0x40u)) = (uint32_t)(eax);
L_004b6530:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b6534:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004b6537:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b653b:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b653e:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b6542:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b6545:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004b6549:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b654a:  // jmp 0x4b656c
    goto L_004b656c;
L_004b654c:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004b654e:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b6551:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004b6553:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004b6555:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b6558:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004b655b:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b655e:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004b6561:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b6564:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b6567:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004b656b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b656c:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6571u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6571:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004b6574:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004b657c:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004b6584:  // mov dword ptr [esp + 0x1c], 0x42c80000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x42c80000u);
L_004b658c:  // mov eax, dword ptr [ecx + esi*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + esi * 4u)));
L_004b658f:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b6592:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004b6594:  // je 0x4b660f
    if (f.zf) goto L_004b660f;
L_004b6596:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004b659d:  // jne 0x4b65ea
    if (!f.zf) goto L_004b65ea;
L_004b659f:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b65a3:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004b65a9:  // mov dword ptr [ecx + 0x80], eax
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(eax);
L_004b65af:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b65b3:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004b65b6:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b65ba:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b65bd:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b65c1:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b65c4:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b65c8:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b65cb:  // mov dword ptr [ecx + 0x40], eax
    M32((uint32_t)(ecx + 0x40u)) = (uint32_t)(eax);
L_004b65ce:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b65d2:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004b65d5:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b65d9:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b65dc:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b65e0:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b65e3:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004b65e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b65e8:  // jmp 0x4b660a
    goto L_004b660a;
L_004b65ea:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004b65ec:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b65ef:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004b65f1:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004b65f3:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b65f6:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004b65f9:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b65fc:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004b65ff:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b6602:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b6605:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004b6609:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b660a:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b660fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b660f:  // mov ecx, dword ptr [ebp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_004b6612:  // mov byte ptr [ecx + esi], 0
    M8((uint32_t)(ecx + esi)) = (uint8_t)(0x0u);
L_004b6616:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004b6619:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b661a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b661c:  // call dword ptr [edx + 0x50]
    t0 = M32((uint32_t)(edx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b661fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b661f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b6621:  // jne 0x4b67b0
    if (!f.zf) goto L_004b67b0;
L_004b6627:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004b662a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b662b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b662d:  // call dword ptr [eax + 0x58]
    t0 = M32((uint32_t)(eax + 0x58u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6630u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6630:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004b6633:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004b6635:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b6637:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b6638:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b663a:  // mov dword ptr [esp + 0x9c], edi
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edi);
L_004b6641:  // call dword ptr [edx + 0x60]
    t0 = M32((uint32_t)(edx + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6644u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6644:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004b6647:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b6648:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b664a:  // call dword ptr [eax + 0x5c]
    t0 = M32((uint32_t)(eax + 0x5cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b664du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b664d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b664f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b6651:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004b6655:  // je 0x4b6902
    if (f.zf) goto L_004b6902;
L_004b665b:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004b665e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b6660:  // je 0x4b66e6
    if (f.zf) goto L_004b66e6;
L_004b6666:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004b666d:  // jne 0x4b66be
    if (!f.zf) goto L_004b66be;
L_004b666f:  // mov ebx, dword ptr [esp + 0x84]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b6676:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004b667c:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004b667e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b667f:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004b6681:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_004b6683:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b6686:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_004b6689:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b668c:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_004b668f:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b6692:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b6695:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004b6697:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b669a:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004b669c:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_004b669e:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b66a1:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_004b66a4:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b66a7:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_004b66aa:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b66ad:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b66b0:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b66b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b66b5:  // mov edi, dword ptr [esp + 0x94]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004b66bc:  // jmp 0x4b66ed
    goto L_004b66ed;
L_004b66be:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004b66c0:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b66c3:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_004b66c5:  // mov dword ptr [edx], ebx
    M32((uint32_t)(edx)) = (uint32_t)(ebx);
L_004b66c7:  // mov ebx, dword ptr [eax + 4]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b66ca:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_004b66cd:  // mov ebx, dword ptr [eax + 8]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b66d0:  // mov dword ptr [edx + 8], ebx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebx);
L_004b66d3:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b66d6:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b66d9:  // mov edx, dword ptr [esp + 0x84]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b66e0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b66e1:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b66e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b66e6:  // mov ebx, dword ptr [esp + 0x84]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b66ed:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004b66f0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b66f2:  // je 0x4b674a
    if (f.zf) goto L_004b674a;
L_004b66f4:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004b66fb:  // jne 0x4b6722
    if (!f.zf) goto L_004b6722;
L_004b66fd:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004b66ff:  // lea eax, [ecx + 0x80]
    eax = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004b6705:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004b6707:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004b6709:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b670c:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004b670f:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b6712:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004b6715:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b6718:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b671b:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b671e:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004b6720:  // jmp 0x4b6727
    goto L_004b6727;
L_004b6722:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b6725:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004b6727:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004b6729:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b672a:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004b672c:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b672f:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004b6732:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b6735:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004b6738:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b673b:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b673e:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6743u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6743:  // mov edi, dword ptr [esp + 0x94]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004b674a:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004b674c:  // or al, 1
    t0 = llog<8>((eax & 0xffu) | 0x1u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004b674e:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004b6751:  // je 0x4b675f
    if (f.zf) goto L_004b675f;
L_004b6753:  // or edi, 2
    t0 = llog<32>(edi | 0x2u, f);
    edi = (uint32_t)(t0);
L_004b6756:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_004b6759:  // jne 0x4b6909
    if (!f.zf) goto L_004b6909;
L_004b675f:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004b6762:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b6764:  // je 0x4b6785
    if (f.zf) goto L_004b6785;
L_004b6766:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004b676d:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004b6770:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b6775:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b6777:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b677b:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004b6785:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004b6788:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b678a:  // je 0x4b6909
    if (f.zf) goto L_004b6909;
L_004b6790:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004b6797:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004b679a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b679f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b67a1:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004b67ab:  // jmp 0x4b6909
    goto L_004b6909;
L_004b67b0:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004b67b3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b67b4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b67b6:  // call dword ptr [edx + 0x5c]
    t0 = M32((uint32_t)(edx + 0x5cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b67b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b67b9:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004b67bb:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b67bd:  // je 0x4b6902
    if (f.zf) goto L_004b6902;
L_004b67c3:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004b67c6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b67c7:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b67c9:  // call dword ptr [eax + 0x58]
    t0 = M32((uint32_t)(eax + 0x58u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b67ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b67cc:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b67cf:  // mov dword ptr [esp + 0x94], eax
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(eax);
L_004b67d6:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b67d8:  // je 0x4b6853
    if (f.zf) goto L_004b6853;
L_004b67da:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004b67e1:  // jne 0x4b682b
    if (!f.zf) goto L_004b682b;
L_004b67e3:  // mov esi, dword ptr [esp + 0x84]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b67ea:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004b67f0:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004b67f2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b67f3:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004b67f5:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_004b67f7:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b67fa:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_004b67fd:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b6800:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_004b6803:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b6806:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b6809:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004b680b:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b680e:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004b6810:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_004b6812:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b6815:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_004b6818:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b681b:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_004b681e:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b6821:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b6824:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6829u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6829:  // jmp 0x4b685a
    goto L_004b685a;
L_004b682b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004b682d:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b6830:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004b6832:  // mov dword ptr [edx], esi
    M32((uint32_t)(edx)) = (uint32_t)(esi);
L_004b6834:  // mov esi, dword ptr [eax + 4]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b6837:  // mov dword ptr [edx + 4], esi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(esi);
L_004b683a:  // mov esi, dword ptr [eax + 8]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b683d:  // mov dword ptr [edx + 8], esi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(esi);
L_004b6840:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b6843:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004b6846:  // mov edx, dword ptr [esp + 0x84]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b684d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b684e:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6853u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6853:  // mov esi, dword ptr [esp + 0x84]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b685a:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b685d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b685f:  // je 0x4b68b0
    if (f.zf) goto L_004b68b0;
L_004b6861:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004b6868:  // jne 0x4b688f
    if (!f.zf) goto L_004b688f;
L_004b686a:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004b686c:  // lea eax, [ecx + 0x80]
    eax = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004b6872:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004b6874:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004b6876:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b6879:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004b687c:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b687f:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004b6882:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b6885:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b6888:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b688b:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004b688d:  // jmp 0x4b6894
    goto L_004b6894;
L_004b688f:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004b6892:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004b6894:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004b6896:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b6897:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004b6899:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b689c:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004b689f:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b68a2:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004b68a5:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b68a8:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b68ab:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b68b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b68b0:  // mov eax, dword ptr [esp + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004b68b7:  // or al, 1
    t0 = llog<8>((eax & 0xffu) | 0x1u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004b68b9:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004b68bc:  // jne 0x4b6902
    if (!f.zf) goto L_004b6902;
L_004b68be:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b68c1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b68c3:  // je 0x4b68e0
    if (f.zf) goto L_004b68e0;
L_004b68c5:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004b68cc:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004b68cf:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b68d4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b68d6:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004b68e0:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b68e3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b68e5:  // je 0x4b6902
    if (f.zf) goto L_004b6902;
L_004b68e7:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004b68ee:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004b68f1:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b68f6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b68f8:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004b6902:  // mov ebx, dword ptr [esp + 0x84]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b6909:  // test byte ptr [esp + 0x9c], 4
    t0 = llog<8>(M8((uint32_t)(esp + 0x9cu)) & 0x4u, f);
L_004b6911:  // je 0x4b6b93
    if (f.zf) goto L_004b6b93;
L_004b6917:  // mov esi, dword ptr [esp + 0x8c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004b691e:  // mov eax, dword ptr [esi + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004b6924:  // mov byte ptr [esp + 0x84], 0
    M8((uint32_t)(esp + 0x84u)) = (uint8_t)(0x0u);
L_004b692c:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004b692f:  // jne 0x4b6946
    if (!f.zf) goto L_004b6946;
L_004b6931:  // mov eax, dword ptr [esi + 0x124]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x124u)));
L_004b6937:  // mov byte ptr [esp + 0x84], 1
    M8((uint32_t)(esp + 0x84u)) = (uint8_t)(0x1u);
L_004b693f:  // mov dword ptr [esp + 0x8c], eax
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(eax);
L_004b6946:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004b694d:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b6950:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b6955:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004b6957:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b6959:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b695c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b695e:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004b6960:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004b6962:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004b6964:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004b6967:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004b696a:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004b696d:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b6970:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004b6973:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b6976:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004b697b:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6980u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6980:  // mov esi, dword ptr [esp + 0x90]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004b6987:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b6989:  // je 0x4b69c8
    if (f.zf) goto L_004b69c8;
L_004b698b:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004b6992:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b6994:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b6996:  // mov eax, dword ptr [edi + 0x88]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x88u)));
L_004b699c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b699d:  // call dword ptr [edx + 0x68]
    t0 = M32((uint32_t)(edx + 0x68u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b69a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b69a0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b69a2:  // jle 0x4b69cf
    if ((f.zf || f.sf != f.of)) goto L_004b69cf;
L_004b69a4:  // mov ecx, dword ptr [esp + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004b69ab:  // mov dword ptr [0x704e64], eax
    M32((uint32_t)(0x704e64u)) = (uint32_t)(eax);
L_004b69b0:  // or ecx, 0x20
    t0 = llog<32>(ecx | 0x20u, f);
    ecx = (uint32_t)(t0);
L_004b69b3:  // mov dword ptr [esp + 0x9c], ecx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(ecx);
L_004b69ba:  // jmp 0x4b69df
    goto L_004b69df;
L_004b69bc:  // mov ebx, dword ptr [esp + 0x84]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b69c3:  // jmp 0x4b691e
    goto L_004b691e;
L_004b69c8:  // mov edi, dword ptr [esp + 0x8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004b69cf:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004b69d6:  // and al, 0xdf
    t0 = llog<8>((eax & 0xffu) & 0xdfu, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004b69d8:  // mov dword ptr [esp + 0x9c], eax
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(eax);
L_004b69df:  // test byte ptr [0x89ce54], 4
    t0 = llog<8>(M8((uint32_t)(0x89ce54u)) & 0x4u, f);
L_004b69e6:  // jne 0x4b6a9d
    if (!f.zf) goto L_004b6a9d;
L_004b69ec:  // mov ecx, dword ptr [esp + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004b69f3:  // and ecx, 4
    t0 = llog<32>(ecx & 0x4u, f);
    ecx = (uint32_t)(t0);
L_004b69f6:  // cmp cl, 4
    t0 = lsub<8>((ecx & 0xffu), 0x4u, f);
L_004b69f9:  // je 0x4b6a9d
    if (f.zf) goto L_004b6a9d;
L_004b69ff:  // mov eax, dword ptr [0x89ce5c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce5cu)));
L_004b6a04:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b6a06:  // je 0x4b6a30
    if (f.zf) goto L_004b6a30;
L_004b6a08:  // mov edi, dword ptr [edi + 0x100]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x100u)));
L_004b6a0e:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004b6a10:  // je 0x4b6b93
    if (f.zf) goto L_004b6b93;
L_004b6a16:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b6a18:  // call 0x4d5e30
    t0 = 0x004d5e30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6a1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6a1d:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b6a21:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004b6a28:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b6a29:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b6a2a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b6a2b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b6a2c:  // add esp, 0x70
    t0 = ladd<32>(esp, 0x70u, f);
    esp = (uint32_t)(t0);
L_004b6a2f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b6a30:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004b6a32:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b6a34:  // je 0x4b6a3d
    if (f.zf) goto L_004b6a3d;
L_004b6a36:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b6a38:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b6a3a:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6a3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6a3d:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004b6a44:  // mov edx, dword ptr [esp + 0x9c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004b6a4b:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_004b6a51:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b6a52:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004b6a59:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6a5a:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_004b6a61:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b6a62:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6a63:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b6a64:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004b6a66:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b6a67:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b6a68:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b6a69:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b6a6c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b6a6f:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004b6a71:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004b6a73:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004b6a76:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004b6a79:  // mov ecx, dword ptr [ebx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004b6a7c:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b6a7f:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b6a82:  // call 0x549570
    t0 = 0x00549570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6a87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6a87:  // add esp, 0x30
    t0 = ladd<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b6a8a:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b6a8e:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004b6a95:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b6a96:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b6a97:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b6a98:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b6a99:  // add esp, 0x70
    t0 = ladd<32>(esp, 0x70u, f);
    esp = (uint32_t)(t0);
L_004b6a9c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b6a9d:  // mov edx, dword ptr [edi + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xfcu)));
L_004b6aa3:  // mov esi, 0x704df8
    esi = (uint32_t)(0x704df8u);
L_004b6aa8:  // lea edi, [esp + 0x44]
    edi = (uint32_t)((uint32_t)(esp + 0x44u));
L_004b6aac:  // mov ebx, 0xff7f7f7f
    ebx = (uint32_t)(0xff7f7f7fu);
L_004b6ab1:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004b6ab3:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004b6ab7:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b6aba:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004b6abe:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b6ac1:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004b6ac5:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b6ac8:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004b6acc:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b6ad1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b6ad3:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004b6ada:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b6adc:  // je 0x4b6ae5
    if (f.zf) goto L_004b6ae5;
L_004b6ade:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b6ae0:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6ae3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6ae3:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004b6ae5:  // mov al, byte ptr [esp + 0x84]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x84u))) & 0xffu);
L_004b6aec:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b6aee:  // je 0x4b6af5
    if (f.zf) goto L_004b6af5;
L_004b6af0:  // mov ebx, 0xff008080
    ebx = (uint32_t)(0xff008080u);
L_004b6af5:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004b6afc:  // mov ecx, dword ptr [eax + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xfcu)));
L_004b6b02:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_004b6b05:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004b6b0b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004b6b0d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004b6b10:  // je 0x4b6b2c
    if (f.zf) goto L_004b6b2c;
L_004b6b12:  // mov dword ptr [esp + 0x24], 0x3dcccccd
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3dcccccdu);
L_004b6b1a:  // mov dword ptr [esp + 0x28], 0x3dcccccd
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x3dcccccdu);
L_004b6b22:  // mov dword ptr [esp + 0x2c], 0x3dcccccd
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x3dcccccdu);
L_004b6b2a:  // jmp 0x4b6b4a
    goto L_004b6b4a;
L_004b6b2c:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004b6b2f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b6b31:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004b6b35:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004b6b38:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004b6b3c:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004b6b3f:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004b6b43:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004b6b46:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004b6b4a:  // mov eax, dword ptr [0x89ce84]
    eax = (uint32_t)(M32((uint32_t)(0x89ce84u)));
L_004b6b4f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b6b51:  // jne 0x4b6b6d
    if (!f.zf) goto L_004b6b6d;
L_004b6b53:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b6b55:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b6b57:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004b6b59:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6b5a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6b5b:  // push 0x625498
    t0 = 0x625498u; esp -= 4; M32(esp) = t0;
L_004b6b60:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6b65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6b65:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004b6b68:  // mov dword ptr [0x89ce84], eax
    M32((uint32_t)(0x89ce84u)) = (uint32_t)(eax);
L_004b6b6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6b6e:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b6b73:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b6b76:  // lea esi, [esp + 0x78]
    esi = (uint32_t)((uint32_t)(esp + 0x78u));
L_004b6b7a:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004b6b7c:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_004b6b80:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b6b82:  // lea ecx, [esp + 0x68]
    ecx = (uint32_t)((uint32_t)(esp + 0x68u));
L_004b6b86:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b6b87:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b6b88:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b6b89:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004b6b8e:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6b93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6b93:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b6b97:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b6b98:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b6b99:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b6b9a:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004b6ba1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b6ba2:  // add esp, 0x70
    t0 = ladd<32>(esp, 0x70u, f);
    esp = (uint32_t)(t0);
L_004b6ba5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b6350, 004b6350)
