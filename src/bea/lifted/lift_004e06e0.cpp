// lifted from 004e06e0 (FUN_004e06e0, 309 bytes, 115 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e06e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e06e0;
L_004e06e0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e06e1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e06e2:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004e06e4:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004e06e6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e06e7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e06e8:  // mov eax, dword ptr [ebp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004e06eb:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e06ed:  // je 0x4e0734
    if (f.zf) goto L_004e0734;
L_004e06ef:  // mov edx, dword ptr [eax + 0x74]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x74u)));
L_004e06f2:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_004e06f4:  // je 0x4e06fc
    if (f.zf) goto L_004e06fc;
L_004e06f6:  // mov ecx, dword ptr [eax + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x78u)));
L_004e06f9:  // mov dword ptr [edx + 0x78], ecx
    M32((uint32_t)(edx + 0x78u)) = (uint32_t)(ecx);
L_004e06fc:  // mov ecx, dword ptr [eax + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x78u)));
L_004e06ff:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004e0701:  // je 0x4e070b
    if (f.zf) goto L_004e070b;
L_004e0703:  // mov esi, dword ptr [eax + 0x74]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x74u)));
L_004e0706:  // mov dword ptr [ecx + 0x74], esi
    M32((uint32_t)(ecx + 0x74u)) = (uint32_t)(esi);
L_004e0709:  // jmp 0x4e0711
    goto L_004e0711;
L_004e070b:  // mov ecx, dword ptr [eax + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x74u)));
L_004e070e:  // mov dword ptr [ebp + 0xc], ecx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(ecx);
L_004e0711:  // mov edi, dword ptr [ebp + 8]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004e0714:  // mov ecx, dword ptr [ebp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_004e0717:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004e0718:  // mov dword ptr [ebp + 8], edi
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(edi);
L_004e071b:  // mov dword ptr [eax + 0x74], ecx
    M32((uint32_t)(eax + 0x74u)) = (uint32_t)(ecx);
L_004e071e:  // mov dword ptr [eax + 0x78], ebx
    M32((uint32_t)(eax + 0x78u)) = (uint32_t)(ebx);
L_004e0721:  // mov ecx, dword ptr [ebp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_004e0724:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004e0726:  // je 0x4e072b
    if (f.zf) goto L_004e072b;
L_004e0728:  // mov dword ptr [ecx + 0x78], eax
    M32((uint32_t)(ecx + 0x78u)) = (uint32_t)(eax);
L_004e072b:  // mov dword ptr [ebp + 0x34], eax
    M32((uint32_t)(ebp + 0x34u)) = (uint32_t)(eax);
L_004e072e:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_004e0730:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004e0732:  // jne 0x4e06ef
    if (!f.zf) goto L_004e06ef;
L_004e0734:  // mov esi, dword ptr [ebp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_004e0737:  // mov dword ptr [ebp + 0xc], ebx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(ebx);
L_004e073a:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004e073c:  // je 0x4e075d
    if (f.zf) goto L_004e075d;
L_004e073e:  // mov edi, dword ptr [esi + 0x74]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004e0741:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004e0743:  // je 0x4e0757
    if (f.zf) goto L_004e0757;
L_004e0745:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e0747:  // call 0x4e2b30
    t0 = 0x004e2b30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e074cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e074c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e074d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004e0752:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e0757u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e0757:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004e0759:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004e075b:  // jne 0x4e073e
    if (!f.zf) goto L_004e073e;
L_004e075d:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_004e0760:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004e0762:  // je 0x4e0777
    if (f.zf) goto L_004e0777;
L_004e0764:  // mov esi, dword ptr [ecx + 0x74]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x74u)));
L_004e0767:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004e0769:  // je 0x4e0771
    if (f.zf) goto L_004e0771;
L_004e076b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e076d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004e076f:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e0771u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e0771:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004e0773:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e0775:  // jne 0x4e0764
    if (!f.zf) goto L_004e0764;
L_004e0777:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004e077c:  // mov dword ptr [ebp], ebx
    M32((uint32_t)(ebp)) = (uint32_t)(ebx);
L_004e077f:  // call 0x5171e0
    t0 = 0x005171e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e0784u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e0784:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_004e0787:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004e0789:  // je 0x4e0799
    if (f.zf) goto L_004e0799;
L_004e078b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e078c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004e0791:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e0796u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e0796:  // mov dword ptr [ebp + 0x10], ebx
    M32((uint32_t)(ebp + 0x10u)) = (uint32_t)(ebx);
L_004e0799:  // mov ebx, dword ptr [0x83cfe8]
    ebx = (uint32_t)(M32((uint32_t)(0x83cfe8u)));
L_004e079f:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e07a1:  // je 0x4e080c
    if (f.zf) goto L_004e080c;
L_004e07a3:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_004e07a5:  // lea edi, [ebx + 0xd8]
    edi = (uint32_t)((uint32_t)(ebx + 0xd8u));
L_004e07ab:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e07ad:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_004e07af:  // je 0x4e0808
    if (f.zf) goto L_004e0808;
L_004e07b1:  // mov ecx, dword ptr [esi + 0xd4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xd4u)));
L_004e07b7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e07b9:  // je 0x4e07cc
    if (f.zf) goto L_004e07cc;
L_004e07bb:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004e07bd:  // call 0x4e0820
    t0 = 0x004e0820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e07c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e07c2:  // mov dword ptr [esi + 0xd4], 0
    M32((uint32_t)(esi + 0xd4u)) = (uint32_t)(0x0u);
L_004e07cc:  // mov eax, dword ptr [0x83cfe8]
    eax = (uint32_t)(M32((uint32_t)(0x83cfe8u)));
L_004e07d1:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004e07d3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e07d5:  // je 0x4e07fd
    if (f.zf) goto L_004e07fd;
L_004e07d7:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004e07d9:  // jne 0x4e07f1
    if (!f.zf) goto L_004e07f1;
L_004e07db:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e07dd:  // je 0x4e07e9
    if (f.zf) goto L_004e07e9;
L_004e07df:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004e07e1:  // mov dword ptr [ecx + 0xd8], edx
    M32((uint32_t)(ecx + 0xd8u)) = (uint32_t)(edx);
L_004e07e7:  // jmp 0x4e07f1
    goto L_004e07f1;
L_004e07e9:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_004e07eb:  // mov dword ptr [0x83cfe8], ecx
    M32((uint32_t)(0x83cfe8u)) = (uint32_t)(ecx);
L_004e07f1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e07f3:  // mov eax, dword ptr [eax + 0xd8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xd8u)));
L_004e07f9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e07fb:  // jne 0x4e07d7
    if (!f.zf) goto L_004e07d7;
L_004e07fd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e07fe:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004e0803:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004e0808u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004e0808:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e080a:  // jne 0x4e07a3
    if (!f.zf) goto L_004e07a3;
L_004e080c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e080d:  // mov byte ptr [ebp + 4], 0
    M8((uint32_t)(ebp + 0x4u)) = (uint8_t)(0x0u);
L_004e0811:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e0812:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e0813:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e0814:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004e06e0, 004e06e0)
