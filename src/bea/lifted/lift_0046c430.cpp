// lifted from 0046c430 (FUN_0046c430, 1375 bytes, 351 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0046c430(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0046c430;
L_0046c430:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0046c432:  // push 0x5d28db
    t0 = 0x5d28dbu; esp -= 4; M32(esp) = t0;
L_0046c437:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0046c43d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046c43e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0046c445:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0046c448:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c449:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046c44a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046c44b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046c44c:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0046c44e:  // call 0x42d310
    t0 = 0x0042d310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c453u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c453:  // mov ecx, dword ptr [0x89c9b0]
    ecx = (uint32_t)(M32((uint32_t)(0x89c9b0u)));
L_0046c459:  // call 0x546b10
    t0 = 0x00546b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c45eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c45e:  // mov ecx, 0x8aa4e8
    ecx = (uint32_t)(0x8aa4e8u);
L_0046c463:  // call 0x4815c0
    t0 = 0x004815c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c468u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c468:  // lea eax, [ebp + 0x3a8]
    eax = (uint32_t)((uint32_t)(ebp + 0x3a8u));
L_0046c46e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0046c470:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0046c474:  // mov ecx, 0xbf800000
    ecx = (uint32_t)(0xbf800000u);
L_0046c479:  // mov dword ptr [eax], 0x3d4ccccd
    M32((uint32_t)(eax)) = (uint32_t)(0x3d4ccccdu);
L_0046c47f:  // lea eax, [ebp + 0x38]
    eax = (uint32_t)((uint32_t)(ebp + 0x38u));
L_0046c482:  // mov dword ptr [ebp + 0xf4], ebx
    M32((uint32_t)(ebp + 0xf4u)) = (uint32_t)(ebx);
L_0046c488:  // mov dword ptr [ebp + 0xec], 0x40400000
    M32((uint32_t)(ebp + 0xecu)) = (uint32_t)(0x40400000u);
L_0046c492:  // mov dword ptr [ebp + 0xc], ecx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(ecx);
L_0046c495:  // mov dword ptr [ebp + 0x48], ecx
    M32((uint32_t)(ebp + 0x48u)) = (uint32_t)(ecx);
L_0046c498:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0046c49c:  // mov byte ptr [eax], 1
    M8((uint32_t)(eax)) = (uint8_t)(0x1u);
L_0046c49f:  // mov dword ptr [ebp + 0xf0], 0x40400000
    M32((uint32_t)(ebp + 0xf0u)) = (uint32_t)(0x40400000u);
L_0046c4a9:  // mov dword ptr [ebp + 0x10], ebx
    M32((uint32_t)(ebp + 0x10u)) = (uint32_t)(ebx);
L_0046c4ac:  // mov dword ptr [ebp + 0x100], ebx
    M32((uint32_t)(ebp + 0x100u)) = (uint32_t)(ebx);
L_0046c4b2:  // mov dword ptr [ebp + 8], ebx
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(ebx);
L_0046c4b5:  // mov dword ptr [ebp + 0x14], ebx
    M32((uint32_t)(ebp + 0x14u)) = (uint32_t)(ebx);
L_0046c4b8:  // mov dword ptr [ebp + 0x298], 0x3f800000
    M32((uint32_t)(ebp + 0x298u)) = (uint32_t)(0x3f800000u);
L_0046c4c2:  // mov dword ptr [ebp + 0x20], 1
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(0x1u);
L_0046c4c9:  // mov dword ptr [ebp + 0x394], ebx
    M32((uint32_t)(ebp + 0x394u)) = (uint32_t)(ebx);
L_0046c4cf:  // mov dword ptr [ebp + 0x2e4], ebx
    M32((uint32_t)(ebp + 0x2e4u)) = (uint32_t)(ebx);
L_0046c4d5:  // mov dword ptr [ebp + 0x2e8], ebx
    M32((uint32_t)(ebp + 0x2e8u)) = (uint32_t)(ebx);
L_0046c4db:  // lea ecx, [ebp + 0x308]
    ecx = (uint32_t)((uint32_t)(ebp + 0x308u));
L_0046c4e1:  // mov eax, 0x2408
    eax = (uint32_t)(0x2408u);
L_0046c4e6:  // mov edx, dword ptr [eax + 0x660620]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x660620u)));
L_0046c4ec:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0046c4ef:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0046c4f1:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0046c4f4:  // cmp eax, 0x2488
    t0 = lsub<32>(eax, 0x2488u, f);
L_0046c4f9:  // jl 0x46c4e6
    if ((f.sf != f.of)) goto L_0046c4e6;
L_0046c4fb:  // lea eax, [ebp + 0x2a4]
    eax = (uint32_t)((uint32_t)(ebp + 0x2a4u));
L_0046c501:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_0046c506:  // mov dword ptr [eax + 0x20], ebx
    M32((uint32_t)(eax + 0x20u)) = (uint32_t)(ebx);
L_0046c509:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0046c50b:  // mov dword ptr [eax + 0x72c], ebx
    M32((uint32_t)(eax + 0x72cu)) = (uint32_t)(ebx);
L_0046c511:  // mov dword ptr [eax + 0x10], ebx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebx);
L_0046c514:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0046c517:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0046c518:  // jne 0x46c506
    if (!f.zf) goto L_0046c506;
L_0046c51a:  // lea eax, [ebp + 0x3c]
    eax = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_0046c51d:  // lea esi, [ebp + 0x4c]
    esi = (uint32_t)((uint32_t)(ebp + 0x4cu));
L_0046c520:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0046c524:  // mov dword ptr [ebp + 0x40], ebx
    M32((uint32_t)(ebp + 0x40u)) = (uint32_t)(ebx);
L_0046c527:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0046c529:  // lea eax, [ebp + 0x40]
    eax = (uint32_t)((uint32_t)(ebp + 0x40u));
L_0046c52c:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0046c530:  // mov dword ptr [ebp + 0x3b8], ebx
    M32((uint32_t)(ebp + 0x3b8u)) = (uint32_t)(ebx);
L_0046c536:  // mov dword ptr [ebp + 0x3bc], ebx
    M32((uint32_t)(ebp + 0x3bcu)) = (uint32_t)(ebx);
L_0046c53c:  // mov dword ptr [ebp + 0x304], ebx
    M32((uint32_t)(ebp + 0x304u)) = (uint32_t)(ebx);
L_0046c542:  // mov dword ptr [ebp + 0x114], ebx
    M32((uint32_t)(ebp + 0x114u)) = (uint32_t)(ebx);
L_0046c548:  // mov dword ptr [ebp + 0x44], ebx
    M32((uint32_t)(ebp + 0x44u)) = (uint32_t)(ebx);
L_0046c54b:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0046c54e:  // mov dword ptr [esi], ebx
    M32((uint32_t)(esi)) = (uint32_t)(ebx);
L_0046c550:  // mov ecx, 0x12
    ecx = (uint32_t)(0x12u);
L_0046c555:  // lea edi, [esi + 8]
    edi = (uint32_t)((uint32_t)(esi + 0x8u));
L_0046c558:  // mov dword ptr [esi + 4], eax
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(eax);
L_0046c55b:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0046c55e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0046c560:  // lea esi, [ebp + 0x9c]
    esi = (uint32_t)((uint32_t)(ebp + 0x9cu));
L_0046c566:  // mov ecx, 0x12
    ecx = (uint32_t)(0x12u);
L_0046c56b:  // mov dword ptr [esi], ebx
    M32((uint32_t)(esi)) = (uint32_t)(ebx);
L_0046c56d:  // lea edi, [esi + 8]
    edi = (uint32_t)((uint32_t)(esi + 0x8u));
L_0046c570:  // mov dword ptr [esi + 4], eax
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(eax);
L_0046c573:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0046c575:  // mov ecx, 0x66ffb0
    ecx = (uint32_t)(0x66ffb0u);
L_0046c57a:  // mov dword ptr [ebp + 0x34], ebx
    M32((uint32_t)(ebp + 0x34u)) = (uint32_t)(ebx);
L_0046c57d:  // call 0x441e40
    t0 = 0x00441e40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c582u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c582:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0046c587:  // call 0x44b060
    t0 = 0x0044b060u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c58cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c58c:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0046c591:  // mov dword ptr [0x9c6400], 0
    M32((uint32_t)(0x9c6400u)) = (uint32_t)(0x0u);
L_0046c59b:  // mov dword ptr [0x9c63f4], ebx
    M32((uint32_t)(0x9c63f4u)) = (uint32_t)(ebx);
L_0046c5a1:  // mov dword ptr [0x9c63f0], ebx
    M32((uint32_t)(0x9c63f0u)) = (uint32_t)(ebx);
L_0046c5a7:  // mov dword ptr [0x9c6404], ebx
    M32((uint32_t)(0x9c6404u)) = (uint32_t)(ebx);
L_0046c5ad:  // call 0x4919b0
    t0 = 0x004919b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c5b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c5b2:  // mov ecx, 0x679fa8
    ecx = (uint32_t)(0x679fa8u);
L_0046c5b7:  // call 0x4729e0
    t0 = 0x004729e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c5bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c5bc:  // mov ecx, 0x9c7490
    ecx = (uint32_t)(0x9c7490u);
L_0046c5c1:  // call 0x5515a0
    t0 = 0x005515a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c5c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c5c6:  // mov ecx, 0x89c590
    ecx = (uint32_t)(0x89c590u);
L_0046c5cb:  // call 0x538860
    t0 = 0x00538860u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c5d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c5d0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c5d1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c5d2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c5d3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046c5d4:  // lea eax, [ebp + 0xec]
    eax = (uint32_t)((uint32_t)(ebp + 0xecu));
L_0046c5da:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_0046c5df:  // push 0x7d1
    t0 = 0x7d1u; esp -= 4; M32(esp) = t0;
L_0046c5e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046c5e5:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0046c5ea:  // mov dword ptr [ebp + 0x2c], ebx
    M32((uint32_t)(ebp + 0x2cu)) = (uint32_t)(ebx);
L_0046c5ed:  // mov dword ptr [ebp + 0x28], edi
    M32((uint32_t)(ebp + 0x28u)) = (uint32_t)(edi);
L_0046c5f0:  // call 0x44b2d0
    t0 = 0x0044b2d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c5f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c5f5:  // push 0x1f9
    t0 = 0x1f9u; esp -= 4; M32(esp) = t0;
L_0046c5fa:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c5ff:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0046c602:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_0046c604:  // push 0x800c
    t0 = 0x800cu; esp -= 4; M32(esp) = t0;
L_0046c609:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c60e:  // mov dword ptr [ebp + 0x9cc], ebx
    M32((uint32_t)(ebp + 0x9ccu)) = (uint32_t)(ebx);
L_0046c614:  // mov dword ptr [ebp + 0x9fc], esi
    M32((uint32_t)(ebp + 0x9fcu)) = (uint32_t)(esi);
L_0046c61a:  // mov dword ptr [ebp + 0xa00], esi
    M32((uint32_t)(ebp + 0xa00u)) = (uint32_t)(esi);
L_0046c620:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c625u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c625:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c629:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c62b:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0046c62f:  // je 0x46c63b
    if (f.zf) goto L_0046c63b;
L_0046c631:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c632:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c634:  // call 0x44c3d0
    t0 = 0x0044c3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c639u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c639:  // jmp 0x46c63d
    goto L_0046c63d;
L_0046c63b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c63d:  // push 0x1fa
    t0 = 0x1fau; esp -= 4; M32(esp) = t0;
L_0046c642:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c647:  // push 0x2b
    t0 = 0x2bu; esp -= 4; M32(esp) = t0;
L_0046c649:  // push 0x800c
    t0 = 0x800cu; esp -= 4; M32(esp) = t0;
L_0046c64e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c653:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c657:  // mov dword ptr [ebp + 0x2e4], eax
    M32((uint32_t)(ebp + 0x2e4u)) = (uint32_t)(eax);
L_0046c65d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c662u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c662:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c666:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c668:  // mov dword ptr [esp + 0x2c], edi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edi);
L_0046c66c:  // je 0x46c678
    if (f.zf) goto L_0046c678;
L_0046c66e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046c66f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c671:  // call 0x44c3d0
    t0 = 0x0044c3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c676u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c676:  // jmp 0x46c67a
    goto L_0046c67a;
L_0046c678:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c67a:  // push 0x1fb
    t0 = 0x1fbu; esp -= 4; M32(esp) = t0;
L_0046c67f:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c684:  // push 0x29
    t0 = 0x29u; esp -= 4; M32(esp) = t0;
L_0046c686:  // push 0x2c8
    t0 = 0x2c8u; esp -= 4; M32(esp) = t0;
L_0046c68b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c690:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c694:  // mov dword ptr [ebp + 0x2e8], eax
    M32((uint32_t)(ebp + 0x2e8u)) = (uint32_t)(eax);
L_0046c69a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c69fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c69f:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c6a3:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c6a5:  // mov dword ptr [esp + 0x2c], 2
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x2u);
L_0046c6ad:  // je 0x46c6b8
    if (f.zf) goto L_0046c6b8;
L_0046c6af:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c6b1:  // call 0x4b71e0
    t0 = 0x004b71e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c6b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c6b6:  // jmp 0x46c6ba
    goto L_0046c6ba;
L_0046c6b8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c6ba:  // push 0x1fc
    t0 = 0x1fcu; esp -= 4; M32(esp) = t0;
L_0046c6bf:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c6c4:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_0046c6c6:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_0046c6c8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c6cd:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c6d1:  // mov dword ptr [ebp + 0x2ec], eax
    M32((uint32_t)(ebp + 0x2ecu)) = (uint32_t)(eax);
L_0046c6d7:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c6dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c6dc:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c6e0:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c6e2:  // mov dword ptr [esp + 0x2c], 3
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x3u);
L_0046c6ea:  // je 0x46c6f5
    if (f.zf) goto L_0046c6f5;
L_0046c6ec:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c6ee:  // call 0x4b8dd0
    t0 = 0x004b8dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c6f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c6f3:  // jmp 0x46c6f7
    goto L_0046c6f7;
L_0046c6f5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c6f7:  // push 0x1fd
    t0 = 0x1fdu; esp -= 4; M32(esp) = t0;
L_0046c6fc:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c701:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_0046c703:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_0046c705:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c70a:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c70e:  // mov dword ptr [ebp + 0x2f0], eax
    M32((uint32_t)(ebp + 0x2f0u)) = (uint32_t)(eax);
L_0046c714:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c719u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c719:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c71d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c71f:  // mov dword ptr [esp + 0x2c], 4
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x4u);
L_0046c727:  // je 0x46c733
    if (f.zf) goto L_0046c733;
L_0046c729:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c72a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c72c:  // call 0x4cde60
    t0 = 0x004cde60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c731u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c731:  // jmp 0x46c735
    goto L_0046c735;
L_0046c733:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c735:  // push 0x1ff
    t0 = 0x1ffu; esp -= 4; M32(esp) = t0;
L_0046c73a:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c73f:  // push 0x78
    t0 = 0x78u; esp -= 4; M32(esp) = t0;
L_0046c741:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_0046c743:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c748:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c74c:  // mov dword ptr [ebp + 0x2f4], eax
    M32((uint32_t)(ebp + 0x2f4u)) = (uint32_t)(eax);
L_0046c752:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c757u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c757:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c75b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c75d:  // mov dword ptr [esp + 0x2c], 5
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x5u);
L_0046c765:  // je 0x46c770
    if (f.zf) goto L_0046c770;
L_0046c767:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c769:  // call 0x47fab0
    t0 = 0x0047fab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c76eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c76e:  // jmp 0x46c772
    goto L_0046c772;
L_0046c770:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c772:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_0046c777:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c77c:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_0046c77e:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0046c780:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c785:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c789:  // mov dword ptr [ebp + 0x2f8], eax
    M32((uint32_t)(ebp + 0x2f8u)) = (uint32_t)(eax);
L_0046c78f:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c794u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c794:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c798:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c79a:  // mov dword ptr [esp + 0x2c], 6
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x6u);
L_0046c7a2:  // je 0x46c7ad
    if (f.zf) goto L_0046c7ad;
L_0046c7a4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c7a6:  // call 0x48f540
    t0 = 0x0048f540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c7abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c7ab:  // jmp 0x46c7af
    goto L_0046c7af;
L_0046c7ad:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c7af:  // push 0x201
    t0 = 0x201u; esp -= 4; M32(esp) = t0;
L_0046c7b4:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_0046c7b9:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0046c7be:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0046c7c0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046c7c5:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c7c9:  // mov dword ptr [ebp + 0x2fc], eax
    M32((uint32_t)(ebp + 0x2fcu)) = (uint32_t)(eax);
L_0046c7cf:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c7d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c7d4:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0046c7d8:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046c7da:  // mov dword ptr [esp + 0x2c], 7
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x7u);
L_0046c7e2:  // je 0x46c7f2
    if (f.zf) goto L_0046c7f2;
L_0046c7e4:  // push 0x1e240
    t0 = 0x1e240u; esp -= 4; M32(esp) = t0;
L_0046c7e9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0046c7eb:  // call 0x4de8c0
    t0 = 0x004de8c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c7f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c7f0:  // jmp 0x46c7f4
    goto L_0046c7f4;
L_0046c7f2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046c7f4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c7f5:  // push 0x46bef0
    t0 = 0x46bef0u; esp -= 4; M32(esp) = t0;
L_0046c7fa:  // push 0x62bed4
    t0 = 0x62bed4u; esp -= 4; M32(esp) = t0;
L_0046c7ff:  // push 0x62bec4
    t0 = 0x62bec4u; esp -= 4; M32(esp) = t0;
L_0046c804:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c809:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_0046c80d:  // mov dword ptr [ebp + 0x304], eax
    M32((uint32_t)(ebp + 0x304u)) = (uint32_t)(eax);
L_0046c813:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c818u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c818:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c819:  // push 0x46c0b0
    t0 = 0x46c0b0u; esp -= 4; M32(esp) = t0;
L_0046c81e:  // push 0x62bea8
    t0 = 0x62bea8u; esp -= 4; M32(esp) = t0;
L_0046c823:  // push 0x62be98
    t0 = 0x62be98u; esp -= 4; M32(esp) = t0;
L_0046c828:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c82d:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c832u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c832:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c833:  // push 0x46c180
    t0 = 0x46c180u; esp -= 4; M32(esp) = t0;
L_0046c838:  // push 0x62be88
    t0 = 0x62be88u; esp -= 4; M32(esp) = t0;
L_0046c83d:  // push 0x62be84
    t0 = 0x62be84u; esp -= 4; M32(esp) = t0;
L_0046c842:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c847:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c84cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c84c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c84d:  // push 0x46c200
    t0 = 0x46c200u; esp -= 4; M32(esp) = t0;
L_0046c852:  // push 0x62be74
    t0 = 0x62be74u; esp -= 4; M32(esp) = t0;
L_0046c857:  // push 0x62be6c
    t0 = 0x62be6cu; esp -= 4; M32(esp) = t0;
L_0046c85c:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c861:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c866u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c866:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c867:  // push 0x46be10
    t0 = 0x46be10u; esp -= 4; M32(esp) = t0;
L_0046c86c:  // push 0x62be60
    t0 = 0x62be60u; esp -= 4; M32(esp) = t0;
L_0046c871:  // push 0x62be5c
    t0 = 0x62be5cu; esp -= 4; M32(esp) = t0;
L_0046c876:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c87b:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c880u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c880:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c881:  // push 0x46bea0
    t0 = 0x46bea0u; esp -= 4; M32(esp) = t0;
L_0046c886:  // push 0x62be34
    t0 = 0x62be34u; esp -= 4; M32(esp) = t0;
L_0046c88b:  // push 0x62be24
    t0 = 0x62be24u; esp -= 4; M32(esp) = t0;
L_0046c890:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c895:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c89au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c89a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c89b:  // push 0x46c120
    t0 = 0x46c120u; esp -= 4; M32(esp) = t0;
L_0046c8a0:  // push 0x62be08
    t0 = 0x62be08u; esp -= 4; M32(esp) = t0;
L_0046c8a5:  // push 0x62bdfc
    t0 = 0x62bdfcu; esp -= 4; M32(esp) = t0;
L_0046c8aa:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c8af:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c8b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c8b4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c8b5:  // push 0x46c150
    t0 = 0x46c150u; esp -= 4; M32(esp) = t0;
L_0046c8ba:  // push 0x62bde0
    t0 = 0x62bde0u; esp -= 4; M32(esp) = t0;
L_0046c8bf:  // push 0x62bdd4
    t0 = 0x62bdd4u; esp -= 4; M32(esp) = t0;
L_0046c8c4:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c8c9:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c8ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c8ce:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c8cf:  // push 0x46be80
    t0 = 0x46be80u; esp -= 4; M32(esp) = t0;
L_0046c8d4:  // push 0x62bda8
    t0 = 0x62bda8u; esp -= 4; M32(esp) = t0;
L_0046c8d9:  // push 0x62bd98
    t0 = 0x62bd98u; esp -= 4; M32(esp) = t0;
L_0046c8de:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c8e3:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c8e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c8e8:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0046c8ec:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c8ed:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c8ee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046c8ef:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0046c8f1:  // push 0x62bd6c
    t0 = 0x62bd6cu; esp -= 4; M32(esp) = t0;
L_0046c8f6:  // push 0x62bd50
    t0 = 0x62bd50u; esp -= 4; M32(esp) = t0;
L_0046c8fb:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c900:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c905u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c905:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0046c909:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c90a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c90b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046c90c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0046c90e:  // push 0x62bd2c
    t0 = 0x62bd2cu; esp -= 4; M32(esp) = t0;
L_0046c913:  // push 0x62bd10
    t0 = 0x62bd10u; esp -= 4; M32(esp) = t0;
L_0046c918:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c91d:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c922u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c922:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0046c926:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c927:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c928:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046c929:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0046c92b:  // push 0x62bcf0
    t0 = 0x62bcf0u; esp -= 4; M32(esp) = t0;
L_0046c930:  // push 0x62bcd4
    t0 = 0x62bcd4u; esp -= 4; M32(esp) = t0;
L_0046c935:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c93a:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c93fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c93f:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0046c943:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c944:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046c945:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046c946:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046c948:  // push 0x62bcb0
    t0 = 0x62bcb0u; esp -= 4; M32(esp) = t0;
L_0046c94d:  // push 0x62bca0
    t0 = 0x62bca0u; esp -= 4; M32(esp) = t0;
L_0046c952:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046c957:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c95cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c95c:  // mov ecx, 0x81
    ecx = (uint32_t)(0x81u);
L_0046c961:  // mov esi, 0x9c405c
    esi = (uint32_t)(0x9c405cu);
L_0046c966:  // mov edi, 0x8a9e58
    edi = (uint32_t)(0x8a9e58u);
L_0046c96b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046c96d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0046c96f:  // call 0x42da00
    t0 = 0x0042da00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046c974u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046c974:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0046c978:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0046c97b:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0046c980:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0046c987:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0046c988:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046c989:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046c98a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046c98b:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0046c98e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0046c430, 0046c430)
