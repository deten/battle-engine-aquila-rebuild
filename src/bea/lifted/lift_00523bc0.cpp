// lifted from 00523bc0 (FUN_00523bc0, 254 bytes, 84 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00523bc0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00523bc0;
L_00523bc0:  // mov eax, dword ptr [0x889008]
    eax = (uint32_t)(M32((uint32_t)(0x889008u)));
L_00523bc5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00523bc7:  // je 0x523bda
    if (f.zf) goto L_00523bda;
L_00523bc9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00523bcb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00523bcd:  // call eax
    t0 = eax; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00523bcfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00523bcf:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00523bd2:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00523bd4:  // jne 0x523cbb
    if (!f.zf) goto L_00523cbb;
L_00523bda:  // mov eax, dword ptr [0x889008]
    eax = (uint32_t)(M32((uint32_t)(0x889008u)));
L_00523bdf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00523be1:  // je 0x523bf0
    if (f.zf) goto L_00523bf0;
L_00523be3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00523be5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00523be7:  // call eax
    t0 = eax; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00523be9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00523be9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00523bec:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00523bee:  // jne 0x523c63
    if (!f.zf) goto L_00523c63;
L_00523bf0:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_00523bf5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00523bf7:  // jne 0x523c63
    if (!f.zf) goto L_00523c63;
L_00523bf9:  // mov eax, dword ptr [0x89bdfc]
    eax = (uint32_t)(M32((uint32_t)(0x89bdfcu)));
L_00523bfe:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00523c00:  // je 0x523c63
    if (f.zf) goto L_00523c63;
L_00523c02:  // fild dword ptr [0x89bda8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89bda8u)));
L_00523c08:  // fcom dword ptr [esp + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x4u)));
L_00523c0c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523c0e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523c11:  // jne 0x523c61
    if (!f.zf) goto L_00523c61;
L_00523c13:  // fcomp dword ptr [esp + 0xc]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xcu)));
    lpop(x);
L_00523c17:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523c19:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523c1c:  // je 0x523c63
    if (f.zf) goto L_00523c63;
L_00523c1e:  // fild dword ptr [0x89bda4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89bda4u)));
L_00523c24:  // fcom dword ptr [esp + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x8u)));
L_00523c28:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523c2a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523c2d:  // jne 0x523c61
    if (!f.zf) goto L_00523c61;
L_00523c2f:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00523c33:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523c35:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523c38:  // je 0x523c63
    if (f.zf) goto L_00523c63;
L_00523c3a:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00523c3e:  // mov ecx, dword ptr [0x8a9564]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9564u)));
L_00523c44:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00523c49:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00523c4a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00523c4b:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00523c50:  // mov dword ptr [0x89bdfc], 0
    M32((uint32_t)(0x89bdfcu)) = (uint32_t)(0x0u);
L_00523c5a:  // call 0x4669a0
    t0 = 0x004669a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00523c5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00523c5f:  // jmp 0x523c63
    goto L_00523c63;
L_00523c61:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00523c63:  // mov al, byte ptr [0x89bdf4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89bdf4u))) & 0xffu);
L_00523c68:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00523c6a:  // je 0x523cbb
    if (f.zf) goto L_00523cbb;
L_00523c6c:  // mov eax, dword ptr [0x889008]
    eax = (uint32_t)(M32((uint32_t)(0x889008u)));
L_00523c71:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00523c73:  // jne 0x523cbb
    if (!f.zf) goto L_00523cbb;
L_00523c75:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_00523c7a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00523c7c:  // jne 0x523cbb
    if (!f.zf) goto L_00523cbb;
L_00523c7e:  // fild dword ptr [0x89bda8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89bda8u)));
L_00523c84:  // fcom dword ptr [esp + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x4u)));
L_00523c88:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523c8a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523c8d:  // jne 0x523cb9
    if (!f.zf) goto L_00523cb9;
L_00523c8f:  // fcomp dword ptr [esp + 0xc]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xcu)));
    lpop(x);
L_00523c93:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523c95:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523c98:  // je 0x523cbb
    if (f.zf) goto L_00523cbb;
L_00523c9a:  // fild dword ptr [0x89bda4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89bda4u)));
L_00523ca0:  // fcom dword ptr [esp + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x8u)));
L_00523ca4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523ca6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523ca9:  // jne 0x523cb9
    if (!f.zf) goto L_00523cb9;
L_00523cab:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00523caf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523cb1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00523cb4:  // je 0x523cbb
    if (f.zf) goto L_00523cbb;
L_00523cb6:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00523cb8:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00523cb9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00523cbb:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00523cbd:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00523bc0, 00523bc0)
