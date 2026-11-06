// lifted from 004fbcb0 (vslot86, 839 bytes, 237 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fbcb0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fbcb0;
L_004fbcb0:  // sub esp, 0x80
    t0 = lsub<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004fbcb6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fbcb7:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004fbcb9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fbcba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fbcbb:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004fbcc1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fbcc2:  // mov ecx, dword ptr [eax + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x108u)));
L_004fbcc8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fbcca:  // je 0x4fbd14
    if (f.zf) goto L_004fbd14;
L_004fbccc:  // mov eax, dword ptr [ebx + 0x244]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x244u)));
L_004fbcd2:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004fbcd5:  // je 0x4fbd14
    if (f.zf) goto L_004fbd14;
L_004fbcd7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbcd9:  // jne 0x4fbd07
    if (!f.zf) goto L_004fbd07;
L_004fbcdb:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_004fbcde:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004fbce0:  // mov dword ptr [ebx + 0x244], 3
    M32((uint32_t)(ebx + 0x244u)) = (uint32_t)(0x3u);
L_004fbcea:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fbceb:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004fbced:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004fbcef:  // push 0x6239cc
    t0 = 0x6239ccu; esp -= 4; M32(esp) = t0;
L_004fbcf4:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbcf7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbcf7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004fbcf9:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbcfeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbcfe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fbcff:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004fbd01:  // call dword ptr [esi + 0xf0]
    t0 = M32((uint32_t)(esi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbd07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbd07:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fbd09:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fbd0a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fbd0b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fbd0c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fbd0d:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004fbd13:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004fbd14:  // mov ecx, dword ptr [ebx + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_004fbd1a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fbd1c:  // je 0x4fbf8f
    if (f.zf) goto L_004fbf8f;
L_004fbd22:  // mov eax, dword ptr [ebx + 0x168]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x168u)));
L_004fbd28:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004fbd2d:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004fbd2f:  // je 0x4fbd07
    if (f.zf) goto L_004fbd07;
L_004fbd31:  // mov eax, dword ptr [ebx + 0x1e8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1e8u)));
L_004fbd37:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbd39:  // jne 0x4fbd07
    if (!f.zf) goto L_004fbd07;
L_004fbd3b:  // call 0x509f70
    t0 = 0x00509f70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbd40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbd40:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbd42:  // je 0x4fbd07
    if (f.zf) goto L_004fbd07;
L_004fbd44:  // mov eax, dword ptr [ebx + 0x140]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_004fbd4a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbd4c:  // je 0x4fbd5c
    if (f.zf) goto L_004fbd5c;
L_004fbd4e:  // mov ecx, dword ptr [eax + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xa0u)));
L_004fbd54:  // fld dword ptr [ecx + 0x88]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x88u)));
L_004fbd5a:  // jmp 0x4fbd62
    goto L_004fbd62;
L_004fbd5c:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004fbd62:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004fbd68:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004fbd6a:  // mov dword ptr [ebx + 0x168], ebp
    M32((uint32_t)(ebx + 0x168u)) = (uint32_t)(ebp);
L_004fbd70:  // mov dword ptr [ebx + 0x1ec], ebp
    M32((uint32_t)(ebx + 0x1ecu)) = (uint32_t)(ebp);
L_004fbd76:  // fstp dword ptr [ebx + 0x16c]
    F32((uint32_t)(ebx + 0x16cu)) = lf32(ST(0));
    lpop(x);
L_004fbd7c:  // mov edx, dword ptr [eax + 0xa0]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xa0u)));
L_004fbd82:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fbd84:  // mov eax, dword ptr [edx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x10u)));
L_004fbd87:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbd89:  // je 0x4fbdb2
    if (f.zf) goto L_004fbdb2;
L_004fbd8b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbd8d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fbd8e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004fbd93:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbd95:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_004fbd9a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbd9c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbd9e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbda0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fbda1:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_004fbda6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fbda7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fbda8:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004fbdad:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbdb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbdb2:  // mov eax, dword ptr [ebx + 0x140]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_004fbdb8:  // mov ecx, dword ptr [eax + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xa0u)));
L_004fbdbe:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004fbdc1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbdc3:  // je 0x4fbf62
    if (f.zf) goto L_004fbf62;
L_004fbdc9:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004fbdcb:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004fbdcf:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004fbdd3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fbdd4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fbdd5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fbdd6:  // push 0x1d
    t0 = 0x1du; esp -= 4; M32(esp) = t0;
L_004fbdd8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004fbdda:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbde0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbde0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fbde4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbdea:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbdec:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbdef:  // je 0x4fbe9b
    if (f.zf) goto L_004fbe9b;
L_004fbdf5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004fbdf9:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbdff:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbe01:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbe04:  // je 0x4fbe64
    if (f.zf) goto L_004fbe64;
L_004fbe06:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004fbe0a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbe10:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbe12:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbe15:  // je 0x4fbe64
    if (f.zf) goto L_004fbe64;
L_004fbe17:  // cmp ebp, 1
    t0 = lsub<32>(ebp, 0x1u, f);
L_004fbe1a:  // jne 0x4fbe64
    if (!f.zf) goto L_004fbe64;
L_004fbe1c:  // mov ecx, dword ptr [ebx + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_004fbe22:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004fbe26:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004fbe27:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbe2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbe2c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004fbe2e:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004fbe32:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004fbe35:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004fbe39:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004fbe3c:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004fbe40:  // mov ecx, dword ptr [ebx + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_004fbe46:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004fbe49:  // lea eax, [esp + 0x60]
    eax = (uint32_t)((uint32_t)(esp + 0x60u));
L_004fbe4d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fbe4e:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004fbe52:  // call 0x44a930
    t0 = 0x0044a930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbe57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbe57:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004fbe5c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004fbe5e:  // lea edi, [esp + 0x30]
    edi = (uint32_t)((uint32_t)(esp + 0x30u));
L_004fbe62:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004fbe64:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fbe68:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbe6e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbe70:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbe73:  // je 0x4fbe9b
    if (f.zf) goto L_004fbe9b;
L_004fbe75:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004fbe79:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbe7f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbe81:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbe84:  // je 0x4fbe9b
    if (f.zf) goto L_004fbe9b;
L_004fbe86:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004fbe8a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbe90:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbe92:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbe95:  // jne 0x4fbf22
    if (!f.zf) goto L_004fbf22;
L_004fbe9b:  // mov edx, dword ptr [0x854d80]
    edx = (uint32_t)(M32((uint32_t)(0x854d80u)));
L_004fbea1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbea3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbea5:  // mov eax, dword ptr [0x854d84]
    eax = (uint32_t)(M32((uint32_t)(0x854d84u)));
L_004fbeaa:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fbead:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004fbeaf:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004fbeb1:  // mov edx, dword ptr [0x854d88]
    edx = (uint32_t)(M32((uint32_t)(0x854d88u)));
L_004fbeb7:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004fbeba:  // mov eax, dword ptr [0x854d8c]
    eax = (uint32_t)(M32((uint32_t)(0x854d8cu)));
L_004fbebf:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004fbec2:  // mov edx, dword ptr [ebx + 0x140]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_004fbec8:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004fbecb:  // mov ecx, dword ptr [ebx + 0x1ac]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x1acu)));
L_004fbed1:  // mov eax, dword ptr [edx + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xa0u)));
L_004fbed7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fbed8:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004fbedb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fbedc:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004fbee1:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbee6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbee6:  // mov eax, dword ptr [ebx + 0x1ac]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1acu)));
L_004fbeec:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004fbeef:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fbef1:  // je 0x4fbefd
    if (f.zf) goto L_004fbefd;
L_004fbef3:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004fbef7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004fbef8:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbefdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbefd:  // mov eax, dword ptr [ebx + 0x1ac]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1acu)));
L_004fbf03:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004fbf06:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbf08:  // je 0x4fbf22
    if (f.zf) goto L_004fbf22;
L_004fbf0a:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004fbf0d:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004fbf12:  // lea esi, [esp + 0x30]
    esi = (uint32_t)((uint32_t)(esp + 0x30u));
L_004fbf16:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004fbf18:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004fbf22:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fbf26:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbf2c:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004fbf2d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbf2f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbf32:  // je 0x4fbdc9
    if (f.zf) goto L_004fbdc9;
L_004fbf38:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004fbf3c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbf42:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbf44:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbf47:  // je 0x4fbdc9
    if (f.zf) goto L_004fbdc9;
L_004fbf4d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004fbf51:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004fbf57:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbf59:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fbf5c:  // je 0x4fbdc9
    if (f.zf) goto L_004fbdc9;
L_004fbf62:  // fld dword ptr [ebx + 0x16c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x16cu)));
L_004fbf68:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004fbf6e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbf70:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fbf73:  // je 0x4fbf7f
    if (f.zf) goto L_004fbf7f;
L_004fbf75:  // mov dword ptr [ebx + 0x1e8], 1
    M32((uint32_t)(ebx + 0x1e8u)) = (uint32_t)(0x1u);
L_004fbf7f:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004fbf84:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fbf85:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fbf86:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fbf87:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fbf88:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004fbf8e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004fbf8f:  // mov ecx, dword ptr [ebx + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x144u)));
L_004fbf95:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fbf97:  // je 0x4fbd07
    if (f.zf) goto L_004fbd07;
L_004fbf9d:  // mov eax, dword ptr [ebx + 0x168]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x168u)));
L_004fbfa3:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004fbfa8:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004fbfaa:  // je 0x4fbfea
    if (f.zf) goto L_004fbfea;
L_004fbfac:  // mov eax, dword ptr [ebx + 0x1e8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1e8u)));
L_004fbfb2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbfb4:  // jne 0x4fbfea
    if (!f.zf) goto L_004fbfea;
L_004fbfb6:  // call 0x4e43d0
    t0 = 0x004e43d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbfbbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbfbb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbfbd:  // je 0x4fbfea
    if (f.zf) goto L_004fbfea;
L_004fbfbf:  // mov eax, dword ptr [ebx + 0x144]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x144u)));
L_004fbfc5:  // mov ecx, dword ptr [eax + 0x3d0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x3d0u)));
L_004fbfcb:  // fld dword ptr [ecx + 0x34]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x34u)));
L_004fbfce:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004fbfd4:  // mov dword ptr [ebx + 0x1e8], 0
    M32((uint32_t)(ebx + 0x1e8u)) = (uint32_t)(0x0u);
L_004fbfde:  // mov dword ptr [ebx + 0x168], esi
    M32((uint32_t)(ebx + 0x168u)) = (uint32_t)(esi);
L_004fbfe4:  // fstp dword ptr [ebx + 0x16c]
    F32((uint32_t)(ebx + 0x16cu)) = lf32(ST(0));
    lpop(x);
L_004fbfea:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004fbfec:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fbfed:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fbfee:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fbfef:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fbff0:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004fbff6:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004fbcb0, 004fbcb0)
