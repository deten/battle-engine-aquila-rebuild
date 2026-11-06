// lifted from 0050f970 (FUN_0050f970, 200 bytes, 68 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050f970(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050f970;
L_0050f970:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0050f976:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0050f978:  // push 0x5d62d9
    t0 = 0x5d62d9u; esp -= 4; M32(esp) = t0;
L_0050f97d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050f97e:  // mov eax, dword ptr [0x9c51f0]
    eax = (uint32_t)(M32((uint32_t)(0x9c51f0u)));
L_0050f983:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0050f98a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050f98b:  // cmp eax, 0x2800
    t0 = lsub<32>(eax, 0x2800u, f);
L_0050f990:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050f991:  // jb 0x50f9d8
    if (f.cf) goto L_0050f9d8;
L_0050f993:  // mov ecx, dword ptr [0x8553f4]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f4u)));
L_0050f999:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0050f99b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050f99d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f99f:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050f9a2:  // je 0x50f9a8
    if (f.zf) goto L_0050f9a8;
L_0050f9a4:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050f9a6:  // jmp 0x50f9aa
    goto L_0050f9aa;
L_0050f9a8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050f9aa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f9ac:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050f9ae:  // je 0x50f9d8
    if (f.zf) goto L_0050f9d8;
L_0050f9b0:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050f9b4:  // cmp edx, edi
    t0 = lsub<32>(edx, edi, f);
L_0050f9b6:  // je 0x50f9eb
    if (f.zf) goto L_0050f9eb;
L_0050f9b8:  // mov ecx, dword ptr [0x8553f4]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f4u)));
L_0050f9be:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0050f9bf:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050f9c2:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050f9c5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f9c7:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050f9ca:  // je 0x50f9d0
    if (f.zf) goto L_0050f9d0;
L_0050f9cc:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050f9ce:  // jmp 0x50f9d2
    goto L_0050f9d2;
L_0050f9d0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050f9d2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f9d4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050f9d6:  // jne 0x50f9b4
    if (!f.zf) goto L_0050f9b4;
L_0050f9d8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050f9da:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050f9de:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050f9e5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050f9e6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050f9e7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050f9ea:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0050f9eb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050f9ed:  // je 0x50f9d8
    if (f.zf) goto L_0050f9d8;
L_0050f9ef:  // push 0xe6
    t0 = 0xe6u; esp -= 4; M32(esp) = t0;
L_0050f9f4:  // push 0x63d798
    t0 = 0x63d798u; esp -= 4; M32(esp) = t0;
L_0050f9f9:  // push 0x3e
    t0 = 0x3eu; esp -= 4; M32(esp) = t0;
L_0050f9fb:  // push 0x3f8
    t0 = 0x3f8u; esp -= 4; M32(esp) = t0;
L_0050fa00:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050fa05:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050fa0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050fa0a:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0050fa0e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050fa10:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0050fa18:  // je 0x50f9d8
    if (f.zf) goto L_0050f9d8;
L_0050fa1a:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050fa1e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050fa1f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050fa20:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050fa22:  // call 0x4e37f0
    t0 = 0x004e37f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050fa27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050fa27:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050fa2b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050fa2c:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050fa33:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050fa34:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050fa37:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0050f970, 0050f970)
