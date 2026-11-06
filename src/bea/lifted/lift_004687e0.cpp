// lifted from 004687e0 (FUN_004687e0, 2522 bytes, 832 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004687e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004687e0;
L_004687e0:  // mov eax, dword ptr [0x662dd4]
    eax = (uint32_t)(M32((uint32_t)(0x662dd4u)));
L_004687e5:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004687e8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004687e9:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004687eb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004687ec:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004687ed:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004687ef:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004687f0:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004687f2:  // jne 0x468800
    if (!f.zf) goto L_00468800;
L_004687f4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004687f5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004687f6:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_004687f8:  // call 0x4d7200
    t0 = 0x004d7200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004687fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004687fd:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00468800:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_00468802:  // call 0x4f29c0
    t0 = 0x004f29c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468807u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468807:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_00468809:  // call 0x4a53f0
    t0 = 0x004a53f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046880eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046880e:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00468816:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0046881a:  // lea eax, [ebp + 0x34]
    eax = (uint32_t)((uint32_t)(ebp + 0x34u));
L_0046881d:  // mov dword ptr [esp + 0x1c], 0xc1a00000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xc1a00000u);
L_00468825:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00468829:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00468831:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00468833:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00468837:  // lea edi, [ebp + 4]
    edi = (uint32_t)((uint32_t)(ebp + 0x4u));
L_0046883a:  // mov esi, 0x679b48
    esi = (uint32_t)(0x679b48u);
L_0046883f:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00468842:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00468846:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00468849:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0046884c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00468851:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00468854:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00468856:  // mov dword ptr [ebp + 0x44], 0x3f800000
    M32((uint32_t)(ebp + 0x44u)) = (uint32_t)(0x3f800000u);
L_0046885d:  // mov dword ptr [0x9c63f4], ebx
    M32((uint32_t)(0x9c63f4u)) = (uint32_t)(ebx);
L_00468863:  // mov dword ptr [0x9c63f0], ebx
    M32((uint32_t)(0x9c63f0u)) = (uint32_t)(ebx);
L_00468869:  // mov dword ptr [0x9c6404], ebx
    M32((uint32_t)(0x9c6404u)) = (uint32_t)(ebx);
L_0046886f:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_00468874:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00468879:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046887a:  // mov dword ptr [0x9c6400], 0
    M32((uint32_t)(0x9c6400u)) = (uint32_t)(0x0u);
L_00468884:  // call 0x4cda60
    t0 = 0x004cda60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468889u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468889:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046888b:  // jne 0x468895
    if (!f.zf) goto L_00468895;
L_0046888d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0046888e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046888f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00468890:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00468891:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00468894:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00468895:  // lea esi, [ebp + 0x48]
    esi = (uint32_t)((uint32_t)(ebp + 0x48u));
L_00468898:  // mov ecx, 0x56
    ecx = (uint32_t)(0x56u);
L_0046889d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046889f:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004688a1:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_004688a3:  // push 0x62aa94
    t0 = 0x62aa94u; esp -= 4; M32(esp) = t0;
L_004688a8:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004688adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004688ad:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688ae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688b0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688b1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688b3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004688b5:  // push 0x62aa7c
    t0 = 0x62aa7cu; esp -= 4; M32(esp) = t0;
L_004688ba:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004688bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004688bf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688c0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688c2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688c3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688c5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004688c7:  // push 0x62aa68
    t0 = 0x62aa68u; esp -= 4; M32(esp) = t0;
L_004688cc:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_004688ce:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004688d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004688d3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688d4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688d6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688d7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688d9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004688db:  // push 0x62aa54
    t0 = 0x62aa54u; esp -= 4; M32(esp) = t0;
L_004688e0:  // mov dword ptr [ebp + 0x4c], eax
    M32((uint32_t)(ebp + 0x4cu)) = (uint32_t)(eax);
L_004688e3:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004688e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004688e8:  // add esp, 0x4c
    t0 = ladd<32>(esp, 0x4cu, f);
    esp = (uint32_t)(t0);
L_004688eb:  // mov dword ptr [ebp + 0x50], eax
    M32((uint32_t)(ebp + 0x50u)) = (uint32_t)(eax);
L_004688ee:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688ef:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688f1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004688f2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004688f4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004688f6:  // push 0x62aa40
    t0 = 0x62aa40u; esp -= 4; M32(esp) = t0;
L_004688fb:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468900u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468900:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468901:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468903:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468904:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468906:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468908:  // push 0x62aa28
    t0 = 0x62aa28u; esp -= 4; M32(esp) = t0;
L_0046890d:  // mov dword ptr [ebp + 0x54], eax
    M32((uint32_t)(ebp + 0x54u)) = (uint32_t)(eax);
L_00468910:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468915u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468915:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468916:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468918:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468919:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046891b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046891d:  // push 0x62aa10
    t0 = 0x62aa10u; esp -= 4; M32(esp) = t0;
L_00468922:  // mov dword ptr [ebp + 0x58], eax
    M32((uint32_t)(ebp + 0x58u)) = (uint32_t)(eax);
L_00468925:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046892au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046892a:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_0046892d:  // mov dword ptr [ebp + 0x5c], eax
    M32((uint32_t)(ebp + 0x5cu)) = (uint32_t)(eax);
L_00468930:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468931:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468933:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468934:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468936:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468938:  // push 0x62a9f8
    t0 = 0x62a9f8u; esp -= 4; M32(esp) = t0;
L_0046893d:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468942u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468942:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468943:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468945:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468946:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468948:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046894a:  // push 0x62a9e0
    t0 = 0x62a9e0u; esp -= 4; M32(esp) = t0;
L_0046894f:  // mov dword ptr [ebp + 0x60], eax
    M32((uint32_t)(ebp + 0x60u)) = (uint32_t)(eax);
L_00468952:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468957u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468957:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468958:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046895a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046895b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046895d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046895f:  // push 0x62a9c8
    t0 = 0x62a9c8u; esp -= 4; M32(esp) = t0;
L_00468964:  // mov dword ptr [ebp + 0x64], eax
    M32((uint32_t)(ebp + 0x64u)) = (uint32_t)(eax);
L_00468967:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046896cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046896c:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_0046896f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468970:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468972:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468973:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468975:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468977:  // push 0x62a9b0
    t0 = 0x62a9b0u; esp -= 4; M32(esp) = t0;
L_0046897c:  // mov dword ptr [ebp + 0x68], eax
    M32((uint32_t)(ebp + 0x68u)) = (uint32_t)(eax);
L_0046897f:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468984u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468984:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468985:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468987:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468988:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046898a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046898c:  // push 0x62a998
    t0 = 0x62a998u; esp -= 4; M32(esp) = t0;
L_00468991:  // mov dword ptr [ebp + 0x6c], eax
    M32((uint32_t)(ebp + 0x6cu)) = (uint32_t)(eax);
L_00468994:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468999u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468999:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046899a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046899c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046899d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046899f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004689a1:  // push 0x62a980
    t0 = 0x62a980u; esp -= 4; M32(esp) = t0;
L_004689a6:  // mov dword ptr [ebp + 0x70], eax
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(eax);
L_004689a9:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004689aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004689ae:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004689b1:  // mov dword ptr [ebp + 0x74], eax
    M32((uint32_t)(ebp + 0x74u)) = (uint32_t)(eax);
L_004689b4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689b5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689b7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689b8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689ba:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004689bc:  // push 0x62a964
    t0 = 0x62a964u; esp -= 4; M32(esp) = t0;
L_004689c1:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004689c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004689c6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689c7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689c9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689ca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689cc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004689ce:  // push 0x62a948
    t0 = 0x62a948u; esp -= 4; M32(esp) = t0;
L_004689d3:  // mov dword ptr [ebp + 0x78], eax
    M32((uint32_t)(ebp + 0x78u)) = (uint32_t)(eax);
L_004689d6:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004689dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004689db:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689dc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689de:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689df:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689e1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004689e3:  // push 0x62a92c
    t0 = 0x62a92cu; esp -= 4; M32(esp) = t0;
L_004689e8:  // mov dword ptr [ebp + 0x7c], eax
    M32((uint32_t)(ebp + 0x7cu)) = (uint32_t)(eax);
L_004689eb:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004689f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004689f0:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004689f3:  // mov dword ptr [ebp + 0x80], eax
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(eax);
L_004689f9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689fa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689fc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004689fd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004689ff:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468a01:  // push 0x62a910
    t0 = 0x62a910u; esp -= 4; M32(esp) = t0;
L_00468a06:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468a0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468a0b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a0c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a0e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a0f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a11:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468a13:  // push 0x62a8f4
    t0 = 0x62a8f4u; esp -= 4; M32(esp) = t0;
L_00468a18:  // mov dword ptr [ebp + 0x84], eax
    M32((uint32_t)(ebp + 0x84u)) = (uint32_t)(eax);
L_00468a1e:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468a23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468a23:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a24:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a26:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a27:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a29:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468a2b:  // push 0x62a8d8
    t0 = 0x62a8d8u; esp -= 4; M32(esp) = t0;
L_00468a30:  // mov dword ptr [ebp + 0x88], eax
    M32((uint32_t)(ebp + 0x88u)) = (uint32_t)(eax);
L_00468a36:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468a3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468a3b:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468a3e:  // mov dword ptr [ebp + 0x8c], eax
    M32((uint32_t)(ebp + 0x8cu)) = (uint32_t)(eax);
L_00468a44:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a45:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a47:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a48:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a4a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468a4c:  // push 0x62a8ac
    t0 = 0x62a8acu; esp -= 4; M32(esp) = t0;
L_00468a51:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468a56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468a56:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a57:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a59:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a5a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a5c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468a5e:  // push 0x62a880
    t0 = 0x62a880u; esp -= 4; M32(esp) = t0;
L_00468a63:  // mov dword ptr [ebp + 0x90], eax
    M32((uint32_t)(ebp + 0x90u)) = (uint32_t)(eax);
L_00468a69:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468a6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468a6e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a6f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a71:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468a72:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468a74:  // mov dword ptr [ebp + 0x94], eax
    M32((uint32_t)(ebp + 0x94u)) = (uint32_t)(eax);
L_00468a7a:  // mov esi, dword ptr [0x889010]
    esi = (uint32_t)(M32((uint32_t)(0x889010u)));
L_00468a80:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468a82:  // push 0x62a860
    t0 = 0x62a860u; esp -= 4; M32(esp) = t0;
L_00468a87:  // mov dword ptr [0x889010], ebx
    M32((uint32_t)(0x889010u)) = (uint32_t)(ebx);
L_00468a8d:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468a92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468a92:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468a95:  // mov dword ptr [ebp + 0x98], eax
    M32((uint32_t)(ebp + 0x98u)) = (uint32_t)(eax);
L_00468a9b:  // mov dword ptr [0x889010], esi
    M32((uint32_t)(0x889010u)) = (uint32_t)(esi);
L_00468aa1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468aa2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468aa4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468aa5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468aa7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468aa9:  // push 0x62a83c
    t0 = 0x62a83cu; esp -= 4; M32(esp) = t0;
L_00468aae:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468ab3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468ab3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468ab4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ab6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468ab7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ab9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468abb:  // push 0x62a80c
    t0 = 0x62a80cu; esp -= 4; M32(esp) = t0;
L_00468ac0:  // mov dword ptr [ebp + 0x9c], eax
    M32((uint32_t)(ebp + 0x9cu)) = (uint32_t)(eax);
L_00468ac6:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468acbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468acb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468acc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ace:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468acf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ad1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468ad3:  // push 0x62a7dc
    t0 = 0x62a7dcu; esp -= 4; M32(esp) = t0;
L_00468ad8:  // mov dword ptr [ebp + 0xa0], eax
    M32((uint32_t)(ebp + 0xa0u)) = (uint32_t)(eax);
L_00468ade:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468ae3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468ae3:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468ae6:  // mov dword ptr [ebp + 0xa4], eax
    M32((uint32_t)(ebp + 0xa4u)) = (uint32_t)(eax);
L_00468aec:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468aed:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468aef:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468af0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468af2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468af4:  // push 0x62a7b4
    t0 = 0x62a7b4u; esp -= 4; M32(esp) = t0;
L_00468af9:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468afeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468afe:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468aff:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b01:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b02:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b04:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468b06:  // push 0x62a780
    t0 = 0x62a780u; esp -= 4; M32(esp) = t0;
L_00468b0b:  // mov dword ptr [ebp + 0xa8], eax
    M32((uint32_t)(ebp + 0xa8u)) = (uint32_t)(eax);
L_00468b11:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468b16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468b16:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b17:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b19:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b1a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b1c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468b1e:  // push 0x62a74c
    t0 = 0x62a74cu; esp -= 4; M32(esp) = t0;
L_00468b23:  // mov dword ptr [ebp + 0xac], eax
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(eax);
L_00468b29:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468b2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468b2e:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468b31:  // mov dword ptr [ebp + 0xb0], eax
    M32((uint32_t)(ebp + 0xb0u)) = (uint32_t)(eax);
L_00468b37:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b38:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b3a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b3b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b3d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468b3f:  // push 0x62a720
    t0 = 0x62a720u; esp -= 4; M32(esp) = t0;
L_00468b44:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468b49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468b49:  // mov dword ptr [ebp + 0xb4], eax
    M32((uint32_t)(ebp + 0xb4u)) = (uint32_t)(eax);
L_00468b4f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b50:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b52:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b53:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b55:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468b57:  // push 0x62a6f4
    t0 = 0x62a6f4u; esp -= 4; M32(esp) = t0;
L_00468b5c:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468b61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468b61:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b62:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b64:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b65:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b67:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468b69:  // push 0x62a6cc
    t0 = 0x62a6ccu; esp -= 4; M32(esp) = t0;
L_00468b6e:  // mov dword ptr [ebp + 0xb8], eax
    M32((uint32_t)(ebp + 0xb8u)) = (uint32_t)(eax);
L_00468b74:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468b79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468b79:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468b7c:  // mov dword ptr [ebp + 0xbc], eax
    M32((uint32_t)(ebp + 0xbcu)) = (uint32_t)(eax);
L_00468b82:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b83:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b85:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b86:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b88:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468b8a:  // push 0x62a6a4
    t0 = 0x62a6a4u; esp -= 4; M32(esp) = t0;
L_00468b8f:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468b94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468b94:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b95:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b97:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468b98:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468b9a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468b9c:  // push 0x62a67c
    t0 = 0x62a67cu; esp -= 4; M32(esp) = t0;
L_00468ba1:  // mov dword ptr [ebp + 0xc0], eax
    M32((uint32_t)(ebp + 0xc0u)) = (uint32_t)(eax);
L_00468ba7:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468bacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468bac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468bad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468baf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468bb0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468bb2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468bb4:  // push 0x62a654
    t0 = 0x62a654u; esp -= 4; M32(esp) = t0;
L_00468bb9:  // mov dword ptr [ebp + 0xc4], eax
    M32((uint32_t)(ebp + 0xc4u)) = (uint32_t)(eax);
L_00468bbf:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468bc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468bc4:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468bc7:  // mov dword ptr [ebp + 0xc8], eax
    M32((uint32_t)(ebp + 0xc8u)) = (uint32_t)(eax);
L_00468bcd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468bce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468bd0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468bd1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468bd3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468bd5:  // push 0x62a62c
    t0 = 0x62a62cu; esp -= 4; M32(esp) = t0;
L_00468bda:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468bdfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468bdf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468be0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468be2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468be3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468be5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468be7:  // push 0x62a604
    t0 = 0x62a604u; esp -= 4; M32(esp) = t0;
L_00468bec:  // mov dword ptr [ebp + 0xcc], eax
    M32((uint32_t)(ebp + 0xccu)) = (uint32_t)(eax);
L_00468bf2:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468bf7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468bf7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468bf8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468bfa:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468bfb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468bfd:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468bff:  // push 0x62a5e8
    t0 = 0x62a5e8u; esp -= 4; M32(esp) = t0;
L_00468c04:  // mov dword ptr [ebp + 0xd0], eax
    M32((uint32_t)(ebp + 0xd0u)) = (uint32_t)(eax);
L_00468c0a:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468c0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468c0f:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468c12:  // mov dword ptr [ebp + 0xd4], eax
    M32((uint32_t)(ebp + 0xd4u)) = (uint32_t)(eax);
L_00468c18:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c19:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c1b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c1c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c1e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468c20:  // push 0x62a5c4
    t0 = 0x62a5c4u; esp -= 4; M32(esp) = t0;
L_00468c25:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468c2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468c2a:  // mov dword ptr [ebp + 0xd8], eax
    M32((uint32_t)(ebp + 0xd8u)) = (uint32_t)(eax);
L_00468c30:  // mov cl, byte ptr [eax + 0x155]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x155u))) & 0xffu);
L_00468c36:  // or cl, bl
    t0 = llog<8>((ecx & 0xffu) | (ebx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00468c38:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c39:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c3b:  // mov byte ptr [eax + 0x155], cl
    M8((uint32_t)(eax + 0x155u)) = (uint8_t)((ecx & 0xffu));
L_00468c41:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c42:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c44:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468c46:  // push 0x62a5a8
    t0 = 0x62a5a8u; esp -= 4; M32(esp) = t0;
L_00468c4b:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468c50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468c50:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c51:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c53:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c54:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c56:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468c58:  // push 0x6290f4
    t0 = 0x6290f4u; esp -= 4; M32(esp) = t0;
L_00468c5d:  // mov dword ptr [ebp + 0xdc], eax
    M32((uint32_t)(ebp + 0xdcu)) = (uint32_t)(eax);
L_00468c63:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468c68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468c68:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468c6b:  // mov dword ptr [ebp + 0xe0], eax
    M32((uint32_t)(ebp + 0xe0u)) = (uint32_t)(eax);
L_00468c71:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c72:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c74:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c75:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c77:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468c79:  // push 0x62a58c
    t0 = 0x62a58cu; esp -= 4; M32(esp) = t0;
L_00468c7e:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468c83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468c83:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c84:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c86:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c87:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c89:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468c8b:  // push 0x62a570
    t0 = 0x62a570u; esp -= 4; M32(esp) = t0;
L_00468c90:  // mov dword ptr [ebp + 0xe4], eax
    M32((uint32_t)(ebp + 0xe4u)) = (uint32_t)(eax);
L_00468c96:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468c9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468c9b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c9c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468c9e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468c9f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ca1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468ca3:  // push 0x62a554
    t0 = 0x62a554u; esp -= 4; M32(esp) = t0;
L_00468ca8:  // mov dword ptr [ebp + 0xe8], eax
    M32((uint32_t)(ebp + 0xe8u)) = (uint32_t)(eax);
L_00468cae:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468cb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468cb3:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468cb6:  // mov dword ptr [ebp + 0xec], eax
    M32((uint32_t)(ebp + 0xecu)) = (uint32_t)(eax);
L_00468cbc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468cbd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468cbf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468cc0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468cc2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468cc4:  // push 0x62a538
    t0 = 0x62a538u; esp -= 4; M32(esp) = t0;
L_00468cc9:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468cceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468cce:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468ccf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468cd1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468cd2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468cd4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468cd6:  // push 0x62a520
    t0 = 0x62a520u; esp -= 4; M32(esp) = t0;
L_00468cdb:  // mov dword ptr [ebp + 0xf0], eax
    M32((uint32_t)(ebp + 0xf0u)) = (uint32_t)(eax);
L_00468ce1:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468ce6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468ce6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468ce7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ce9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468cea:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468cec:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468cee:  // push 0x62a508
    t0 = 0x62a508u; esp -= 4; M32(esp) = t0;
L_00468cf3:  // mov dword ptr [ebp + 0xf4], eax
    M32((uint32_t)(ebp + 0xf4u)) = (uint32_t)(eax);
L_00468cf9:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468cfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468cfe:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468d01:  // mov dword ptr [ebp + 0xf8], eax
    M32((uint32_t)(ebp + 0xf8u)) = (uint32_t)(eax);
L_00468d07:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d08:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d0a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d0b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d0d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468d0f:  // push 0x62a4f0
    t0 = 0x62a4f0u; esp -= 4; M32(esp) = t0;
L_00468d14:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468d19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468d19:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d1a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d1c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d1d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d1f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468d21:  // push 0x62a4d8
    t0 = 0x62a4d8u; esp -= 4; M32(esp) = t0;
L_00468d26:  // mov dword ptr [ebp + 0xfc], eax
    M32((uint32_t)(ebp + 0xfcu)) = (uint32_t)(eax);
L_00468d2c:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468d31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468d31:  // mov dword ptr [ebp + 0x100], eax
    M32((uint32_t)(ebp + 0x100u)) = (uint32_t)(eax);
L_00468d37:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d38:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d3a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d3b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d3d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468d3f:  // push 0x62a4c0
    t0 = 0x62a4c0u; esp -= 4; M32(esp) = t0;
L_00468d44:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468d49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468d49:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468d4c:  // mov dword ptr [ebp + 0x104], eax
    M32((uint32_t)(ebp + 0x104u)) = (uint32_t)(eax);
L_00468d52:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d53:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d55:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d56:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d58:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468d5a:  // push 0x62a4a8
    t0 = 0x62a4a8u; esp -= 4; M32(esp) = t0;
L_00468d5f:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468d64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468d64:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d65:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d67:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d68:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d6a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468d6c:  // push 0x62a490
    t0 = 0x62a490u; esp -= 4; M32(esp) = t0;
L_00468d71:  // mov dword ptr [ebp + 0x108], eax
    M32((uint32_t)(ebp + 0x108u)) = (uint32_t)(eax);
L_00468d77:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468d7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468d7c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d7d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d7f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468d82:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468d84:  // push 0x62a478
    t0 = 0x62a478u; esp -= 4; M32(esp) = t0;
L_00468d89:  // mov dword ptr [ebp + 0x10c], eax
    M32((uint32_t)(ebp + 0x10cu)) = (uint32_t)(eax);
L_00468d8f:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468d94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468d94:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468d97:  // mov dword ptr [ebp + 0x110], eax
    M32((uint32_t)(ebp + 0x110u)) = (uint32_t)(eax);
L_00468d9d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468d9e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468da0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468da1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468da3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468da5:  // push 0x62a460
    t0 = 0x62a460u; esp -= 4; M32(esp) = t0;
L_00468daa:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468dafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468daf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468db0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468db2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468db3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468db5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468db7:  // push 0x62a444
    t0 = 0x62a444u; esp -= 4; M32(esp) = t0;
L_00468dbc:  // mov dword ptr [ebp + 0x114], eax
    M32((uint32_t)(ebp + 0x114u)) = (uint32_t)(eax);
L_00468dc2:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468dc7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468dc7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468dc8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468dca:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468dcb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468dcd:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468dcf:  // push 0x62a42c
    t0 = 0x62a42cu; esp -= 4; M32(esp) = t0;
L_00468dd4:  // mov dword ptr [ebp + 0x118], eax
    M32((uint32_t)(ebp + 0x118u)) = (uint32_t)(eax);
L_00468dda:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468ddfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468ddf:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468de2:  // mov dword ptr [ebp + 0x11c], eax
    M32((uint32_t)(ebp + 0x11cu)) = (uint32_t)(eax);
L_00468de8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468de9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468deb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468dec:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468dee:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468df0:  // push 0x62a410
    t0 = 0x62a410u; esp -= 4; M32(esp) = t0;
L_00468df5:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468dfau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468dfa:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468dfb:  // mov dword ptr [ebp + 0x120], eax
    M32((uint32_t)(ebp + 0x120u)) = (uint32_t)(eax);
L_00468e01:  // mov cl, byte ptr [eax + 0x155]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x155u))) & 0xffu);
L_00468e07:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e09:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e0a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e0c:  // or cl, bl
    t0 = llog<8>((ecx & 0xffu) | (ebx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00468e0e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468e10:  // push 0x62a3f0
    t0 = 0x62a3f0u; esp -= 4; M32(esp) = t0;
L_00468e15:  // mov byte ptr [eax + 0x155], cl
    M8((uint32_t)(eax + 0x155u)) = (uint8_t)((ecx & 0xffu));
L_00468e1b:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468e20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468e20:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e21:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e23:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e24:  // mov dword ptr [ebp + 0x124], eax
    M32((uint32_t)(ebp + 0x124u)) = (uint32_t)(eax);
L_00468e2a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e2c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468e2e:  // push 0x62a3c0
    t0 = 0x62a3c0u; esp -= 4; M32(esp) = t0;
L_00468e33:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468e38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468e38:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468e3b:  // mov dword ptr [ebp + 0x128], eax
    M32((uint32_t)(ebp + 0x128u)) = (uint32_t)(eax);
L_00468e41:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e42:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e44:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e45:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e47:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468e49:  // push 0x62a3a0
    t0 = 0x62a3a0u; esp -= 4; M32(esp) = t0;
L_00468e4e:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468e53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468e53:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e54:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e56:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e57:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e59:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468e5b:  // push 0x62a378
    t0 = 0x62a378u; esp -= 4; M32(esp) = t0;
L_00468e60:  // mov dword ptr [ebp + 0x12c], eax
    M32((uint32_t)(ebp + 0x12cu)) = (uint32_t)(eax);
L_00468e66:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468e6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468e6b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e6c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e6e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e6f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e71:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468e73:  // push 0x62a350
    t0 = 0x62a350u; esp -= 4; M32(esp) = t0;
L_00468e78:  // mov dword ptr [ebp + 0x130], eax
    M32((uint32_t)(ebp + 0x130u)) = (uint32_t)(eax);
L_00468e7e:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468e83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468e83:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468e86:  // mov dword ptr [ebp + 0x134], eax
    M32((uint32_t)(ebp + 0x134u)) = (uint32_t)(eax);
L_00468e8c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e8d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e8f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e90:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468e92:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468e94:  // push 0x62a328
    t0 = 0x62a328u; esp -= 4; M32(esp) = t0;
L_00468e99:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468e9eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468e9e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468e9f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ea1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468ea2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ea4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468ea6:  // push 0x62a300
    t0 = 0x62a300u; esp -= 4; M32(esp) = t0;
L_00468eab:  // mov dword ptr [ebp + 0x138], eax
    M32((uint32_t)(ebp + 0x138u)) = (uint32_t)(eax);
L_00468eb1:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468eb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468eb6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468eb7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468eb9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468eba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468ebc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468ebe:  // push 0x62a2d0
    t0 = 0x62a2d0u; esp -= 4; M32(esp) = t0;
L_00468ec3:  // mov dword ptr [ebp + 0x13c], eax
    M32((uint32_t)(ebp + 0x13cu)) = (uint32_t)(eax);
L_00468ec9:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468eceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468ece:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468ed1:  // mov dword ptr [ebp + 0x140], eax
    M32((uint32_t)(ebp + 0x140u)) = (uint32_t)(eax);
L_00468ed7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468ed8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468eda:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468edb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468edd:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468edf:  // push 0x62a2a0
    t0 = 0x62a2a0u; esp -= 4; M32(esp) = t0;
L_00468ee4:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468ee9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468ee9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468eea:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468eec:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468eed:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468eef:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468ef1:  // push 0x62a26c
    t0 = 0x62a26cu; esp -= 4; M32(esp) = t0;
L_00468ef6:  // mov dword ptr [ebp + 0x144], eax
    M32((uint32_t)(ebp + 0x144u)) = (uint32_t)(eax);
L_00468efc:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468f01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468f01:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f02:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f04:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f05:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f07:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468f09:  // push 0x62a234
    t0 = 0x62a234u; esp -= 4; M32(esp) = t0;
L_00468f0e:  // mov dword ptr [ebp + 0x148], eax
    M32((uint32_t)(ebp + 0x148u)) = (uint32_t)(eax);
L_00468f14:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468f19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468f19:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468f1c:  // mov dword ptr [ebp + 0x14c], eax
    M32((uint32_t)(ebp + 0x14cu)) = (uint32_t)(eax);
L_00468f22:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f23:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f25:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f26:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f28:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468f2a:  // push 0x62a200
    t0 = 0x62a200u; esp -= 4; M32(esp) = t0;
L_00468f2f:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468f34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468f34:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f35:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f37:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f38:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f3a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468f3c:  // push 0x62a1cc
    t0 = 0x62a1ccu; esp -= 4; M32(esp) = t0;
L_00468f41:  // mov dword ptr [ebp + 0x150], eax
    M32((uint32_t)(ebp + 0x150u)) = (uint32_t)(eax);
L_00468f47:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468f4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468f4c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f4d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f4f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f50:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f52:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468f54:  // push 0x62a194
    t0 = 0x62a194u; esp -= 4; M32(esp) = t0;
L_00468f59:  // mov dword ptr [ebp + 0x154], eax
    M32((uint32_t)(ebp + 0x154u)) = (uint32_t)(eax);
L_00468f5f:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468f64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468f64:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468f67:  // mov dword ptr [ebp + 0x158], eax
    M32((uint32_t)(ebp + 0x158u)) = (uint32_t)(eax);
L_00468f6d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f6e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f70:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f71:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f73:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468f75:  // push 0x62a160
    t0 = 0x62a160u; esp -= 4; M32(esp) = t0;
L_00468f7a:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468f7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468f7f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f82:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f83:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f85:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468f87:  // push 0x62a12c
    t0 = 0x62a12cu; esp -= 4; M32(esp) = t0;
L_00468f8c:  // mov dword ptr [ebp + 0x15c], eax
    M32((uint32_t)(ebp + 0x15cu)) = (uint32_t)(eax);
L_00468f92:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468f97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468f97:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f98:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f9a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468f9b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468f9d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468f9f:  // push 0x62a0f8
    t0 = 0x62a0f8u; esp -= 4; M32(esp) = t0;
L_00468fa4:  // mov dword ptr [ebp + 0x160], eax
    M32((uint32_t)(ebp + 0x160u)) = (uint32_t)(eax);
L_00468faa:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468fafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468faf:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468fb2:  // mov dword ptr [ebp + 0x164], eax
    M32((uint32_t)(ebp + 0x164u)) = (uint32_t)(eax);
L_00468fb8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468fb9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468fbb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468fbc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468fbe:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468fc0:  // push 0x62a0c4
    t0 = 0x62a0c4u; esp -= 4; M32(esp) = t0;
L_00468fc5:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468fcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468fca:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468fcb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468fcd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468fce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468fd0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468fd2:  // push 0x62a09c
    t0 = 0x62a09cu; esp -= 4; M32(esp) = t0;
L_00468fd7:  // mov dword ptr [ebp + 0x168], eax
    M32((uint32_t)(ebp + 0x168u)) = (uint32_t)(eax);
L_00468fdd:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468fe2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468fe2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468fe3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468fe5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00468fe6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00468fe8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00468fea:  // push 0x62a074
    t0 = 0x62a074u; esp -= 4; M32(esp) = t0;
L_00468fef:  // mov dword ptr [ebp + 0x16c], eax
    M32((uint32_t)(ebp + 0x16cu)) = (uint32_t)(eax);
L_00468ff5:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00468ffau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00468ffa:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00468ffd:  // mov dword ptr [ebp + 0x170], eax
    M32((uint32_t)(ebp + 0x170u)) = (uint32_t)(eax);
L_00469003:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469004:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469006:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469007:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469009:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046900b:  // push 0x62a04c
    t0 = 0x62a04cu; esp -= 4; M32(esp) = t0;
L_00469010:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469015u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469015:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469016:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469018:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469019:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046901b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046901d:  // push 0x62a028
    t0 = 0x62a028u; esp -= 4; M32(esp) = t0;
L_00469022:  // mov dword ptr [ebp + 0x174], eax
    M32((uint32_t)(ebp + 0x174u)) = (uint32_t)(eax);
L_00469028:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046902du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046902d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046902e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469030:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469031:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469033:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00469035:  // push 0x629ffc
    t0 = 0x629ffcu; esp -= 4; M32(esp) = t0;
L_0046903a:  // mov dword ptr [ebp + 0x178], eax
    M32((uint32_t)(ebp + 0x178u)) = (uint32_t)(eax);
L_00469040:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469045u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469045:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00469048:  // mov dword ptr [ebp + 0x17c], eax
    M32((uint32_t)(ebp + 0x17cu)) = (uint32_t)(eax);
L_0046904e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046904f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469051:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469052:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469054:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00469056:  // push 0x629fd0
    t0 = 0x629fd0u; esp -= 4; M32(esp) = t0;
L_0046905b:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469060u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469060:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469061:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469063:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469064:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00469066:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00469068:  // push 0x629fa0
    t0 = 0x629fa0u; esp -= 4; M32(esp) = t0;
L_0046906d:  // mov dword ptr [ebp + 0x180], eax
    M32((uint32_t)(ebp + 0x180u)) = (uint32_t)(eax);
L_00469073:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469078u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469078:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469079:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046907b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046907c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046907e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00469080:  // push 0x629f84
    t0 = 0x629f84u; esp -= 4; M32(esp) = t0;
L_00469085:  // mov dword ptr [ebp + 0x184], eax
    M32((uint32_t)(ebp + 0x184u)) = (uint32_t)(eax);
L_0046908b:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469090u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469090:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_00469093:  // mov dword ptr [ebp + 0x188], eax
    M32((uint32_t)(ebp + 0x188u)) = (uint32_t)(eax);
L_00469099:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046909a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046909c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046909d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046909f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004690a1:  // push 0x629f68
    t0 = 0x629f68u; esp -= 4; M32(esp) = t0;
L_004690a6:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004690abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004690ab:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690ac:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690ae:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690b1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004690b3:  // push 0x629f4c
    t0 = 0x629f4cu; esp -= 4; M32(esp) = t0;
L_004690b8:  // mov dword ptr [ebp + 0x18c], eax
    M32((uint32_t)(ebp + 0x18cu)) = (uint32_t)(eax);
L_004690be:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004690c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004690c3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690c4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690c6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690c7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690c9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004690cb:  // push 0x629f30
    t0 = 0x629f30u; esp -= 4; M32(esp) = t0;
L_004690d0:  // mov dword ptr [ebp + 0x190], eax
    M32((uint32_t)(ebp + 0x190u)) = (uint32_t)(eax);
L_004690d6:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004690dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004690db:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_004690de:  // mov dword ptr [ebp + 0x194], eax
    M32((uint32_t)(ebp + 0x194u)) = (uint32_t)(eax);
L_004690e4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690e5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690e7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690ea:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004690ec:  // push 0x629f14
    t0 = 0x629f14u; esp -= 4; M32(esp) = t0;
L_004690f1:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004690f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004690f6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690f7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690f9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004690fa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004690fc:  // mov dword ptr [ebp + 0x198], eax
    M32((uint32_t)(ebp + 0x198u)) = (uint32_t)(eax);
L_00469102:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00469104:  // push 0x629ef0
    t0 = 0x629ef0u; esp -= 4; M32(esp) = t0;
L_00469109:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046910eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046910e:  // add esp, 0x30
    t0 = ladd<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00469111:  // mov dword ptr [ebp + 0x19c], eax
    M32((uint32_t)(ebp + 0x19cu)) = (uint32_t)(eax);
L_00469117:  // push 0x629ee0
    t0 = 0x629ee0u; esp -= 4; M32(esp) = t0;
L_0046911c:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469121u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469121:  // lea esi, [ebp + 0x1a0]
    esi = (uint32_t)((uint32_t)(ebp + 0x1a0u));
L_00469127:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_0046912c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046912e:  // mov edi, esi
    edi = (uint32_t)(esi);
L_00469130:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_00469132:  // mov eax, dword ptr [0x83d448]
    eax = (uint32_t)(M32((uint32_t)(0x83d448u)));
L_00469137:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0046913a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046913c:  // jne 0x4691a3
    if (!f.zf) goto L_004691a3;
L_0046913e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046913f:  // push 0x629ed0
    t0 = 0x629ed0u; esp -= 4; M32(esp) = t0;
L_00469144:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469149u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469149:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046914a:  // push 0x629ec0
    t0 = 0x629ec0u; esp -= 4; M32(esp) = t0;
L_0046914f:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_00469151:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469156u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469156:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469157:  // push 0x629eac
    t0 = 0x629eacu; esp -= 4; M32(esp) = t0;
L_0046915c:  // mov dword ptr [ebp + 0x1a4], eax
    M32((uint32_t)(ebp + 0x1a4u)) = (uint32_t)(eax);
L_00469162:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469167u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469167:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469168:  // push 0x629e98
    t0 = 0x629e98u; esp -= 4; M32(esp) = t0;
L_0046916d:  // mov dword ptr [ebp + 0x1a8], eax
    M32((uint32_t)(ebp + 0x1a8u)) = (uint32_t)(eax);
L_00469173:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469178u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469178:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00469179:  // push 0x629e84
    t0 = 0x629e84u; esp -= 4; M32(esp) = t0;
L_0046917e:  // mov dword ptr [ebp + 0x1ac], eax
    M32((uint32_t)(ebp + 0x1acu)) = (uint32_t)(eax);
L_00469184:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00469189u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00469189:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046918a:  // push 0x629e6c
    t0 = 0x629e6cu; esp -= 4; M32(esp) = t0;
L_0046918f:  // mov dword ptr [ebp + 0x1b0], eax
    M32((uint32_t)(ebp + 0x1b0u)) = (uint32_t)(eax);
L_00469195:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046919au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046919a:  // add esp, 0x30
    t0 = ladd<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0046919d:  // mov dword ptr [ebp + 0x1b4], eax
    M32((uint32_t)(ebp + 0x1b4u)) = (uint32_t)(eax);
L_004691a3:  // push 0x629e58
    t0 = 0x629e58u; esp -= 4; M32(esp) = t0;
L_004691a8:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004691adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004691ad:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004691b0:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004691b2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004691b3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004691b4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004691b5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004691b6:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004691b9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004687e0, 004687e0)
