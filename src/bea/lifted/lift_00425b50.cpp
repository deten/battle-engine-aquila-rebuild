// lifted from 00425b50 (vslot3, 265 bytes, 72 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00425b50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00425b50;
L_00425b50:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00425b53:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00425b54:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00425b58:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00425b59:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00425b5b:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00425b5e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00425b60:  // je 0x425b81
    if (f.zf) goto L_00425b81;
L_00425b62:  // push 0x62465c
    t0 = 0x62465cu; esp -= 4; M32(esp) = t0;
L_00425b67:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00425b6c:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425b71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425b71:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00425b74:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00425b77:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00425b79:  // je 0x425b81
    if (f.zf) goto L_00425b81;
L_00425b7b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00425b7d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00425b7f:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425b81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425b81:  // mov ecx, dword ptr [esi + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_00425b84:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00425b86:  // push 0x624630
    t0 = 0x624630u; esp -= 4; M32(esp) = t0;
L_00425b8b:  // mov dword ptr [edi + 0x38], ecx
    M32((uint32_t)(edi + 0x38u)) = (uint32_t)(ecx);
L_00425b8e:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_00425b93:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_00425b95:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00425b9a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425b9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425b9f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00425ba1:  // je 0x425c31
    if (f.zf) goto L_00425c31;
L_00425ba7:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_00425baf:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00425bb3:  // lea edx, [eax + 0x14]
    edx = (uint32_t)((uint32_t)(eax + 0x14u));
L_00425bb6:  // mov dword ptr [eax + 4], 0
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x0u);
L_00425bbd:  // mov dword ptr [eax + 8], 0
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x0u);
L_00425bc4:  // mov dword ptr [eax + 0xc], 0
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(0x0u);
L_00425bcb:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_00425bd3:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_00425bd5:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00425bd9:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00425be1:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00425be4:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00425be8:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00425bf0:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00425bf8:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00425bfb:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00425bff:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00425c07:  // mov dword ptr [eax], 0x5d8bfc
    M32((uint32_t)(eax)) = (uint32_t)(0x5d8bfcu);
L_00425c0d:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00425c10:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00425c14:  // lea edx, [eax + 0x24]
    edx = (uint32_t)((uint32_t)(eax + 0x24u));
L_00425c17:  // mov dword ptr [eax + 0x24], ecx
    M32((uint32_t)(eax + 0x24u)) = (uint32_t)(ecx);
L_00425c1a:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00425c1e:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00425c21:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00425c25:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00425c28:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00425c2c:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00425c2f:  // jmp 0x425c33
    goto L_00425c33;
L_00425c31:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00425c33:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00425c34:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00425c36:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_00425c39:  // call 0x4269b0
    t0 = 0x004269b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425c3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425c3e:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00425c40:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00425c42:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00425c45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00425c45:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00425c4b:  // fadd dword ptr [edi + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x38u)));
L_00425c4e:  // fstp dword ptr [edi + 0x1c]
    F32((uint32_t)(edi + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00425c51:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00425c52:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00425c53:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00425c56:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00425b50, 00425b50)
