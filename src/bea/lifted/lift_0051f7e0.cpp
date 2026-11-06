// lifted from 0051f7e0 (vslot6, 253 bytes, 69 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051f7e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051f7e0;
L_0051f7e0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0051f7e6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051f7e8:  // push 0x5d6889
    t0 = 0x5d6889u; esp -= 4; M32(esp) = t0;
L_0051f7ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051f7ee:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0051f7f5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051f7f6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051f7f7:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051f7fb:  // cmp edi, 0x16
    t0 = lsub<32>(edi, 0x16u, f);
L_0051f7fe:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0051f800:  // je 0x51f806
    if (f.zf) goto L_0051f806;
L_0051f802:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0051f804:  // jne 0x51f80d
    if (!f.zf) goto L_0051f80d;
L_0051f806:  // mov dword ptr [esi + 4], 0
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x0u);
L_0051f80d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051f812:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f817u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f817:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_0051f81d:  // cmp edi, 0x16
    t0 = lsub<32>(edi, 0x16u, f);
L_0051f820:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0051f823:  // je 0x51f829
    if (f.zf) goto L_0051f829;
L_0051f825:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0051f827:  // jne 0x51f874
    if (!f.zf) goto L_0051f874;
L_0051f829:  // mov eax, dword ptr [0x662aac]
    eax = (uint32_t)(M32((uint32_t)(0x662aacu)));
L_0051f82e:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_0051f831:  // mov ecx, dword ptr [0x662ab0]
    ecx = (uint32_t)(M32((uint32_t)(0x662ab0u)));
L_0051f837:  // mov dword ptr [esi + 0x10], ecx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(ecx);
L_0051f83a:  // mov eax, dword ptr [0x662acc]
    eax = (uint32_t)(M32((uint32_t)(0x662accu)));
L_0051f83f:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_0051f842:  // mov eax, dword ptr [0x662ad4]
    eax = (uint32_t)(M32((uint32_t)(0x662ad4u)));
L_0051f847:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_0051f84a:  // mov eax, dword ptr [0x662ad0]
    eax = (uint32_t)(M32((uint32_t)(0x662ad0u)));
L_0051f84f:  // mov dword ptr [esi + 0x1c], eax
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(eax);
L_0051f852:  // mov eax, dword ptr [0x662ad8]
    eax = (uint32_t)(M32((uint32_t)(0x662ad8u)));
L_0051f857:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051f85c:  // mov dword ptr [esi + 0x20], eax
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(eax);
L_0051f85f:  // call 0x4218f0
    t0 = 0x004218f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f864u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f864:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051f869:  // mov dword ptr [esi + 0x24], eax
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(eax);
L_0051f86c:  // call 0x421900
    t0 = 0x00421900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f871u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f871:  // mov dword ptr [esi + 0x28], eax
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(eax);
L_0051f874:  // mov ecx, dword ptr [0x89bc30]
    ecx = (uint32_t)(M32((uint32_t)(0x89bc30u)));
L_0051f87a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051f87c:  // jne 0x51f8c3
    if (!f.zf) goto L_0051f8c3;
L_0051f87e:  // push 0x196
    t0 = 0x196u; esp -= 4; M32(esp) = t0;
L_0051f883:  // push 0x63fc88
    t0 = 0x63fc88u; esp -= 4; M32(esp) = t0;
L_0051f888:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_0051f88a:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_0051f88c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0051f891:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f896u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f896:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0051f89a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051f89c:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0051f8a4:  // je 0x51f8b1
    if (f.zf) goto L_0051f8b1;
L_0051f8a6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051f8a8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051f8aa:  // call 0x4cde60
    t0 = 0x004cde60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f8afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f8af:  // jmp 0x51f8b3
    goto L_0051f8b3;
L_0051f8b1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0051f8b3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051f8b5:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_0051f8bd:  // mov dword ptr [0x89bc30], ecx
    M32((uint32_t)(0x89bc30u)) = (uint32_t)(ecx);
L_0051f8c3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051f8c5:  // call 0x4d0ff0
    t0 = 0x004d0ff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051f8cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051f8ca:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0051f8ce:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051f8cf:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0051f8d6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051f8d7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0051f8da:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051f7e0, 0051f7e0)
