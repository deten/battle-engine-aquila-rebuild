// lifted from 005169b0 (FUN_005169b0, 1300 bytes, 372 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005169b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005169b0;
L_005169b0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_005169b6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005169b8:  // push 0x5d67ec
    t0 = 0x5d67ecu; esp -= 4; M32(esp) = t0;
L_005169bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005169be:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_005169c5:  // sub esp, 0x17c
    t0 = lsub<32>(esp, 0x17cu, f);
    esp = (uint32_t)(t0);
L_005169cb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005169cc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005169cd:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_005169cf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005169d0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005169d1:  // mov eax, dword ptr [ebp + 0x2c8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2c8u)));
L_005169d7:  // mov dword ptr [ebp + 0x2cc], 0xc
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(0xcu);
L_005169e1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005169e3:  // jne 0x516ea9
    if (!f.zf) goto L_00516ea9;
L_005169e9:  // push 0xe5
    t0 = 0xe5u; esp -= 4; M32(esp) = t0;
L_005169ee:  // push 0x63e46c
    t0 = 0x63e46cu; esp -= 4; M32(esp) = t0;
L_005169f3:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_005169f5:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_005169f7:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005169fc:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516a01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516a01:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00516a05:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516a07:  // mov dword ptr [esp + 0x194], 0
    M32((uint32_t)(esp + 0x194u)) = (uint32_t)(0x0u);
L_00516a12:  // je 0x516a1d
    if (f.zf) goto L_00516a1d;
L_00516a14:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00516a16:  // call 0x5054a0
    t0 = 0x005054a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516a1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516a1b:  // jmp 0x516a1f
    goto L_00516a1f;
L_00516a1d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00516a1f:  // lea ebx, [ebp + 0xc0]
    ebx = (uint32_t)((uint32_t)(ebp + 0xc0u));
L_00516a25:  // mov dword ptr [ebp + 0x2c8], eax
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(eax);
L_00516a2b:  // mov esi, dword ptr [0x888a44]
    esi = (uint32_t)(M32((uint32_t)(0x888a44u)));
L_00516a31:  // lea edi, [ebp + 0xc4]
    edi = (uint32_t)((uint32_t)(ebp + 0xc4u));
L_00516a37:  // mov ecx, 0x40
    ecx = (uint32_t)(0x40u);
L_00516a3c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00516a3e:  // mov dword ptr [ebx], 0
    M32((uint32_t)(ebx)) = (uint32_t)(0x0u);
L_00516a44:  // push 0x63e450
    t0 = 0x63e450u; esp -= 4; M32(esp) = t0;
L_00516a49:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_00516a4b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00516a4d:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516a52:  // mov dword ptr [esp + 0x19c], 0xffffffff
    M32((uint32_t)(esp + 0x19cu)) = (uint32_t)(0xffffffffu);
L_00516a5d:  // mov dword ptr [0x896ca0], edi
    M32((uint32_t)(0x896ca0u)) = (uint32_t)(edi);
L_00516a63:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516a68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516a68:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516a6b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00516a6c:  // push 0x516ed0
    t0 = 0x516ed0u; esp -= 4; M32(esp) = t0;
L_00516a71:  // call 0x55d5e6
    t0 = 0x0055d5e6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516a76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516a76:  // push 0x662b2c
    t0 = 0x662b2cu; esp -= 4; M32(esp) = t0;
L_00516a7b:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516a80:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516a85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516a85:  // mov eax, dword ptr [0x896ca0]
    eax = (uint32_t)(M32((uint32_t)(0x896ca0u)));
L_00516a8a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516a8d:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00516a8f:  // jne 0x516ab2
    if (!f.zf) goto L_00516ab2;
L_00516a91:  // mov ecx, dword ptr [ebp + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2c8u)));
L_00516a97:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00516a99:  // je 0x516e97
    if (f.zf) goto L_00516e97;
L_00516a9f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00516aa1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00516aa3:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516aa5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516aa5:  // mov dword ptr [ebp + 0x2c8], edi
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(edi);
L_00516aab:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00516aad:  // jmp 0x516eab
    goto L_00516eab;
L_00516ab2:  // mov ecx, dword ptr [0x663078]
    ecx = (uint32_t)(M32((uint32_t)(0x663078u)));
L_00516ab8:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00516aba:  // jl 0x516ac4
    if ((f.sf != f.of)) goto L_00516ac4;
L_00516abc:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00516abe:  // mov dword ptr [0x663078], ecx
    M32((uint32_t)(0x663078u)) = (uint32_t)(ecx);
L_00516ac4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00516ac5:  // push 0x63e438
    t0 = 0x63e438u; esp -= 4; M32(esp) = t0;
L_00516aca:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516acf:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516ad4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516ad4:  // mov eax, dword ptr [0x663078]
    eax = (uint32_t)(M32((uint32_t)(0x663078u)));
L_00516ad9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00516adc:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00516adf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00516ae0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00516ae1:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00516ae4:  // mov edx, dword ptr [ecx*8 + 0x8964d8]
    edx = (uint32_t)(M32((uint32_t)(ecx * 8u + 0x8964d8u)));
L_00516aeb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00516aec:  // call 0x55d5e0
    t0 = 0x0055d5e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516af1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516af1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516af3:  // jge 0x516b28
    if ((f.sf == f.of)) goto L_00516b28;
L_00516af5:  // push 0x63e418
    t0 = 0x63e418u; esp -= 4; M32(esp) = t0;
L_00516afa:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516aff:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516b04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516b04:  // mov ecx, dword ptr [ebp + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2c8u)));
L_00516b0a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516b0d:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00516b0f:  // je 0x516e97
    if (f.zf) goto L_00516e97;
L_00516b15:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00516b17:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00516b19:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516b1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516b1b:  // mov dword ptr [ebp + 0x2c8], edi
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(edi);
L_00516b21:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00516b23:  // jmp 0x516eab
    goto L_00516eab;
L_00516b28:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00516b2a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00516b2c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00516b2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516b2e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00516b30:  // call dword ptr [ecx + 0x18]
    t0 = M32((uint32_t)(ecx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516b33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516b33:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516b35:  // jge 0x516b78
    if ((f.sf == f.of)) goto L_00516b78;
L_00516b37:  // push 0x63e3f0
    t0 = 0x63e3f0u; esp -= 4; M32(esp) = t0;
L_00516b3c:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516b41:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516b46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516b46:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00516b48:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516b4b:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00516b4d:  // je 0x516b57
    if (f.zf) goto L_00516b57;
L_00516b4f:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00516b51:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516b52:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516b55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516b55:  // mov dword ptr [ebx], edi
    M32((uint32_t)(ebx)) = (uint32_t)(edi);
L_00516b57:  // mov ecx, dword ptr [ebp + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2c8u)));
L_00516b5d:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00516b5f:  // je 0x516e97
    if (f.zf) goto L_00516e97;
L_00516b65:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00516b67:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00516b69:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516b6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516b6b:  // mov dword ptr [ebp + 0x2c8], edi
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(edi);
L_00516b71:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00516b73:  // jmp 0x516eab
    goto L_00516eab;
L_00516b78:  // mov ecx, 0x18
    ecx = (uint32_t)(0x18u);
L_00516b7d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00516b7f:  // lea edi, [esp + 0x50]
    edi = (uint32_t)((uint32_t)(esp + 0x50u));
L_00516b83:  // mov byte ptr [0x896c58], al
    M8((uint32_t)(0x896c58u)) = (uint8_t)((eax & 0xffu));
L_00516b88:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_00516b8a:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00516b8c:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00516b90:  // mov dword ptr [esp + 0x50], 0x60
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x60u);
L_00516b98:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00516b99:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00516b9b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516b9c:  // call dword ptr [ecx + 0x10]
    t0 = M32((uint32_t)(ecx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516b9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516b9f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516ba1:  // jl 0x516cf5
    if ((f.sf != f.of)) goto L_00516cf5;
L_00516ba7:  // push 0x63e3e4
    t0 = 0x63e3e4u; esp -= 4; M32(esp) = t0;
L_00516bac:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516bb1:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516bb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516bb6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516bb9:  // lea esi, [esp + 0xb0]
    esi = (uint32_t)((uint32_t)(esp + 0xb0u));
L_00516bc0:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00516bc2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00516bc4:  // mov al, byte ptr [esp + edi + 0x50]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + edi + 0x50u))) & 0xffu);
L_00516bc8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516bc9:  // push 0x63e3dc
    t0 = 0x63e3dcu; esp -= 4; M32(esp) = t0;
L_00516bce:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00516bcf:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516bd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516bd4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00516bd6:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00516bd9:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00516bdc:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00516bdf:  // cmp cl, 3
    t0 = lsub<8>((ecx & 0xffu), 0x3u, f);
L_00516be2:  // jne 0x516be8
    if (!f.zf) goto L_00516be8;
L_00516be4:  // mov byte ptr [esi], 0x20
    M8((uint32_t)(esi)) = (uint8_t)(0x20u);
L_00516be7:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00516be8:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00516be9:  // cmp edi, 0x60
    t0 = lsub<32>(edi, 0x60u, f);
L_00516bec:  // jb 0x516bc2
    if (f.cf) goto L_00516bc2;
L_00516bee:  // lea edx, [esp + 0xb0]
    edx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_00516bf5:  // mov byte ptr [esi], 0
    M8((uint32_t)(esi)) = (uint8_t)(0x0u);
L_00516bf8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00516bf9:  // push 0x6245d8
    t0 = 0x6245d8u; esp -= 4; M32(esp) = t0;
L_00516bfe:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516c03:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516c08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516c08:  // mov al, byte ptr [esp + 0x60]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x60u))) & 0xffu);
L_00516c0c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00516c0f:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_00516c11:  // je 0x516c21
    if (f.zf) goto L_00516c21;
L_00516c13:  // mov byte ptr [0x8964d0], 1
    M8((uint32_t)(0x8964d0u)) = (uint8_t)(0x1u);
L_00516c1a:  // push 0x63e3b4
    t0 = 0x63e3b4u; esp -= 4; M32(esp) = t0;
L_00516c1f:  // jmp 0x516c2d
    goto L_00516c2d;
L_00516c21:  // mov byte ptr [0x8964d0], 0
    M8((uint32_t)(0x8964d0u)) = (uint8_t)(0x0u);
L_00516c28:  // push 0x63e380
    t0 = 0x63e380u; esp -= 4; M32(esp) = t0;
L_00516c2d:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516c32:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516c37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516c37:  // mov eax, dword ptr [0x663084]
    eax = (uint32_t)(M32((uint32_t)(0x663084u)));
L_00516c3c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516c3f:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00516c42:  // jne 0x516c5a
    if (!f.zf) goto L_00516c5a;
L_00516c44:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_00516c4b:  // mov dword ptr [ebp + 0xbc], 2
    M32((uint32_t)(ebp + 0xbcu)) = (uint32_t)(0x2u);
L_00516c55:  // cmp eax, 0x1e
    t0 = lsub<32>(eax, 0x1eu, f);
L_00516c58:  // jmp 0x516c60
    goto L_00516c60;
L_00516c5a:  // mov dword ptr [ebp + 0xbc], eax
    M32((uint32_t)(ebp + 0xbcu)) = (uint32_t)(eax);
L_00516c60:  // mov eax, dword ptr [ebp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xbcu)));
L_00516c66:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516c67:  // push 0x63e364
    t0 = 0x63e364u; esp -= 4; M32(esp) = t0;
L_00516c6c:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516c71:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516c76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516c76:  // mov eax, dword ptr [0x663088]
    eax = (uint32_t)(M32((uint32_t)(0x663088u)));
L_00516c7b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00516c7e:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00516c81:  // jne 0x516cc6
    if (!f.zf) goto L_00516cc6;
L_00516c83:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_00516c8a:  // mov ecx, dword ptr [ebp + 0x2cc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2ccu)));
L_00516c90:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00516c92:  // jbe 0x516c9a
    if ((f.cf || f.zf)) goto L_00516c9a;
L_00516c94:  // mov dword ptr [ebp + 0x2cc], eax
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(eax);
L_00516c9a:  // cmp dword ptr [ebp + 0xbc], 2
    t0 = lsub<32>(M32((uint32_t)(ebp + 0xbcu)), 0x2u, f);
L_00516ca1:  // jne 0x516cb7
    if (!f.zf) goto L_00516cb7;
L_00516ca3:  // mov eax, dword ptr [esp + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_00516ca7:  // mov ecx, dword ptr [ebp + 0x2cc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2ccu)));
L_00516cad:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00516caf:  // jbe 0x516cb7
    if ((f.cf || f.zf)) goto L_00516cb7;
L_00516cb1:  // mov dword ptr [ebp + 0x2cc], eax
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(eax);
L_00516cb7:  // mov ecx, dword ptr [ebp + 0x2cc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2ccu)));
L_00516cbd:  // mov eax, 0x40
    eax = (uint32_t)(0x40u);
L_00516cc2:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00516cc4:  // jle 0x516ccc
    if ((f.zf || f.sf != f.of)) goto L_00516ccc;
L_00516cc6:  // mov dword ptr [ebp + 0x2cc], eax
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(eax);
L_00516ccc:  // mov ecx, dword ptr [ebp + 0x2cc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2ccu)));
L_00516cd2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00516cd3:  // push 0x63e34c
    t0 = 0x63e34cu; esp -= 4; M32(esp) = t0;
L_00516cd8:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516cdd:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516ce2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516ce2:  // mov eax, dword ptr [0x663074]
    eax = (uint32_t)(M32((uint32_t)(0x663074u)));
L_00516ce7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00516cea:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516cec:  // setne dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_00516cef:  // mov byte ptr [0x896c58], dl
    M8((uint32_t)(0x896c58u)) = (uint8_t)((edx & 0xffu));
L_00516cf5:  // mov ecx, 9
    ecx = (uint32_t)(0x9u);
L_00516cfa:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00516cfc:  // lea edi, [esp + 0x2c]
    edi = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00516d00:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00516d02:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00516d06:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00516d07:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_00516d09:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00516d0b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00516d0c:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00516d10:  // mov dword ptr [esp + 0x34], 0x24
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x24u);
L_00516d18:  // mov dword ptr [esp + 0x38], 0x11
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x11u);
L_00516d20:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_00516d24:  // mov dword ptr [esp + 0x44], esi
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(esi);
L_00516d28:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_00516d2c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00516d2e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00516d2f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516d30:  // call dword ptr [ecx + 0xc]
    t0 = M32((uint32_t)(ecx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516d33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516d33:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516d35:  // jge 0x516d58
    if ((f.sf == f.of)) goto L_00516d58;
L_00516d37:  // push 0x63e324
    t0 = 0x63e324u; esp -= 4; M32(esp) = t0;
L_00516d3c:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516d41:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516d46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516d46:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00516d48:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516d4b:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00516d4d:  // je 0x516e1c
    if (f.zf) goto L_00516e1c;
L_00516d53:  // jmp 0x516e14
    goto L_00516e14;
L_00516d58:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00516d5a:  // mov ecx, dword ptr [0x663080]
    ecx = (uint32_t)(M32((uint32_t)(0x663080u)));
L_00516d60:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00516d64:  // mov word ptr [esp + 0x14], 1
    M16((uint32_t)(esp + 0x14u)) = (uint16_t)(0x1u);
L_00516d6b:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00516d6f:  // mov word ptr [esp + 0x16], 2
    M16((uint32_t)(esp + 0x16u)) = (uint16_t)(0x2u);
L_00516d76:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00516d7a:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00516d7e:  // mov word ptr [esp + 0x24], ax
    M16((uint32_t)(esp + 0x24u)) = (uint16_t)((eax & 0xffffu));
L_00516d83:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00516d85:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00516d87:  // je 0x516d9a
    if (f.zf) goto L_00516d9a;
L_00516d89:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00516d8a:  // je 0x516d93
    if (f.zf) goto L_00516d93;
L_00516d8c:  // mov edx, 0x2b11
    edx = (uint32_t)(0x2b11u);
L_00516d91:  // jmp 0x516d9f
    goto L_00516d9f;
L_00516d93:  // mov edx, 0x5622
    edx = (uint32_t)(0x5622u);
L_00516d98:  // jmp 0x516d9f
    goto L_00516d9f;
L_00516d9a:  // mov edx, 0xac44
    edx = (uint32_t)(0xac44u);
L_00516d9f:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_00516da1:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00516da5:  // jl 0x516db1
    if ((f.sf != f.of)) goto L_00516db1;
L_00516da7:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00516daa:  // mov eax, 0x10
    eax = (uint32_t)(0x10u);
L_00516daf:  // jle 0x516db6
    if ((f.zf || f.sf != f.of)) goto L_00516db6;
L_00516db1:  // mov eax, 8
    eax = (uint32_t)(0x8u);
L_00516db6:  // mov word ptr [esp + 0x22], ax
    M16((uint32_t)(esp + 0x22u)) = (uint16_t)((eax & 0xffffu));
L_00516dbb:  // shr ax, 3
    t0 = lshr<16>((eax & 0xffffu), 0x3u, f);
    eax = (eax & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_00516dbf:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00516dc1:  // mov word ptr [esp + 0x20], ax
    M16((uint32_t)(esp + 0x20u)) = (uint16_t)((eax & 0xffffu));
L_00516dc6:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00516dca:  // and ecx, 0xffff
    t0 = llog<32>(ecx & 0xffffu, f);
    ecx = (uint32_t)(t0);
L_00516dd0:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00516dd4:  // imul ecx, edx
    t0 = limul32(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00516dd7:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00516ddb:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00516ddd:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00516de1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00516de2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516de3:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516de6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516de6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516de8:  // jge 0x516e36
    if ((f.sf == f.of)) goto L_00516e36;
L_00516dea:  // push 0x63e300
    t0 = 0x63e300u; esp -= 4; M32(esp) = t0;
L_00516def:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516df4:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516df9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516df9:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00516dfd:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516e00:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00516e02:  // je 0x516e0e
    if (f.zf) goto L_00516e0e;
L_00516e04:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00516e06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516e07:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e0a:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00516e0e:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00516e10:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00516e12:  // je 0x516e1c
    if (f.zf) goto L_00516e1c;
L_00516e14:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00516e16:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516e17:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e1a:  // mov dword ptr [ebx], esi
    M32((uint32_t)(ebx)) = (uint32_t)(esi);
L_00516e1c:  // mov ecx, dword ptr [ebp + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2c8u)));
L_00516e22:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_00516e24:  // je 0x516e97
    if (f.zf) goto L_00516e97;
L_00516e26:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00516e28:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00516e2a:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e2c:  // mov dword ptr [ebp + 0x2c8], esi
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(esi);
L_00516e32:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00516e34:  // jmp 0x516eab
    goto L_00516eab;
L_00516e36:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00516e3a:  // lea edx, [ebp + 0x2c4]
    edx = (uint32_t)((uint32_t)(ebp + 0x2c4u));
L_00516e40:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00516e41:  // push 0x60c0ac
    t0 = 0x60c0acu; esp -= 4; M32(esp) = t0;
L_00516e46:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00516e48:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516e49:  // call dword ptr [ecx]
    t0 = M32((uint32_t)(ecx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e4b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00516e4d:  // jge 0x516e9b
    if ((f.sf == f.of)) goto L_00516e9b;
L_00516e4f:  // push 0x63e2e8
    t0 = 0x63e2e8u; esp -= 4; M32(esp) = t0;
L_00516e54:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00516e59:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e5e:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00516e62:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00516e65:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00516e67:  // je 0x516e73
    if (f.zf) goto L_00516e73;
L_00516e69:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00516e6b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516e6c:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e6f:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00516e73:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00516e75:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00516e77:  // je 0x516e81
    if (f.zf) goto L_00516e81;
L_00516e79:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00516e7b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516e7c:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e7f:  // mov dword ptr [ebx], esi
    M32((uint32_t)(ebx)) = (uint32_t)(esi);
L_00516e81:  // mov ecx, dword ptr [ebp + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2c8u)));
L_00516e87:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_00516e89:  // je 0x516e97
    if (f.zf) goto L_00516e97;
L_00516e8b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00516e8d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00516e8f:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516e91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516e91:  // mov dword ptr [ebp + 0x2c8], esi
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(esi);
L_00516e97:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00516e99:  // jmp 0x516eab
    goto L_00516eab;
L_00516e9b:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00516e9f:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00516ea1:  // je 0x516ea9
    if (f.zf) goto L_00516ea9;
L_00516ea3:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00516ea5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00516ea6:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00516ea9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00516ea9:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00516eab:  // mov ecx, dword ptr [esp + 0x18c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_00516eb2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00516eb3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00516eb4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00516eb5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00516eb6:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00516ebd:  // add esp, 0x188
    t0 = ladd<32>(esp, 0x188u, f);
    esp = (uint32_t)(t0);
L_00516ec3:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005169b0, 005169b0)
