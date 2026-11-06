// lifted from 005069f0 (FUN_005069f0, 3772 bytes, 906 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005069f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005069f0;
L_005069f0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_005069f6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005069f8:  // push 0x5d591b
    t0 = 0x5d591bu; esp -= 4; M32(esp) = t0;
L_005069fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005069fe:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00506a05:  // sub esp, 0xa80
    t0 = lsub<32>(esp, 0xa80u, f);
    esp = (uint32_t)(t0);
L_00506a0b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00506a0c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00506a0d:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00506a0f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00506a10:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a11:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00506a13:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00506a16:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00506a18:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_00506a1c:  // je 0x506a2c
    if (f.zf) goto L_00506a2c;
L_00506a1e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00506a1f:  // call 0x40c2e0
    t0 = 0x0040c2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506a24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506a24:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00506a26:  // je 0x507893
    if (f.zf) goto L_00507893;
L_00506a2c:  // mov ebx, dword ptr [ebp + 0xa0]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0xa0u)));
L_00506a32:  // cmp ebx, edi
    t0 = lsub<32>(ebx, edi, f);
L_00506a34:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00506a38:  // je 0x507891
    if (f.zf) goto L_00507891;
L_00506a3e:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00506a41:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00506a43:  // je 0x506a9b
    if (f.zf) goto L_00506a9b;
L_00506a45:  // cmp dword ptr [ebx + 0xb4], edi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xb4u)), edi, f);
L_00506a4b:  // jne 0x506a9b
    if (!f.zf) goto L_00506a9b;
L_00506a4d:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00506a50:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_00506a54:  // je 0x506a74
    if (f.zf) goto L_00506a74;
L_00506a56:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a57:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00506a5a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00506a5c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00506a61:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a62:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_00506a67:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a68:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a69:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a6a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a6b:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_00506a70:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a71:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506a72:  // jmp 0x506a91
    goto L_00506a91;
L_00506a74:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a75:  // mov ecx, dword ptr [ebx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00506a78:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00506a7a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00506a7f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a80:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_00506a85:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a86:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a87:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506a88:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00506a8a:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_00506a8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506a90:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00506a91:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00506a96:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506a9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506a9b:  // mov eax, dword ptr [ebx + 0x48]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x48u)));
L_00506a9e:  // mov dword ptr [esp + 0x50], edi
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edi);
L_00506aa2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00506aa4:  // jle 0x507891
    if ((f.zf || f.sf != f.of)) goto L_00507891;
L_00506aaa:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00506aad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506aae:  // call 0x50f7a0
    t0 = 0x0050f7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506ab3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506ab3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00506ab6:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00506ab8:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00506abc:  // je 0x50787d
    if (f.zf) goto L_0050787d;
L_00506ac2:  // lea ecx, [esp + 0x2c8]
    ecx = (uint32_t)((uint32_t)(esp + 0x2c8u));
L_00506ac9:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506aceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506ace:  // mov esi, dword ptr [ebp + 0x70]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x70u)));
L_00506ad1:  // mov dword ptr [esp + 0x158], 0xbf800000
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(0xbf800000u);
L_00506adc:  // mov eax, dword ptr [esp + 0x158]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x158u)));
L_00506ae3:  // mov dword ptr [esp + 0x15c], 0xbf800000
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(0xbf800000u);
L_00506aee:  // mov ecx, dword ptr [esp + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_00506af5:  // mov dword ptr [esp + 0x684], eax
    M32((uint32_t)(esp + 0x684u)) = (uint32_t)(eax);
L_00506afc:  // mov eax, dword ptr [esp + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x164u)));
L_00506b03:  // mov dword ptr [esp + 0x688], ecx
    M32((uint32_t)(esp + 0x688u)) = (uint32_t)(ecx);
L_00506b0a:  // mov ecx, dword ptr [ebp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xa0u)));
L_00506b10:  // mov dword ptr [esp + 0x160], 0xbf800000
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(0xbf800000u);
L_00506b1b:  // mov edx, dword ptr [esp + 0x160]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_00506b22:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00506b23:  // mov dword ptr [esp + 0x690], eax
    M32((uint32_t)(esp + 0x690u)) = (uint32_t)(eax);
L_00506b2a:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00506b2c:  // mov dword ptr [esp + 0x2c8], 0x5de9b4
    M32((uint32_t)(esp + 0x2c8u)) = (uint32_t)(0x5de9b4u);
L_00506b37:  // mov dword ptr [esp + 0x68c], edx
    M32((uint32_t)(esp + 0x68cu)) = (uint32_t)(edx);
L_00506b3e:  // mov dword ptr [esp + 0x694], edi
    M32((uint32_t)(esp + 0x694u)) = (uint32_t)(edi);
L_00506b45:  // mov dword ptr [esp + 0x698], edi
    M32((uint32_t)(esp + 0x698u)) = (uint32_t)(edi);
L_00506b4c:  // mov dword ptr [esp + 0x69c], 0
    M32((uint32_t)(esp + 0x69cu)) = (uint32_t)(0x0u);
L_00506b57:  // mov dword ptr [esp + 0x6a0], 0
    M32((uint32_t)(esp + 0x6a0u)) = (uint32_t)(0x0u);
L_00506b62:  // mov dword ptr [ebp + 0x70], esi
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(esi);
L_00506b65:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00506b67:  // je 0x506b80
    if (f.zf) goto L_00506b80;
L_00506b69:  // cmp eax, dword ptr [ecx + 0x58]
    t0 = lsub<32>(eax, M32((uint32_t)(ecx + 0x58u)), f);
L_00506b6c:  // jl 0x506b71
    if ((f.sf != f.of)) goto L_00506b71;
L_00506b6e:  // mov dword ptr [ebp + 0x70], edi
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(edi);
L_00506b71:  // mov edx, dword ptr [ebp + 0x70]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x70u)));
L_00506b74:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00506b75:  // call 0x5078b0
    t0 = 0x005078b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506b7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506b7a:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00506b7e:  // jmp 0x506b88
    goto L_00506b88;
L_00506b80:  // mov dword ptr [esp + 0x44], 1
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x1u);
L_00506b88:  // mov esi, dword ptr [ebp + 0x74]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x74u)));
L_00506b8b:  // mov eax, dword ptr [ebp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xa0u)));
L_00506b91:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00506b92:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00506b94:  // mov dword ptr [ebp + 0x74], esi
    M32((uint32_t)(ebp + 0x74u)) = (uint32_t)(esi);
L_00506b97:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00506b99:  // je 0x506bac
    if (f.zf) goto L_00506bac;
L_00506b9b:  // cmp ecx, dword ptr [eax + 0x68]
    t0 = lsub<32>(ecx, M32((uint32_t)(eax + 0x68u)), f);
L_00506b9e:  // jl 0x506ba3
    if ((f.sf != f.of)) goto L_00506ba3;
L_00506ba0:  // mov dword ptr [ebp + 0x74], edi
    M32((uint32_t)(ebp + 0x74u)) = (uint32_t)(edi);
L_00506ba3:  // mov eax, dword ptr [ebp + 0x74]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x74u)));
L_00506ba6:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00506baa:  // jmp 0x506bb0
    goto L_00506bb0;
L_00506bac:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_00506bb0:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00506bb3:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_00506bba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00506bbc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506bbd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00506bbf:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00506bc3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506bc4:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00506bc8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506bc9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00506bca:  // call dword ptr [edx + 0x12c]
    t0 = M32((uint32_t)(edx + 0x12cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506bd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506bd0:  // cmp dword ptr [ebp + 0x80], edi
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x80u)), edi, f);
L_00506bd6:  // je 0x506cf5
    if (f.zf) goto L_00506cf5;
L_00506bdc:  // cmp dword ptr [ebx + 0xac], edi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xacu)), edi, f);
L_00506be2:  // je 0x506ce2
    if (f.zf) goto L_00506ce2;
L_00506be8:  // mov eax, dword ptr [ebp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xa0u)));
L_00506bee:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_00506bf1:  // fld dword ptr [ecx + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x3cu)));
L_00506bf4:  // fmul dword ptr [0x5d8c6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c6cu)));
L_00506bfa:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00506c00:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00506c02:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00506c05:  // jne 0x506c15
    if (!f.zf) goto L_00506c15;
L_00506c07:  // cmp dword ptr [ecx + 0x50], edi
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x50u)), edi, f);
L_00506c0a:  // jne 0x506c15
    if (!f.zf) goto L_00506c15;
L_00506c0c:  // cmp dword ptr [ecx + 0x6c], edi
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x6cu)), edi, f);
L_00506c0f:  // je 0x506ce2
    if (f.zf) goto L_00506ce2;
L_00506c15:  // mov ecx, dword ptr [ebp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_00506c18:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00506c1a:  // je 0x506ce2
    if (f.zf) goto L_00506ce2;
L_00506c20:  // lea edx, [esp + 0x1a8]
    edx = (uint32_t)((uint32_t)(esp + 0x1a8u));
L_00506c27:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00506c28:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506c2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506c2d:  // fld dword ptr [esp + 0x1b0]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1b0u)));
L_00506c34:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00506c38:  // fld dword ptr [esp + 0x1ac]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1acu)));
L_00506c3f:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_00506c43:  // fld dword ptr [esp + 0x1a8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1a8u)));
L_00506c4a:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_00506c4e:  // lea ecx, [esp + 0x178]
    ecx = (uint32_t)((uint32_t)(esp + 0x178u));
L_00506c55:  // fstp dword ptr [esp + 0x178]
    F32((uint32_t)(esp + 0x178u)) = lf32(ST(0));
    lpop(x);
L_00506c5c:  // fstp dword ptr [esp + 0x17c]
    F32((uint32_t)(esp + 0x17cu)) = lf32(ST(0));
    lpop(x);
L_00506c63:  // fstp dword ptr [esp + 0x180]
    F32((uint32_t)(esp + 0x180u)) = lf32(ST(0));
    lpop(x);
L_00506c6a:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506c6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506c6f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00506c75:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00506c77:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00506c7a:  // jne 0x506c9a
    if (!f.zf) goto L_00506c9a;
L_00506c7c:  // fld dword ptr [esp + 0x180]
    lpush(x, (long double)F32((uint32_t)(esp + 0x180u)));
L_00506c83:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00506c85:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00506c89:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00506c8b:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00506c8f:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506c94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506c94:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00506c98:  // jmp 0x506ca4
    goto L_00506ca4;
L_00506c9a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00506c9c:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00506ca4:  // fld dword ptr [esp + 0x178]
    lpush(x, (long double)F32((uint32_t)(esp + 0x178u)));
L_00506cab:  // fld dword ptr [esp + 0x17c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x17cu)));
L_00506cb2:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00506cb4:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00506cb8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506cb9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506cba:  // fchs 
    ST(0) = -ST(0);
L_00506cbc:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00506cc0:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00506cc4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00506cc5:  // lea ecx, [esp + 0x274]
    ecx = (uint32_t)((uint32_t)(esp + 0x274u));
L_00506ccc:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506cd1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506cd1:  // lea edi, [ebp + 0x30]
    edi = (uint32_t)((uint32_t)(ebp + 0x30u));
L_00506cd4:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00506cd9:  // lea esi, [esp + 0x268]
    esi = (uint32_t)((uint32_t)(esp + 0x268u));
L_00506ce0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00506ce2:  // lea esi, [ebp + 0x30]
    esi = (uint32_t)((uint32_t)(ebp + 0x30u));
L_00506ce5:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00506cea:  // lea edi, [esp + 0x88]
    edi = (uint32_t)((uint32_t)(esp + 0x88u));
L_00506cf1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00506cf3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00506cf5:  // lea edx, [ebx + 0x5c]
    edx = (uint32_t)((uint32_t)(ebx + 0x5cu));
L_00506cf8:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_00506cff:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00506d01:  // mov dword ptr [esp + 0x11c], edx
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(edx);
L_00506d08:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506d0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506d0d:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00506d0f:  // je 0x506d3b
    if (f.zf) goto L_00506d3b;
L_00506d11:  // mov ecx, dword ptr [esp + 0x118]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x118u)));
L_00506d18:  // cmp esi, dword ptr [esp + 0x14]
    t0 = lsub<32>(esi, M32((uint32_t)(esp + 0x14u)), f);
L_00506d1c:  // je 0x506ded
    if (f.zf) goto L_00506ded;
L_00506d22:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00506d25:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00506d26:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00506d28:  // mov dword ptr [esp + 0x118], ecx
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(ecx);
L_00506d2f:  // je 0x506d35
    if (f.zf) goto L_00506d35;
L_00506d31:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00506d33:  // jmp 0x506d37
    goto L_00506d37;
L_00506d35:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00506d37:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00506d39:  // jne 0x506d18
    if (!f.zf) goto L_00506d18;
L_00506d3b:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00506d3d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506d3e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00506d40:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506d41:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00506d45:  // call 0x4f8140
    t0 = 0x004f8140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506d4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506d4a:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_00506d4c:  // je 0x506d88
    if (f.zf) goto L_00506d88;
L_00506d4e:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00506d51:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00506d53:  // mov dword ptr [esp + 0x124], eax
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(eax);
L_00506d5a:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00506d5c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506d5d:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00506d5f:  // mov dword ptr [esp + 0x124], ecx
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(ecx);
L_00506d66:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00506d67:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506d68:  // lea ecx, [esp + 0x2a4]
    ecx = (uint32_t)((uint32_t)(esp + 0x2a4u));
L_00506d6f:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506d74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506d74:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00506d79:  // lea esi, [esp + 0x298]
    esi = (uint32_t)((uint32_t)(esp + 0x298u));
L_00506d80:  // lea edi, [esp + 0x58]
    edi = (uint32_t)((uint32_t)(esp + 0x58u));
L_00506d84:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00506d86:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00506d88:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00506d8c:  // mov eax, dword ptr [ecx + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xf0u)));
L_00506d92:  // cmp dword ptr [eax + 0x50], edi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x50u)), edi, f);
L_00506d95:  // je 0x506df4
    if (f.zf) goto L_00506df4;
L_00506d97:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00506d9a:  // mov dword ptr [esp + 0x158], 0
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(0x0u);
L_00506da5:  // mov eax, dword ptr [esp + 0x158]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x158u)));
L_00506dac:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00506dae:  // mov dword ptr [esp + 0x15c], 0
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(0x0u);
L_00506db9:  // mov ecx, dword ptr [esp + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_00506dc0:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00506dc2:  // mov dword ptr [esp + 0x160], 0
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(0x0u);
L_00506dcd:  // mov eax, dword ptr [esp + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_00506dd4:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00506dd7:  // mov ecx, dword ptr [esp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x164u)));
L_00506dde:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00506de1:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00506de4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00506de6:  // call 0x5099a0
    t0 = 0x005099a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506debu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506deb:  // jmp 0x506dfd
    goto L_00506dfd;
L_00506ded:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00506def:  // jmp 0x506d3d
    goto L_00506d3d;
L_00506df4:  // fld dword ptr [eax + 0x2c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x2cu)));
L_00506df7:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00506dfd:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00506e03:  // fstp dword ptr [esp + 0x18c]
    F32((uint32_t)(esp + 0x18cu)) = lf32(ST(0));
    lpop(x);
L_00506e0a:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506e0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506e0f:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00506e14:  // jns 0x506e1d
    if (!f.sf) goto L_00506e1d;
L_00506e16:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00506e17:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00506e1c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00506e1d:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00506e21:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00506e27:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00506e2b:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_00506e31:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00506e37:  // fmul dword ptr [ebx + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x34u)));
L_00506e3a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00506e3e:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506e43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506e43:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00506e48:  // jns 0x506e51
    if (!f.sf) goto L_00506e51;
L_00506e4a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00506e4b:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00506e50:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00506e51:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00506e55:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00506e59:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00506e5d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00506e5e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00506e5f:  // lea ecx, [esp + 0xf0]
    ecx = (uint32_t)((uint32_t)(esp + 0xf0u));
L_00506e66:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_00506e6c:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00506e72:  // fmul dword ptr [ebx + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x34u)));
L_00506e75:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00506e79:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00506e7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506e7e:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506e83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506e83:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00506e86:  // lea eax, [esp + 0x1f8]
    eax = (uint32_t)((uint32_t)(esp + 0x1f8u));
L_00506e8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506e8e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00506e90:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506e93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506e93:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00506e97:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_00506e9a:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00506e9e:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00506ea1:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00506ea5:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00506ea7:  // fstp dword ptr [esp + 0x168]
    F32((uint32_t)(esp + 0x168u)) = lf32(ST(0));
    lpop(x);
L_00506eae:  // mov ecx, dword ptr [esp + 0x168]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x168u)));
L_00506eb5:  // fstp dword ptr [esp + 0x16c]
    F32((uint32_t)(esp + 0x16cu)) = lf32(ST(0));
    lpop(x);
L_00506ebc:  // mov edx, dword ptr [esp + 0x16c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x16cu)));
L_00506ec3:  // mov dword ptr [esp + 0x2cc], ecx
    M32((uint32_t)(esp + 0x2ccu)) = (uint32_t)(ecx);
L_00506eca:  // fstp dword ptr [esp + 0x170]
    F32((uint32_t)(esp + 0x170u)) = lf32(ST(0));
    lpop(x);
L_00506ed1:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_00506ed8:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_00506edf:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_00506ee6:  // mov eax, dword ptr [esp + 0x170]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x170u)));
L_00506eed:  // mov ecx, dword ptr [esp + 0x174]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x174u)));
L_00506ef4:  // fmul dword ptr [esp + 0x70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x70u)));
L_00506ef8:  // mov dword ptr [esp + 0x2d0], edx
    M32((uint32_t)(esp + 0x2d0u)) = (uint32_t)(edx);
L_00506eff:  // lea edx, [ebp + 0x84]
    edx = (uint32_t)((uint32_t)(ebp + 0x84u));
L_00506f05:  // mov dword ptr [esp + 0x2d4], eax
    M32((uint32_t)(esp + 0x2d4u)) = (uint32_t)(eax);
L_00506f0c:  // mov dword ptr [esp + 0x2d8], ecx
    M32((uint32_t)(esp + 0x2d8u)) = (uint32_t)(ecx);
L_00506f13:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00506f15:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506f17:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00506f1a:  // mov dword ptr [esp + 0x684], eax
    M32((uint32_t)(esp + 0x684u)) = (uint32_t)(eax);
L_00506f21:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_00506f28:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00506f2b:  // mov dword ptr [esp + 0x688], ecx
    M32((uint32_t)(esp + 0x688u)) = (uint32_t)(ecx);
L_00506f32:  // fmul dword ptr [esp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x60u)));
L_00506f36:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00506f39:  // mov dword ptr [esp + 0x68c], eax
    M32((uint32_t)(esp + 0x68cu)) = (uint32_t)(eax);
L_00506f40:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00506f41:  // mov dword ptr [esp + 0x694], ecx
    M32((uint32_t)(esp + 0x694u)) = (uint32_t)(ecx);
L_00506f48:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506f4a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00506f4d:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_00506f54:  // fmul dword ptr [esp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x60u)));
L_00506f58:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_00506f5f:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_00506f66:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00506f67:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506f69:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_00506f70:  // fmul dword ptr [esp + 0x74]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x74u)));
L_00506f74:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506f76:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00506f79:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_00506f80:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_00506f87:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_00506f8e:  // fmul dword ptr [esp + 0x70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x70u)));
L_00506f92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00506f93:  // lea ecx, [esp + 0x254]
    ecx = (uint32_t)((uint32_t)(esp + 0x254u));
L_00506f9a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506f9c:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_00506fa3:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_00506fa7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506fa9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00506fac:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00506fb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00506fb1:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00506fb8:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_00506fbf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00506fc0:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00506fc7:  // fmul dword ptr [esp + 0x74]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x74u)));
L_00506fcb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00506fcc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506fce:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00506fd5:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_00506fd9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506fdb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00506fde:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00506fe5:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_00506fe9:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_00506ff0:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_00506ff7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00506ff8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00506ffa:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_00507001:  // fmul dword ptr [esp + 0x78]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x78u)));
L_00507005:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507007:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050700a:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_00507011:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_00507018:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_0050701f:  // fmul dword ptr [esp + 0x74]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x74u)));
L_00507023:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507024:  // lea ecx, [esp + 0x268]
    ecx = (uint32_t)((uint32_t)(esp + 0x268u));
L_0050702b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050702d:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_00507034:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_00507038:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050703a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050703d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507042u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507042:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00507046:  // fmul dword ptr [esp + 0x8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8cu)));
L_0050704d:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00507054:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_0050705b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050705c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050705d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050705f:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00507066:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_0050706a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050706c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050706f:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00507073:  // fmul dword ptr [esp + 0x94]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x94u)));
L_0050707a:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00507081:  // fmul dword ptr [esp + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x88u)));
L_00507088:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507089:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050708b:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00507092:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_00507096:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507098:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050709b:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_005070a2:  // fmul dword ptr [esp + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x88u)));
L_005070a9:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_005070b0:  // fmul dword ptr [esp + 0x78]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x78u)));
L_005070b4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005070b5:  // lea ecx, [esp + 0x23c]
    ecx = (uint32_t)((uint32_t)(esp + 0x23cu));
L_005070bc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005070be:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_005070c5:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_005070c9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005070cb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005070ce:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005070d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005070d3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005070d4:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_005070db:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005070e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005070e0:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_005070e7:  // fmul dword ptr [esp + 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x110u)));
L_005070ee:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_005070f5:  // fmul dword ptr [esp + 0x100]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x100u)));
L_005070fc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005070fd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005070ff:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00507106:  // fmul dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf4u)));
L_0050710d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050710f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507112:  // fld dword ptr [esp + 0xe4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe4u)));
L_00507119:  // fmul dword ptr [esp + 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x110u)));
L_00507120:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_00507127:  // fmul dword ptr [esp + 0x100]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x100u)));
L_0050712e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507130:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00507137:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_0050713e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050713f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507141:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507144:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_0050714b:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_00507152:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_00507159:  // fmul dword ptr [esp + 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x110u)));
L_00507160:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507161:  // lea ecx, [esp + 0x244]
    ecx = (uint32_t)((uint32_t)(esp + 0x244u));
L_00507168:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050716a:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_00507171:  // fmul dword ptr [esp + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x104u)));
L_00507178:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050717a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050717d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507182u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507182:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_00507189:  // fmul dword ptr [esp + 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x110u)));
L_00507190:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_00507197:  // fmul dword ptr [esp + 0x100]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x100u)));
L_0050719e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050719f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005071a0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005071a2:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_005071a9:  // fmul dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf8u)));
L_005071b0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005071b2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005071b5:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_005071bc:  // fmul dword ptr [esp + 0x114]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x114u)));
L_005071c3:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_005071ca:  // fmul dword ptr [esp + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x104u)));
L_005071d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005071d2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005071d4:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_005071db:  // fmul dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf8u)));
L_005071e2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005071e4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005071e7:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_005071ee:  // fmul dword ptr [esp + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x104u)));
L_005071f5:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_005071fc:  // fmul dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf4u)));
L_00507203:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507204:  // lea ecx, [esp + 0x218]
    ecx = (uint32_t)((uint32_t)(esp + 0x218u));
L_0050720b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050720d:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_00507214:  // fmul dword ptr [esp + 0x118]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x118u)));
L_0050721b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050721d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507220:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507225u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507225:  // fld dword ptr [esp + 0x114]
    lpush(x, (long double)F32((uint32_t)(esp + 0x114u)));
L_0050722c:  // fmul dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc4u)));
L_00507233:  // fld dword ptr [esp + 0x104]
    lpush(x, (long double)F32((uint32_t)(esp + 0x104u)));
L_0050723a:  // fmul dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc0u)));
L_00507241:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507242:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507243:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507245:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_0050724c:  // fmul dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc4u)));
L_00507253:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507255:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507258:  // fld dword ptr [esp + 0x118]
    lpush(x, (long double)F32((uint32_t)(esp + 0x118u)));
L_0050725f:  // fmul dword ptr [esp + 0xcc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xccu)));
L_00507266:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_0050726d:  // fmul dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc8u)));
L_00507274:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507275:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507277:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_0050727e:  // fmul dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc8u)));
L_00507285:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507287:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050728a:  // fld dword ptr [esp + 0x118]
    lpush(x, (long double)F32((uint32_t)(esp + 0x118u)));
L_00507291:  // fmul dword ptr [esp + 0xd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd0u)));
L_00507298:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_0050729f:  // fmul dword ptr [esp + 0xcc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xccu)));
L_005072a6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005072a7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005072a9:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_005072b0:  // fmul dword ptr [esp + 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xfcu)));
L_005072b7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005072b9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005072bc:  // lea ecx, [esp + 0x22c]
    ecx = (uint32_t)((uint32_t)(esp + 0x22cu));
L_005072c3:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005072c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005072c8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005072c9:  // lea ecx, [esp + 0x1d4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1d4u));
L_005072d0:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005072d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005072d5:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_005072da:  // lea esi, [esp + 0x1c8]
    esi = (uint32_t)((uint32_t)(esp + 0x1c8u));
L_005072e1:  // lea edi, [esp + 0x2dc]
    edi = (uint32_t)((uint32_t)(esp + 0x2dcu));
L_005072e8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005072ea:  // fld dword ptr [esp + 0x1ec]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1ecu)));
L_005072f1:  // fmul dword ptr [esp + 0x18c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18cu)));
L_005072f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005072f9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005072fc:  // fld dword ptr [esp + 0x1e0]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1e0u)));
L_00507303:  // fmul dword ptr [esp + 0x190]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x190u)));
L_0050730a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050730b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050730e:  // fld dword ptr [esp + 0x1d4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1d4u)));
L_00507315:  // fmul dword ptr [esp + 0x194]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x194u)));
L_0050731c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050731d:  // lea ecx, [esp + 0x1a4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1a4u));
L_00507324:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507327:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050732cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050732c:  // mov edx, dword ptr [esp + 0x198]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_00507333:  // mov ecx, dword ptr [esp + 0x1a0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1a0u)));
L_0050733a:  // mov eax, dword ptr [esp + 0x19c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x19cu)));
L_00507341:  // mov dword ptr [esp + 0x318], edx
    M32((uint32_t)(esp + 0x318u)) = (uint32_t)(edx);
L_00507348:  // mov edx, dword ptr [esp + 0x1a4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1a4u)));
L_0050734f:  // mov dword ptr [esp + 0x320], ecx
    M32((uint32_t)(esp + 0x320u)) = (uint32_t)(ecx);
L_00507356:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00507359:  // mov dword ptr [esp + 0x31c], eax
    M32((uint32_t)(esp + 0x31cu)) = (uint32_t)(eax);
L_00507360:  // mov dword ptr [esp + 0x324], edx
    M32((uint32_t)(esp + 0x324u)) = (uint32_t)(edx);
L_00507367:  // mov dword ptr [esp + 0x328], 1
    M32((uint32_t)(esp + 0x328u)) = (uint32_t)(0x1u);
L_00507372:  // mov eax, dword ptr [ecx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x138u)));
L_00507378:  // mov dword ptr [esp + 0x368], eax
    M32((uint32_t)(esp + 0x368u)) = (uint32_t)(eax);
L_0050737f:  // mov eax, dword ptr [ebx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x18u)));
L_00507382:  // mov dword ptr [esp + 0x698], eax
    M32((uint32_t)(esp + 0x698u)) = (uint32_t)(eax);
L_00507389:  // mov eax, dword ptr [eax + 0x24]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x24u)));
L_0050738c:  // mov dword ptr [esp + 0x6a0], eax
    M32((uint32_t)(esp + 0x6a0u)) = (uint32_t)(eax);
L_00507393:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00507395:  // call dword ptr [edx + 0x144]
    t0 = M32((uint32_t)(edx + 0x144u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050739bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050739b:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050739f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_005073a1:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005073a4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005073a5:  // lea ecx, [edi + 0xec]
    ecx = (uint32_t)((uint32_t)(edi + 0xecu));
L_005073ab:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005073b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005073b0:  // mov eax, dword ptr [edi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xf0u)));
L_005073b6:  // mov ecx, dword ptr [eax + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4cu)));
L_005073b9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_005073bb:  // je 0x5074a4
    if (f.zf) goto L_005074a4;
L_005073c1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_005073c3:  // je 0x5074a4
    if (f.zf) goto L_005074a4;
L_005073c9:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_005073cc:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_005073d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005073d1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005073d4:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_005073d7:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_005073db:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005073dc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005073df:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_005073e2:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_005073e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005073e7:  // lea ecx, [esp + 0x144]
    ecx = (uint32_t)((uint32_t)(esp + 0x144u));
L_005073ee:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005073f1:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005073f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005073f6:  // fld dword ptr [esp + 0x13c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x13cu)));
L_005073fd:  // fmul dword ptr [esp + 0x13c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x13cu)));
L_00507404:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_0050740b:  // fmul dword ptr [esp + 0x140]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x140u)));
L_00507412:  // mov ecx, dword ptr [edi + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xf0u)));
L_00507418:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050741a:  // fld dword ptr [esp + 0x138]
    lpush(x, (long double)F32((uint32_t)(esp + 0x138u)));
L_00507421:  // fmul dword ptr [esp + 0x138]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x138u)));
L_00507428:  // mov edx, dword ptr [ecx + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x2cu)));
L_0050742b:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_0050742f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507431:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00507433:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00507437:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0050743b:  // fmul dword ptr [esp + 0x6a0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6a0u)));
L_00507442:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_00507446:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507448:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0050744b:  // jne 0x5074a4
    if (!f.zf) goto L_005074a4;
L_0050744d:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00507453:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507458u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507458:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0050745d:  // jns 0x507466
    if (!f.sf) goto L_00507466;
L_0050745f:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00507460:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00507465:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00507466:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0050746a:  // mov eax, dword ptr [edi + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xf0u)));
L_00507470:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00507474:  // fmul dword ptr [0x5de9ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5de9acu)));
L_0050747a:  // fld dword ptr [eax + 0x7c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x7cu)));
L_0050747d:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00507481:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00507485:  // fmul dword ptr [0x5d85fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85fcu)));
L_0050748b:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0050748f:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00507491:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00507495:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_00507499:  // fdiv dword ptr [esp + 0x54]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x54u)));
L_0050749d:  // fstp dword ptr [esp + 0x6a0]
    F32((uint32_t)(esp + 0x6a0u)) = lf32(ST(0));
    lpop(x);
L_005074a4:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005074a7:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_005074ab:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_005074af:  // je 0x5074ce
    if (f.zf) goto L_005074ce;
L_005074b1:  // mov eax, dword ptr [ecx + 0x574]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x574u)));
L_005074b7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005074b8:  // inc dword ptr [eax + 0x34]
    t0 = linc<32>(M32((uint32_t)(eax + 0x34u)), f);
    M32((uint32_t)(eax + 0x34u)) = (uint32_t)(t0);
L_005074bb:  // call 0x407310
    t0 = 0x00407310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005074c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005074c0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005074c2:  // je 0x5074ce
    if (f.zf) goto L_005074ce;
L_005074c4:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005074c8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005074c9:  // call 0x407060
    t0 = 0x00407060u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005074ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005074ce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005074d0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005074d1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_005074d3:  // call 0x4daab0
    t0 = 0x004daab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005074d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005074d8:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_005074da:  // lea eax, [esp + 0x2c8]
    eax = (uint32_t)((uint32_t)(esp + 0x2c8u));
L_005074e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005074e2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_005074e4:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005074e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005074e7:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_005074ea:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_005074ec:  // je 0x507680
    if (f.zf) goto L_00507680;
L_005074f2:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_005074f4:  // lea eax, [ebp + 0x18]
    eax = (uint32_t)((uint32_t)(ebp + 0x18u));
L_005074f7:  // cmp dword ptr [eax], 0
    t0 = lsub<32>(M32((uint32_t)(eax)), 0x0u, f);
L_005074fa:  // je 0x50753c
    if (f.zf) goto L_0050753c;
L_005074fc:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_005074fd:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00507500:  // cmp ebx, 2
    t0 = lsub<32>(ebx, 0x2u, f);
L_00507503:  // jl 0x5074f7
    if ((f.sf != f.of)) goto L_005074f7;
L_00507505:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_00507509:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_00507511:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507516u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507516:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00507519:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050751d:  // mov dword ptr [esp + 0xa98], 0
    M32((uint32_t)(esp + 0xa98u)) = (uint32_t)(0x0u);
L_00507528:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_0050752c:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0050752f:  // je 0x5075cd
    if (f.zf) goto L_005075cd;
L_00507535:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00507537:  // jmp 0x5075cf
    goto L_005075cf;
L_0050753c:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0050753f:  // mov eax, dword ptr [eax + 0x164]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x164u)));
L_00507545:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00507547:  // je 0x507551
    if (f.zf) goto L_00507551;
L_00507549:  // mov eax, dword ptr [eax + 0x1a4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x1a4u)));
L_0050754f:  // jmp 0x507556
    goto L_00507556;
L_00507551:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00507556:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507557:  // mov eax, dword ptr [0x855040]
    eax = (uint32_t)(M32((uint32_t)(0x855040u)));
L_0050755c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050755e:  // lea esi, [ebp + ebx*8 + 0x14]
    esi = (uint32_t)((uint32_t)(ebp + ebx * 8u + 0x14u));
L_00507562:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00507565:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00507567:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00507568:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507569:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0050756b:  // mov eax, dword ptr [0x855044]
    eax = (uint32_t)(M32((uint32_t)(0x855044u)));
L_00507570:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00507575:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_00507578:  // mov eax, dword ptr [0x855048]
    eax = (uint32_t)(M32((uint32_t)(0x855048u)));
L_0050757d:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00507580:  // mov eax, dword ptr [0x85504c]
    eax = (uint32_t)(M32((uint32_t)(0x85504cu)));
L_00507585:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00507588:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050758du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050758d:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00507590:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00507592:  // je 0x50759e
    if (f.zf) goto L_0050759e;
L_00507594:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00507598:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00507599:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050759eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050759e:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_005075a1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005075a3:  // je 0x5075c0
    if (f.zf) goto L_005075c0;
L_005075a5:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_005075a8:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_005075ad:  // lea esi, [esp + 0x2dc]
    esi = (uint32_t)((uint32_t)(esp + 0x2dcu));
L_005075b4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005075b6:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_005075c0:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_005075c4:  // mov dword ptr [ebp + ebx*4 + 0x24], eax
    M32((uint32_t)(ebp + ebx * 4u + 0x24u)) = (uint32_t)(eax);
L_005075c8:  // jmp 0x507652
    goto L_00507652;
L_005075cd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005075cf:  // mov edx, dword ptr [0x855040]
    edx = (uint32_t)(M32((uint32_t)(0x855040u)));
L_005075d5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005075d7:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_005075da:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_005075dc:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_005075de:  // mov edx, dword ptr [0x855044]
    edx = (uint32_t)(M32((uint32_t)(0x855044u)));
L_005075e4:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_005075e7:  // mov edx, dword ptr [0x855048]
    edx = (uint32_t)(M32((uint32_t)(0x855048u)));
L_005075ed:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_005075f0:  // mov edx, dword ptr [0x85504c]
    edx = (uint32_t)(M32((uint32_t)(0x85504cu)));
L_005075f6:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_005075f9:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_005075fd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005075fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005075ff:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00507604:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507609u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507609:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050760d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050760f:  // je 0x50763e
    if (f.zf) goto L_0050763e;
L_00507611:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00507615:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00507616:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050761bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050761b:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050761f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00507621:  // je 0x50763e
    if (f.zf) goto L_0050763e;
L_00507623:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_00507626:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0050762b:  // lea esi, [esp + 0x2dc]
    esi = (uint32_t)((uint32_t)(esp + 0x2dcu));
L_00507632:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00507634:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_0050763e:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_00507642:  // mov dword ptr [esp + 0xa98], 0xffffffff
    M32((uint32_t)(esp + 0xa98u)) = (uint32_t)(0xffffffffu);
L_0050764d:  // call 0x4cb050
    t0 = 0x004cb050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507652u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507652:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00507656:  // mov eax, dword ptr [eax + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xb8u)));
L_0050765c:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0050765f:  // je 0x50767c
    if (f.zf) goto L_0050767c;
L_00507661:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00507665:  // mov edx, dword ptr [ecx + 0xbc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xbcu)));
L_0050766b:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_00507670:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00507671:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507672:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00507676:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507677:  // call 0x44a610
    t0 = 0x0044a610u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050767cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050767c:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00507680:  // cmp dword ptr [ebx], 0
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x0u, f);
L_00507683:  // je 0x507867
    if (f.zf) goto L_00507867;
L_00507689:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050768b:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_0050768d:  // call 0x4bf090
    t0 = 0x004bf090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507692u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507692:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00507694:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00507697:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00507699:  // je 0x507867
    if (f.zf) goto L_00507867;
L_0050769f:  // lea ecx, [esp + 0x6d4]
    ecx = (uint32_t)((uint32_t)(esp + 0x6d4u));
L_005076a6:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005076abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005076ab:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005076af:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005076b3:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_005076b7:  // mov dword ptr [esp + 0x6d8], ecx
    M32((uint32_t)(esp + 0x6d8u)) = (uint32_t)(ecx);
L_005076be:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_005076c2:  // mov dword ptr [esp + 0x6dc], edx
    M32((uint32_t)(esp + 0x6dcu)) = (uint32_t)(edx);
L_005076c9:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_005076cb:  // mov dword ptr [esp + 0x6e4], ecx
    M32((uint32_t)(esp + 0x6e4u)) = (uint32_t)(ecx);
L_005076d2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005076d3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005076d5:  // mov dword ptr [esp + 0x6e4], eax
    M32((uint32_t)(esp + 0x6e4u)) = (uint32_t)(eax);
L_005076dc:  // call 0x4df530
    t0 = 0x004df530u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005076e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005076e1:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_005076e3:  // lea ecx, [esp + 0x6d4]
    ecx = (uint32_t)((uint32_t)(esp + 0x6d4u));
L_005076ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005076eb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005076ed:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005076f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005076f0:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_005076f6:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005076fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005076fb:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00507701:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00507703:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507708u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507708:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0050770e:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00507710:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507715u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507715:  // and edi, 0x190
    t0 = llog<32>(edi & 0x190u, f);
    edi = (uint32_t)(t0);
L_0050771b:  // and ebx, 0x190
    t0 = llog<32>(ebx & 0x190u, f);
    ebx = (uint32_t)(t0);
L_00507721:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_00507725:  // and eax, 0x190
    t0 = llog<32>(eax & 0x190u, f);
    eax = (uint32_t)(t0);
L_0050772a:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0050772e:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_00507732:  // lea edx, [esp + 0x6a4]
    edx = (uint32_t)((uint32_t)(esp + 0x6a4u));
L_00507739:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050773a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050773c:  // fmul dword ptr [0x5dfca4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dfca4u)));
L_00507742:  // fsub dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8cb8u)));
L_00507748:  // fadd dword ptr [0x5d8578]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8578u)));
L_0050774e:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00507752:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00507756:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0050775a:  // fmul dword ptr [0x5dfca4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dfca4u)));
L_00507760:  // fsub dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8cb8u)));
L_00507766:  // fadd dword ptr [0x5d8578]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8578u)));
L_0050776c:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00507770:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00507774:  // fmul dword ptr [0x5dfca4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dfca4u)));
L_0050777a:  // fsub dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8cb8u)));
L_00507780:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_00507786:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0050778a:  // call 0x44a930
    t0 = 0x0044a930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050778fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050778f:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00507793:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00507796:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0050779a:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0050779d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050779f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005077a3:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_005077a5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005077a7:  // fstp dword ptr [esp + 0x128]
    F32((uint32_t)(esp + 0x128u)) = lf32(ST(0));
    lpop(x);
L_005077ae:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_005077b2:  // fmul dword ptr [eax + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x18u)));
L_005077b5:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_005077b9:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_005077bc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005077be:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005077c2:  // fmul dword ptr [eax + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x10u)));
L_005077c5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005077c7:  // fstp dword ptr [esp + 0x12c]
    F32((uint32_t)(esp + 0x12cu)) = lf32(ST(0));
    lpop(x);
L_005077ce:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_005077d2:  // fmul dword ptr [eax + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x28u)));
L_005077d5:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_005077d9:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_005077dc:  // mov ecx, dword ptr [esp + 0x12c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x12cu)));
L_005077e3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005077e5:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005077e9:  // fmul dword ptr [eax + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x20u)));
L_005077ec:  // mov eax, dword ptr [esp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x128u)));
L_005077f3:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_005077f7:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005077fa:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_005077fe:  // mov eax, dword ptr [esp + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x134u)));
L_00507805:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507807:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0050780b:  // lea eax, [esp + 0x1b8]
    eax = (uint32_t)((uint32_t)(esp + 0x1b8u));
L_00507812:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507813:  // fstp dword ptr [esp + 0x134]
    F32((uint32_t)(esp + 0x134u)) = lf32(ST(0));
    lpop(x);
L_0050781a:  // mov edx, dword ptr [esp + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x134u)));
L_00507821:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_00507825:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00507827:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050782au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050782a:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0050782e:  // fadd dword ptr [esp + 0x1b8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1b8u)));
L_00507835:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00507837:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0050783b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050783c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050783e:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00507842:  // fld dword ptr [esp + 0x1c0]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1c0u)));
L_00507849:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_0050784d:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00507851:  // fld dword ptr [esp + 0x1c4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1c4u)));
L_00507858:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0050785c:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00507860:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507863u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507863:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00507867:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0050786a:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_0050786e:  // je 0x507876
    if (f.zf) goto L_00507876;
L_00507870:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00507871:  // call 0x40c340
    t0 = 0x0040c340u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507876u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507876:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_0050787b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050787d:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00507881:  // mov ecx, dword ptr [ebx + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x48u)));
L_00507884:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00507885:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00507887:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_0050788b:  // jl 0x506aaa
    if ((f.sf != f.of)) goto L_00506aaa;
L_00507891:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00507893:  // mov ecx, dword ptr [esp + 0xa90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa90u)));
L_0050789a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050789b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050789c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0050789d:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005078a4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005078a5:  // add esp, 0xa8c
    t0 = ladd<32>(esp, 0xa8cu, f);
    esp = (uint32_t)(t0);
L_005078ab:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005069f0, 005069f0)
