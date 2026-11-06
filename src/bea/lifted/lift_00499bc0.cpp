// lifted from 00499bc0 (FUN_00499bc0, 409 bytes, 113 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00499bc0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00499bc0;
L_00499bc0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00499bc2:  // push 0x5d3308
    t0 = 0x5d3308u; esp -= 4; M32(esp) = t0;
L_00499bc7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00499bcd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00499bce:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00499bd5:  // sub esp, 0x68
    t0 = lsub<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_00499bd8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00499bd9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00499bda:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00499bdb:  // mov esi, dword ptr [esp + 0x84]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_00499be2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00499be3:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00499be5:  // mov edx, esi
    edx = (uint32_t)(esi);
L_00499be7:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00499bec:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_00499bf0:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00499bf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00499bf5:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00499bf7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00499bf9:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_00499c00:  // call dword ptr [eax + 0x38]
    t0 = M32((uint32_t)(eax + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00499c03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00499c03:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00499c05:  // je 0x499d3d
    if (f.zf) goto L_00499d3d;
L_00499c0b:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_00499c12:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00499c14:  // jne 0x499d3d
    if (!f.zf) goto L_00499d3d;
L_00499c1a:  // mov edx, esi
    edx = (uint32_t)(esi);
L_00499c1c:  // mov ebp, dword ptr [esi + 8]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00499c1f:  // mov ebx, dword ptr [esi + 4]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00499c22:  // mov dword ptr [esp + 0x2c], ebp
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebp);
L_00499c26:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00499c28:  // mov dword ptr [esp + 0x48], 0
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x0u);
L_00499c30:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_00499c34:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_00499c3c:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00499c3f:  // mov dword ptr [esp + 0x50], 0
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x0u);
L_00499c47:  // mov dword ptr [esp + 0x5c], ebx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ebx);
L_00499c4b:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_00499c4f:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00499c52:  // mov dword ptr [esp + 0x44], 0x5d8bfc
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x5d8bfcu);
L_00499c5a:  // mov dword ptr [esp + 0x3c], edi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edi);
L_00499c5e:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00499c60:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00499c64:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_00499c6a:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00499c6d:  // mov esi, dword ptr [esi + 0xc]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00499c70:  // mov dword ptr [esp + 0x58], edi
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edi);
L_00499c74:  // mov dword ptr [esp + 0x64], esi
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esi);
L_00499c78:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_00499c7c:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00499c80:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00499c84:  // fsub dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8ba0u)));
L_00499c8a:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00499c8e:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00499c92:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00499c96:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00499c9a:  // mov dword ptr [esp + 0x60], edi
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edi);
L_00499c9e:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00499ca2:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00499ca4:  // mov dword ptr [esp + 0x80], esi
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(esi);
L_00499cab:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00499caf:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00499cb2:  // mov dword ptr [esp + 0x18], 0xffffffff
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0xffffffffu);
L_00499cba:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00499cbc:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_00499cc0:  // mov dword ptr [esp + 0x20], 0xbf800000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xbf800000u);
L_00499cc8:  // je 0x499ccf
    if (f.zf) goto L_00499ccf;
L_00499cca:  // add eax, -8
    t0 = ladd<32>(eax, 0xfffffff8u, f);
    eax = (uint32_t)(t0);
L_00499ccd:  // jmp 0x499cd1
    goto L_00499cd1;
L_00499ccf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00499cd1:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00499cd3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00499cd5:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00499cd7:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00499cd9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00499cdb:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_00499cdf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00499ce0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00499ce1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00499ce2:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00499ce6:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_00499ce9:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00499ceb:  // mov dword ptr [esp + 0xe4], esp
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(esp);
L_00499cf2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00499cf3:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00499cf8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00499cf8:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00499cfd:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00499d02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00499d02:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00499d05:  // jne 0x499d11
    if (!f.zf) goto L_00499d11;
L_00499d07:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00499d0b:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00499d0f:  // jmp 0x499d24
    goto L_00499d24;
L_00499d11:  // mov edi, dword ptr [edi + 8]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00499d14:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_00499d16:  // je 0x499d1b
    if (f.zf) goto L_00499d1b;
L_00499d18:  // lea esi, [edi - 8]
    esi = (uint32_t)((uint32_t)(edi + 0xfffffff8u));
L_00499d1b:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_00499d1e:  // fadd dword ptr [0x5d8bf4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bf4u)));
L_00499d24:  // fcom dword ptr [esp + 0x88]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x88u)));
L_00499d2b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00499d2d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00499d30:  // jne 0x499d3b
    if (!f.zf) goto L_00499d3b;
L_00499d32:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00499d34:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_00499d3b:  // jmp 0x499d44
    goto L_00499d44;
L_00499d3d:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_00499d44:  // mov ecx, dword ptr [esp + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_00499d48:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00499d49:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00499d4a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00499d4b:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00499d52:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00499d53:  // add esp, 0x74
    t0 = ladd<32>(esp, 0x74u, f);
    esp = (uint32_t)(t0);
L_00499d56:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00499bc0, 00499bc0)
