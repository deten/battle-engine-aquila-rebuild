// lifted from 005282b0 (FUN_005282b0, 427 bytes, 129 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005282b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005282b0;
L_005282b0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005282b2:  // push 0x5d692b
    t0 = 0x5d692bu; esp -= 4; M32(esp) = t0;
L_005282b7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_005282bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005282be:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_005282c5:  // sub esp, 0x54
    t0 = lsub<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_005282c8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005282ca:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005282cb:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_005282cf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005282d0:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_005282d4:  // mov ecx, 9
    ecx = (uint32_t)(0x9u);
L_005282d9:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_005282dd:  // lea edi, [esp + 0x38]
    edi = (uint32_t)((uint32_t)(esp + 0x38u));
L_005282e1:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_005282e5:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_005282e7:  // mov word ptr [esp + 0x34], ax
    M16((uint32_t)(esp + 0x34u)) = (uint16_t)((eax & 0xffffu));
L_005282ec:  // mov word ptr [esp + 0x24], 1
    M16((uint32_t)(esp + 0x24u)) = (uint16_t)(0x1u);
L_005282f3:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_005282f5:  // mov eax, dword ptr [0x896a48]
    eax = (uint32_t)(M32((uint32_t)(0x896a48u)));
L_005282fa:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_005282fe:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00528300:  // mov word ptr [esp + 0x26], 2
    M16((uint32_t)(esp + 0x26u)) = (uint16_t)(0x2u);
L_00528307:  // mov dword ptr [esp + 0x28], 0xac44
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xac44u);
L_0052830f:  // mov word ptr [esp + 0x32], 0x10
    M16((uint32_t)(esp + 0x32u)) = (uint16_t)(0x10u);
L_00528316:  // mov word ptr [esp + 0x30], 4
    M16((uint32_t)(esp + 0x30u)) = (uint16_t)(0x4u);
L_0052831d:  // mov dword ptr [esp + 0x2c], 0x2b110
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x2b110u);
L_00528325:  // mov word ptr [esp + 0x34], bx
    M16((uint32_t)(esp + 0x34u)) = (uint16_t)((ebx & 0xffffu));
L_0052832a:  // mov dword ptr [esp + 0x38], 0x24
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x24u);
L_00528332:  // mov dword ptr [esp + 0x40], 0x80000
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x80000u);
L_0052833a:  // mov dword ptr [esp + 0x3c], 0x188
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x188u);
L_00528342:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_00528346:  // je 0x52844a
    if (f.zf) goto L_0052844a;
L_0052834c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052834e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052834f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528350:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00528354:  // push 0x89bec8
    t0 = 0x89bec8u; esp -= 4; M32(esp) = t0;
L_00528359:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052835a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052835b:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052835eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052835e:  // mov esi, dword ptr [0x5d8128]
    esi = (uint32_t)(M32((uint32_t)(0x5d8128u)));
L_00528364:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528365:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528366:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528367:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528368:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052836au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052836a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052836b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052836c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052836d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052836e:  // mov dword ptr [0x89bec4], eax
    M32((uint32_t)(0x89bec4u)) = (uint32_t)(eax);
L_00528373:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00528375u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00528375:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528376:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528377:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528378:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528379:  // mov dword ptr [0x89bec0], eax
    M32((uint32_t)(0x89bec0u)) = (uint32_t)(eax);
L_0052837e:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00528380u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00528380:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528381:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528382:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528383:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528384:  // mov dword ptr [0x89bebc], eax
    M32((uint32_t)(0x89bebcu)) = (uint32_t)(eax);
L_00528389:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052838bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052838b:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0052838f:  // mov dword ptr [0x89beb8], eax
    M32((uint32_t)(0x89beb8u)) = (uint32_t)(eax);
L_00528394:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00528395:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528396:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528397:  // push 0x527f50
    t0 = 0x527f50u; esp -= 4; M32(esp) = t0;
L_0052839c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052839d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052839e:  // call dword ptr [0x5d812c]
    t0 = M32((uint32_t)(0x5d812cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005283a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005283a4:  // mov dword ptr [0x89beb4], eax
    M32((uint32_t)(0x89beb4u)) = (uint32_t)(eax);
L_005283a9:  // mov eax, dword ptr [0x89bec8]
    eax = (uint32_t)(M32((uint32_t)(0x89bec8u)));
L_005283ae:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_005283b2:  // mov dword ptr [esp + 0xc], ebx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ebx);
L_005283b6:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005283b8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005283b9:  // push 0x60c08c
    t0 = 0x60c08cu; esp -= 4; M32(esp) = t0;
L_005283be:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005283bf:  // call dword ptr [ecx]
    t0 = M32((uint32_t)(ecx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005283c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005283c1:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_005283c3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005283c4:  // jl 0x5283fa
    if ((f.sf != f.of)) goto L_005283fa;
L_005283c6:  // mov eax, dword ptr [0x89bec4]
    eax = (uint32_t)(M32((uint32_t)(0x89bec4u)));
L_005283cb:  // mov ecx, dword ptr [0x89bec0]
    ecx = (uint32_t)(M32((uint32_t)(0x89bec0u)));
L_005283d1:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_005283d5:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_005283d9:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_005283dd:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_005283e1:  // mov dword ptr [esp + 0x14], 0x40000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x40000u);
L_005283e9:  // mov dword ptr [esp + 0x1c], 0x7fffe
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x7fffeu);
L_005283f1:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005283f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005283f4:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005283f6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005283f7:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005283fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005283fa:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_005283fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005283ff:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00528401:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00528404u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00528404:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00528405:  // push 0x662b2c
    t0 = 0x662b2cu; esp -= 4; M32(esp) = t0;
L_0052840a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052840b:  // push 0x22f0
    t0 = 0x22f0u; esp -= 4; M32(esp) = t0;
L_00528410:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00528415:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052841au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052841a:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0052841e:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00528420:  // mov dword ptr [esp + 0x64], ebx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ebx);
L_00528424:  // je 0x52842f
    if (f.zf) goto L_0052842f;
L_00528426:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00528428:  // call 0x5245a0
    t0 = 0x005245a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052842du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052842d:  // jmp 0x528431
    goto L_00528431;
L_0052842f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00528431:  // mov dword ptr [0x89bfd4], eax
    M32((uint32_t)(0x89bfd4u)) = (uint32_t)(eax);
L_00528436:  // mov ecx, 0x40
    ecx = (uint32_t)(0x40u);
L_0052843b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052843d:  // mov edi, 0x89bed4
    edi = (uint32_t)(0x89bed4u);
L_00528442:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_00528444:  // mov dword ptr [0x89bed0], ebx
    M32((uint32_t)(0x89bed0u)) = (uint32_t)(ebx);
L_0052844a:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0052844e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052844f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00528450:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00528457:  // add esp, 0x60
    t0 = ladd<32>(esp, 0x60u, f);
    esp = (uint32_t)(t0);
L_0052845a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005282b0, 005282b0)
