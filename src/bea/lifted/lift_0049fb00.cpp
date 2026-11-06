// lifted from 0049fb00 (vslot35, 153 bytes, 51 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0049fb00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0049fb00;
L_0049fb00:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0049fb06:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0049fb08:  // push 0x5d3436
    t0 = 0x5d3436u; esp -= 4; M32(esp) = t0;
L_0049fb0d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049fb0e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0049fb15:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049fb16:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049fb17:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0049fb19:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049fb1a:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049fb1d:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_0049fb20:  // call dword ptr [eax + 0x54]
    t0 = M32((uint32_t)(eax + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049fb23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049fb23:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049fb27:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0049fb29:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0049fb2b:  // je 0x49fb74
    if (f.zf) goto L_0049fb74;
L_0049fb2d:  // push 0x57
    t0 = 0x57u; esp -= 4; M32(esp) = t0;
L_0049fb2f:  // push 0x62e0e0
    t0 = 0x62e0e0u; esp -= 4; M32(esp) = t0;
L_0049fb34:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_0049fb36:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_0049fb38:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0049fb3d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049fb42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049fb42:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0049fb46:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049fb48:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0049fb50:  // je 0x49fb5e
    if (f.zf) goto L_0049fb5e;
L_0049fb52:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049fb53:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049fb55:  // call 0x43fde0
    t0 = 0x0043fde0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049fb5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049fb5a:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0049fb5c:  // jmp 0x49fb60
    goto L_0049fb60;
L_0049fb5e:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0049fb60:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049fb62:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049fb64:  // mov dword ptr [esp + 0x14], 0xffffffff
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xffffffffu);
L_0049fb6c:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049fb6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049fb6f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049fb71:  // mov dword ptr [ebx + 0xc], edi
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(edi);
L_0049fb74:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0049fb77:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049fb78:  // or ch, 0x40
    t0 = llog<8>(((ecx >> 8) & 0xffu) | 0x40u, f);
    ecx = (ecx & 0xffff00ffu) | (((uint32_t)(t0) & 0xffu) << 8);
L_0049fb7b:  // mov dword ptr [ebx + 8], ecx
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ecx);
L_0049fb7e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049fb80:  // call 0x47c8e0
    t0 = 0x0047c8e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049fb85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049fb85:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0049fb89:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0049fb8a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0049fb8b:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0049fb92:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049fb93:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0049fb96:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0049fb00, 0049fb00)
