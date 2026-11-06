// lifted from 004a1f60 (FUN_004a1f60, 556 bytes, 171 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a1f60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a1f60;
L_004a1f60:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004a1f62:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004a1f68:  // push 0x5d358b
    t0 = 0x5d358bu; esp -= 4; M32(esp) = t0;
L_004a1f6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a1f6e:  // mov eax, 0x68a0
    eax = (uint32_t)(0x68a0u);
L_004a1f73:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004a1f7a:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a1f7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a1f7f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a1f80:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004a1f82:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004a1f83:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a1f84:  // mov eax, dword ptr [ebx + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x50u)));
L_004a1f87:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a1f88:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a1f89:  // lea ecx, [esp + 0x4b4]
    ecx = (uint32_t)((uint32_t)(esp + 0x4b4u));
L_004a1f90:  // push 0x62f658
    t0 = 0x62f658u; esp -= 4; M32(esp) = t0;
L_004a1f95:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a1f96:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a1f9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a1f9b:  // mov edx, dword ptr [ebx + 0x54]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x54u)));
L_004a1f9e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a1fa1:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004a1fa5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a1fa6:  // push 0x62f648
    t0 = 0x62f648u; esp -= 4; M32(esp) = t0;
L_004a1fab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a1fac:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a1fb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a1fb1:  // lea edi, [esp + 0x20]
    edi = (uint32_t)((uint32_t)(esp + 0x20u));
L_004a1fb5:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a1fb8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a1fba:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a1fbd:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a1fbf:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a1fc1:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004a1fc3:  // lea edx, [esp + 0x4b0]
    edx = (uint32_t)((uint32_t)(esp + 0x4b0u));
L_004a1fca:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004a1fcc:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004a1fce:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004a1fd0:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a1fd3:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a1fd5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004a1fd7:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004a1fd8:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004a1fdb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004a1fdd:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004a1fe0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004a1fe2:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004a1fe5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a1fe6:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004a1fe8:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004a1fec:  // push 0x62f634
    t0 = 0x62f634u; esp -= 4; M32(esp) = t0;
L_004a1ff1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a1ff2:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a1ff7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a1ff7:  // lea edi, [esp + 0x20]
    edi = (uint32_t)((uint32_t)(esp + 0x20u));
L_004a1ffb:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a1ffe:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a2000:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2003:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a2005:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a2007:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004a2009:  // lea edx, [esp + 0x4b0]
    edx = (uint32_t)((uint32_t)(esp + 0x4b0u));
L_004a2010:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004a2012:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004a2014:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004a2016:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2019:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a201b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004a201d:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004a201e:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004a2021:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004a2023:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004a2025:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004a2028:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004a202a:  // lea ecx, [esp + 0x2ac]
    ecx = (uint32_t)((uint32_t)(esp + 0x2acu));
L_004a2031:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_004a2033:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a2034:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004a2037:  // cmp eax, 0x81
    t0 = lsub<32>(eax, 0x81u, f);
L_004a203c:  // jb 0x4a2031
    if (f.cf) goto L_004a2031;
L_004a203e:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004a2040:  // lea eax, [esp + 0x2b0]
    eax = (uint32_t)((uint32_t)(esp + 0x2b0u));
L_004a2047:  // mov edi, 0x80
    edi = (uint32_t)(0x80u);
L_004a204c:  // mov edx, dword ptr [eax - 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_004a204f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004a2051:  // mov ebp, dword ptr [ebx + edx*4 + 0x58]
    ebp = (uint32_t)(M32((uint32_t)(ebx + edx * 4u + 0x58u)));
L_004a2055:  // cmp ebp, dword ptr [ebx + ecx*4 + 0x58]
    t0 = lsub<32>(ebp, M32((uint32_t)(ebx + ecx * 4u + 0x58u)), f);
L_004a2059:  // jge 0x4a2065
    if ((f.sf == f.of)) goto L_004a2065;
L_004a205b:  // mov dword ptr [eax - 4], ecx
    M32((uint32_t)(eax + 0xfffffffcu)) = (uint32_t)(ecx);
L_004a205e:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004a2063:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_004a2065:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004a2068:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004a2069:  // jne 0x4a204c
    if (!f.zf) goto L_004a204c;
L_004a206b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004a206d:  // jne 0x4a203e
    if (!f.zf) goto L_004a203e;
L_004a206f:  // lea ebp, [esp + 0x2ac]
    ebp = (uint32_t)((uint32_t)(esp + 0x2acu));
L_004a2076:  // mov dword ptr [esp + 0x10], 0x81
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x81u);
L_004a207e:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004a2081:  // mov ecx, dword ptr [ebx + eax*4 + 0x670]
    ecx = (uint32_t)(M32((uint32_t)(ebx + eax * 4u + 0x670u)));
L_004a2088:  // mov edx, dword ptr [ebx + eax*4 + 0x58]
    edx = (uint32_t)(M32((uint32_t)(ebx + eax * 4u + 0x58u)));
L_004a208c:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004a208f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2090:  // add eax, 0x9c2dd0
    t0 = ladd<32>(eax, 0x9c2dd0u, f);
    eax = (uint32_t)(t0);
L_004a2095:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2096:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2097:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004a209b:  // push 0x62f610
    t0 = 0x62f610u; esp -= 4; M32(esp) = t0;
L_004a20a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a20a1:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a20a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a20a6:  // lea edi, [esp + 0x28]
    edi = (uint32_t)((uint32_t)(esp + 0x28u));
L_004a20aa:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a20ad:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a20af:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004a20b2:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a20b4:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a20b6:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004a20b8:  // lea edx, [esp + 0x4b0]
    edx = (uint32_t)((uint32_t)(esp + 0x4b0u));
L_004a20bf:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004a20c1:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004a20c3:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004a20c5:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a20c8:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a20ca:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004a20cc:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004a20cd:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004a20d0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004a20d2:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004a20d6:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004a20d8:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004a20db:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_004a20de:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004a20df:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004a20e1:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004a20e5:  // jne 0x4a207e
    if (!f.zf) goto L_004a207e;
L_004a20e7:  // mov eax, dword ptr [esp + 0x68c0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68c0u)));
L_004a20ee:  // lea ecx, [esp + 0x1ac]
    ecx = (uint32_t)((uint32_t)(esp + 0x1acu));
L_004a20f5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a20f6:  // push 0x62f600
    t0 = 0x62f600u; esp -= 4; M32(esp) = t0;
L_004a20fb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a20fc:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2101u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2101:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004a2104:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004a2108:  // call 0x547d70
    t0 = 0x00547d70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a210du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a210d:  // lea edx, [esp + 0x1ac]
    edx = (uint32_t)((uint32_t)(esp + 0x1acu));
L_004a2114:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_004a2116:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004a2117:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_004a211e:  // mov dword ptr [esp + 0x68c0], 0
    M32((uint32_t)(esp + 0x68c0u)) = (uint32_t)(0x0u);
L_004a2129:  // call 0x547dc0
    t0 = 0x00547dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a212eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a212e:  // lea edi, [esp + 0x4b0]
    edi = (uint32_t)((uint32_t)(esp + 0x4b0u));
L_004a2135:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004a2138:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004a213a:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004a213c:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004a213e:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004a213f:  // lea eax, [esp + 0x4b0]
    eax = (uint32_t)((uint32_t)(esp + 0x4b0u));
L_004a2146:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004a2147:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004a2148:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_004a214f:  // call 0x548a70
    t0 = 0x00548a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2154u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2154:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004a2158:  // call 0x548c00
    t0 = 0x00548c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a215du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a215d:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004a2161:  // mov dword ptr [esp + 0x68b8], 0xffffffff
    M32((uint32_t)(esp + 0x68b8u)) = (uint32_t)(0xffffffffu);
L_004a216c:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004a2171u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004a2171:  // mov ecx, dword ptr [esp + 0x68b0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68b0u)));
L_004a2178:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a2179:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a217a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004a217b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a217c:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004a2183:  // add esp, 0x68ac
    t0 = ladd<32>(esp, 0x68acu, f);
    esp = (uint32_t)(t0);
L_004a2189:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004a1f60, 004a1f60)
