// lifted from 00557a90 (vslot1, 2489 bytes, 719 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00557a90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00557a90;
L_00557a90:  // mov eax, dword ptr [0x888c8c]
    eax = (uint32_t)(M32((uint32_t)(0x888c8cu)));
L_00557a95:  // sub esp, 0x1e4
    t0 = lsub<32>(esp, 0x1e4u, f);
    esp = (uint32_t)(t0);
L_00557a9b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557a9d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00557a9e:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00557aa0:  // jne 0x557aac
    if (!f.zf) goto L_00557aac;
L_00557aa2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557aa4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00557aa5:  // add esp, 0x1e4
    t0 = ladd<32>(esp, 0x1e4u, f);
    esp = (uint32_t)(t0);
L_00557aab:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00557aac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00557aad:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557aae:  // lea edx, [ebp + 8]
    edx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00557ab1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00557ab2:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00557ab4:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00557ab7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557ab9:  // or ebx, 0xffffffff
    t0 = llog<32>(ebx | 0xffffffffu, f);
    ebx = (uint32_t)(t0);
L_00557abc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00557abe:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00557ac0:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00557ac1:  // jne 0x557b92
    if (!f.zf) goto L_00557b92;
L_00557ac7:  // mov al, byte ptr [ebp + 0x14c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x14cu))) & 0xffu);
L_00557acd:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557acf:  // je 0x557ae1
    if (f.zf) goto L_00557ae1;
L_00557ad1:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00557ad6:  // call 0x513760
    t0 = 0x00513760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557adbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557adb:  // mov dword ptr [ebp + 0x144], eax
    M32((uint32_t)(ebp + 0x144u)) = (uint32_t)(eax);
L_00557ae1:  // lea esi, [ebp + 0xb8]
    esi = (uint32_t)((uint32_t)(ebp + 0xb8u));
L_00557ae7:  // mov eax, dword ptr [ebp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_00557aed:  // cmp eax, 0xa
    t0 = lsub<32>(eax, 0xau, f);
L_00557af0:  // ja 0x557b3f
    if ((!f.cf && !f.zf)) goto L_00557b3f;
L_00557af2:  // jmp dword ptr [eax*4 + 0x55844c]
    t0 = M32((uint32_t)(eax * 4u + 0x55844cu));
    switch (t0) {
    case 0x00557af9u: goto L_00557af9;
    case 0x00557b00u: goto L_00557b00;
    case 0x00557b07u: goto L_00557b07;
    case 0x00557b0eu: goto L_00557b0e;
    case 0x00557b15u: goto L_00557b15;
    case 0x00557b1cu: goto L_00557b1c;
    case 0x00557b23u: goto L_00557b23;
    case 0x00557b2au: goto L_00557b2a;
    case 0x00557b31u: goto L_00557b31;
    case 0x00557b38u: goto L_00557b38;
    case 0x00557b3fu: goto L_00557b3f;
    case 0x00557c37u: goto L_00557c37;
    case 0x00557c3eu: goto L_00557c3e;
    case 0x00557c45u: goto L_00557c45;
    case 0x00557c4cu: goto L_00557c4c;
    case 0x00557c53u: goto L_00557c53;
    case 0x00557c5au: goto L_00557c5a;
    case 0x00557c61u: goto L_00557c61;
    case 0x00557c68u: goto L_00557c68;
    case 0x00557c6fu: goto L_00557c6f;
    case 0x00557c76u: goto L_00557c76;
    case 0x00557c7du: goto L_00557c7d;
    case 0x00557e80u: goto L_00557e80;
    case 0x00557e87u: goto L_00557e87;
    case 0x00557e8eu: goto L_00557e8e;
    case 0x00557e95u: goto L_00557e95;
    case 0x00557e9cu: goto L_00557e9c;
    case 0x00557ea3u: goto L_00557ea3;
    case 0x00557eaau: goto L_00557eaa;
    case 0x00557eb1u: goto L_00557eb1;
    case 0x00557eb8u: goto L_00557eb8;
    case 0x00557ebfu: goto L_00557ebf;
    case 0x00557ec6u: goto L_00557ec6;
    case 0x00557fcdu: goto L_00557fcd;
    case 0x00557fd4u: goto L_00557fd4;
    case 0x00557fdbu: goto L_00557fdb;
    case 0x00557fe2u: goto L_00557fe2;
    case 0x00557fe9u: goto L_00557fe9;
    case 0x00557ff0u: goto L_00557ff0;
    case 0x00557ff7u: goto L_00557ff7;
    case 0x00557ffeu: goto L_00557ffe;
    case 0x00558005u: goto L_00558005;
    case 0x0055800cu: goto L_0055800c;
    case 0x00558013u: goto L_00558013;
    case 0x0055818fu: goto L_0055818f;
    case 0x00558196u: goto L_00558196;
    case 0x0055819du: goto L_0055819d;
    case 0x005581a4u: goto L_005581a4;
    case 0x005581e8u: goto L_005581e8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00557af9:  // mov eax, 0x19
    eax = (uint32_t)(0x19u);
L_00557afe:  // jmp 0x557b41
    goto L_00557b41;
L_00557b00:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_00557b05:  // jmp 0x557b41
    goto L_00557b41;
L_00557b07:  // mov eax, 0x16
    eax = (uint32_t)(0x16u);
L_00557b0c:  // jmp 0x557b41
    goto L_00557b41;
L_00557b0e:  // mov eax, 0x15
    eax = (uint32_t)(0x15u);
L_00557b13:  // jmp 0x557b41
    goto L_00557b41;
L_00557b15:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_00557b1a:  // jmp 0x557b41
    goto L_00557b41;
L_00557b1c:  // mov eax, 0x31545844
    eax = (uint32_t)(0x31545844u);
L_00557b21:  // jmp 0x557b41
    goto L_00557b41;
L_00557b23:  // mov eax, 0x32545844
    eax = (uint32_t)(0x32545844u);
L_00557b28:  // jmp 0x557b41
    goto L_00557b41;
L_00557b2a:  // mov eax, 0x34545844
    eax = (uint32_t)(0x34545844u);
L_00557b2f:  // jmp 0x557b41
    goto L_00557b41;
L_00557b31:  // mov eax, 0x3c
    eax = (uint32_t)(0x3cu);
L_00557b36:  // jmp 0x557b41
    goto L_00557b41;
L_00557b38:  // mov eax, 0x3f
    eax = (uint32_t)(0x3fu);
L_00557b3d:  // jmp 0x557b41
    goto L_00557b41;
L_00557b3f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557b41:  // mov ecx, dword ptr [ebp + 0x150]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x150u)));
L_00557b47:  // mov edx, dword ptr [ebp + 0x148]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x148u)));
L_00557b4d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557b4e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557b4f:  // mov ecx, dword ptr [ebp + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_00557b55:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557b56:  // movsx eax, word ptr [ebp + 0xb0]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebp + 0xb0u))));
L_00557b5d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557b5f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557b60:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557b61:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557b62:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00557b67:  // call 0x513a10
    t0 = 0x00513a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557b6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557b6c:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00557b6e:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00557b70:  // jge 0x55812a
    if ((f.sf == f.of)) goto L_0055812a;
L_00557b76:  // cmp dword ptr [ebp + 0x144], 4
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x144u)), 0x4u, f);
L_00557b7d:  // jne 0x558128
    if (!f.zf) goto L_00558128;
L_00557b83:  // mov dword ptr [ebp + 0x144], 2
    M32((uint32_t)(ebp + 0x144u)) = (uint32_t)(0x2u);
L_00557b8d:  // jmp 0x557ae7
    goto L_00557ae7;
L_00557b92:  // cmp byte ptr [edx], 0x2a
    t0 = lsub<8>(M8((uint32_t)(edx)), 0x2au, f);
L_00557b95:  // jne 0x557cad
    if (!f.zf) goto L_00557cad;
L_00557b9b:  // lea esi, [ebp + 9]
    esi = (uint32_t)((uint32_t)(ebp + 0x9u));
L_00557b9e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00557ba0:  // push 0x6528a8
    t0 = 0x6528a8u; esp -= 4; M32(esp) = t0;
L_00557ba5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557ba6:  // mov byte ptr [ebp + 0x14c], 0
    M8((uint32_t)(ebp + 0x14cu)) = (uint8_t)(0x0u);
L_00557bad:  // call 0x55e560
    t0 = 0x0055e560u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557bb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557bb2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00557bb5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557bb7:  // jne 0x557bc5
    if (!f.zf) goto L_00557bc5;
L_00557bb9:  // mov dword ptr [ebp + 0x144], 1
    M32((uint32_t)(ebp + 0x144u)) = (uint32_t)(0x1u);
L_00557bc3:  // jmp 0x557bfc
    goto L_00557bfc;
L_00557bc5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00557bc7:  // push 0x6528a4
    t0 = 0x6528a4u; esp -= 4; M32(esp) = t0;
L_00557bcc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557bcd:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557bd2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557bd2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00557bd5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557bd7:  // jne 0x557bf2
    if (!f.zf) goto L_00557bf2;
L_00557bd9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00557bde:  // call 0x513760
    t0 = 0x00513760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557be3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557be3:  // mov dword ptr [ebp + 0x144], eax
    M32((uint32_t)(ebp + 0x144u)) = (uint32_t)(eax);
L_00557be9:  // mov byte ptr [ebp + 0x14c], 1
    M8((uint32_t)(ebp + 0x14cu)) = (uint8_t)(0x1u);
L_00557bf0:  // jmp 0x557bfc
    goto L_00557bfc;
L_00557bf2:  // mov dword ptr [ebp + 0x144], 3
    M32((uint32_t)(ebp + 0x144u)) = (uint32_t)(0x3u);
L_00557bfc:  // movsx edx, byte ptr [ebp + 0xc]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(ebp + 0xcu))));
L_00557c00:  // lea eax, [ebp + 0xe]
    eax = (uint32_t)((uint32_t)(ebp + 0xeu));
L_00557c03:  // sub edx, 0x30
    t0 = lsub<32>(edx, 0x30u, f);
    edx = (uint32_t)(t0);
L_00557c06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557c07:  // mov dword ptr [ebp + 0x148], edx
    M32((uint32_t)(ebp + 0x148u)) = (uint32_t)(edx);
L_00557c0d:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557c12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557c12:  // mov ecx, dword ptr [ebp + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_00557c18:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557c1b:  // mov dx, ax
    edx = (edx & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
L_00557c1e:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_00557c21:  // mov dword ptr [ebp + 0xac], eax
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(eax);
L_00557c27:  // mov word ptr [ebp + 0xb0], dx
    M16((uint32_t)(ebp + 0xb0u)) = (uint16_t)((edx & 0xffffu));
L_00557c2e:  // ja 0x557c7d
    if ((!f.cf && !f.zf)) goto L_00557c7d;
L_00557c30:  // jmp dword ptr [ecx*4 + 0x558478]
    t0 = M32((uint32_t)(ecx * 4u + 0x558478u));
    switch (t0) {
    case 0x00557c37u: goto L_00557c37;
    case 0x00557c3eu: goto L_00557c3e;
    case 0x00557c45u: goto L_00557c45;
    case 0x00557c4cu: goto L_00557c4c;
    case 0x00557c53u: goto L_00557c53;
    case 0x00557c5au: goto L_00557c5a;
    case 0x00557c61u: goto L_00557c61;
    case 0x00557c68u: goto L_00557c68;
    case 0x00557c6fu: goto L_00557c6f;
    case 0x00557c76u: goto L_00557c76;
    case 0x00557c7du: goto L_00557c7d;
    case 0x00557e80u: goto L_00557e80;
    case 0x00557e87u: goto L_00557e87;
    case 0x00557e8eu: goto L_00557e8e;
    case 0x00557e95u: goto L_00557e95;
    case 0x00557e9cu: goto L_00557e9c;
    case 0x00557ea3u: goto L_00557ea3;
    case 0x00557eaau: goto L_00557eaa;
    case 0x00557eb1u: goto L_00557eb1;
    case 0x00557eb8u: goto L_00557eb8;
    case 0x00557ebfu: goto L_00557ebf;
    case 0x00557ec6u: goto L_00557ec6;
    case 0x00557fcdu: goto L_00557fcd;
    case 0x00557fd4u: goto L_00557fd4;
    case 0x00557fdbu: goto L_00557fdb;
    case 0x00557fe2u: goto L_00557fe2;
    case 0x00557fe9u: goto L_00557fe9;
    case 0x00557ff0u: goto L_00557ff0;
    case 0x00557ff7u: goto L_00557ff7;
    case 0x00557ffeu: goto L_00557ffe;
    case 0x00558005u: goto L_00558005;
    case 0x0055800cu: goto L_0055800c;
    case 0x00558013u: goto L_00558013;
    case 0x0055818fu: goto L_0055818f;
    case 0x00558196u: goto L_00558196;
    case 0x0055819du: goto L_0055819d;
    case 0x005581a4u: goto L_005581a4;
    case 0x005581e8u: goto L_005581e8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00557c37:  // mov ecx, 0x19
    ecx = (uint32_t)(0x19u);
L_00557c3c:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c3e:  // mov ecx, 0x1a
    ecx = (uint32_t)(0x1au);
L_00557c43:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c45:  // mov ecx, 0x16
    ecx = (uint32_t)(0x16u);
L_00557c4a:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c4c:  // mov ecx, 0x15
    ecx = (uint32_t)(0x15u);
L_00557c51:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c53:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00557c58:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c5a:  // mov ecx, 0x31545844
    ecx = (uint32_t)(0x31545844u);
L_00557c5f:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c61:  // mov ecx, 0x32545844
    ecx = (uint32_t)(0x32545844u);
L_00557c66:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c68:  // mov ecx, 0x34545844
    ecx = (uint32_t)(0x34545844u);
L_00557c6d:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c6f:  // mov ecx, 0x3c
    ecx = (uint32_t)(0x3cu);
L_00557c74:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c76:  // mov ecx, 0x3f
    ecx = (uint32_t)(0x3fu);
L_00557c7b:  // jmp 0x557c7f
    goto L_00557c7f;
L_00557c7d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00557c7f:  // lea esi, [ebp + 0xb8]
    esi = (uint32_t)((uint32_t)(ebp + 0xb8u));
L_00557c85:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557c86:  // mov esi, dword ptr [ebp + 0x150]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x150u)));
L_00557c8c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557c8d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557c8e:  // mov ecx, dword ptr [ebp + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x148u)));
L_00557c94:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557c96:  // movsx edx, dx
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)((edx & 0xffffu)));
L_00557c99:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557c9a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557c9b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557c9c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00557ca1:  // call 0x5139a0
    t0 = 0x005139a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557ca6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557ca6:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00557ca8:  // jmp 0x558128
    goto L_00558128;
L_00557cad:  // mov eax, dword ptr [0x652894]
    eax = (uint32_t)(M32((uint32_t)(0x652894u)));
L_00557cb2:  // mov ecx, dword ptr [0x652898]
    ecx = (uint32_t)(M32((uint32_t)(0x652898u)));
L_00557cb8:  // mov edx, dword ptr [0x65289c]
    edx = (uint32_t)(M32((uint32_t)(0x65289cu)));
L_00557cbe:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00557cc2:  // mov ax, word ptr [0x6528a0]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(0x6528a0u))) & 0xffffu);
L_00557cc8:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_00557ccc:  // mov cl, byte ptr [0x6528a2]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x6528a2u))) & 0xffu);
L_00557cd2:  // mov word ptr [esp + 0x40], ax
    M16((uint32_t)(esp + 0x40u)) = (uint16_t)((eax & 0xffffu));
L_00557cd7:  // mov byte ptr [esp + 0x42], cl
    M8((uint32_t)(esp + 0x42u)) = (uint8_t)((ecx & 0xffu));
L_00557cdb:  // mov ecx, 0x1c
    ecx = (uint32_t)(0x1cu);
L_00557ce0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557ce2:  // lea edi, [esp + 0x43]
    edi = (uint32_t)((uint32_t)(esp + 0x43u));
L_00557ce6:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_00557cea:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00557cee:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_00557cf0:  // stosb byte ptr es:[edi], al
    M8(edi) = (uint8_t)eax; edi += 1;
L_00557cf1:  // lea edi, [ebp + 8]
    edi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00557cf4:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00557cf7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557cf9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00557cfb:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00557cfd:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00557cff:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00557d01:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00557d03:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00557d05:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00557d08:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00557d0a:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00557d0c:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00557d0d:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00557d10:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00557d12:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00557d14:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00557d18:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00557d1b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557d1c:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00557d1e:  // call 0x56004d
    t0 = 0x0056004du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557d23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557d23:  // mov al, byte ptr [ebp + 8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x8u))) & 0xffu);
L_00557d26:  // lea ecx, [ebp + 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00557d29:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557d2c:  // mov byte ptr [esp + 0x13], 0
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x0u);
L_00557d31:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557d33:  // je 0x557d4d
    if (f.zf) goto L_00557d4d;
L_00557d35:  // mov dl, 0x5f
    edx = (edx & 0xffffff00u) | ((uint32_t)(0x5fu) & 0xffu);
L_00557d37:  // cmp al, 0x5c
    t0 = lsub<8>((eax & 0xffu), 0x5cu, f);
L_00557d39:  // jne 0x557d45
    if (!f.zf) goto L_00557d45;
L_00557d3b:  // cmp byte ptr [ecx + 1], dl
    t0 = lsub<8>(M8((uint32_t)(ecx + 0x1u)), (edx & 0xffu), f);
L_00557d3e:  // jne 0x557d45
    if (!f.zf) goto L_00557d45;
L_00557d40:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_00557d45:  // mov al, byte ptr [ecx + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x1u))) & 0xffu);
L_00557d48:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00557d49:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557d4b:  // jne 0x557d37
    if (!f.zf) goto L_00557d37;
L_00557d4d:  // mov eax, dword ptr [0x662dd4]
    eax = (uint32_t)(M32((uint32_t)(0x662dd4u)));
L_00557d52:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557d54:  // jne 0x557d84
    if (!f.zf) goto L_00557d84;
L_00557d56:  // mov eax, dword ptr [ebp + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_00557d5c:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00557d5e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557d60:  // jle 0x55809c
    if ((f.zf || f.sf != f.of)) goto L_0055809c;
L_00557d66:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557d67:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00557d69:  // call 0x557300
    t0 = 0x00557300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557d6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557d6e:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00557d70:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00557d72:  // jl 0x557d84
    if ((f.sf != f.of)) goto L_00557d84;
L_00557d74:  // mov eax, dword ptr [ebp + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_00557d7a:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00557d7b:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00557d7d:  // jl 0x557d66
    if ((f.sf != f.of)) goto L_00557d66;
L_00557d7f:  // jmp 0x558128
    goto L_00558128;
L_00557d84:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_00557d88:  // mov byte ptr [ebp + 0x14c], 0
    M8((uint32_t)(ebp + 0x14cu)) = (uint8_t)(0x0u);
L_00557d8f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00557d91:  // je 0x557f7e
    if (f.zf) goto L_00557f7e;
L_00557d97:  // mov al, byte ptr [esp + 0x34]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x34u))) & 0xffu);
L_00557d9b:  // lea edi, [esp + 0x34]
    edi = (uint32_t)((uint32_t)(esp + 0x34u));
L_00557d9f:  // cmp al, 0x2e
    t0 = lsub<8>((eax & 0xffu), 0x2eu, f);
L_00557da1:  // je 0x557dab
    if (f.zf) goto L_00557dab;
L_00557da3:  // mov al, byte ptr [edi + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x1u))) & 0xffu);
L_00557da6:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00557da7:  // cmp al, 0x2e
    t0 = lsub<8>((eax & 0xffu), 0x2eu, f);
L_00557da9:  // jne 0x557da3
    if (!f.zf) goto L_00557da3;
L_00557dab:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00557dae:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00557db5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557db6:  // push 0x652878
    t0 = 0x652878u; esp -= 4; M32(esp) = t0;
L_00557dbb:  // mov byte ptr [edi], 0
    M8((uint32_t)(edi)) = (uint8_t)(0x0u);
L_00557dbe:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557dbf:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00557dc0:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557dc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557dc5:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00557dc8:  // lea edx, [esp + 0xf4]
    edx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00557dcf:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00557dd4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557dd5:  // call 0x42b500
    t0 = 0x0042b500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557ddau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557dda:  // mov dword ptr [ebp + 0x138], 0
    M32((uint32_t)(ebp + 0x138u)) = (uint32_t)(0x0u);
L_00557de4:  // mov eax, dword ptr [ebp + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_00557dea:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00557deb:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00557def:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557df0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557df1:  // lea edx, [esp + 0xc0]
    edx = (uint32_t)((uint32_t)(esp + 0xc0u));
L_00557df8:  // push 0x652870
    t0 = 0x652870u; esp -= 4; M32(esp) = t0;
L_00557dfd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557dfe:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557e03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557e03:  // mov eax, dword ptr [ebp + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_00557e09:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00557e0c:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00557e10:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557e11:  // push 0x652864
    t0 = 0x652864u; esp -= 4; M32(esp) = t0;
L_00557e16:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557e17:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557e1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557e1c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00557e1f:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00557e23:  // lea eax, [esp + 0xf4]
    eax = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00557e2a:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00557e2f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557e30:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557e31:  // call 0x42b650
    t0 = 0x0042b650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557e36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557e36:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_00557e3d:  // push 0x62c60c
    t0 = 0x62c60cu; esp -= 4; M32(esp) = t0;
L_00557e42:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557e43:  // call 0x55e490
    t0 = 0x0055e490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557e48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557e48:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00557e4b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557e4d:  // je 0x557f70
    if (f.zf) goto L_00557f70;
L_00557e53:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557e54:  // call 0x55e4a3
    t0 = 0x0055e4a3u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557e59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557e59:  // mov eax, dword ptr [ebp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x13cu)));
L_00557e5f:  // mov ecx, dword ptr [ebp + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_00557e65:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557e68:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_00557e6a:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00557e6c:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_00557e6f:  // add eax, 0x70002
    t0 = ladd<32>(eax, 0x70002u, f);
    eax = (uint32_t)(t0);
L_00557e74:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_00557e77:  // ja 0x557ec6
    if ((!f.cf && !f.zf)) goto L_00557ec6;
L_00557e79:  // jmp dword ptr [ecx*4 + 0x5584a4]
    t0 = M32((uint32_t)(ecx * 4u + 0x5584a4u));
    switch (t0) {
    case 0x00557e80u: goto L_00557e80;
    case 0x00557e87u: goto L_00557e87;
    case 0x00557e8eu: goto L_00557e8e;
    case 0x00557e95u: goto L_00557e95;
    case 0x00557e9cu: goto L_00557e9c;
    case 0x00557ea3u: goto L_00557ea3;
    case 0x00557eaau: goto L_00557eaa;
    case 0x00557eb1u: goto L_00557eb1;
    case 0x00557eb8u: goto L_00557eb8;
    case 0x00557ebfu: goto L_00557ebf;
    case 0x00557ec6u: goto L_00557ec6;
    case 0x00557fcdu: goto L_00557fcd;
    case 0x00557fd4u: goto L_00557fd4;
    case 0x00557fdbu: goto L_00557fdb;
    case 0x00557fe2u: goto L_00557fe2;
    case 0x00557fe9u: goto L_00557fe9;
    case 0x00557ff0u: goto L_00557ff0;
    case 0x00557ff7u: goto L_00557ff7;
    case 0x00557ffeu: goto L_00557ffe;
    case 0x00558005u: goto L_00558005;
    case 0x0055800cu: goto L_0055800c;
    case 0x00558013u: goto L_00558013;
    case 0x0055818fu: goto L_0055818f;
    case 0x00558196u: goto L_00558196;
    case 0x0055819du: goto L_0055819d;
    case 0x005581a4u: goto L_005581a4;
    case 0x005581e8u: goto L_005581e8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00557e80:  // mov ecx, 0x19
    ecx = (uint32_t)(0x19u);
L_00557e85:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557e87:  // mov ecx, 0x1a
    ecx = (uint32_t)(0x1au);
L_00557e8c:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557e8e:  // mov ecx, 0x16
    ecx = (uint32_t)(0x16u);
L_00557e93:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557e95:  // mov ecx, 0x15
    ecx = (uint32_t)(0x15u);
L_00557e9a:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557e9c:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00557ea1:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557ea3:  // mov ecx, 0x31545844
    ecx = (uint32_t)(0x31545844u);
L_00557ea8:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557eaa:  // mov ecx, 0x32545844
    ecx = (uint32_t)(0x32545844u);
L_00557eaf:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557eb1:  // mov ecx, 0x34545844
    ecx = (uint32_t)(0x34545844u);
L_00557eb6:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557eb8:  // mov ecx, 0x3c
    ecx = (uint32_t)(0x3cu);
L_00557ebd:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557ebf:  // mov ecx, 0x3f
    ecx = (uint32_t)(0x3fu);
L_00557ec4:  // jmp 0x557ec8
    goto L_00557ec8;
L_00557ec6:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00557ec8:  // mov edx, dword ptr [ebp + 0x138]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_00557ece:  // mov esi, dword ptr [0x888a50]
    esi = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00557ed4:  // lea edx, [ebp + edx*4 + 0xb8]
    edx = (uint32_t)((uint32_t)(ebp + edx * 4u + 0xb8u));
L_00557edb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557edc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557ede:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557ee0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557ee2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557ee3:  // mov eax, dword ptr [ebp + 0x150]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x150u)));
L_00557ee9:  // push 0x70005
    t0 = 0x70005u; esp -= 4; M32(esp) = t0;
L_00557eee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557eef:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557ef0:  // mov ecx, dword ptr [ebp + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x148u)));
L_00557ef6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557ef8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557ef9:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00557efb:  // lea edx, [esp + 0xe0]
    edx = (uint32_t)((uint32_t)(esp + 0xe0u));
L_00557f02:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00557f04:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557f05:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f0a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557f0d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557f0e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557f0f:  // call 0x575923
    t0 = 0x00575923u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f14:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00557f16:  // cmp ebx, 0x80070002
    t0 = lsub<32>(ebx, 0x80070002u, f);
L_00557f1c:  // jne 0x557f3a
    if (!f.zf) goto L_00557f3a;
L_00557f1e:  // push 0x652844
    t0 = 0x652844u; esp -= 4; M32(esp) = t0;
L_00557f23:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f28:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557f2b:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00557f2f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557f30:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f35:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557f38:  // jmp 0x557f58
    goto L_00557f58;
L_00557f3a:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00557f3c:  // jge 0x557f65
    if ((f.sf == f.of)) goto L_00557f65;
L_00557f3e:  // push 0x652820
    t0 = 0x652820u; esp -= 4; M32(esp) = t0;
L_00557f43:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f48:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557f4b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00557f4c:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f51:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557f52:  // call dword ptr [0x5d814c]
    t0 = M32((uint32_t)(0x5d814cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f58:  // push 0x622d9c
    t0 = 0x622d9cu; esp -= 4; M32(esp) = t0;
L_00557f5d:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f62:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00557f65:  // inc dword ptr [ebp + 0x138]
    t0 = linc<32>(M32((uint32_t)(ebp + 0x138u)), f);
    M32((uint32_t)(ebp + 0x138u)) = (uint32_t)(t0);
L_00557f6b:  // jmp 0x557de4
    goto L_00557de4;
L_00557f70:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00557f72:  // lea ecx, [esp + 0xf8]
    ecx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_00557f79:  // jmp 0x55811d
    goto L_0055811d;
L_00557f7e:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00557f81:  // lea edx, [esp + 0xf4]
    edx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00557f88:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557f89:  // push 0x65280c
    t0 = 0x65280cu; esp -= 4; M32(esp) = t0;
L_00557f8e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557f8f:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557f94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557f94:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00557f97:  // lea eax, [esp + 0xf4]
    eax = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00557f9e:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00557fa3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557fa4:  // call 0x42b500
    t0 = 0x0042b500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557fa9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557fa9:  // mov eax, dword ptr [ebp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x13cu)));
L_00557faf:  // mov ecx, dword ptr [ebp + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_00557fb5:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_00557fb7:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00557fb9:  // and eax, 3
    t0 = llog<32>(eax & 0x3u, f);
    eax = (uint32_t)(t0);
L_00557fbc:  // add eax, 0x70002
    t0 = ladd<32>(eax, 0x70002u, f);
    eax = (uint32_t)(t0);
L_00557fc1:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_00557fc4:  // ja 0x558013
    if ((!f.cf && !f.zf)) goto L_00558013;
L_00557fc6:  // jmp dword ptr [ecx*4 + 0x5584d0]
    t0 = M32((uint32_t)(ecx * 4u + 0x5584d0u));
    switch (t0) {
    case 0x00557fcdu: goto L_00557fcd;
    case 0x00557fd4u: goto L_00557fd4;
    case 0x00557fdbu: goto L_00557fdb;
    case 0x00557fe2u: goto L_00557fe2;
    case 0x00557fe9u: goto L_00557fe9;
    case 0x00557ff0u: goto L_00557ff0;
    case 0x00557ff7u: goto L_00557ff7;
    case 0x00557ffeu: goto L_00557ffe;
    case 0x00558005u: goto L_00558005;
    case 0x0055800cu: goto L_0055800c;
    case 0x00558013u: goto L_00558013;
    case 0x0055818fu: goto L_0055818f;
    case 0x00558196u: goto L_00558196;
    case 0x0055819du: goto L_0055819d;
    case 0x005581a4u: goto L_005581a4;
    case 0x005581e8u: goto L_005581e8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00557fcd:  // mov ecx, 0x19
    ecx = (uint32_t)(0x19u);
L_00557fd2:  // jmp 0x558015
    goto L_00558015;
L_00557fd4:  // mov ecx, 0x1a
    ecx = (uint32_t)(0x1au);
L_00557fd9:  // jmp 0x558015
    goto L_00558015;
L_00557fdb:  // mov ecx, 0x16
    ecx = (uint32_t)(0x16u);
L_00557fe0:  // jmp 0x558015
    goto L_00558015;
L_00557fe2:  // mov ecx, 0x15
    ecx = (uint32_t)(0x15u);
L_00557fe7:  // jmp 0x558015
    goto L_00558015;
L_00557fe9:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00557fee:  // jmp 0x558015
    goto L_00558015;
L_00557ff0:  // mov ecx, 0x31545844
    ecx = (uint32_t)(0x31545844u);
L_00557ff5:  // jmp 0x558015
    goto L_00558015;
L_00557ff7:  // mov ecx, 0x32545844
    ecx = (uint32_t)(0x32545844u);
L_00557ffc:  // jmp 0x558015
    goto L_00558015;
L_00557ffe:  // mov ecx, 0x34545844
    ecx = (uint32_t)(0x34545844u);
L_00558003:  // jmp 0x558015
    goto L_00558015;
L_00558005:  // mov ecx, 0x3c
    ecx = (uint32_t)(0x3cu);
L_0055800a:  // jmp 0x558015
    goto L_00558015;
L_0055800c:  // mov ecx, 0x3f
    ecx = (uint32_t)(0x3fu);
L_00558011:  // jmp 0x558015
    goto L_00558015;
L_00558013:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00558015:  // lea edx, [ebp + 0xb8]
    edx = (uint32_t)((uint32_t)(ebp + 0xb8u));
L_0055801b:  // mov esi, dword ptr [0x888a50]
    esi = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00558021:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00558022:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558024:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558026:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00558028:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558029:  // mov eax, dword ptr [ebp + 0x150]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x150u)));
L_0055802f:  // push 0x70005
    t0 = 0x70005u; esp -= 4; M32(esp) = t0;
L_00558034:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558035:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00558036:  // mov ecx, dword ptr [ebp + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x148u)));
L_0055803c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055803e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055803f:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00558041:  // lea edx, [esp + 0x60]
    edx = (uint32_t)((uint32_t)(esp + 0x60u));
L_00558045:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00558047:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00558048:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055804du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055804d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00558050:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558051:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00558052:  // call 0x575923
    t0 = 0x00575923u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558057u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558057:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00558059:  // cmp ebx, 0x80070002
    t0 = lsub<32>(ebx, 0x80070002u, f);
L_0055805f:  // jne 0x5580b9
    if (!f.zf) goto L_005580b9;
L_00558061:  // lea eax, [esp + 0xf4]
    eax = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00558068:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055806a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055806b:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00558070:  // call 0x42b800
    t0 = 0x0042b800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558075u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558075:  // push 0x652844
    t0 = 0x652844u; esp -= 4; M32(esp) = t0;
L_0055807a:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055807fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055807f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00558082:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00558086:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00558087:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055808cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055808c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0055808f:  // push 0x622d9c
    t0 = 0x622d9cu; esp -= 4; M32(esp) = t0;
L_00558094:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558099u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558099:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0055809c:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0055809f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005580a0:  // mov dword ptr [ebp + 0xac], eax
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(eax);
L_005580a6:  // mov word ptr [ebp + 0xb0], ax
    M16((uint32_t)(ebp + 0xb0u)) = (uint16_t)((eax & 0xffffu));
L_005580ad:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_005580af:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005580b0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005580b1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005580b2:  // add esp, 0x1e4
    t0 = ladd<32>(esp, 0x1e4u, f);
    esp = (uint32_t)(t0);
L_005580b8:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_005580b9:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_005580bb:  // jge 0x558114
    if ((f.sf == f.of)) goto L_00558114;
L_005580bd:  // lea edx, [esp + 0xf4]
    edx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_005580c4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005580c6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005580c7:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_005580cc:  // call 0x42b800
    t0 = 0x0042b800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005580d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005580d1:  // push 0x6527e8
    t0 = 0x6527e8u; esp -= 4; M32(esp) = t0;
L_005580d6:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005580dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005580db:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_005580de:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005580df:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005580e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005580e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005580e5:  // call dword ptr [0x5d814c]
    t0 = M32((uint32_t)(0x5d814cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005580ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005580eb:  // push 0x622d9c
    t0 = 0x622d9cu; esp -= 4; M32(esp) = t0;
L_005580f0:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005580f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005580f5:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_005580f8:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_005580fc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005580fd:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558102u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558102:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00558105:  // push 0x622d9c
    t0 = 0x622d9cu; esp -= 4; M32(esp) = t0;
L_0055810a:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055810fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055810f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00558112:  // jmp 0x558128
    goto L_00558128;
L_00558114:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00558116:  // lea ecx, [esp + 0xf8]
    ecx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0055811d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055811e:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00558123:  // call 0x42b800
    t0 = 0x0042b800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558128u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558128:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0055812a:  // jne 0x55809c
    if (!f.zf) goto L_0055809c;
L_00558130:  // mov eax, dword ptr [ebp + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb8u)));
L_00558136:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0055813a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055813b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055813d:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0055813f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558140:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558143u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558143:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00558147:  // mov ax, word ptr [esp + 0x30]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x30u))) & 0xffffu);
L_0055814c:  // mov dword ptr [ebp + 0xac], edx
    M32((uint32_t)(ebp + 0xacu)) = (uint32_t)(edx);
L_00558152:  // mov word ptr [ebp + 0xb0], ax
    M16((uint32_t)(ebp + 0xb0u)) = (uint16_t)((eax & 0xffffu));
L_00558159:  // mov eax, dword ptr [0x662dd4]
    eax = (uint32_t)(M32((uint32_t)(0x662dd4u)));
L_0055815e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00558160:  // jne 0x558170
    if (!f.zf) goto L_00558170;
L_00558162:  // mov eax, dword ptr [ebp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_00558168:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0055816a:  // jne 0x5581fe
    if (!f.zf) goto L_005581fe;
L_00558170:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00558174:  // cmp eax, 0x1a
    t0 = lsub<32>(eax, 0x1au, f);
L_00558177:  // jg 0x5581b2
    if ((!f.zf && f.sf == f.of)) goto L_005581b2;
L_00558179:  // je 0x5581ab
    if (f.zf) goto L_005581ab;
L_0055817b:  // cmp eax, 0x19
    t0 = lsub<32>(eax, 0x19u, f);
L_0055817e:  // ja 0x5581e8
    if ((!f.cf && !f.zf)) goto L_005581e8;
L_00558180:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00558182:  // mov cl, byte ptr [eax + 0x558514]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x558514u))) & 0xffu);
L_00558188:  // jmp dword ptr [ecx*4 + 0x5584fc]
    t0 = M32((uint32_t)(ecx * 4u + 0x5584fcu));
    switch (t0) {
    case 0x0055818fu: goto L_0055818f;
    case 0x00558196u: goto L_00558196;
    case 0x0055819du: goto L_0055819d;
    case 0x005581a4u: goto L_005581a4;
    case 0x005581e8u: goto L_005581e8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_0055818f:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00558194:  // jmp 0x5581f8
    goto L_005581f8;
L_00558196:  // mov eax, 3
    eax = (uint32_t)(0x3u);
L_0055819b:  // jmp 0x5581f8
    goto L_005581f8;
L_0055819d:  // mov eax, 4
    eax = (uint32_t)(0x4u);
L_005581a2:  // jmp 0x5581f8
    goto L_005581f8;
L_005581a4:  // mov eax, 5
    eax = (uint32_t)(0x5u);
L_005581a9:  // jmp 0x5581f8
    goto L_005581f8;
L_005581ab:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_005581b0:  // jmp 0x5581f8
    goto L_005581f8;
L_005581b2:  // cmp eax, 0x31545844
    t0 = lsub<32>(eax, 0x31545844u, f);
L_005581b7:  // jg 0x5581da
    if ((!f.zf && f.sf == f.of)) goto L_005581da;
L_005581b9:  // je 0x5581d3
    if (f.zf) goto L_005581d3;
L_005581bb:  // cmp eax, 0x3c
    t0 = lsub<32>(eax, 0x3cu, f);
L_005581be:  // je 0x5581cc
    if (f.zf) goto L_005581cc;
L_005581c0:  // cmp eax, 0x3f
    t0 = lsub<32>(eax, 0x3fu, f);
L_005581c3:  // jne 0x5581e8
    if (!f.zf) goto L_005581e8;
L_005581c5:  // mov eax, 0xa
    eax = (uint32_t)(0xau);
L_005581ca:  // jmp 0x5581f8
    goto L_005581f8;
L_005581cc:  // mov eax, 9
    eax = (uint32_t)(0x9u);
L_005581d1:  // jmp 0x5581f8
    goto L_005581f8;
L_005581d3:  // mov eax, 6
    eax = (uint32_t)(0x6u);
L_005581d8:  // jmp 0x5581f8
    goto L_005581f8;
L_005581da:  // cmp eax, 0x32545844
    t0 = lsub<32>(eax, 0x32545844u, f);
L_005581df:  // je 0x5581f3
    if (f.zf) goto L_005581f3;
L_005581e1:  // cmp eax, 0x34545844
    t0 = lsub<32>(eax, 0x34545844u, f);
L_005581e6:  // je 0x5581ec
    if (f.zf) goto L_005581ec;
L_005581e8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005581ea:  // jmp 0x5581f8
    goto L_005581f8;
L_005581ec:  // mov eax, 8
    eax = (uint32_t)(0x8u);
L_005581f1:  // jmp 0x5581f8
    goto L_005581f8;
L_005581f3:  // mov eax, 7
    eax = (uint32_t)(0x7u);
L_005581f8:  // mov dword ptr [ebp + 0x144], eax
    M32((uint32_t)(ebp + 0x144u)) = (uint32_t)(eax);
L_005581fe:  // lea edi, [ebp + 8]
    edi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00558201:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00558204:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00558206:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00558208:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0055820a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0055820b:  // mov ecx, dword ptr [ebp + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x144u)));
L_00558211:  // je 0x558332
    if (f.zf) goto L_00558332;
L_00558217:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_0055821a:  // ja 0x558269
    if ((!f.cf && !f.zf)) goto L_00558269;
L_0055821c:  // jmp dword ptr [ecx*4 + 0x558530]
    t0 = M32((uint32_t)(ecx * 4u + 0x558530u));
    switch (t0) {
    case 0x00558223u: goto L_00558223;
    case 0x0055822au: goto L_0055822a;
    case 0x00558231u: goto L_00558231;
    case 0x00558238u: goto L_00558238;
    case 0x0055823fu: goto L_0055823f;
    case 0x00558246u: goto L_00558246;
    case 0x0055824du: goto L_0055824d;
    case 0x00558254u: goto L_00558254;
    case 0x0055825bu: goto L_0055825b;
    case 0x00558262u: goto L_00558262;
    case 0x00558269u: goto L_00558269;
    case 0x00558277u: goto L_00558277;
    case 0x0055827eu: goto L_0055827e;
    case 0x00558285u: goto L_00558285;
    case 0x0055828cu: goto L_0055828c;
    case 0x00558293u: goto L_00558293;
    case 0x0055829au: goto L_0055829a;
    case 0x005582a1u: goto L_005582a1;
    case 0x005582a8u: goto L_005582a8;
    case 0x005582afu: goto L_005582af;
    case 0x005582b6u: goto L_005582b6;
    case 0x005582bdu: goto L_005582bd;
    case 0x0055833eu: goto L_0055833e;
    case 0x00558345u: goto L_00558345;
    case 0x0055834cu: goto L_0055834c;
    case 0x00558353u: goto L_00558353;
    case 0x0055835au: goto L_0055835a;
    case 0x00558361u: goto L_00558361;
    case 0x00558368u: goto L_00558368;
    case 0x0055836fu: goto L_0055836f;
    case 0x00558376u: goto L_00558376;
    case 0x0055837du: goto L_0055837d;
    case 0x00558384u: goto L_00558384;
    case 0x00558392u: goto L_00558392;
    case 0x00558399u: goto L_00558399;
    case 0x005583a0u: goto L_005583a0;
    case 0x005583a7u: goto L_005583a7;
    case 0x005583aeu: goto L_005583ae;
    case 0x005583b5u: goto L_005583b5;
    case 0x005583bcu: goto L_005583bc;
    case 0x005583c3u: goto L_005583c3;
    case 0x005583cau: goto L_005583ca;
    case 0x005583d1u: goto L_005583d1;
    case 0x005583d8u: goto L_005583d8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00558223:  // mov eax, 0x19
    eax = (uint32_t)(0x19u);
L_00558228:  // jmp 0x55826b
    goto L_0055826b;
L_0055822a:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_0055822f:  // jmp 0x55826b
    goto L_0055826b;
L_00558231:  // mov eax, 0x16
    eax = (uint32_t)(0x16u);
L_00558236:  // jmp 0x55826b
    goto L_0055826b;
L_00558238:  // mov eax, 0x15
    eax = (uint32_t)(0x15u);
L_0055823d:  // jmp 0x55826b
    goto L_0055826b;
L_0055823f:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_00558244:  // jmp 0x55826b
    goto L_0055826b;
L_00558246:  // mov eax, 0x31545844
    eax = (uint32_t)(0x31545844u);
L_0055824b:  // jmp 0x55826b
    goto L_0055826b;
L_0055824d:  // mov eax, 0x32545844
    eax = (uint32_t)(0x32545844u);
L_00558252:  // jmp 0x55826b
    goto L_0055826b;
L_00558254:  // mov eax, 0x34545844
    eax = (uint32_t)(0x34545844u);
L_00558259:  // jmp 0x55826b
    goto L_0055826b;
L_0055825b:  // mov eax, 0x3c
    eax = (uint32_t)(0x3cu);
L_00558260:  // jmp 0x55826b
    goto L_0055826b;
L_00558262:  // mov eax, 0x3f
    eax = (uint32_t)(0x3fu);
L_00558267:  // jmp 0x55826b
    goto L_0055826b;
L_00558269:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0055826b:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_0055826e:  // ja 0x5582bd
    if ((!f.cf && !f.zf)) goto L_005582bd;
L_00558270:  // jmp dword ptr [ecx*4 + 0x55855c]
    t0 = M32((uint32_t)(ecx * 4u + 0x55855cu));
    switch (t0) {
    case 0x00558277u: goto L_00558277;
    case 0x0055827eu: goto L_0055827e;
    case 0x00558285u: goto L_00558285;
    case 0x0055828cu: goto L_0055828c;
    case 0x00558293u: goto L_00558293;
    case 0x0055829au: goto L_0055829a;
    case 0x005582a1u: goto L_005582a1;
    case 0x005582a8u: goto L_005582a8;
    case 0x005582afu: goto L_005582af;
    case 0x005582b6u: goto L_005582b6;
    case 0x005582bdu: goto L_005582bd;
    case 0x0055833eu: goto L_0055833e;
    case 0x00558345u: goto L_00558345;
    case 0x0055834cu: goto L_0055834c;
    case 0x00558353u: goto L_00558353;
    case 0x0055835au: goto L_0055835a;
    case 0x00558361u: goto L_00558361;
    case 0x00558368u: goto L_00558368;
    case 0x0055836fu: goto L_0055836f;
    case 0x00558376u: goto L_00558376;
    case 0x0055837du: goto L_0055837d;
    case 0x00558384u: goto L_00558384;
    case 0x00558392u: goto L_00558392;
    case 0x00558399u: goto L_00558399;
    case 0x005583a0u: goto L_005583a0;
    case 0x005583a7u: goto L_005583a7;
    case 0x005583aeu: goto L_005583ae;
    case 0x005583b5u: goto L_005583b5;
    case 0x005583bcu: goto L_005583bc;
    case 0x005583c3u: goto L_005583c3;
    case 0x005583cau: goto L_005583ca;
    case 0x005583d1u: goto L_005583d1;
    case 0x005583d8u: goto L_005583d8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00558277:  // mov esi, 0x19
    esi = (uint32_t)(0x19u);
L_0055827c:  // jmp 0x5582bf
    goto L_005582bf;
L_0055827e:  // mov esi, 0x1a
    esi = (uint32_t)(0x1au);
L_00558283:  // jmp 0x5582bf
    goto L_005582bf;
L_00558285:  // mov esi, 0x16
    esi = (uint32_t)(0x16u);
L_0055828a:  // jmp 0x5582bf
    goto L_005582bf;
L_0055828c:  // mov esi, 0x15
    esi = (uint32_t)(0x15u);
L_00558291:  // jmp 0x5582bf
    goto L_005582bf;
L_00558293:  // mov esi, 0x17
    esi = (uint32_t)(0x17u);
L_00558298:  // jmp 0x5582bf
    goto L_005582bf;
L_0055829a:  // mov esi, 0x31545844
    esi = (uint32_t)(0x31545844u);
L_0055829f:  // jmp 0x5582bf
    goto L_005582bf;
L_005582a1:  // mov esi, 0x32545844
    esi = (uint32_t)(0x32545844u);
L_005582a6:  // jmp 0x5582bf
    goto L_005582bf;
L_005582a8:  // mov esi, 0x34545844
    esi = (uint32_t)(0x34545844u);
L_005582ad:  // jmp 0x5582bf
    goto L_005582bf;
L_005582af:  // mov esi, 0x3c
    esi = (uint32_t)(0x3cu);
L_005582b4:  // jmp 0x5582bf
    goto L_005582bf;
L_005582b6:  // mov esi, 0x3f
    esi = (uint32_t)(0x3fu);
L_005582bb:  // jmp 0x5582bf
    goto L_005582bf;
L_005582bd:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_005582bf:  // mov edx, dword ptr [ebp + 0x138]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_005582c5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005582ca:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005582cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005582cc:  // call 0x513640
    t0 = 0x00513640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005582d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005582d1:  // mov ecx, dword ptr [ebp + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_005582d7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005582d8:  // movsx eax, word ptr [ebp + 0xb0]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebp + 0xb0u))));
L_005582df:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005582e0:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_005582e3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005582e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005582e5:  // push 0x6527c4
    t0 = 0x6527c4u; esp -= 4; M32(esp) = t0;
L_005582ea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005582eb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005582f0:  // call 0x513640
    t0 = 0x00513640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005582f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005582f5:  // movsx edx, word ptr [ebp + 0xb0]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebp + 0xb0u))));
L_005582fc:  // imul eax, edx
    t0 = limul32(eax, edx, f);
    eax = (uint32_t)(t0);
L_005582ff:  // imul eax, dword ptr [ebp + 0xac]
    t0 = limul32(eax, M32((uint32_t)(ebp + 0xacu)), f);
    eax = (uint32_t)(t0);
L_00558306:  // imul eax, dword ptr [ebp + 0x138]
    t0 = limul32(eax, M32((uint32_t)(ebp + 0x138u)), f);
    eax = (uint32_t)(t0);
L_0055830d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0055830e:  // and edx, 7
    t0 = llog<32>(edx & 0x7u, f);
    edx = (uint32_t)(t0);
L_00558311:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00558313:  // sar eax, 3
    t0 = lsar<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_00558316:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00558317:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00558318:  // push 0x9c3df0
    t0 = 0x9c3df0u; esp -= 4; M32(esp) = t0;
L_0055831d:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558322u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558322:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00558325:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_00558327:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00558328:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00558329:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0055832a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0055832b:  // add esp, 0x1e4
    t0 = ladd<32>(esp, 0x1e4u, f);
    esp = (uint32_t)(t0);
L_00558331:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00558332:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_00558335:  // ja 0x558384
    if ((!f.cf && !f.zf)) goto L_00558384;
L_00558337:  // jmp dword ptr [ecx*4 + 0x558588]
    t0 = M32((uint32_t)(ecx * 4u + 0x558588u));
    switch (t0) {
    case 0x0055833eu: goto L_0055833e;
    case 0x00558345u: goto L_00558345;
    case 0x0055834cu: goto L_0055834c;
    case 0x00558353u: goto L_00558353;
    case 0x0055835au: goto L_0055835a;
    case 0x00558361u: goto L_00558361;
    case 0x00558368u: goto L_00558368;
    case 0x0055836fu: goto L_0055836f;
    case 0x00558376u: goto L_00558376;
    case 0x0055837du: goto L_0055837d;
    case 0x00558384u: goto L_00558384;
    case 0x00558392u: goto L_00558392;
    case 0x00558399u: goto L_00558399;
    case 0x005583a0u: goto L_005583a0;
    case 0x005583a7u: goto L_005583a7;
    case 0x005583aeu: goto L_005583ae;
    case 0x005583b5u: goto L_005583b5;
    case 0x005583bcu: goto L_005583bc;
    case 0x005583c3u: goto L_005583c3;
    case 0x005583cau: goto L_005583ca;
    case 0x005583d1u: goto L_005583d1;
    case 0x005583d8u: goto L_005583d8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_0055833e:  // mov eax, 0x19
    eax = (uint32_t)(0x19u);
L_00558343:  // jmp 0x558386
    goto L_00558386;
L_00558345:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_0055834a:  // jmp 0x558386
    goto L_00558386;
L_0055834c:  // mov eax, 0x16
    eax = (uint32_t)(0x16u);
L_00558351:  // jmp 0x558386
    goto L_00558386;
L_00558353:  // mov eax, 0x15
    eax = (uint32_t)(0x15u);
L_00558358:  // jmp 0x558386
    goto L_00558386;
L_0055835a:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_0055835f:  // jmp 0x558386
    goto L_00558386;
L_00558361:  // mov eax, 0x31545844
    eax = (uint32_t)(0x31545844u);
L_00558366:  // jmp 0x558386
    goto L_00558386;
L_00558368:  // mov eax, 0x32545844
    eax = (uint32_t)(0x32545844u);
L_0055836d:  // jmp 0x558386
    goto L_00558386;
L_0055836f:  // mov eax, 0x34545844
    eax = (uint32_t)(0x34545844u);
L_00558374:  // jmp 0x558386
    goto L_00558386;
L_00558376:  // mov eax, 0x3c
    eax = (uint32_t)(0x3cu);
L_0055837b:  // jmp 0x558386
    goto L_00558386;
L_0055837d:  // mov eax, 0x3f
    eax = (uint32_t)(0x3fu);
L_00558382:  // jmp 0x558386
    goto L_00558386;
L_00558384:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00558386:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_00558389:  // ja 0x5583d8
    if ((!f.cf && !f.zf)) goto L_005583d8;
L_0055838b:  // jmp dword ptr [ecx*4 + 0x5585b4]
    t0 = M32((uint32_t)(ecx * 4u + 0x5585b4u));
    switch (t0) {
    case 0x00558392u: goto L_00558392;
    case 0x00558399u: goto L_00558399;
    case 0x005583a0u: goto L_005583a0;
    case 0x005583a7u: goto L_005583a7;
    case 0x005583aeu: goto L_005583ae;
    case 0x005583b5u: goto L_005583b5;
    case 0x005583bcu: goto L_005583bc;
    case 0x005583c3u: goto L_005583c3;
    case 0x005583cau: goto L_005583ca;
    case 0x005583d1u: goto L_005583d1;
    case 0x005583d8u: goto L_005583d8;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00558392:  // mov esi, 0x19
    esi = (uint32_t)(0x19u);
L_00558397:  // jmp 0x5583da
    goto L_005583da;
L_00558399:  // mov esi, 0x1a
    esi = (uint32_t)(0x1au);
L_0055839e:  // jmp 0x5583da
    goto L_005583da;
L_005583a0:  // mov esi, 0x16
    esi = (uint32_t)(0x16u);
L_005583a5:  // jmp 0x5583da
    goto L_005583da;
L_005583a7:  // mov esi, 0x15
    esi = (uint32_t)(0x15u);
L_005583ac:  // jmp 0x5583da
    goto L_005583da;
L_005583ae:  // mov esi, 0x17
    esi = (uint32_t)(0x17u);
L_005583b3:  // jmp 0x5583da
    goto L_005583da;
L_005583b5:  // mov esi, 0x31545844
    esi = (uint32_t)(0x31545844u);
L_005583ba:  // jmp 0x5583da
    goto L_005583da;
L_005583bc:  // mov esi, 0x32545844
    esi = (uint32_t)(0x32545844u);
L_005583c1:  // jmp 0x5583da
    goto L_005583da;
L_005583c3:  // mov esi, 0x34545844
    esi = (uint32_t)(0x34545844u);
L_005583c8:  // jmp 0x5583da
    goto L_005583da;
L_005583ca:  // mov esi, 0x3c
    esi = (uint32_t)(0x3cu);
L_005583cf:  // jmp 0x5583da
    goto L_005583da;
L_005583d1:  // mov esi, 0x3f
    esi = (uint32_t)(0x3fu);
L_005583d6:  // jmp 0x5583da
    goto L_005583da;
L_005583d8:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_005583da:  // mov ecx, dword ptr [ebp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_005583e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005583e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005583e2:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005583e7:  // call 0x513640
    t0 = 0x00513640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005583ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005583ec:  // movsx edx, word ptr [ebp + 0xb0]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebp + 0xb0u))));
L_005583f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005583f4:  // mov eax, dword ptr [ebp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_005583fa:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005583fb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005583fc:  // push 0x6527a4
    t0 = 0x6527a4u; esp -= 4; M32(esp) = t0;
L_00558401:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00558402:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00558407:  // call 0x513640
    t0 = 0x00513640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055840cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055840c:  // movsx ecx, word ptr [ebp + 0xb0]
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebp + 0xb0u))));
L_00558413:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00558416:  // imul eax, dword ptr [ebp + 0xac]
    t0 = limul32(eax, M32((uint32_t)(ebp + 0xacu)), f);
    eax = (uint32_t)(t0);
L_0055841d:  // imul eax, dword ptr [ebp + 0x138]
    t0 = limul32(eax, M32((uint32_t)(ebp + 0x138u)), f);
    eax = (uint32_t)(t0);
L_00558424:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00558425:  // and edx, 7
    t0 = llog<32>(edx & 0x7u, f);
    edx = (uint32_t)(t0);
L_00558428:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0055842a:  // sar eax, 3
    t0 = lsar<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_0055842d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055842e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0055842f:  // push 0x9c3df0
    t0 = 0x9c3df0u; esp -= 4; M32(esp) = t0;
L_00558434:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00558439u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00558439:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0055843c:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0055843e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0055843f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00558440:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00558441:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00558442:  // add esp, 0x1e4
    t0 = ladd<32>(esp, 0x1e4u, f);
    esp = (uint32_t)(t0);
L_00558448:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00557a90, 00557a90)
