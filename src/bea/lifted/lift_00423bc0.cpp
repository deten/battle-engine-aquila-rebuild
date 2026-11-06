// lifted from 00423bc0 (FUN_00423bc0, 1504 bytes, 465 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00423bc0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00423bc0;
L_00423bc0:  // mov eax, 0x1e10
    eax = (uint32_t)(0x1e10u);
L_00423bc5:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423bcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423bca:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00423bcb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00423bcc:  // mov esi, dword ptr [esp + 0x1e1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1e1cu)));
L_00423bd3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00423bd4:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00423bd6:  // mov dl, byte ptr [esi]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_00423bd8:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00423bda:  // je 0x424194
    if (f.zf) goto L_00424194;
L_00423be0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00423be2:  // mov byte ptr [esp + 0x1c], dl
    M8((uint32_t)(esp + 0x1cu)) = (uint8_t)((edx & 0xffu));
L_00423be6:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00423be8:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00423bec:  // je 0x423c44
    if (f.zf) goto L_00423c44;
L_00423bee:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00423bf0:  // cmp dl, 0x20
    t0 = lsub<8>((edx & 0xffu), 0x20u, f);
L_00423bf3:  // jne 0x423c0a
    if (!f.zf) goto L_00423c0a;
L_00423bf5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423bf7:  // je 0x423c35
    if (f.zf) goto L_00423c35;
L_00423bf9:  // cmp ecx, 0x1e00
    t0 = lsub<32>(ecx, 0x1e00u, f);
L_00423bff:  // jge 0x423c44
    if ((f.sf == f.of)) goto L_00423c44;
L_00423c01:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00423c03:  // mov byte ptr [esp + eax + 0x1c], 0
    M8((uint32_t)(esp + eax + 0x1cu)) = (uint8_t)(0x0u);
L_00423c08:  // jmp 0x423c24
    goto L_00423c24;
L_00423c0a:  // cmp eax, 0x100
    t0 = lsub<32>(eax, 0x100u, f);
L_00423c0f:  // jge 0x423c14
    if ((f.sf == f.of)) goto L_00423c14;
L_00423c11:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00423c12:  // jmp 0x423c35
    goto L_00423c35;
L_00423c14:  // cmp ecx, 0x1e00
    t0 = lsub<32>(ecx, 0x1e00u, f);
L_00423c1a:  // jge 0x423c44
    if ((f.sf == f.of)) goto L_00423c44;
L_00423c1c:  // lea edx, [ecx + eax]
    edx = (uint32_t)((uint32_t)(ecx + eax));
L_00423c1f:  // mov byte ptr [esp + edx + 0x1c], 0
    M8((uint32_t)(esp + edx + 0x1cu)) = (uint8_t)(0x0u);
L_00423c24:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423c28:  // add ecx, 0x100
    t0 = ladd<32>(ecx, 0x100u, f);
    ecx = (uint32_t)(t0);
L_00423c2e:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00423c2f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00423c31:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00423c35:  // mov dl, byte ptr [esi + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_00423c38:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00423c39:  // lea edi, [ecx + eax]
    edi = (uint32_t)((uint32_t)(ecx + eax));
L_00423c3c:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00423c3e:  // mov byte ptr [esp + edi + 0x1c], dl
    M8((uint32_t)(esp + edi + 0x1cu)) = (uint8_t)((edx & 0xffu));
L_00423c42:  // jne 0x423bf0
    if (!f.zf) goto L_00423bf0;
L_00423c44:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423c48:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00423c4a:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00423c4b:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_00423c4f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423c51:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00423c55:  // jle 0x424194
    if ((f.zf || f.sf != f.of)) goto L_00424194;
L_00423c5b:  // lea eax, [esp + 0x11c]
    eax = (uint32_t)((uint32_t)(esp + 0x11cu));
L_00423c62:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423c63:  // lea ebp, [esp + 0x20]
    ebp = (uint32_t)((uint32_t)(esp + 0x20u));
L_00423c67:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00423c6b:  // push 0x624618
    t0 = 0x624618u; esp -= 4; M32(esp) = t0;
L_00423c70:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423c71:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423c76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423c76:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423c79:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423c7b:  // jne 0x423c84
    if (!f.zf) goto L_00423c84;
L_00423c7d:  // mov byte ptr [ebx + 0x186], 1
    M8((uint32_t)(ebx + 0x186u)) = (uint8_t)(0x1u);
L_00423c84:  // push 0x62460c
    t0 = 0x62460cu; esp -= 4; M32(esp) = t0;
L_00423c89:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423c8a:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423c8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423c8f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423c92:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423c94:  // jne 0x423ce1
    if (!f.zf) goto L_00423ce1;
L_00423c96:  // mov ecx, dword ptr [0x679984]
    ecx = (uint32_t)(M32((uint32_t)(0x679984u)));
L_00423c9c:  // mov edx, dword ptr [0x679980]
    edx = (uint32_t)(M32((uint32_t)(0x679980u)));
L_00423ca2:  // mov eax, dword ptr [0x629410]
    eax = (uint32_t)(M32((uint32_t)(0x629410u)));
L_00423ca7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00423ca8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00423ca9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00423caa:  // push 0x6245f4
    t0 = 0x6245f4u; esp -= 4; M32(esp) = t0;
L_00423caf:  // call 0x55e183
    t0 = 0x0055e183u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423cb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423cb4:  // mov eax, dword ptr [0x629410]
    eax = (uint32_t)(M32((uint32_t)(0x629410u)));
L_00423cb9:  // mov edx, dword ptr [0x679980]
    edx = (uint32_t)(M32((uint32_t)(0x679980u)));
L_00423cbf:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00423cc2:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00423cc5:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00423cc8:  // lea eax, [edx + ecx*4]
    eax = (uint32_t)((uint32_t)(edx + ecx * 4u));
L_00423ccb:  // mov ecx, dword ptr [0x679984]
    ecx = (uint32_t)(M32((uint32_t)(0x679984u)));
L_00423cd1:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00423cd4:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00423cd7:  // lea edx, [ecx + eax*4]
    edx = (uint32_t)((uint32_t)(ecx + eax * 4u));
L_00423cda:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00423cdb:  // call dword ptr [0x5d81e8]
    t0 = M32((uint32_t)(0x5d81e8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423ce1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423ce1:  // push 0x6245f0
    t0 = 0x6245f0u; esp -= 4; M32(esp) = t0;
L_00423ce6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423ce7:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423cecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423cec:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423cef:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423cf1:  // jne 0x423cfa
    if (!f.zf) goto L_00423cfa;
L_00423cf3:  // mov byte ptr [0x66e94e], 1
    M8((uint32_t)(0x66e94eu)) = (uint8_t)(0x1u);
L_00423cfa:  // push 0x6245dc
    t0 = 0x6245dcu; esp -= 4; M32(esp) = t0;
L_00423cff:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423d00:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423d05u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423d05:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423d08:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423d0a:  // jne 0x423d37
    if (!f.zf) goto L_00423d37;
L_00423d0c:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423d10:  // mov esi, 0x100
    esi = (uint32_t)(0x100u);
L_00423d15:  // add ebp, esi
    t0 = ladd<32>(ebp, esi, f);
    ebp = (uint32_t)(t0);
L_00423d17:  // push 0x63db18
    t0 = 0x63db18u; esp -= 4; M32(esp) = t0;
L_00423d1c:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00423d1d:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_00423d1f:  // push 0x6245d8
    t0 = 0x6245d8u; esp -= 4; M32(esp) = t0;
L_00423d24:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423d25:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_00423d29:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00423d2d:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423d32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423d32:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00423d35:  // jmp 0x423d3c
    goto L_00423d3c;
L_00423d37:  // mov esi, 0x100
    esi = (uint32_t)(0x100u);
L_00423d3c:  // push 0x6245d0
    t0 = 0x6245d0u; esp -= 4; M32(esp) = t0;
L_00423d41:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423d42:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423d47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423d47:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423d4a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423d4c:  // jne 0x423d71
    if (!f.zf) goto L_00423d71;
L_00423d4e:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423d52:  // add ebp, esi
    t0 = ladd<32>(ebp, esi, f);
    ebp = (uint32_t)(t0);
L_00423d54:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_00423d56:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00423d57:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00423d5b:  // lea eax, [ebx + 0x10]
    eax = (uint32_t)((uint32_t)(ebx + 0x10u));
L_00423d5e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00423d5f:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_00423d64:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423d65:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_00423d69:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423d6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423d6e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00423d71:  // push 0x6245c4
    t0 = 0x6245c4u; esp -= 4; M32(esp) = t0;
L_00423d76:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423d77:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423d7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423d7c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423d7f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423d81:  // jne 0x423d8a
    if (!f.zf) goto L_00423d8a;
L_00423d83:  // mov byte ptr [ebx + 0x181], 1
    M8((uint32_t)(ebx + 0x181u)) = (uint8_t)(0x1u);
L_00423d8a:  // push 0x6245b4
    t0 = 0x6245b4u; esp -= 4; M32(esp) = t0;
L_00423d8f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423d90:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423d95u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423d95:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423d98:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423d9a:  // jne 0x423da2
    if (!f.zf) goto L_00423da2;
L_00423d9c:  // mov dword ptr [ebx], 2
    M32((uint32_t)(ebx)) = (uint32_t)(0x2u);
L_00423da2:  // push 0x6245a4
    t0 = 0x6245a4u; esp -= 4; M32(esp) = t0;
L_00423da7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423da8:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423dadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423dad:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423db0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423db2:  // jne 0x423dbb
    if (!f.zf) goto L_00423dbb;
L_00423db4:  // mov byte ptr [ebx + 0x182], 1
    M8((uint32_t)(ebx + 0x182u)) = (uint8_t)(0x1u);
L_00423dbb:  // push 0x624598
    t0 = 0x624598u; esp -= 4; M32(esp) = t0;
L_00423dc0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423dc1:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423dc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423dc6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423dc9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423dcb:  // jne 0x423dfc
    if (!f.zf) goto L_00423dfc;
L_00423dcd:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00423dd1:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00423dd2:  // cmp edi, ecx
    t0 = lsub<32>(edi, ecx, f);
L_00423dd4:  // jge 0x423dfc
    if ((f.sf == f.of)) goto L_00423dfc;
L_00423dd6:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423dda:  // lea edx, [ebx + 0x318]
    edx = (uint32_t)((uint32_t)(ebx + 0x318u));
L_00423de0:  // add ebp, esi
    t0 = ladd<32>(ebp, esi, f);
    ebp = (uint32_t)(t0);
L_00423de2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00423de3:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00423de4:  // add ecx, esi
    t0 = ladd<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00423de6:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_00423deb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423dec:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_00423df0:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00423df4:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423df9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423df9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00423dfc:  // push 0x624588
    t0 = 0x624588u; esp -= 4; M32(esp) = t0;
L_00423e01:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423e02:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423e07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423e07:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423e0a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423e0c:  // jne 0x423e15
    if (!f.zf) goto L_00423e15;
L_00423e0e:  // mov byte ptr [ebx + 0x183], 1
    M8((uint32_t)(ebx + 0x183u)) = (uint8_t)(0x1u);
L_00423e15:  // push 0x624578
    t0 = 0x624578u; esp -= 4; M32(esp) = t0;
L_00423e1a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423e1b:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423e20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423e20:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423e23:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_00423e28:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423e2a:  // jne 0x423e32
    if (!f.zf) goto L_00423e32;
L_00423e2c:  // mov dword ptr [0x83d448], esi
    M32((uint32_t)(0x83d448u)) = (uint32_t)(esi);
L_00423e32:  // push 0x624570
    t0 = 0x624570u; esp -= 4; M32(esp) = t0;
L_00423e37:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423e38:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423e3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423e3d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423e40:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423e42:  // jne 0x423ee5
    if (!f.zf) goto L_00423ee5;
L_00423e48:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00423e4c:  // add eax, -2
    t0 = ladd<32>(eax, 0xfffffffeu, f);
    eax = (uint32_t)(t0);
L_00423e4f:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00423e51:  // jge 0x423ee5
    if ((f.sf == f.of)) goto L_00423ee5;
L_00423e57:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423e5b:  // add ebp, 0x100
    t0 = ladd<32>(ebp, 0x100u, f);
    ebp = (uint32_t)(t0);
L_00423e61:  // add esi, 0x100
    t0 = ladd<32>(esi, 0x100u, f);
    esi = (uint32_t)(t0);
L_00423e67:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00423e68:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00423e6c:  // lea esi, [ebx + 0x164]
    esi = (uint32_t)((uint32_t)(ebx + 0x164u));
L_00423e72:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00423e73:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_00423e78:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423e79:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423e7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423e7e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00423e81:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00423e82:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_00423e86:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423e8a:  // add edi, 0x100
    t0 = ladd<32>(edi, 0x100u, f);
    edi = (uint32_t)(t0);
L_00423e90:  // add ebp, 0x100
    t0 = ladd<32>(ebp, 0x100u, f);
    ebp = (uint32_t)(t0);
L_00423e96:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_00423e9a:  // lea edi, [ebx + 0x168]
    edi = (uint32_t)((uint32_t)(ebx + 0x168u));
L_00423ea0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00423ea1:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_00423ea6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423ea7:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423eacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423eac:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00423eae:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00423eb1:  // cmp eax, 0x280
    t0 = lsub<32>(eax, 0x280u, f);
L_00423eb6:  // jl 0x423ec0
    if ((f.sf != f.of)) goto L_00423ec0;
L_00423eb8:  // cmp dword ptr [edi], 0x1e0
    t0 = lsub<32>(M32((uint32_t)(edi)), 0x1e0u, f);
L_00423ebe:  // jge 0x423ecc
    if ((f.sf == f.of)) goto L_00423ecc;
L_00423ec0:  // mov dword ptr [esi], 0x280
    M32((uint32_t)(esi)) = (uint32_t)(0x280u);
L_00423ec6:  // mov dword ptr [edi], 0x1e0
    M32((uint32_t)(edi)) = (uint32_t)(0x1e0u);
L_00423ecc:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_00423ece:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00423ed0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00423ed1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00423ed2:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00423ed7:  // call 0x52c730
    t0 = 0x0052c730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423edcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423edc:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00423ee0:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_00423ee5:  // push 0x624560
    t0 = 0x624560u; esp -= 4; M32(esp) = t0;
L_00423eea:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423eeb:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423ef0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423ef0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423ef3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423ef5:  // jne 0x423efd
    if (!f.zf) goto L_00423efd;
L_00423ef7:  // mov dword ptr [ebx + 0x2ac], eax
    M32((uint32_t)(ebx + 0x2acu)) = (uint32_t)(eax);
L_00423efd:  // push 0x624550
    t0 = 0x624550u; esp -= 4; M32(esp) = t0;
L_00423f02:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423f03:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f08:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423f0b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423f0d:  // jne 0x423f15
    if (!f.zf) goto L_00423f15;
L_00423f0f:  // mov dword ptr [ebx + 0x2ac], esi
    M32((uint32_t)(ebx + 0x2acu)) = (uint32_t)(esi);
L_00423f15:  // push 0x624540
    t0 = 0x624540u; esp -= 4; M32(esp) = t0;
L_00423f1a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423f1b:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f20:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423f23:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423f25:  // jne 0x423f2d
    if (!f.zf) goto L_00423f2d;
L_00423f27:  // mov dword ptr [ebx + 0x2b0], esi
    M32((uint32_t)(ebx + 0x2b0u)) = (uint32_t)(esi);
L_00423f2d:  // push 0x624534
    t0 = 0x624534u; esp -= 4; M32(esp) = t0;
L_00423f32:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423f33:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f38:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423f3b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423f3d:  // jne 0x423f4a
    if (!f.zf) goto L_00423f4a;
L_00423f3f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00423f40:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00423f45:  // call 0x527d00
    t0 = 0x00527d00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f4a:  // push 0x624528
    t0 = 0x624528u; esp -= 4; M32(esp) = t0;
L_00423f4f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423f50:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f55:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423f58:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423f5a:  // jne 0x423f6b
    if (!f.zf) goto L_00423f6b;
L_00423f5c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00423f61:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00423f66:  // call 0x527d00
    t0 = 0x00527d00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f6b:  // push 0x62451c
    t0 = 0x62451cu; esp -= 4; M32(esp) = t0;
L_00423f70:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423f71:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f76:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423f79:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423f7b:  // jne 0x423f8c
    if (!f.zf) goto L_00423f8c;
L_00423f7d:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_00423f82:  // mov ecx, 0x8aa920
    ecx = (uint32_t)(0x8aa920u);
L_00423f87:  // call 0x527d00
    t0 = 0x00527d00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f8c:  // push 0x62450c
    t0 = 0x62450cu; esp -= 4; M32(esp) = t0;
L_00423f91:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00423f92:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00423f97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00423f97:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00423f9a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423f9c:  // jne 0x4240ae
    if (!f.zf) goto L_004240ae;
L_00423fa2:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00423fa6:  // mov dword ptr [ebx + 0x3c], esi
    M32((uint32_t)(ebx + 0x3cu)) = (uint32_t)(esi);
L_00423fa9:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00423faa:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00423fac:  // jge 0x424035
    if ((f.sf == f.of)) goto L_00424035;
L_00423fb2:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00423fb6:  // cmp byte ptr [ecx], 0x2d
    t0 = lsub<8>(M8((uint32_t)(ecx)), 0x2du, f);
L_00423fb9:  // je 0x424035
    if (f.zf) goto L_00424035;
L_00423fbb:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00423fbc:  // add ebp, 0x100
    t0 = ladd<32>(ebp, 0x100u, f);
    ebp = (uint32_t)(t0);
L_00423fc2:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_00423fc6:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00423fc8:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_00423fca:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00423fcd:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00423fcf:  // add edx, 0x100
    t0 = ladd<32>(edx, 0x100u, f);
    edx = (uint32_t)(t0);
L_00423fd5:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00423fd7:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00423fd9:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00423fdb:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00423fdf:  // lea edx, [ebx + 0x44]
    edx = (uint32_t)((uint32_t)(ebx + 0x44u));
L_00423fe2:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00423fe4:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00423fe6:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00423fe8:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00423feb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00423fed:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00423fef:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00423ff1:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00423ff4:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00423ff6:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00423ff8:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00423ffb:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00423ffd:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00423fff:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00424000:  // cmp byte ptr [ecx + ebx + 0x43], 0x5c
    t0 = lsub<8>(M8((uint32_t)(ecx + ebx + 0x43u)), 0x5cu, f);
L_00424005:  // je 0x424035
    if (f.zf) goto L_00424035;
L_00424007:  // mov edi, 0x624508
    edi = (uint32_t)(0x624508u);
L_0042400c:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042400f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00424011:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00424013:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00424015:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00424017:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00424019:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042401b:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042401d:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0042401f:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00424022:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00424024:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00424026:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00424028:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00424029:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042402c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042402e:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00424030:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00424033:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00424035:  // lea edi, [ebx + 0x44]
    edi = (uint32_t)((uint32_t)(ebx + 0x44u));
L_00424038:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042403b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042403d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0042403f:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00424041:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00424043:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00424045:  // push 0x662cb0
    t0 = 0x662cb0u; esp -= 4; M32(esp) = t0;
L_0042404a:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042404c:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042404e:  // mov edi, 0x662cb0
    edi = (uint32_t)(0x662cb0u);
L_00424053:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00424056:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00424058:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042405a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042405c:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042405f:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00424061:  // mov edi, 0x6244f4
    edi = (uint32_t)(0x6244f4u);
L_00424066:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00424069:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042406b:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042406d:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042406f:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00424071:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00424073:  // mov edi, 0x662cb0
    edi = (uint32_t)(0x662cb0u);
L_00424078:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042407b:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042407d:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0042407f:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00424080:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00424083:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00424085:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00424087:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042408a:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042408c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00424091:  // call 0x4d2600
    t0 = 0x004d2600u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00424096u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00424096:  // push 0x662cb0
    t0 = 0x662cb0u; esp -= 4; M32(esp) = t0;
L_0042409b:  // mov ecx, 0x66eb90
    ecx = (uint32_t)(0x66eb90u);
L_004240a0:  // call 0x441730
    t0 = 0x00441730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004240a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004240a5:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004240a9:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004240ae:  // push 0x6244e8
    t0 = 0x6244e8u; esp -= 4; M32(esp) = t0;
L_004240b3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004240b4:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004240b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004240b9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004240bc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004240be:  // jne 0x4240c3
    if (!f.zf) goto L_004240c3;
L_004240c0:  // mov dword ptr [ebx + 0x14], eax
    M32((uint32_t)(ebx + 0x14u)) = (uint32_t)(eax);
L_004240c3:  // push 0x6244d8
    t0 = 0x6244d8u; esp -= 4; M32(esp) = t0;
L_004240c8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004240c9:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004240ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004240ce:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004240d1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004240d3:  // jne 0x424108
    if (!f.zf) goto L_00424108;
L_004240d5:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004240d9:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004240da:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004240dc:  // jge 0x424108
    if ((f.sf == f.of)) goto L_00424108;
L_004240de:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004240e2:  // lea ecx, [ebx + 0x2d0]
    ecx = (uint32_t)((uint32_t)(ebx + 0x2d0u));
L_004240e8:  // add ebp, 0x100
    t0 = ladd<32>(ebp, 0x100u, f);
    ebp = (uint32_t)(t0);
L_004240ee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004240ef:  // add edx, 0x100
    t0 = ladd<32>(edx, 0x100u, f);
    edx = (uint32_t)(t0);
L_004240f5:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_004240fa:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004240fb:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004240fc:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00424100:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00424105u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00424105:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00424108:  // push 0x6244c8
    t0 = 0x6244c8u; esp -= 4; M32(esp) = t0;
L_0042410d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042410e:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00424113u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00424113:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00424116:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00424118:  // jne 0x424120
    if (!f.zf) goto L_00424120;
L_0042411a:  // mov dword ptr [ebx + 0x2a8], esi
    M32((uint32_t)(ebx + 0x2a8u)) = (uint32_t)(esi);
L_00424120:  // push 0x6244bc
    t0 = 0x6244bcu; esp -= 4; M32(esp) = t0;
L_00424125:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00424126:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042412bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042412b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042412e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00424130:  // jne 0x424138
    if (!f.zf) goto L_00424138;
L_00424132:  // mov dword ptr [ebx + 0x188], eax
    M32((uint32_t)(ebx + 0x188u)) = (uint32_t)(eax);
L_00424138:  // push 0x6244b0
    t0 = 0x6244b0u; esp -= 4; M32(esp) = t0;
L_0042413d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042413e:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00424143u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00424143:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00424146:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00424148:  // jne 0x424150
    if (!f.zf) goto L_00424150;
L_0042414a:  // mov dword ptr [ebx + 0x298], esi
    M32((uint32_t)(ebx + 0x298u)) = (uint32_t)(esi);
L_00424150:  // mov al, byte ptr [0x662f3e]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x662f3eu))) & 0xffu);
L_00424155:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00424157:  // je 0x42416e
    if (f.zf) goto L_0042416e;
L_00424159:  // push 0x6244a0
    t0 = 0x6244a0u; esp -= 4; M32(esp) = t0;
L_0042415e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042415f:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00424164u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00424164:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00424167:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00424169:  // jne 0x42416e
    if (!f.zf) goto L_0042416e;
L_0042416b:  // mov dword ptr [ebx + 0x38], esi
    M32((uint32_t)(ebx + 0x38u)) = (uint32_t)(esi);
L_0042416e:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00424172:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00424176:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00424177:  // add edx, 0x100
    t0 = ladd<32>(edx, 0x100u, f);
    edx = (uint32_t)(t0);
L_0042417d:  // add ebp, 0x100
    t0 = ladd<32>(ebp, 0x100u, f);
    ebp = (uint32_t)(t0);
L_00424183:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00424185:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_00424189:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0042418d:  // jl 0x423c6b
    if ((f.sf != f.of)) goto L_00423c6b;
L_00424193:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00424194:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00424195:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00424196:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00424197:  // add esp, 0x1e10
    t0 = ladd<32>(esp, 0x1e10u, f);
    esp = (uint32_t)(t0);
L_0042419d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00423bc0, 00423bc0)
