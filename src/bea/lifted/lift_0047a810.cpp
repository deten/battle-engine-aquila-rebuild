// lifted from 0047a810 (FUN_0047a810, 159 bytes, 51 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047a810(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047a810;
L_0047a810:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0047a812:  // push 0x5d2aee
    t0 = 0x5d2aeeu; esp -= 4; M32(esp) = t0;
L_0047a817:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0047a81d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047a81e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0047a825:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047a826:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047a827:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047a829:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_0047a82d:  // mov dword ptr [esi], 0x5d8d1c
    M32((uint32_t)(esi)) = (uint32_t)(0x5d8d1cu);
L_0047a833:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_0047a836:  // lea edx, [esi + 0x28]
    edx = (uint32_t)((uint32_t)(esi + 0x28u));
L_0047a839:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047a83b:  // mov dword ptr [esp + 0x10], 2
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x2u);
L_0047a843:  // je 0x47a854
    if (f.zf) goto L_0047a854;
L_0047a845:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0047a848:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047a84a:  // je 0x47a854
    if (f.zf) goto L_0047a854;
L_0047a84c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047a84d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047a84f:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047a854u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047a854:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0047a857:  // lea edx, [esi + 0x24]
    edx = (uint32_t)((uint32_t)(esi + 0x24u));
L_0047a85a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047a85c:  // mov byte ptr [esp + 0x10], 1
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x1u);
L_0047a861:  // je 0x47a872
    if (f.zf) goto L_0047a872;
L_0047a863:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0047a866:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047a868:  // je 0x47a872
    if (f.zf) goto L_0047a872;
L_0047a86a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047a86b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047a86d:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047a872u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047a872:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047a875:  // lea edx, [esi + 0xc]
    edx = (uint32_t)((uint32_t)(esi + 0xcu));
L_0047a878:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047a87a:  // mov byte ptr [esp + 0x10], 0
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x0u);
L_0047a87f:  // je 0x47a890
    if (f.zf) goto L_0047a890;
L_0047a881:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0047a884:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047a886:  // je 0x47a890
    if (f.zf) goto L_0047a890;
L_0047a888:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047a889:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047a88b:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047a890u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047a890:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047a892:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_0047a89a:  // call 0x4bac40
    t0 = 0x004bac40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0047a89fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0047a89f:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0047a8a3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047a8a4:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0047a8ab:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047a8ae:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0047a810, 0047a810)
