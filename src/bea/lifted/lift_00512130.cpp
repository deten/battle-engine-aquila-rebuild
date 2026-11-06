// lifted from 00512130 (FUN_00512130, 812 bytes, 241 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00512130(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00512130;
L_00512130:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00512131:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_00512133:  // sub esp, 0x154
    t0 = lsub<32>(esp, 0x154u, f);
    esp = (uint32_t)(t0);
L_00512139:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051213a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051213b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051213c:  // push 0x512040
    t0 = 0x512040u; esp -= 4; M32(esp) = t0;
L_00512141:  // call dword ptr [0x5d815c]
    t0 = M32((uint32_t)(0x5d815cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512147u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512147:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0051214a:  // lea eax, [ebp - 0x154]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffeacu));
L_00512150:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_00512155:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00512156:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00512157:  // call dword ptr [0x5d8158]
    t0 = M32((uint32_t)(0x5d8158u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051215du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051215d:  // lea edx, [ebp - 0xc]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffff4u));
L_00512160:  // lea eax, [ebp - 0x154]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffeacu));
L_00512166:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00512167:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00512168:  // mov dword ptr [ebp - 0xc], 0
    M32((uint32_t)(ebp + 0xfffffff4u)) = (uint32_t)(0x0u);
L_0051216f:  // call 0x55d69a
    t0 = 0x0055d69au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512174u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512174:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00512176:  // add eax, 3
    t0 = ladd<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_00512179:  // and al, 0xfc
    t0 = llog<8>((eax & 0xffu) & 0xfcu, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0051217b:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512180u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512180:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00512182:  // lea ecx, [ebp - 0x154]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffeacu));
L_00512188:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00512189:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051218a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051218c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051218d:  // call 0x55d694
    t0 = 0x0055d694u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512192u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512192:  // lea edx, [ebp - 4]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffffcu));
L_00512195:  // lea eax, [ebp - 0x10]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffff0u));
L_00512198:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00512199:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051219a:  // push 0x624508
    t0 = 0x624508u; esp -= 4; M32(esp) = t0;
L_0051219f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005121a0:  // call 0x55d68e
    t0 = 0x0055d68eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005121a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005121a5:  // mov eax, dword ptr [ebp - 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfffffff0u)));
L_005121a8:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_005121aa:  // mov ebx, dword ptr [0x5d829c]
    ebx = (uint32_t)(M32((uint32_t)(0x5d829cu)));
L_005121b0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005121b2:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005121b5:  // push 0x8554c8
    t0 = 0x8554c8u; esp -= 4; M32(esp) = t0;
L_005121ba:  // shr ecx, 0x10
    t0 = lshr<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_005121bd:  // mov dword ptr [0x629410], ecx
    M32((uint32_t)(0x629410u)) = (uint32_t)(ecx);
L_005121c3:  // mov dx, word ptr [eax + 8]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + 0x8u))) & 0xffffu);
L_005121c7:  // mov dword ptr [0x679980], edx
    M32((uint32_t)(0x679980u)) = (uint32_t)(edx);
L_005121cd:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005121d0:  // shr eax, 0x10
    t0 = lshr<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_005121d3:  // mov esi, 8
    esi = (uint32_t)(0x8u);
L_005121d8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005121da:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_005121dc:  // mov dword ptr [0x679984], eax
    M32((uint32_t)(0x679984u)) = (uint32_t)(eax);
L_005121e1:  // mov dword ptr [0x8554c8], esi
    M32((uint32_t)(0x8554c8u)) = (uint32_t)(esi);
L_005121e7:  // call ebx
    t0 = ebx; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005121e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005121e9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005121eb:  // je 0x512201
    if (f.zf) goto L_00512201;
L_005121ed:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005121ef:  // lea ecx, [ebp - 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffff8u));
L_005121f2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005121f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005121f4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005121f5:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_005121f7:  // mov dword ptr [ebp - 8], esi
    M32((uint32_t)(ebp + 0xfffffff8u)) = (uint32_t)(esi);
L_005121fa:  // mov dword ptr [ebp - 4], edi
    M32((uint32_t)(ebp + 0xfffffffcu)) = (uint32_t)(edi);
L_005121fd:  // call ebx
    t0 = ebx; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005121ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005121ff:  // jmp 0x51220d
    goto L_0051220d;
L_00512201:  // mov dword ptr [0x8554c8], 0
    M32((uint32_t)(0x8554c8u)) = (uint32_t)(0x0u);
L_0051220b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0051220d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051220e:  // push 0x8554c0
    t0 = 0x8554c0u; esp -= 4; M32(esp) = t0;
L_00512213:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00512214:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_00512216:  // mov dword ptr [0x8554c0], esi
    M32((uint32_t)(0x8554c0u)) = (uint32_t)(esi);
L_0051221c:  // call ebx
    t0 = ebx; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051221eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051221e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00512220:  // je 0x512234
    if (f.zf) goto L_00512234;
L_00512222:  // lea edx, [ebp - 8]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffff8u));
L_00512225:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00512226:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00512227:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00512228:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_0051222a:  // mov dword ptr [ebp - 8], esi
    M32((uint32_t)(ebp + 0xfffffff8u)) = (uint32_t)(esi);
L_0051222d:  // mov dword ptr [ebp - 4], edi
    M32((uint32_t)(ebp + 0xfffffffcu)) = (uint32_t)(edi);
L_00512230:  // call ebx
    t0 = ebx; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512232u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512232:  // jmp 0x51223a
    goto L_0051223a;
L_00512234:  // mov dword ptr [0x8554c0], edi
    M32((uint32_t)(0x8554c0u)) = (uint32_t)(edi);
L_0051223a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051223b:  // push 0x8554a8
    t0 = 0x8554a8u; esp -= 4; M32(esp) = t0;
L_00512240:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00512241:  // push 0x32
    t0 = 0x32u; esp -= 4; M32(esp) = t0;
L_00512243:  // mov dword ptr [0x8554a8], 0x18
    M32((uint32_t)(0x8554a8u)) = (uint32_t)(0x18u);
L_0051224d:  // call ebx
    t0 = ebx; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051224fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051224f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00512251:  // je 0x512277
    if (f.zf) goto L_00512277;
L_00512253:  // lea eax, [ebp - 0x28]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffffd8u));
L_00512256:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00512258:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_0051225d:  // mov esi, 0x8554a8
    esi = (uint32_t)(0x8554a8u);
L_00512262:  // lea edi, [ebp - 0x28]
    edi = (uint32_t)((uint32_t)(ebp + 0xffffffd8u));
L_00512265:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00512266:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00512268:  // push 0x33
    t0 = 0x33u; esp -= 4; M32(esp) = t0;
L_0051226a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0051226c:  // mov dword ptr [ebp - 0x24], 0
    M32((uint32_t)(ebp + 0xffffffdcu)) = (uint32_t)(0x0u);
L_00512273:  // call ebx
    t0 = ebx; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512275u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512275:  // jmp 0x51227d
    goto L_0051227d;
L_00512277:  // mov dword ptr [0x8554a8], edi
    M32((uint32_t)(0x8554a8u)) = (uint32_t)(edi);
L_0051227d:  // push 0x512070
    t0 = 0x512070u; esp -= 4; M32(esp) = t0;
L_00512282:  // call 0x55dfa6
    t0 = 0x0055dfa6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512287u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512287:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0051228a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051228d:  // mov dword ptr [0x88a0bc], 0x2000000
    M32((uint32_t)(0x88a0bcu)) = (uint32_t)(0x2000000u);
L_00512297:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00512298:  // mov ecx, 0x662db8
    ecx = (uint32_t)(0x662db8u);
L_0051229d:  // call 0x423bc0
    t0 = 0x00423bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005122a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005122a2:  // mov edx, dword ptr [0x88a0bc]
    edx = (uint32_t)(M32((uint32_t)(0x88a0bcu)));
L_005122a8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005122a9:  // push 0x63ddac
    t0 = 0x63ddacu; esp -= 4; M32(esp) = t0;
L_005122ae:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_005122b3:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005122b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005122b8:  // mov eax, dword ptr [0x88a0bc]
    eax = (uint32_t)(M32((uint32_t)(0x88a0bcu)));
L_005122bd:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_005122c0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005122c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005122c6:  // call 0x548f90
    t0 = 0x00548f90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005122cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005122cb:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005122ce:  // push 0x629038
    t0 = 0x629038u; esp -= 4; M32(esp) = t0;
L_005122d3:  // push 0x63db18
    t0 = 0x63db18u; esp -= 4; M32(esp) = t0;
L_005122d8:  // mov dword ptr [0x889064], ecx
    M32((uint32_t)(0x889064u)) = (uint32_t)(ecx);
L_005122de:  // call 0x55e490
    t0 = 0x0055e490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005122e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005122e3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_005122e5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005122e8:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_005122ea:  // je 0x51235b
    if (f.zf) goto L_0051235b;
L_005122ec:  // call 0x421430
    t0 = 0x00421430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005122f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005122f1:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_005122f6:  // mov esi, eax
    esi = (uint32_t)(eax);
L_005122f8:  // push 0x63dd8c
    t0 = 0x63dd8cu; esp -= 4; M32(esp) = t0;
L_005122fd:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_005122ff:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00512300:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00512305:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051230au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051230a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051230b:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0051230d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051230e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00512310:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00512311:  // call 0x55f4d7
    t0 = 0x0055f4d7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512316u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512316:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00512319:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0051231b:  // jne 0x512347
    if (!f.zf) goto L_00512347;
L_0051231d:  // push 0x63dd70
    t0 = 0x63dd70u; esp -= 4; M32(esp) = t0;
L_00512322:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00512327:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051232cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051232c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051232f:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_00512334:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00512336:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00512337:  // call 0x421200
    t0 = 0x00421200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051233cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051233c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051233e:  // je 0x512347
    if (f.zf) goto L_00512347;
L_00512340:  // mov byte ptr [0x8554a4], 1
    M8((uint32_t)(0x8554a4u)) = (uint8_t)(0x1u);
L_00512347:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00512348:  // call 0x55e4a3
    t0 = 0x0055e4a3u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051234du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051234d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00512350:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00512355:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00512356:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051235bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051235b:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_00512360:  // call 0x41b7c0
    t0 = 0x0041b7c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512365u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512365:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00512368:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051236d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051236e:  // call 0x5290a0
    t0 = 0x005290a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512373u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512373:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00512375:  // jge 0x512388
    if ((f.sf == f.of)) goto L_00512388;
L_00512377:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00512379:  // lea esp, [ebp - 0x160]
    esp = (uint32_t)((uint32_t)(ebp + 0xfffffea0u));
L_0051237f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00512380:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00512381:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00512382:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_00512384:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00512385:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00512388:  // push 0x71
    t0 = 0x71u; esp -= 4; M32(esp) = t0;
L_0051238a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051238c:  // call dword ptr [0x5d826c]
    t0 = M32((uint32_t)(0x5d826cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512392u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512392:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00512394:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00512396:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00512398:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051239a:  // push 0x889044
    t0 = 0x889044u; esp -= 4; M32(esp) = t0;
L_0051239f:  // mov dword ptr [0x889060], eax
    M32((uint32_t)(0x889060u)) = (uint32_t)(eax);
L_005123a4:  // call dword ptr [0x5d8268]
    t0 = M32((uint32_t)(0x5d8268u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005123aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005123aa:  // cmp dword ptr [0x889048], 0x12
    t0 = lsub<32>(M32((uint32_t)(0x889048u)), 0x12u, f);
L_005123b1:  // je 0x512448
    if (f.zf) goto L_00512448;
L_005123b7:  // mov ecx, 0x896ca4
    ecx = (uint32_t)(0x896ca4u);
L_005123bc:  // mov byte ptr [0x888c78], 1
    M8((uint32_t)(0x888c78u)) = (uint8_t)(0x1u);
L_005123c3:  // call 0x4efb10
    t0 = 0x004efb10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005123c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005123c8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005123ca:  // je 0x512429
    if (f.zf) goto L_00512429;
L_005123cc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005123ce:  // push 0x512460
    t0 = 0x512460u; esp -= 4; M32(esp) = t0;
L_005123d3:  // push 0x63dd48
    t0 = 0x63dd48u; esp -= 4; M32(esp) = t0;
L_005123d8:  // push 0x63dd3c
    t0 = 0x63dd3cu; esp -= 4; M32(esp) = t0;
L_005123dd:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_005123e2:  // call 0x42af80
    t0 = 0x0042af80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005123e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005123e7:  // mov eax, dword ptr [0x88a0bc]
    eax = (uint32_t)(M32((uint32_t)(0x88a0bcu)));
L_005123ec:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_005123ed:  // and edx, 0xfffff
    t0 = llog<32>(edx & 0xfffffu, f);
    edx = (uint32_t)(t0);
L_005123f3:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_005123f5:  // sar eax, 0x14
    t0 = lsar<32>(eax, 0x14u, f);
    eax = (uint32_t)(t0);
L_005123f8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005123f9:  // push 0x63dd24
    t0 = 0x63dd24u; esp -= 4; M32(esp) = t0;
L_005123fe:  // push 0x663498
    t0 = 0x663498u; esp -= 4; M32(esp) = t0;
L_00512403:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512408u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512408:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0051240b:  // mov ecx, 0x896ca4
    ecx = (uint32_t)(0x896ca4u);
L_00512410:  // call 0x4f0330
    t0 = 0x004f0330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512415u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512415:  // mov ecx, 0x896ca4
    ecx = (uint32_t)(0x896ca4u);
L_0051241a:  // call 0x4f00e0
    t0 = 0x004f00e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051241fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051241f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00512424:  // call 0x52c430
    t0 = 0x0052c430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512429u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512429:  // mov eax, dword ptr [0x888a44]
    eax = (uint32_t)(M32((uint32_t)(0x888a44u)));
L_0051242e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051242f:  // call dword ptr [0x5d8264]
    t0 = M32((uint32_t)(0x5d8264u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512435u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512435:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00512436:  // call dword ptr [0x5d8260]
    t0 = M32((uint32_t)(0x5d8260u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0051243cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0051243c:  // mov eax, dword ptr [0x888a44]
    eax = (uint32_t)(M32((uint32_t)(0x888a44u)));
L_00512441:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00512442:  // call dword ptr [0x5d82b8]
    t0 = M32((uint32_t)(0x5d82b8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00512448u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00512448:  // mov eax, dword ptr [0x88904c]
    eax = (uint32_t)(M32((uint32_t)(0x88904cu)));
L_0051244d:  // lea esp, [ebp - 0x160]
    esp = (uint32_t)((uint32_t)(ebp + 0xfffffea0u));
L_00512453:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00512454:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00512455:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00512456:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_00512458:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00512459:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00512130, 00512130)
