// lifted from 0053f190 (vslot11, 949 bytes, 267 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053f190(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053f190;
L_0053f190:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0053f196:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053f198:  // push 0x5d7819
    t0 = 0x5d7819u; esp -= 4; M32(esp) = t0;
L_0053f19d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f19e:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053f1a2:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0053f1a9:  // sub esp, 0x9c
    t0 = lsub<32>(esp, 0x9cu, f);
    esp = (uint32_t)(t0);
L_0053f1af:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053f1b0:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0053f1b2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f1b3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f1b4:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0053f1b8:  // push 0x62c0b0
    t0 = 0x62c0b0u; esp -= 4; M32(esp) = t0;
L_0053f1bd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053f1be:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f1c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f1c3:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0053f1c7:  // push 0x629038
    t0 = 0x629038u; esp -= 4; M32(esp) = t0;
L_0053f1cc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053f1cd:  // call 0x55e490
    t0 = 0x0055e490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f1d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f1d2:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0053f1d4:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0053f1d7:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0053f1d9:  // jne 0x53f1e2
    if (!f.zf) goto L_0053f1e2;
L_0053f1db:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053f1dd:  // jmp 0x53f52c
    goto L_0053f52c;
L_0053f1e2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053f1e3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053f1e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f1e5:  // call 0x55e4a3
    t0 = 0x0055e4a3u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f1eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f1ea:  // lea ebx, [ebp + 0x10]
    ebx = (uint32_t)((uint32_t)(ebp + 0x10u));
L_0053f1ed:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053f1f0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f1f2:  // call 0x541240
    t0 = 0x00541240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f1f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f1f7:  // mov eax, dword ptr [esp + 0xc0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0053f1fe:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0053f202:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f203:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f204:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f205:  // push 0x1e0
    t0 = 0x1e0u; esp -= 4; M32(esp) = t0;
L_0053f20a:  // push 0x280
    t0 = 0x280u; esp -= 4; M32(esp) = t0;
L_0053f20f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053f210:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f212:  // call 0x5412e0
    t0 = 0x005412e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f217u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f217:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_0053f219:  // push 0x650644
    t0 = 0x650644u; esp -= 4; M32(esp) = t0;
L_0053f21e:  // push 0x27
    t0 = 0x27u; esp -= 4; M32(esp) = t0;
L_0053f220:  // push 0x178
    t0 = 0x178u; esp -= 4; M32(esp) = t0;
L_0053f225:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053f22a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f22fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f22f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0053f233:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_0053f235:  // mov dword ptr [esp + 0xb4], esi
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(esi);
L_0053f23c:  // je 0x53f24d
    if (f.zf) goto L_0053f24d;
L_0053f23e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053f240:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f241:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053f242:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053f244:  // call 0x5145f0
    t0 = 0x005145f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f249u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f249:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0053f24b:  // jmp 0x53f24f
    goto L_0053f24f;
L_0053f24d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0053f24f:  // mov ecx, 0x83d248
    ecx = (uint32_t)(0x83d248u);
L_0053f254:  // mov dword ptr [esp + 0xb4], 0xffffffff
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(0xffffffffu);
L_0053f25f:  // call 0x4eb1e0
    t0 = 0x004eb1e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f264u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f264:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053f269:  // call 0x5508e0
    t0 = 0x005508e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f26eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f26e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f26f:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053f271:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053f276:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f27bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f27b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f27c:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_0053f27e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053f283:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f288u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f288:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f289:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f28a:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053f28f:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f294u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f294:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f295:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f29a:  // call 0x515910
    t0 = 0x00515910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f29fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f29f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f2a0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f2a5:  // call 0x4d2580
    t0 = 0x004d2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f2aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f2aa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f2ab:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f2b0:  // call 0x515910
    t0 = 0x00515910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f2b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f2b5:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0053f2b7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053f2b9:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f2bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f2bc:  // mov dword ptr [ebp + 8], esi
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(esi);
L_0053f2bf:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0053f2c6:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0053f2cd:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0053f2d0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f2d2:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_0053f2d6:  // jne 0x53f4ee
    if (!f.zf) goto L_0053f4ee;
L_0053f2dc:  // call 0x523db0
    t0 = 0x00523db0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f2e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f2e1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f2e6:  // call 0x515880
    t0 = 0x00515880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f2ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f2eb:  // mov eax, dword ptr [0x89bdf8]
    eax = (uint32_t)(M32((uint32_t)(0x89bdf8u)));
L_0053f2f0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f2f2:  // jne 0x53f306
    if (!f.zf) goto L_0053f306;
L_0053f2f4:  // mov eax, dword ptr [0x89be10]
    eax = (uint32_t)(M32((uint32_t)(0x89be10u)));
L_0053f2f9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f2fb:  // jne 0x53f306
    if (!f.zf) goto L_0053f306;
L_0053f2fd:  // mov eax, dword ptr [0x89be28]
    eax = (uint32_t)(M32((uint32_t)(0x89be28u)));
L_0053f302:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f304:  // je 0x53f31c
    if (f.zf) goto L_0053f31c;
L_0053f306:  // call 0x523db0
    t0 = 0x00523db0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f30bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f30b:  // mov dword ptr [ebp + 8], 1
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(0x1u);
L_0053f312:  // mov dword ptr [0x6630cc], 0
    M32((uint32_t)(0x6630ccu)) = (uint32_t)(0x0u);
L_0053f31c:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0053f31e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053f320:  // call dword ptr [eax + 8]
    t0 = M32((uint32_t)(eax + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f323u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f323:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053f325:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f327:  // call 0x541d30
    t0 = 0x00541d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f32cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f32c:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0053f32f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0053f333:  // jne 0x53f342
    if (!f.zf) goto L_0053f342;
L_0053f335:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053f337:  // call dword ptr [0x5d8154]
    t0 = M32((uint32_t)(0x5d8154u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f33du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f33d:  // jmp 0x53f4e3
    goto L_0053f4e3;
L_0053f342:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_0053f347:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f349:  // je 0x53f365
    if (f.zf) goto L_0053f365;
L_0053f34b:  // cmp dword ptr [esp + 0x24], 0x96
    t0 = lsub<32>(M32((uint32_t)(esp + 0x24u)), 0x96u, f);
L_0053f353:  // jl 0x53f365
    if ((f.sf != f.of)) goto L_0053f365;
L_0053f355:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0053f358:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053f35d:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053f35f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053f360:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053f362:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f365u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f365:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f367:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f36c:  // call 0x515910
    t0 = 0x00515910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f371u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f371:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f376:  // call 0x5158c0
    t0 = 0x005158c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f37bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f37b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f37d:  // je 0x53f4d7
    if (f.zf) goto L_0053f4d7;
L_0053f383:  // mov eax, dword ptr [0x888a08]
    eax = (uint32_t)(M32((uint32_t)(0x888a08u)));
L_0053f388:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f38a:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053f38e:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0053f392:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0053f396:  // call 0x541770
    t0 = 0x00541770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f39bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f39b:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053f39f:  // mov ecx, dword ptr [0x888a0c]
    ecx = (uint32_t)(M32((uint32_t)(0x888a0cu)));
L_0053f3a5:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0053f3a9:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0053f3ad:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f3af:  // fdivr dword ptr [esp + 0x20]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x20u))) / (ST(0));
L_0053f3b3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0053f3b7:  // fld dword ptr [0x888a40]
    lpush(x, (long double)F32((uint32_t)(0x888a40u)));
L_0053f3bd:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0053f3c1:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0053f3c5:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_0053f3c9:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0053f3cd:  // call 0x541780
    t0 = 0x00541780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f3d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f3d2:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0053f3d6:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053f3da:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_0053f3de:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053f3e2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f3e4:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053f3e6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053f3e7:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0053f3eb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f3ec:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f3ee:  // fsubr dword ptr [esp + 0x28]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x28u))) - (ST(0));
L_0053f3f2:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0053f3f8:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0053f3fc:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053f400:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053f401:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f403:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f405:  // call 0x541790
    t0 = 0x00541790u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f40au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f40a:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053f40e:  // mov byte ptr [esp + 0x1b], al
    M8((uint32_t)(esp + 0x1bu)) = (uint8_t)((eax & 0xffu));
L_0053f412:  // cmp edx, dword ptr [0x650610]
    t0 = lsub<32>(edx, M32((uint32_t)(0x650610u)), f);
L_0053f418:  // jl 0x53f4b9
    if ((f.sf != f.of)) goto L_0053f4b9;
L_0053f41e:  // mov eax, dword ptr [0x83d3ec]
    eax = (uint32_t)(M32((uint32_t)(0x83d3ecu)));
L_0053f423:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f425:  // je 0x53f4b9
    if (f.zf) goto L_0053f4b9;
L_0053f42b:  // movsx ecx, word ptr [eax + 0xb0]
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0xb0u))));
L_0053f432:  // mov edx, dword ptr [eax + 0xac]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_0053f438:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f43a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053f43f:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_0053f443:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f445:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f447:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f44c:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0053f450:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f455u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f455:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0053f459:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053f45a:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_0053f45e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f463:  // fidiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_0053f467:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053f46a:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f46fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f46f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0053f473:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0053f475:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_0053f479:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0053f47c:  // mov edx, dword ptr [0x83d3ec]
    edx = (uint32_t)(M32((uint32_t)(0x83d3ecu)));
L_0053f482:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0053f484:  // fidiv dword ptr [esp + 0x24]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_0053f488:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0053f48b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053f48c:  // lea ecx, [eax + esi - 0x1000000]
    ecx = (uint32_t)((uint32_t)(eax + esi + 0xff000000u));
L_0053f493:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053f496:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053f497:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053f498:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_0053f49d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f49f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f4a1:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f4a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f4a6:  // add esi, 7
    t0 = ladd<32>(esi, 0x7u, f);
    esi = (uint32_t)(t0);
L_0053f4a9:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0053f4ac:  // cmp esi, 0xff
    t0 = lsub<32>(esi, 0xffu, f);
L_0053f4b2:  // jbe 0x53f4b9
    if ((f.cf || f.zf)) goto L_0053f4b9;
L_0053f4b4:  // mov esi, 0xff
    esi = (uint32_t)(0xffu);
L_0053f4b9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f4be:  // call 0x5158e0
    t0 = 0x005158e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f4c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f4c3:  // mov al, byte ptr [esp + 0x1b]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1bu))) & 0xffu);
L_0053f4c7:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0053f4c9:  // je 0x53f4d7
    if (f.zf) goto L_0053f4d7;
L_0053f4cb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f4cd:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f4d2:  // call 0x4d2580
    t0 = 0x004d2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f4d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f4d7:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053f4db:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f4dd:  // jne 0x53f4ee
    if (!f.zf) goto L_0053f4ee;
L_0053f4df:  // inc dword ptr [esp + 0x24]
    t0 = linc<32>(M32((uint32_t)(esp + 0x24u)), f);
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(t0);
L_0053f4e3:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0053f4e6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f4e8:  // je 0x53f2dc
    if (f.zf) goto L_0053f2dc;
L_0053f4ee:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f4f0:  // call 0x541650
    t0 = 0x00541650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f4f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f4f5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053f4f7:  // call 0x541260
    t0 = 0x00541260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f4fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f4fc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f4fe:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f503:  // call 0x515910
    t0 = 0x00515910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f508u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f508:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053f50a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053f50f:  // call 0x4d2580
    t0 = 0x004d2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f514u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f514:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053f516:  // call 0x4bacb0
    t0 = 0x004bacb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f51bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f51b:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0053f51d:  // je 0x53f527
    if (f.zf) goto L_0053f527;
L_0053f51f:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0053f521:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053f523:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053f525:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f527u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f527:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0053f52a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053f52b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053f52c:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0053f533:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053f534:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053f535:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0053f53c:  // add esp, 0xa8
    t0 = ladd<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_0053f542:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053f190, 0053f190)
