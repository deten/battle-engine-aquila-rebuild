// lifted from 00544cc0 (vslot1, 489 bytes, 162 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00544cc0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00544cc0;
L_00544cc0:  // mov eax, dword ptr [0x82b4a4]
    eax = (uint32_t)(M32((uint32_t)(0x82b4a4u)));
L_00544cc5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00544cc6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00544cc7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00544cc8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544cca:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00544ccc:  // je 0x544ea3
    if (f.zf) goto L_00544ea3;
L_00544cd2:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00544cd7:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544cdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544cdc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544cde:  // jne 0x544ea3
    if (!f.zf) goto L_00544ea3;
L_00544ce4:  // mov eax, dword ptr [0x9c648c]
    eax = (uint32_t)(M32((uint32_t)(0x9c648cu)));
L_00544ce9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544ceb:  // je 0x544ea3
    if (f.zf) goto L_00544ea3;
L_00544cf1:  // cmp dword ptr [0x888b20], 0xffff0200
    t0 = lsub<32>(M32((uint32_t)(0x888b20u)), 0xffff0200u, f);
L_00544cfb:  // jb 0x544ea3
    if (f.cf) goto L_00544ea3;
L_00544d01:  // lea eax, [esi + 0x1c]
    eax = (uint32_t)((uint32_t)(esi + 0x1cu));
L_00544d04:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00544d09:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544d0a:  // push 0x650e6c
    t0 = 0x650e6cu; esp -= 4; M32(esp) = t0;
L_00544d0f:  // call 0x513f20
    t0 = 0x00513f20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544d14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544d14:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544d16:  // jl 0x544ea3
    if ((f.sf != f.of)) goto L_00544ea3;
L_00544d1c:  // lea ecx, [esi + 0x14]
    ecx = (uint32_t)((uint32_t)(esi + 0x14u));
L_00544d1f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00544d20:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544d22:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00544d24:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544d26:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544d28:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_00544d2d:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_00544d32:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00544d37:  // call 0x513a10
    t0 = 0x00513a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544d3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544d3c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544d3e:  // jge 0x544d59
    if ((f.sf == f.of)) goto L_00544d59;
L_00544d40:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544d41:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544d46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544d46:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544d47:  // push 0x650e40
    t0 = 0x650e40u; esp -= 4; M32(esp) = t0;
L_00544d4c:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00544d51:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544d56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544d56:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00544d59:  // mov eax, dword ptr [0x8aa9ac]
    eax = (uint32_t)(M32((uint32_t)(0x8aa9acu)));
L_00544d5e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544d60:  // je 0x544e22
    if (f.zf) goto L_00544e22;
L_00544d66:  // mov eax, dword ptr [0x8aa97c]
    eax = (uint32_t)(M32((uint32_t)(0x8aa97cu)));
L_00544d6b:  // lea edx, [esi + 8]
    edx = (uint32_t)((uint32_t)(esi + 0x8u));
L_00544d6e:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_00544d70:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00544d72:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00544d73:  // and al, 0xfe
    t0 = llog<8>((eax & 0xffu) & 0xfeu, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00544d75:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544d77:  // add eax, 0x74
    t0 = ladd<32>(eax, 0x74u, f);
    eax = (uint32_t)(t0);
L_00544d7a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00544d7f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544d80:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544d82:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544d84:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_00544d89:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_00544d8e:  // call 0x513a10
    t0 = 0x00513a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544d93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544d93:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544d95:  // jge 0x544db0
    if ((f.sf == f.of)) goto L_00544db0;
L_00544d97:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544d98:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544d9du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544d9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544d9e:  // push 0x650e1c
    t0 = 0x650e1cu; esp -= 4; M32(esp) = t0;
L_00544da3:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00544da8:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544dadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544dad:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00544db0:  // mov eax, dword ptr [0x8aa9bc]
    eax = (uint32_t)(M32((uint32_t)(0x8aa9bcu)));
L_00544db5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544db7:  // je 0x544df3
    if (f.zf) goto L_00544df3;
L_00544db9:  // lea ebx, [esi + 0x10]
    ebx = (uint32_t)((uint32_t)(esi + 0x10u));
L_00544dbc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00544dc1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00544dc2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544dc4:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_00544dc6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00544dc8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544dca:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_00544dcf:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_00544dd4:  // call 0x513a10
    t0 = 0x00513a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544dd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544dd9:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00544ddb:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00544ddd:  // jl 0x544e8a
    if ((f.sf != f.of)) goto L_00544e8a;
L_00544de3:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_00544de5:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_00544de8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00544de9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544deb:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00544ded:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00544dee:  // call dword ptr [eax + 0x48]
    t0 = M32((uint32_t)(eax + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544df1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544df1:  // jmp 0x544e18
    goto L_00544e18;
L_00544df3:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00544df8:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_00544dfb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544dfd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00544dfe:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00544e00:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544e02:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544e04:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544e06:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_00544e08:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_00544e0d:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_00544e12:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544e13:  // call dword ptr [ecx + 0x74]
    t0 = M32((uint32_t)(ecx + 0x74u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544e16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544e16:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00544e18:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00544e1a:  // jge 0x544ea3
    if ((f.sf == f.of)) goto L_00544ea3;
L_00544e20:  // jmp 0x544e8a
    goto L_00544e8a;
L_00544e22:  // mov eax, dword ptr [0x8aa9bc]
    eax = (uint32_t)(M32((uint32_t)(0x8aa9bcu)));
L_00544e27:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00544e29:  // je 0x544e61
    if (f.zf) goto L_00544e61;
L_00544e2b:  // lea ebx, [esi + 0x10]
    ebx = (uint32_t)((uint32_t)(esi + 0x10u));
L_00544e2e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00544e33:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00544e34:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544e36:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_00544e38:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00544e3a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544e3c:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_00544e41:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_00544e46:  // call 0x513a10
    t0 = 0x00513a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544e4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544e4b:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00544e4d:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00544e4f:  // jl 0x544e8a
    if ((f.sf != f.of)) goto L_00544e8a;
L_00544e51:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_00544e53:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_00544e56:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00544e57:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544e59:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00544e5b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00544e5c:  // call dword ptr [edx + 0x48]
    t0 = M32((uint32_t)(edx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544e5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544e5f:  // jmp 0x544e86
    goto L_00544e86;
L_00544e61:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00544e66:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_00544e69:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544e6b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00544e6c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00544e6e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00544e70:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544e72:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00544e74:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_00544e76:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_00544e7b:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_00544e80:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544e81:  // call dword ptr [ecx + 0x74]
    t0 = M32((uint32_t)(ecx + 0x74u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544e84u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544e84:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00544e86:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00544e88:  // jge 0x544ea3
    if ((f.sf == f.of)) goto L_00544ea3;
L_00544e8a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00544e8b:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544e90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544e90:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544e91:  // push 0x650dfc
    t0 = 0x650dfcu; esp -= 4; M32(esp) = t0;
L_00544e96:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00544e9b:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00544ea0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00544ea0:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00544ea3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00544ea4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00544ea5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00544ea7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00544ea8:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00544cc0, 00544cc0)
