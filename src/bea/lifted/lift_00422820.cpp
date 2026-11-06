// lifted from 00422820 (vslot59, 130 bytes, 47 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00422820(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00422820;
L_00422820:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00422821:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00422823:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00422824:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00422827:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_0042282a:  // call dword ptr [eax + 0x58]
    t0 = M32((uint32_t)(eax + 0x58u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042282du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042282d:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00422830:  // je 0x42289d
    if (f.zf) goto L_0042289d;
L_00422832:  // mov eax, dword ptr [esi + 0x27c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x27cu)));
L_00422838:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00422839:  // je 0x422870
    if (f.zf) goto L_00422870;
L_0042283b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0042283c:  // jne 0x42289d
    if (!f.zf) goto L_0042289d;
L_0042283e:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00422841:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00422843:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00422845:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00422847:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00422849:  // push 0x6243f8
    t0 = 0x6243f8u; esp -= 4; M32(esp) = t0;
L_0042284e:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00422851u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00422851:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00422853:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00422858u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00422858:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00422859:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042285b:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00422861u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00422861:  // mov dword ptr [esi + 0x27c], 0
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x0u);
L_0042286b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042286c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042286e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042286f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00422870:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00422873:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00422875:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00422877:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00422879:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0042287b:  // push 0x624438
    t0 = 0x624438u; esp -= 4; M32(esp) = t0;
L_00422880:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00422883u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00422883:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00422885:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042288au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042288a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042288b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0042288d:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00422893u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00422893:  // mov dword ptr [esi + 0x27c], 3
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x3u);
L_0042289d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042289e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004228a0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004228a1:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00422820, 00422820)
