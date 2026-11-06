// lifted from 0042cfa0 (FUN_0042cfa0, 202 bytes, 69 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042cfa0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042cfa0;
L_0042cfa0:  // sub esp, 0x7d0
    t0 = lsub<32>(esp, 0x7d0u, f);
    esp = (uint32_t)(t0);
L_0042cfa6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042cfa7:  // mov esi, dword ptr [esp + 0x7dc]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x7dcu)));
L_0042cfae:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042cfaf:  // mov edi, dword ptr [esp + 0x7dc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x7dcu)));
L_0042cfb6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042cfb7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042cfb8:  // push 0x6254d8
    t0 = 0x6254d8u; esp -= 4; M32(esp) = t0;
L_0042cfbd:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0042cfc2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042cfc7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042cfc7:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042cfca:  // call 0x42d3b0
    t0 = 0x0042d3b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042cfcfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042cfcf:  // cmp esi, -1
    t0 = lsub<32>(esi, 0xffffffffu, f);
L_0042cfd2:  // jne 0x42cffd
    if (!f.zf) goto L_0042cffd;
L_0042cfd4:  // push 0xcb
    t0 = 0xcbu; esp -= 4; M32(esp) = t0;
L_0042cfd9:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042cfdeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042cfde:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042cfdf:  // call 0x4f7d30
    t0 = 0x004f7d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042cfe4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042cfe4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042cfe7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042cfe8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042cfe9:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0042cfed:  // push 0x6254c8
    t0 = 0x6254c8u; esp -= 4; M32(esp) = t0;
L_0042cff2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042cff3:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042cff8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042cff8:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042cffb:  // jmp 0x42d025
    goto L_0042d025;
L_0042cffd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042cffe:  // push 0xcb
    t0 = 0xcbu; esp -= 4; M32(esp) = t0;
L_0042d003:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d008u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d008:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042d009:  // call 0x4f7d30
    t0 = 0x004f7d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d00eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d00e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042d011:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_0042d015:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042d016:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042d017:  // push 0x6254b4
    t0 = 0x6254b4u; esp -= 4; M32(esp) = t0;
L_0042d01c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042d01d:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d022u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d022:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0042d025:  // mov al, byte ptr [esp + 8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x8u))) & 0xffu);
L_0042d029:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042d02a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0042d02c:  // lea ecx, [esp + 4]
    ecx = (uint32_t)((uint32_t)(esp + 0x4u));
L_0042d030:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042d031:  // je 0x42d04c
    if (f.zf) goto L_0042d04c;
L_0042d033:  // mov al, byte ptr [ecx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx))) & 0xffu);
L_0042d035:  // cmp al, 0xa
    t0 = lsub<8>((eax & 0xffu), 0xau, f);
L_0042d037:  // je 0x42d041
    if (f.zf) goto L_0042d041;
L_0042d039:  // cmp al, 0xd
    t0 = lsub<8>((eax & 0xffu), 0xdu, f);
L_0042d03b:  // je 0x42d041
    if (f.zf) goto L_0042d041;
L_0042d03d:  // cmp al, 0x2c
    t0 = lsub<8>((eax & 0xffu), 0x2cu, f);
L_0042d03f:  // jne 0x42d044
    if (!f.zf) goto L_0042d044;
L_0042d041:  // mov byte ptr [ecx], 0x20
    M8((uint32_t)(ecx)) = (uint8_t)(0x20u);
L_0042d044:  // mov al, byte ptr [ecx + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x1u))) & 0xffu);
L_0042d047:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042d048:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0042d04a:  // jne 0x42d033
    if (!f.zf) goto L_0042d033;
L_0042d04c:  // lea edx, [esp]
    edx = (uint32_t)((uint32_t)(esp));
L_0042d050:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0042d052:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042d053:  // push 0x6254ac
    t0 = 0x6254acu; esp -= 4; M32(esp) = t0;
L_0042d058:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0042d05a:  // call 0x55e412
    t0 = 0x0055e412u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d05fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d05f:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042d062:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0042d064:  // call dword ptr [0x5d81e8]
    t0 = M32((uint32_t)(0x5d81e8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042d06au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042d06a:  // add esp, 0x7d0
    t0 = ladd<32>(esp, 0x7d0u, f);
    esp = (uint32_t)(t0);
L_0042d070:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0042cfa0, 0042cfa0)
