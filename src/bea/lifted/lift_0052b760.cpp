// lifted from 0052b760 (FUN_0052b760, 213 bytes, 73 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0052b760(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0052b760;
L_0052b760:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b761:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052b762:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0052b764:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0052b766:  // call dword ptr [eax + 0x14]
    t0 = M32((uint32_t)(eax + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b769u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b769:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b76b:  // jl 0x52b832
    if ((f.sf != f.of)) goto L_0052b832;
L_0052b771:  // mov eax, dword ptr [esi + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32ea0u)));
L_0052b777:  // lea edx, [esi + 0x32e58]
    edx = (uint32_t)((uint32_t)(esi + 0x32e58u));
L_0052b77d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b77e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b77f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b781:  // call dword ptr [ecx + 0x40]
    t0 = M32((uint32_t)(ecx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b784u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b784:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b786:  // jl 0x52b832
    if ((f.sf != f.of)) goto L_0052b832;
L_0052b78c:  // mov eax, dword ptr [esi + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32ea0u)));
L_0052b792:  // lea edx, [esp + 4]
    edx = (uint32_t)((uint32_t)(esp + 0x4u));
L_0052b796:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b797:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b799:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b79b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b79d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b79f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b7a0:  // call dword ptr [ecx + 0x48]
    t0 = M32((uint32_t)(ecx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b7a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b7a3:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0052b7a7:  // lea edx, [esi + 0x32fd4]
    edx = (uint32_t)((uint32_t)(esi + 0x32fd4u));
L_0052b7ad:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b7ae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b7af:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b7b1:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b7b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b7b4:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0052b7b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b7b9:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b7bb:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b7beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b7be:  // mov eax, dword ptr [esi + 0x330c4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x330c4u)));
L_0052b7c4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b7c6:  // je 0x52b7ff
    if (f.zf) goto L_0052b7ff;
L_0052b7c8:  // mov eax, dword ptr [esi + 0x32e44]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e44u)));
L_0052b7ce:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b7d0:  // jne 0x52b7ff
    if (!f.zf) goto L_0052b7ff;
L_0052b7d2:  // mov edx, dword ptr [esi + 0x32e94]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x32e94u)));
L_0052b7d8:  // push -0xc
    t0 = 0xfffffff4u; esp -= 4; M32(esp) = t0;
L_0052b7da:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b7db:  // call dword ptr [0x5d82cc]
    t0 = M32((uint32_t)(0x5d82ccu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b7e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b7e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b7e2:  // mov eax, dword ptr [esi + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32ea0u)));
L_0052b7e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b7e9:  // call 0x52c8d0
    t0 = 0x0052c8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b7eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b7ee:  // mov eax, dword ptr [esi + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32ea0u)));
L_0052b7f4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b7f7:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b7f9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052b7fb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b7fc:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b7ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b7ff:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0052b801:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052b803:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b806u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b806:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b808:  // jl 0x52b832
    if ((f.sf != f.of)) goto L_0052b832;
L_0052b80a:  // mov eax, dword ptr [esi + 0x32e50]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e50u)));
L_0052b810:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b812:  // jne 0x52b830
    if (!f.zf) goto L_0052b830;
L_0052b814:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052b816:  // mov dword ptr [esi + 0x32e54], 1
    M32((uint32_t)(esi + 0x32e54u)) = (uint32_t)(0x1u);
L_0052b820:  // call 0x52cd20
    t0 = 0x0052cd20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b825u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b825:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0052b827:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052b829:  // call 0x52cd20
    t0 = 0x0052cd20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b82eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b82e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0052b830:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052b832:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052b833:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0052b834:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0052b760, 0052b760)
