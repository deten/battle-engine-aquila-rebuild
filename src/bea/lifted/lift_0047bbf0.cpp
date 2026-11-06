// lifted from 0047bbf0 (vslot9, 376 bytes, 107 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047bbf0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047bbf0;
L_0047bbf0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0047bbf6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0047bbf8:  // push 0x5d2b4a
    t0 = 0x5d2b4au; esp -= 4; M32(esp) = t0;
L_0047bbfd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047bbfe:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0047bc05:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047bc06:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047bc0a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047bc0b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047bc0c:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047bc0e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047bc0f:  // call 0x402ad0
    t0 = 0x00402ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bc14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bc14:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0047bc16:  // push 0x62cadc
    t0 = 0x62cadcu; esp -= 4; M32(esp) = t0;
L_0047bc1b:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0047bc1d:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0047bc1f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0047bc24:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bc29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bc29:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0047bc2d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0047bc2f:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0047bc31:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0047bc35:  // je 0x47bc48
    if (f.zf) goto L_0047bc48;
L_0047bc37:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0047bc39:  // je 0x47bc3e
    if (f.zf) goto L_0047bc3e;
L_0047bc3b:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_0047bc3e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047bc3f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047bc41:  // call 0x4964d0
    t0 = 0x004964d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bc46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bc46:  // jmp 0x47bc4a
    goto L_0047bc4a;
L_0047bc48:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0047bc4a:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0047bc4c:  // push 0x62cadc
    t0 = 0x62cadcu; esp -= 4; M32(esp) = t0;
L_0047bc51:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_0047bc53:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_0047bc55:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0047bc5a:  // mov dword ptr [esp + 0x24], 0xffffffff
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xffffffffu);
L_0047bc62:  // mov dword ptr [esi + 0x70], eax
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(eax);
L_0047bc65:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bc6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bc6a:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0047bc6c:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_0047bc70:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0047bc72:  // mov dword ptr [esp + 0x14], 1
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x1u);
L_0047bc7a:  // je 0x47bc99
    if (f.zf) goto L_0047bc99;
L_0047bc7c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047bc7d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047bc7e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0047bc80:  // call 0x4fe710
    t0 = 0x004fe710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bc85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bc85:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0047bc87:  // mov byte ptr [esp + 0x14], 2
    M8((uint32_t)(esp + 0x14u)) = (uint8_t)(0x2u);
L_0047bc8c:  // mov dword ptr [edi], 0x5dbd4c
    M32((uint32_t)(edi)) = (uint32_t)(0x5dbd4cu);
L_0047bc92:  // call 0x47bab0
    t0 = 0x0047bab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bc97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bc97:  // jmp 0x47bc9b
    goto L_0047bc9b;
L_0047bc99:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0047bc9b:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_0047bc9d:  // push 0x62cadc
    t0 = 0x62cadcu; esp -= 4; M32(esp) = t0;
L_0047bca2:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0047bca4:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_0047bca6:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0047bcab:  // mov dword ptr [esp + 0x24], 0xffffffff
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xffffffffu);
L_0047bcb3:  // mov dword ptr [esi + 0x13c], edi
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(edi);
L_0047bcb9:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bcbeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bcbe:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0047bcc0:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_0047bcc4:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0047bcc6:  // mov dword ptr [esp + 0x14], 3
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3u);
L_0047bcce:  // je 0x47bce0
    if (f.zf) goto L_0047bce0;
L_0047bcd0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047bcd1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0047bcd3:  // call 0x402150
    t0 = 0x00402150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bcd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bcd8:  // mov dword ptr [edi], 0x5dbd20
    M32((uint32_t)(edi)) = (uint32_t)(0x5dbd20u);
L_0047bcde:  // jmp 0x47bce2
    goto L_0047bce2;
L_0047bce0:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0047bce2:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0047bce5:  // mov dword ptr [esi + 0x208], edi
    M32((uint32_t)(esi + 0x208u)) = (uint32_t)(edi);
L_0047bceb:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0047bced:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047bcef:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047bcf1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047bcf3:  // push 0x62359c
    t0 = 0x62359cu; esp -= 4; M32(esp) = t0;
L_0047bcf8:  // mov dword ptr [esp + 0x20], 0xffffffff
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xffffffffu);
L_0047bd00:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bd03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bd03:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047bd05:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bd0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bd0a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047bd0b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047bd0d:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bd13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bd13:  // mov dword ptr [esi + 0x27c], 1
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(0x1u);
L_0047bd1d:  // mov dword ptr [esi + 0x284], 0
    M32((uint32_t)(esi + 0x284u)) = (uint32_t)(0x0u);
L_0047bd27:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0047bd2d:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047bd32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047bd32:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0047bd37:  // jns 0x47bd40
    if (!f.sf) goto L_0047bd40;
L_0047bd39:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047bd3a:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0047bd3f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047bd40:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0047bd44:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0047bd48:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_0047bd4c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047bd4d:  // fmul dword ptr [0x5db178]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db178u)));
L_0047bd53:  // fstp dword ptr [esi + 0x280]
    F32((uint32_t)(esi + 0x280u)) = lf32(ST(0));
    lpop(x);
L_0047bd59:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047bd5a:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0047bd61:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047bd62:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0047bd65:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0047bbf0, 0047bbf0)
