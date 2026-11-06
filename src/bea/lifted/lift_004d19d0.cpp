// lifted from 004d19d0 (vslot9, 567 bytes, 161 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d19d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d19d0;
L_004d19d0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004d19d2:  // push 0x5d46b2
    t0 = 0x5d46b2u; esp -= 4; M32(esp) = t0;
L_004d19d7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004d19dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d19de:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004d19e5:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004d19e8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d19e9:  // mov ebx, dword ptr [esp + 0x54]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004d19ed:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d19ee:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d19ef:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d19f0:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d19f2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d19f3:  // mov dword ptr [ebx + 0x80], 1
    M32((uint32_t)(ebx + 0x80u)) = (uint32_t)(0x1u);
L_004d19fd:  // call 0x402ad0
    t0 = 0x00402ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1a02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1a02:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004d1a04:  // push 0x631630
    t0 = 0x631630u; esp -= 4; M32(esp) = t0;
L_004d1a09:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004d1a0b:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004d1a0d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d1a12:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1a17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1a17:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_004d1a1b:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004d1a1d:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004d1a1f:  // mov dword ptr [esp + 0x58], ebp
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ebp);
L_004d1a23:  // je 0x4d1a2f
    if (f.zf) goto L_004d1a2f;
L_004d1a25:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d1a26:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d1a28:  // call 0x402150
    t0 = 0x00402150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1a2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1a2d:  // jmp 0x4d1a31
    goto L_004d1a31;
L_004d1a2f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d1a31:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004d1a33:  // push 0x631630
    t0 = 0x631630u; esp -= 4; M32(esp) = t0;
L_004d1a38:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_004d1a3a:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004d1a3c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d1a41:  // mov dword ptr [esp + 0x68], 0xffffffff
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0xffffffffu);
L_004d1a49:  // mov dword ptr [esi + 0x208], eax
    M32((uint32_t)(esi + 0x208u)) = (uint32_t)(eax);
L_004d1a4f:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1a54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1a54:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d1a56:  // mov dword ptr [esp + 0x60], edi
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edi);
L_004d1a5a:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_004d1a5c:  // mov dword ptr [esp + 0x58], 1
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x1u);
L_004d1a64:  // je 0x4d1a7d
    if (f.zf) goto L_004d1a7d;
L_004d1a66:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d1a67:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d1a68:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d1a6a:  // call 0x4fe710
    t0 = 0x004fe710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1a6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1a6f:  // mov dword ptr [edi], 0x5de73c
    M32((uint32_t)(edi)) = (uint32_t)(0x5de73cu);
L_004d1a75:  // mov dword ptr [edi + 0x60], ebp
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(ebp);
L_004d1a78:  // mov dword ptr [edi + 0x14], ebp
    M32((uint32_t)(edi + 0x14u)) = (uint32_t)(ebp);
L_004d1a7b:  // jmp 0x4d1a7f
    goto L_004d1a7f;
L_004d1a7d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d1a7f:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004d1a82:  // mov dword ptr [esi + 0x13c], edi
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(edi);
L_004d1a88:  // mov edi, dword ptr [edi + 0x20]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_004d1a8b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d1a8d:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_004d1a90:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004d1a92:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d1a94:  // mov dword ptr [esp + 0x60], 0xffffffff
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0xffffffffu);
L_004d1a9c:  // push 0x6243f8
    t0 = 0x6243f8u; esp -= 4; M32(esp) = t0;
L_004d1aa1:  // jne 0x4d1ad2
    if (!f.zf) goto L_004d1ad2;
L_004d1aa3:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d1aa5:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1aa8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1aa8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d1aaa:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1aafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1aaf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1ab0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d1ab2:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1ab8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1ab8:  // mov dword ptr [esi + 0x27c], ebp
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(ebp);
L_004d1abe:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d1ac4:  // fadd dword ptr [0x5d8bf4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bf4u)));
L_004d1aca:  // fstp dword ptr [esi + 0x280]
    F32((uint32_t)(esi + 0x280u)) = lf32(ST(0));
    lpop(x);
L_004d1ad0:  // jmp 0x4d1af7
    goto L_004d1af7;
L_004d1ad2:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d1ad4:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1ad7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1ad7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d1ad9:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1adeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1ade:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1adf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d1ae1:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1ae7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1ae7:  // mov dword ptr [esi + 0x27c], 1
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x1u);
L_004d1af1:  // mov dword ptr [esi + 0x280], ebp
    M32((uint32_t)(esi + 0x280u)) = (uint32_t)(ebp);
L_004d1af7:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004d1afd:  // cmp dword ptr [eax + 0x20], ebp
    t0 = lsub<32>(M32((uint32_t)(eax + 0x20u)), ebp, f);
L_004d1b00:  // je 0x4d1ba8
    if (f.zf) goto L_004d1ba8;
L_004d1b06:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004d1b0b:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004d1b0e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d1b0f:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004d1b13:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d1b15:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d1b17:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1b18:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004d1b1c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d1b1d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d1b1e:  // push 0x622cec
    t0 = 0x622cecu; esp -= 4; M32(esp) = t0;
L_004d1b23:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1b26u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1b26:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d1b2a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d1b30:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d1b32:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d1b35:  // je 0x4d1b59
    if (f.zf) goto L_004d1b59;
L_004d1b37:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d1b3b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d1b41:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d1b43:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d1b46:  // je 0x4d1b59
    if (f.zf) goto L_004d1b59;
L_004d1b48:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d1b4c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d1b52:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d1b54:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d1b57:  // jne 0x4d1ba8
    if (!f.zf) goto L_004d1ba8;
L_004d1b59:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_004d1b5b:  // push 0x631630
    t0 = 0x631630u; esp -= 4; M32(esp) = t0;
L_004d1b60:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d1b62:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004d1b64:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d1b69:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1b6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1b6e:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d1b70:  // mov dword ptr [esp + 0x60], edi
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edi);
L_004d1b74:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_004d1b76:  // mov dword ptr [esp + 0x58], 2
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x2u);
L_004d1b7e:  // je 0x4d1b8c
    if (f.zf) goto L_004d1b8c;
L_004d1b80:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d1b82:  // mov dword ptr [edi + 4], ebp
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebp);
L_004d1b85:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1b8au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1b8a:  // jmp 0x4d1b8e
    goto L_004d1b8e;
L_004d1b8c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d1b8e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d1b8f:  // lea ecx, [esi + 0x1d4]
    ecx = (uint32_t)((uint32_t)(esi + 0x1d4u));
L_004d1b95:  // mov dword ptr [esp + 0x5c], 0xffffffff
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(0xffffffffu);
L_004d1b9d:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1ba2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1ba2:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004d1ba3:  // jmp 0x4d1b0b
    goto L_004d1b0b;
L_004d1ba8:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004d1bae:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1bb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1bb3:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004d1bb8:  // jns 0x4d1bc1
    if (!f.sf) goto L_004d1bc1;
L_004d1bba:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d1bbb:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004d1bc0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d1bc1:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_004d1bc5:  // fild dword ptr [esp + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x60u)));
L_004d1bc9:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004d1bcf:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_004d1bd5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d1bd7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d1bda:  // jne 0x4d1be8
    if (!f.zf) goto L_004d1be8;
L_004d1bdc:  // mov dword ptr [esi + 0x284], 0x3f4ccccd
    M32((uint32_t)(esi + 0x284u)) = (uint32_t)(0x3f4ccccdu);
L_004d1be6:  // jmp 0x4d1bf2
    goto L_004d1bf2;
L_004d1be8:  // mov dword ptr [esi + 0x284], 0xbf4ccccd
    M32((uint32_t)(esi + 0x284u)) = (uint32_t)(0xbf4ccccdu);
L_004d1bf2:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004d1bf6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d1bf7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d1bf8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d1bf9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d1bfa:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004d1c01:  // add esp, 0x4c
    t0 = ladd<32>(esp, 0x4cu, f);
    esp = (uint32_t)(t0);
L_004d1c04:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d19d0, 004d19d0)
