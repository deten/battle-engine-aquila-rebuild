// lifted from 004f9a90 (vslot40, 2586 bytes, 771 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f9a90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f9a90;
L_004f9a90:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004f9a92:  // push 0x5d55b4
    t0 = 0x5d55b4u; esp -= 4; M32(esp) = t0;
L_004f9a97:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004f9a9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9a9e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004f9aa5:  // sub esp, 0x90
    t0 = lsub<32>(esp, 0x90u, f);
    esp = (uint32_t)(t0);
L_004f9aab:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9aac:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f9aad:  // mov ebx, dword ptr [esp + 0xac]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_004f9ab4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9ab5:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f9ab7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f9ab8:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004f9abc:  // mov ecx, dword ptr [esi + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x148u)));
L_004f9ac2:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f9ac4:  // je 0x4f9ae2
    if (f.zf) goto L_004f9ae2;
L_004f9ac6:  // test byte ptr [ebx + 0x34], 4
    t0 = llog<8>(M8((uint32_t)(ebx + 0x34u)) & 0x4u, f);
L_004f9aca:  // je 0x4f9ae2
    if (f.zf) goto L_004f9ae2;
L_004f9acc:  // mov eax, dword ptr [ebx + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xecu)));
L_004f9ad2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9ad4:  // je 0x4f9ae2
    if (f.zf) goto L_004f9ae2;
L_004f9ad6:  // test byte ptr [eax + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x10u, f);
L_004f9ada:  // je 0x4f9ae2
    if (f.zf) goto L_004f9ae2;
L_004f9adc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9add:  // call 0x4e6660
    t0 = 0x004e6660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9ae2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9ae2:  // mov al, byte ptr [esi + 0x2c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x2cu))) & 0xffu);
L_004f9ae5:  // mov ecx, 0x1000000
    ecx = (uint32_t)(0x1000000u);
L_004f9aea:  // test al, 4
    t0 = llog<8>((eax & 0xffu) & 0x4u, f);
L_004f9aec:  // je 0x4f9b07
    if (f.zf) goto L_004f9b07;
L_004f9aee:  // test dword ptr [ebx + 0x34], ecx
    t0 = llog<32>(M32((uint32_t)(ebx + 0x34u)) & ecx, f);
L_004f9af1:  // je 0x4f9b07
    if (f.zf) goto L_004f9b07;
L_004f9af3:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f9af9:  // mov edx, dword ptr [eax + 0x124]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x124u)));
L_004f9aff:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004f9b01:  // jne 0x4fa48f
    if (!f.zf) goto L_004fa48f;
L_004f9b07:  // mov eax, dword ptr [esi + 0x244]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x244u)));
L_004f9b0d:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004f9b10:  // je 0x4f9b1c
    if (f.zf) goto L_004f9b1c;
L_004f9b12:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_004f9b15:  // je 0x4f9b1c
    if (f.zf) goto L_004f9b1c;
L_004f9b17:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_004f9b1a:  // jne 0x4f9b36
    if (!f.zf) goto L_004f9b36;
L_004f9b1c:  // mov edx, dword ptr [esi + 0x164]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f9b22:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9b29:  // fmul dword ptr [edx + 0x160]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edx + 0x160u)));
L_004f9b2f:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_004f9b36:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9b3d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f9b43:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9b45:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f9b48:  // jne 0x4f9f35
    if (!f.zf) goto L_004f9f35;
L_004f9b4e:  // mov eax, dword ptr [esi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x15cu)));
L_004f9b54:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9b56:  // je 0x4fa48f
    if (f.zf) goto L_004fa48f;
L_004f9b5c:  // mov eax, dword ptr [esi + 0x228]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x228u)));
L_004f9b62:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9b64:  // je 0x4f9b71
    if (f.zf) goto L_004f9b71;
L_004f9b66:  // test dword ptr [ebx + 0x34], ecx
    t0 = llog<32>(M32((uint32_t)(ebx + 0x34u)) & ecx, f);
L_004f9b69:  // jne 0x4fa48f
    if (!f.zf) goto L_004fa48f;
L_004f9b6f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9b71:  // mov ebp, dword ptr [esp + 0xbc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004f9b78:  // je 0x4f9d79
    if (f.zf) goto L_004f9d79;
L_004f9b7e:  // cmp ebp, -1
    t0 = lsub<32>(ebp, 0xffffffffu, f);
L_004f9b81:  // je 0x4f9d79
    if (f.zf) goto L_004f9d79;
L_004f9b87:  // test dword ptr [ebx + 0x34], ecx
    t0 = llog<32>(M32((uint32_t)(ebx + 0x34u)) & ecx, f);
L_004f9b8a:  // je 0x4f9d49
    if (f.zf) goto L_004f9d49;
L_004f9b90:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f9b92:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004f9b94:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f9b98:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_004f9b9b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9b9d:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9ba0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9ba0:  // cmp edi, dword ptr [eax + 0x15c]
    t0 = lsub<32>(edi, M32((uint32_t)(eax + 0x15cu)), f);
L_004f9ba6:  // jge 0x4f9bdc
    if ((f.sf == f.of)) goto L_004f9bdc;
L_004f9ba8:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f9bac:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_004f9baf:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9bb1:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9bb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9bb4:  // mov eax, dword ptr [eax + 0x160]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004f9bba:  // mov esi, dword ptr [eax + edi*4]
    esi = (uint32_t)(M32((uint32_t)(eax + edi * 4u)));
L_004f9bbd:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f9bbf:  // je 0x4f9bd9
    if (f.zf) goto L_004f9bd9;
L_004f9bc1:  // lea ecx, [esi + 0xdc]
    ecx = (uint32_t)((uint32_t)(esi + 0xdcu));
L_004f9bc7:  // push 0x633af4
    t0 = 0x633af4u; esp -= 4; M32(esp) = t0;
L_004f9bcc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f9bcd:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9bd2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9bd2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f9bd5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9bd7:  // je 0x4f9bdc
    if (f.zf) goto L_004f9bdc;
L_004f9bd9:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004f9bda:  // jmp 0x4f9b94
    goto L_004f9b94;
L_004f9bdc:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f9be0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9be2:  // je 0x4f9be9
    if (f.zf) goto L_004f9be9;
L_004f9be4:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004f9be7:  // jmp 0x4f9beb
    goto L_004f9beb;
L_004f9be9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f9beb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9bed:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f9bef:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004f9bf3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9bf5:  // lea ecx, [esp + 0x7c]
    ecx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004f9bf9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f9bfa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f9bfb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9bfc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9bfe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9c00:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9c02:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9c04:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9c09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9c09:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f9c0d:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f9c11:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004f9c15:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_004f9c19:  // lea eax, [ebx + 0x1c]
    eax = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004f9c1c:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_004f9c20:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004f9c24:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_004f9c28:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f9c2a:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_004f9c2e:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_004f9c36:  // mov dword ptr [esp + 0x44], 0
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x0u);
L_004f9c3e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9c40:  // mov dword ptr [esp + 0x48], 0
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x0u);
L_004f9c48:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004f9c4c:  // mov dword ptr [esp + 0x3c], 0x5d8bfc
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x5d8bfcu);
L_004f9c54:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004f9c57:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_004f9c5b:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004f9c5e:  // mov dword ptr [esp + 0x68], edx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edx);
L_004f9c62:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004f9c65:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_004f9c69:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004f9c6d:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004f9c70:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004f9c74:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f9c77:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004f9c7b:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004f9c7d:  // mov edx, dword ptr [ebx + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x7cu)));
L_004f9c80:  // mov dword ptr [esp + 0xa8], 0
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0x0u);
L_004f9c8b:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004f9c8f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f9c91:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f9c93:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004f9c95:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004f9c97:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f9c99:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004f9c9b:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004f9c9d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f9c9f:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004f9ca1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f9ca3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f9ca5:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004f9ca7:  // fcomp dword ptr [esp + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x18u)));
    lpop(x);
L_004f9cab:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9cad:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f9cb0:  // je 0x4fa48f
    if (f.zf) goto L_004fa48f;
L_004f9cb6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004f9cb8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f9cba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f9cbc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004f9cbe:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_004f9cc2:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004f9cc6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f9cc8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f9cca:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_004f9cce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f9cd0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9cd1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9cd2:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_004f9cd5:  // lea edx, [esp + 0x90]
    edx = (uint32_t)((uint32_t)(esp + 0x90u));
L_004f9cdc:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004f9cde:  // mov dword ptr [esp + 0x6c], esp
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(esp);
L_004f9ce2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f9ce3:  // mov dword ptr [esp + 0x88], 0xffffffff
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0xffffffffu);
L_004f9cee:  // mov dword ptr [esp + 0x90], 0xbf800000
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(0xbf800000u);
L_004f9cf9:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9cfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9cfe:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_004f9d03:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9d08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9d08:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004f9d0c:  // cmp edi, -1
    t0 = lsub<32>(edi, 0xffffffffu, f);
L_004f9d0f:  // je 0x4fa48f
    if (f.zf) goto L_004fa48f;
L_004f9d15:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f9d19:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_004f9d1c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9d1e:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9d21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9d21:  // mov eax, dword ptr [eax + 0x160]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004f9d27:  // cmp esi, dword ptr [eax + edi*4]
    t0 = lsub<32>(esi, M32((uint32_t)(eax + edi * 4u)), f);
L_004f9d2a:  // jne 0x4fa48f
    if (!f.zf) goto L_004fa48f;
L_004f9d30:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f9d34:  // mov dword ptr [esp + 0xa8], 0xffffffff
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0xffffffffu);
L_004f9d3f:  // mov dword ptr [esp + 0x3c], 0x5d892c
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x5d892cu);
L_004f9d47:  // jmp 0x4f9d79
    goto L_004f9d79;
L_004f9d49:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004f9d4c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9d4e:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9d51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9d51:  // mov eax, dword ptr [eax + 0x160]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004f9d57:  // mov eax, dword ptr [eax + ebp*4]
    eax = (uint32_t)(M32((uint32_t)(eax + ebp * 4u)));
L_004f9d5a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9d5c:  // je 0x4f9d79
    if (f.zf) goto L_004f9d79;
L_004f9d5e:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_004f9d63:  // push 0x633af4
    t0 = 0x633af4u; esp -= 4; M32(esp) = t0;
L_004f9d68:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9d69:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9d6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9d6e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f9d71:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9d73:  // jne 0x4fa48f
    if (!f.zf) goto L_004fa48f;
L_004f9d79:  // mov eax, dword ptr [esi + 0x22c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x22cu)));
L_004f9d7f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9d81:  // je 0x4f9dc8
    if (f.zf) goto L_004f9dc8;
L_004f9d83:  // cmp ebp, -1
    t0 = lsub<32>(ebp, 0xffffffffu, f);
L_004f9d86:  // je 0x4f9dc8
    if (f.zf) goto L_004f9dc8;
L_004f9d88:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004f9d8b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9d8d:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9d90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9d90:  // mov eax, dword ptr [eax + 0x160]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_004f9d96:  // mov eax, dword ptr [eax + ebp*4]
    eax = (uint32_t)(M32((uint32_t)(eax + ebp * 4u)));
L_004f9d99:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9d9b:  // je 0x4f9dc8
    if (f.zf) goto L_004f9dc8;
L_004f9d9d:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_004f9da2:  // push 0x633ae8
    t0 = 0x633ae8u; esp -= 4; M32(esp) = t0;
L_004f9da7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9da8:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9dadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9dad:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f9db0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9db2:  // je 0x4f9dc8
    if (f.zf) goto L_004f9dc8;
L_004f9db4:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9dbb:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_004f9dc1:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_004f9dc8:  // mov ecx, dword ptr [esi + 0x178]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x178u)));
L_004f9dce:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f9dd0:  // je 0x4f9de6
    if (f.zf) goto L_004f9de6;
L_004f9dd2:  // mov edx, dword ptr [esp + 0xb0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_004f9dd9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9dda:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f9ddb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f9ddc:  // call 0x444030
    t0 = 0x00444030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9de1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9de1:  // jmp 0x4fa48f
    goto L_004fa48f;
L_004f9de6:  // mov ecx, dword ptr [esp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_004f9ded:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004f9def:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f9df0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9df2:  // call dword ptr [eax + 0x1ac]
    t0 = M32((uint32_t)(eax + 0x1acu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9df8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9df8:  // mov eax, dword ptr [esp + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_004f9dff:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9e01:  // je 0x4f9e61
    if (f.zf) goto L_004f9e61;
L_004f9e03:  // fld dword ptr [esi + 0x100]
    lpush(x, (long double)F32((uint32_t)(esi + 0x100u)));
L_004f9e09:  // fcomp dword ptr [esp + 0xb0]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xb0u)));
    lpop(x);
L_004f9e10:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9e12:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f9e15:  // jne 0x4f9e2f
    if (!f.zf) goto L_004f9e2f;
L_004f9e17:  // fld dword ptr [esi + 0x100]
    lpush(x, (long double)F32((uint32_t)(esi + 0x100u)));
L_004f9e1d:  // fsub dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9e24:  // fstp dword ptr [esi + 0x100]
    F32((uint32_t)(esi + 0x100u)) = lf32(ST(0));
    lpop(x);
L_004f9e2a:  // jmp 0x4fa48f
    goto L_004fa48f;
L_004f9e2f:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9e36:  // fcomp dword ptr [esi + 0x100]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x100u)));
    lpop(x);
L_004f9e3c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9e3e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f9e41:  // jne 0x4f9e61
    if (!f.zf) goto L_004f9e61;
L_004f9e43:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9e4a:  // fsub dword ptr [esi + 0x100]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x100u)));
L_004f9e50:  // mov dword ptr [esi + 0x100], 0
    M32((uint32_t)(esi + 0x100u)) = (uint32_t)(0x0u);
L_004f9e5a:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_004f9e61:  // fld dword ptr [esi + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esi + 0xf8u)));
L_004f9e67:  // fsub dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9e6e:  // fst dword ptr [esi + 0xf8]
    F32((uint32_t)(esi + 0xf8u)) = lf32(ST(0));
L_004f9e74:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f9e7a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9e7c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f9e7f:  // je 0x4f9edd
    if (f.zf) goto L_004f9edd;
L_004f9e81:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_004f9e85:  // jne 0x4f9edd
    if (!f.zf) goto L_004f9edd;
L_004f9e87:  // test byte ptr [ebx + 0x34], 4
    t0 = llog<8>(M8((uint32_t)(ebx + 0x34u)) & 0x4u, f);
L_004f9e8b:  // je 0x4f9ea6
    if (f.zf) goto L_004f9ea6;
L_004f9e8d:  // mov eax, dword ptr [ebx + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xecu)));
L_004f9e93:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9e95:  // je 0x4f9ea6
    if (f.zf) goto L_004f9ea6;
L_004f9e97:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_004f9e9b:  // je 0x4f9ea6
    if (f.zf) goto L_004f9ea6;
L_004f9e9d:  // mov eax, dword ptr [eax + 0x574]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x574u)));
L_004f9ea3:  // inc dword ptr [eax + 0x30]
    t0 = linc<32>(M32((uint32_t)(eax + 0x30u)), f);
    M32((uint32_t)(eax + 0x30u)) = (uint32_t)(t0);
L_004f9ea6:  // mov edx, dword ptr [esi + 0x164]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f9eac:  // mov eax, dword ptr [edx + 0x11c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x11cu)));
L_004f9eb2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9eb4:  // jne 0x4f9ed3
    if (!f.zf) goto L_004f9ed3;
L_004f9eb6:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004f9eb8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9eba:  // call dword ptr [eax + 0xc8]
    t0 = M32((uint32_t)(eax + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9ec0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9ec0:  // mov eax, dword ptr [esp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_004f9ec7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f9ec9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9eca:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9ecb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9ecd:  // call dword ptr [edx + 0x11c]
    t0 = M32((uint32_t)(edx + 0x11cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9ed3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9ed3:  // mov dword ptr [esi + 0x1f0], 0
    M32((uint32_t)(esi + 0x1f0u)) = (uint32_t)(0x0u);
L_004f9edd:  // fld dword ptr [esi + 0x100]
    lpush(x, (long double)F32((uint32_t)(esi + 0x100u)));
L_004f9ee3:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_004f9ee9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9eeb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f9eee:  // jne 0x4f9fa0
    if (!f.zf) goto L_004f9fa0;
L_004f9ef4:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f9efa:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9efc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f9efe:  // je 0x4f9fa0
    if (f.zf) goto L_004f9fa0;
L_004f9f04:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9f06:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9f08:  // add ebx, 0x1c
    t0 = ladd<32>(ebx, 0x1cu, f);
    ebx = (uint32_t)(t0);
L_004f9f0b:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f9f0e:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004f9f10:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_004f9f12:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9f14:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_004f9f16:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9f17:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004f9f1a:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004f9f1d:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004f9f20:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_004f9f23:  // mov ecx, dword ptr [ebx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004f9f26:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004f9f29:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004f9f2e:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9f33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9f33:  // jmp 0x4f9fa0
    goto L_004f9fa0;
L_004f9f35:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f9f3b:  // fld dword ptr [esi + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esi + 0xf8u)));
L_004f9f41:  // fcomp dword ptr [ecx + 0xc0]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0xc0u)));
    lpop(x);
L_004f9f47:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9f49:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f9f4c:  // je 0x4f9fa0
    if (f.zf) goto L_004f9fa0;
L_004f9f4e:  // fld dword ptr [esi + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esi + 0xf8u)));
L_004f9f54:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f9f5a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9f5c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f9f5f:  // jne 0x4f9fa0
    if (!f.zf) goto L_004f9fa0;
L_004f9f61:  // fld dword ptr [ecx + 0xc0]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xc0u)));
L_004f9f67:  // fsub dword ptr [esi + 0xf8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xf8u)));
L_004f9f6d:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9f74:  // fchs 
    ST(0) = -ST(0);
L_004f9f76:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004f9f78:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9f7a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f9f7d:  // jne 0x4f9f8d
    if (!f.zf) goto L_004f9f8d;
L_004f9f7f:  // mov edx, dword ptr [ecx + 0xc0]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xc0u)));
L_004f9f85:  // mov dword ptr [esi + 0xf8], edx
    M32((uint32_t)(esi + 0xf8u)) = (uint32_t)(edx);
L_004f9f8b:  // jmp 0x4f9fa0
    goto L_004f9fa0;
L_004f9f8d:  // fld dword ptr [esi + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esi + 0xf8u)));
L_004f9f93:  // fsub dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb0u)));
L_004f9f9a:  // fstp dword ptr [esi + 0xf8]
    F32((uint32_t)(esi + 0xf8u)) = lf32(ST(0));
    lpop(x);
L_004f9fa0:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f9fa6:  // mov ecx, dword ptr [eax + 0x11c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x11cu)));
L_004f9fac:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f9fae:  // je 0x4f9fcd
    if (f.zf) goto L_004f9fcd;
L_004f9fb0:  // fld dword ptr [esi + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esi + 0xf8u)));
L_004f9fb6:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004f9fbc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9fbe:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f9fc1:  // je 0x4f9fcd
    if (f.zf) goto L_004f9fcd;
L_004f9fc3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f9fc5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9fc7:  // call dword ptr [edx + 0x190]
    t0 = M32((uint32_t)(edx + 0x190u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9fcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9fcd:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f9fd3:  // mov ecx, dword ptr [eax + 0x120]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x120u)));
L_004f9fd9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f9fdb:  // je 0x4fa48f
    if (f.zf) goto L_004fa48f;
L_004f9fe1:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004f9fe7:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004f9fe9:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9feeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9fee:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004f9fef:  // mov ecx, 3
    ecx = (uint32_t)(0x3u);
L_004f9ff4:  // mov esi, 0x633b98
    esi = (uint32_t)(0x633b98u);
L_004f9ff9:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_004f9ffb:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004f9ffd:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004fa001:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fa005:  // mov eax, dword ptr [edx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x164u)));
L_004fa00b:  // mov edi, dword ptr [eax + 0xb0]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xb0u)));
L_004fa011:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa013:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa015:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa017:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa019:  // jne 0x4fa037
    if (!f.zf) goto L_004fa037;
L_004fa01b:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa01d:  // je 0x4fa033
    if (f.zf) goto L_004fa033;
L_004fa01f:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa022:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa024:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa027:  // jne 0x4fa037
    if (!f.zf) goto L_004fa037;
L_004fa029:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa02c:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa02f:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa031:  // jne 0x4fa013
    if (!f.zf) goto L_004fa013;
L_004fa033:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa035:  // jmp 0x4fa03c
    goto L_004fa03c;
L_004fa037:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa039:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa03c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa03e:  // jne 0x4fa047
    if (!f.zf) goto L_004fa047;
L_004fa040:  // push 0x3c345
    t0 = 0x3c345u; esp -= 4; M32(esp) = t0;
L_004fa045:  // jmp 0x4fa087
    goto L_004fa087;
L_004fa047:  // mov esi, 0x633b88
    esi = (uint32_t)(0x633b88u);
L_004fa04c:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa04e:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa050:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa052:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa054:  // jne 0x4fa072
    if (!f.zf) goto L_004fa072;
L_004fa056:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa058:  // je 0x4fa06e
    if (f.zf) goto L_004fa06e;
L_004fa05a:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa05d:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa05f:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa062:  // jne 0x4fa072
    if (!f.zf) goto L_004fa072;
L_004fa064:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa067:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa06a:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa06c:  // jne 0x4fa04e
    if (!f.zf) goto L_004fa04e;
L_004fa06e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa070:  // jmp 0x4fa077
    goto L_004fa077;
L_004fa072:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa074:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa077:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa079:  // jne 0x4fa082
    if (!f.zf) goto L_004fa082;
L_004fa07b:  // push 0xcb1fd
    t0 = 0xcb1fdu; esp -= 4; M32(esp) = t0;
L_004fa080:  // jmp 0x4fa087
    goto L_004fa087;
L_004fa082:  // push 0x19f8cf
    t0 = 0x19f8cfu; esp -= 4; M32(esp) = t0;
L_004fa087:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004fa08c:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa091u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa091:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fa095:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004fa099:  // fld dword ptr [edx + 0xf8]
    lpush(x, (long double)F32((uint32_t)(edx + 0xf8u)));
L_004fa09f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fa0a5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa0a7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa0aa:  // je 0x4fa1ce
    if (f.zf) goto L_004fa1ce;
L_004fa0b0:  // mov eax, dword ptr [edx + 0x23c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x23cu)));
L_004fa0b6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa0b8:  // jne 0x4fa1ce
    if (!f.zf) goto L_004fa1ce;
L_004fa0be:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004fa0c0:  // mov esi, 0x633b98
    esi = (uint32_t)(0x633b98u);
L_004fa0c5:  // mov ecx, dword ptr [eax + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x164u)));
L_004fa0cb:  // mov edi, dword ptr [ecx + 0xb0]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0xb0u)));
L_004fa0d1:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa0d3:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa0d5:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa0d7:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa0d9:  // jne 0x4fa0f7
    if (!f.zf) goto L_004fa0f7;
L_004fa0db:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa0dd:  // je 0x4fa0f3
    if (f.zf) goto L_004fa0f3;
L_004fa0df:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa0e2:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa0e4:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa0e7:  // jne 0x4fa0f7
    if (!f.zf) goto L_004fa0f7;
L_004fa0e9:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa0ec:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa0ef:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa0f1:  // jne 0x4fa0d3
    if (!f.zf) goto L_004fa0d3;
L_004fa0f3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa0f5:  // jmp 0x4fa0fc
    goto L_004fa0fc;
L_004fa0f7:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa0f9:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa0fc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa0fe:  // jne 0x4fa12b
    if (!f.zf) goto L_004fa12b;
L_004fa100:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004fa104:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa107:  // je 0x4fa124
    if (f.zf) goto L_004fa124;
L_004fa109:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa10a:  // je 0x4fa11d
    if (f.zf) goto L_004fa11d;
L_004fa10c:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa10d:  // jne 0x4fa1a1
    if (!f.zf) goto L_004fa1a1;
L_004fa113:  // mov ebx, 0x1314d02a
    ebx = (uint32_t)(0x1314d02au);
L_004fa118:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa11d:  // mov ebx, 0xf20c0e7
    ebx = (uint32_t)(0xf20c0e7u);
L_004fa122:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa124:  // mov ebx, 0xb2cb1a4
    ebx = (uint32_t)(0xb2cb1a4u);
L_004fa129:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa12b:  // mov esi, 0x633b88
    esi = (uint32_t)(0x633b88u);
L_004fa130:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa132:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa134:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa136:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa138:  // jne 0x4fa156
    if (!f.zf) goto L_004fa156;
L_004fa13a:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa13c:  // je 0x4fa152
    if (f.zf) goto L_004fa152;
L_004fa13e:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa141:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa143:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa146:  // jne 0x4fa156
    if (!f.zf) goto L_004fa156;
L_004fa148:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa14b:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa14e:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa150:  // jne 0x4fa132
    if (!f.zf) goto L_004fa132;
L_004fa152:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa154:  // jmp 0x4fa15b
    goto L_004fa15b;
L_004fa156:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa158:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa15b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa15d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004fa161:  // jne 0x4fa183
    if (!f.zf) goto L_004fa183;
L_004fa163:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa166:  // je 0x4fa17c
    if (f.zf) goto L_004fa17c;
L_004fa168:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa169:  // je 0x4fa175
    if (f.zf) goto L_004fa175;
L_004fa16b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa16c:  // jne 0x4fa1a1
    if (!f.zf) goto L_004fa1a1;
L_004fa16e:  // mov ebx, 0x5011cbe5
    ebx = (uint32_t)(0x5011cbe5u);
L_004fa173:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa175:  // mov ebx, 0x4829af02
    ebx = (uint32_t)(0x4829af02u);
L_004fa17a:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa17c:  // mov ebx, 0x4041921f
    ebx = (uint32_t)(0x4041921fu);
L_004fa181:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa183:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa186:  // je 0x4fa19c
    if (f.zf) goto L_004fa19c;
L_004fa188:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa189:  // je 0x4fa195
    if (f.zf) goto L_004fa195;
L_004fa18b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa18c:  // jne 0x4fa1a1
    if (!f.zf) goto L_004fa1a1;
L_004fa18e:  // mov ebx, 0x3fc36e4e
    ebx = (uint32_t)(0x3fc36e4eu);
L_004fa193:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa195:  // mov ebx, 0x37db50bd
    ebx = (uint32_t)(0x37db50bdu);
L_004fa19a:  // jmp 0x4fa1a1
    goto L_004fa1a1;
L_004fa19c:  // mov ebx, 0x2ff3332c
    ebx = (uint32_t)(0x2ff3332cu);
L_004fa1a1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fa1a2:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004fa1a7:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa1acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa1ac:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004fa1ae:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fa1b2:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004fa1b7:  // mov dword ptr [eax + 0x23c], edi
    M32((uint32_t)(eax + 0x23cu)) = (uint32_t)(edi);
L_004fa1bd:  // mov dword ptr [eax + 0x238], edi
    M32((uint32_t)(eax + 0x238u)) = (uint32_t)(edi);
L_004fa1c3:  // mov dword ptr [eax + 0x234], edi
    M32((uint32_t)(eax + 0x234u)) = (uint32_t)(edi);
L_004fa1c9:  // jmp 0x4fa42a
    goto L_004fa42a;
L_004fa1ce:  // mov ecx, dword ptr [edx + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x164u)));
L_004fa1d4:  // fld dword ptr [ecx + 0xc0]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xc0u)));
L_004fa1da:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_004fa1e0:  // fcomp dword ptr [edx + 0xf8]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0xf8u)));
    lpop(x);
L_004fa1e6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa1e8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa1eb:  // jne 0x4fa301
    if (!f.zf) goto L_004fa301;
L_004fa1f1:  // mov eax, dword ptr [edx + 0x238]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x238u)));
L_004fa1f7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa1f9:  // jne 0x4fa301
    if (!f.zf) goto L_004fa301;
L_004fa1ff:  // mov edi, dword ptr [ecx + 0xb0]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0xb0u)));
L_004fa205:  // mov esi, 0x633b98
    esi = (uint32_t)(0x633b98u);
L_004fa20a:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa20c:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa20e:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa210:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa212:  // jne 0x4fa230
    if (!f.zf) goto L_004fa230;
L_004fa214:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa216:  // je 0x4fa22c
    if (f.zf) goto L_004fa22c;
L_004fa218:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa21b:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa21d:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa220:  // jne 0x4fa230
    if (!f.zf) goto L_004fa230;
L_004fa222:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa225:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa228:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa22a:  // jne 0x4fa20c
    if (!f.zf) goto L_004fa20c;
L_004fa22c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa22e:  // jmp 0x4fa235
    goto L_004fa235;
L_004fa230:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa232:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa235:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa237:  // jne 0x4fa264
    if (!f.zf) goto L_004fa264;
L_004fa239:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004fa23d:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa240:  // je 0x4fa25d
    if (f.zf) goto L_004fa25d;
L_004fa242:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa243:  // je 0x4fa256
    if (f.zf) goto L_004fa256;
L_004fa245:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa246:  // jne 0x4fa2da
    if (!f.zf) goto L_004fa2da;
L_004fa24c:  // mov ebx, 0x25d4ea10
    ebx = (uint32_t)(0x25d4ea10u);
L_004fa251:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa256:  // mov ebx, 0x1decf40d
    ebx = (uint32_t)(0x1decf40du);
L_004fa25b:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa25d:  // mov ebx, 0x1604fe0a
    ebx = (uint32_t)(0x1604fe0au);
L_004fa262:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa264:  // mov esi, 0x633b88
    esi = (uint32_t)(0x633b88u);
L_004fa269:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa26b:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa26d:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa26f:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa271:  // jne 0x4fa28f
    if (!f.zf) goto L_004fa28f;
L_004fa273:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa275:  // je 0x4fa28b
    if (f.zf) goto L_004fa28b;
L_004fa277:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa27a:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa27c:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa27f:  // jne 0x4fa28f
    if (!f.zf) goto L_004fa28f;
L_004fa281:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa284:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa287:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa289:  // jne 0x4fa26b
    if (!f.zf) goto L_004fa26b;
L_004fa28b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa28d:  // jmp 0x4fa294
    goto L_004fa294;
L_004fa28f:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa291:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa294:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa296:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004fa29a:  // jne 0x4fa2bc
    if (!f.zf) goto L_004fa2bc;
L_004fa29c:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa29f:  // je 0x4fa2b5
    if (f.zf) goto L_004fa2b5;
L_004fa2a1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa2a2:  // je 0x4fa2ae
    if (f.zf) goto L_004fa2ae;
L_004fa2a4:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa2a5:  // jne 0x4fa2da
    if (!f.zf) goto L_004fa2da;
L_004fa2a7:  // mov ebx, 0x9fb85a1f
    ebx = (uint32_t)(0x9fb85a1fu);
L_004fa2ac:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa2ae:  // mov ebx, 0x8fe86fbc
    ebx = (uint32_t)(0x8fe86fbcu);
L_004fa2b3:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa2b5:  // mov ebx, 0x80188559
    ebx = (uint32_t)(0x80188559u);
L_004fa2ba:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa2bc:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa2bf:  // je 0x4fa2d5
    if (f.zf) goto L_004fa2d5;
L_004fa2c1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa2c2:  // je 0x4fa2ce
    if (f.zf) goto L_004fa2ce;
L_004fa2c4:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa2c5:  // jne 0x4fa2da
    if (!f.zf) goto L_004fa2da;
L_004fa2c7:  // mov ebx, 0x7f1be4b0
    ebx = (uint32_t)(0x7f1be4b0u);
L_004fa2cc:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa2ce:  // mov ebx, 0x6f4bf99f
    ebx = (uint32_t)(0x6f4bf99fu);
L_004fa2d3:  // jmp 0x4fa2da
    goto L_004fa2da;
L_004fa2d5:  // mov ebx, 0x5f7c0e8e
    ebx = (uint32_t)(0x5f7c0e8eu);
L_004fa2da:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fa2db:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004fa2e0:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa2e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa2e5:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004fa2e7:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fa2eb:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004fa2f0:  // mov dword ptr [eax + 0x238], edi
    M32((uint32_t)(eax + 0x238u)) = (uint32_t)(edi);
L_004fa2f6:  // mov dword ptr [eax + 0x234], edi
    M32((uint32_t)(eax + 0x234u)) = (uint32_t)(edi);
L_004fa2fc:  // jmp 0x4fa42a
    goto L_004fa42a;
L_004fa301:  // fld dword ptr [ecx + 0xc0]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xc0u)));
L_004fa307:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004fa30d:  // fcomp dword ptr [edx + 0xf8]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0xf8u)));
    lpop(x);
L_004fa313:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa315:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa318:  // jne 0x4fa425
    if (!f.zf) goto L_004fa425;
L_004fa31e:  // mov eax, dword ptr [edx + 0x234]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x234u)));
L_004fa324:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa326:  // jne 0x4fa425
    if (!f.zf) goto L_004fa425;
L_004fa32c:  // mov edi, dword ptr [ecx + 0xb0]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0xb0u)));
L_004fa332:  // mov esi, 0x633b98
    esi = (uint32_t)(0x633b98u);
L_004fa337:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa339:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa33b:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa33d:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa33f:  // jne 0x4fa35d
    if (!f.zf) goto L_004fa35d;
L_004fa341:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa343:  // je 0x4fa359
    if (f.zf) goto L_004fa359;
L_004fa345:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa348:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa34a:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa34d:  // jne 0x4fa35d
    if (!f.zf) goto L_004fa35d;
L_004fa34f:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa352:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa355:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa357:  // jne 0x4fa339
    if (!f.zf) goto L_004fa339;
L_004fa359:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa35b:  // jmp 0x4fa362
    goto L_004fa362;
L_004fa35d:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa35f:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa362:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa364:  // jne 0x4fa391
    if (!f.zf) goto L_004fa391;
L_004fa366:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004fa36a:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa36d:  // je 0x4fa38a
    if (f.zf) goto L_004fa38a;
L_004fa36f:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa370:  // je 0x4fa383
    if (f.zf) goto L_004fa383;
L_004fa372:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa373:  // jne 0x4fa407
    if (!f.zf) goto L_004fa407;
L_004fa379:  // mov ebx, 0x12704036
    ebx = (uint32_t)(0x12704036u);
L_004fa37e:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa383:  // mov ebx, 0xe7cd233
    ebx = (uint32_t)(0xe7cd233u);
L_004fa388:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa38a:  // mov ebx, 0xa896430
    ebx = (uint32_t)(0xa896430u);
L_004fa38f:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa391:  // mov esi, 0x633b88
    esi = (uint32_t)(0x633b88u);
L_004fa396:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004fa398:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_004fa39a:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa39c:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_004fa39e:  // jne 0x4fa3bc
    if (!f.zf) goto L_004fa3bc;
L_004fa3a0:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa3a2:  // je 0x4fa3b8
    if (f.zf) goto L_004fa3b8;
L_004fa3a4:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_004fa3a7:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004fa3a9:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004fa3ac:  // jne 0x4fa3bc
    if (!f.zf) goto L_004fa3bc;
L_004fa3ae:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004fa3b1:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004fa3b4:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004fa3b6:  // jne 0x4fa398
    if (!f.zf) goto L_004fa398;
L_004fa3b8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa3ba:  // jmp 0x4fa3c1
    goto L_004fa3c1;
L_004fa3bc:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004fa3be:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004fa3c1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa3c3:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004fa3c7:  // jne 0x4fa3e9
    if (!f.zf) goto L_004fa3e9;
L_004fa3c9:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa3cc:  // je 0x4fa3e2
    if (f.zf) goto L_004fa3e2;
L_004fa3ce:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa3cf:  // je 0x4fa3db
    if (f.zf) goto L_004fa3db;
L_004fa3d1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa3d2:  // jne 0x4fa407
    if (!f.zf) goto L_004fa407;
L_004fa3d4:  // mov ebx, 0x4f11f0c5
    ebx = (uint32_t)(0x4f11f0c5u);
L_004fa3d9:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa3db:  // mov ebx, 0x472b1662
    ebx = (uint32_t)(0x472b1662u);
L_004fa3e0:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa3e2:  // mov ebx, 0x3f443bff
    ebx = (uint32_t)(0x3f443bffu);
L_004fa3e7:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa3e9:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004fa3ec:  // je 0x4fa402
    if (f.zf) goto L_004fa402;
L_004fa3ee:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa3ef:  // je 0x4fa3fb
    if (f.zf) goto L_004fa3fb;
L_004fa3f1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fa3f2:  // jne 0x4fa407
    if (!f.zf) goto L_004fa407;
L_004fa3f4:  // mov ebx, 0x3ec62c56
    ebx = (uint32_t)(0x3ec62c56u);
L_004fa3f9:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa3fb:  // mov ebx, 0x36df5145
    ebx = (uint32_t)(0x36df5145u);
L_004fa400:  // jmp 0x4fa407
    goto L_004fa407;
L_004fa402:  // mov ebx, 0x2ef87634
    ebx = (uint32_t)(0x2ef87634u);
L_004fa407:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fa408:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004fa40d:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa412u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa412:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004fa414:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fa418:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004fa41d:  // mov dword ptr [eax + 0x234], edi
    M32((uint32_t)(eax + 0x234u)) = (uint32_t)(edi);
L_004fa423:  // jmp 0x4fa42a
    goto L_004fa42a;
L_004fa425:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004fa42a:  // mov esi, dword ptr [0x8a9d84]
    esi = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_004fa430:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fa432:  // je 0x4fa48f
    if (f.zf) goto L_004fa48f;
L_004fa434:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004fa436:  // je 0x4fa48f
    if (f.zf) goto L_004fa48f;
L_004fa438:  // push 0x44d
    t0 = 0x44du; esp -= 4; M32(esp) = t0;
L_004fa43d:  // push 0x633b6c
    t0 = 0x633b6cu; esp -= 4; M32(esp) = t0;
L_004fa442:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004fa444:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_004fa446:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004fa44b:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa450u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa450:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004fa454:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa456:  // mov dword ptr [esp + 0xa8], edi
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(edi);
L_004fa45d:  // je 0x4fa47a
    if (f.zf) goto L_004fa47a;
L_004fa45f:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fa463:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004fa467:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004fa469:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fa46b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fa46c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fa46e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fa46f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fa470:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004fa471:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004fa473:  // call 0x4b6e50
    t0 = 0x004b6e50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa478u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa478:  // jmp 0x4fa47c
    goto L_004fa47c;
L_004fa47a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fa47c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fa47d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fa47f:  // mov dword ptr [esp + 0xac], 0xffffffff
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0xffffffffu);
L_004fa48a:  // call 0x4b7ca0
    t0 = 0x004b7ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa48fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa48f:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_004fa496:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fa497:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fa498:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fa499:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004fa4a0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fa4a1:  // add esp, 0x9c
    t0 = ladd<32>(esp, 0x9cu, f);
    esp = (uint32_t)(t0);
L_004fa4a7:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f9a90, 004f9a90)
