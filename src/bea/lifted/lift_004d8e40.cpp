// lifted from 004d8e40 (vslot66, 2757 bytes, 826 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d8e40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d8e40;
L_004d8e40:  // sub esp, 0x118
    t0 = lsub<32>(esp, 0x118u, f);
    esp = (uint32_t)(t0);
L_004d8e46:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d8e47:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004d8e49:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d8e4a:  // mov eax, dword ptr [ebp + 0x120]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x120u)));
L_004d8e50:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8e52:  // je 0x4d8e71
    if (f.zf) goto L_004d8e71;
L_004d8e54:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8e56:  // lea ecx, [ebp + 0xe0]
    ecx = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_004d8e5c:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8e61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8e61:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d8e63:  // call 0x4dab50
    t0 = 0x004dab50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8e68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8e68:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d8e69:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d8e6a:  // add esp, 0x118
    t0 = ladd<32>(esp, 0x118u, f);
    esp = (uint32_t)(t0);
L_004d8e70:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d8e71:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d8e77:  // mov ecx, dword ptr [eax + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x50u)));
L_004d8e7a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8e7c:  // je 0x4d8f2b
    if (f.zf) goto L_004d8f2b;
L_004d8e82:  // mov ecx, dword ptr [eax + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x9cu)));
L_004d8e88:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8e8a:  // je 0x4d98fc
    if (f.zf) goto L_004d98fc;
L_004d8e90:  // mov eax, dword ptr [ebp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d8e96:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8e98:  // je 0x4d8edf
    if (f.zf) goto L_004d8edf;
L_004d8e9a:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_004d8e9e:  // je 0x4d8edf
    if (f.zf) goto L_004d8edf;
L_004d8ea0:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_004d8ea3:  // fsub dword ptr [ebp + 0x100]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x100u)));
L_004d8ea9:  // lea esi, [ebp + 0xf8]
    esi = (uint32_t)((uint32_t)(ebp + 0xf8u));
L_004d8eaf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8eb0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d8eb3:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_004d8eb6:  // fsub dword ptr [esi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x4u)));
L_004d8eb9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8eba:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d8ebd:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_004d8ec0:  // fsub dword ptr [esi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi)));
L_004d8ec2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8ec3:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004d8ec7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d8eca:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8ecfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8ecf:  // mov ecx, dword ptr [ebp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d8ed5:  // lea eax, [ebp + 0x3c]
    eax = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_004d8ed8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d8ed9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d8eda:  // call 0x40e860
    t0 = 0x0040e860u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8edfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8edf:  // mov ecx, dword ptr [ebp + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_004d8ee5:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d8ee7:  // je 0x4d8ef5
    if (f.zf) goto L_004d8ef5;
L_004d8ee9:  // lea edx, [ebp + 0xf8]
    edx = (uint32_t)((uint32_t)(ebp + 0xf8u));
L_004d8eef:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d8ef0:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8ef5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8ef5:  // mov eax, dword ptr [ebp + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_004d8efb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8efd:  // je 0x4d98fc
    if (f.zf) goto L_004d98fc;
L_004d8f03:  // add ebp, 0x1c
    t0 = ladd<32>(ebp, 0x1cu, f);
    ebp = (uint32_t)(t0);
L_004d8f06:  // add eax, 0x90
    t0 = ladd<32>(eax, 0x90u, f);
    eax = (uint32_t)(t0);
L_004d8f0b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d8f0c:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d8f0f:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004d8f11:  // mov edx, dword ptr [ebp + 4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004d8f14:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004d8f17:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004d8f1a:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004d8f1d:  // mov edx, dword ptr [ebp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004d8f20:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d8f21:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004d8f24:  // add esp, 0x118
    t0 = ladd<32>(esp, 0x118u, f);
    esp = (uint32_t)(t0);
L_004d8f2a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d8f2b:  // mov eax, dword ptr [ebp + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xe8u)));
L_004d8f31:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d8f32:  // lea ebx, [ebp + 0xe8]
    ebx = (uint32_t)((uint32_t)(ebp + 0xe8u));
L_004d8f38:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d8f39:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d8f3b:  // je 0x4d8fb3
    if (f.zf) goto L_004d8fb3;
L_004d8f3d:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_004d8f40:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004d8f43:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8f44:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d8f47:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_004d8f4a:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004d8f4d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8f4e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d8f51:  // fld dword ptr [eax + 0x1c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x1cu)));
L_004d8f54:  // fsub dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_004d8f57:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8f58:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004d8f5c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d8f5f:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8f64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8f64:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d8f6a:  // fld dword ptr [eax + 0x88]
    lpush(x, (long double)F32((uint32_t)(eax + 0x88u)));
L_004d8f70:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004d8f74:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004d8f78:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d8f7c:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004d8f80:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8f82:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d8f86:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004d8f8a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d8f8c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004d8f8e:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004d8f90:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004d8f92:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d8f94:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d8f97:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d8f99:  // jne 0x4d8fb3
    if (!f.zf) goto L_004d8fb3;
L_004d8f9b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8f9d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8f9f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d8fa1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d8fa3:  // call 0x4d9f30
    t0 = 0x004d9f30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8fa8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8fa8:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d8fab:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d8fad:  // call dword ptr [edx + 0xc8]
    t0 = M32((uint32_t)(edx + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8fb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8fb3:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004d8fb8:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004d8fba:  // lea eax, [esp + 0xa0]
    eax = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004d8fc1:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d8fc3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d8fc4:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8fc9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8fc9:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004d8fce:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004d8fd0:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004d8fd4:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d8fd6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d8fd7:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d8fdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d8fdc:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d8fe2:  // fld dword ptr [edx + 0x38]
    lpush(x, (long double)F32((uint32_t)(edx + 0x38u)));
L_004d8fe5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d8feb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d8fed:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d8ff0:  // jne 0x4d9197
    if (!f.zf) goto L_004d9197;
L_004d8ff6:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004d8ffc:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9001u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9001:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004d9006:  // jns 0x4d900f
    if (!f.sf) goto L_004d900f;
L_004d9008:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d9009:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004d900e:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d900f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004d9013:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d9019:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004d901d:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004d9023:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_004d9029:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_004d902f:  // fmul dword ptr [eax + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x38u)));
L_004d9032:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004d9036:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d903bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d903b:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004d9040:  // jns 0x4d9049
    if (!f.sf) goto L_004d9049;
L_004d9042:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d9043:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004d9048:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d9049:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004d904d:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d9053:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004d9057:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004d905c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004d905e:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004d9062:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d9064:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_004d906a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d906b:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_004d9071:  // fmul dword ptr [ecx + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x38u)));
L_004d9074:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d9078:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d907du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d907d:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d9081:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d9085:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d9087:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d9088:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9089:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004d908d:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9092u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9092:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004d9097:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004d909c:  // lea esi, [esp + 0x2c]
    esi = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004d90a0:  // lea edi, [esp + 0x9c]
    edi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004d90a7:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004d90a9:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004d90ad:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d90af:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d90b0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d90b2:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d90b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d90b7:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d90bb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d90bd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d90be:  // fchs 
    ST(0) = -ST(0);
L_004d90c0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d90c3:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d90c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d90c8:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004d90cc:  // fchs 
    ST(0) = -ST(0);
L_004d90ce:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d90d1:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d90d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d90d6:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_004d90dd:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_004d90e0:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_004d90e7:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_004d90ed:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004d90f2:  // lea esi, [esp + 0x28]
    esi = (uint32_t)((uint32_t)(esp + 0x28u));
L_004d90f6:  // lea edi, [esp + 0x68]
    edi = (uint32_t)((uint32_t)(esp + 0x68u));
L_004d90fa:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d90fc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d90fe:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004d9105:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004d910b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d910c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d910e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d9111:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004d9118:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_004d911b:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004d9122:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_004d9128:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9129:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d912b:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_004d9132:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004d9138:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d913a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d913d:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004d9144:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_004d9147:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_004d914e:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_004d9154:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9156:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_004d915d:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004d9163:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9164:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004d9168:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d916a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d916d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9172u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9172:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d9176:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004d917a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d917e:  // mov dword ptr [ebp + 0x7c], eax
    M32((uint32_t)(ebp + 0x7cu)) = (uint32_t)(eax);
L_004d9181:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004d9185:  // mov dword ptr [ebp + 0x80], ecx
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(ecx);
L_004d918b:  // mov dword ptr [ebp + 0x84], edx
    M32((uint32_t)(ebp + 0x84u)) = (uint32_t)(edx);
L_004d9191:  // mov dword ptr [ebp + 0x88], eax
    M32((uint32_t)(ebp + 0x88u)) = (uint32_t)(eax);
L_004d9197:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d919a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d919c:  // call dword ptr [edx + 0xb4]
    t0 = M32((uint32_t)(edx + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d91a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d91a2:  // fadd dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004d91a8:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d91ae:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004d91b4:  // mov ecx, dword ptr [eax + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x68u)));
L_004d91b7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d91b9:  // je 0x4d91fd
    if (f.zf) goto L_004d91fd;
L_004d91bb:  // lea esi, [ebp + 0x1c]
    esi = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d91be:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004d91c3:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004d91c5:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d91cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d91ca:  // fcomp dword ptr [ebp + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x24u)));
    lpop(x);
L_004d91cd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d91cf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d91d2:  // je 0x4d91de
    if (f.zf) goto L_004d91de;
L_004d91d4:  // mov dword ptr [ebp + 0x128], 1
    M32((uint32_t)(ebp + 0x128u)) = (uint32_t)(0x1u);
L_004d91de:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_004d91e4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d91e6:  // je 0x4d91fd
    if (f.zf) goto L_004d91fd;
L_004d91e8:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004d91ea:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004d91ef:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d91f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d91f4:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004d91f7:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004d91fd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d91ff:  // call 0x4015e0
    t0 = 0x004015e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9204u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9204:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d920a:  // fld dword ptr [ecx + 0x38]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x38u)));
L_004d920d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d9213:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9215:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d9218:  // jne 0x4d92c7
    if (!f.zf) goto L_004d92c7;
L_004d921e:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004d9225:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_004d922b:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004d9232:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004d9238:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9239:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d923b:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004d9242:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_004d9245:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9247:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d924a:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004d9251:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_004d9257:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004d925e:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004d9264:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9265:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9267:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004d926e:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_004d9271:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9273:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d9276:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004d927a:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_004d9280:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004d9284:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004d928a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d928b:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004d928f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9291:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004d9295:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_004d9298:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d929a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d929d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d92a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d92a2:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d92a6:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004d92aa:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d92ae:  // mov dword ptr [ebp + 0x7c], edx
    M32((uint32_t)(ebp + 0x7cu)) = (uint32_t)(edx);
L_004d92b1:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004d92b5:  // mov dword ptr [ebp + 0x80], eax
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(eax);
L_004d92bb:  // mov dword ptr [ebp + 0x84], ecx
    M32((uint32_t)(ebp + 0x84u)) = (uint32_t)(ecx);
L_004d92c1:  // mov dword ptr [ebp + 0x88], edx
    M32((uint32_t)(ebp + 0x88u)) = (uint32_t)(edx);
L_004d92c7:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_004d92c9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d92cb:  // je 0x4d93cc
    if (f.zf) goto L_004d93cc;
L_004d92d1:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d92d7:  // fld dword ptr [eax + 0x1c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x1cu)));
L_004d92da:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d92e0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d92e2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d92e5:  // jne 0x4d93cc
    if (!f.zf) goto L_004d93cc;
L_004d92eb:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_004d92ef:  // je 0x4d9382
    if (f.zf) goto L_004d9382;
L_004d92f5:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_004d92f8:  // fsub dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_004d92fb:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_004d92fe:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004d9301:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_004d9304:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004d9307:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d9309:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d930b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004d930d:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004d930f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9311:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d9313:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d9315:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9317:  // fcomp dword ptr [0x5d85f4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85f4u)));
    lpop(x);
L_004d931d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d931f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9321:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9323:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d9326:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9328:  // je 0x4d93cc
    if (f.zf) goto L_004d93cc;
L_004d932e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d9330:  // call dword ptr [edx + 0x1a0]
    t0 = M32((uint32_t)(edx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9336u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9336:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d9338:  // jne 0x4d93cc
    if (!f.zf) goto L_004d93cc;
L_004d933e:  // mov ecx, dword ptr [ebp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d9344:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d9346:  // je 0x4d9356
    if (f.zf) goto L_004d9356;
L_004d9348:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_004d934c:  // je 0x4d9356
    if (f.zf) goto L_004d9356;
L_004d934e:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004d9350:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d9351:  // call 0x407140
    t0 = 0x00407140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9356u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9356:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004d9358:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d935a:  // je 0x4d936d
    if (f.zf) goto L_004d936d;
L_004d935c:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_004d9360:  // je 0x4d936d
    if (f.zf) goto L_004d936d;
L_004d9362:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d9363:  // mov ecx, 0x8551a0
    ecx = (uint32_t)(0x8551a0u);
L_004d9368:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d936du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d936d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d936f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d9371:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9376u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9376:  // mov dword ptr [ebp + 0x130], 0
    M32((uint32_t)(ebp + 0x130u)) = (uint32_t)(0x0u);
L_004d9380:  // jmp 0x4d93cc
    goto L_004d93cc;
L_004d9382:  // test byte ptr [ecx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x2cu)) & 0x4u, f);
L_004d9386:  // jne 0x4d9394
    if (!f.zf) goto L_004d9394;
L_004d9388:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d938a:  // call dword ptr [edx + 0x1a0]
    t0 = M32((uint32_t)(edx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9390u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9390:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d9392:  // jne 0x4d93cc
    if (!f.zf) goto L_004d93cc;
L_004d9394:  // mov ecx, dword ptr [ebp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d939a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d939c:  // je 0x4d93ac
    if (f.zf) goto L_004d93ac;
L_004d939e:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_004d93a2:  // je 0x4d93ac
    if (f.zf) goto L_004d93ac;
L_004d93a4:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004d93a6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d93a7:  // call 0x407140
    t0 = 0x00407140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d93acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d93ac:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004d93ae:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d93b0:  // je 0x4d93c3
    if (f.zf) goto L_004d93c3;
L_004d93b2:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_004d93b6:  // je 0x4d93c3
    if (f.zf) goto L_004d93c3;
L_004d93b8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d93b9:  // mov ecx, 0x8551a0
    ecx = (uint32_t)(0x8551a0u);
L_004d93be:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d93c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d93c3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d93c5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d93c7:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d93ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d93cc:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d93d2:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_004d93d5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d93db:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d93dd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d93e0:  // jne 0x4d983a
    if (!f.zf) goto L_004d983a;
L_004d93e6:  // fld dword ptr [ecx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x28u)));
L_004d93e9:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d93ef:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d93f1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d93f4:  // jne 0x4d983a
    if (!f.zf) goto L_004d983a;
L_004d93fa:  // cmp dword ptr [ebx], 0
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x0u, f);
L_004d93fd:  // je 0x4d983a
    if (f.zf) goto L_004d983a;
L_004d9403:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004d9409:  // fsub dword ptr [ebp + 0xf4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xf4u)));
L_004d940f:  // fld dword ptr [ecx + 0x34]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x34u)));
L_004d9412:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004d9414:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9416:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d9419:  // je 0x4d9838
    if (f.zf) goto L_004d9838;
L_004d941f:  // fld dword ptr [ecx + 0x44]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x44u)));
L_004d9422:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004d9424:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9426:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d9429:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d942b:  // jne 0x4d983a
    if (!f.zf) goto L_004d983a;
L_004d9431:  // mov eax, dword ptr [ecx + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x6cu)));
L_004d9434:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d9436:  // je 0x4d9447
    if (f.zf) goto L_004d9447;
L_004d9438:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d943a:  // call 0x401fa0
    t0 = 0x00401fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d943fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d943f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d9441:  // je 0x4d983a
    if (f.zf) goto L_004d983a;
L_004d9447:  // lea ebx, [ebp + 0x3c]
    ebx = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_004d944a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004d944f:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_004d9451:  // lea edi, [esp + 0x28]
    edi = (uint32_t)((uint32_t)(esp + 0x28u));
L_004d9455:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d9457:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004d945b:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004d945f:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004d9463:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004d9467:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004d946b:  // lea esi, [ebp + 0xe8]
    esi = (uint32_t)((uint32_t)(ebp + 0xe8u));
L_004d9471:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004d9475:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004d9479:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004d947b:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004d947f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004d9483:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004d9487:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d9489:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_004d948d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d948e:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9494u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9494:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d949a:  // mov eax, dword ptr [ecx + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x6cu)));
L_004d949d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d949f:  // je 0x4d94ab
    if (f.zf) goto L_004d94ab;
L_004d94a1:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004d94a7:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004d94ab:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004d94af:  // fsub dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_004d94b2:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004d94b6:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004d94b9:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004d94bd:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004d94c0:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004d94c4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d94c6:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004d94ca:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d94cc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d94ce:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004d94d2:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d94d4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d94d6:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004d94da:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004d94de:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d94e0:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d94e4:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d94e6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d94e8:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d94ec:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d94ee:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d94f0:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d94f4:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004d94f8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d94fa:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004d94fe:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d9500:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9502:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004d9504:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004d9508:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_004d950a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004d950c:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d9510:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9512:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9514:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004d9518:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d951c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d951e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d9520:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d9522:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d9524:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9526:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d952a:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004d952e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9530:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d9532:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004d9534:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9536:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004d953c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d953e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d9541:  // jne 0x4d9567
    if (!f.zf) goto L_004d9567;
L_004d9543:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004d9549:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d954b:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004d954f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004d9553:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d9555:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004d9559:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004d955d:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004d9561:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d9565:  // jmp 0x4d9569
    goto L_004d9569;
L_004d9567:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9569:  // mov edx, dword ptr [ecx + 0x54]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x54u)));
L_004d956c:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004d956e:  // jne 0x4d95c8
    if (!f.zf) goto L_004d95c8;
L_004d9570:  // fld dword ptr [ecx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x40u)));
L_004d9573:  // fcos 
    ST(0) = lfcos(ST(0));
L_004d9575:  // fcomp dword ptr [esp + 0x1c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x1cu)));
    lpop(x);
L_004d9579:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d957b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d957e:  // jne 0x4d95c4
    if (!f.zf) goto L_004d95c4;
L_004d9580:  // mov eax, dword ptr [ecx + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x6cu)));
L_004d9583:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d9585:  // jne 0x4d95c4
    if (!f.zf) goto L_004d95c4;
L_004d9587:  // mov ecx, dword ptr [ebp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d958d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d958f:  // je 0x4d959f
    if (f.zf) goto L_004d959f;
L_004d9591:  // test byte ptr [ecx + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x8u, f);
L_004d9595:  // je 0x4d959f
    if (f.zf) goto L_004d959f;
L_004d9597:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004d9599:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d959a:  // call 0x407140
    t0 = 0x00407140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d959fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d959f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004d95a1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d95a3:  // je 0x4d95b6
    if (f.zf) goto L_004d95b6;
L_004d95a5:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_004d95a9:  // je 0x4d95b6
    if (f.zf) goto L_004d95b6;
L_004d95ab:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d95ac:  // mov ecx, 0x8551a0
    ecx = (uint32_t)(0x8551a0u);
L_004d95b1:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d95b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d95b6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d95b8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d95ba:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d95bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d95bf:  // jmp 0x4d983a
    goto L_004d983a;
L_004d95c4:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004d95c6:  // je 0x4d95dc
    if (f.zf) goto L_004d95dc;
L_004d95c8:  // fld dword ptr [ecx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x40u)));
L_004d95cb:  // fcos 
    ST(0) = lfcos(ST(0));
L_004d95cd:  // fcomp dword ptr [esp + 0x1c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x1cu)));
    lpop(x);
L_004d95d1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d95d3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d95d6:  // jne 0x4d983a
    if (!f.zf) goto L_004d983a;
L_004d95dc:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d95e0:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d95e4:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004d95e6:  // fchs 
    ST(0) = -ST(0);
L_004d95e8:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004d95ec:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004d95f0:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004d95f2:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_004d95f4:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d95f8:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004d95fc:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_004d95fe:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004d9600:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d9602:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004d9604:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004d9606:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004d9608:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d960c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d960e:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004d9610:  // fcomp dword ptr [ecx + 0x28]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x28u)));
    lpop(x);
L_004d9613:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9615:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d9618:  // jne 0x4d9635
    if (!f.zf) goto L_004d9635;
L_004d961a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d9620:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9622:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d9625:  // jne 0x4d9630
    if (!f.zf) goto L_004d9630;
L_004d9627:  // mov eax, dword ptr [ecx + 0x28]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x28u)));
L_004d962a:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004d962e:  // jmp 0x4d9639
    goto L_004d9639;
L_004d9630:  // fld dword ptr [ecx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x28u)));
L_004d9633:  // fchs 
    ST(0) = -ST(0);
L_004d9635:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004d9639:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d963d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d963f:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004d9641:  // fcomp dword ptr [ecx + 0x28]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x28u)));
    lpop(x);
L_004d9644:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9646:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d9649:  // jne 0x4d9666
    if (!f.zf) goto L_004d9666;
L_004d964b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d9651:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9653:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d9656:  // jne 0x4d9661
    if (!f.zf) goto L_004d9661;
L_004d9658:  // mov ecx, dword ptr [ecx + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x28u)));
L_004d965b:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004d965f:  // jmp 0x4d966a
    goto L_004d966a;
L_004d9661:  // fld dword ptr [ecx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x28u)));
L_004d9664:  // fchs 
    ST(0) = -ST(0);
L_004d9666:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d966a:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d966e:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d9672:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d9674:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d9675:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d9676:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004d967a:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d967fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d967f:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004d9683:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_004d9686:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004d968a:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_004d968d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d968e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9690:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004d9694:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004d9697:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9699:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d969c:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004d96a0:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_004d96a3:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004d96a7:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_004d96aa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d96ab:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d96ad:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004d96b1:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004d96b4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d96b6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d96b9:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004d96bd:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_004d96c0:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004d96c4:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_004d96c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d96c8:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_004d96cf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d96d1:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004d96d5:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004d96d8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d96da:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d96dd:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d96e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d96e2:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004d96e6:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_004d96e9:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004d96ed:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_004d96f0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d96f1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d96f2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d96f4:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d96f8:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_004d96fb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d96fd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d9700:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004d9704:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_004d9707:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004d970b:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_004d970e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d970f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9711:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d9715:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_004d9718:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d971a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d971d:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004d9721:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_004d9724:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004d9728:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_004d972b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d972c:  // lea ecx, [esp + 0xe8]
    ecx = (uint32_t)((uint32_t)(esp + 0xe8u));
L_004d9733:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9735:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d9739:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_004d973c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d973e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d9741:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9746u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9746:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004d974a:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004d974d:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004d9751:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004d9754:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d9755:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9757:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d975b:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004d975d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d975f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9760:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d9763:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004d9767:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004d976a:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004d976e:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004d9771:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d9772:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9774:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d9778:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004d977a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d977c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d977f:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004d9783:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004d9786:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004d978a:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004d978d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d978e:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_004d9795:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9797:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d979b:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004d979d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d979f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004d97a2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d97a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d97a7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d97a8:  // lea ecx, [esp + 0x104]
    ecx = (uint32_t)((uint32_t)(esp + 0x104u));
L_004d97af:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d97b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d97b4:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d97b7:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004d97bc:  // lea esi, [esp + 0xf8]
    esi = (uint32_t)((uint32_t)(esp + 0xf8u));
L_004d97c3:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_004d97c5:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d97c7:  // lea eax, [esp + 0xc8]
    eax = (uint32_t)((uint32_t)(esp + 0xc8u));
L_004d97ce:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d97d0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d97d1:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d97d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d97d4:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004d97d7:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004d97da:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004d97dc:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d97de:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d97e0:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d97e2:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d97e4:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004d97e8:  // lea edx, [esp + 0xc8]
    edx = (uint32_t)((uint32_t)(esp + 0xc8u));
L_004d97ef:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d97f1:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004d97f3:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d97f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d97f6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d97f7:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d97f9:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_004d9801:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d9803:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_004d980b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d980d:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004d980f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9811:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d9813:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d9817:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d981cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d981c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004d981e:  // lea ecx, [ebp + 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0x7cu));
L_004d9821:  // mov dword ptr [ebp + 0x7c], edx
    M32((uint32_t)(ebp + 0x7cu)) = (uint32_t)(edx);
L_004d9824:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d9827:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004d982a:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d982d:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004d9830:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d9833:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004d9836:  // jmp 0x4d983a
    goto L_004d983a;
L_004d9838:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d983a:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d983d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d983f:  // call dword ptr [edx + 0xb4]
    t0 = M32((uint32_t)(edx + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9845u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9845:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d984b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d984d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d9850:  // je 0x4d985c
    if (f.zf) goto L_004d985c;
L_004d9852:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_004d9858:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d985a:  // je 0x4d98d4
    if (f.zf) goto L_004d98d4;
L_004d985c:  // lea esi, [ebp + 0x7c]
    esi = (uint32_t)((uint32_t)(ebp + 0x7cu));
L_004d985f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d9861:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9866u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9866:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004d986a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d9870:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d9872:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d9875:  // jne 0x4d9889
    if (!f.zf) goto L_004d9889;
L_004d9877:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004d987a:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_004d987e:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9883u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9883:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004d9887:  // jmp 0x4d9891
    goto L_004d9891;
L_004d9889:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004d9891:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004d9893:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004d9896:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004d9898:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004d989d:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004d989f:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004d98a3:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d98a5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d98a6:  // fchs 
    ST(0) = -ST(0);
L_004d98a8:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d98ac:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d98b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d98b1:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d98b5:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d98b9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d98bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d98bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d98bd:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004d98c1:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d98c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d98c6:  // lea edi, [ebp + 0x3c]
    edi = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_004d98c9:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004d98ce:  // lea esi, [esp + 0x28]
    esi = (uint32_t)((uint32_t)(esp + 0x28u));
L_004d98d2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004d98d4:  // mov eax, dword ptr [ebp + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_004d98da:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d98db:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d98dd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d98de:  // je 0x4d98fc
    if (f.zf) goto L_004d98fc;
L_004d98e0:  // lea esi, [ebp + 0xe0]
    esi = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_004d98e6:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004d98e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d98ea:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d98ec:  // call 0x4c0370
    t0 = 0x004c0370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d98f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d98f1:  // add ebp, 0x3c
    t0 = ladd<32>(ebp, 0x3cu, f);
    ebp = (uint32_t)(t0);
L_004d98f4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d98f6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d98f7:  // call 0x4c0450
    t0 = 0x004c0450u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d98fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d98fc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d98fd:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d98fe:  // add esp, 0x118
    t0 = ladd<32>(esp, 0x118u, f);
    esp = (uint32_t)(t0);
L_004d9904:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d8e40, 004d8e40)
