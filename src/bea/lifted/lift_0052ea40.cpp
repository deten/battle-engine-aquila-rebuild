// lifted from 0052ea40 (vslot0, 511 bytes, 168 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0052ea40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0052ea40;
L_0052ea40:  // sub esp, 0x18
    t0 = lsub<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0052ea43:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052ea47:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052ea48:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0052ea49:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0052ea4b:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0052ea4e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052ea50:  // mov al, byte ptr [ebp + 5]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x5u))) & 0xffu);
L_0052ea53:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052ea54:  // mov edx, dword ptr [ecx + 0x68]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x68u)));
L_0052ea57:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0052ea59:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0052ea5b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052ea5c:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0052ea60:  // jle 0x52ea80
    if ((f.zf || f.sf != f.of)) goto L_0052ea80;
L_0052ea62:  // lea edi, [esi*4 + 0x89c2fc]
    edi = (uint32_t)((uint32_t)(esi * 4u + 0x89c2fcu));
L_0052ea69:  // mov ebx, esi
    ebx = (uint32_t)(esi);
L_0052ea6b:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0052ea6f:  // call 0x539470
    t0 = 0x00539470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052ea74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052ea74:  // mov dword ptr [edi], eax
    M32((uint32_t)(edi)) = (uint32_t)(eax);
L_0052ea76:  // sub edi, 4
    t0 = lsub<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0052ea79:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0052ea7a:  // jne 0x52ea6b
    if (!f.zf) goto L_0052ea6b;
L_0052ea7c:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052ea80:  // mov eax, dword ptr [edx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x10u)));
L_0052ea83:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052ea85:  // jne 0x52eb1a
    if (!f.zf) goto L_0052eb1a;
L_0052ea8b:  // mov ecx, dword ptr [ebp + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_0052ea8e:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_0052ea94:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0052ea97:  // mov edx, dword ptr [ecx + 0x64ce20]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x64ce20u)));
L_0052ea9d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052ea9e:  // push 0x64cba0
    t0 = 0x64cba0u; esp -= 4; M32(esp) = t0;
L_0052eaa3:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0052eaa8:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052eaadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052eaad:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052eab0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0052eab5:  // push 0x1e0
    t0 = 0x1e0u; esp -= 4; M32(esp) = t0;
L_0052eaba:  // push 0x64c5c4
    t0 = 0x64c5c4u; esp -= 4; M32(esp) = t0;
L_0052eabf:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0052eac1:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0052eac3:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052eac8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052eac8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052eaca:  // je 0x52eadb
    if (f.zf) goto L_0052eadb;
L_0052eacc:  // mov dword ptr [eax], 0x5e4af8
    M32((uint32_t)(eax)) = (uint32_t)(0x5e4af8u);
L_0052ead2:  // mov dword ptr [eax + 4], 0
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x0u);
L_0052ead9:  // jmp 0x52eadd
    goto L_0052eadd;
L_0052eadb:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052eadd:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0052eae1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052eae2:  // call 0x539420
    t0 = 0x00539420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052eae7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052eae7:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052eaeb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0052eaed:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0052eaf0:  // mov dword ptr [eax + 0x10], ecx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ecx);
L_0052eaf3:  // jle 0x52ec35
    if ((f.zf || f.sf != f.of)) goto L_0052ec35;
L_0052eaf9:  // mov edi, 0x89c300
    edi = (uint32_t)(0x89c300u);
L_0052eafe:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0052eb00:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052eb02:  // je 0x52eb0a
    if (f.zf) goto L_0052eb0a;
L_0052eb04:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0052eb06:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052eb08:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052eb0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052eb0a:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0052eb0d:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0052eb0e:  // jne 0x52eafe
    if (!f.zf) goto L_0052eafe;
L_0052eb10:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052eb11:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052eb12:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052eb13:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052eb14:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0052eb17:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0052eb1a:  // mov eax, dword ptr [ebp + 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_0052eb1d:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0052eb25:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0052eb2a:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0052eb2d:  // add eax, 0x64ce50
    t0 = ladd<32>(eax, 0x64ce50u, f);
    eax = (uint32_t)(t0);
L_0052eb32:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0052eb34:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0052eb36:  // mov ecx, dword ptr [edi + 4]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0052eb39:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0052eb3b:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0052eb3e:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0052eb42:  // mov edi, dword ptr [edi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0052eb45:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_0052eb49:  // lea edi, [esp + 0x14]
    edi = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052eb4d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052eb4e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052eb4f:  // push 0x89c300
    t0 = 0x89c300u; esp -= 4; M32(esp) = t0;
L_0052eb54:  // call eax
    t0 = eax; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052eb56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052eb56:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0052eb58:  // jle 0x52eb71
    if ((f.zf || f.sf != f.of)) goto L_0052eb71;
L_0052eb5a:  // mov edi, 0x89c300
    edi = (uint32_t)(0x89c300u);
L_0052eb5f:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0052eb61:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052eb63:  // je 0x52eb6b
    if (f.zf) goto L_0052eb6b;
L_0052eb65:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0052eb67:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052eb69:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052eb6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052eb6b:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0052eb6e:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0052eb6f:  // jne 0x52eb5f
    if (!f.zf) goto L_0052eb5f;
L_0052eb71:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0052eb75:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0052eb79:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052eb7d:  // mov ecx, dword ptr [eax + 0x220]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x220u)));
L_0052eb83:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052eb85:  // je 0x52eb8f
    if (f.zf) goto L_0052eb8f;
L_0052eb87:  // mov ecx, dword ptr [edi + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x2cu)));
L_0052eb8a:  // mov esi, dword ptr [ecx]
    esi = (uint32_t)(M32((uint32_t)(ecx)));
L_0052eb8c:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_0052eb8f:  // mov eax, dword ptr [ebp + 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_0052eb92:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052eb96:  // test eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
L_0052eb9b:  // jle 0x52ebd5
    if ((f.zf || f.sf != f.of)) goto L_0052ebd5;
L_0052eb9d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052eb9f:  // jne 0x52ebd2
    if (!f.zf) goto L_0052ebd2;
L_0052eba1:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0052eba6:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0052eba9:  // mov edx, dword ptr [eax + 0x64ce20]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x64ce20u)));
L_0052ebaf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052ebb0:  // push 0x64cb6c
    t0 = 0x64cb6cu; esp -= 4; M32(esp) = t0;
L_0052ebb5:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0052ebba:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052ebbfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052ebbf:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0052ebc2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052ebc5:  // mov dword ptr [edi + 0x10], ecx
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(ecx);
L_0052ebc8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052ebc9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052ebca:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052ebcb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052ebcc:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0052ebcf:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0052ebd2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052ebd3:  // jmp 0x52ec28
    goto L_0052ec28;
L_0052ebd5:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052ebd7:  // je 0x52ebfa
    if (f.zf) goto L_0052ebfa;
L_0052ebd9:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0052ebde:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0052ebe1:  // mov eax, dword ptr [eax + 0x64ce20]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x64ce20u)));
L_0052ebe7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052ebe8:  // push 0x64cb34
    t0 = 0x64cb34u; esp -= 4; M32(esp) = t0;
L_0052ebed:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0052ebf2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052ebf7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052ebf7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052ebfa:  // push 0x20e
    t0 = 0x20eu; esp -= 4; M32(esp) = t0;
L_0052ebff:  // push 0x64c5c4
    t0 = 0x64c5c4u; esp -= 4; M32(esp) = t0;
L_0052ec04:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0052ec06:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0052ec08:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0052ec0d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052ec12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052ec12:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052ec14:  // je 0x52ec25
    if (f.zf) goto L_0052ec25;
L_0052ec16:  // mov dword ptr [eax], 0x5e4af8
    M32((uint32_t)(eax)) = (uint32_t)(0x5e4af8u);
L_0052ec1c:  // mov dword ptr [eax + 4], 1
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x1u);
L_0052ec23:  // jmp 0x52ec27
    goto L_0052ec27;
L_0052ec25:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052ec27:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052ec28:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052ec2a:  // call 0x539420
    t0 = 0x00539420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052ec2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052ec2f:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0052ec32:  // mov dword ptr [edi + 0x10], ecx
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(ecx);
L_0052ec35:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052ec36:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052ec37:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052ec38:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052ec39:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0052ec3c:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0052ea40, 0052ea40)
