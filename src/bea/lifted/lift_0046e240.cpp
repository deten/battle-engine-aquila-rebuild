// lifted from 0046e240 (FUN_0046e240, 540 bytes, 151 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0046e240(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0046e240;
L_0046e240:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e241:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046e242:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046e243:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0046e245:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0046e247:  // mov dword ptr [esi + 0x24], ebx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ebx);
L_0046e24a:  // mov eax, dword ptr [0x83d448]
    eax = (uint32_t)(M32((uint32_t)(0x83d448u)));
L_0046e24f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046e251:  // je 0x46e25a
    if (f.zf) goto L_0046e25a;
L_0046e253:  // mov byte ptr [0x66e8c0], 1
    M8((uint32_t)(0x66e8c0u)) = (uint8_t)(0x1u);
L_0046e25a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e25c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e25e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e260:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e265:  // call 0x42bbc0
    t0 = 0x0042bbc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e26au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e26a:  // mov eax, dword ptr [0x662dcc]
    eax = (uint32_t)(M32((uint32_t)(0x662dccu)));
L_0046e26f:  // mov byte ptr [0x66e8c0], bl
    M8((uint32_t)(0x66e8c0u)) = (uint8_t)((ebx & 0xffu));
L_0046e275:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046e277:  // je 0x46e283
    if (f.zf) goto L_0046e283;
L_0046e279:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_0046e27e:  // call 0x4bb490
    t0 = 0x004bb490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e283u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e283:  // cmp dword ptr [0x662f40], ebx
    t0 = lsub<32>(M32((uint32_t)(0x662f40u)), ebx, f);
L_0046e289:  // je 0x46e295
    if (f.zf) goto L_0046e295;
L_0046e28b:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0046e290:  // call 0x4e2c50
    t0 = 0x004e2c50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e295u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e295:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e297:  // mov dword ptr [esi + 0xa08], 1
    M32((uint32_t)(esi + 0xa08u)) = (uint32_t)(0x1u);
L_0046e2a1:  // call 0x46c360
    t0 = 0x0046c360u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e2a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e2a6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046e2a8:  // jne 0x46e2bc
    if (!f.zf) goto L_0046e2bc;
L_0046e2aa:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0046e2ac:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e2ae:  // call dword ptr [eax + 8]
    t0 = M32((uint32_t)(eax + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e2b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e2b1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046e2b2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046e2b3:  // mov eax, 3
    eax = (uint32_t)(0x3u);
L_0046e2b8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046e2b9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0046e2bc:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0046e2c0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e2c2:  // mov dword ptr [esi + 0x2a0], ebp
    M32((uint32_t)(esi + 0x2a0u)) = (uint32_t)(ebp);
L_0046e2c8:  // call 0x46c430
    t0 = 0x0046c430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e2cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e2cd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046e2cf:  // jne 0x46e2e3
    if (!f.zf) goto L_0046e2e3;
L_0046e2d1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e2d3:  // call 0x46ca70
    t0 = 0x0046ca70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e2d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e2d8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046e2d9:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046e2da:  // mov eax, 3
    eax = (uint32_t)(0x3u);
L_0046e2df:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046e2e0:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0046e2e3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046e2e4:  // or edi, 0xffffffff
    t0 = llog<32>(edi | 0xffffffffu, f);
    edi = (uint32_t)(t0);
L_0046e2e7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e2e8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046e2e9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e2eb:  // mov dword ptr [0x8552fc], edi
    M32((uint32_t)(0x8552fcu)) = (uint32_t)(edi);
L_0046e2f1:  // mov dword ptr [0x855300], edi
    M32((uint32_t)(0x855300u)) = (uint32_t)(edi);
L_0046e2f7:  // mov dword ptr [0x855304], edi
    M32((uint32_t)(0x855304u)) = (uint32_t)(edi);
L_0046e2fd:  // mov dword ptr [0x855308], edi
    M32((uint32_t)(0x855308u)) = (uint32_t)(edi);
L_0046e303:  // call 0x46cd30
    t0 = 0x0046cd30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e308u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e308:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046e30a:  // jne 0x46e31c
    if (!f.zf) goto L_0046e31c;
L_0046e30c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046e30d:  // push 0x62c140
    t0 = 0x62c140u; esp -= 4; M32(esp) = t0;
L_0046e312:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e317:  // call 0x42c750
    t0 = 0x0042c750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e31cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e31c:  // push 0x42820000
    t0 = 0x42820000u; esp -= 4; M32(esp) = t0;
L_0046e321:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_0046e326:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e32b:  // call 0x42cf40
    t0 = 0x0042cf40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e330u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e330:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e335:  // call 0x53d6d0
    t0 = 0x0053d6d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e33au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e33a:  // push 0x3ea8f5c3
    t0 = 0x3ea8f5c3u; esp -= 4; M32(esp) = t0;
L_0046e33f:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e344:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e349u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e349:  // mov ecx, 0x679fa8
    ecx = (uint32_t)(0x679fa8u);
L_0046e34e:  // call 0x472a10
    t0 = 0x00472a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e353u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e353:  // push 0x3f28f5c3
    t0 = 0x3f28f5c3u; esp -= 4; M32(esp) = t0;
L_0046e358:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e35d:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e362u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e362:  // mov ecx, 0x8aa4e8
    ecx = (uint32_t)(0x8aa4e8u);
L_0046e367:  // call 0x481650
    t0 = 0x00481650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e36cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e36c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046e371:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e376:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e37bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e37b:  // push 0x42a00000
    t0 = 0x42a00000u; esp -= 4; M32(esp) = t0;
L_0046e380:  // push 0x42820000
    t0 = 0x42820000u; esp -= 4; M32(esp) = t0;
L_0046e385:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e38a:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_0046e38f:  // call 0x42cf40
    t0 = 0x0042cf40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e394u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e394:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0046e396:  // mov ecx, dword ptr [esi + 0x2ec]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2ecu)));
L_0046e39c:  // call 0x4b7320
    t0 = 0x004b7320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e3a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e3a1:  // mov ecx, dword ptr [esi + 0x2f0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2f0u)));
L_0046e3a7:  // call 0x4b8e70
    t0 = 0x004b8e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e3acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e3ac:  // mov ecx, dword ptr [esi + 0x2f4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2f4u)));
L_0046e3b2:  // call 0x4d0510
    t0 = 0x004d0510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e3b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e3b7:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0046e3bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e3bc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e3be:  // call 0x46dc30
    t0 = 0x0046dc30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e3c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e3c3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e3c5:  // mov dword ptr [esi + 0x34], eax
    M32((uint32_t)(esi + 0x34u)) = (uint32_t)(eax);
L_0046e3c8:  // call 0x46ca70
    t0 = 0x0046ca70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e3cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e3cd:  // mov eax, dword ptr [0x83d454]
    eax = (uint32_t)(M32((uint32_t)(0x83d454u)));
L_0046e3d2:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_0046e3d7:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0046e3d9:  // jne 0x46e3e4
    if (!f.zf) goto L_0046e3e4;
L_0046e3db:  // cmp ebp, 5
    t0 = lsub<32>(ebp, 0x5u, f);
L_0046e3de:  // jge 0x46e3e4
    if ((f.sf == f.of)) goto L_0046e3e4;
L_0046e3e0:  // mov dword ptr [esi + 0x34], ecx
    M32((uint32_t)(esi + 0x34u)) = (uint32_t)(ecx);
L_0046e3e3:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0046e3e4:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0046e3e7:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0046e3e9:  // jne 0x46e443
    if (!f.zf) goto L_0046e443;
L_0046e3eb:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_0046e3f0:  // mov dword ptr [esi + 0x24], 1
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(0x1u);
L_0046e3f7:  // call 0x4bb490
    t0 = 0x004bb490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e3fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e3fc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e3fe:  // call 0x46c430
    t0 = 0x0046c430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e403u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e403:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046e405:  // jne 0x46e410
    if (!f.zf) goto L_0046e410;
L_0046e407:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e409:  // call 0x46ca70
    t0 = 0x0046ca70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e40eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e40e:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0046e410:  // cmp edi, 1
    t0 = lsub<32>(edi, 0x1u, f);
L_0046e413:  // mov dword ptr [esi + 0xa08], ebx
    M32((uint32_t)(esi + 0xa08u)) = (uint32_t)(ebx);
L_0046e419:  // je 0x46e396
    if (f.zf) goto L_0046e396;
L_0046e41f:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_0046e424:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e425:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e42a:  // mov dword ptr [esi + 0x24], ebx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ebx);
L_0046e42d:  // call 0x42cf40
    t0 = 0x0042cf40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e432u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e432:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0046e434:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046e436:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e439u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e439:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0046e43c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0046e43d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046e43e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046e43f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046e440:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0046e443:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0046e446:  // jne 0x46e40e
    if (!f.zf) goto L_0046e40e;
L_0046e448:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0046e44a:  // push 0xf5
    t0 = 0xf5u; esp -= 4; M32(esp) = t0;
L_0046e44f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e450:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0046e455:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046e45au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046e45a:  // jmp 0x46e410
    goto L_0046e410;
}

LIFT_FUNCTION_NF(0x0046e240, 0046e240)
