// lifted from 0049cc40 (FUN_0049cc40, 1599 bytes, 471 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0049cc40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0049cc40;
L_0049cc40:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0049cc46:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0049cc48:  // push 0x5d33ab
    t0 = 0x5d33abu; esp -= 4; M32(esp) = t0;
L_0049cc4d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049cc4e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0049cc55:  // sub esp, 0x168
    t0 = lsub<32>(esp, 0x168u, f);
    esp = (uint32_t)(t0);
L_0049cc5b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049cc5c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cc5d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049cc5e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049cc5f:  // mov edi, dword ptr [esp + 0x188]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x188u)));
L_0049cc66:  // push 0x44
    t0 = 0x44u; esp -= 4; M32(esp) = t0;
L_0049cc68:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0049cc6a:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cc6f:  // mov ebx, dword ptr [edi + 0x15c]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cc75:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049cc77:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0049cc79:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cc7e:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049cc81:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049cc82:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cc87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cc87:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0049cc89:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049cc8b:  // je 0x49cc94
    if (f.zf) goto L_0049cc94;
L_0049cc8d:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cc8e:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0049cc92:  // jmp 0x49cc96
    goto L_0049cc96;
L_0049cc94:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049cc96:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_0049cc99:  // mov ebx, dword ptr [edi + 0x15c]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cc9f:  // push 0x45
    t0 = 0x45u; esp -= 4; M32(esp) = t0;
L_0049cca1:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cca6:  // lea ecx, [ebx + ebx*2]
    ecx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_0049cca9:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049ccab:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049ccae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ccaf:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049ccb4:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ccb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ccb9:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0049ccbd:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049ccbf:  // mov dword ptr [esp + 0x180], ebp
    M32((uint32_t)(esp + 0x180u)) = (uint32_t)(ebp);
L_0049ccc6:  // je 0x49cced
    if (f.zf) goto L_0049cced;
L_0049ccc8:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049ccc9:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0049cccb:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0049cccd:  // jl 0x49cce9
    if ((f.sf != f.of)) goto L_0049cce9;
L_0049cccf:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049ccd0:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0049ccd5:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0049ccd7:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0049ccd9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049ccda:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ccdfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ccdf:  // add ebp, 0x30
    t0 = ladd<32>(ebp, 0x30u, f);
    ebp = (uint32_t)(t0);
L_0049cce2:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cce3:  // jne 0x49ccd0
    if (!f.zf) goto L_0049ccd0;
L_0049cce5:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0049cce9:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0049cceb:  // jmp 0x49ccef
    goto L_0049ccef;
L_0049cced:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049ccef:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_0049ccf2:  // mov eax, dword ptr [edi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049ccf8:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_0049ccfa:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049ccff:  // lea edx, [eax*4]
    edx = (uint32_t)((uint32_t)(eax * 4u));
L_0049cd06:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049cd08:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049cd09:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cd0e:  // mov dword ptr [esp + 0x190], 0xffffffff
    M32((uint32_t)(esp + 0x190u)) = (uint32_t)(0xffffffffu);
L_0049cd19:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cd1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cd1e:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_0049cd21:  // mov ebx, dword ptr [edi + 0x15c]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cd27:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0049cd29:  // push 0x48
    t0 = 0x48u; esp -= 4; M32(esp) = t0;
L_0049cd2b:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cd30:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049cd32:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049cd35:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049cd36:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cd3b:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cd40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cd40:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049cd42:  // je 0x49cd4b
    if (f.zf) goto L_0049cd4b;
L_0049cd44:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cd45:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0049cd49:  // jmp 0x49cd4d
    goto L_0049cd4d;
L_0049cd4b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049cd4d:  // mov dword ptr [esi + 0x1c], eax
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(eax);
L_0049cd50:  // mov ebx, dword ptr [edi + 0x15c]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cd56:  // push 0x49
    t0 = 0x49u; esp -= 4; M32(esp) = t0;
L_0049cd58:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cd5d:  // lea ecx, [ebx + ebx*2]
    ecx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_0049cd60:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049cd62:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049cd65:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049cd66:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cd6b:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cd70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cd70:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0049cd74:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049cd76:  // mov dword ptr [esp + 0x180], 1
    M32((uint32_t)(esp + 0x180u)) = (uint32_t)(0x1u);
L_0049cd81:  // je 0x49cda8
    if (f.zf) goto L_0049cda8;
L_0049cd83:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cd84:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0049cd86:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0049cd88:  // jl 0x49cda4
    if ((f.sf != f.of)) goto L_0049cda4;
L_0049cd8a:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cd8b:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0049cd90:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0049cd92:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0049cd94:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cd95:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cd9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cd9a:  // add ebp, 0x30
    t0 = ladd<32>(ebp, 0x30u, f);
    ebp = (uint32_t)(t0);
L_0049cd9d:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cd9e:  // jne 0x49cd8b
    if (!f.zf) goto L_0049cd8b;
L_0049cda0:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0049cda4:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0049cda6:  // jmp 0x49cdaa
    goto L_0049cdaa;
L_0049cda8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049cdaa:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_0049cdad:  // mov eax, dword ptr [edi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cdb3:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_0049cdb5:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cdba:  // lea edx, [eax*4]
    edx = (uint32_t)((uint32_t)(eax * 4u));
L_0049cdc1:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049cdc3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049cdc4:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cdc9:  // mov dword ptr [esp + 0x190], 0xffffffff
    M32((uint32_t)(esp + 0x190u)) = (uint32_t)(0xffffffffu);
L_0049cdd4:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cdd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cdd9:  // mov dword ptr [esi + 0x20], eax
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(eax);
L_0049cddc:  // mov ecx, dword ptr [edi + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cde2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049cde4:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_0049cde6:  // jle 0x49ce3c
    if ((f.zf || f.sf != f.of)) goto L_0049ce3c;
L_0049cde8:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0049cdec:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0049cdf0:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0049cdf4:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0049cdf8:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0049cdfa:  // mov ebx, dword ptr [esi + 0x14]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049cdfd:  // mov dword ptr [ebx + eax*4], 0xbf800000
    M32((uint32_t)(ebx + eax * 4u)) = (uint32_t)(0xbf800000u);
L_0049ce04:  // mov ebx, dword ptr [esi + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049ce07:  // mov dword ptr [ebx + eax*4], 0xbf800000
    M32((uint32_t)(ebx + eax * 4u)) = (uint32_t)(0xbf800000u);
L_0049ce0e:  // mov ebp, dword ptr [esi + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0049ce11:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0049ce13:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0049ce16:  // add ebx, ebp
    t0 = ladd<32>(ebx, ebp, f);
    ebx = (uint32_t)(t0);
L_0049ce18:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0049ce1c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049ce1d:  // mov dword ptr [ebx], ebp
    M32((uint32_t)(ebx)) = (uint32_t)(ebp);
L_0049ce1f:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0049ce23:  // mov dword ptr [ebx + 4], ebp
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(ebp);
L_0049ce26:  // mov ebp, dword ptr [esp + 0x30]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0049ce2a:  // mov dword ptr [ebx + 8], ebp
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ebp);
L_0049ce2d:  // mov dword ptr [ebx + 0xc], edx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(edx);
L_0049ce30:  // mov ebx, dword ptr [edi + 0x15c]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049ce36:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0049ce38:  // jl 0x49cdfa
    if ((f.sf != f.of)) goto L_0049cdfa;
L_0049ce3a:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0049ce3c:  // mov dword ptr [esi + 0xa4], ebp
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(ebp);
L_0049ce42:  // mov dword ptr [esi + 0xa0], ebp
    M32((uint32_t)(esi + 0xa0u)) = (uint32_t)(ebp);
L_0049ce48:  // mov dword ptr [esi + 0xa8], ebp
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(ebp);
L_0049ce4e:  // mov dword ptr [esi + 0xac], ebp
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(ebp);
L_0049ce54:  // mov dword ptr [esi + 0xb0], ebp
    M32((uint32_t)(esi + 0xb0u)) = (uint32_t)(ebp);
L_0049ce5a:  // mov dword ptr [esi + 0xe8], ebp
    M32((uint32_t)(esi + 0xe8u)) = (uint32_t)(ebp);
L_0049ce60:  // mov eax, dword ptr [edi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049ce66:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0049ce68:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049ce6a:  // jle 0x49cec0
    if ((f.zf || f.sf != f.of)) goto L_0049cec0;
L_0049ce6c:  // mov eax, dword ptr [edi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049ce72:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0049ce74:  // push 0x62e064
    t0 = 0x62e064u; esp -= 4; M32(esp) = t0;
L_0049ce79:  // mov eax, dword ptr [eax + ebx*4]
    eax = (uint32_t)(M32((uint32_t)(eax + ebx * 4u)));
L_0049ce7c:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_0049ce81:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ce82:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ce87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ce87:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0049ce8a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049ce8c:  // jne 0x49ceb5
    if (!f.zf) goto L_0049ceb5;
L_0049ce8e:  // mov ecx, dword ptr [edi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049ce94:  // mov eax, dword ptr [ecx + ebx*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_0049ce97:  // add eax, 0xe0
    t0 = ladd<32>(eax, 0xe0u, f);
    eax = (uint32_t)(t0);
L_0049ce9c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ce9d:  // call 0x55e2a6
    t0 = 0x0055e2a6u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cea2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cea2:  // mov ecx, dword ptr [esi + 0xe8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049cea8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0049ceab:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0049cead:  // jle 0x49ceb5
    if ((f.zf || f.sf != f.of)) goto L_0049ceb5;
L_0049ceaf:  // mov dword ptr [esi + 0xe8], eax
    M32((uint32_t)(esi + 0xe8u)) = (uint32_t)(eax);
L_0049ceb5:  // mov eax, dword ptr [edi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cebb:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cebc:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_0049cebe:  // jl 0x49ce6c
    if ((f.sf != f.of)) goto L_0049ce6c;
L_0049cec0:  // mov edx, dword ptr [esi + 0xe8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049cec6:  // lea eax, [esp + 0x78]
    eax = (uint32_t)((uint32_t)(esp + 0x78u));
L_0049ceca:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049cecb:  // push 0x62e048
    t0 = 0x62e048u; esp -= 4; M32(esp) = t0;
L_0049ced0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ced1:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ced6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ced6:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0049ced9:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_0049cedd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049cede:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cee3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cee3:  // mov ebx, dword ptr [esi + 0xe8]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049cee9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0049ceec:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_0049ceee:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cef3:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_0049cef5:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cefa:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049cefd:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049ceff:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049cf00:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cf05u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cf05:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049cf07:  // je 0x49cf10
    if (f.zf) goto L_0049cf10;
L_0049cf09:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cf0a:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0049cf0e:  // jmp 0x49cf12
    goto L_0049cf12;
L_0049cf10:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049cf12:  // mov ebx, dword ptr [esi + 0xe8]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049cf18:  // mov dword ptr [esi + 0xdc], eax
    M32((uint32_t)(esi + 0xdcu)) = (uint32_t)(eax);
L_0049cf1e:  // push 0x6d
    t0 = 0x6du; esp -= 4; M32(esp) = t0;
L_0049cf20:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cf25:  // lea eax, [ebx + ebx*2]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_0049cf28:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049cf2a:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049cf2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049cf2e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cf33:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cf38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cf38:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0049cf3c:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049cf3e:  // mov dword ptr [esp + 0x180], 2
    M32((uint32_t)(esp + 0x180u)) = (uint32_t)(0x2u);
L_0049cf49:  // je 0x49cf70
    if (f.zf) goto L_0049cf70;
L_0049cf4b:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cf4c:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0049cf4e:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0049cf50:  // jl 0x49cf6c
    if ((f.sf != f.of)) goto L_0049cf6c;
L_0049cf52:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cf53:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0049cf58:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0049cf5a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0049cf5c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cf5d:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cf62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cf62:  // add ebp, 0x30
    t0 = ladd<32>(ebp, 0x30u, f);
    ebp = (uint32_t)(t0);
L_0049cf65:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049cf66:  // jne 0x49cf53
    if (!f.zf) goto L_0049cf53;
L_0049cf68:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0049cf6c:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0049cf6e:  // jmp 0x49cf72
    goto L_0049cf72;
L_0049cf70:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049cf72:  // mov dword ptr [esi + 0xe0], eax
    M32((uint32_t)(esi + 0xe0u)) = (uint32_t)(eax);
L_0049cf78:  // mov eax, dword ptr [esi + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049cf7e:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_0049cf80:  // push 0x62e06c
    t0 = 0x62e06cu; esp -= 4; M32(esp) = t0;
L_0049cf85:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0049cf88:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0049cf8a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049cf8b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049cf90:  // mov dword ptr [esp + 0x190], 0xffffffff
    M32((uint32_t)(esp + 0x190u)) = (uint32_t)(0xffffffffu);
L_0049cf9b:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cfa0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cfa0:  // mov dword ptr [esi + 0xe4], eax
    M32((uint32_t)(esi + 0xe4u)) = (uint32_t)(eax);
L_0049cfa6:  // mov eax, dword ptr [edi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049cfac:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0049cfae:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0049cfb2:  // jle 0x49d253
    if ((f.zf || f.sf != f.of)) goto L_0049d253;
L_0049cfb8:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0049cfba:  // jmp 0x49cfbe
    goto L_0049cfbe;
L_0049cfbc:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0049cfbe:  // mov ecx, dword ptr [edi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049cfc4:  // push 0x62e040
    t0 = 0x62e040u; esp -= 4; M32(esp) = t0;
L_0049cfc9:  // mov eax, dword ptr [ecx + ebx]
    eax = (uint32_t)(M32((uint32_t)(ecx + ebx)));
L_0049cfcc:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_0049cfd1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049cfd2:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049cfd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049cfd7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049cfda:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049cfdc:  // jne 0x49d02e
    if (!f.zf) goto L_0049d02e;
L_0049cfde:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049cfe1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cfe2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cfe3:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0049cfe7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cfe8:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_0049cfec:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049cfed:  // mov edx, dword ptr [edi + 0x160]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049cff3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049cff4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049cff5:  // mov ecx, dword ptr [edx + ebx]
    ecx = (uint32_t)(M32((uint32_t)(edx + ebx)));
L_0049cff8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cff9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cffa:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049cffb:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d000u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d000:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049d004:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049d008:  // lea eax, [esi + 0x30]
    eax = (uint32_t)((uint32_t)(esi + 0x30u));
L_0049d00b:  // mov dword ptr [esi + 0x30], ecx
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(ecx);
L_0049d00e:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049d012:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0049d015:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049d019:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0049d01c:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0049d01f:  // mov eax, dword ptr [edi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d025:  // mov ecx, dword ptr [eax + ebx]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebx)));
L_0049d028:  // mov dword ptr [esi + 0xa4], ecx
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(ecx);
L_0049d02e:  // mov edx, dword ptr [edi + 0x160]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d034:  // push 0x62e038
    t0 = 0x62e038u; esp -= 4; M32(esp) = t0;
L_0049d039:  // mov eax, dword ptr [edx + ebx]
    eax = (uint32_t)(M32((uint32_t)(edx + ebx)));
L_0049d03c:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_0049d041:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d042:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d047u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d047:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d04a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d04c:  // jne 0x49d05d
    if (!f.zf) goto L_0049d05d;
L_0049d04e:  // mov eax, dword ptr [edi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d054:  // mov ecx, dword ptr [eax + ebx]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebx)));
L_0049d057:  // mov dword ptr [esi + 0xa0], ecx
    M32((uint32_t)(esi + 0xa0u)) = (uint32_t)(ecx);
L_0049d05d:  // mov edx, dword ptr [edi + 0x160]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d063:  // push 0x62e02c
    t0 = 0x62e02cu; esp -= 4; M32(esp) = t0;
L_0049d068:  // mov eax, dword ptr [edx + ebx]
    eax = (uint32_t)(M32((uint32_t)(edx + ebx)));
L_0049d06b:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_0049d070:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d071:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d076u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d076:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d079:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d07b:  // jne 0x49d113
    if (!f.zf) goto L_0049d113;
L_0049d081:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049d084:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d085:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d086:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0049d08a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d08b:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_0049d08f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d090:  // mov eax, dword ptr [edi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d096:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d097:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049d098:  // mov ecx, dword ptr [eax + ebx]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebx)));
L_0049d09b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d09c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d09d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d09e:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d0a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d0a3:  // mov ecx, dword ptr [edi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d0a9:  // lea eax, [esi + 0xb4]
    eax = (uint32_t)((uint32_t)(esi + 0xb4u));
L_0049d0af:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0049d0b3:  // mov edx, dword ptr [ecx + ebx]
    edx = (uint32_t)(M32((uint32_t)(ecx + ebx)));
L_0049d0b6:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049d0ba:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d0bd:  // mov dword ptr [esi + 0xb0], edx
    M32((uint32_t)(esi + 0xb0u)) = (uint32_t)(edx);
L_0049d0c3:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049d0c7:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0049d0c9:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0049d0cc:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0049d0d0:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0049d0d4:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d0d7:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0049d0da:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0049d0de:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0049d0e1:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0049d0e5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0049d0e8:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d0eb:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0049d0ee:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0049d0f1:  // lea eax, [esp + 0x90]
    eax = (uint32_t)((uint32_t)(esp + 0x90u));
L_0049d0f8:  // push 0x62e018
    t0 = 0x62e018u; esp -= 4; M32(esp) = t0;
L_0049d0fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d0fe:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d103u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d103:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0049d106:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_0049d10a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d10b:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d110u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d110:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0049d113:  // mov edx, dword ptr [edi + 0x160]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d119:  // push 0x62e00c
    t0 = 0x62e00cu; esp -= 4; M32(esp) = t0;
L_0049d11e:  // mov eax, dword ptr [edx + ebx]
    eax = (uint32_t)(M32((uint32_t)(edx + ebx)));
L_0049d121:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_0049d126:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d127:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d12cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d12c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d12f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d131:  // jne 0x49d189
    if (!f.zf) goto L_0049d189;
L_0049d133:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049d136:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d137:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d138:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0049d13c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d13d:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_0049d141:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d142:  // mov eax, dword ptr [edi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d148:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d149:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049d14a:  // mov ecx, dword ptr [eax + ebx]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebx)));
L_0049d14d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d14e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d14f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d150:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d155u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d155:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049d159:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049d15d:  // lea ecx, [esi + 0x80]
    ecx = (uint32_t)((uint32_t)(esi + 0x80u));
L_0049d163:  // mov dword ptr [esi + 0x80], edx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(edx);
L_0049d169:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049d16d:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0049d170:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049d174:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0049d177:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0049d17a:  // mov ecx, dword ptr [edi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d180:  // mov edx, dword ptr [ecx + ebx]
    edx = (uint32_t)(M32((uint32_t)(ecx + ebx)));
L_0049d183:  // mov dword ptr [esi + 0xac], edx
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(edx);
L_0049d189:  // mov eax, dword ptr [edi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d18f:  // push 0x62e004
    t0 = 0x62e004u; esp -= 4; M32(esp) = t0;
L_0049d194:  // mov eax, dword ptr [eax + ebx]
    eax = (uint32_t)(M32((uint32_t)(eax + ebx)));
L_0049d197:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_0049d19c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d19d:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d1a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d1a2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d1a5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d1a7:  // jne 0x49d1b8
    if (!f.zf) goto L_0049d1b8;
L_0049d1a9:  // mov ecx, dword ptr [edi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d1af:  // mov edx, dword ptr [ecx + ebx]
    edx = (uint32_t)(M32((uint32_t)(ecx + ebx)));
L_0049d1b2:  // mov dword ptr [esi + 0xa8], edx
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(edx);
L_0049d1b8:  // mov eax, dword ptr [esi + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049d1be:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d1c0:  // jle 0x49d22d
    if ((f.zf || f.sf != f.of)) goto L_0049d22d;
L_0049d1c2:  // lea eax, [ebp + 1]
    eax = (uint32_t)((uint32_t)(ebp + 0x1u));
L_0049d1c5:  // cmp ebp, 9
    t0 = lsub<32>(ebp, 0x9u, f);
L_0049d1c8:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0049d1cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d1cd:  // jge 0x49d1db
    if ((f.sf == f.of)) goto L_0049d1db;
L_0049d1cf:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0049d1d3:  // push 0x62dffc
    t0 = 0x62dffcu; esp -= 4; M32(esp) = t0;
L_0049d1d8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d1d9:  // jmp 0x49d1e5
    goto L_0049d1e5;
L_0049d1db:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0049d1df:  // push 0x62dff4
    t0 = 0x62dff4u; esp -= 4; M32(esp) = t0;
L_0049d1e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d1e5:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d1eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d1ea:  // mov edx, dword ptr [edi + 0x160]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d1f0:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0049d1f3:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0049d1f7:  // mov eax, dword ptr [edx + ebx]
    eax = (uint32_t)(M32((uint32_t)(edx + ebx)));
L_0049d1fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d1fb:  // add eax, 0xdc
    t0 = ladd<32>(eax, 0xdcu, f);
    eax = (uint32_t)(t0);
L_0049d200:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d201:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d206u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d206:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d209:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d20b:  // jne 0x49d21f
    if (!f.zf) goto L_0049d21f;
L_0049d20d:  // mov edx, dword ptr [edi + 0x160]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_0049d213:  // mov eax, dword ptr [esi + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xe4u)));
L_0049d219:  // mov ecx, dword ptr [edx + ebx]
    ecx = (uint32_t)(M32((uint32_t)(edx + ebx)));
L_0049d21c:  // mov dword ptr [eax + ebp*4], ecx
    M32((uint32_t)(eax + ebp * 4u)) = (uint32_t)(ecx);
L_0049d21f:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0049d223:  // mov eax, dword ptr [esi + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049d229:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_0049d22b:  // jl 0x49d1c2
    if ((f.sf != f.of)) goto L_0049d1c2;
L_0049d22d:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0049d231:  // mov ecx, dword ptr [edi + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_0049d237:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049d238:  // add ebx, 4
    t0 = ladd<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_0049d23b:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0049d23d:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0049d241:  // jl 0x49cfbc
    if ((f.sf != f.of)) goto L_0049cfbc;
L_0049d247:  // mov edx, dword ptr [esi + 0xe8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049d24d:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0049d251:  // jmp 0x49d25d
    goto L_0049d25d;
L_0049d253:  // mov eax, dword ptr [esi + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xe8u)));
L_0049d259:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0049d25d:  // mov ecx, dword ptr [esp + 0x178]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x178u)));
L_0049d264:  // mov dword ptr [esi + 0x2c], 1
    M32((uint32_t)(esi + 0x2cu)) = (uint32_t)(0x1u);
L_0049d26b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0049d26c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0049d26d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049d26e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049d26f:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0049d276:  // add esp, 0x174
    t0 = ladd<32>(esp, 0x174u, f);
    esp = (uint32_t)(t0);
L_0049d27c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0049cc40, 0049cc40)
