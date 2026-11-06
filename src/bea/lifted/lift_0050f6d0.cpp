// lifted from 0050f6d0 (FUN_0050f6d0, 200 bytes, 68 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050f6d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050f6d0;
L_0050f6d0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0050f6d6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0050f6d8:  // push 0x5d6239
    t0 = 0x5d6239u; esp -= 4; M32(esp) = t0;
L_0050f6dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050f6de:  // mov eax, dword ptr [0x9c51f0]
    eax = (uint32_t)(M32((uint32_t)(0x9c51f0u)));
L_0050f6e3:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0050f6ea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050f6eb:  // cmp eax, 0x2800
    t0 = lsub<32>(eax, 0x2800u, f);
L_0050f6f0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050f6f1:  // jb 0x50f738
    if (f.cf) goto L_0050f738;
L_0050f6f3:  // mov ecx, dword ptr [0x8553e8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553e8u)));
L_0050f6f9:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0050f6fb:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050f6fd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f6ff:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050f702:  // je 0x50f708
    if (f.zf) goto L_0050f708;
L_0050f704:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050f706:  // jmp 0x50f70a
    goto L_0050f70a;
L_0050f708:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050f70a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f70c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050f70e:  // je 0x50f738
    if (f.zf) goto L_0050f738;
L_0050f710:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050f714:  // cmp edx, edi
    t0 = lsub<32>(edx, edi, f);
L_0050f716:  // je 0x50f74b
    if (f.zf) goto L_0050f74b;
L_0050f718:  // mov ecx, dword ptr [0x8553e8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553e8u)));
L_0050f71e:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0050f71f:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050f722:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050f725:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f727:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050f72a:  // je 0x50f730
    if (f.zf) goto L_0050f730;
L_0050f72c:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050f72e:  // jmp 0x50f732
    goto L_0050f732;
L_0050f730:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050f732:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f734:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050f736:  // jne 0x50f714
    if (!f.zf) goto L_0050f714;
L_0050f738:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050f73a:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050f73e:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050f745:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050f746:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050f747:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050f74a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0050f74b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050f74d:  // je 0x50f738
    if (f.zf) goto L_0050f738;
L_0050f74f:  // push 0xc4
    t0 = 0xc4u; esp -= 4; M32(esp) = t0;
L_0050f754:  // push 0x63d798
    t0 = 0x63d798u; esp -= 4; M32(esp) = t0;
L_0050f759:  // push 0x3d
    t0 = 0x3du; esp -= 4; M32(esp) = t0;
L_0050f75b:  // push 0xb0
    t0 = 0xb0u; esp -= 4; M32(esp) = t0;
L_0050f760:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050f765:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050f76au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050f76a:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0050f76e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050f770:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0050f778:  // je 0x50f738
    if (f.zf) goto L_0050f738;
L_0050f77a:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050f77e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050f77f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050f780:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050f782:  // call 0x505e00
    t0 = 0x00505e00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050f787u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050f787:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050f78b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050f78c:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050f793:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050f794:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050f797:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0050f6d0, 0050f6d0)
