// lifted from 0050b9c0 (FUN_0050b9c0, 6898 bytes, 2023 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050b9c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050b9c0;
L_0050b9c0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0050b9c2:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0050b9c8:  // push 0x5d5c95
    t0 = 0x5d5c95u; esp -= 4; M32(esp) = t0;
L_0050b9cd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b9ce:  // mov eax, 0x38cc
    eax = (uint32_t)(0x38ccu);
L_0050b9d3:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0050b9da:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b9dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b9df:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050b9e0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050b9e1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050b9e2:  // mov esi, dword ptr [esp + 0x38f0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050b9e9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050b9ea:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050b9ec:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0050b9ee:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050b9f1:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_0050b9f6:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_0050b9f8:  // mov dword ptr [esp + 0x4c], ebx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ebx);
L_0050b9fc:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_0050ba00:  // mov dword ptr [esp + 0x94], edx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edx);
L_0050ba07:  // mov dword ptr [esp + 0x9c], edx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edx);
L_0050ba0e:  // mov dword ptr [esp + 0x64], 0x3f000000
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x3f000000u);
L_0050ba16:  // mov dword ptr [esp + 0x98], 0x3f000000
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(0x3f000000u);
L_0050ba21:  // mov dword ptr [esp + 0x88], edi
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edi);
L_0050ba28:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_0050ba2c:  // je 0x50ba7f
    if (f.zf) goto L_0050ba7f;
L_0050ba2e:  // mov ecx, dword ptr [0x67a748]
    ecx = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0050ba34:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0050ba36:  // je 0x50ba44
    if (f.zf) goto L_0050ba44;
L_0050ba38:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050ba3a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050ba3b:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ba3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ba3e:  // mov dword ptr [0x67a748], edi
    M32((uint32_t)(0x67a748u)) = (uint32_t)(edi);
L_0050ba44:  // mov eax, dword ptr [0x67a07c]
    eax = (uint32_t)(M32((uint32_t)(0x67a07cu)));
L_0050ba49:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0050ba4b:  // je 0x50ba5e
    if (f.zf) goto L_0050ba5e;
L_0050ba4d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050ba4e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050ba53:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ba58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ba58:  // mov dword ptr [0x67a07c], edi
    M32((uint32_t)(0x67a07cu)) = (uint32_t)(edi);
L_0050ba5e:  // mov eax, dword ptr [0x67a078]
    eax = (uint32_t)(M32((uint32_t)(0x67a078u)));
L_0050ba63:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0050ba65:  // je 0x50ba78
    if (f.zf) goto L_0050ba78;
L_0050ba67:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050ba68:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050ba6d:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ba72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ba72:  // mov dword ptr [0x67a078], edi
    M32((uint32_t)(0x67a078u)) = (uint32_t)(edi);
L_0050ba78:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050ba7a:  // call 0x50d580
    t0 = 0x0050d580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ba7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ba7f:  // mov ecx, 0x3e8
    ecx = (uint32_t)(0x3e8u);
L_0050ba84:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050ba87:  // lea edi, [esp + 0x293c]
    edi = (uint32_t)((uint32_t)(esp + 0x293cu));
L_0050ba8e:  // mov ebp, dword ptr [esp + 0x38ec]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x38ecu)));
L_0050ba95:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0050ba97:  // mov ecx, 0x3e8
    ecx = (uint32_t)(0x3e8u);
L_0050ba9c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050ba9e:  // lea edi, [esp + 0x199c]
    edi = (uint32_t)((uint32_t)(esp + 0x199cu));
L_0050baa5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0050baa7:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0050baa9:  // mov ecx, 0x3e8
    ecx = (uint32_t)(0x3e8u);
L_0050baae:  // lea edi, [esp + 0xa00]
    edi = (uint32_t)((uint32_t)(esp + 0xa00u));
L_0050bab5:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0050bab7:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0050babb:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0050babf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050bac0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bac2:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bac7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bac7:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050bacb:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_0050bad0:  // cmp eax, 0x2b
    t0 = lsub<32>(eax, 0x2bu, f);
L_0050bad3:  // jl 0x50d495
    if ((f.sf != f.of)) goto L_0050d495;
L_0050bad9:  // cmp eax, 0x32
    t0 = lsub<32>(eax, 0x32u, f);
L_0050badc:  // jg 0x50d495
    if ((!f.zf && f.sf == f.of)) goto L_0050d495;
L_0050bae2:  // mov edi, dword ptr [esp + 0x38f0]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050bae9:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050baeb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050baec:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050baed:  // call 0x50d4c0
    t0 = 0x0050d4c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050baf2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050baf2:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050baf4:  // je 0x50bbca
    if (f.zf) goto L_0050bbca;
L_0050bafa:  // mov eax, dword ptr [0x67a748]
    eax = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0050baff:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bb01:  // jne 0x50bb78
    if (!f.zf) goto L_0050bb78;
L_0050bb03:  // push 0x2f5
    t0 = 0x2f5u; esp -= 4; M32(esp) = t0;
L_0050bb08:  // push 0x63d2ac
    t0 = 0x63d2acu; esp -= 4; M32(esp) = t0;
L_0050bb0d:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_0050bb0f:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_0050bb11:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050bb16:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bb1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bb1b:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050bb1d:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_0050bb21:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050bb23:  // mov dword ptr [esp + 0x38e4], 0
    M32((uint32_t)(esp + 0x38e4u)) = (uint32_t)(0x0u);
L_0050bb2e:  // je 0x50bb65
    if (f.zf) goto L_0050bb65;
L_0050bb30:  // mov dword ptr [esi + 4], 0
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x0u);
L_0050bb37:  // mov dword ptr [esi], 0x5d92d4
    M32((uint32_t)(esi)) = (uint32_t)(0x5d92d4u);
L_0050bb3d:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_0050bb40:  // mov byte ptr [esp + 0x38e4], 1
    M8((uint32_t)(esp + 0x38e4u)) = (uint8_t)(0x1u);
L_0050bb48:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bb4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bb4d:  // lea ecx, [esi + 0x18]
    ecx = (uint32_t)((uint32_t)(esi + 0x18u));
L_0050bb50:  // mov byte ptr [esp + 0x38e4], 2
    M8((uint32_t)(esp + 0x38e4u)) = (uint8_t)(0x2u);
L_0050bb58:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bb5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bb5d:  // mov dword ptr [esi], 0x5dfcb4
    M32((uint32_t)(esi)) = (uint32_t)(0x5dfcb4u);
L_0050bb63:  // jmp 0x50bb67
    goto L_0050bb67;
L_0050bb65:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0050bb67:  // mov dword ptr [esp + 0x38e4], 0xffffffff
    M32((uint32_t)(esp + 0x38e4u)) = (uint32_t)(0xffffffffu);
L_0050bb72:  // mov dword ptr [0x67a748], esi
    M32((uint32_t)(0x67a748u)) = (uint32_t)(esi);
L_0050bb78:  // mov eax, dword ptr [0x67a07c]
    eax = (uint32_t)(M32((uint32_t)(0x67a07cu)));
L_0050bb7d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bb7f:  // jne 0x50bba1
    if (!f.zf) goto L_0050bba1;
L_0050bb81:  // push 0x2f7
    t0 = 0x2f7u; esp -= 4; M32(esp) = t0;
L_0050bb86:  // push 0x63d2ac
    t0 = 0x63d2acu; esp -= 4; M32(esp) = t0;
L_0050bb8b:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0050bb90:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050bb92:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050bb97:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bb9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bb9c:  // mov dword ptr [0x67a07c], eax
    M32((uint32_t)(0x67a07cu)) = (uint32_t)(eax);
L_0050bba1:  // mov eax, dword ptr [0x67a078]
    eax = (uint32_t)(M32((uint32_t)(0x67a078u)));
L_0050bba6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bba8:  // jne 0x50bbca
    if (!f.zf) goto L_0050bbca;
L_0050bbaa:  // push 0x2f9
    t0 = 0x2f9u; esp -= 4; M32(esp) = t0;
L_0050bbaf:  // push 0x63d2ac
    t0 = 0x63d2acu; esp -= 4; M32(esp) = t0;
L_0050bbb4:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0050bbb9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050bbbb:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050bbc0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bbc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bbc5:  // mov dword ptr [0x67a078], eax
    M32((uint32_t)(0x67a078u)) = (uint32_t)(eax);
L_0050bbca:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0050bbce:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050bbd0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050bbd1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bbd3:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bbd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bbd8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050bbd9:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_0050bbde:  // call 0x50ac70
    t0 = 0x0050ac70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bbe3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bbe3:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0050bbe5:  // jne 0x50bbfa
    if (!f.zf) goto L_0050bbfa;
L_0050bbe7:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0050bbeb:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0050bbee:  // je 0x50bbfa
    if (f.zf) goto L_0050bbfa;
L_0050bbf0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050bbf2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bbf3:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050bbf5:  // call 0x50b520
    t0 = 0x0050b520u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bbfau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bbfa:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_0050bbfe:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050bc00:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bc01:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bc03:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bc08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bc08:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0050bc0a:  // jne 0x50bc17
    if (!f.zf) goto L_0050bc17;
L_0050bc0c:  // cmp dword ptr [esp + 0x38], -1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x38u)), 0xffffffffu, f);
L_0050bc11:  // je 0x50bc17
    if (f.zf) goto L_0050bc17;
L_0050bc13:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bc15:  // jmp 0x50bc1c
    goto L_0050bc1c;
L_0050bc17:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0050bc1c:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0050bc20:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050bc22:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bc23:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050bc24:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0050bc29:  // call 0x490f50
    t0 = 0x00490f50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bc2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bc2e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050bc2f:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0050bc34:  // call 0x449dc0
    t0 = 0x00449dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bc39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bc39:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0050bc3d:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0050bc3f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050bc40:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bc42:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bc47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bc47:  // push 0x63d450
    t0 = 0x63d450u; esp -= 4; M32(esp) = t0;
L_0050bc4c:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050bc51:  // call 0x42b500
    t0 = 0x0042b500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bc56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bc56:  // cmp word ptr [esp + 0x40], 0
    t0 = lsub<16>(M16((uint32_t)(esp + 0x40u)), 0x0u, f);
L_0050bc5c:  // je 0x50caf3
    if (f.zf) goto L_0050caf3;
L_0050bc62:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0050bc66:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050bc68:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bc69:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bc6b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bc70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bc70:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050bc74:  // cmp eax, 8
    t0 = lsub<32>(eax, 0x8u, f);
L_0050bc77:  // je 0x50c2c7
    if (f.zf) goto L_0050c2c7;
L_0050bc7d:  // cmp eax, 0x19
    t0 = lsub<32>(eax, 0x19u, f);
L_0050bc80:  // je 0x50c2c7
    if (f.zf) goto L_0050c2c7;
L_0050bc86:  // cmp eax, 0x1c
    t0 = lsub<32>(eax, 0x1cu, f);
L_0050bc89:  // jne 0x50bdcc
    if (!f.zf) goto L_0050bdcc;
L_0050bc8f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050bc91:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bc92:  // call 0x48c650
    t0 = 0x0048c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bc97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bc97:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050bc9b:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0050bc9d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050bca0:  // lea eax, [esp + ecx*4 + 0x199c]
    eax = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x199cu));
L_0050bca7:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0050bca9:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0050bcad:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0050bcaf:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050bcb5:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050bcb9:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0050bcbb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050bcbc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bcbd:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050bcbf:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bcc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bcc2:  // lea ecx, [esp + 0x2b]
    ecx = (uint32_t)((uint32_t)(esp + 0x2bu));
L_0050bcc6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050bcc8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050bcc9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bccb:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bcd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bcd0:  // movsx edx, byte ptr [esp + 0x2b]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x2bu))));
L_0050bcd5:  // lea esi, [ebx + 0x3c0]
    esi = (uint32_t)((uint32_t)(ebx + 0x3c0u));
L_0050bcdb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050bcdc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050bcdd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bcdf:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bce4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bce4:  // movsx eax, byte ptr [esp + 0x2b]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x2bu))));
L_0050bce9:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050bceb:  // mov byte ptr [eax + ebx + 0x3c0], 0
    M8((uint32_t)(eax + ebx + 0x3c0u)) = (uint8_t)(0x0u);
L_0050bcf3:  // je 0x50bd68
    if (f.zf) goto L_0050bd68;
L_0050bcf5:  // mov ecx, dword ptr [0x8553fc]
    ecx = (uint32_t)(M32((uint32_t)(0x8553fcu)));
L_0050bcfb:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050bcfd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bcff:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050bd02:  // je 0x50bd08
    if (f.zf) goto L_0050bd08;
L_0050bd04:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050bd06:  // jmp 0x50bd0a
    goto L_0050bd0a;
L_0050bd08:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bd0a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bd0c:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050bd0e:  // je 0x50bd68
    if (f.zf) goto L_0050bd68;
L_0050bd10:  // mov esi, dword ptr [edi + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xb0u)));
L_0050bd16:  // lea eax, [ebx + 0x3c0]
    eax = (uint32_t)((uint32_t)(ebx + 0x3c0u));
L_0050bd1c:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0050bd1e:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050bd20:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_0050bd22:  // jne 0x50bd40
    if (!f.zf) goto L_0050bd40;
L_0050bd24:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050bd26:  // je 0x50bd3c
    if (f.zf) goto L_0050bd3c;
L_0050bd28:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0050bd2b:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050bd2d:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0050bd30:  // jne 0x50bd40
    if (!f.zf) goto L_0050bd40;
L_0050bd32:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0050bd35:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0050bd38:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050bd3a:  // jne 0x50bd1c
    if (!f.zf) goto L_0050bd1c;
L_0050bd3c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bd3e:  // jmp 0x50bd45
    goto L_0050bd45;
L_0050bd40:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0050bd42:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050bd45:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bd47:  // je 0x50bdae
    if (f.zf) goto L_0050bdae;
L_0050bd49:  // mov ecx, dword ptr [0x8553fc]
    ecx = (uint32_t)(M32((uint32_t)(0x8553fcu)));
L_0050bd4f:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050bd52:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050bd55:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bd57:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050bd5a:  // je 0x50bd60
    if (f.zf) goto L_0050bd60;
L_0050bd5c:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050bd5e:  // jmp 0x50bd62
    goto L_0050bd62;
L_0050bd60:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bd62:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bd64:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050bd66:  // jne 0x50bd10
    if (!f.zf) goto L_0050bd10;
L_0050bd68:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0050bd6a:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050bd6e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050bd70:  // lea ecx, [esp + edi*4 + 0x2940]
    ecx = (uint32_t)((uint32_t)(esp + edi * 4u + 0x2940u));
L_0050bd77:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050bd78:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050bd7a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bd7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bd7f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050bd81:  // je 0x50bd99
    if (f.zf) goto L_0050bd99;
L_0050bd83:  // mov edx, dword ptr [esi + 0xe0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xe0u)));
L_0050bd89:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050bd8a:  // call 0x50f4b0
    t0 = 0x0050f4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bd8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bd8f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050bd92:  // mov dword ptr [esp + edi*4 + 0x9fc], eax
    M32((uint32_t)(esp + edi * 4u + 0x9fcu)) = (uint32_t)(eax);
L_0050bd99:  // mov eax, dword ptr [esp + edi*4 + 0x9fc]
    eax = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x9fcu)));
L_0050bda0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bda2:  // je 0x50bdb2
    if (f.zf) goto L_0050bdb2;
L_0050bda4:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050bda5:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0050bda9:  // jmp 0x50cadd
    goto L_0050cadd;
L_0050bdae:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050bdb0:  // jmp 0x50bd6a
    goto L_0050bd6a;
L_0050bdb2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050bdb3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050bdb8:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bdbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bdbd:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0050bdc1:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_0050bdc7:  // jmp 0x50cadd
    goto L_0050cadd;
L_0050bdcc:  // cmp eax, 0x23
    t0 = lsub<32>(eax, 0x23u, f);
L_0050bdcf:  // jne 0x50bfbc
    if (!f.zf) goto L_0050bfbc;
L_0050bdd5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050bdd7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bdd8:  // call 0x48c650
    t0 = 0x0048c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bdddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bddd:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050bde1:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0050bde3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050bde6:  // lea eax, [esp + ecx*4 + 0x199c]
    eax = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x199cu));
L_0050bded:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0050bdef:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0050bdf3:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0050bdf5:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050bdfb:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050bdff:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0050be01:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050be02:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050be03:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050be05:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050be08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050be08:  // lea ecx, [esp + 0x23]
    ecx = (uint32_t)((uint32_t)(esp + 0x23u));
L_0050be0c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050be0e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050be0f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050be11:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050be16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050be16:  // movsx edx, byte ptr [esp + 0x23]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x23u))));
L_0050be1b:  // lea eax, [esp + 0x76c]
    eax = (uint32_t)((uint32_t)(esp + 0x76cu));
L_0050be22:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050be23:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050be24:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050be26:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050be2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050be2b:  // movsx ecx, byte ptr [esp + 0x23]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x23u))));
L_0050be30:  // cmp word ptr [esp + 0x18], 0x28
    t0 = lsub<16>(M16((uint32_t)(esp + 0x18u)), 0x28u, f);
L_0050be36:  // mov byte ptr [esp + ecx + 0x76c], 0
    M8((uint32_t)(esp + ecx + 0x76cu)) = (uint8_t)(0x0u);
L_0050be3e:  // jb 0x50be55
    if (f.cf) goto L_0050be55;
L_0050be40:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050be44:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050be46:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050be48:  // lea eax, [esp + edx*4 + 0x2940]
    eax = (uint32_t)((uint32_t)(esp + edx * 4u + 0x2940u));
L_0050be4f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050be50:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050be55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050be55:  // lea ecx, [esp + 0x76c]
    ecx = (uint32_t)((uint32_t)(esp + 0x76cu));
L_0050be5c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050be5e:  // je 0x50bed1
    if (f.zf) goto L_0050bed1;
L_0050be60:  // mov ecx, dword ptr [0x855404]
    ecx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0050be66:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050be68:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050be6a:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050be6d:  // je 0x50be73
    if (f.zf) goto L_0050be73;
L_0050be6f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050be71:  // jmp 0x50be75
    goto L_0050be75;
L_0050be73:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050be75:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050be77:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050be79:  // je 0x50bed1
    if (f.zf) goto L_0050bed1;
L_0050be7b:  // mov esi, dword ptr [edi + 0x20]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_0050be7e:  // lea eax, [esp + 0x76c]
    eax = (uint32_t)((uint32_t)(esp + 0x76cu));
L_0050be85:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0050be87:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050be89:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_0050be8b:  // jne 0x50bea9
    if (!f.zf) goto L_0050bea9;
L_0050be8d:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050be8f:  // je 0x50bea5
    if (f.zf) goto L_0050bea5;
L_0050be91:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0050be94:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050be96:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0050be99:  // jne 0x50bea9
    if (!f.zf) goto L_0050bea9;
L_0050be9b:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0050be9e:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0050bea1:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050bea3:  // jne 0x50be85
    if (!f.zf) goto L_0050be85;
L_0050bea5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bea7:  // jmp 0x50beae
    goto L_0050beae;
L_0050bea9:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0050beab:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050beae:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050beb0:  // je 0x50bf23
    if (f.zf) goto L_0050bf23;
L_0050beb2:  // mov ecx, dword ptr [0x855404]
    ecx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0050beb8:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050bebb:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050bebe:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bec0:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050bec3:  // je 0x50bec9
    if (f.zf) goto L_0050bec9;
L_0050bec5:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050bec7:  // jmp 0x50becb
    goto L_0050becb;
L_0050bec9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050becb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050becd:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050becf:  // jne 0x50be7b
    if (!f.zf) goto L_0050be7b;
L_0050bed1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bed3:  // lea ecx, [esp + 0x76c]
    ecx = (uint32_t)((uint32_t)(esp + 0x76cu));
L_0050beda:  // mov dword ptr [ebx + 0x3bc], eax
    M32((uint32_t)(ebx + 0x3bcu)) = (uint32_t)(eax);
L_0050bee0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050bee2:  // je 0x50bf52
    if (f.zf) goto L_0050bf52;
L_0050bee4:  // mov ecx, dword ptr [0x855404]
    ecx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0050beea:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050beec:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bef1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bef1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bef3:  // je 0x50bf52
    if (f.zf) goto L_0050bf52;
L_0050bef5:  // mov esi, dword ptr [eax + 0x20]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_0050bef8:  // lea eax, [esp + 0x76c]
    eax = (uint32_t)((uint32_t)(esp + 0x76cu));
L_0050beff:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0050bf01:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050bf03:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_0050bf05:  // jne 0x50bf27
    if (!f.zf) goto L_0050bf27;
L_0050bf07:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050bf09:  // je 0x50bf1f
    if (f.zf) goto L_0050bf1f;
L_0050bf0b:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0050bf0e:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050bf10:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0050bf13:  // jne 0x50bf27
    if (!f.zf) goto L_0050bf27;
L_0050bf15:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0050bf18:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0050bf1b:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050bf1d:  // jne 0x50beff
    if (!f.zf) goto L_0050beff;
L_0050bf1f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bf21:  // jmp 0x50bf2c
    goto L_0050bf2c;
L_0050bf23:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0050bf25:  // jmp 0x50bed3
    goto L_0050bed3;
L_0050bf27:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0050bf29:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050bf2c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bf2e:  // je 0x50bfb8
    if (f.zf) goto L_0050bfb8;
L_0050bf34:  // mov ecx, dword ptr [0x855404]
    ecx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0050bf3a:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050bf3b:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050bf3e:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050bf41:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bf43:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050bf46:  // je 0x50bf4c
    if (f.zf) goto L_0050bf4c;
L_0050bf48:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050bf4a:  // jmp 0x50bf4e
    goto L_0050bf4e;
L_0050bf4c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050bf4e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bf50:  // jne 0x50bef5
    if (!f.zf) goto L_0050bef5;
L_0050bf52:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050bf55:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bf56:  // call 0x510060
    t0 = 0x00510060u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bf5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bf5b:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050bf5f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050bf62:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050bf64:  // mov dword ptr [esp + ecx*4 + 0x9fc], eax
    M32((uint32_t)(esp + ecx * 4u + 0x9fcu)) = (uint32_t)(eax);
L_0050bf6b:  // jne 0x50cad9
    if (!f.zf) goto L_0050cad9;
L_0050bf71:  // lea edx, [esp + 0x76c]
    edx = (uint32_t)((uint32_t)(esp + 0x76cu));
L_0050bf78:  // lea eax, [esp + 0x86c]
    eax = (uint32_t)((uint32_t)(esp + 0x86cu));
L_0050bf7f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050bf80:  // push 0x63d428
    t0 = 0x63d428u; esp -= 4; M32(esp) = t0;
L_0050bf85:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bf86:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bf8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bf8b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050bf8e:  // lea ecx, [esp + 0x86c]
    ecx = (uint32_t)((uint32_t)(esp + 0x86cu));
L_0050bf95:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050bf96:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bf9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bf9b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050bf9e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050bfa3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050bfa4:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bfa9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bfa9:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0050bfad:  // mov dword ptr [edx], 0
    M32((uint32_t)(edx)) = (uint32_t)(0x0u);
L_0050bfb3:  // jmp 0x50cadd
    goto L_0050cadd;
L_0050bfb8:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0050bfba:  // jmp 0x50bf55
    goto L_0050bf55;
L_0050bfbc:  // cmp eax, 0x27
    t0 = lsub<32>(eax, 0x27u, f);
L_0050bfbf:  // jne 0x50c1ac
    if (!f.zf) goto L_0050c1ac;
L_0050bfc5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050bfc7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bfc8:  // call 0x48c650
    t0 = 0x0048c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bfcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bfcd:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0050bfcf:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050bfd3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050bfd6:  // lea eax, [esp + eax*4 + 0x199c]
    eax = (uint32_t)((uint32_t)(esp + eax * 4u + 0x199cu));
L_0050bfdd:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0050bfdf:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0050bfe3:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0050bfe5:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050bfeb:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050bfef:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0050bff1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050bff2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050bff3:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050bff5:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050bff8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050bff8:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0050bffc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050bffe:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050bfff:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c001:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c006u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c006:  // movsx edx, byte ptr [esp + 0x34]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x34u))));
L_0050c00b:  // lea eax, [esp + 0x56c]
    eax = (uint32_t)((uint32_t)(esp + 0x56cu));
L_0050c012:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c013:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c014:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c016:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c01bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c01b:  // movsx ecx, byte ptr [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x34u))));
L_0050c020:  // cmp word ptr [esp + 0x18], 0x28
    t0 = lsub<16>(M16((uint32_t)(esp + 0x18u)), 0x28u, f);
L_0050c026:  // mov byte ptr [esp + ecx + 0x56c], 0
    M8((uint32_t)(esp + ecx + 0x56cu)) = (uint8_t)(0x0u);
L_0050c02e:  // jb 0x50c045
    if (f.cf) goto L_0050c045;
L_0050c030:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050c034:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c036:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c038:  // lea eax, [esp + edx*4 + 0x2940]
    eax = (uint32_t)((uint32_t)(esp + edx * 4u + 0x2940u));
L_0050c03f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c040:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c045u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c045:  // lea ecx, [esp + 0x56c]
    ecx = (uint32_t)((uint32_t)(esp + 0x56cu));
L_0050c04c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050c04e:  // je 0x50c0c1
    if (f.zf) goto L_0050c0c1;
L_0050c050:  // mov ecx, dword ptr [0x855408]
    ecx = (uint32_t)(M32((uint32_t)(0x855408u)));
L_0050c056:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050c058:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c05a:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050c05d:  // je 0x50c063
    if (f.zf) goto L_0050c063;
L_0050c05f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050c061:  // jmp 0x50c065
    goto L_0050c065;
L_0050c063:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c065:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c067:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050c069:  // je 0x50c0c1
    if (f.zf) goto L_0050c0c1;
L_0050c06b:  // mov esi, dword ptr [edi + 0x10]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0050c06e:  // lea eax, [esp + 0x56c]
    eax = (uint32_t)((uint32_t)(esp + 0x56cu));
L_0050c075:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0050c077:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050c079:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_0050c07b:  // jne 0x50c099
    if (!f.zf) goto L_0050c099;
L_0050c07d:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050c07f:  // je 0x50c095
    if (f.zf) goto L_0050c095;
L_0050c081:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0050c084:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050c086:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0050c089:  // jne 0x50c099
    if (!f.zf) goto L_0050c099;
L_0050c08b:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0050c08e:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0050c091:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050c093:  // jne 0x50c075
    if (!f.zf) goto L_0050c075;
L_0050c095:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c097:  // jmp 0x50c09e
    goto L_0050c09e;
L_0050c099:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0050c09b:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050c09e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c0a0:  // je 0x50c113
    if (f.zf) goto L_0050c113;
L_0050c0a2:  // mov ecx, dword ptr [0x855408]
    ecx = (uint32_t)(M32((uint32_t)(0x855408u)));
L_0050c0a8:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050c0ab:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050c0ae:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c0b0:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050c0b3:  // je 0x50c0b9
    if (f.zf) goto L_0050c0b9;
L_0050c0b5:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050c0b7:  // jmp 0x50c0bb
    goto L_0050c0bb;
L_0050c0b9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c0bb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c0bd:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050c0bf:  // jne 0x50c06b
    if (!f.zf) goto L_0050c06b;
L_0050c0c1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c0c3:  // lea ecx, [esp + 0x56c]
    ecx = (uint32_t)((uint32_t)(esp + 0x56cu));
L_0050c0ca:  // mov dword ptr [ebx + 0x3bc], eax
    M32((uint32_t)(ebx + 0x3bcu)) = (uint32_t)(eax);
L_0050c0d0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050c0d2:  // je 0x50c142
    if (f.zf) goto L_0050c142;
L_0050c0d4:  // mov ecx, dword ptr [0x855408]
    ecx = (uint32_t)(M32((uint32_t)(0x855408u)));
L_0050c0da:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050c0dc:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c0e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c0e1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c0e3:  // je 0x50c142
    if (f.zf) goto L_0050c142;
L_0050c0e5:  // mov esi, dword ptr [eax + 0x10]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0050c0e8:  // lea eax, [esp + 0x56c]
    eax = (uint32_t)((uint32_t)(esp + 0x56cu));
L_0050c0ef:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0050c0f1:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050c0f3:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_0050c0f5:  // jne 0x50c117
    if (!f.zf) goto L_0050c117;
L_0050c0f7:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050c0f9:  // je 0x50c10f
    if (f.zf) goto L_0050c10f;
L_0050c0fb:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0050c0fe:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050c100:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0050c103:  // jne 0x50c117
    if (!f.zf) goto L_0050c117;
L_0050c105:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0050c108:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0050c10b:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050c10d:  // jne 0x50c0ef
    if (!f.zf) goto L_0050c0ef;
L_0050c10f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c111:  // jmp 0x50c11c
    goto L_0050c11c;
L_0050c113:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0050c115:  // jmp 0x50c0c3
    goto L_0050c0c3;
L_0050c117:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0050c119:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050c11c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c11e:  // je 0x50c1a8
    if (f.zf) goto L_0050c1a8;
L_0050c124:  // mov ecx, dword ptr [0x855408]
    ecx = (uint32_t)(M32((uint32_t)(0x855408u)));
L_0050c12a:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050c12b:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050c12e:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050c131:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c133:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050c136:  // je 0x50c13c
    if (f.zf) goto L_0050c13c;
L_0050c138:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050c13a:  // jmp 0x50c13e
    goto L_0050c13e;
L_0050c13c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c13e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c140:  // jne 0x50c0e5
    if (!f.zf) goto L_0050c0e5;
L_0050c142:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050c145:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c146:  // call 0x510150
    t0 = 0x00510150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c14bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c14b:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050c14f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050c152:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c154:  // mov dword ptr [esp + ecx*4 + 0x9fc], eax
    M32((uint32_t)(esp + ecx * 4u + 0x9fcu)) = (uint32_t)(eax);
L_0050c15b:  // jne 0x50cad9
    if (!f.zf) goto L_0050cad9;
L_0050c161:  // lea edx, [esp + 0x56c]
    edx = (uint32_t)((uint32_t)(esp + 0x56cu));
L_0050c168:  // lea eax, [esp + 0x934]
    eax = (uint32_t)((uint32_t)(esp + 0x934u));
L_0050c16f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c170:  // push 0x63d428
    t0 = 0x63d428u; esp -= 4; M32(esp) = t0;
L_0050c175:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c176:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c17bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c17b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050c17e:  // lea ecx, [esp + 0x934]
    ecx = (uint32_t)((uint32_t)(esp + 0x934u));
L_0050c185:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c186:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c18bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c18b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050c18e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050c193:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050c194:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c199u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c199:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0050c19d:  // mov dword ptr [edx], 0
    M32((uint32_t)(edx)) = (uint32_t)(0x0u);
L_0050c1a3:  // jmp 0x50cadd
    goto L_0050cadd;
L_0050c1a8:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0050c1aa:  // jmp 0x50c145
    goto L_0050c145;
L_0050c1ac:  // cmp eax, 0xf
    t0 = lsub<32>(eax, 0xfu, f);
L_0050c1af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050c1b1:  // jne 0x50c279
    if (!f.zf) goto L_0050c279;
L_0050c1b7:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0050c1b9:  // call 0x4bf090
    t0 = 0x004bf090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c1beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c1be:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050c1c2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050c1c5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c1c7:  // lea esi, [esp + ecx*4 + 0x9fc]
    esi = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x9fcu));
L_0050c1ce:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_0050c1d0:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050c1d6:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050c1da:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050c1dc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c1dd:  // call 0x48c650
    t0 = 0x0048c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c1e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c1e2:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050c1e6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050c1e9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c1eb:  // mov dword ptr [esp + ecx*4 + 0x199c], eax
    M32((uint32_t)(esp + ecx * 4u + 0x199cu)) = (uint32_t)(eax);
L_0050c1f2:  // je 0x50c263
    if (f.zf) goto L_0050c263;
L_0050c1f4:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050c1f8:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0050c1fa:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050c1fb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c1fc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050c1fe:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c201u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c201:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050c205:  // mov eax, dword ptr [esp + 0x38f0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050c20c:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0050c20d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c20f:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0050c213:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050c219:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0050c21b:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0050c21c:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0050c220:  // mov ecx, dword ptr [esp + esi*4 + 0x9fc]
    ecx = (uint32_t)(M32((uint32_t)(esp + esi * 4u + 0x9fcu)));
L_0050c227:  // lea edi, [esp + esi*4 + 0x9fc]
    edi = (uint32_t)((uint32_t)(esp + esi * 4u + 0x9fcu));
L_0050c22e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050c230:  // je 0x50c239
    if (f.zf) goto L_0050c239;
L_0050c232:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0050c234:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c236:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c239u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c239:  // mov eax, dword ptr [esp + esi*4 + 0x199c]
    eax = (uint32_t)(M32((uint32_t)(esp + esi * 4u + 0x199cu)));
L_0050c240:  // lea esi, [esp + esi*4 + 0x199c]
    esi = (uint32_t)((uint32_t)(esp + esi * 4u + 0x199cu));
L_0050c247:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c248:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050c24d:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c252u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c252:  // mov dword ptr [edi], 0
    M32((uint32_t)(edi)) = (uint32_t)(0x0u);
L_0050c258:  // mov dword ptr [esi], 0
    M32((uint32_t)(esi)) = (uint32_t)(0x0u);
L_0050c25e:  // jmp 0x50cadd
    goto L_0050cadd;
L_0050c263:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0050c265:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050c267:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050c26d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0050c26f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c271:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c274u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c274:  // jmp 0x50cadd
    goto L_0050cadd;
L_0050c279:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c27a:  // call 0x4bf090
    t0 = 0x004bf090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c27fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c27f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050c283:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050c286:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c288:  // lea esi, [esp + ecx*4 + 0x9fc]
    esi = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x9fcu));
L_0050c28f:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_0050c291:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050c297:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050c29b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050c29d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c29e:  // call 0x48c650
    t0 = 0x0048c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c2a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c2a3:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050c2a7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050c2aa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c2ac:  // mov dword ptr [esp + ecx*4 + 0x199c], eax
    M32((uint32_t)(esp + ecx * 4u + 0x199cu)) = (uint32_t)(eax);
L_0050c2b3:  // je 0x50c263
    if (f.zf) goto L_0050c263;
L_0050c2b5:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050c2b9:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0050c2bb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050c2bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c2bd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050c2bf:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c2c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c2c2:  // jmp 0x50cad9
    goto L_0050cad9;
L_0050c2c7:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_0050c2ce:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c2d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c2d3:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050c2d7:  // mov dword ptr [esp + 0xac], 0x5dc1c0
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0x5dc1c0u);
L_0050c2e2:  // cmp ax, 0x10
    t0 = lsub<16>((eax & 0xffffu), 0x10u, f);
L_0050c2e6:  // mov dword ptr [esp + 0x468], 0
    M32((uint32_t)(esp + 0x468u)) = (uint32_t)(0x0u);
L_0050c2f1:  // jg 0x50c3ea
    if ((!f.zf && f.sf == f.of)) goto L_0050c3ea;
L_0050c2f7:  // lea eax, [esp + 0xb0]
    eax = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0050c2fe:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c300:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c301:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c303:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c308u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c308:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c30f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c311:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c312:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c314:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c319u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c319:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0050c320:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c322:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c323:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c325:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c32au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c32a:  // lea eax, [esp + 0xc0]
    eax = (uint32_t)((uint32_t)(esp + 0xc0u));
L_0050c331:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_0050c333:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c334:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c336:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c33bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c33b:  // lea ecx, [esp + 0xf0]
    ecx = (uint32_t)((uint32_t)(esp + 0xf0u));
L_0050c342:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c344:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c345:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c347:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c34cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c34c:  // lea edx, [esp + 0xf4]
    edx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0050c353:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c355:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c356:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c358:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c35du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c35d:  // lea eax, [esp + 0xf8]
    eax = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0050c364:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c366:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c367:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c369:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c36eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c36e:  // lea ecx, [esp + 0xfc]
    ecx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_0050c375:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0050c377:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c378:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c37a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c37fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c37f:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0050c383:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c385:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c386:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c388:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c38du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c38d:  // lea eax, [esp + 0x10c]
    eax = (uint32_t)((uint32_t)(esp + 0x10cu));
L_0050c394:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c396:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c397:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c399:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c39eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c39e:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0050c3a2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c3a4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c3a5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c3a7:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c3acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c3ac:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0050c3b0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c3b2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c3b3:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c3b5:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c3bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c3ba:  // lea eax, [esp + 0x110]
    eax = (uint32_t)((uint32_t)(esp + 0x110u));
L_0050c3c1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c3c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c3c4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c3c6:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c3cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c3cb:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_0050c3d2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c3d4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c3d5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c3d7:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c3dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c3dc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c3de:  // lea edx, [esp + 0x154]
    edx = (uint32_t)((uint32_t)(esp + 0x154u));
L_0050c3e5:  // jmp 0x50c8ad
    goto L_0050c8ad;
L_0050c3ea:  // cmp ax, 0x13
    t0 = lsub<16>((eax & 0xffffu), 0x13u, f);
L_0050c3ee:  // jg 0x50c4b0
    if ((!f.zf && f.sf == f.of)) goto L_0050c4b0;
L_0050c3f4:  // lea eax, [esp + 0xb0]
    eax = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0050c3fb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c3fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c3fe:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c400:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c405u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c405:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c40c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c40e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c40f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c411:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c416u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c416:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0050c41d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c41f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c420:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c422:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c427u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c427:  // lea eax, [esp + 0xf0]
    eax = (uint32_t)((uint32_t)(esp + 0xf0u));
L_0050c42e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c430:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c431:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c433:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c438u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c438:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0050c43f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c441:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c442:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c444:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c449u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c449:  // lea edx, [esp + 0xf8]
    edx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0050c450:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c452:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c453:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c455:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c45au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c45a:  // lea eax, [esp + 0x110]
    eax = (uint32_t)((uint32_t)(esp + 0x110u));
L_0050c461:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c463:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c464:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c466:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c46bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c46b:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_0050c472:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c474:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c475:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c477:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c47cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c47c:  // lea edx, [esp + 0x150]
    edx = (uint32_t)((uint32_t)(esp + 0x150u));
L_0050c483:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c485:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c486:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c488:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c48du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c48d:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c490:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c492:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c494:  // movsx eax, bl
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c497:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c499:  // lea esi, [esp + eax + 0x15c]
    esi = (uint32_t)((uint32_t)(esp + eax + 0x15cu));
L_0050c4a0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c4a1:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c4a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c4a6:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c4a9:  // jne 0x50c490
    if (!f.zf) goto L_0050c490;
L_0050c4ab:  // jmp 0x50c8b5
    goto L_0050c8b5;
L_0050c4b0:  // cmp ax, 0x1b
    t0 = lsub<16>((eax & 0xffffu), 0x1bu, f);
L_0050c4b4:  // jg 0x50c594
    if ((!f.zf && f.sf == f.of)) goto L_0050c594;
L_0050c4ba:  // lea ecx, [esp + 0xb0]
    ecx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0050c4c1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c4c3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c4c4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c4c6:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c4cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c4cb:  // lea edx, [esp + 0xb4]
    edx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c4d2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c4d4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c4d5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c4d7:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c4dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c4dc:  // lea eax, [esp + 0xb8]
    eax = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0050c4e3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c4e5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c4e6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c4e8:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c4edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c4ed:  // lea ecx, [esp + 0xf0]
    ecx = (uint32_t)((uint32_t)(esp + 0xf0u));
L_0050c4f4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c4f6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c4f7:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c4f9:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c4feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c4fe:  // lea edx, [esp + 0xf4]
    edx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0050c505:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c507:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c508:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c50a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c50fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c50f:  // lea eax, [esp + 0xf8]
    eax = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0050c516:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c518:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c519:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c51b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c520u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c520:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_0050c527:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c529:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c52a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c52c:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c531u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c531:  // lea edx, [esp + 0x14c]
    edx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_0050c538:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c53a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c53b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c53d:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c542u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c542:  // lea eax, [esp + 0x150]
    eax = (uint32_t)((uint32_t)(esp + 0x150u));
L_0050c549:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c54b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c54c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c54e:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c553u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c553:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c556:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c558:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c55a:  // movsx ecx, bl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c55d:  // lea esi, [esp + ecx + 0x15c]
    esi = (uint32_t)((uint32_t)(esp + ecx + 0x15cu));
L_0050c564:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c566:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c567:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c56cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c56c:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c56f:  // jne 0x50c556
    if (!f.zf) goto L_0050c556;
L_0050c571:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c574:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c576:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c578:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c57b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c57d:  // lea esi, [esp + edx + 0x25c]
    esi = (uint32_t)((uint32_t)(esp + edx + 0x25cu));
L_0050c584:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c585:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c58au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c58a:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c58d:  // jne 0x50c574
    if (!f.zf) goto L_0050c574;
L_0050c58f:  // jmp 0x50c8b5
    goto L_0050c8b5;
L_0050c594:  // cmp ax, 0x21
    t0 = lsub<16>((eax & 0xffffu), 0x21u, f);
L_0050c598:  // jg 0x50c696
    if ((!f.zf && f.sf == f.of)) goto L_0050c696;
L_0050c59e:  // lea eax, [esp + 0xb0]
    eax = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0050c5a5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c5a7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c5a8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c5aa:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c5afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c5af:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c5b6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c5b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c5b9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c5bb:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c5c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c5c0:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0050c5c7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c5c9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c5ca:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c5cc:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c5d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c5d1:  // lea eax, [esp + 0xf0]
    eax = (uint32_t)((uint32_t)(esp + 0xf0u));
L_0050c5d8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c5da:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c5db:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c5dd:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c5e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c5e2:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0050c5e9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c5eb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c5ec:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c5ee:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c5f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c5f3:  // lea edx, [esp + 0xf8]
    edx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0050c5fa:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c5fc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c5fd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c5ff:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c604u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c604:  // lea eax, [esp + 0x110]
    eax = (uint32_t)((uint32_t)(esp + 0x110u));
L_0050c60b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c60d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c60e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c610:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c615u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c615:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_0050c61c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c61e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c61f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c621:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c626u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c626:  // lea edx, [esp + 0x150]
    edx = (uint32_t)((uint32_t)(esp + 0x150u));
L_0050c62d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c62f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c630:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c632:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c637u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c637:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c63a:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c63c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c63e:  // movsx eax, bl
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c641:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c643:  // lea esi, [esp + eax + 0x15c]
    esi = (uint32_t)((uint32_t)(esp + eax + 0x15cu));
L_0050c64a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c64b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c650u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c650:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c653:  // jne 0x50c63a
    if (!f.zf) goto L_0050c63a;
L_0050c655:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c658:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c65a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c65c:  // movsx ecx, bl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c65f:  // lea esi, [esp + ecx + 0x25c]
    esi = (uint32_t)((uint32_t)(esp + ecx + 0x25cu));
L_0050c666:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c668:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c669:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c66eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c66e:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c671:  // jne 0x50c658
    if (!f.zf) goto L_0050c658;
L_0050c673:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c676:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c678:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c67a:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c67d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c67f:  // lea esi, [esp + edx + 0x35c]
    esi = (uint32_t)((uint32_t)(esp + edx + 0x35cu));
L_0050c686:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c687:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c68cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c68c:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c68f:  // jne 0x50c676
    if (!f.zf) goto L_0050c676;
L_0050c691:  // jmp 0x50c8b5
    goto L_0050c8b5;
L_0050c696:  // cmp ax, 0x2d
    t0 = lsub<16>((eax & 0xffffu), 0x2du, f);
L_0050c69a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c69c:  // jg 0x50c7a2
    if ((!f.zf && f.sf == f.of)) goto L_0050c7a2;
L_0050c6a2:  // lea eax, [esp + 0xb4]
    eax = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c6a9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c6ab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c6ac:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c6b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c6b1:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c6b8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c6ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c6bb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c6bd:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c6c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c6c2:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0050c6c9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c6cb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c6cc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c6ce:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c6d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c6d3:  // lea eax, [esp + 0xf0]
    eax = (uint32_t)((uint32_t)(esp + 0xf0u));
L_0050c6da:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c6dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c6dd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c6df:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c6e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c6e4:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0050c6eb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c6ed:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c6ee:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c6f0:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c6f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c6f5:  // lea edx, [esp + 0xf8]
    edx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0050c6fc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c6fe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c6ff:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c701:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c706u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c706:  // lea eax, [esp + 0x110]
    eax = (uint32_t)((uint32_t)(esp + 0x110u));
L_0050c70d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c70f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c710:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c712:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c717u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c717:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_0050c71e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c720:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c721:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c723:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c728u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c728:  // lea edx, [esp + 0x150]
    edx = (uint32_t)((uint32_t)(esp + 0x150u));
L_0050c72f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c731:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c732:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c734:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c739u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c739:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c73c:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c73e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c740:  // movsx eax, bl
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c743:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c745:  // lea esi, [esp + eax + 0x15c]
    esi = (uint32_t)((uint32_t)(esp + eax + 0x15cu));
L_0050c74c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c74d:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c752:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c755:  // jne 0x50c73c
    if (!f.zf) goto L_0050c73c;
L_0050c757:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c75a:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c75c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c75e:  // movsx ecx, bl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c761:  // lea esi, [esp + ecx + 0x25c]
    esi = (uint32_t)((uint32_t)(esp + ecx + 0x25cu));
L_0050c768:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c76a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c76b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c770u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c770:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c773:  // jne 0x50c75a
    if (!f.zf) goto L_0050c75a;
L_0050c775:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c778:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c77a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c77c:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c77f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c781:  // lea esi, [esp + edx + 0x35c]
    esi = (uint32_t)((uint32_t)(esp + edx + 0x35cu));
L_0050c788:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c789:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c78eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c78e:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c791:  // jne 0x50c778
    if (!f.zf) goto L_0050c778;
L_0050c793:  // lea eax, [esp + 0x458]
    eax = (uint32_t)((uint32_t)(esp + 0x458u));
L_0050c79a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c79c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c79d:  // jmp 0x50c8ae
    goto L_0050c8ae;
L_0050c7a2:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c7a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c7aa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c7ac:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c7b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c7b1:  // lea edx, [esp + 0xb4]
    edx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050c7b8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c7ba:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c7bb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c7bd:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c7c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c7c2:  // lea eax, [esp + 0xb8]
    eax = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0050c7c9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c7cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c7cc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c7ce:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c7d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c7d3:  // lea ecx, [esp + 0xf0]
    ecx = (uint32_t)((uint32_t)(esp + 0xf0u));
L_0050c7da:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c7dc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c7dd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c7df:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c7e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c7e4:  // lea edx, [esp + 0xf4]
    edx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_0050c7eb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c7ed:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c7ee:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c7f0:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c7f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c7f5:  // lea eax, [esp + 0xf8]
    eax = (uint32_t)((uint32_t)(esp + 0xf8u));
L_0050c7fc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c7fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c7ff:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c801:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c806u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c806:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_0050c80d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c80f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c810:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c812:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c817u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c817:  // lea edx, [esp + 0x14c]
    edx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_0050c81e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c820:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c821:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c823:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c828u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c828:  // lea eax, [esp + 0x150]
    eax = (uint32_t)((uint32_t)(esp + 0x150u));
L_0050c82f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c831:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c832:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c834:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c839u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c839:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c83c:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c83e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c840:  // movsx ecx, bl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c843:  // lea esi, [esp + ecx + 0x15c]
    esi = (uint32_t)((uint32_t)(esp + ecx + 0x15cu));
L_0050c84a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c84c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c84d:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c852u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c852:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c855:  // jne 0x50c83c
    if (!f.zf) goto L_0050c83c;
L_0050c857:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c85a:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c85c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c85e:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c861:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c863:  // lea esi, [esp + edx + 0x25c]
    esi = (uint32_t)((uint32_t)(esp + edx + 0x25cu));
L_0050c86a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c86b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c870u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c870:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c873:  // jne 0x50c85a
    if (!f.zf) goto L_0050c85a;
L_0050c875:  // or bl, 0xff
    t0 = llog<8>((ebx & 0xffu) | 0xffu, f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c878:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050c87a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c87c:  // movsx eax, bl
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050c87f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c881:  // lea esi, [esp + eax + 0x35c]
    esi = (uint32_t)((uint32_t)(esp + eax + 0x35cu));
L_0050c888:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050c889:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c88eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c88e:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_0050c891:  // jne 0x50c878
    if (!f.zf) goto L_0050c878;
L_0050c893:  // lea ecx, [esp + 0x458]
    ecx = (uint32_t)((uint32_t)(esp + 0x458u));
L_0050c89a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c89c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c89d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c89f:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c8a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c8a4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c8a6:  // lea edx, [esp + 0x460]
    edx = (uint32_t)((uint32_t)(esp + 0x460u));
L_0050c8ad:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c8ae:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c8b0:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c8b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c8b5:  // lea eax, [esp + 0x13]
    eax = (uint32_t)((uint32_t)(esp + 0x13u));
L_0050c8b9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050c8bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c8bc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c8be:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c8c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c8c3:  // movsx ecx, byte ptr [esp + 0x13]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x13u))));
L_0050c8c8:  // lea edx, [esp + 0x66c]
    edx = (uint32_t)((uint32_t)(esp + 0x66cu));
L_0050c8cf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c8d0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c8d1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c8d3:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c8d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c8d8:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050c8dc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050c8de:  // movsx eax, byte ptr [esp + 0x17]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esp + 0x17u))));
L_0050c8e3:  // lea edx, [esp + ecx*4 + 0x2940]
    edx = (uint32_t)((uint32_t)(esp + ecx * 4u + 0x2940u));
L_0050c8ea:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050c8ec:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050c8ed:  // mov byte ptr [esp + eax + 0x674], 0
    M8((uint32_t)(esp + eax + 0x674u)) = (uint8_t)(0x0u);
L_0050c8f5:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c8fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c8fa:  // lea eax, [esp + 0x66c]
    eax = (uint32_t)((uint32_t)(esp + 0x66cu));
L_0050c901:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c903:  // je 0x50c981
    if (f.zf) goto L_0050c981;
L_0050c905:  // mov ecx, dword ptr [0x8553fc]
    ecx = (uint32_t)(M32((uint32_t)(0x8553fcu)));
L_0050c90b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050c90d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c90f:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050c912:  // je 0x50c918
    if (f.zf) goto L_0050c918;
L_0050c914:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050c916:  // jmp 0x50c91a
    goto L_0050c91a;
L_0050c918:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c91a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c91c:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050c91e:  // je 0x50c981
    if (f.zf) goto L_0050c981;
L_0050c920:  // mov esi, dword ptr [edi + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xb0u)));
L_0050c926:  // lea eax, [esp + 0x66c]
    eax = (uint32_t)((uint32_t)(esp + 0x66cu));
L_0050c92d:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0050c92f:  // mov bl, byte ptr [esi]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_0050c931:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050c933:  // cmp dl, bl
    t0 = lsub<8>((edx & 0xffu), (ebx & 0xffu), f);
L_0050c935:  // jne 0x50c955
    if (!f.zf) goto L_0050c955;
L_0050c937:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050c939:  // je 0x50c951
    if (f.zf) goto L_0050c951;
L_0050c93b:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0050c93e:  // mov bl, byte ptr [esi + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_0050c941:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050c943:  // cmp dl, bl
    t0 = lsub<8>((edx & 0xffu), (ebx & 0xffu), f);
L_0050c945:  // jne 0x50c955
    if (!f.zf) goto L_0050c955;
L_0050c947:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0050c94a:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0050c94d:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050c94f:  // jne 0x50c92d
    if (!f.zf) goto L_0050c92d;
L_0050c951:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c953:  // jmp 0x50c95a
    goto L_0050c95a;
L_0050c955:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0050c957:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050c95a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c95c:  // je 0x50ca1f
    if (f.zf) goto L_0050ca1f;
L_0050c962:  // mov ecx, dword ptr [0x8553fc]
    ecx = (uint32_t)(M32((uint32_t)(0x8553fcu)));
L_0050c968:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050c96b:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050c96e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c970:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050c973:  // je 0x50c979
    if (f.zf) goto L_0050c979;
L_0050c975:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0050c977:  // jmp 0x50c97b
    goto L_0050c97b;
L_0050c979:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c97b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c97d:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050c97f:  // jne 0x50c920
    if (!f.zf) goto L_0050c920;
L_0050c981:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c983:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050c985:  // mov dword ptr [esp + 0x468], eax
    M32((uint32_t)(esp + 0x468u)) = (uint32_t)(eax);
L_0050c98c:  // je 0x50cadd
    if (f.zf) goto L_0050cadd;
L_0050c992:  // mov ecx, dword ptr [eax + 0xe0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xe0u)));
L_0050c998:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050c999:  // call 0x50f4b0
    t0 = 0x0050f4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c99eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c99e:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050c9a0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050c9a3:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0050c9a5:  // je 0x50ca26
    if (f.zf) goto L_0050ca26;
L_0050c9a7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050c9a9:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_0050c9ab:  // call 0x48c650
    t0 = 0x0048c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c9b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c9b0:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050c9b4:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0050c9b6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050c9b9:  // lea eax, [esp + 0xac]
    eax = (uint32_t)((uint32_t)(esp + 0xacu));
L_0050c9c0:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0050c9c2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050c9c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050c9c5:  // mov dword ptr [esp + esi*4 + 0x19a0], ebx
    M32((uint32_t)(esp + esi * 4u + 0x19a0u)) = (uint32_t)(ebx);
L_0050c9cc:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050c9ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050c9ce:  // lea edx, [esp + esi*4 + 0x9fc]
    edx = (uint32_t)((uint32_t)(esp + esi * 4u + 0x9fcu));
L_0050c9d5:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0050c9d8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050c9da:  // lea esi, [ebx + 0x3c0]
    esi = (uint32_t)((uint32_t)(ebx + 0x3c0u));
L_0050c9e0:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_0050c9e2:  // lea edi, [esp + 0x66c]
    edi = (uint32_t)((uint32_t)(esp + 0x66cu));
L_0050c9e9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050c9eb:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0050c9ed:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0050c9ef:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_0050c9f3:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0050c9f5:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050c9f7:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0050c9fb:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050c9fe:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050ca00:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050ca02:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0050ca07:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0050ca0a:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0050ca0c:  // mov dword ptr [ebx + 0x3bc], eax
    M32((uint32_t)(ebx + 0x3bcu)) = (uint32_t)(eax);
L_0050ca12:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_0050ca14:  // mov dword ptr [ecx + 0x84], eax
    M32((uint32_t)(ecx + 0x84u)) = (uint32_t)(eax);
L_0050ca1a:  // jmp 0x50cac9
    goto L_0050cac9;
L_0050ca1f:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0050ca21:  // jmp 0x50c983
    goto L_0050c983;
L_0050ca26:  // lea edx, [esp + 0x66c]
    edx = (uint32_t)((uint32_t)(esp + 0x66cu));
L_0050ca2d:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0050ca2f:  // je 0x50ca94
    if (f.zf) goto L_0050ca94;
L_0050ca31:  // mov ecx, dword ptr [0x8553fc]
    ecx = (uint32_t)(M32((uint32_t)(0x8553fcu)));
L_0050ca37:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050ca39:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ca3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ca3e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050ca40:  // je 0x50ca94
    if (f.zf) goto L_0050ca94;
L_0050ca42:  // mov esi, dword ptr [eax + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(eax + 0xb0u)));
L_0050ca48:  // lea eax, [esp + 0x66c]
    eax = (uint32_t)((uint32_t)(esp + 0x66cu));
L_0050ca4f:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0050ca51:  // mov bl, byte ptr [esi]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_0050ca53:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050ca55:  // cmp dl, bl
    t0 = lsub<8>((edx & 0xffu), (ebx & 0xffu), f);
L_0050ca57:  // jne 0x50ca77
    if (!f.zf) goto L_0050ca77;
L_0050ca59:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050ca5b:  // je 0x50ca73
    if (f.zf) goto L_0050ca73;
L_0050ca5d:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0050ca60:  // mov bl, byte ptr [esi + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_0050ca63:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0050ca65:  // cmp dl, bl
    t0 = lsub<8>((edx & 0xffu), (ebx & 0xffu), f);
L_0050ca67:  // jne 0x50ca77
    if (!f.zf) goto L_0050ca77;
L_0050ca69:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0050ca6c:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0050ca6f:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0050ca71:  // jne 0x50ca4f
    if (!f.zf) goto L_0050ca4f;
L_0050ca73:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050ca75:  // jmp 0x50ca7c
    goto L_0050ca7c;
L_0050ca77:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0050ca79:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050ca7c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050ca7e:  // je 0x50cf2a
    if (f.zf) goto L_0050cf2a;
L_0050ca84:  // mov ecx, dword ptr [0x8553fc]
    ecx = (uint32_t)(M32((uint32_t)(0x8553fcu)));
L_0050ca8a:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050ca8b:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ca90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ca90:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050ca92:  // jne 0x50ca42
    if (!f.zf) goto L_0050ca42;
L_0050ca94:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0050ca97:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050ca98:  // call 0x50df80
    t0 = 0x0050df80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ca9du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ca9d:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050caa1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050caa3:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0050caa5:  // mov dword ptr [esp + esi*4 + 0xa08], eax
    M32((uint32_t)(esp + esi * 4u + 0xa08u)) = (uint32_t)(eax);
L_0050caac:  // call 0x48c650
    t0 = 0x0048c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cab1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cab1:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0050cab3:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050cab6:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_0050cabd:  // mov dword ptr [esp + esi*4 + 0x199c], eax
    M32((uint32_t)(esp + esi * 4u + 0x199cu)) = (uint32_t)(eax);
L_0050cac4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cac5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050cac7:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cac9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cac9:  // lea edx, [esp + 0x66c]
    edx = (uint32_t)((uint32_t)(esp + 0x66cu));
L_0050cad0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050cad1:  // call 0x50d9e0
    t0 = 0x0050d9e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cad6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cad6:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050cad9:  // inc dword ptr [esp + 0x14]
    t0 = linc<32>(M32((uint32_t)(esp + 0x14u)), f);
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(t0);
L_0050cadd:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0050cae1:  // add eax, 0xffff
    t0 = ladd<32>(eax, 0xffffu, f);
    eax = (uint32_t)(t0);
L_0050cae6:  // test ax, ax
    t0 = llog<16>((eax & 0xffffu) & (eax & 0xffffu), f);
L_0050cae9:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0050caed:  // jne 0x50bc62
    if (!f.zf) goto L_0050bc62;
L_0050caf3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050caf5:  // push 0x63d450
    t0 = 0x63d450u; esp -= 4; M32(esp) = t0;
L_0050cafa:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050caff:  // call 0x42b800
    t0 = 0x0042b800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb04:  // push 0x63d418
    t0 = 0x63d418u; esp -= 4; M32(esp) = t0;
L_0050cb09:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050cb0e:  // call 0x42b500
    t0 = 0x0042b500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb13:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0050cb17:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0050cb19:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cb1a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cb1c:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb21:  // cmp word ptr [esp + 0x3c], 0
    t0 = lsub<16>(M16((uint32_t)(esp + 0x3cu)), 0x0u, f);
L_0050cb27:  // je 0x50cd0a
    if (f.zf) goto L_0050cd0a;
L_0050cb2d:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0050cb31:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cb33:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cb34:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cb36:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_0050cb3e:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb43:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0050cb47:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cb49:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050cb4a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cb4c:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb51:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0050cb55:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cb57:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cb58:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cb5a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb5f:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_0050cb63:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cb65:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cb66:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cb68:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb6du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb6d:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0050cb71:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cb73:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050cb74:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cb76:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb7b:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_0050cb82:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cb87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cb87:  // mov edi, 0x62d7a0
    edi = (uint32_t)(0x62d7a0u);
L_0050cb8c:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0050cb8f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050cb91:  // lea edx, [esp + 0x46c]
    edx = (uint32_t)((uint32_t)(esp + 0x46cu));
L_0050cb98:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050cb9a:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0050cb9c:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0050cb9e:  // mov dword ptr [esp + 0xac], 0x5dc18c
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0x5dc18cu);
L_0050cba9:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0050cbab:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050cbad:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0050cbaf:  // mov dword ptr [esp + 0x468], 1
    M32((uint32_t)(esp + 0x468u)) = (uint32_t)(0x1u);
L_0050cbba:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050cbbd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050cbbf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050cbc1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050cbc3:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0050cbc6:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0050cbc8:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0050cbcc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cbcd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cbcf:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cbd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cbd4:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0050cbd8:  // xor bl, bl
    t0 = llog<8>((ebx & 0xffu) ^ (ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050cbda:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0050cbdc:  // jle 0x50cbfc
    if ((f.zf || f.sf != f.of)) goto L_0050cbfc;
L_0050cbde:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050cbe1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050cbe3:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cbe5:  // lea eax, [esp + edx + 0x470]
    eax = (uint32_t)((uint32_t)(esp + edx + 0x470u));
L_0050cbec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cbed:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cbf2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cbf2:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0050cbf6:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050cbf8:  // cmp bl, al
    t0 = lsub<8>((ebx & 0xffu), (eax & 0xffu), f);
L_0050cbfa:  // jl 0x50cbde
    if ((f.sf != f.of)) goto L_0050cbde;
L_0050cbfc:  // movsx ecx, bl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050cbff:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0050cc03:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cc05:  // mov byte ptr [esp + ecx + 0x470], 0
    M8((uint32_t)(esp + ecx + 0x470u)) = (uint8_t)(0x0u);
L_0050cc0d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050cc0e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cc10:  // mov dword ptr [esp + 0x470], 0
    M32((uint32_t)(esp + 0x470u)) = (uint32_t)(0x0u);
L_0050cc1b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cc20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cc20:  // mov eax, dword ptr [esp + 0x38f0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050cc27:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cc29:  // jne 0x50cc36
    if (!f.zf) goto L_0050cc36;
L_0050cc2b:  // cmp dword ptr [esp + 0x38], -1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x38u)), 0xffffffffu, f);
L_0050cc30:  // jne 0x50ccf8
    if (!f.zf) goto L_0050ccf8;
L_0050cc36:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0050cc3a:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_0050cc3e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cc3f:  // call 0x4de8c0
    t0 = 0x004de8c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cc44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cc44:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050cc48:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cc4a:  // je 0x50ccf8
    if (f.zf) goto L_0050ccf8;
L_0050cc50:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050cc52:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0050cc54:  // call 0x4bf090
    t0 = 0x004bf090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cc59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cc59:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050cc5c:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_0050cc60:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050cc62:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cc67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cc67:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0050cc6c:  // jns 0x50cc75
    if (!f.sf) goto L_0050cc75;
L_0050cc6e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050cc6f:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0050cc74:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050cc75:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_0050cc79:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_0050cc7d:  // fild dword ptr [esp + 0x44]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x44u)));
L_0050cc81:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_0050cc87:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_0050cc8b:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cc90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cc90:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0050cc95:  // jns 0x50cc9e
    if (!f.sf) goto L_0050cc9e;
L_0050cc97:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050cc98:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0050cc9d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050cc9e:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_0050cca2:  // lea eax, [esp + 0xac]
    eax = (uint32_t)((uint32_t)(esp + 0xacu));
L_0050cca9:  // fild dword ptr [esp + 0x44]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x44u)));
L_0050ccad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050ccae:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050ccb0:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_0050ccb6:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_0050ccba:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_0050ccbe:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_0050ccc2:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0050ccc6:  // fstp dword ptr [esp + 0xb4]
    F32((uint32_t)(esp + 0xb4u)) = lf32(ST(0));
    lpop(x);
L_0050cccd:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0050ccd1:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_0050ccd5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0050ccd7:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_0050ccdb:  // fstp dword ptr [esp + 0xb8]
    F32((uint32_t)(esp + 0xb8u)) = lf32(ST(0));
    lpop(x);
L_0050cce2:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0050cce4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050cce6:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cce9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cce9:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050cced:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050ccee:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0050ccf2:  // jne 0x50cc50
    if (!f.zf) goto L_0050cc50;
L_0050ccf8:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0050ccfc:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050ccfd:  // test ax, ax
    t0 = llog<16>((eax & 0xffffu) & (eax & 0xffffu), f);
L_0050cd00:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_0050cd04:  // jne 0x50cb2d
    if (!f.zf) goto L_0050cb2d;
L_0050cd0a:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_0050cd0e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cd10:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cd11:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cd13:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cd18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cd18:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0050cd1c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cd1e:  // je 0x50cef9
    if (f.zf) goto L_0050cef9;
L_0050cd24:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_0050cd2b:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cd30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cd30:  // mov edi, 0x62d7a0
    edi = (uint32_t)(0x62d7a0u);
L_0050cd35:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0050cd38:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050cd3a:  // lea edx, [esp + 0x46c]
    edx = (uint32_t)((uint32_t)(esp + 0x46cu));
L_0050cd41:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050cd43:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0050cd45:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0050cd47:  // mov dword ptr [esp + 0xac], 0x5dc18c
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0x5dc18cu);
L_0050cd52:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0050cd54:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050cd56:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0050cd58:  // mov dword ptr [esp + 0x468], 1
    M32((uint32_t)(esp + 0x468u)) = (uint32_t)(0x1u);
L_0050cd63:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050cd66:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050cd68:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050cd6a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050cd6c:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0050cd6f:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0050cd71:  // lea ecx, [esp + 0x17]
    ecx = (uint32_t)((uint32_t)(esp + 0x17u));
L_0050cd75:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cd76:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cd78:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cd7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cd7d:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0050cd81:  // xor bl, bl
    t0 = llog<8>((ebx & 0xffu) ^ (ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050cd83:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0050cd85:  // jle 0x50cda5
    if ((f.zf || f.sf != f.of)) goto L_0050cda5;
L_0050cd87:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050cd8a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050cd8c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cd8e:  // lea eax, [esp + edx + 0x570]
    eax = (uint32_t)((uint32_t)(esp + edx + 0x570u));
L_0050cd95:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cd96:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cd9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cd9b:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0050cd9f:  // inc bl
    t0 = linc<8>((ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0050cda1:  // cmp bl, al
    t0 = lsub<8>((ebx & 0xffu), (eax & 0xffu), f);
L_0050cda3:  // jl 0x50cd87
    if ((f.sf != f.of)) goto L_0050cd87;
L_0050cda5:  // movsx ecx, bl
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0050cda8:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0050cdac:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cdae:  // mov byte ptr [esp + ecx + 0x570], 0
    M8((uint32_t)(esp + ecx + 0x570u)) = (uint8_t)(0x0u);
L_0050cdb6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050cdb7:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cdb9:  // mov dword ptr [esp + 0x470], 1
    M32((uint32_t)(esp + 0x470u)) = (uint32_t)(0x1u);
L_0050cdc4:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cdc9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cdc9:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050cdcd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cdcf:  // je 0x50ceea
    if (f.zf) goto L_0050ceea;
L_0050cdd5:  // lea eax, [esp + 0xb0]
    eax = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0050cddc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cdde:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cddf:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cde1:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cde6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cde6:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0050cded:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cdef:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cdf0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050cdf2:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cdf7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cdf7:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0050cdfb:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cdfd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050cdfe:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050ce00:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ce05u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ce05:  // mov eax, dword ptr [esp + 0x38f0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050ce0c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050ce0e:  // jne 0x50ce1b
    if (!f.zf) goto L_0050ce1b;
L_0050ce10:  // cmp dword ptr [esp + 0x38], -1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x38u)), 0xffffffffu, f);
L_0050ce15:  // jne 0x50cedb
    if (!f.zf) goto L_0050cedb;
L_0050ce1b:  // lea edi, [esp + 0x56c]
    edi = (uint32_t)((uint32_t)(esp + 0x56cu));
L_0050ce22:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0050ce25:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050ce27:  // lea edx, [esp + 0x46c]
    edx = (uint32_t)((uint32_t)(esp + 0x46cu));
L_0050ce2e:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050ce30:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0050ce32:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0050ce34:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0050ce36:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050ce38:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0050ce3a:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0050ce3e:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050ce41:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050ce43:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050ce45:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0050ce48:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0050ce4a:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0050ce4e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050ce4f:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_0050ce54:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050ce55:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ce5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ce5a:  // lea edi, [esp + 0x40]
    edi = (uint32_t)((uint32_t)(esp + 0x40u));
L_0050ce5e:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0050ce61:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050ce63:  // lea edx, [esp + 0x478]
    edx = (uint32_t)((uint32_t)(esp + 0x478u));
L_0050ce6a:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050ce6c:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0050ce6e:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0050ce70:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050ce72:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0050ce74:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0050ce76:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0050ce78:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0050ce7b:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0050ce7d:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050ce7f:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050ce80:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050ce83:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050ce85:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050ce87:  // lea eax, [esp + 0x47c]
    eax = (uint32_t)((uint32_t)(esp + 0x47cu));
L_0050ce8e:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0050ce91:  // push 0x633a74
    t0 = 0x633a74u; esp -= 4; M32(esp) = t0;
L_0050ce96:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0050ce98:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050ce99:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ce9eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ce9e:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0050cea1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cea3:  // je 0x50cedb
    if (f.zf) goto L_0050cedb;
L_0050cea5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cea7:  // lea ecx, [esp + 0x470]
    ecx = (uint32_t)((uint32_t)(esp + 0x470u));
L_0050ceae:  // push 0x633a6c
    t0 = 0x633a6cu; esp -= 4; M32(esp) = t0;
L_0050ceb3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050ceb4:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050ceb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050ceb9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050cebc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cebe:  // je 0x50cedb
    if (f.zf) goto L_0050cedb;
L_0050cec0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050cec2:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0050cec4:  // call 0x4bf090
    t0 = 0x004bf090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cec9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cec9:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0050cecb:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050cece:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_0050ced5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050ced6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050ced8:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cedbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cedb:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050cedf:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050cee0:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0050cee4:  // jne 0x50cdd5
    if (!f.zf) goto L_0050cdd5;
L_0050ceea:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0050ceee:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050ceef:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_0050cef3:  // jne 0x50cd24
    if (!f.zf) goto L_0050cd24;
L_0050cef9:  // mov esi, dword ptr [esp + 0x38f0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050cf00:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050cf02:  // push 0x63d418
    t0 = 0x63d418u; esp -= 4; M32(esp) = t0;
L_0050cf07:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050cf0c:  // call 0x42b800
    t0 = 0x0042b800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cf11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cf11:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050cf13:  // jne 0x50cf31
    if (!f.zf) goto L_0050cf31;
L_0050cf15:  // cmp dword ptr [esp + 0x38], -1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x38u)), 0xffffffffu, f);
L_0050cf1a:  // je 0x50cf31
    if (f.zf) goto L_0050cf31;
L_0050cf1c:  // mov ecx, dword ptr [0x67a748]
    ecx = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0050cf22:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050cf23:  // call 0x48b660
    t0 = 0x0048b660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cf28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cf28:  // jmp 0x50cf3d
    goto L_0050cf3d;
L_0050cf2a:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0050cf2c:  // jmp 0x50ca97
    goto L_0050ca97;
L_0050cf31:  // mov ecx, dword ptr [0x67a748]
    ecx = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0050cf37:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050cf38:  // call 0x48b010
    t0 = 0x0048b010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cf3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cf3d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050cf41:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050cf43:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cf45:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_0050cf49:  // jle 0x50d173
    if ((f.zf || f.sf != f.of)) goto L_0050d173;
L_0050cf4f:  // mov ebx, dword ptr [esp + edi*4 + 0x199c]
    ebx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x199cu)));
L_0050cf56:  // mov eax, dword ptr [ebx + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_0050cf5c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cf5e:  // jl 0x50cf75
    if ((f.sf != f.of)) goto L_0050cf75;
L_0050cf60:  // cmp eax, dword ptr [esp + 0x14]
    t0 = lsub<32>(eax, M32((uint32_t)(esp + 0x14u)), f);
L_0050cf64:  // jge 0x50cf75
    if ((f.sf == f.of)) goto L_0050cf75;
L_0050cf66:  // mov edx, dword ptr [esp + eax*4 + 0x9fc]
    edx = (uint32_t)(M32((uint32_t)(esp + eax * 4u + 0x9fcu)));
L_0050cf6d:  // mov dword ptr [ebx + 0xa4], edx
    M32((uint32_t)(ebx + 0xa4u)) = (uint32_t)(edx);
L_0050cf73:  // jmp 0x50cf7f
    goto L_0050cf7f;
L_0050cf75:  // mov dword ptr [ebx + 0xa4], 0
    M32((uint32_t)(ebx + 0xa4u)) = (uint32_t)(0x0u);
L_0050cf7f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050cf81:  // je 0x50cfbe
    if (f.zf) goto L_0050cfbe;
L_0050cf83:  // mov eax, dword ptr [0x8a9ac8]
    eax = (uint32_t)(M32((uint32_t)(0x8a9ac8u)));
L_0050cf88:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050cf89:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cf8a:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0050cf8f:  // call 0x41bb20
    t0 = 0x0041bb20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cf94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cf94:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cf96:  // je 0x50d01f
    if (f.zf) goto L_0050d01f;
L_0050cf9c:  // mov eax, dword ptr [esp + edi*4 + 0x293c]
    eax = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x293cu)));
L_0050cfa3:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0050cfa6:  // je 0x50cfbe
    if (f.zf) goto L_0050cfbe;
L_0050cfa8:  // mov ecx, dword ptr [0x8a9ac8]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9ac8u)));
L_0050cfae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050cfaf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050cfb0:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0050cfb5:  // call 0x41bbb0
    t0 = 0x0041bbb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cfbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cfba:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cfbc:  // jne 0x50d01f
    if (!f.zf) goto L_0050d01f;
L_0050cfbe:  // mov ecx, dword ptr [esp + edi*4 + 0x9fc]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x9fcu)));
L_0050cfc5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050cfc6:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050cfc8:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cfcbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cfcb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050cfcd:  // je 0x50d15b
    if (f.zf) goto L_0050d15b;
L_0050cfd3:  // push 0x46b
    t0 = 0x46bu; esp -= 4; M32(esp) = t0;
L_0050cfd8:  // push 0x63d2ac
    t0 = 0x63d2acu; esp -= 4; M32(esp) = t0;
L_0050cfdd:  // push 0x59
    t0 = 0x59u; esp -= 4; M32(esp) = t0;
L_0050cfdf:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050cfe1:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050cfe6:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050cfebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050cfeb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050cfed:  // je 0x50cff9
    if (f.zf) goto L_0050cff9;
L_0050cfef:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_0050cff5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050cff7:  // jmp 0x50cffb
    goto L_0050cffb;
L_0050cff9:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0050cffb:  // mov ecx, dword ptr [esp + edi*4 + 0x9fc]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x9fcu)));
L_0050d002:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d003:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050d005:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d00au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d00a:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050d00e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050d00f:  // lea ecx, [edx + 0xc0]
    ecx = (uint32_t)((uint32_t)(edx + 0xc0u));
L_0050d015:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d01au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d01a:  // jmp 0x50d15b
    goto L_0050d15b;
L_0050d01f:  // mov ecx, dword ptr [esp + edi*4 + 0x9fc]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x9fcu)));
L_0050d026:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050d028:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050d02a:  // call dword ptr [eax + 0x98]
    t0 = M32((uint32_t)(eax + 0x98u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d030u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d030:  // push 0x485
    t0 = 0x485u; esp -= 4; M32(esp) = t0;
L_0050d035:  // push 0x63d2ac
    t0 = 0x63d2acu; esp -= 4; M32(esp) = t0;
L_0050d03a:  // push 0x59
    t0 = 0x59u; esp -= 4; M32(esp) = t0;
L_0050d03c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d03e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050d043:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d048u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d048:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050d04a:  // je 0x50d054
    if (f.zf) goto L_0050d054;
L_0050d04c:  // mov dword ptr [eax], 0
    M32((uint32_t)(eax)) = (uint32_t)(0x0u);
L_0050d052:  // jmp 0x50d056
    goto L_0050d056;
L_0050d054:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050d056:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050d05a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d05b:  // add ecx, 0xc0
    t0 = ladd<32>(ecx, 0xc0u, f);
    ecx = (uint32_t)(t0);
L_0050d061:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d066u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d066:  // mov edx, dword ptr [esp + edi*4 + 0x9fc]
    edx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x9fcu)));
L_0050d06d:  // mov eax, dword ptr [edx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x34u)));
L_0050d070:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050d073:  // je 0x50d12e
    if (f.zf) goto L_0050d12e;
L_0050d079:  // lea eax, [ebx + 4]
    eax = (uint32_t)((uint32_t)(ebx + 0x4u));
L_0050d07c:  // mov edi, 0xa
    edi = (uint32_t)(0xau);
L_0050d081:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0050d083:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_0050d087:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050d08a:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_0050d08e:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0050d091:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0050d095:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0050d098:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_0050d09c:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0050d0a2:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d0a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d0a7:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0050d0ad:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050d0af:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d0b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d0b4:  // and esi, 0x8000ffff
    t0 = llog<32>(esi & 0x8000ffffu, f);
    esi = (uint32_t)(t0);
L_0050d0ba:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0050d0bc:  // jns 0x50d0c6
    if (!f.sf) goto L_0050d0c6;
L_0050d0be:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0050d0bf:  // or esi, 0xffff0000
    t0 = llog<32>(esi | 0xffff0000u, f);
    esi = (uint32_t)(t0);
L_0050d0c5:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0050d0c6:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_0050d0ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d0cb:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_0050d0cf:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0050d0d4:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_0050d0da:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_0050d0e0:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_0050d0e6:  // fadd dword ptr [esp + 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x60u)));
L_0050d0ea:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050d0ed:  // jns 0x50d0f6
    if (!f.sf) goto L_0050d0f6;
L_0050d0ef:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050d0f0:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0050d0f5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0050d0f6:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0050d0fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d0fb:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_0050d0ff:  // mov ecx, dword ptr [0x89c9b0]
    ecx = (uint32_t)(M32((uint32_t)(0x89c9b0u)));
L_0050d105:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_0050d10b:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_0050d111:  // fmul dword ptr [0x5d85d8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d8u)));
L_0050d117:  // fadd dword ptr [esp + 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x60u)));
L_0050d11b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050d11e:  // call 0x5475d0
    t0 = 0x005475d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d123u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d123:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050d124:  // jne 0x50d09c
    if (!f.zf) goto L_0050d09c;
L_0050d12a:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0050d12e:  // mov ecx, dword ptr [esp + edi*4 + 0x9fc]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x9fcu)));
L_0050d135:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050d136:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0050d138:  // call dword ptr [eax + 0xe8]
    t0 = M32((uint32_t)(eax + 0xe8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d13eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d13e:  // mov ecx, dword ptr [esp + edi*4 + 0x9fc]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x9fcu)));
L_0050d145:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0050d147:  // je 0x50d150
    if (f.zf) goto L_0050d150;
L_0050d149:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0050d14b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050d14d:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d150u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d150:  // mov dword ptr [esp + edi*4 + 0x9fc], 0
    M32((uint32_t)(esp + edi * 4u + 0x9fcu)) = (uint32_t)(0x0u);
L_0050d15b:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050d15f:  // mov esi, dword ptr [esp + 0x38f0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050d166:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050d167:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0050d169:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_0050d16d:  // jl 0x50cf4f
    if ((f.sf != f.of)) goto L_0050cf4f;
L_0050d173:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050d177:  // lea eax, [esp + 0x9fc]
    eax = (uint32_t)((uint32_t)(esp + 0x9fcu));
L_0050d17e:  // and ecx, 0xffff
    t0 = llog<32>(ecx & 0xffffu, f);
    ecx = (uint32_t)(t0);
L_0050d184:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d185:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d186:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d187:  // call 0x505ae0
    t0 = 0x00505ae0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d18cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d18c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050d18f:  // lea edx, [esp + 0xa0]
    edx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_0050d196:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d198:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d19a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050d19b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d1a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d1a0:  // lea eax, [esp + 0xa4]
    eax = (uint32_t)((uint32_t)(esp + 0xa4u));
L_0050d1a7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d1a9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d1aa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d1ac:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d1b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d1b1:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_0050d1b8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d1ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d1bb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d1bd:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d1c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d1c2:  // lea edx, [esp + 0x80]
    edx = (uint32_t)((uint32_t)(esp + 0x80u));
L_0050d1c9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d1cb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050d1cc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d1ce:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d1d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d1d3:  // lea eax, [esp + 0x90]
    eax = (uint32_t)((uint32_t)(esp + 0x90u));
L_0050d1da:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d1dc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d1dd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d1df:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d1e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d1e4:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_0050d1e8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d1ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d1eb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d1ed:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d1f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d1f2:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_0050d1f6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d1f8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050d1f9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d1fb:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d200u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d200:  // lea eax, [esp + 0x7c]
    eax = (uint32_t)((uint32_t)(esp + 0x7cu));
L_0050d204:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d206:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d207:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d209:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d20eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d20e:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_0050d215:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d217:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d218:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d21a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d21fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d21f:  // lea edx, [esp + 0x8c]
    edx = (uint32_t)((uint32_t)(esp + 0x8cu));
L_0050d226:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d228:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050d229:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d22b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d230u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d230:  // lea eax, [esp + 0x68]
    eax = (uint32_t)((uint32_t)(esp + 0x68u));
L_0050d234:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d236:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d237:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d239:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d23eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d23e:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050d242:  // cmp ax, 0x2d
    t0 = lsub<16>((eax & 0xffffu), 0x2du, f);
L_0050d246:  // jb 0x50d2a4
    if (f.cf) goto L_0050d2a4;
L_0050d248:  // cmp ax, 0x30
    t0 = lsub<16>((eax & 0xffffu), 0x30u, f);
L_0050d24c:  // jae 0x50d2a4
    if (!f.cf) goto L_0050d2a4;
L_0050d24e:  // lea ecx, [esp + 0x94]
    ecx = (uint32_t)((uint32_t)(esp + 0x94u));
L_0050d255:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d257:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d258:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d25a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d25fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d25f:  // lea edx, [esp + 0x9c]
    edx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_0050d266:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d268:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050d269:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d26b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d270u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d270:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_0050d277:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d279:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d27a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d27c:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d281u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d281:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0050d285:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d287:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d288:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d28a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d28fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d28f:  // lea edx, [esp + 0x98]
    edx = (uint32_t)((uint32_t)(esp + 0x98u));
L_0050d296:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d298:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050d299:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d29b:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d2a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d2a0:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050d2a4:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0050d2a8:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050d2aa:  // je 0x50d2b1
    if (f.zf) goto L_0050d2b1;
L_0050d2ac:  // cmp ecx, -1
    t0 = lsub<32>(ecx, 0xffffffffu, f);
L_0050d2af:  // jne 0x50d30d
    if (!f.zf) goto L_0050d30d;
L_0050d2b1:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_0050d2b8:  // fstp dword ptr [0x8a9b84]
    F32((uint32_t)(0x8a9b84u)) = lf32(ST(0));
    lpop(x);
L_0050d2be:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0050d2c5:  // fstp dword ptr [0x8a9b88]
    F32((uint32_t)(0x8a9b88u)) = lf32(ST(0));
    lpop(x);
L_0050d2cb:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_0050d2cf:  // fstp dword ptr [0x8a9b9c]
    F32((uint32_t)(0x8a9b9cu)) = lf32(ST(0));
    lpop(x);
L_0050d2d5:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_0050d2dc:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0050d2e0:  // fstp dword ptr [0x8a9ba0]
    F32((uint32_t)(0x8a9ba0u)) = lf32(ST(0));
    lpop(x);
L_0050d2e6:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_0050d2ed:  // fstp dword ptr [0x8a9ba4]
    F32((uint32_t)(0x8a9ba4u)) = lf32(ST(0));
    lpop(x);
L_0050d2f3:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0050d2f7:  // mov dword ptr [0x8a9b90], edx
    M32((uint32_t)(0x8a9b90u)) = (uint32_t)(edx);
L_0050d2fd:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0050d301:  // fstp dword ptr [0x8a9ba8]
    F32((uint32_t)(0x8a9ba8u)) = lf32(ST(0));
    lpop(x);
L_0050d307:  // mov dword ptr [0x8a9b94], edx
    M32((uint32_t)(0x8a9b94u)) = (uint32_t)(edx);
L_0050d30d:  // cmp ax, 0x2f
    t0 = lsub<16>((eax & 0xffffu), 0x2fu, f);
L_0050d311:  // jb 0x50d392
    if (f.cf) goto L_0050d392;
L_0050d313:  // mov edx, dword ptr [esp + 0x38f0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050d31a:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0050d31c:  // jne 0x50d355
    if (!f.zf) goto L_0050d355;
L_0050d31e:  // cmp ecx, -1
    t0 = lsub<32>(ecx, 0xffffffffu, f);
L_0050d321:  // je 0x50d355
    if (f.zf) goto L_0050d355;
L_0050d323:  // mov ecx, dword ptr [0x855290]
    ecx = (uint32_t)(M32((uint32_t)(0x855290u)));
L_0050d329:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_0050d32e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d32f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050d331:  // call 0x4bdff0
    t0 = 0x004bdff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d336u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d336:  // mov ecx, dword ptr [0x855294]
    ecx = (uint32_t)(M32((uint32_t)(0x855294u)));
L_0050d33c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d33d:  // call 0x4bdff0
    t0 = 0x004bdff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d342u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d342:  // mov ecx, dword ptr [0x855298]
    ecx = (uint32_t)(M32((uint32_t)(0x855298u)));
L_0050d348:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d349:  // call 0x4bdff0
    t0 = 0x004bdff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d34eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d34e:  // cmp esi, 0x32
    t0 = lsub<32>(esi, 0x32u, f);
L_0050d351:  // jge 0x50d38e
    if ((f.sf == f.of)) goto L_0050d38e;
L_0050d353:  // jmp 0x50d385
    goto L_0050d385;
L_0050d355:  // mov ecx, dword ptr [0x855290]
    ecx = (uint32_t)(M32((uint32_t)(0x855290u)));
L_0050d35b:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_0050d360:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d361:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050d363:  // call 0x4be050
    t0 = 0x004be050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d368u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d368:  // mov ecx, dword ptr [0x855294]
    ecx = (uint32_t)(M32((uint32_t)(0x855294u)));
L_0050d36e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d36f:  // call 0x4be050
    t0 = 0x004be050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d374u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d374:  // mov ecx, dword ptr [0x855298]
    ecx = (uint32_t)(M32((uint32_t)(0x855298u)));
L_0050d37a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d37b:  // call 0x4be050
    t0 = 0x004be050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d380u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d380:  // cmp esi, 0x32
    t0 = lsub<32>(esi, 0x32u, f);
L_0050d383:  // jge 0x50d38e
    if ((f.sf == f.of)) goto L_0050d38e;
L_0050d385:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050d386:  // call 0x4be170
    t0 = 0x004be170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d38bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d38b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0050d38e:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050d392:  // cmp ax, 0x31
    t0 = lsub<16>((eax & 0xffffu), 0x31u, f);
L_0050d396:  // jb 0x50d3bb
    if (f.cf) goto L_0050d3bb;
L_0050d398:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0050d39c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0050d39e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050d39f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0050d3a1:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d3a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d3a6:  // mov eax, dword ptr [esp + 0x38f0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050d3ad:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050d3af:  // jne 0x50d3bb
    if (!f.zf) goto L_0050d3bb;
L_0050d3b1:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0050d3b5:  // fstp dword ptr [0x8a9bb0]
    F32((uint32_t)(0x8a9bb0u)) = lf32(ST(0));
    lpop(x);
L_0050d3bb:  // lea esi, [esp + 0x199c]
    esi = (uint32_t)((uint32_t)(esp + 0x199cu));
L_0050d3c2:  // mov edi, 0x3e8
    edi = (uint32_t)(0x3e8u);
L_0050d3c7:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0050d3c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050d3ca:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0050d3cf:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d3d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d3d4:  // mov dword ptr [esi], 0
    M32((uint32_t)(esi)) = (uint32_t)(0x0u);
L_0050d3da:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0050d3dd:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050d3de:  // jne 0x50d3c7
    if (!f.zf) goto L_0050d3c7;
L_0050d3e0:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050d3e4:  // mov esi, dword ptr [edx + 0x120]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x120u)));
L_0050d3ea:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050d3ec:  // je 0x50d3f2
    if (f.zf) goto L_0050d3f2;
L_0050d3ee:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0050d3f0:  // jmp 0x50d3f4
    goto L_0050d3f4;
L_0050d3f2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050d3f4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050d3f6:  // je 0x50d417
    if (f.zf) goto L_0050d417;
L_0050d3f8:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050d3fb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050d3fd:  // je 0x50d406
    if (f.zf) goto L_0050d406;
L_0050d3ff:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050d401:  // call 0x5392a0
    t0 = 0x005392a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d406u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d406:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0050d409:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0050d40b:  // je 0x50d411
    if (f.zf) goto L_0050d411;
L_0050d40d:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0050d40f:  // jmp 0x50d413
    goto L_0050d413;
L_0050d411:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050d413:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050d415:  // jne 0x50d3f8
    if (!f.zf) goto L_0050d3f8;
L_0050d417:  // mov eax, dword ptr [esp + 0x38f0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38f0u)));
L_0050d41e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050d420:  // jne 0x50d48e
    if (!f.zf) goto L_0050d48e;
L_0050d422:  // push 0x3e800000
    t0 = 0x3e800000u; esp -= 4; M32(esp) = t0;
L_0050d427:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050d42c:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d431u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d431:  // call 0x50dcb0
    t0 = 0x0050dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d436u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d436:  // mov ecx, dword ptr [0x67a748]
    ecx = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0050d43c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0050d43e:  // call 0x48b8e0
    t0 = 0x0048b8e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d443u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d443:  // mov ecx, dword ptr [0x67a748]
    ecx = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0050d449:  // call 0x48b7d0
    t0 = 0x0048b7d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d44eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d44e:  // cmp word ptr [esp + 0x18], 0x2f
    t0 = lsub<16>(M16((uint32_t)(esp + 0x18u)), 0x2fu, f);
L_0050d454:  // jae 0x50d45b
    if (!f.cf) goto L_0050d45b;
L_0050d456:  // call 0x4bc8d0
    t0 = 0x004bc8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d45bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d45b:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_0050d460:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050d465:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d46au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d46a:  // mov eax, dword ptr [0x8a9abc]
    eax = (uint32_t)(M32((uint32_t)(0x8a9abcu)));
L_0050d46f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050d471:  // je 0x50d47a
    if (f.zf) goto L_0050d47a;
L_0050d473:  // call 0x4bcbf0
    t0 = 0x004bcbf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d478u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d478:  // jmp 0x50d47f
    goto L_0050d47f;
L_0050d47a:  // call 0x4bcd60
    t0 = 0x004bcd60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d47fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d47f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0050d484:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0050d489:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050d48eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050d48e:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0050d493:  // jmp 0x50d497
    goto L_0050d497;
L_0050d495:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050d497:  // mov ecx, dword ptr [esp + 0x38dc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38dcu)));
L_0050d49e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050d49f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050d4a0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0050d4a1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0050d4a2:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050d4a9:  // add esp, 0x38d8
    t0 = ladd<32>(esp, 0x38d8u, f);
    esp = (uint32_t)(t0);
L_0050d4af:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0050b9c0, 0050b9c0)
