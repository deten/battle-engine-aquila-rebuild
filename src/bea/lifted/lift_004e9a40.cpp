// lifted from 004e9a40 (vslot51, 1205 bytes, 370 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e9a40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e9a40;
L_004e9a40:  // sub esp, 0x108
    t0 = lsub<32>(esp, 0x108u, f);
    esp = (uint32_t)(t0);
L_004e9a46:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e9a47:  // mov esi, dword ptr [esp + 0x110]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x110u)));
L_004e9a4e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e9a4f:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004e9a51:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e9a52:  // call 0x4e66d0
    t0 = 0x004e66d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9a57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9a57:  // mov eax, dword ptr [edi + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x9cu)));
L_004e9a5d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e9a5f:  // jne 0x4e9a80
    if (!f.zf) goto L_004e9a80;
L_004e9a61:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9a66:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9a67:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9a68:  // push 0x632904
    t0 = 0x632904u; esp -= 4; M32(esp) = t0;
L_004e9a6d:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9a72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9a72:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9a75:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9a76:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e9a78:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9a7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9a7e:  // jmp 0x4e9aa4
    goto L_004e9aa4;
L_004e9a80:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004e9a83:  // jne 0x4e9abc
    if (!f.zf) goto L_004e9abc;
L_004e9a85:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9a8a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9a8c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9a8e:  // push 0x6328f4
    t0 = 0x6328f4u; esp -= 4; M32(esp) = t0;
L_004e9a93:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9a98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9a98:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9a9a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9a9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9a9e:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9aa3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9aa4:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9aa9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9aab:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9ab0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ab5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9ab5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9ab7:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9abcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9abc:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9abe:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9ac4:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9ac7:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e9acb:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9acd:  // fld dword ptr [edi + 0x10c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x10cu)));
L_004e9ad3:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004e9ad6:  // push 0x6328e0
    t0 = 0x6328e0u; esp -= 4; M32(esp) = t0;
L_004e9adb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9adc:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ae1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9ae1:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e9ae4:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9ae8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9aed:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9aef:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9af1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9af2:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9af7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9af7:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9af9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9afc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9afd:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9b02:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9b03:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9b08:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9b0a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9b0f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9b14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9b14:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9b16:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9b1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9b1b:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9b1d:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9b23:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9b26:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e9b2a:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9b2c:  // fld dword ptr [edi + 0x108]
    lpush(x, (long double)F32((uint32_t)(edi + 0x108u)));
L_004e9b32:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004e9b35:  // push 0x6328d0
    t0 = 0x6328d0u; esp -= 4; M32(esp) = t0;
L_004e9b3a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9b3b:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9b40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9b40:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e9b43:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9b47:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9b4c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9b4e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9b50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9b51:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9b56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9b56:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9b58:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9b5b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9b5c:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9b61:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9b62:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9b67:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9b69:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9b6e:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9b73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9b73:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9b75:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9b7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9b7a:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9b7c:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9b82:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9b86:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9b88:  // mov edx, dword ptr [edi + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xc4u)));
L_004e9b8e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9b8f:  // push 0x6328c4
    t0 = 0x6328c4u; esp -= 4; M32(esp) = t0;
L_004e9b94:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9b95:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9b9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9b9a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004e9b9d:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9ba1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9ba6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9ba8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9baa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9bab:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9bb0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9bb0:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9bb2:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9bb5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9bba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9bbb:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9bc0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9bc1:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9bc6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9bc8:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9bcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9bcd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9bcf:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9bd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9bd4:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9bd6:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9bdc:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9bdf:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e9be3:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9be5:  // fld dword ptr [edi + 0xf4]
    lpush(x, (long double)F32((uint32_t)(edi + 0xf4u)));
L_004e9beb:  // fsub dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x1cu)));
L_004e9bee:  // fld dword ptr [edi + 0xf8]
    lpush(x, (long double)F32((uint32_t)(edi + 0xf8u)));
L_004e9bf4:  // fsub dword ptr [edi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x20u)));
L_004e9bf7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e9bf9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e9bfb:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e9bfd:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e9bff:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e9c01:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e9c03:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004e9c05:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e9c07:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004e9c0a:  // push 0x6328ac
    t0 = 0x6328acu; esp -= 4; M32(esp) = t0;
L_004e9c0f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9c10:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9c15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9c15:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e9c18:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9c1c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9c21:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9c23:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9c25:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9c26:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9c2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9c2b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9c2d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9c30:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9c35:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9c36:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9c3b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9c3c:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9c41:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9c43:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9c48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9c48:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9c4a:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9c4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9c4f:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9c51:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9c57:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9c59:  // mov eax, dword ptr [edi + 0x114]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x114u)));
L_004e9c5f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e9c61:  // je 0x4e9cb6
    if (f.zf) goto L_004e9cb6;
L_004e9c63:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9c67:  // push 0x623e00
    t0 = 0x623e00u; esp -= 4; M32(esp) = t0;
L_004e9c6c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9c6d:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9c72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9c72:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9c75:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9c79:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9c7e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9c80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9c82:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9c83:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9c88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9c88:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9c8a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9c8d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9c92:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9c93:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9c98:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9c99:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9c9e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9ca0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ca5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9ca5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9ca7:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9cacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9cac:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9cae:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9cb4:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9cb6:  // mov eax, dword ptr [edi + 0x120]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x120u)));
L_004e9cbc:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004e9cbf:  // je 0x4e9ce1
    if (f.zf) goto L_004e9ce1;
L_004e9cc1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004e9cc2:  // je 0x4e9cd5
    if (f.zf) goto L_004e9cd5;
L_004e9cc4:  // sub eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_004e9cc7:  // jne 0x4e9cf3
    if (!f.zf) goto L_004e9cf3;
L_004e9cc9:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9ccd:  // push 0x6328a4
    t0 = 0x6328a4u; esp -= 4; M32(esp) = t0;
L_004e9cd2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9cd3:  // jmp 0x4e9ceb
    goto L_004e9ceb;
L_004e9cd5:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9cd9:  // push 0x63289c
    t0 = 0x63289cu; esp -= 4; M32(esp) = t0;
L_004e9cde:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9cdf:  // jmp 0x4e9ceb
    goto L_004e9ceb;
L_004e9ce1:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9ce5:  // push 0x632894
    t0 = 0x632894u; esp -= 4; M32(esp) = t0;
L_004e9cea:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9ceb:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9cf0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9cf0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9cf3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9cf8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9cfa:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004e9cfe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9d00:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9d01:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d06u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d06:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9d08:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9d0b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9d0c:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9d11:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9d12:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9d17:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9d19:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9d1e:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d23:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9d25:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d2a:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9d2c:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9d32:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9d34:  // mov eax, dword ptr [edi + 0x110]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x110u)));
L_004e9d3a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e9d3c:  // je 0x4e9d91
    if (f.zf) goto L_004e9d91;
L_004e9d3e:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9d42:  // push 0x63288c
    t0 = 0x63288cu; esp -= 4; M32(esp) = t0;
L_004e9d47:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9d48:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d4d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9d50:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9d54:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9d59:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9d5b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9d5d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9d5e:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d63:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9d65:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9d68:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9d69:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9d6e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9d6f:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9d74:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9d76:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9d7b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d80:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9d82:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d87:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9d89:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9d8f:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9d91:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e9d93:  // call 0x4e7cf0
    t0 = 0x004e7cf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9d98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9d98:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e9d9a:  // je 0x4e9def
    if (f.zf) goto L_004e9def;
L_004e9d9c:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9da0:  // push 0x63287c
    t0 = 0x63287cu; esp -= 4; M32(esp) = t0;
L_004e9da5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9da6:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9dabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9dab:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9dae:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9db2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9db7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9db9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9dbb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9dbc:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9dc1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9dc1:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9dc3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9dc6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9dc7:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9dcc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9dcd:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9dd2:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9dd4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9dd9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ddeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9dde:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9de0:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9de5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9de5:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9de7:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9ded:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9def:  // mov eax, dword ptr [edi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004e9df5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e9df7:  // je 0x4e9e4c
    if (f.zf) goto L_004e9e4c;
L_004e9df9:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9dfd:  // push 0x63286c
    t0 = 0x63286cu; esp -= 4; M32(esp) = t0;
L_004e9e02:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9e03:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9e08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9e08:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9e0b:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9e0f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9e14:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9e16:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9e18:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9e19:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9e1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9e1e:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9e20:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9e23:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9e24:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9e29:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9e2a:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9e2f:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9e31:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9e36:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9e3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9e3b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9e3d:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9e42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9e42:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9e44:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9e4a:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9e4c:  // mov eax, dword ptr [edi + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xd0u)));
L_004e9e52:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e9e54:  // je 0x4e9eea
    if (f.zf) goto L_004e9eea;
L_004e9e5a:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_004e9e5d:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e9e61:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004e9e65:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_004e9e67:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_004e9e6a:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e9e6e:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004e9e72:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004e9e74:  // sar edx, 1
    t0 = lsar<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_004e9e76:  // sar edi, 3
    t0 = lsar<32>(edi, 0x3u, f);
    edi = (uint32_t)(t0);
L_004e9e79:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_004e9e7c:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e9e7e:  // and ecx, 0x80000007
    t0 = llog<32>(ecx & 0x80000007u, f);
    ecx = (uint32_t)(t0);
L_004e9e84:  // jns 0x4e9e8b
    if (!f.sf) goto L_004e9e8b;
L_004e9e86:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e9e87:  // or ecx, 0xfffffff8
    t0 = llog<32>(ecx | 0xfffffff8u, f);
    ecx = (uint32_t)(t0);
L_004e9e8a:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e9e8b:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_004e9e90:  // shl edx, cl
    t0 = lshl<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_004e9e92:  // test byte ptr [edi + eax], dl
    t0 = llog<8>(M8((uint32_t)(edi + eax)) & (edx & 0xffu), f);
L_004e9e95:  // je 0x4e9eea
    if (f.zf) goto L_004e9eea;
L_004e9e97:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9e9b:  // push 0x632860
    t0 = 0x632860u; esp -= 4; M32(esp) = t0;
L_004e9ea0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9ea1:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ea6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9ea6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e9ea9:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9ead:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004e9eb2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9eb4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e9eb6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9eb7:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ebcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9ebc:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9ebe:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004e9ec1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004e9ec6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9ec7:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_004e9ecc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9ecd:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_004e9ed2:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004e9ed4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ed9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9ed9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e9edb:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9ee0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9ee0:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004e9ee2:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004e9ee8:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_004e9eea:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e9eeb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e9eec:  // add esp, 0x108
    t0 = ladd<32>(esp, 0x108u, f);
    esp = (uint32_t)(t0);
L_004e9ef2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e9a40, 004e9a40)
