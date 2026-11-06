// lifted from 00517ae0 (FUN_00517ae0, 350 bytes, 116 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00517ae0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00517ae0;
L_00517ae0:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00517ae3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00517ae4:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00517ae8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00517ae9:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00517aeb:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00517aee:  // mov ecx, dword ptr [edi + eax*4 + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(edi + eax * 4u + 0xc4u)));
L_00517af5:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00517af7:  // je 0x517c36
    if (f.zf) goto L_00517c36;
L_00517afd:  // mov eax, dword ptr [edi + eax*4 + 0x1c4]
    eax = (uint32_t)(M32((uint32_t)(edi + eax * 4u + 0x1c4u)));
L_00517b04:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00517b05:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00517b09:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00517b0b:  // je 0x517b79
    if (f.zf) goto L_00517b79;
L_00517b0d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00517b0f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00517b10:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00517b12:  // sete cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_00517b15:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00517b17:  // mov ecx, dword ptr [esi + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4cu)));
L_00517b1a:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00517b1c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00517b1d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517b1e:  // mov ecx, dword ptr [esi + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x48u)));
L_00517b21:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517b22:  // mov ecx, dword ptr [esi + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x44u)));
L_00517b25:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517b26:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517b27:  // call dword ptr [edx + 0x4c]
    t0 = M32((uint32_t)(edx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00517b2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00517b2a:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00517b2d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00517b2e:  // fld dword ptr [esi + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x5cu)));
L_00517b31:  // mov eax, dword ptr [edi + edx*4 + 0x1c4]
    eax = (uint32_t)(M32((uint32_t)(edi + edx * 4u + 0x1c4u)));
L_00517b38:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_00517b3e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00517b40:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517b41:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00517b44:  // fld dword ptr [esi + 0x58]
    lpush(x, (long double)F32((uint32_t)(esi + 0x58u)));
L_00517b47:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_00517b4d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517b4e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00517b51:  // fld dword ptr [esi + 0x54]
    lpush(x, (long double)F32((uint32_t)(esi + 0x54u)));
L_00517b54:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_00517b5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517b5b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00517b5e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517b5f:  // call dword ptr [ecx + 0x50]
    t0 = M32((uint32_t)(ecx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00517b62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00517b62:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00517b65:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00517b66:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_00517b6b:  // mov eax, dword ptr [edi + edx*4 + 0x1c4]
    eax = (uint32_t)(M32((uint32_t)(edi + edx * 4u + 0x1c4u)));
L_00517b72:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517b73:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00517b75:  // call dword ptr [ecx + 0x40]
    t0 = M32((uint32_t)(ecx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00517b78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00517b78:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00517b79:  // mov ecx, dword ptr [esi + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_00517b7c:  // cmp ecx, 0xfffff060
    t0 = lsub<32>(ecx, 0xfffff060u, f);
L_00517b82:  // jge 0x517b8b
    if ((f.sf == f.of)) goto L_00517b8b;
L_00517b84:  // lea ecx, [ecx + ecx*2 + 0x1f40]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u + 0x1f40u));
L_00517b8b:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00517b8e:  // mov edx, dword ptr [esi + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x38u)));
L_00517b91:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00517b95:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517b96:  // mov eax, dword ptr [edi + eax*4 + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(edi + eax * 4u + 0xc4u)));
L_00517b9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517b9e:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00517ba0:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00517ba3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00517ba3:  // mov al, byte ptr [0x8964d0]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x8964d0u))) & 0xffu);
L_00517ba8:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00517baa:  // je 0x517bf9
    if (f.zf) goto L_00517bf9;
L_00517bac:  // mov eax, dword ptr [0x663080]
    eax = (uint32_t)(M32((uint32_t)(0x663080u)));
L_00517bb1:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_00517bb4:  // je 0x517bc7
    if (f.zf) goto L_00517bc7;
L_00517bb6:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00517bb7:  // je 0x517bc0
    if (f.zf) goto L_00517bc0;
L_00517bb9:  // mov ecx, 0x2b11
    ecx = (uint32_t)(0x2b11u);
L_00517bbe:  // jmp 0x517bcc
    goto L_00517bcc;
L_00517bc0:  // mov ecx, 0x5622
    ecx = (uint32_t)(0x5622u);
L_00517bc5:  // jmp 0x517bcc
    goto L_00517bcc;
L_00517bc7:  // mov ecx, 0xac44
    ecx = (uint32_t)(0xac44u);
L_00517bcc:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00517bcf:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_00517bd3:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00517bdb:  // fild qword ptr [esp + 0xc]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0xcu)));
L_00517bdf:  // mov eax, dword ptr [edi + eax*4 + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(edi + eax * 4u + 0xc4u)));
L_00517be6:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00517bea:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00517bec:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00517bf0:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00517bf4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00517bf5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517bf6:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00517bf9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00517bf9:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00517bfb:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00517c03:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00517c04:  // jne 0x517c36
    if (!f.zf) goto L_00517c36;
L_00517c06:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_00517c0c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00517c0e:  // jne 0x517c36
    if (!f.zf) goto L_00517c36;
L_00517c10:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00517c13:  // mov eax, dword ptr [edi + edx*4 + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(edi + edx * 4u + 0xc4u)));
L_00517c1a:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00517c1e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00517c1f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00517c20:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00517c22:  // call dword ptr [ecx + 0x24]
    t0 = M32((uint32_t)(ecx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00517c25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00517c25:  // test byte ptr [esp + 0x14], 1
    t0 = llog<8>(M8((uint32_t)(esp + 0x14u)) & 0x1u, f);
L_00517c2a:  // jne 0x517c36
    if (!f.zf) goto L_00517c36;
L_00517c2c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00517c2e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00517c2f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00517c31:  // call 0x4e0f70
    t0 = 0x004e0f70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00517c36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00517c36:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00517c37:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00517c38:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00517c3b:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00517ae0, 00517ae0)
