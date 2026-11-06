// lifted from 00505c30 (FUN_00505c30, 205 bytes, 86 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00505c30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00505c30;
L_00505c30:  // mov eax, dword ptr [0x854fc0]
    eax = (uint32_t)(M32((uint32_t)(0x854fc0u)));
L_00505c35:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00505c36:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505c38:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00505c39:  // mov dword ptr [0x854fc8], eax
    M32((uint32_t)(0x854fc8u)) = (uint32_t)(eax);
L_00505c3e:  // je 0x505c44
    if (f.zf) goto L_00505c44;
L_00505c40:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_00505c42:  // jmp 0x505c46
    goto L_00505c46;
L_00505c44:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00505c46:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00505c48:  // je 0x505c7c
    if (f.zf) goto L_00505c7c;
L_00505c4a:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00505c4e:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00505c51:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00505c52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00505c53:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00505c58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00505c58:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00505c5b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505c5d:  // je 0x505c81
    if (f.zf) goto L_00505c81;
L_00505c5f:  // mov eax, dword ptr [0x854fc8]
    eax = (uint32_t)(M32((uint32_t)(0x854fc8u)));
L_00505c64:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00505c67:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505c69:  // mov dword ptr [0x854fc8], eax
    M32((uint32_t)(0x854fc8u)) = (uint32_t)(eax);
L_00505c6e:  // je 0x505c74
    if (f.zf) goto L_00505c74;
L_00505c70:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00505c72:  // jmp 0x505c76
    goto L_00505c76;
L_00505c74:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00505c76:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505c78:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00505c7a:  // jne 0x505c4e
    if (!f.zf) goto L_00505c4e;
L_00505c7c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00505c7d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00505c7f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00505c80:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00505c81:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00505c84:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00505c86:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505c88:  // mov dword ptr [esp + 0xc], 0x4b18967f
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x4b18967fu);
L_00505c90:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_00505c93:  // je 0x505c99
    if (f.zf) goto L_00505c99;
L_00505c95:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00505c97:  // jmp 0x505c9b
    goto L_00505c9b;
L_00505c99:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00505c9b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505c9d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00505c9f:  // je 0x505cf8
    if (f.zf) goto L_00505cf8;
L_00505ca1:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00505ca5:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_00505ca8:  // fsub dword ptr [edx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edx)));
L_00505caa:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_00505cad:  // fsub dword ptr [edx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edx + 0x4u)));
L_00505cb0:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_00505cb3:  // fsub dword ptr [edx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edx + 0x8u)));
L_00505cb6:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00505cb8:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_00505cba:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00505cbc:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00505cbe:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_00505cc0:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00505cc2:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00505cc4:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_00505cc6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00505cc8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00505cca:  // fcom dword ptr [esp + 0xc]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xcu)));
L_00505cce:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00505cd0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00505cd3:  // je 0x505cdd
    if (f.zf) goto L_00505cdd;
L_00505cd5:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00505cd9:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00505cdb:  // jmp 0x505cdf
    goto L_00505cdf;
L_00505cdd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00505cdf:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00505ce2:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00505ce5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505ce7:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_00505cea:  // je 0x505cf0
    if (f.zf) goto L_00505cf0;
L_00505cec:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00505cee:  // jmp 0x505cf2
    goto L_00505cf2;
L_00505cf0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00505cf2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00505cf4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00505cf6:  // jne 0x505ca5
    if (!f.zf) goto L_00505ca5;
L_00505cf8:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00505cfa:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00505cfb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00505cfc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00505c30, 00505c30)
