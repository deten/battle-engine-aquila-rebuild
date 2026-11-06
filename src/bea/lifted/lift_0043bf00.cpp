// lifted from 0043bf00 (vslot1, 237 bytes, 98 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043bf00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043bf00;
L_0043bf00:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043bf01:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043bf02:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043bf03:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043bf04:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0043bf08:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043bf0a:  // je 0x43bfe6
    if (f.zf) goto L_0043bfe6;
L_0043bf10:  // mov edx, dword ptr [0x855404]
    edx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0043bf16:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043bf18:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bf1a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043bf1d:  // je 0x43bf23
    if (f.zf) goto L_0043bf23;
L_0043bf1f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043bf21:  // jmp 0x43bf25
    goto L_0043bf25;
L_0043bf23:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bf25:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bf27:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0043bf29:  // je 0x43bfe6
    if (f.zf) goto L_0043bfe6;
L_0043bf2f:  // mov esi, dword ptr [ebp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0043bf32:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0043bf34:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043bf36:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043bf38:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043bf3a:  // jne 0x43bf58
    if (!f.zf) goto L_0043bf58;
L_0043bf3c:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043bf3e:  // je 0x43bf54
    if (f.zf) goto L_0043bf54;
L_0043bf40:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043bf43:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043bf45:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043bf48:  // jne 0x43bf58
    if (!f.zf) goto L_0043bf58;
L_0043bf4a:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043bf4d:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043bf50:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043bf52:  // jne 0x43bf34
    if (!f.zf) goto L_0043bf34;
L_0043bf54:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bf56:  // jmp 0x43bf5d
    goto L_0043bf5d;
L_0043bf58:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043bf5a:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043bf5d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bf5f:  // je 0x43bf87
    if (f.zf) goto L_0043bf87;
L_0043bf61:  // mov edx, dword ptr [0x855404]
    edx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0043bf67:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043bf6a:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043bf6d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bf6f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043bf72:  // je 0x43bf78
    if (f.zf) goto L_0043bf78;
L_0043bf74:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043bf76:  // jmp 0x43bf7a
    goto L_0043bf7a;
L_0043bf78:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bf7a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bf7c:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0043bf7e:  // jne 0x43bf2f
    if (!f.zf) goto L_0043bf2f;
L_0043bf80:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043bf81:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043bf82:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043bf83:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043bf84:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0043bf87:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043bf89:  // je 0x43bfe6
    if (f.zf) goto L_0043bfe6;
L_0043bf8b:  // lea esi, [ecx + 8]
    esi = (uint32_t)((uint32_t)(ecx + 0x8u));
L_0043bf8e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0043bf90:  // je 0x43bfe6
    if (f.zf) goto L_0043bfe6;
L_0043bf92:  // mov ecx, dword ptr [ebp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0043bf95:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043bf96:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043bf9b:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043bfa0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043bfa0:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043bfa2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043bfa5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bfa7:  // push 0x146
    t0 = 0x146u; esp -= 4; M32(esp) = t0;
L_0043bfac:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043bfae:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043bfb0:  // push 0x625850
    t0 = 0x625850u; esp -= 4; M32(esp) = t0;
L_0043bfb5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043bfb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043bfb8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043bfbd:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043bfc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043bfc2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0043bfc4:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0043bfc6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043bfc9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bfcb:  // mov dword ptr [ebp + 0xc], edx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(edx);
L_0043bfce:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043bfd0:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043bfd2:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0043bfd4:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0043bfd6:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0043bfd8:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0043bfda:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043bfdd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043bfdf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0043bfe1:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0043bfe4:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0043bfe6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043bfe7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043bfe8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043bfe9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043bfea:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043bf00, 0043bf00)
