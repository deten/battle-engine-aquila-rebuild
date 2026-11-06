// lifted from 005172a0 (FUN_005172a0, 411 bytes, 145 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005172a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005172a0;
L_005172a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005172a1:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_005172a5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005172a6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005172a7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005172a8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005172a9:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_005172ad:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005172af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005172b0:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005172b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005172b5:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005172b9:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_005172bb:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_005172bd:  // je 0x5172e8
    if (f.zf) goto L_005172e8;
L_005172bf:  // mov ecx, dword ptr [esi + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_005172c2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005172c3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005172c8:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005172cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005172cd:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_005172d3:  // mov dword ptr [esi + 0x78], ebp
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebp);
L_005172d6:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_005172d8:  // je 0x517322
    if (f.zf) goto L_00517322;
L_005172da:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005172dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005172dd:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005172e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005172e0:  // mov dword ptr [esi + 0x80], ebp
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebp);
L_005172e6:  // jmp 0x517322
    goto L_00517322;
L_005172e8:  // push 0x2a7
    t0 = 0x2a7u; esp -= 4; M32(esp) = t0;
L_005172ed:  // push 0x63e46c
    t0 = 0x63e46cu; esp -= 4; M32(esp) = t0;
L_005172f2:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_005172f4:  // push 0x84
    t0 = 0x84u; esp -= 4; M32(esp) = t0;
L_005172f9:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005172fe:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00517303u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00517303:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00517305:  // je 0x51731e
    if (f.zf) goto L_0051731e;
L_00517307:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_0051730a:  // mov dword ptr [eax + 0x74], ebp
    M32((uint32_t)(eax + 0x74u)) = (uint32_t)(ebp);
L_0051730d:  // mov dword ptr [eax], 0x5e4988
    M32((uint32_t)(eax)) = (uint32_t)(0x5e4988u);
L_00517313:  // mov dword ptr [eax + 0x78], ebp
    M32((uint32_t)(eax + 0x78u)) = (uint32_t)(ebp);
L_00517316:  // mov dword ptr [eax + 0x80], ebp
    M32((uint32_t)(eax + 0x80u)) = (uint32_t)(ebp);
L_0051731c:  // jmp 0x517320
    goto L_00517320;
L_0051731e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00517320:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00517322:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00517326:  // push 0x2ac
    t0 = 0x2acu; esp -= 4; M32(esp) = t0;
L_0051732b:  // push 0x63e46c
    t0 = 0x63e46cu; esp -= 4; M32(esp) = t0;
L_00517330:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_00517332:  // lea edi, [eax + 3]
    edi = (uint32_t)((uint32_t)(eax + 0x3u));
L_00517335:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0051733a:  // shr edi, 2
    t0 = lshr<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_0051733d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051733e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00517343u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00517343:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00517347:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00517349:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051734a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051734b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00517350u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00517350:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00517352:  // jne 0x517375
    if (!f.zf) goto L_00517375;
L_00517354:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00517355:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0051735a:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051735fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051735f:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_00517361:  // je 0x51736b
    if (f.zf) goto L_0051736b;
L_00517363:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00517365:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00517367:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00517369:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051736bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051736b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051736c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051736d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0051736e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00517370:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00517371:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00517372:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00517375:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00517379:  // mov dword ptr [esi + 0x7c], eax
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(eax);
L_0051737c:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00517380:  // lea eax, [esi + 0x80]
    eax = (uint32_t)((uint32_t)(esi + 0x80u));
L_00517386:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517387:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517388:  // call 0x517440
    t0 = 0x00517440u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051738du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051738d:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0051738f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00517392:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00517394:  // je 0x517426
    if (f.zf) goto L_00517426;
L_0051739a:  // mov eax, dword ptr [0x663080]
    eax = (uint32_t)(M32((uint32_t)(0x663080u)));
L_0051739f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005173a1:  // jne 0x5173c2
    if (!f.zf) goto L_005173c2;
L_005173a3:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_005173a6:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_005173aa:  // shr eax, 1
    t0 = lshr<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_005173ac:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005173ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005173ae:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005173af:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005173b0:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_005173b8:  // call 0x517fa0
    t0 = 0x00517fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005173bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005173bd:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_005173c0:  // jmp 0x517411
    goto L_00517411;
L_005173c2:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_005173c5:  // push 0x2ca
    t0 = 0x2cau; esp -= 4; M32(esp) = t0;
L_005173ca:  // push 0x63e46c
    t0 = 0x63e46cu; esp -= 4; M32(esp) = t0;
L_005173cf:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_005173d1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005173d2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005173d7:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005173dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005173dc:  // mov edx, dword ptr [esi + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_005173df:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_005173e3:  // shr edx, 1
    t0 = lshr<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_005173e5:  // mov edi, eax
    edi = (uint32_t)(eax);
L_005173e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005173e8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005173e9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005173ea:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005173eb:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_005173f3:  // call 0x517fa0
    t0 = 0x00517fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005173f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005173f8:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_005173fb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005173fc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005173fd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005173fe:  // call 0x517600
    t0 = 0x00517600u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00517403u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00517403:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00517406:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0051740b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051740c:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00517411u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00517411:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_00517417:  // mov edx, dword ptr [esi + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_0051741a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051741c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051741e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00517420:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00517421:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00517422:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517423:  // call dword ptr [ecx + 0x4c]
    t0 = M32((uint32_t)(ecx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00517426u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00517426:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00517427:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0051742c:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00517431u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00517431:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00517433:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00517434:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00517435:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00517436:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00517437:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00517438:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005172a0, 005172a0)
