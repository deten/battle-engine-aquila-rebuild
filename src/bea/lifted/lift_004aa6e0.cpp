// lifted from 004aa6e0 (FUN_004aa6e0, 246 bytes, 76 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004aa6e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004aa6e0;
L_004aa6e0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004aa6e6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004aa6e8:  // push 0x5d3889
    t0 = 0x5d3889u; esp -= 4; M32(esp) = t0;
L_004aa6ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aa6ee:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004aa6f5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004aa6f6:  // mov esi, dword ptr [0x704ad8]
    esi = (uint32_t)(M32((uint32_t)(0x704ad8u)));
L_004aa6fc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aa6fd:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004aa701:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004aa703:  // je 0x4aa720
    if (f.zf) goto L_004aa720;
L_004aa705:  // lea eax, [esi + 0x24]
    eax = (uint32_t)((uint32_t)(esi + 0x24u));
L_004aa708:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aa709:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aa70a:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aa70fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aa70f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004aa712:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aa714:  // je 0x4aa791
    if (f.zf) goto L_004aa791;
L_004aa716:  // mov esi, dword ptr [esi + 0x158]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x158u)));
L_004aa71c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004aa71e:  // jne 0x4aa705
    if (!f.zf) goto L_004aa705;
L_004aa720:  // push 0x755
    t0 = 0x755u; esp -= 4; M32(esp) = t0;
L_004aa725:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004aa72a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aa72c:  // push 0x174
    t0 = 0x174u; esp -= 4; M32(esp) = t0;
L_004aa731:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aa736:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aa73bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aa73b:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004aa73f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aa741:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004aa749:  // je 0x4aa756
    if (f.zf) goto L_004aa756;
L_004aa74b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004aa74d:  // call 0x4a5020
    t0 = 0x004a5020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aa752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aa752:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004aa754:  // jmp 0x4aa758
    goto L_004aa758;
L_004aa756:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004aa758:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004aa75a:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_004aa762:  // je 0x4aa7c3
    if (f.zf) goto L_004aa7c3;
L_004aa764:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004aa768:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aa769:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aa76a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004aa76c:  // call 0x4a5970
    t0 = 0x004a5970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aa771u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aa771:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aa773:  // je 0x4aa7b1
    if (f.zf) goto L_004aa7b1;
L_004aa775:  // mov eax, dword ptr [0x704ae0]
    eax = (uint32_t)(M32((uint32_t)(0x704ae0u)));
L_004aa77a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aa77c:  // je 0x4aa791
    if (f.zf) goto L_004aa791;
L_004aa77e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aa77f:  // push 0x62fc80
    t0 = 0x62fc80u; esp -= 4; M32(esp) = t0;
L_004aa784:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004aa789:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aa78eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aa78e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004aa791:  // mov eax, dword ptr [esi + 0x170]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_004aa797:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004aa798:  // mov dword ptr [esi + 0x170], eax
    M32((uint32_t)(esi + 0x170u)) = (uint32_t)(eax);
L_004aa79e:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004aa7a0:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004aa7a4:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004aa7ab:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004aa7ac:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004aa7ad:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004aa7b0:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004aa7b1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004aa7b3:  // call 0x4a50b0
    t0 = 0x004a50b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aa7b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aa7b8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004aa7b9:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aa7be:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aa7c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aa7c3:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004aa7c7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004aa7c8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004aa7ca:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004aa7d1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004aa7d2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004aa7d5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004aa6e0, 004aa6e0)
