// lifted from 00464730 (vslot2, 839 bytes, 228 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00464730(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00464730;
L_00464730:  // sub esp, 0x198
    t0 = lsub<32>(esp, 0x198u, f);
    esp = (uint32_t)(t0);
L_00464736:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00464737:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00464738:  // mov edi, dword ptr [esp + 0x1a4]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1a4u)));
L_0046473f:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00464741:  // cmp edi, 3
    t0 = lsub<32>(edi, 0x3u, f);
L_00464744:  // je 0x464a6c
    if (f.zf) goto L_00464a6c;
L_0046474a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046474b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046474c:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_00464751:  // call 0x41a200
    t0 = 0x0041a200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464756u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464756:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00464758:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_0046475a:  // jne 0x46476b
    if (!f.zf) goto L_0046476b;
L_0046475c:  // cmp dword ptr [0x677614], ebx
    t0 = lsub<32>(M32((uint32_t)(0x677614u)), ebx, f);
L_00464762:  // jne 0x464777
    if (!f.zf) goto L_00464777;
L_00464764:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00464766:  // call 0x464c50
    t0 = 0x00464c50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046476bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046476b:  // cmp dword ptr [0x677614], ebx
    t0 = lsub<32>(M32((uint32_t)(0x677614u)), ebx, f);
L_00464771:  // je 0x464a5d
    if (f.zf) goto L_00464a5d;
L_00464777:  // mov eax, dword ptr [0x677624]
    eax = (uint32_t)(M32((uint32_t)(0x677624u)));
L_0046477c:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0046477f:  // je 0x46493e
    if (f.zf) goto L_0046493e;
L_00464785:  // cmp eax, 9
    t0 = lsub<32>(eax, 0x9u, f);
L_00464788:  // jne 0x464a5d
    if (!f.zf) goto L_00464a5d;
L_0046478e:  // mov eax, dword ptr [0x67762c]
    eax = (uint32_t)(M32((uint32_t)(0x67762cu)));
L_00464793:  // mov dword ptr [0x67762c], 0xffffffff
    M32((uint32_t)(0x67762cu)) = (uint32_t)(0xffffffffu);
L_0046479d:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0046479f:  // je 0x464936
    if (f.zf) goto L_00464936;
L_004647a5:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004647a6:  // jne 0x464a5d
    if (!f.zf) goto L_00464a5d;
L_004647ac:  // push 0x629a70
    t0 = 0x629a70u; esp -= 4; M32(esp) = t0;
L_004647b1:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004647b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004647b6:  // mov edx, dword ptr [0x8a9694]
    edx = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_004647bc:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004647bf:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004647c3:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004647c7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004647c8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004647c9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004647ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004647cb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004647cc:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004647d1:  // call 0x514960
    t0 = 0x00514960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004647d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004647d6:  // cmp dword ptr [esp + 0x14], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x14u)), ebx, f);
L_004647da:  // jne 0x464845
    if (!f.zf) goto L_00464845;
L_004647dc:  // mov eax, dword ptr [0x8a9694]
    eax = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_004647e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004647e2:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_004647e4:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004647e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004647e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004647ea:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004647ee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004647ef:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004647f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004647f4:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004647f7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004647fc:  // mov dword ptr [0x677614], ebx
    M32((uint32_t)(0x677614u)) = (uint32_t)(ebx);
L_00464802:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00464803:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00464805:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00464806:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00464808:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00464809:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046480b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464810u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464810:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00464814:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464815:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00464816:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0046481b:  // push 0x43c80000
    t0 = 0x43c80000u; esp -= 4; M32(esp) = t0;
L_00464820:  // push 0x43700000
    t0 = 0x43700000u; esp -= 4; M32(esp) = t0;
L_00464825:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_0046482a:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_0046482f:  // call 0x44d390
    t0 = 0x0044d390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464834u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464834:  // mov dword ptr [0x677630], ebx
    M32((uint32_t)(0x677630u)) = (uint32_t)(ebx);
L_0046483a:  // mov dword ptr [0x677634], ebx
    M32((uint32_t)(0x677634u)) = (uint32_t)(ebx);
L_00464840:  // jmp 0x464a5d
    goto L_00464a5d;
L_00464845:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00464849:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046484b:  // mov eax, dword ptr [0x8a9694]
    eax = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_00464850:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464851:  // je 0x4648b6
    if (f.zf) goto L_004648b6;
L_00464853:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_00464855:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046485au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046485a:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0046485e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046485f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00464860:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464865u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464865:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00464868:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0046486d:  // mov dword ptr [0x677614], ebx
    M32((uint32_t)(0x677614u)) = (uint32_t)(ebx);
L_00464873:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00464874:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00464876:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00464877:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00464879:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046487a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046487c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464881u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464881:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464882:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00464886:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464887:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0046488c:  // push 0x43c80000
    t0 = 0x43c80000u; esp -= 4; M32(esp) = t0;
L_00464891:  // push 0x43700000
    t0 = 0x43700000u; esp -= 4; M32(esp) = t0;
L_00464896:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_0046489b:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_004648a0:  // call 0x44d390
    t0 = 0x0044d390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004648a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004648a5:  // mov dword ptr [0x677630], ebx
    M32((uint32_t)(0x677630u)) = (uint32_t)(ebx);
L_004648ab:  // mov dword ptr [0x677634], ebx
    M32((uint32_t)(0x677634u)) = (uint32_t)(ebx);
L_004648b1:  // jmp 0x464a5d
    goto L_00464a5d;
L_004648b6:  // push 0x76
    t0 = 0x76u; esp -= 4; M32(esp) = t0;
L_004648b8:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004648bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004648bd:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004648c0:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004648c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004648c6:  // call 0x452b60
    t0 = 0x00452b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004648cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004648cb:  // mov eax, dword ptr [0x8a9694]
    eax = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_004648d0:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004648d5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004648d6:  // call 0x4d6b20
    t0 = 0x004d6b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004648dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004648db:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004648e0:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004648e2:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004648e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004648e7:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004648e9:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004648ee:  // je 0x464926
    if (f.zf) goto L_00464926;
L_004648f0:  // call 0x41a200
    t0 = 0x0041a200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004648f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004648f5:  // mov esi, dword ptr [0x8a9694]
    esi = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_004648fb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004648fc:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004648fe:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004648ff:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00464901:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00464902:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00464904:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00464909:  // mov dword ptr [0x677614], ebx
    M32((uint32_t)(0x677614u)) = (uint32_t)(ebx);
L_0046490f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464914u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464914:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00464915:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464916:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00464917:  // push 0x77
    t0 = 0x77u; esp -= 4; M32(esp) = t0;
L_00464919:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046491eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046491e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00464921:  // jmp 0x464886
    goto L_00464886;
L_00464926:  // call 0x41a200
    t0 = 0x0041a200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046492bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046492b:  // mov dword ptr [0x677614], ebx
    M32((uint32_t)(0x677614u)) = (uint32_t)(ebx);
L_00464931:  // jmp 0x464a5d
    goto L_00464a5d;
L_00464936:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00464938:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00464939:  // jmp 0x464a53
    goto L_00464a53;
L_0046493e:  // mov eax, dword ptr [0x67762c]
    eax = (uint32_t)(M32((uint32_t)(0x67762cu)));
L_00464943:  // or ebp, 0xffffffff
    t0 = llog<32>(ebp | 0xffffffffu, f);
    ebp = (uint32_t)(t0);
L_00464946:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_00464948:  // mov dword ptr [0x67762c], ebp
    M32((uint32_t)(0x67762cu)) = (uint32_t)(ebp);
L_0046494e:  // je 0x464a38
    if (f.zf) goto L_00464a38;
L_00464954:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00464955:  // jne 0x464a5d
    if (!f.zf) goto L_00464a5d;
L_0046495b:  // cmp dword ptr [esi + 0x214], ebp
    t0 = lsub<32>(M32((uint32_t)(esi + 0x214u)), ebp, f);
L_00464961:  // je 0x464a2f
    if (f.zf) goto L_00464a2f;
L_00464967:  // mov eax, dword ptr [0x8a9694]
    eax = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_0046496c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046496d:  // push 0x7a
    t0 = 0x7au; esp -= 4; M32(esp) = t0;
L_0046496f:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464974u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464974:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00464977:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0046497c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046497d:  // call 0x452b60
    t0 = 0x00452b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464982u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464982:  // mov ecx, dword ptr [esi + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x214u)));
L_00464988:  // mov eax, dword ptr [0x8a9694]
    eax = (uint32_t)(M32((uint32_t)(0x8a9694u)));
L_0046498d:  // lea edi, [esi + 0x218]
    edi = (uint32_t)((uint32_t)(esi + 0x218u));
L_00464993:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00464994:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00464995:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00464996:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_0046499b:  // call 0x514ec0
    t0 = 0x00514ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004649a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004649a0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004649a2:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004649a7:  // je 0x464a24
    if (f.zf) goto L_00464a24;
L_004649a9:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004649aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004649ae:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004649b0:  // mov dword ptr [esi + 0x214], ebp
    M32((uint32_t)(esi + 0x214u)) = (uint32_t)(ebp);
L_004649b6:  // mov word ptr [edi], bx
    M16((uint32_t)(edi)) = (uint16_t)((ebx & 0xffffu));
L_004649b9:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_004649bb:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004649c0:  // mov dword ptr [0x8a9580], 1
    M32((uint32_t)(0x8a9580u)) = (uint32_t)(0x1u);
L_004649ca:  // call 0x466ae0
    t0 = 0x00466ae0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004649cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004649cf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004649d0:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004649d2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004649d3:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004649d5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004649d6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004649d8:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004649dd:  // mov dword ptr [0x677614], ebx
    M32((uint32_t)(0x677614u)) = (uint32_t)(ebx);
L_004649e3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004649e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004649e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004649e9:  // push 0x76
    t0 = 0x76u; esp -= 4; M32(esp) = t0;
L_004649eb:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004649f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004649f0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004649f3:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_004649f8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004649f9:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004649fe:  // push 0x43c80000
    t0 = 0x43c80000u; esp -= 4; M32(esp) = t0;
L_00464a03:  // push 0x43700000
    t0 = 0x43700000u; esp -= 4; M32(esp) = t0;
L_00464a08:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00464a0d:  // call 0x44d390
    t0 = 0x0044d390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464a12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464a12:  // mov dword ptr [0x677630], 0xd
    M32((uint32_t)(0x677630u)) = (uint32_t)(0xdu);
L_00464a1c:  // mov dword ptr [0x677634], ebx
    M32((uint32_t)(0x677634u)) = (uint32_t)(ebx);
L_00464a22:  // jmp 0x464a5d
    goto L_00464a5d;
L_00464a24:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464a29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464a29:  // mov dword ptr [esi + 0x214], ebp
    M32((uint32_t)(esi + 0x214u)) = (uint32_t)(ebp);
L_00464a2f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00464a31:  // call 0x464c50
    t0 = 0x00464c50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464a36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464a36:  // jmp 0x464a5d
    goto L_00464a5d;
L_00464a38:  // mov dword ptr [esi + 0x214], ebp
    M32((uint32_t)(esi + 0x214u)) = (uint32_t)(ebp);
L_00464a3e:  // mov word ptr [esi + 0x218], bx
    M16((uint32_t)(esi + 0x218u)) = (uint16_t)((ebx & 0xffffu));
L_00464a45:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00464a47:  // mov dword ptr [0x8a9580], 1
    M32((uint32_t)(0x8a9580u)) = (uint32_t)(0x1u);
L_00464a51:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_00464a53:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00464a58:  // call 0x466ae0
    t0 = 0x00466ae0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00464a5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00464a5d:  // mov byte ptr [0x9c68ac], bl
    M8((uint32_t)(0x9c68acu)) = (uint8_t)((ebx & 0xffu));
L_00464a63:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00464a64:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00464a6b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00464a6c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00464a6d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00464a6e:  // add esp, 0x198
    t0 = ladd<32>(esp, 0x198u, f);
    esp = (uint32_t)(t0);
L_00464a74:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00464730, 00464730)
