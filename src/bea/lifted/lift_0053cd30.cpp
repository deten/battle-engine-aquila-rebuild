// lifted from 0053cd30 (FUN_0053cd30, 1250 bytes, 332 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053cd30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053cd30;
L_0053cd30:  // sub esp, 0x12c
    t0 = lsub<32>(esp, 0x12cu, f);
    esp = (uint32_t)(t0);
L_0053cd36:  // mov eax, dword ptr [0x888a40]
    eax = (uint32_t)(M32((uint32_t)(0x888a40u)));
L_0053cd3b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053cd3c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053cd3d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053cd3e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053cd3f:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0053cd41:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053cd43:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053cd45:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cd47:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053cd4c:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0053cd50:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cd55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cd55:  // mov ebx, dword ptr [esp + 0x140]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_0053cd5c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053cd5e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053cd5f:  // call 0x53c2e0
    t0 = 0x0053c2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cd64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cd64:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053cd65:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053cd67:  // call 0x53c510
    t0 = 0x0053c510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cd6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cd6c:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053cd71:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_0053cd76:  // lea edi, [esp + 0x7c]
    edi = (uint32_t)((uint32_t)(esp + 0x7cu));
L_0053cd7a:  // lea edx, [esp + 0x3c]
    edx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0053cd7e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053cd80:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053cd85:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_0053cd8a:  // lea edi, [esp + 0xfc]
    edi = (uint32_t)((uint32_t)(esp + 0xfcu));
L_0053cd91:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_0053cd99:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053cd9b:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053cda0:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_0053cda5:  // lea edi, [esp + 0xbc]
    edi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_0053cdac:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_0053cdb4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053cdb6:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0053cdbb:  // mov esi, 0x89c928
    esi = (uint32_t)(0x89c928u);
L_0053cdc0:  // lea edi, [esp + 0x3c]
    edi = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0053cdc4:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_0053cdcc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053cdce:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0053cdd2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053cdd3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053cdd4:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053cdd9:  // call 0x550be0
    t0 = 0x00550be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cddeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cdde:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0053cde2:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0053cde6:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0053cde9:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0053cded:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0053cdf2:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_0053cdf6:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0053cdf8:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0053cdfb:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_0053ce02:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0053ce09:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_0053ce0d:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0053ce0f:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_0053ce16:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_0053ce1d:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_0053ce21:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_0053ce28:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053ce2a:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0053ce2e:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0053ce30:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0053ce34:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0053ce37:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0053ce3b:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0053ce3e:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053ce43:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0053ce46:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ce4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ce4b:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0053ce50:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ce55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ce55:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053ce57:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053ce5c:  // je 0x53ce8f
    if (f.zf) goto L_0053ce8f;
L_0053ce5e:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ce63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ce63:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053ce67:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053ce68:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0053ce6c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053ce71:  // fmul dword ptr [0x5e4fbc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e4fbcu)));
L_0053ce77:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053ce7a:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ce7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ce7f:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0053ce83:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0053ce87:  // fmul dword ptr [0x5e4fb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e4fb8u)));
L_0053ce8d:  // jmp 0x53cebe
    goto L_0053cebe;
L_0053ce8f:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ce94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ce94:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0053ce98:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053ce99:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0053ce9d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053cea2:  // fmul dword ptr [0x5db05c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db05cu)));
L_0053cea8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053ceab:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ceb0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ceb0:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0053ceb4:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0053ceb8:  // fmul dword ptr [0x5db05c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db05cu)));
L_0053cebe:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053cebf:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053cec4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053cec7:  // push 0x42c80000
    t0 = 0x42c80000u; esp -= 4; M32(esp) = t0;
L_0053cecc:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_0053ced1:  // call 0x550b10
    t0 = 0x00550b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ced6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ced6:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ced8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ceda:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cedc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053cee1:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cee6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cee6:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053cee8:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ceea:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ceec:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053cef1:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cef6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cef6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cef8:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0053cefa:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ceff:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf04:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0053cf09:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf0e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053cf10:  // je 0x53cf1c
    if (f.zf) goto L_0053cf1c;
L_0053cf12:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0053cf1a:  // jmp 0x53cf33
    goto L_0053cf33;
L_0053cf1c:  // mov eax, dword ptr [ebp + 0x3c10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x3c10u)));
L_0053cf22:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0053cf23:  // and eax, 0x80000001
    t0 = llog<32>(eax & 0x80000001u, f);
    eax = (uint32_t)(t0);
L_0053cf28:  // jns 0x53cf2f
    if (!f.sf) goto L_0053cf2f;
L_0053cf2a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0053cf2b:  // or eax, 0xfffffffe
    t0 = llog<32>(eax | 0xfffffffeu, f);
    eax = (uint32_t)(t0);
L_0053cf2e:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0053cf2f:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0053cf33:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053cf37:  // mov ecx, dword ptr [ebp + eax*4 + 0x3f04]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x3f04u)));
L_0053cf3e:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf43:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053cf44:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cf46:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053cf4b:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf50:  // mov ecx, dword ptr [ebp + 0x3f10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x3f10u)));
L_0053cf56:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cf58:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf5d:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053cf5f:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053cf61:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053cf66:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf6b:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053cf6d:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053cf6f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053cf74:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf79:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cf7b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cf7d:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053cf82:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf87:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0053cf8c:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_0053cf8e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053cf90:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053cf92:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053cf94:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053cf95:  // call dword ptr [ecx + 0x144]
    t0 = M32((uint32_t)(ecx + 0x144u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cf9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cf9b:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0053cf9f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0053cfa1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053cfa2:  // call 0x40d660
    t0 = 0x0040d660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053cfa7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053cfa7:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0053cfa9:  // fchs 
    ST(0) = -ST(0);
L_0053cfab:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0053cfaf:  // fcos 
    ST(0) = lfcos(ST(0));
L_0053cfb1:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_0053cfb9:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053cfbd:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_0053cfc1:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_0053cfc9:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_0053cfd1:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_0053cfd9:  // mov dword ptr [esp + 0x74], 0x3f800000
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x3f800000u);
L_0053cfe1:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_0053cfe5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053cfe9:  // fsin 
    ST(0) = lfsin(ST(0));
L_0053cfeb:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053cfef:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_0053cff3:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053cff7:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_0053cffb:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053cfff:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_0053d003:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0053d007:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_0053d00b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0053d00d:  // fchs 
    ST(0) = -ST(0);
L_0053d00f:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0053d013:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053d017:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0053d01b:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_0053d01f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053d023:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0053d027:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0053d02b:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0053d02f:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0053d033:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_0053d037:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053d03b:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_0053d03f:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0053d043:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_0053d047:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0053d04b:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0053d04f:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0053d053:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0053d057:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_0053d05b:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0053d05f:  // mov dword ptr [esp + 0x64], ecx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ecx);
L_0053d063:  // mov dword ptr [esp + 0x68], edx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edx);
L_0053d067:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0053d06b:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0053d06f:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0053d073:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0053d076:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0053d07a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0053d07f:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_0053d083:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0053d085:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0053d088:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_0053d08f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053d091:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0053d095:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0053d097:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0053d099:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0053d09d:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0053d0a0:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0053d0a4:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0053d0a7:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053d0ac:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0053d0af:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d0b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d0b4:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053d0b8:  // mov ecx, dword ptr [ebp + eax*4 + 0x3c00]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x3c00u)));
L_0053d0bf:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d0c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d0c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053d0c5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d0c7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d0cc:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d0d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d0d1:  // mov ecx, dword ptr [ebp + 0x3f0c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x3f0cu)));
L_0053d0d7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d0d9:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d0deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d0de:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d0e0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d0e2:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053d0e7:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d0ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d0ec:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053d0ee:  // mov ecx, 0x8aa4e8
    ecx = (uint32_t)(0x8aa4e8u);
L_0053d0f3:  // call 0x4881e0
    t0 = 0x004881e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d0f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d0f8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053d0fa:  // je 0x53d110
    if (f.zf) goto L_0053d110;
L_0053d0fc:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0053d101:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0053d103:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d105:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053d107:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053d109:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053d10a:  // call dword ptr [ecx + 0x144]
    t0 = M32((uint32_t)(ecx + 0x144u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d110u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d110:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053d112:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053d114:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d119:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d11eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d11e:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053d120:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053d122:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d127:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d12cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d12c:  // mov eax, dword ptr [0x89ce50]
    eax = (uint32_t)(M32((uint32_t)(0x89ce50u)));
L_0053d131:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053d133:  // je 0x53d143
    if (f.zf) goto L_0053d143;
L_0053d135:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053d137:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0053d139:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d13e:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d143u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d143:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053d145:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053d147:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d149:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d14e:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d153u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d153:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053d155:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053d157:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d159:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d15e:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d163u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d163:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053d165:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053d167:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053d169:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053d16e:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d173u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d173:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053d178:  // lea esi, [esp + 0x7c]
    esi = (uint32_t)((uint32_t)(esp + 0x7cu));
L_0053d17c:  // mov edi, 0x9c6954
    edi = (uint32_t)(0x9c6954u);
L_0053d181:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053d182:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053d184:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053d189:  // lea esi, [esp + 0xc0]
    esi = (uint32_t)((uint32_t)(esp + 0xc0u));
L_0053d190:  // mov edi, 0x9c6914
    edi = (uint32_t)(0x9c6914u);
L_0053d195:  // mov byte ptr [0x9c73e9], 1
    M8((uint32_t)(0x9c73e9u)) = (uint8_t)(0x1u);
L_0053d19c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053d19e:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0053d1a3:  // lea esi, [esp + 0x100]
    esi = (uint32_t)((uint32_t)(esp + 0x100u));
L_0053d1aa:  // mov edi, 0x9c6994
    edi = (uint32_t)(0x9c6994u);
L_0053d1af:  // mov byte ptr [0x9c73e8], 1
    M8((uint32_t)(0x9c73e8u)) = (uint8_t)(0x1u);
L_0053d1b6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053d1b8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053d1ba:  // mov byte ptr [0x9c73ea], 1
    M8((uint32_t)(0x9c73eau)) = (uint8_t)(0x1u);
L_0053d1c1:  // call 0x427210
    t0 = 0x00427210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d1c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d1c6:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0053d1cb:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053d1d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053d1d0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053d1d2:  // je 0x53d1eb
    if (f.zf) goto L_0053d1eb;
L_0053d1d4:  // mov dword ptr [ebp + 0x3c10], 0
    M32((uint32_t)(ebp + 0x3c10u)) = (uint32_t)(0x0u);
L_0053d1de:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053d1df:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053d1e0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053d1e1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053d1e2:  // add esp, 0x12c
    t0 = ladd<32>(esp, 0x12cu, f);
    esp = (uint32_t)(t0);
L_0053d1e8:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0053d1eb:  // mov edx, dword ptr [ebp + 0x3c10]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x3c10u)));
L_0053d1f1:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053d1f2:  // and edx, 0x80000001
    t0 = llog<32>(edx & 0x80000001u, f);
    edx = (uint32_t)(t0);
L_0053d1f8:  // jns 0x53d1ff
    if (!f.sf) goto L_0053d1ff;
L_0053d1fa:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053d1fb:  // or edx, 0xfffffffe
    t0 = llog<32>(edx | 0xfffffffeu, f);
    edx = (uint32_t)(t0);
L_0053d1fe:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053d1ff:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053d200:  // mov dword ptr [ebp + 0x3c10], edx
    M32((uint32_t)(ebp + 0x3c10u)) = (uint32_t)(edx);
L_0053d206:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053d207:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053d208:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053d209:  // add esp, 0x12c
    t0 = ladd<32>(esp, 0x12cu, f);
    esp = (uint32_t)(t0);
L_0053d20f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053cd30, 0053cd30)
