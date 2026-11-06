// lifted from 00529350 (FUN_00529350, 5026 bytes, 1475 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00529350(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00529350;
L_00529350:  // sub esp, 0xb14
    t0 = lsub<32>(esp, 0xb14u, f);
    esp = (uint32_t)(t0);
L_00529356:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00529357:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00529358:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529359:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0052935b:  // push 0x64c1ec
    t0 = 0x64c1ecu; esp -= 4; M32(esp) = t0;
L_00529360:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_00529364:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529369u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529369:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0052936b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0052936e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00529370:  // lea edx, [esp + 0x174]
    edx = (uint32_t)((uint32_t)(esp + 0x174u));
L_00529377:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00529379:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0052937b:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0052937d:  // push 0x64c1e8
    t0 = 0x64c1e8u; esp -= 4; M32(esp) = t0;
L_00529382:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00529384:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00529386:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00529388:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0052938b:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0052938d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0052938f:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00529392:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00529394:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529399u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529399:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0052939b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0052939e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005293a0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005293a3:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005293a5:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005293a7:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_005293a9:  // lea edx, [esp + 0x180]
    edx = (uint32_t)((uint32_t)(esp + 0x180u));
L_005293b0:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_005293b2:  // mov esi, edi
    esi = (uint32_t)(edi);
L_005293b4:  // mov edi, edx
    edi = (uint32_t)(edx);
L_005293b6:  // mov dword ptr [esp + 0x58], 1
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x1u);
L_005293be:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_005293c1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005293c3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005293c5:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_005293cb:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_005293ce:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005293cf:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_005293d1:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005293d3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005293d5:  // mov dword ptr [esp + 0x60], 2
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x2u);
L_005293dd:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_005293e1:  // mov dword ptr [esp + 0x48], edi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edi);
L_005293e5:  // mov dword ptr [esp + 0x3c], edi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edi);
L_005293e9:  // mov dword ptr [esp + 0x38], edi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edi);
L_005293ed:  // call dword ptr [ecx + 0x10]
    t0 = M32((uint32_t)(ecx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005293f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005293f0:  // mov esi, eax
    esi = (uint32_t)(eax);
L_005293f2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005293f3:  // push 0x64c1cc
    t0 = 0x64c1ccu; esp -= 4; M32(esp) = t0;
L_005293f8:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005293fd:  // mov dword ptr [esp + 0x58], esi
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(esi);
L_00529401:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529406u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529406:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529409:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_0052940b:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0052940f:  // jbe 0x52a5c2
    if ((f.cf || f.zf)) goto L_0052a5c2;
L_00529415:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529416:  // mov dword ptr [esp + 0x74], 0x14
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x14u);
L_0052941e:  // mov dword ptr [esp + 0x78], 0x16
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x16u);
L_00529426:  // mov dword ptr [esp + 0x7c], 0x15
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x15u);
L_0052942e:  // mov dword ptr [esp + 0x80], 0x17
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x17u);
L_00529439:  // mov ecx, dword ptr [ebp + 0x32e3c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x32e3cu)));
L_0052943f:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00529443:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_00529446:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00529449:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0052944b:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0052944e:  // lea edx, [eax + eax*8]
    edx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00529451:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_00529457:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00529459:  // lea ebx, [ebp + edx*4 + 4]
    ebx = (uint32_t)((uint32_t)(ebp + edx * 4u + 0x4u));
L_0052945d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052945e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00529460:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529461:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529462:  // mov dword ptr [esp + 0x44], ebx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebx);
L_00529466:  // call dword ptr [ecx + 0x14]
    t0 = M32((uint32_t)(ecx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529469u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529469:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052946a:  // push 0x64c1c0
    t0 = 0x64c1c0u; esp -= 4; M32(esp) = t0;
L_0052946f:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529474:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529479u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529479:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052947c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052947d:  // push 0x64c1b4
    t0 = 0x64c1b4u; esp -= 4; M32(esp) = t0;
L_00529482:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529487:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052948cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052948c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052948f:  // lea eax, [ebx + 0x200]
    eax = (uint32_t)((uint32_t)(ebx + 0x200u));
L_00529495:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_00529499:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052949a:  // push 0x64c1a8
    t0 = 0x64c1a8u; esp -= 4; M32(esp) = t0;
L_0052949f:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005294a4:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005294a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005294a9:  // mov edx, dword ptr [ebx + 0x420]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x420u)));
L_005294af:  // mov eax, dword ptr [ebx + 0x424]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x424u)));
L_005294b5:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_005294b8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005294b9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005294ba:  // push 0x64c194
    t0 = 0x64c194u; esp -= 4; M32(esp) = t0;
L_005294bf:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005294c4:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005294c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005294c9:  // mov ecx, dword ptr [ebx + 0x434]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x434u)));
L_005294cf:  // mov edx, dword ptr [ebx + 0x430]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x430u)));
L_005294d5:  // mov eax, dword ptr [ebx + 0x42c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x42cu)));
L_005294db:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_005294de:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005294df:  // mov ecx, dword ptr [ebx + 0x428]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x428u)));
L_005294e5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005294e6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005294e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005294e8:  // push 0x64c16c
    t0 = 0x64c16cu; esp -= 4; M32(esp) = t0;
L_005294ed:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005294f2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005294f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005294f7:  // mov edx, dword ptr [ebx + 0x448]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x448u)));
L_005294fd:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00529500:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00529501:  // push 0x64c160
    t0 = 0x64c160u; esp -= 4; M32(esp) = t0;
L_00529506:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052950b:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529510u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529510:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_00529516:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529519:  // lea esi, [ebx + 0x44c]
    esi = (uint32_t)((uint32_t)(ebx + 0x44cu));
L_0052951f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00529521:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00529522:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529523:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529524:  // call dword ptr [ecx + 0x20]
    t0 = M32((uint32_t)(ecx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529527u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529527:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0052952a:  // cmp eax, 0x19
    t0 = lsub<32>(eax, 0x19u, f);
L_0052952d:  // jg 0x529568
    if ((!f.zf && f.sf == f.of)) goto L_00529568;
L_0052952f:  // je 0x529561
    if (f.zf) goto L_00529561;
L_00529531:  // cmp eax, 0x17
    t0 = lsub<32>(eax, 0x17u, f);
L_00529534:  // ja 0x529599
    if ((!f.cf && !f.zf)) goto L_00529599;
L_00529536:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00529538:  // mov dl, byte ptr [eax + 0x52a708]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x52a708u))) & 0xffu);
L_0052953e:  // jmp dword ptr [edx*4 + 0x52a6f4]
    t0 = M32((uint32_t)(edx * 4u + 0x52a6f4u));
    switch (t0) {
    case 0x00529545u: goto L_00529545;
    case 0x0052954cu: goto L_0052954c;
    case 0x00529553u: goto L_00529553;
    case 0x0052955au: goto L_0052955a;
    case 0x00529599u: goto L_00529599;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00529545:  // mov eax, 0x64c150
    eax = (uint32_t)(0x64c150u);
L_0052954a:  // jmp 0x5295a5
    goto L_005295a5;
L_0052954c:  // mov eax, 0x64c140
    eax = (uint32_t)(0x64c140u);
L_00529551:  // jmp 0x5295a5
    goto L_005295a5;
L_00529553:  // mov eax, 0x64c130
    eax = (uint32_t)(0x64c130u);
L_00529558:  // jmp 0x5295a5
    goto L_005295a5;
L_0052955a:  // mov eax, 0x64c120
    eax = (uint32_t)(0x64c120u);
L_0052955f:  // jmp 0x5295a5
    goto L_005295a5;
L_00529561:  // mov eax, 0x64c110
    eax = (uint32_t)(0x64c110u);
L_00529566:  // jmp 0x5295a5
    goto L_005295a5;
L_00529568:  // cmp eax, 0x32545844
    t0 = lsub<32>(eax, 0x32545844u, f);
L_0052956d:  // jg 0x529592
    if ((!f.zf && f.sf == f.of)) goto L_00529592;
L_0052956f:  // je 0x52958b
    if (f.zf) goto L_0052958b;
L_00529571:  // cmp eax, 0x1a
    t0 = lsub<32>(eax, 0x1au, f);
L_00529574:  // je 0x529584
    if (f.zf) goto L_00529584;
L_00529576:  // cmp eax, 0x31545844
    t0 = lsub<32>(eax, 0x31545844u, f);
L_0052957b:  // jne 0x529599
    if (!f.zf) goto L_00529599;
L_0052957d:  // mov eax, 0x64c104
    eax = (uint32_t)(0x64c104u);
L_00529582:  // jmp 0x5295a5
    goto L_005295a5;
L_00529584:  // mov eax, 0x64c0f4
    eax = (uint32_t)(0x64c0f4u);
L_00529589:  // jmp 0x5295a5
    goto L_005295a5;
L_0052958b:  // mov eax, 0x64c0e8
    eax = (uint32_t)(0x64c0e8u);
L_00529590:  // jmp 0x5295a5
    goto L_005295a5;
L_00529592:  // cmp eax, 0x34545844
    t0 = lsub<32>(eax, 0x34545844u, f);
L_00529597:  // je 0x5295a0
    if (f.zf) goto L_005295a0;
L_00529599:  // mov eax, 0x64c0d4
    eax = (uint32_t)(0x64c0d4u);
L_0052959e:  // jmp 0x5295a5
    goto L_005295a5;
L_005295a0:  // mov eax, 0x64c0c8
    eax = (uint32_t)(0x64c0c8u);
L_005295a5:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_005295a8:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_005295aa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005295ab:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_005295ae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005295af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005295b0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005295b1:  // push 0x64c0b4
    t0 = 0x64c0b4u; esp -= 4; M32(esp) = t0;
L_005295b6:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005295bb:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005295c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005295c0:  // mov eax, dword ptr [ebx + 0x458]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x458u)));
L_005295c6:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_005295c9:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005295cb:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_005295cf:  // mov dword ptr [ebx + 0x45c], edi
    M32((uint32_t)(ebx + 0x45cu)) = (uint32_t)(edi);
L_005295d5:  // mov dword ptr [ebx + 0x5168], edi
    M32((uint32_t)(ebx + 0x5168u)) = (uint32_t)(edi);
L_005295db:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_005295df:  // mov dword ptr [esp + 0x194], eax
    M32((uint32_t)(esp + 0x194u)) = (uint32_t)(eax);
L_005295e6:  // mov dword ptr [esp + 0x20], 1
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x1u);
L_005295ee:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_005295f2:  // mov dword ptr [esp + 0x44], 4
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x4u);
L_005295fa:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005295fe:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_00529604:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_00529606:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052960a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052960c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052960d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052960e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052960f:  // mov dword ptr [esp + 0x38], esi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(esi);
L_00529613:  // call dword ptr [ecx + 0x18]
    t0 = M32((uint32_t)(ecx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529616u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529616:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00529618:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0052961c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052961e:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_00529622:  // jbe 0x529783
    if ((f.cf || f.zf)) goto L_00529783;
L_00529628:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0052962c:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0052962f:  // lea edx, [esp + eax*4 + 0x194]
    edx = (uint32_t)((uint32_t)(esp + eax * 4u + 0x194u));
L_00529636:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0052963a:  // lea edi, [esp + edi + 0x238]
    edi = (uint32_t)((uint32_t)(esp + edi + 0x238u));
L_00529641:  // jmp 0x529647
    goto L_00529647;
L_00529643:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00529647:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052964d:  // lea ebx, [esp + 0x64]
    ebx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00529651:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529652:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00529653:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00529657:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00529659:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052965a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052965b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052965c:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052965fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052965f:  // mov ebx, dword ptr [esp + 0x64]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00529663:  // cmp ebx, 0x280
    t0 = lsub<32>(ebx, 0x280u, f);
L_00529669:  // jb 0x529766
    if (f.cf) goto L_00529766;
L_0052966f:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00529673:  // cmp eax, 0x1e0
    t0 = lsub<32>(eax, 0x1e0u, f);
L_00529678:  // jb 0x529766
    if (f.cf) goto L_00529766;
L_0052967e:  // mov ecx, dword ptr [0x89c0ac]
    ecx = (uint32_t)(M32((uint32_t)(0x89c0acu)));
L_00529684:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00529686:  // jne 0x52969a
    if (!f.zf) goto L_0052969a;
L_00529688:  // lea edx, [eax*4]
    edx = (uint32_t)((uint32_t)(eax * 4u));
L_0052968f:  // lea eax, [ebx + ebx*2]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_00529692:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_00529694:  // jne 0x529766
    if (!f.zf) goto L_00529766;
L_0052969a:  // mov esi, dword ptr [esp + 0x70]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0052969e:  // cmp esi, 0x16
    t0 = lsub<32>(esi, 0x16u, f);
L_005296a1:  // je 0x5296b1
    if (f.zf) goto L_005296b1;
L_005296a3:  // cmp esi, 0x15
    t0 = lsub<32>(esi, 0x15u, f);
L_005296a6:  // je 0x5296b1
    if (f.zf) goto L_005296b1;
L_005296a8:  // cmp esi, 0x14
    t0 = lsub<32>(esi, 0x14u, f);
L_005296ab:  // jne 0x529766
    if (!f.zf) goto L_00529766;
L_005296b1:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_005296b5:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_005296b7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005296b9:  // jbe 0x52970e
    if ((f.cf || f.zf)) goto L_0052970e;
L_005296bb:  // lea ecx, [esp + 0x238]
    ecx = (uint32_t)((uint32_t)(esp + 0x238u));
L_005296c2:  // cmp dword ptr [ecx - 4], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xfffffffcu)), ebx, f);
L_005296c5:  // jne 0x529702
    if (!f.zf) goto L_00529702;
L_005296c7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_005296c9:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_005296cd:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_005296cf:  // jne 0x529702
    if (!f.zf) goto L_00529702;
L_005296d1:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_005296d4:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_005296d7:  // je 0x5296e7
    if (f.zf) goto L_005296e7;
L_005296d9:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_005296dc:  // je 0x5296e7
    if (f.zf) goto L_005296e7;
L_005296de:  // cmp eax, 0x14
    t0 = lsub<32>(eax, 0x14u, f);
L_005296e1:  // je 0x5296e7
    if (f.zf) goto L_005296e7;
L_005296e3:  // xor dl, dl
    t0 = llog<8>((edx & 0xffu) ^ (edx & 0xffu), f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005296e5:  // jmp 0x5296e9
    goto L_005296e9;
L_005296e7:  // mov dl, 1
    edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_005296e9:  // cmp esi, 0x16
    t0 = lsub<32>(esi, 0x16u, f);
L_005296ec:  // je 0x5296fc
    if (f.zf) goto L_005296fc;
L_005296ee:  // cmp esi, 0x15
    t0 = lsub<32>(esi, 0x15u, f);
L_005296f1:  // je 0x5296fc
    if (f.zf) goto L_005296fc;
L_005296f3:  // cmp esi, 0x14
    t0 = lsub<32>(esi, 0x14u, f);
L_005296f6:  // je 0x5296fc
    if (f.zf) goto L_005296fc;
L_005296f8:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005296fa:  // jmp 0x5296fe
    goto L_005296fe;
L_005296fc:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_005296fe:  // cmp dl, al
    t0 = lsub<8>((edx & 0xffu), (eax & 0xffu), f);
L_00529700:  // je 0x52970e
    if (f.zf) goto L_0052970e;
L_00529702:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00529706:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_00529707:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0052970a:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_0052970c:  // jb 0x5296c2
    if (f.cf) goto L_005296c2;
L_0052970e:  // cmp ebp, dword ptr [esp + 0x24]
    t0 = lsub<32>(ebp, M32((uint32_t)(esp + 0x24u)), f);
L_00529712:  // jne 0x529766
    if (!f.zf) goto L_00529766;
L_00529714:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00529718:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0052971c:  // mov dword ptr [edi - 4], ebx
    M32((uint32_t)(edi + 0xfffffffcu)) = (uint32_t)(ebx);
L_0052971f:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00529723:  // mov dword ptr [edi], eax
    M32((uint32_t)(edi)) = (uint32_t)(eax);
L_00529725:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00529727:  // mov dword ptr [edi + 8], esi
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(esi);
L_0052972a:  // mov dword ptr [edi + 4], eax
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(eax);
L_0052972d:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0052972e:  // add edi, 0x10
    t0 = ladd<32>(edi, 0x10u, f);
    edi = (uint32_t)(t0);
L_00529731:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_00529733:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_00529737:  // jae 0x52974e
    if (!f.cf) goto L_0052974e;
L_00529739:  // lea ecx, [esp + 0x194]
    ecx = (uint32_t)((uint32_t)(esp + 0x194u));
L_00529740:  // cmp esi, dword ptr [ecx]
    t0 = lsub<32>(esi, M32((uint32_t)(ecx)), f);
L_00529742:  // je 0x52974c
    if (f.zf) goto L_0052974c;
L_00529744:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00529745:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_00529748:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0052974a:  // jb 0x529740
    if (f.cf) goto L_00529740;
L_0052974c:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0052974e:  // jne 0x529766
    if (!f.zf) goto L_00529766;
L_00529750:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00529754:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00529758:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00529759:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_0052975b:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0052975e:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_00529762:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00529766:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0052976a:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0052976e:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00529772:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00529773:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00529775:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_00529779:  // jb 0x529643
    if (f.cf) goto L_00529643;
L_0052977f:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00529783:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529787:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0052978b:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0052978e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052978f:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_00529793:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00529797:  // jne 0x5295fa
    if (!f.zf) goto L_005295fa;
L_0052979d:  // push 0x529300
    t0 = 0x529300u; esp -= 4; M32(esp) = t0;
L_005297a2:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_005297a4:  // lea ecx, [esp + 0x23c]
    ecx = (uint32_t)((uint32_t)(esp + 0x23cu));
L_005297ab:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005297ac:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005297ad:  // call 0x55e7ae
    t0 = 0x0055e7aeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005297b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005297b2:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_005297b5:  // push 0x64c0a0
    t0 = 0x64c0a0u; esp -= 4; M32(esp) = t0;
L_005297ba:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005297bf:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005297c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005297c4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005297c7:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_005297c9:  // jbe 0x52987c
    if ((f.cf || f.zf)) goto L_0052987c;
L_005297cf:  // lea esi, [esp + 0x23c]
    esi = (uint32_t)((uint32_t)(esp + 0x23cu));
L_005297d6:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_005297d9:  // cmp eax, 0x19
    t0 = lsub<32>(eax, 0x19u, f);
L_005297dc:  // jg 0x529817
    if ((!f.zf && f.sf == f.of)) goto L_00529817;
L_005297de:  // je 0x529810
    if (f.zf) goto L_00529810;
L_005297e0:  // cmp eax, 0x17
    t0 = lsub<32>(eax, 0x17u, f);
L_005297e3:  // ja 0x529848
    if ((!f.cf && !f.zf)) goto L_00529848;
L_005297e5:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_005297e7:  // mov dl, byte ptr [eax + 0x52a734]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x52a734u))) & 0xffu);
L_005297ed:  // jmp dword ptr [edx*4 + 0x52a720]
    t0 = M32((uint32_t)(edx * 4u + 0x52a720u));
    switch (t0) {
    case 0x005297f4u: goto L_005297f4;
    case 0x005297fbu: goto L_005297fb;
    case 0x00529802u: goto L_00529802;
    case 0x00529809u: goto L_00529809;
    case 0x00529848u: goto L_00529848;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_005297f4:  // mov eax, 0x64c150
    eax = (uint32_t)(0x64c150u);
L_005297f9:  // jmp 0x529854
    goto L_00529854;
L_005297fb:  // mov eax, 0x64c140
    eax = (uint32_t)(0x64c140u);
L_00529800:  // jmp 0x529854
    goto L_00529854;
L_00529802:  // mov eax, 0x64c130
    eax = (uint32_t)(0x64c130u);
L_00529807:  // jmp 0x529854
    goto L_00529854;
L_00529809:  // mov eax, 0x64c120
    eax = (uint32_t)(0x64c120u);
L_0052980e:  // jmp 0x529854
    goto L_00529854;
L_00529810:  // mov eax, 0x64c110
    eax = (uint32_t)(0x64c110u);
L_00529815:  // jmp 0x529854
    goto L_00529854;
L_00529817:  // cmp eax, 0x32545844
    t0 = lsub<32>(eax, 0x32545844u, f);
L_0052981c:  // jg 0x529841
    if ((!f.zf && f.sf == f.of)) goto L_00529841;
L_0052981e:  // je 0x52983a
    if (f.zf) goto L_0052983a;
L_00529820:  // cmp eax, 0x1a
    t0 = lsub<32>(eax, 0x1au, f);
L_00529823:  // je 0x529833
    if (f.zf) goto L_00529833;
L_00529825:  // cmp eax, 0x31545844
    t0 = lsub<32>(eax, 0x31545844u, f);
L_0052982a:  // jne 0x529848
    if (!f.zf) goto L_00529848;
L_0052982c:  // mov eax, 0x64c104
    eax = (uint32_t)(0x64c104u);
L_00529831:  // jmp 0x529854
    goto L_00529854;
L_00529833:  // mov eax, 0x64c0f4
    eax = (uint32_t)(0x64c0f4u);
L_00529838:  // jmp 0x529854
    goto L_00529854;
L_0052983a:  // mov eax, 0x64c0e8
    eax = (uint32_t)(0x64c0e8u);
L_0052983f:  // jmp 0x529854
    goto L_00529854;
L_00529841:  // cmp eax, 0x34545844
    t0 = lsub<32>(eax, 0x34545844u, f);
L_00529846:  // je 0x52984f
    if (f.zf) goto L_0052984f;
L_00529848:  // mov eax, 0x64c0d4
    eax = (uint32_t)(0x64c0d4u);
L_0052984d:  // jmp 0x529854
    goto L_00529854;
L_0052984f:  // mov eax, 0x64c0c8
    eax = (uint32_t)(0x64c0c8u);
L_00529854:  // mov ecx, dword ptr [esi - 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xfffffffcu)));
L_00529857:  // mov edx, dword ptr [esi - 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xfffffff8u)));
L_0052985a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052985b:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0052985d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052985e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052985f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00529860:  // push 0x64c0b4
    t0 = 0x64c0b4u; esp -= 4; M32(esp) = t0;
L_00529865:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052986a:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052986fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052986f:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00529872:  // add esi, 0x10
    t0 = ladd<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_00529875:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00529876:  // jne 0x5297d6
    if (!f.zf) goto L_005297d6;
L_0052987c:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00529880:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_00529888:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0052988c:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00529890:  // mov eax, dword ptr [esi + 0x45c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x45cu)));
L_00529896:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00529899:  // lea ecx, [eax + ecx*8]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 8u));
L_0052989c:  // lea edx, [ecx + ecx*2]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052989f:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005298a3:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_005298a6:  // lea esi, [esi + eax*8 + 0x460]
    esi = (uint32_t)((uint32_t)(esi + eax * 8u + 0x460u));
L_005298ad:  // mov eax, dword ptr [esp + edi*4 + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x5cu)));
L_005298b1:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_005298b3:  // mov ecx, dword ptr [ecx + 0x32e9c]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x32e9cu)));
L_005298b9:  // lea edx, [esi + 4]
    edx = (uint32_t)((uint32_t)(esi + 0x4u));
L_005298bc:  // mov ebp, dword ptr [ecx]
    ebp = (uint32_t)(M32((uint32_t)(ecx)));
L_005298be:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005298bf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005298c0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005298c1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005298c2:  // call dword ptr [ebp + 0x38]
    t0 = M32((uint32_t)(ebp + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005298c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005298c5:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_005298c8:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_005298ca:  // lea eax, [esp + edi + 0x174]
    eax = (uint32_t)((uint32_t)(esp + edi + 0x174u));
L_005298d1:  // mov dword ptr [esi + 0x13c], ebp
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(ebp);
L_005298d7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005298d8:  // push 0x64c094
    t0 = 0x64c094u; esp -= 4; M32(esp) = t0;
L_005298dd:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005298e2:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_005298e6:  // mov dword ptr [esi + 0x134], eax
    M32((uint32_t)(esi + 0x134u)) = (uint32_t)(eax);
L_005298ec:  // mov dword ptr [esi + 0x138], ebp
    M32((uint32_t)(esi + 0x138u)) = (uint32_t)(ebp);
L_005298f2:  // mov dword ptr [esi + 0xf54], ebp
    M32((uint32_t)(esi + 0xf54u)) = (uint32_t)(ebp);
L_005298f8:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005298fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005298fd:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529900:  // lea edi, [esp + 0x874]
    edi = (uint32_t)((uint32_t)(esp + 0x874u));
L_00529907:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00529909:  // mov dl, byte ptr [esi + ebp + 4]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + ebp + 0x4u))) & 0xffu);
L_0052990d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052990e:  // push 0x63e3dc
    t0 = 0x63e3dcu; esp -= 4; M32(esp) = t0;
L_00529913:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529914:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529919u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529919:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0052991b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052991e:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_00529921:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_00529924:  // cmp al, 3
    t0 = lsub<8>((eax & 0xffu), 0x3u, f);
L_00529926:  // jne 0x52992c
    if (!f.zf) goto L_0052992c;
L_00529928:  // mov byte ptr [edi], 0x20
    M8((uint32_t)(edi)) = (uint8_t)(0x20u);
L_0052992b:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0052992c:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0052992d:  // cmp ebp, 0x130
    t0 = lsub<32>(ebp, 0x130u, f);
L_00529933:  // jb 0x529907
    if (f.cf) goto L_00529907;
L_00529935:  // lea ecx, [esp + 0x874]
    ecx = (uint32_t)((uint32_t)(esp + 0x874u));
L_0052993c:  // mov byte ptr [edi], 0
    M8((uint32_t)(edi)) = (uint8_t)(0x0u);
L_0052993f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00529940:  // push 0x6245d8
    t0 = 0x6245d8u; esp -= 4; M32(esp) = t0;
L_00529945:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052994a:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052994fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052994f:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00529953:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529956:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529958:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00529960:  // jbe 0x529a7f
    if ((f.cf || f.zf)) goto L_00529a7f;
L_00529966:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052996a:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052996e:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_00529974:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00529976:  // mov edi, dword ptr [esp + ecx*4 + 0x198]
    edi = (uint32_t)(M32((uint32_t)(esp + ecx * 4u + 0x198u)));
L_0052997d:  // mov dword ptr [esp + ecx*4 + 0xd8], 0
    M32((uint32_t)(esp + ecx * 4u + 0xd8u)) = (uint32_t)(0x0u);
L_00529988:  // mov dword ptr [esp + ecx*4 + 0x128], 0
    M32((uint32_t)(esp + ecx * 4u + 0x128u)) = (uint32_t)(0x0u);
L_00529993:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00529995:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00529997:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529998:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529999:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052999a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052999b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052999c:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052999fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052999f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005299a1:  // jge 0x529bdf
    if ((f.sf == f.of)) goto L_00529bdf;
L_005299a7:  // cmp edi, 0x19
    t0 = lsub<32>(edi, 0x19u, f);
L_005299aa:  // jg 0x5299e5
    if ((!f.zf && f.sf == f.of)) goto L_005299e5;
L_005299ac:  // je 0x5299de
    if (f.zf) goto L_005299de;
L_005299ae:  // cmp edi, 0x17
    t0 = lsub<32>(edi, 0x17u, f);
L_005299b1:  // ja 0x529a19
    if ((!f.cf && !f.zf)) goto L_00529a19;
L_005299b3:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_005299b5:  // mov dl, byte ptr [edi + 0x52a760]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x52a760u))) & 0xffu);
L_005299bb:  // jmp dword ptr [edx*4 + 0x52a74c]
    t0 = M32((uint32_t)(edx * 4u + 0x52a74cu));
    switch (t0) {
    case 0x005299c2u: goto L_005299c2;
    case 0x005299c9u: goto L_005299c9;
    case 0x005299d0u: goto L_005299d0;
    case 0x005299d7u: goto L_005299d7;
    case 0x00529a19u: goto L_00529a19;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_005299c2:  // mov edi, 0x64c150
    edi = (uint32_t)(0x64c150u);
L_005299c7:  // jmp 0x529a25
    goto L_00529a25;
L_005299c9:  // mov edi, 0x64c140
    edi = (uint32_t)(0x64c140u);
L_005299ce:  // jmp 0x529a25
    goto L_00529a25;
L_005299d0:  // mov edi, 0x64c130
    edi = (uint32_t)(0x64c130u);
L_005299d5:  // jmp 0x529a25
    goto L_00529a25;
L_005299d7:  // mov edi, 0x64c120
    edi = (uint32_t)(0x64c120u);
L_005299dc:  // jmp 0x529a25
    goto L_00529a25;
L_005299de:  // mov edi, 0x64c110
    edi = (uint32_t)(0x64c110u);
L_005299e3:  // jmp 0x529a25
    goto L_00529a25;
L_005299e5:  // cmp edi, 0x32545844
    t0 = lsub<32>(edi, 0x32545844u, f);
L_005299eb:  // jg 0x529a11
    if ((!f.zf && f.sf == f.of)) goto L_00529a11;
L_005299ed:  // je 0x529a0a
    if (f.zf) goto L_00529a0a;
L_005299ef:  // cmp edi, 0x1a
    t0 = lsub<32>(edi, 0x1au, f);
L_005299f2:  // je 0x529a03
    if (f.zf) goto L_00529a03;
L_005299f4:  // cmp edi, 0x31545844
    t0 = lsub<32>(edi, 0x31545844u, f);
L_005299fa:  // jne 0x529a19
    if (!f.zf) goto L_00529a19;
L_005299fc:  // mov edi, 0x64c104
    edi = (uint32_t)(0x64c104u);
L_00529a01:  // jmp 0x529a25
    goto L_00529a25;
L_00529a03:  // mov edi, 0x64c0f4
    edi = (uint32_t)(0x64c0f4u);
L_00529a08:  // jmp 0x529a25
    goto L_00529a25;
L_00529a0a:  // mov edi, 0x64c0e8
    edi = (uint32_t)(0x64c0e8u);
L_00529a0f:  // jmp 0x529a25
    goto L_00529a25;
L_00529a11:  // cmp edi, 0x34545844
    t0 = lsub<32>(edi, 0x34545844u, f);
L_00529a17:  // je 0x529a20
    if (f.zf) goto L_00529a20;
L_00529a19:  // mov edi, 0x64c0d4
    edi = (uint32_t)(0x64c0d4u);
L_00529a1e:  // jmp 0x529a25
    goto L_00529a25;
L_00529a20:  // mov edi, 0x64c0c8
    edi = (uint32_t)(0x64c0c8u);
L_00529a25:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00529a27:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00529a28:  // je 0x529a45
    if (f.zf) goto L_00529a45;
L_00529a2a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00529a2b:  // je 0x529a3e
    if (f.zf) goto L_00529a3e;
L_00529a2d:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00529a2e:  // je 0x529a37
    if (f.zf) goto L_00529a37;
L_00529a30:  // mov ebp, 0x64c090
    ebp = (uint32_t)(0x64c090u);
L_00529a35:  // jmp 0x529a4a
    goto L_00529a4a;
L_00529a37:  // mov ebp, 0x64c08c
    ebp = (uint32_t)(0x64c08cu);
L_00529a3c:  // jmp 0x529a4a
    goto L_00529a4a;
L_00529a3e:  // mov ebp, 0x64c1e8
    ebp = (uint32_t)(0x64c1e8u);
L_00529a43:  // jmp 0x529a4a
    goto L_00529a4a;
L_00529a45:  // mov ebp, 0x64c1ec
    ebp = (uint32_t)(0x64c1ecu);
L_00529a4a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529a4b:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529a50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529a50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529a51:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529a52:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00529a53:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529a54:  // push 0x64c050
    t0 = 0x64c050u; esp -= 4; M32(esp) = t0;
L_00529a59:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529a5e:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529a63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529a63:  // mov ebp, dword ptr [esp + 0x30]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00529a67:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00529a6a:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529a6e:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00529a72:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00529a73:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00529a75:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_00529a79:  // jb 0x52996a
    if (f.cf) goto L_0052996a;
L_00529a7f:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00529a83:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00529a88:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00529a8a:  // jbe 0x529b70
    if ((f.cf || f.zf)) goto L_00529b70;
L_00529a90:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00529a94:  // lea edx, [esp + 0x240]
    edx = (uint32_t)((uint32_t)(esp + 0x240u));
L_00529a9b:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00529a9d:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00529a9f:  // jbe 0x529b66
    if ((f.cf || f.zf)) goto L_00529b66;
L_00529aa5:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_00529aa7:  // cmp ebp, dword ptr [esp + ecx*4 + 0x194]
    t0 = lsub<32>(ebp, M32((uint32_t)(esp + ecx * 4u + 0x194u)), f);
L_00529aae:  // jne 0x529b59
    if (!f.zf) goto L_00529b59;
L_00529ab4:  // cmp dword ptr [esp + ecx*4 + 0xd4], eax
    t0 = lsub<32>(M32((uint32_t)(esp + ecx * 4u + 0xd4u)), eax, f);
L_00529abb:  // jne 0x529b59
    if (!f.zf) goto L_00529b59;
L_00529ac1:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529ac7:  // mov ebp, dword ptr [edx - 0xc]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0xfffffff4u)));
L_00529aca:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00529acd:  // mov dword ptr [esi + eax*8 + 0x140], ebp
    M32((uint32_t)(esi + eax * 8u + 0x140u)) = (uint32_t)(ebp);
L_00529ad4:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529ada:  // mov ebp, dword ptr [edx - 8]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0xfffffff8u)));
L_00529add:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00529ae0:  // mov dword ptr [esi + eax*8 + 0x144], ebp
    M32((uint32_t)(esi + eax * 8u + 0x144u)) = (uint32_t)(ebp);
L_00529ae7:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529aed:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_00529aef:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00529af2:  // mov dword ptr [esi + eax*8 + 0x148], ebp
    M32((uint32_t)(esi + eax * 8u + 0x148u)) = (uint32_t)(ebp);
L_00529af9:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529aff:  // mov ebp, dword ptr [esp + ecx*4 + 0x1e4]
    ebp = (uint32_t)(M32((uint32_t)(esp + ecx * 4u + 0x1e4u)));
L_00529b06:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00529b09:  // mov dword ptr [esi + eax*8 + 0x14c], ebp
    M32((uint32_t)(esi + eax * 8u + 0x14cu)) = (uint32_t)(ebp);
L_00529b10:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529b16:  // mov ebp, dword ptr [esp + ecx*4 + 0x84]
    ebp = (uint32_t)(M32((uint32_t)(esp + ecx * 4u + 0x84u)));
L_00529b1d:  // add eax, 0xe
    t0 = ladd<32>(eax, 0xeu, f);
    eax = (uint32_t)(t0);
L_00529b20:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00529b23:  // mov dword ptr [esi + eax*8], ebp
    M32((uint32_t)(esi + eax * 8u)) = (uint32_t)(ebp);
L_00529b26:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529b2c:  // mov ebp, dword ptr [esp + ecx*4 + 0x124]
    ebp = (uint32_t)(M32((uint32_t)(esp + ecx * 4u + 0x124u)));
L_00529b33:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00529b36:  // mov dword ptr [esi + eax*8 + 0x154], ebp
    M32((uint32_t)(esi + eax * 8u + 0x154u)) = (uint32_t)(ebp);
L_00529b3d:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529b43:  // mov ebp, dword ptr [esi]
    ebp = (uint32_t)(M32((uint32_t)(esi)));
L_00529b45:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00529b46:  // mov dword ptr [esi + 0x13c], eax
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(eax);
L_00529b4c:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00529b51:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_00529b53:  // jne 0x529b59
    if (!f.zf) goto L_00529b59;
L_00529b55:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00529b59:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00529b5d:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00529b5e:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_00529b60:  // jb 0x529aa5
    if (f.cf) goto L_00529aa5;
L_00529b66:  // add edx, 0x10
    t0 = ladd<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_00529b69:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00529b6a:  // jne 0x529a9b
    if (!f.zf) goto L_00529a9b;
L_00529b70:  // mov edx, dword ptr [0x66061c]
    edx = (uint32_t)(M32((uint32_t)(0x66061cu)));
L_00529b76:  // test edx, 0xffff
    t0 = llog<32>(edx & 0xffffu, f);
L_00529b7c:  // je 0x52a3bf
    if (f.zf) goto L_0052a3bf;
L_00529b82:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_00529b88:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00529b8a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529b8c:  // jbe 0x52a3ae
    if ((f.cf || f.zf)) goto L_0052a3ae;
L_00529b92:  // lea edi, [esi + 0x148]
    edi = (uint32_t)((uint32_t)(esi + 0x148u));
L_00529b98:  // mov eax, dword ptr [edi - 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xfffffff8u)));
L_00529b9b:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00529b9f:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_00529ba1:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_00529ba6:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_00529ba8:  // mov ecx, dword ptr [edi - 4]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xfffffffcu)));
L_00529bab:  // and ecx, 0x7fff
    t0 = llog<32>(ecx & 0x7fffu, f);
    ecx = (uint32_t)(t0);
L_00529bb1:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00529bb6:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00529bb9:  // or eax, ecx
    t0 = llog<32>(eax | ecx, f);
    eax = (uint32_t)(t0);
L_00529bbb:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_00529bbd:  // cmp ecx, 0x16
    t0 = lsub<32>(ecx, 0x16u, f);
L_00529bc0:  // je 0x52a37c
    if (f.zf) goto L_0052a37c;
L_00529bc6:  // cmp ecx, 0x15
    t0 = lsub<32>(ecx, 0x15u, f);
L_00529bc9:  // je 0x52a37c
    if (f.zf) goto L_0052a37c;
L_00529bcf:  // cmp ecx, 0x14
    t0 = lsub<32>(ecx, 0x14u, f);
L_00529bd2:  // je 0x52a37c
    if (f.zf) goto L_0052a37c;
L_00529bd8:  // xor cl, cl
    t0 = llog<8>((ecx & 0xffu) ^ (ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00529bda:  // jmp 0x52a37e
    goto L_0052a37e;
L_00529bdf:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00529be1:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00529be6:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00529be8:  // jne 0x529bfe
    if (!f.zf) goto L_00529bfe;
L_00529bea:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529bee:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_00529bf2:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00529bf4:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_00529bf8:  // jne 0x529bfe
    if (!f.zf) goto L_00529bfe;
L_00529bfa:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_00529bfe:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00529c01:  // test eax, 0x10000
    t0 = llog<32>(eax & 0x10000u, f);
L_00529c06:  // je 0x529e8e
    if (f.zf) goto L_00529e8e;
L_00529c0c:  // test eax, 0x100000
    t0 = llog<32>(eax & 0x100000u, f);
L_00529c11:  // je 0x529cdd
    if (f.zf) goto L_00529cdd;
L_00529c17:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529c1b:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00529c1e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529c1f:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_00529c21:  // mov dword ptr [esp + eax*4 + 0x1ec], 0x50
    M32((uint32_t)(esp + eax * 4u + 0x1ecu)) = (uint32_t)(0x50u);
L_00529c2c:  // lea eax, [esi + 4]
    eax = (uint32_t)((uint32_t)(esi + 0x4u));
L_00529c2f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529c30:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00529c32:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529c35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529c35:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529c37:  // jl 0x529cdd
    if ((f.sf != f.of)) goto L_00529cdd;
L_00529c3d:  // cmp edi, 0x19
    t0 = lsub<32>(edi, 0x19u, f);
L_00529c40:  // jg 0x529c7b
    if ((!f.zf && f.sf == f.of)) goto L_00529c7b;
L_00529c42:  // je 0x529c74
    if (f.zf) goto L_00529c74;
L_00529c44:  // cmp edi, 0x17
    t0 = lsub<32>(edi, 0x17u, f);
L_00529c47:  // ja 0x529caf
    if ((!f.cf && !f.zf)) goto L_00529caf;
L_00529c49:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00529c4b:  // mov al, byte ptr [edi + 0x52a78c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x52a78cu))) & 0xffu);
L_00529c51:  // jmp dword ptr [eax*4 + 0x52a778]
    t0 = M32((uint32_t)(eax * 4u + 0x52a778u));
    switch (t0) {
    case 0x00529c58u: goto L_00529c58;
    case 0x00529c5fu: goto L_00529c5f;
    case 0x00529c66u: goto L_00529c66;
    case 0x00529c6du: goto L_00529c6d;
    case 0x00529cafu: goto L_00529caf;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00529c58:  // mov eax, 0x64c150
    eax = (uint32_t)(0x64c150u);
L_00529c5d:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529c5f:  // mov eax, 0x64c140
    eax = (uint32_t)(0x64c140u);
L_00529c64:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529c66:  // mov eax, 0x64c130
    eax = (uint32_t)(0x64c130u);
L_00529c6b:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529c6d:  // mov eax, 0x64c120
    eax = (uint32_t)(0x64c120u);
L_00529c72:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529c74:  // mov eax, 0x64c110
    eax = (uint32_t)(0x64c110u);
L_00529c79:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529c7b:  // cmp edi, 0x32545844
    t0 = lsub<32>(edi, 0x32545844u, f);
L_00529c81:  // jg 0x529ca7
    if ((!f.zf && f.sf == f.of)) goto L_00529ca7;
L_00529c83:  // je 0x529ca0
    if (f.zf) goto L_00529ca0;
L_00529c85:  // cmp edi, 0x1a
    t0 = lsub<32>(edi, 0x1au, f);
L_00529c88:  // je 0x529c99
    if (f.zf) goto L_00529c99;
L_00529c8a:  // cmp edi, 0x31545844
    t0 = lsub<32>(edi, 0x31545844u, f);
L_00529c90:  // jne 0x529caf
    if (!f.zf) goto L_00529caf;
L_00529c92:  // mov eax, 0x64c104
    eax = (uint32_t)(0x64c104u);
L_00529c97:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529c99:  // mov eax, 0x64c0f4
    eax = (uint32_t)(0x64c0f4u);
L_00529c9e:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529ca0:  // mov eax, 0x64c0e8
    eax = (uint32_t)(0x64c0e8u);
L_00529ca5:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529ca7:  // cmp edi, 0x34545844
    t0 = lsub<32>(edi, 0x34545844u, f);
L_00529cad:  // je 0x529cb6
    if (f.zf) goto L_00529cb6;
L_00529caf:  // mov eax, 0x64c0d4
    eax = (uint32_t)(0x64c0d4u);
L_00529cb4:  // jmp 0x529cbb
    goto L_00529cbb;
L_00529cb6:  // mov eax, 0x64c0c8
    eax = (uint32_t)(0x64c0c8u);
L_00529cbb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529cbc:  // push 0x64c03c
    t0 = 0x64c03cu; esp -= 4; M32(esp) = t0;
L_00529cc1:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529cc6:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529ccbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529ccb:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00529ccf:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529cd2:  // mov dword ptr [esp + ecx*4 + 0xd4], 1
    M32((uint32_t)(esp + ecx * 4u + 0xd4u)) = (uint32_t)(0x1u);
L_00529cdd:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529ce1:  // mov eax, dword ptr [esp + edx*4 + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(esp + edx * 4u + 0xd4u)));
L_00529ce8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529cea:  // jne 0x529db4
    if (!f.zf) goto L_00529db4;
L_00529cf0:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00529cf2:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00529cf5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529cf6:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_00529cf8:  // mov dword ptr [esp + eax*4 + 0x1ec], 0x40
    M32((uint32_t)(esp + eax * 4u + 0x1ecu)) = (uint32_t)(0x40u);
L_00529d03:  // lea eax, [esi + 4]
    eax = (uint32_t)((uint32_t)(esi + 0x4u));
L_00529d06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529d07:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00529d09:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529d0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529d0c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529d0e:  // jl 0x529db4
    if ((f.sf != f.of)) goto L_00529db4;
L_00529d14:  // cmp edi, 0x19
    t0 = lsub<32>(edi, 0x19u, f);
L_00529d17:  // jg 0x529d52
    if ((!f.zf && f.sf == f.of)) goto L_00529d52;
L_00529d19:  // je 0x529d4b
    if (f.zf) goto L_00529d4b;
L_00529d1b:  // cmp edi, 0x17
    t0 = lsub<32>(edi, 0x17u, f);
L_00529d1e:  // ja 0x529d86
    if ((!f.cf && !f.zf)) goto L_00529d86;
L_00529d20:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00529d22:  // mov al, byte ptr [edi + 0x52a7b8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x52a7b8u))) & 0xffu);
L_00529d28:  // jmp dword ptr [eax*4 + 0x52a7a4]
    t0 = M32((uint32_t)(eax * 4u + 0x52a7a4u));
    switch (t0) {
    case 0x00529d2fu: goto L_00529d2f;
    case 0x00529d36u: goto L_00529d36;
    case 0x00529d3du: goto L_00529d3d;
    case 0x00529d44u: goto L_00529d44;
    case 0x00529d86u: goto L_00529d86;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00529d2f:  // mov eax, 0x64c150
    eax = (uint32_t)(0x64c150u);
L_00529d34:  // jmp 0x529d92
    goto L_00529d92;
L_00529d36:  // mov eax, 0x64c140
    eax = (uint32_t)(0x64c140u);
L_00529d3b:  // jmp 0x529d92
    goto L_00529d92;
L_00529d3d:  // mov eax, 0x64c130
    eax = (uint32_t)(0x64c130u);
L_00529d42:  // jmp 0x529d92
    goto L_00529d92;
L_00529d44:  // mov eax, 0x64c120
    eax = (uint32_t)(0x64c120u);
L_00529d49:  // jmp 0x529d92
    goto L_00529d92;
L_00529d4b:  // mov eax, 0x64c110
    eax = (uint32_t)(0x64c110u);
L_00529d50:  // jmp 0x529d92
    goto L_00529d92;
L_00529d52:  // cmp edi, 0x32545844
    t0 = lsub<32>(edi, 0x32545844u, f);
L_00529d58:  // jg 0x529d7e
    if ((!f.zf && f.sf == f.of)) goto L_00529d7e;
L_00529d5a:  // je 0x529d77
    if (f.zf) goto L_00529d77;
L_00529d5c:  // cmp edi, 0x1a
    t0 = lsub<32>(edi, 0x1au, f);
L_00529d5f:  // je 0x529d70
    if (f.zf) goto L_00529d70;
L_00529d61:  // cmp edi, 0x31545844
    t0 = lsub<32>(edi, 0x31545844u, f);
L_00529d67:  // jne 0x529d86
    if (!f.zf) goto L_00529d86;
L_00529d69:  // mov eax, 0x64c104
    eax = (uint32_t)(0x64c104u);
L_00529d6e:  // jmp 0x529d92
    goto L_00529d92;
L_00529d70:  // mov eax, 0x64c0f4
    eax = (uint32_t)(0x64c0f4u);
L_00529d75:  // jmp 0x529d92
    goto L_00529d92;
L_00529d77:  // mov eax, 0x64c0e8
    eax = (uint32_t)(0x64c0e8u);
L_00529d7c:  // jmp 0x529d92
    goto L_00529d92;
L_00529d7e:  // cmp edi, 0x34545844
    t0 = lsub<32>(edi, 0x34545844u, f);
L_00529d84:  // je 0x529d8d
    if (f.zf) goto L_00529d8d;
L_00529d86:  // mov eax, 0x64c0d4
    eax = (uint32_t)(0x64c0d4u);
L_00529d8b:  // jmp 0x529d92
    goto L_00529d92;
L_00529d8d:  // mov eax, 0x64c0c8
    eax = (uint32_t)(0x64c0c8u);
L_00529d92:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529d93:  // push 0x64c02c
    t0 = 0x64c02cu; esp -= 4; M32(esp) = t0;
L_00529d98:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529d9d:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529da2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529da2:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00529da6:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529da9:  // mov dword ptr [esp + ecx*4 + 0xd4], 1
    M32((uint32_t)(esp + ecx * 4u + 0xd4u)) = (uint32_t)(0x1u);
L_00529db4:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529db8:  // mov eax, dword ptr [esp + edx*4 + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(esp + edx * 4u + 0xd4u)));
L_00529dbf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529dc1:  // jne 0x529e8e
    if (!f.zf) goto L_00529e8e;
L_00529dc7:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00529dc9:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00529dcc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529dcd:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_00529dd2:  // mov dword ptr [esp + eax*4 + 0x1ec], 0x80
    M32((uint32_t)(esp + eax * 4u + 0x1ecu)) = (uint32_t)(0x80u);
L_00529ddd:  // lea eax, [esi + 4]
    eax = (uint32_t)((uint32_t)(esi + 0x4u));
L_00529de0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529de1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00529de3:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529de6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529de6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529de8:  // jl 0x529e8e
    if ((f.sf != f.of)) goto L_00529e8e;
L_00529dee:  // cmp edi, 0x19
    t0 = lsub<32>(edi, 0x19u, f);
L_00529df1:  // jg 0x529e2c
    if ((!f.zf && f.sf == f.of)) goto L_00529e2c;
L_00529df3:  // je 0x529e25
    if (f.zf) goto L_00529e25;
L_00529df5:  // cmp edi, 0x17
    t0 = lsub<32>(edi, 0x17u, f);
L_00529df8:  // ja 0x529e60
    if ((!f.cf && !f.zf)) goto L_00529e60;
L_00529dfa:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00529dfc:  // mov al, byte ptr [edi + 0x52a7e4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x52a7e4u))) & 0xffu);
L_00529e02:  // jmp dword ptr [eax*4 + 0x52a7d0]
    t0 = M32((uint32_t)(eax * 4u + 0x52a7d0u));
    switch (t0) {
    case 0x00529e09u: goto L_00529e09;
    case 0x00529e10u: goto L_00529e10;
    case 0x00529e17u: goto L_00529e17;
    case 0x00529e1eu: goto L_00529e1e;
    case 0x00529e60u: goto L_00529e60;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00529e09:  // mov eax, 0x64c150
    eax = (uint32_t)(0x64c150u);
L_00529e0e:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e10:  // mov eax, 0x64c140
    eax = (uint32_t)(0x64c140u);
L_00529e15:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e17:  // mov eax, 0x64c130
    eax = (uint32_t)(0x64c130u);
L_00529e1c:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e1e:  // mov eax, 0x64c120
    eax = (uint32_t)(0x64c120u);
L_00529e23:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e25:  // mov eax, 0x64c110
    eax = (uint32_t)(0x64c110u);
L_00529e2a:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e2c:  // cmp edi, 0x32545844
    t0 = lsub<32>(edi, 0x32545844u, f);
L_00529e32:  // jg 0x529e58
    if ((!f.zf && f.sf == f.of)) goto L_00529e58;
L_00529e34:  // je 0x529e51
    if (f.zf) goto L_00529e51;
L_00529e36:  // cmp edi, 0x1a
    t0 = lsub<32>(edi, 0x1au, f);
L_00529e39:  // je 0x529e4a
    if (f.zf) goto L_00529e4a;
L_00529e3b:  // cmp edi, 0x31545844
    t0 = lsub<32>(edi, 0x31545844u, f);
L_00529e41:  // jne 0x529e60
    if (!f.zf) goto L_00529e60;
L_00529e43:  // mov eax, 0x64c104
    eax = (uint32_t)(0x64c104u);
L_00529e48:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e4a:  // mov eax, 0x64c0f4
    eax = (uint32_t)(0x64c0f4u);
L_00529e4f:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e51:  // mov eax, 0x64c0e8
    eax = (uint32_t)(0x64c0e8u);
L_00529e56:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e58:  // cmp edi, 0x34545844
    t0 = lsub<32>(edi, 0x34545844u, f);
L_00529e5e:  // je 0x529e67
    if (f.zf) goto L_00529e67;
L_00529e60:  // mov eax, 0x64c0d4
    eax = (uint32_t)(0x64c0d4u);
L_00529e65:  // jmp 0x529e6c
    goto L_00529e6c;
L_00529e67:  // mov eax, 0x64c0c8
    eax = (uint32_t)(0x64c0c8u);
L_00529e6c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529e6d:  // push 0x64c018
    t0 = 0x64c018u; esp -= 4; M32(esp) = t0;
L_00529e72:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529e77:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529e7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529e7c:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00529e80:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529e83:  // mov dword ptr [esp + ecx*4 + 0xd4], 1
    M32((uint32_t)(esp + ecx * 4u + 0xd4u)) = (uint32_t)(0x1u);
L_00529e8e:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529e92:  // mov eax, dword ptr [esp + edx*4 + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(esp + edx * 4u + 0xd4u)));
L_00529e99:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529e9b:  // jne 0x529f65
    if (!f.zf) goto L_00529f65;
L_00529ea1:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00529ea3:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00529ea6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529ea7:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_00529ea9:  // mov dword ptr [esp + eax*4 + 0x1ec], 0x20
    M32((uint32_t)(esp + eax * 4u + 0x1ecu)) = (uint32_t)(0x20u);
L_00529eb4:  // lea eax, [esi + 4]
    eax = (uint32_t)((uint32_t)(esi + 0x4u));
L_00529eb7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529eb8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00529eba:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529ebdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529ebd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529ebf:  // jl 0x529f65
    if ((f.sf != f.of)) goto L_00529f65;
L_00529ec5:  // cmp edi, 0x19
    t0 = lsub<32>(edi, 0x19u, f);
L_00529ec8:  // jg 0x529f03
    if ((!f.zf && f.sf == f.of)) goto L_00529f03;
L_00529eca:  // je 0x529efc
    if (f.zf) goto L_00529efc;
L_00529ecc:  // cmp edi, 0x17
    t0 = lsub<32>(edi, 0x17u, f);
L_00529ecf:  // ja 0x529f37
    if ((!f.cf && !f.zf)) goto L_00529f37;
L_00529ed1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00529ed3:  // mov al, byte ptr [edi + 0x52a810]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x52a810u))) & 0xffu);
L_00529ed9:  // jmp dword ptr [eax*4 + 0x52a7fc]
    t0 = M32((uint32_t)(eax * 4u + 0x52a7fcu));
    switch (t0) {
    case 0x00529ee0u: goto L_00529ee0;
    case 0x00529ee7u: goto L_00529ee7;
    case 0x00529eeeu: goto L_00529eee;
    case 0x00529ef5u: goto L_00529ef5;
    case 0x00529f37u: goto L_00529f37;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00529ee0:  // mov eax, 0x64c150
    eax = (uint32_t)(0x64c150u);
L_00529ee5:  // jmp 0x529f43
    goto L_00529f43;
L_00529ee7:  // mov eax, 0x64c140
    eax = (uint32_t)(0x64c140u);
L_00529eec:  // jmp 0x529f43
    goto L_00529f43;
L_00529eee:  // mov eax, 0x64c130
    eax = (uint32_t)(0x64c130u);
L_00529ef3:  // jmp 0x529f43
    goto L_00529f43;
L_00529ef5:  // mov eax, 0x64c120
    eax = (uint32_t)(0x64c120u);
L_00529efa:  // jmp 0x529f43
    goto L_00529f43;
L_00529efc:  // mov eax, 0x64c110
    eax = (uint32_t)(0x64c110u);
L_00529f01:  // jmp 0x529f43
    goto L_00529f43;
L_00529f03:  // cmp edi, 0x32545844
    t0 = lsub<32>(edi, 0x32545844u, f);
L_00529f09:  // jg 0x529f2f
    if ((!f.zf && f.sf == f.of)) goto L_00529f2f;
L_00529f0b:  // je 0x529f28
    if (f.zf) goto L_00529f28;
L_00529f0d:  // cmp edi, 0x1a
    t0 = lsub<32>(edi, 0x1au, f);
L_00529f10:  // je 0x529f21
    if (f.zf) goto L_00529f21;
L_00529f12:  // cmp edi, 0x31545844
    t0 = lsub<32>(edi, 0x31545844u, f);
L_00529f18:  // jne 0x529f37
    if (!f.zf) goto L_00529f37;
L_00529f1a:  // mov eax, 0x64c104
    eax = (uint32_t)(0x64c104u);
L_00529f1f:  // jmp 0x529f43
    goto L_00529f43;
L_00529f21:  // mov eax, 0x64c0f4
    eax = (uint32_t)(0x64c0f4u);
L_00529f26:  // jmp 0x529f43
    goto L_00529f43;
L_00529f28:  // mov eax, 0x64c0e8
    eax = (uint32_t)(0x64c0e8u);
L_00529f2d:  // jmp 0x529f43
    goto L_00529f43;
L_00529f2f:  // cmp edi, 0x34545844
    t0 = lsub<32>(edi, 0x34545844u, f);
L_00529f35:  // je 0x529f3e
    if (f.zf) goto L_00529f3e;
L_00529f37:  // mov eax, 0x64c0d4
    eax = (uint32_t)(0x64c0d4u);
L_00529f3c:  // jmp 0x529f43
    goto L_00529f43;
L_00529f3e:  // mov eax, 0x64c0c8
    eax = (uint32_t)(0x64c0c8u);
L_00529f43:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529f44:  // push 0x64c00c
    t0 = 0x64c00cu; esp -= 4; M32(esp) = t0;
L_00529f49:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529f4e:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529f53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529f53:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00529f57:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00529f5a:  // mov dword ptr [esp + ecx*4 + 0xd4], 1
    M32((uint32_t)(esp + ecx * 4u + 0xd4u)) = (uint32_t)(0x1u);
L_00529f65:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529f69:  // mov eax, dword ptr [esp + edx*4 + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(esp + edx * 4u + 0xd4u)));
L_00529f70:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529f72:  // je 0x529fb9
    if (f.zf) goto L_00529fb9;
L_00529f74:  // mov eax, dword ptr [ebp + 0x330b0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x330b0u)));
L_00529f7a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529f7c:  // je 0x529fb9
    if (f.zf) goto L_00529fb9;
L_00529f7e:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00529f80:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00529f82:  // lea eax, [esp + eax*4 + 0x124]
    eax = (uint32_t)((uint32_t)(esp + eax * 4u + 0x124u));
L_00529f89:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529f8a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529f8b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00529f8c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529f8d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00529f8f:  // call 0x52a830
    t0 = 0x0052a830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529f94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529f94:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529f96:  // jne 0x529fb9
    if (!f.zf) goto L_00529fb9;
L_00529f98:  // push 0x64bfec
    t0 = 0x64bfecu; esp -= 4; M32(esp) = t0;
L_00529f9d:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529fa2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529fa7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529fa7:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00529fab:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00529fae:  // mov dword ptr [esp + edx*4 + 0xd4], 0
    M32((uint32_t)(esp + edx * 4u + 0xd4u)) = (uint32_t)(0x0u);
L_00529fb9:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529fbd:  // mov ecx, dword ptr [esp + eax*4 + 0xd4]
    ecx = (uint32_t)(M32((uint32_t)(esp + eax * 4u + 0xd4u)));
L_00529fc4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00529fc6:  // je 0x529a6a
    if (f.zf) goto L_00529a6a;
L_00529fcc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00529fce:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_00529fd4:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_00529fd6:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00529fd8:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00529fda:  // mov dword ptr [esp + ecx*4 + 0x8c], 0
    M32((uint32_t)(esp + ecx * 4u + 0x8cu)) = (uint32_t)(0x0u);
L_00529fe5:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00529fe7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00529fe9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00529fea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00529feb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529fec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529fed:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00529ff0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00529ff0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00529ff2:  // jl 0x52a015
    if ((f.sf != f.of)) goto L_0052a015;
L_00529ff4:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00529ff8:  // push 0x64bfd4
    t0 = 0x64bfd4u; esp -= 4; M32(esp) = t0;
L_00529ffd:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a002:  // mov dword ptr [esp + edx*4 + 0x8c], 4
    M32((uint32_t)(esp + edx * 4u + 0x8cu)) = (uint32_t)(0x4u);
L_0052a00d:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a012u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a012:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a015:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a01b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a01d:  // push 0x31545844
    t0 = 0x31545844u; esp -= 4; M32(esp) = t0;
L_0052a022:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0052a024:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a026:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a028:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a029:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052a02a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a02b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a02c:  // call dword ptr [ecx + 0x28]
    t0 = M32((uint32_t)(ecx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a02fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a02f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a031:  // jl 0x52a051
    if ((f.sf != f.of)) goto L_0052a051;
L_0052a033:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a037:  // push 0x64bfc0
    t0 = 0x64bfc0u; esp -= 4; M32(esp) = t0;
L_0052a03c:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a041:  // or dword ptr [esp + eax*4 + 0x8c], 1
    t0 = llog<32>(M32((uint32_t)(esp + eax * 4u + 0x8cu)) | 0x1u, f);
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(t0);
L_0052a049:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a04eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a04e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a051:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a057:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a059:  // push 0x32545844
    t0 = 0x32545844u; esp -= 4; M32(esp) = t0;
L_0052a05e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0052a060:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a062:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a064:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a065:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052a066:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a067:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a068:  // call dword ptr [ecx + 0x28]
    t0 = M32((uint32_t)(ecx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a06bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a06b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a06d:  // jl 0x52a08d
    if ((f.sf != f.of)) goto L_0052a08d;
L_0052a06f:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a073:  // push 0x64bfac
    t0 = 0x64bfacu; esp -= 4; M32(esp) = t0;
L_0052a078:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a07d:  // or dword ptr [esp + eax*4 + 0x8c], 2
    t0 = llog<32>(M32((uint32_t)(esp + eax * 4u + 0x8cu)) | 0x2u, f);
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(t0);
L_0052a085:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a08au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a08a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a08d:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a093:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a095:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_0052a097:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0052a099:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a09b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a09d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a09e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052a09f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a0a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a0a1:  // call dword ptr [ecx + 0x28]
    t0 = M32((uint32_t)(ecx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a0a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a0a4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a0a6:  // jl 0x52a0c6
    if ((f.sf != f.of)) goto L_0052a0c6;
L_0052a0a8:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a0ac:  // push 0x64bf94
    t0 = 0x64bf94u; esp -= 4; M32(esp) = t0;
L_0052a0b1:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a0b6:  // or dword ptr [esp + eax*4 + 0x8c], 8
    t0 = llog<32>(M32((uint32_t)(esp + eax * 4u + 0x8cu)) | 0x8u, f);
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(t0);
L_0052a0be:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a0c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a0c3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a0c6:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a0cc:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a0ce:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_0052a0d0:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0052a0d2:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a0d4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a0d6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a0d7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052a0d8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a0d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a0da:  // call dword ptr [ecx + 0x28]
    t0 = M32((uint32_t)(ecx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a0ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a0dd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a0df:  // jl 0x52a0ff
    if ((f.sf != f.of)) goto L_0052a0ff;
L_0052a0e1:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a0e5:  // push 0x64bf80
    t0 = 0x64bf80u; esp -= 4; M32(esp) = t0;
L_0052a0ea:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a0ef:  // or dword ptr [esp + eax*4 + 0x8c], 0x10
    t0 = llog<32>(M32((uint32_t)(esp + eax * 4u + 0x8cu)) | 0x10u, f);
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(t0);
L_0052a0f7:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a0fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a0fc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a0ff:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a105:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a109:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052a10a:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a10c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a10e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052a110:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a112:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a113:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052a114:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a115:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a116:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a119u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a119:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a11b:  // jl 0x52a176
    if ((f.sf != f.of)) goto L_0052a176;
L_0052a11d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a121:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a123:  // je 0x52a176
    if (f.zf) goto L_0052a176;
L_0052a125:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a129:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a12f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a130:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a134:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a136:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052a138:  // lea ecx, [esp + ecx*4 + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x12cu));
L_0052a13f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a141:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0052a143:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a144:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a146:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a147:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a148:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a149:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a14cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a14c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a14e:  // jl 0x52a176
    if ((f.sf != f.of)) goto L_0052a176;
L_0052a150:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a154:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a156:  // je 0x52a176
    if (f.zf) goto L_0052a176;
L_0052a158:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a15c:  // push 0x64bf68
    t0 = 0x64bf68u; esp -= 4; M32(esp) = t0;
L_0052a161:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a166:  // or dword ptr [esp + eax*4 + 0x8c], 0x20
    t0 = llog<32>(M32((uint32_t)(esp + eax * 4u + 0x8cu)) | 0x20u, f);
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(t0);
L_0052a16e:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a173u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a173:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a176:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a17c:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a180:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a181:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a183:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a185:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0052a187:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a189:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a18a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a18b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a18c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a18d:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a190u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a190:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a192:  // jl 0x52a1ed
    if ((f.sf != f.of)) goto L_0052a1ed;
L_0052a194:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a198:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a19a:  // je 0x52a1ed
    if (f.zf) goto L_0052a1ed;
L_0052a19c:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a1a0:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a1a6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a1a7:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a1ab:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a1ad:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0052a1af:  // lea ecx, [esp + ecx*4 + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x12cu));
L_0052a1b6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a1b8:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0052a1ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a1bb:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a1bd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a1be:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a1bf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a1c0:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a1c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a1c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a1c5:  // jl 0x52a1ed
    if ((f.sf != f.of)) goto L_0052a1ed;
L_0052a1c7:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a1cb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a1cd:  // je 0x52a1ed
    if (f.zf) goto L_0052a1ed;
L_0052a1cf:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a1d3:  // push 0x64bf50
    t0 = 0x64bf50u; esp -= 4; M32(esp) = t0;
L_0052a1d8:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a1dd:  // or dword ptr [esp + eax*4 + 0x8c], 0x40
    t0 = llog<32>(M32((uint32_t)(esp + eax * 4u + 0x8cu)) | 0x40u, f);
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(t0);
L_0052a1e5:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a1eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a1ea:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a1ed:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a1f3:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a1f7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a1f8:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a1fa:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a1fc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0052a1fe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a200:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a201:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a202:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a203:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a204:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a207u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a207:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a209:  // jl 0x52a26d
    if ((f.sf != f.of)) goto L_0052a26d;
L_0052a20b:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a20f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a211:  // je 0x52a26d
    if (f.zf) goto L_0052a26d;
L_0052a213:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a217:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a21d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a21e:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a222:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a224:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0052a226:  // lea ecx, [esp + ecx*4 + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x12cu));
L_0052a22d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a22f:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0052a231:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a232:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a234:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a235:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a236:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a237:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a23au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a23a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a23c:  // jl 0x52a26d
    if ((f.sf != f.of)) goto L_0052a26d;
L_0052a23e:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a242:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a244:  // je 0x52a26d
    if (f.zf) goto L_0052a26d;
L_0052a246:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a24a:  // push 0x64bf38
    t0 = 0x64bf38u; esp -= 4; M32(esp) = t0;
L_0052a24f:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a254:  // mov ecx, dword ptr [esp + eax*4 + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + eax * 4u + 0x8cu)));
L_0052a25b:  // or cl, 0x80
    t0 = llog<8>((ecx & 0xffu) | 0x80u, f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0052a25e:  // mov dword ptr [esp + eax*4 + 0x8c], ecx
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(ecx);
L_0052a265:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a26au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a26a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a26d:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a273:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a277:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a278:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a27a:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a27c:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0052a27e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a280:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a281:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a282:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a283:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a284:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a287u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a287:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a289:  // jl 0x52a2ed
    if ((f.sf != f.of)) goto L_0052a2ed;
L_0052a28b:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a28f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a291:  // je 0x52a2ed
    if (f.zf) goto L_0052a2ed;
L_0052a293:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a297:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a29d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a29e:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a2a2:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a2a4:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0052a2a6:  // lea ecx, [esp + ecx*4 + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x12cu));
L_0052a2ad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a2af:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0052a2b1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a2b2:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a2b4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a2b5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a2b6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a2b7:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a2bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a2ba:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a2bc:  // jl 0x52a2ed
    if ((f.sf != f.of)) goto L_0052a2ed;
L_0052a2be:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a2c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a2c4:  // je 0x52a2ed
    if (f.zf) goto L_0052a2ed;
L_0052a2c6:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a2ca:  // push 0x64bf20
    t0 = 0x64bf20u; esp -= 4; M32(esp) = t0;
L_0052a2cf:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a2d4:  // mov ecx, dword ptr [esp + eax*4 + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + eax * 4u + 0x8cu)));
L_0052a2db:  // or ch, 1
    t0 = llog<8>(((ecx >> 8) & 0xffu) | 0x1u, f);
    ecx = (ecx & 0xffff00ffu) | (((uint32_t)(t0) & 0xffu) << 8);
L_0052a2de:  // mov dword ptr [esp + eax*4 + 0x8c], ecx
    M32((uint32_t)(esp + eax * 4u + 0x8cu)) = (uint32_t)(ecx);
L_0052a2e5:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a2eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a2ea:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a2ed:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a2f3:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a2f7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a2f8:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a2fa:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a2fc:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0052a2fe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a300:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052a301:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a302:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a303:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a304:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a307u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a307:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a309:  // jl 0x529a6a
    if ((f.sf != f.of)) goto L_00529a6a;
L_0052a30f:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a313:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a315:  // je 0x529a6a
    if (f.zf) goto L_00529a6a;
L_0052a31b:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052a31f:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052a325:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052a329:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052a32b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a32c:  // mov ecx, dword ptr [esp + edi*4 + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x128u)));
L_0052a333:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0052a335:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052a337:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a338:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0052a33a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a33b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052a33c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a33d:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a340u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a340:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a342:  // jl 0x529a6e
    if ((f.sf != f.of)) goto L_00529a6e;
L_0052a348:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052a34c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a34e:  // je 0x529a6e
    if (f.zf) goto L_00529a6e;
L_0052a354:  // mov eax, dword ptr [esp + edi*4 + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x84u)));
L_0052a35b:  // push 0x64bf08
    t0 = 0x64bf08u; esp -= 4; M32(esp) = t0;
L_0052a360:  // or ah, 2
    t0 = llog<8>(((eax >> 8) & 0xffu) | 0x2u, f);
    eax = (eax & 0xffff00ffu) | (((uint32_t)(t0) & 0xffu) << 8);
L_0052a363:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a368:  // mov dword ptr [esp + edi*4 + 0x8c], eax
    M32((uint32_t)(esp + edi * 4u + 0x8cu)) = (uint32_t)(eax);
L_0052a36f:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a374u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a374:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a377:  // jmp 0x529a6e
    goto L_00529a6e;
L_0052a37c:  // mov cl, 1
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_0052a37e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0052a380:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0052a382:  // setne bl
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0052a385:  // shl ebx, 0x1f
    t0 = lshl<32>(ebx, 0x1fu, f);
    ebx = (uint32_t)(t0);
L_0052a388:  // and eax, 0x7fffffff
    t0 = llog<32>(eax & 0x7fffffffu, f);
    eax = (uint32_t)(t0);
L_0052a38d:  // or eax, ebx
    t0 = llog<32>(eax | ebx, f);
    eax = (uint32_t)(t0);
L_0052a38f:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_0052a393:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_0052a395:  // test eax, 0xffffffff
    t0 = llog<32>(eax & 0xffffffffu, f);
L_0052a39a:  // je 0x52a3b0
    if (f.zf) goto L_0052a3b0;
L_0052a39c:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_0052a3a2:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0052a3a3:  // add edi, 0x18
    t0 = ladd<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_0052a3a6:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_0052a3a8:  // jb 0x529b98
    if (f.cf) goto L_00529b98;
L_0052a3ae:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0052a3b0:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052a3b4:  // mov dword ptr [esi + 0xf50], ebp
    M32((uint32_t)(esi + 0xf50u)) = (uint32_t)(ebp);
L_0052a3ba:  // jmp 0x52a43f
    goto L_0052a43f;
L_0052a3bf:  // mov eax, dword ptr [esi + 0xf50]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xf50u)));
L_0052a3c5:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0052a3c8:  // je 0x52a3d2
    if (f.zf) goto L_0052a3d2;
L_0052a3ca:  // cmp eax, dword ptr [esi + 0x13c]
    t0 = lsub<32>(eax, M32((uint32_t)(esi + 0x13cu)), f);
L_0052a3d0:  // jb 0x52a43f
    if (f.cf) goto L_0052a43f;
L_0052a3d2:  // mov ebp, dword ptr [esi + 0x13c]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_0052a3d8:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052a3da:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0052a3dc:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0052a3de:  // jbe 0x52a437
    if ((f.cf || f.zf)) goto L_0052a437;
L_0052a3e0:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052a3e4:  // mov ecx, dword ptr [eax + 0x330bc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x330bcu)));
L_0052a3ea:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_0052a3ee:  // lea ecx, [esi + 0x148]
    ecx = (uint32_t)((uint32_t)(esi + 0x148u));
L_0052a3f4:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0052a3f8:  // cmp dword ptr [ecx - 8], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xfffffff8u)), eax, f);
L_0052a3fb:  // jne 0x52a42f
    if (!f.zf) goto L_0052a42f;
L_0052a3fd:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052a401:  // mov eax, dword ptr [ecx - 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xfffffffcu)));
L_0052a404:  // cmp eax, dword ptr [ebx + 0x330c0]
    t0 = lsub<32>(eax, M32((uint32_t)(ebx + 0x330c0u)), f);
L_0052a40a:  // jne 0x52a42b
    if (!f.zf) goto L_0052a42b;
L_0052a40c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0052a40e:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0052a410:  // cmp eax, 0x14
    t0 = lsub<32>(eax, 0x14u, f);
L_0052a413:  // je 0x52a5ff
    if (f.zf) goto L_0052a5ff;
L_0052a419:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_0052a41c:  // je 0x52a5ff
    if (f.zf) goto L_0052a5ff;
L_0052a422:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_0052a425:  // je 0x52a5ff
    if (f.zf) goto L_0052a5ff;
L_0052a42b:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052a42f:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0052a430:  // add ecx, 0x18
    t0 = ladd<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0052a433:  // cmp edx, ebp
    t0 = lsub<32>(edx, ebp, f);
L_0052a435:  // jb 0x52a3f4
    if (f.cf) goto L_0052a3f4;
L_0052a437:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0052a439:  // mov dword ptr [esi + 0xf50], edx
    M32((uint32_t)(esi + 0xf50u)) = (uint32_t)(edx);
L_0052a43f:  // mov ebp, dword ptr [esi + 0x13c]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_0052a445:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0052a447:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052a449:  // cmp ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
L_0052a44b:  // mov dword ptr [esi + 0xf5c], ecx
    M32((uint32_t)(esi + 0xf5cu)) = (uint32_t)(ecx);
L_0052a451:  // jbe 0x52a486
    if ((f.cf || f.zf)) goto L_0052a486;
L_0052a453:  // lea edx, [esi + 0x148]
    edx = (uint32_t)((uint32_t)(esi + 0x148u));
L_0052a459:  // cmp dword ptr [edx - 8], 0x320
    t0 = lsub<32>(M32((uint32_t)(edx + 0xfffffff8u)), 0x320u, f);
L_0052a460:  // jne 0x52a47e
    if (!f.zf) goto L_0052a47e;
L_0052a462:  // cmp dword ptr [edx - 4], 0x258
    t0 = lsub<32>(M32((uint32_t)(edx + 0xfffffffcu)), 0x258u, f);
L_0052a469:  // jne 0x52a47e
    if (!f.zf) goto L_0052a47e;
L_0052a46b:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0052a46d:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0052a46f:  // cmp eax, 0x14
    t0 = lsub<32>(eax, 0x14u, f);
L_0052a472:  // je 0x52a488
    if (f.zf) goto L_0052a488;
L_0052a474:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_0052a477:  // je 0x52a488
    if (f.zf) goto L_0052a488;
L_0052a479:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_0052a47c:  // je 0x52a488
    if (f.zf) goto L_0052a488;
L_0052a47e:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0052a47f:  // add edx, 0x18
    t0 = ladd<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_0052a482:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_0052a484:  // jb 0x52a459
    if (f.cf) goto L_0052a459;
L_0052a486:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0052a488:  // mov dword ptr [esi + 0xf60], ecx
    M32((uint32_t)(esi + 0xf60u)) = (uint32_t)(ecx);
L_0052a48e:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052a490:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0052a492:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0052a494:  // jbe 0x52a4c9
    if ((f.cf || f.zf)) goto L_0052a4c9;
L_0052a496:  // lea edx, [esi + 0x148]
    edx = (uint32_t)((uint32_t)(esi + 0x148u));
L_0052a49c:  // cmp dword ptr [edx - 8], 0x500
    t0 = lsub<32>(M32((uint32_t)(edx + 0xfffffff8u)), 0x500u, f);
L_0052a4a3:  // jne 0x52a4c1
    if (!f.zf) goto L_0052a4c1;
L_0052a4a5:  // cmp dword ptr [edx - 4], 0x400
    t0 = lsub<32>(M32((uint32_t)(edx + 0xfffffffcu)), 0x400u, f);
L_0052a4ac:  // jne 0x52a4c1
    if (!f.zf) goto L_0052a4c1;
L_0052a4ae:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0052a4b0:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0052a4b2:  // cmp eax, 0x14
    t0 = lsub<32>(eax, 0x14u, f);
L_0052a4b5:  // je 0x52a4cb
    if (f.zf) goto L_0052a4cb;
L_0052a4b7:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_0052a4ba:  // je 0x52a4cb
    if (f.zf) goto L_0052a4cb;
L_0052a4bc:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_0052a4bf:  // je 0x52a4cb
    if (f.zf) goto L_0052a4cb;
L_0052a4c1:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0052a4c2:  // add edx, 0x18
    t0 = ladd<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_0052a4c5:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_0052a4c7:  // jb 0x52a49c
    if (f.cf) goto L_0052a49c;
L_0052a4c9:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0052a4cb:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052a4cd:  // mov dword ptr [esi + 0xf64], ecx
    M32((uint32_t)(esi + 0xf64u)) = (uint32_t)(ecx);
L_0052a4d3:  // jne 0x52a518
    if (!f.zf) goto L_0052a518;
L_0052a4d5:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052a4d7:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0052a4d9:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0052a4db:  // jbe 0x52a510
    if ((f.cf || f.zf)) goto L_0052a510;
L_0052a4dd:  // lea ecx, [esi + 0x148]
    ecx = (uint32_t)((uint32_t)(esi + 0x148u));
L_0052a4e3:  // cmp dword ptr [ecx - 8], 0x400
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xfffffff8u)), 0x400u, f);
L_0052a4ea:  // jne 0x52a508
    if (!f.zf) goto L_0052a508;
L_0052a4ec:  // cmp dword ptr [ecx - 4], 0x300
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xfffffffcu)), 0x300u, f);
L_0052a4f3:  // jne 0x52a508
    if (!f.zf) goto L_0052a508;
L_0052a4f5:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0052a4f7:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0052a4f9:  // cmp eax, 0x14
    t0 = lsub<32>(eax, 0x14u, f);
L_0052a4fc:  // je 0x52a512
    if (f.zf) goto L_0052a512;
L_0052a4fe:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_0052a501:  // je 0x52a512
    if (f.zf) goto L_0052a512;
L_0052a503:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_0052a506:  // je 0x52a512
    if (f.zf) goto L_0052a512;
L_0052a508:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0052a509:  // add ecx, 0x18
    t0 = ladd<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0052a50c:  // cmp edx, ebp
    t0 = lsub<32>(edx, ebp, f);
L_0052a50e:  // jb 0x52a4e3
    if (f.cf) goto L_0052a4e3;
L_0052a510:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0052a512:  // mov dword ptr [esi + 0xf64], edx
    M32((uint32_t)(esi + 0xf64u)) = (uint32_t)(edx);
L_0052a518:  // mov eax, dword ptr [esp + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xd4u)));
L_0052a51f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a521:  // je 0x52a534
    if (f.zf) goto L_0052a534;
L_0052a523:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0052a528:  // mov dword ptr [esi + 0x138], eax
    M32((uint32_t)(esi + 0x138u)) = (uint32_t)(eax);
L_0052a52e:  // mov dword ptr [esi + 0xf54], eax
    M32((uint32_t)(esi + 0xf54u)) = (uint32_t)(eax);
L_0052a534:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0052a536:  // jbe 0x52a559
    if ((f.cf || f.zf)) goto L_0052a559;
L_0052a538:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0052a53c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a53d:  // push 0x64bef8
    t0 = 0x64bef8u; esp -= 4; M32(esp) = t0;
L_0052a542:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a547:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a54cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a54c:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0052a550:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052a553:  // inc dword ptr [eax + 0x45c]
    t0 = linc<32>(M32((uint32_t)(eax + 0x45cu)), f);
    M32((uint32_t)(eax + 0x45cu)) = (uint32_t)(t0);
L_0052a559:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0052a55d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052a55e:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0052a561:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0052a565:  // jb 0x529888
    if (f.cf) goto L_00529888;
L_0052a56b:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0052a56f:  // mov eax, dword ptr [edx + 0x45c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x45cu)));
L_0052a575:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a577:  // jbe 0x52a59a
    if ((f.cf || f.zf)) goto L_0052a59a;
L_0052a579:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0052a57d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a57e:  // push 0x64bef8
    t0 = 0x64bef8u; esp -= 4; M32(esp) = t0;
L_0052a583:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a588:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a58du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a58d:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0052a591:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052a594:  // inc dword ptr [eax + 0x32e3c]
    t0 = linc<32>(M32((uint32_t)(eax + 0x32e3cu)), f);
    M32((uint32_t)(eax + 0x32e3cu)) = (uint32_t)(t0);
L_0052a59a:  // push 0x662b2c
    t0 = 0x662b2cu; esp -= 4; M32(esp) = t0;
L_0052a59f:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a5a4:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a5a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a5a9:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0052a5ad:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0052a5b1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052a5b4:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0052a5b5:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_0052a5b7:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_0052a5bb:  // jb 0x529439
    if (f.cf) goto L_00529439;
L_0052a5c1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052a5c2:  // mov edx, dword ptr [ebp + 0x32e3c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x32e3cu)));
L_0052a5c8:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0052a5ca:  // je 0x52a6e3
    if (f.zf) goto L_0052a6e3;
L_0052a5d0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052a5d2:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0052a5d4:  // jbe 0x52a6e3
    if ((f.cf || f.zf)) goto L_0052a6e3;
L_0052a5da:  // lea ecx, [ebp + 0x460]
    ecx = (uint32_t)((uint32_t)(ebp + 0x460u));
L_0052a5e0:  // cmp dword ptr [ecx], 0
    t0 = lsub<32>(M32((uint32_t)(ecx)), 0x0u, f);
L_0052a5e3:  // ja 0x52a608
    if ((!f.cf && !f.zf)) goto L_0052a608;
L_0052a5e5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052a5e6:  // add ecx, 0x516c
    t0 = ladd<32>(ecx, 0x516cu, f);
    ecx = (uint32_t)(t0);
L_0052a5ec:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0052a5ee:  // jb 0x52a5e0
    if (f.cf) goto L_0052a5e0;
L_0052a5f0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052a5f1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052a5f2:  // mov eax, 0x82000003
    eax = (uint32_t)(0x82000003u);
L_0052a5f7:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052a5f8:  // add esp, 0xb14
    t0 = ladd<32>(esp, 0xb14u, f);
    esp = (uint32_t)(t0);
L_0052a5fe:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0052a5ff:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052a603:  // jmp 0x52a439
    goto L_0052a439;
L_0052a608:  // lea edx, [eax + 1]
    edx = (uint32_t)((uint32_t)(eax + 0x1u));
L_0052a60b:  // lea ecx, [edx + edx*2]
    ecx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_0052a60e:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0052a611:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0052a613:  // lea ecx, [ecx + ecx*2]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052a616:  // lea ecx, [ecx + ecx*8]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 8u));
L_0052a619:  // mov dword ptr [ebp + ecx*4], 0
    M32((uint32_t)(ebp + ecx * 4u)) = (uint32_t)(0x0u);
L_0052a621:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0052a624:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0052a627:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0052a629:  // mov dword ptr [ebp + 0x32e40], eax
    M32((uint32_t)(ebp + 0x32e40u)) = (uint32_t)(eax);
L_0052a62f:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052a632:  // lea edx, [eax + eax*8]
    edx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0052a635:  // mov eax, dword ptr [ebp + edx*4 + 0x13b8]
    eax = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x13b8u)));
L_0052a63c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a63e:  // lea esi, [ebp + edx*4]
    esi = (uint32_t)((uint32_t)(ebp + edx * 4u));
L_0052a642:  // je 0x52a654
    if (f.zf) goto L_0052a654;
L_0052a644:  // mov eax, dword ptr [0x662df0]
    eax = (uint32_t)(M32((uint32_t)(0x662df0u)));
L_0052a649:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a64b:  // je 0x52a654
    if (f.zf) goto L_0052a654;
L_0052a64d:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0052a652:  // jmp 0x52a656
    goto L_0052a656;
L_0052a654:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052a656:  // mov dword ptr [ebp + 0x32e44], eax
    M32((uint32_t)(ebp + 0x32e44u)) = (uint32_t)(eax);
L_0052a65c:  // mov eax, dword ptr [esi + 0x464]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x464u)));
L_0052a662:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0052a665:  // jne 0x52a6b7
    if (!f.zf) goto L_0052a6b7;
L_0052a667:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0052a66b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a66d:  // jne 0x52a678
    if (!f.zf) goto L_0052a678;
L_0052a66f:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052a671:  // push 0x82000005
    t0 = 0x82000005u; esp -= 4; M32(esp) = t0;
L_0052a676:  // jmp 0x52a6b0
    goto L_0052a6b0;
L_0052a678:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0052a67c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a67e:  // jne 0x52a689
    if (!f.zf) goto L_0052a689;
L_0052a680:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052a682:  // push 0x82000006
    t0 = 0x82000006u; esp -= 4; M32(esp) = t0;
L_0052a687:  // jmp 0x52a6b0
    goto L_0052a6b0;
L_0052a689:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0052a68d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a68f:  // jne 0x52a69a
    if (!f.zf) goto L_0052a69a;
L_0052a691:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052a693:  // push 0x82000007
    t0 = 0x82000007u; esp -= 4; M32(esp) = t0;
L_0052a698:  // jmp 0x52a6b0
    goto L_0052a6b0;
L_0052a69a:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0052a69e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052a6a0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052a6a2:  // jne 0x52a6ab
    if (!f.zf) goto L_0052a6ab;
L_0052a6a4:  // push 0x82000008
    t0 = 0x82000008u; esp -= 4; M32(esp) = t0;
L_0052a6a9:  // jmp 0x52a6b0
    goto L_0052a6b0;
L_0052a6ab:  // push 0x82000009
    t0 = 0x82000009u; esp -= 4; M32(esp) = t0;
L_0052a6b0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0052a6b2:  // call 0x52c4f0
    t0 = 0x0052c4f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a6b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a6b7:  // mov ecx, dword ptr [esi + 0x598]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x598u)));
L_0052a6bd:  // lea eax, [esi + 0x204]
    eax = (uint32_t)((uint32_t)(esi + 0x204u));
L_0052a6c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052a6c4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052a6c5:  // push 0x64bee8
    t0 = 0x64bee8u; esp -= 4; M32(esp) = t0;
L_0052a6ca:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052a6cf:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052a6d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052a6d4:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0052a6d7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052a6d9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052a6da:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052a6db:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052a6dc:  // add esp, 0xb14
    t0 = ladd<32>(esp, 0xb14u, f);
    esp = (uint32_t)(t0);
L_0052a6e2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0052a6e3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052a6e4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052a6e5:  // mov eax, 0x82000003
    eax = (uint32_t)(0x82000003u);
L_0052a6ea:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052a6eb:  // add esp, 0xb14
    t0 = ladd<32>(esp, 0xb14u, f);
    esp = (uint32_t)(t0);
L_0052a6f1:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00529350, 00529350)
