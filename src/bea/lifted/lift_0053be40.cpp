// lifted from 0053be40 (FUN_0053be40, 902 bytes, 265 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053be40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053be40;
L_0053be40:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053be42:  // push 0x5d778e
    t0 = 0x5d778eu; esp -= 4; M32(esp) = t0;
L_0053be47:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0053be4d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053be4e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0053be55:  // sub esp, 0xc
    t0 = lsub<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0053be58:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053be59:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053be5a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053be5b:  // push 0x43
    t0 = 0x43u; esp -= 4; M32(esp) = t0;
L_0053be5d:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0053be5f:  // push 0x650454
    t0 = 0x650454u; esp -= 4; M32(esp) = t0;
L_0053be64:  // mov ebx, 0x20
    ebx = (uint32_t)(0x20u);
L_0053be69:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_0053be6b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053be6c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053be71:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053be76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053be76:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053be7a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053be7c:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_0053be84:  // je 0x53be8f
    if (f.zf) goto L_0053be8f;
L_0053be86:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053be88:  // call 0x418470
    t0 = 0x00418470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053be8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053be8d:  // jmp 0x53be91
    goto L_0053be91;
L_0053be8f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053be91:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053be93:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053be95:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0053be97:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0053be99:  // push 0x65044c
    t0 = 0x65044cu; esp -= 4; M32(esp) = t0;
L_0053be9e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053bea0:  // mov dword ptr [esp + 0x34], 0xffffffff
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xffffffffu);
L_0053bea8:  // mov dword ptr [edi + 0x3c08], eax
    M32((uint32_t)(edi + 0x3c08u)) = (uint32_t)(eax);
L_0053beae:  // call 0x4184c0
    t0 = 0x004184c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053beb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053beb3:  // mov al, byte ptr [0x888a90]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x888a90u))) & 0xffu);
L_0053beb8:  // mov ecx, dword ptr [0x650424]
    ecx = (uint32_t)(M32((uint32_t)(0x650424u)));
L_0053bebe:  // test bl, al
    t0 = llog<8>((ebx & 0xffu) & (eax & 0xffu), f);
L_0053bec0:  // jne 0x53becb
    if (!f.zf) goto L_0053becb;
L_0053bec2:  // mov eax, dword ptr [0x89c924]
    eax = (uint32_t)(M32((uint32_t)(0x89c924u)));
L_0053bec7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053bec9:  // je 0x53bed4
    if (f.zf) goto L_0053bed4;
L_0053becb:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0053becd:  // mov dword ptr [0x650428], eax
    M32((uint32_t)(0x650428u)) = (uint32_t)(eax);
L_0053bed2:  // jmp 0x53bed9
    goto L_0053bed9;
L_0053bed4:  // mov eax, dword ptr [0x650428]
    eax = (uint32_t)(M32((uint32_t)(0x650428u)));
L_0053bed9:  // mov edx, dword ptr [0x888aac]
    edx = (uint32_t)(M32((uint32_t)(0x888aacu)));
L_0053bedf:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0053bee1:  // jbe 0x53beef
    if ((f.cf || f.zf)) goto L_0053beef;
L_0053bee3:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053bee5:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0053bee7:  // ja 0x53bee3
    if ((!f.cf && !f.zf)) goto L_0053bee3;
L_0053bee9:  // mov dword ptr [0x650424], ecx
    M32((uint32_t)(0x650424u)) = (uint32_t)(ecx);
L_0053beef:  // mov ecx, dword ptr [0x888ab0]
    ecx = (uint32_t)(M32((uint32_t)(0x888ab0u)));
L_0053bef5:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0053bef7:  // jbe 0x53bf04
    if ((f.cf || f.zf)) goto L_0053bf04;
L_0053bef9:  // shr eax, 1
    t0 = lshr<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0053befb:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0053befd:  // ja 0x53bef9
    if ((!f.cf && !f.zf)) goto L_0053bef9;
L_0053beff:  // mov dword ptr [0x650428], eax
    M32((uint32_t)(0x650428u)) = (uint32_t)(eax);
L_0053bf04:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053bf06:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053bf08:  // setae al
    eax = (eax & 0xffffff00u) | ((uint32_t)(!f.cf) & 0xffu);
L_0053bf0b:  // push 0xc5
    t0 = 0xc5u; esp -= 4; M32(esp) = t0;
L_0053bf10:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053bf11:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0053bf16:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053bf1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053bf1b:  // test byte ptr [0x888a90], bl
    t0 = llog<8>(M8((uint32_t)(0x888a90u)) & (ebx & 0xffu), f);
L_0053bf21:  // mov eax, dword ptr [0x65042c]
    eax = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053bf26:  // jne 0x53bf32
    if (!f.zf) goto L_0053bf32;
L_0053bf28:  // mov ecx, dword ptr [0x89c924]
    ecx = (uint32_t)(M32((uint32_t)(0x89c924u)));
L_0053bf2e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053bf30:  // je 0x53bf3c
    if (f.zf) goto L_0053bf3c;
L_0053bf32:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053bf34:  // mov dword ptr [0x650430], ecx
    M32((uint32_t)(0x650430u)) = (uint32_t)(ecx);
L_0053bf3a:  // jmp 0x53bf42
    goto L_0053bf42;
L_0053bf3c:  // mov ecx, dword ptr [0x650430]
    ecx = (uint32_t)(M32((uint32_t)(0x650430u)));
L_0053bf42:  // mov edx, dword ptr [0x888aac]
    edx = (uint32_t)(M32((uint32_t)(0x888aacu)));
L_0053bf48:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0053bf4a:  // jbe 0x53bf57
    if ((f.cf || f.zf)) goto L_0053bf57;
L_0053bf4c:  // shr eax, 1
    t0 = lshr<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0053bf4e:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0053bf50:  // ja 0x53bf4c
    if ((!f.cf && !f.zf)) goto L_0053bf4c;
L_0053bf52:  // mov dword ptr [0x65042c], eax
    M32((uint32_t)(0x65042cu)) = (uint32_t)(eax);
L_0053bf57:  // mov eax, dword ptr [0x888ab0]
    eax = (uint32_t)(M32((uint32_t)(0x888ab0u)));
L_0053bf5c:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0053bf5e:  // jbe 0x53bf6c
    if ((f.cf || f.zf)) goto L_0053bf6c;
L_0053bf60:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053bf62:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0053bf64:  // ja 0x53bf60
    if ((!f.cf && !f.zf)) goto L_0053bf60;
L_0053bf66:  // mov dword ptr [0x650430], ecx
    M32((uint32_t)(0x650430u)) = (uint32_t)(ecx);
L_0053bf6c:  // lea esi, [edi + 0x3f04]
    esi = (uint32_t)((uint32_t)(edi + 0x3f04u));
L_0053bf72:  // mov ebx, 2
    ebx = (uint32_t)(0x2u);
L_0053bf77:  // push 0x5b
    t0 = 0x5bu; esp -= 4; M32(esp) = t0;
L_0053bf79:  // push 0x650454
    t0 = 0x650454u; esp -= 4; M32(esp) = t0;
L_0053bf7e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053bf80:  // push 0x158
    t0 = 0x158u; esp -= 4; M32(esp) = t0;
L_0053bf85:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053bf8a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053bf8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053bf8f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053bf93:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053bf95:  // mov dword ptr [esp + 0x20], 1
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x1u);
L_0053bf9d:  // je 0x53bfa8
    if (f.zf) goto L_0053bfa8;
L_0053bf9f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053bfa1:  // call 0x556cc0
    t0 = 0x00556cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053bfa6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053bfa6:  // jmp 0x53bfaa
    goto L_0053bfaa;
L_0053bfa8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053bfaa:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_0053bfac:  // push 0x650454
    t0 = 0x650454u; esp -= 4; M32(esp) = t0;
L_0053bfb1:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053bfb3:  // push 0x158
    t0 = 0x158u; esp -= 4; M32(esp) = t0;
L_0053bfb8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053bfbd:  // mov dword ptr [esp + 0x30], 0xffffffff
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0xffffffffu);
L_0053bfc5:  // mov dword ptr [esi - 0x304], eax
    M32((uint32_t)(esi + 0xfffffcfcu)) = (uint32_t)(eax);
L_0053bfcb:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053bfd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053bfd0:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053bfd4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053bfd6:  // mov dword ptr [esp + 0x20], 2
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x2u);
L_0053bfde:  // je 0x53bfe9
    if (f.zf) goto L_0053bfe9;
L_0053bfe0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053bfe2:  // call 0x556cc0
    t0 = 0x00556cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053bfe7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053bfe7:  // jmp 0x53bfeb
    goto L_0053bfeb;
L_0053bfe9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053bfeb:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053bfed:  // push 0xc6
    t0 = 0xc6u; esp -= 4; M32(esp) = t0;
L_0053bff2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053bff4:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_0053bff6:  // mov eax, dword ptr [0x650428]
    eax = (uint32_t)(M32((uint32_t)(0x650428u)));
L_0053bffb:  // mov ecx, dword ptr [esi - 0x304]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xfffffcfcu)));
L_0053c001:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053c003:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053c005:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053c007:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053c009:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c00a:  // mov eax, dword ptr [0x650424]
    eax = (uint32_t)(M32((uint32_t)(0x650424u)));
L_0053c00f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c010:  // mov dword ptr [esp + 0x40], 0xffffffff
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0xffffffffu);
L_0053c018:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c01bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c01b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053c01d:  // setne cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0053c020:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053c021:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0053c026:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c02bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c02b:  // mov eax, dword ptr [0x650430]
    eax = (uint32_t)(M32((uint32_t)(0x650430u)));
L_0053c030:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0053c032:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053c034:  // push 0xc6
    t0 = 0xc6u; esp -= 4; M32(esp) = t0;
L_0053c039:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053c03b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053c03d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053c03f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053c041:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053c043:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c044:  // mov eax, dword ptr [0x65042c]
    eax = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053c049:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c04a:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c04du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c04d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053c04f:  // setne cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0053c052:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053c053:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0053c058:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c05du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c05d:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0053c060:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0053c061:  // jne 0x53bf77
    if (!f.zf) goto L_0053bf77;
L_0053c067:  // push 0x62
    t0 = 0x62u; esp -= 4; M32(esp) = t0;
L_0053c069:  // push 0x650454
    t0 = 0x650454u; esp -= 4; M32(esp) = t0;
L_0053c06e:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_0053c070:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_0053c072:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053c077:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c07cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c07c:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053c080:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0053c082:  // mov dword ptr [esp + 0x20], 3
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3u);
L_0053c08a:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053c08c:  // je 0x53c097
    if (f.zf) goto L_0053c097;
L_0053c08e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c090:  // call 0x4fff00
    t0 = 0x004fff00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c095u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c095:  // jmp 0x53c099
    goto L_0053c099;
L_0053c097:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053c099:  // push 0x102
    t0 = 0x102u; esp -= 4; M32(esp) = t0;
L_0053c09e:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0053c0a1:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053c0a3:  // push 0x66
    t0 = 0x66u; esp -= 4; M32(esp) = t0;
L_0053c0a5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c0a7:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_0053c0ab:  // mov dword ptr [edi + 0x3f0c], eax
    M32((uint32_t)(edi + 0x3f0cu)) = (uint32_t)(eax);
L_0053c0b1:  // call 0x5000c0
    t0 = 0x005000c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c0b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c0b6:  // mov ecx, dword ptr [edi + 0x3f0c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3f0cu)));
L_0053c0bc:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_0053c0c0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053c0c1:  // call 0x5001b0
    t0 = 0x005001b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c0c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c0c6:  // mov eax, dword ptr [0x650428]
    eax = (uint32_t)(M32((uint32_t)(0x650428u)));
L_0053c0cb:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0053c0cf:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053c0d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053c0d4:  // fild qword ptr [esp + 0x14]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x14u)));
L_0053c0d8:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053c0dc:  // fdivr dword ptr [0x5db2b8]
    ST(0) = ((long double)F32((uint32_t)(0x5db2b8u))) / (ST(0));
L_0053c0e2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053c0e5:  // push 0x1f
    t0 = 0x1fu; esp -= 4; M32(esp) = t0;
L_0053c0e7:  // push 0x32
    t0 = 0x32u; esp -= 4; M32(esp) = t0;
L_0053c0e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c0ea:  // mov eax, dword ptr [0x650424]
    eax = (uint32_t)(M32((uint32_t)(0x650424u)));
L_0053c0ef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c0f0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053c0f1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053c0f3:  // call 0x53c1d0
    t0 = 0x0053c1d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c0f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c0f8:  // mov ecx, dword ptr [edi + 0x3f0c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3f0cu)));
L_0053c0fe:  // call 0x5001e0
    t0 = 0x005001e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c103u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c103:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_0053c105:  // push 0x650454
    t0 = 0x650454u; esp -= 4; M32(esp) = t0;
L_0053c10a:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_0053c10c:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_0053c10e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053c113:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c118u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c118:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053c11c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0053c11e:  // mov dword ptr [esp + 0x20], 4
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x4u);
L_0053c126:  // je 0x53c131
    if (f.zf) goto L_0053c131;
L_0053c128:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c12a:  // call 0x4fff00
    t0 = 0x004fff00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c12fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c12f:  // jmp 0x53c133
    goto L_0053c133;
L_0053c131:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053c133:  // push 0x102
    t0 = 0x102u; esp -= 4; M32(esp) = t0;
L_0053c138:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053c13a:  // push 0x52
    t0 = 0x52u; esp -= 4; M32(esp) = t0;
L_0053c13c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053c13e:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_0053c142:  // mov dword ptr [edi + 0x3f10], eax
    M32((uint32_t)(edi + 0x3f10u)) = (uint32_t)(eax);
L_0053c148:  // call 0x5000c0
    t0 = 0x005000c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c14du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c14d:  // mov ecx, dword ptr [edi + 0x3f10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3f10u)));
L_0053c153:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_0053c157:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053c158:  // call 0x5001b0
    t0 = 0x005001b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c15du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c15d:  // mov eax, dword ptr [0x650430]
    eax = (uint32_t)(M32((uint32_t)(0x650430u)));
L_0053c162:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0053c166:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053c16a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053c16b:  // fild qword ptr [esp + 0x14]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x14u)));
L_0053c16f:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053c173:  // fdivr dword ptr [0x5d8c44]
    ST(0) = ((long double)F32((uint32_t)(0x5d8c44u))) / (ST(0));
L_0053c179:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053c17c:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0053c17e:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_0053c180:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c181:  // mov eax, dword ptr [0x65042c]
    eax = (uint32_t)(M32((uint32_t)(0x65042cu)));
L_0053c186:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053c187:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053c188:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053c18a:  // call 0x53c1d0
    t0 = 0x0053c1d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c18fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c18f:  // mov ecx, dword ptr [edi + 0x3f10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3f10u)));
L_0053c195:  // call 0x5001e0
    t0 = 0x005001e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c19au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c19a:  // mov ecx, dword ptr [edi + 0x3c08]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3c08u)));
L_0053c1a0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053c1a2:  // push 0x1e
    t0 = 0x1eu; esp -= 4; M32(esp) = t0;
L_0053c1a4:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_0053c1a9:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_0053c1ae:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053c1af:  // call 0x418720
    t0 = 0x00418720u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053c1b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053c1b4:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053c1b8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053c1b9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053c1ba:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053c1bb:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0053c1c2:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0053c1c5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053be40, 0053be40)
