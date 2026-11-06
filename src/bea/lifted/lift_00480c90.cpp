// lifted from 00480c90 (FUN_00480c90, 273 bytes, 94 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00480c90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00480c90;
L_00480c90:  // mov edx, dword ptr [0x67a540]
    edx = (uint32_t)(M32((uint32_t)(0x67a540u)));
L_00480c96:  // sub esp, 0x24
    t0 = lsub<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00480c99:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00480c9a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00480c9b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00480c9c:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00480c9e:  // mov dword ptr [0x67a540], edx
    M32((uint32_t)(0x67a540u)) = (uint32_t)(edx);
L_00480ca4:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00480ca7:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00480caa:  // cmp dword ptr [eax + 0x18], -1
    t0 = lsub<32>(M32((uint32_t)(eax + 0x18u)), 0xffffffffu, f);
L_00480cae:  // jne 0x480cb4
    if (!f.zf) goto L_00480cb4;
L_00480cb0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00480cb2:  // jmp 0x480cb7
    goto L_00480cb7;
L_00480cb4:  // add eax, 0xc
    t0 = ladd<32>(eax, 0xcu, f);
    eax = (uint32_t)(t0);
L_00480cb7:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00480cbb:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00480cbe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00480cbf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00480cc1:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00480cc3:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480cc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480cc6:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00480cc9:  // jle 0x480cda
    if ((f.zf || f.sf != f.of)) goto L_00480cda;
L_00480ccb:  // mov dword ptr [edi + 0x10], 1
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(0x1u);
L_00480cd2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00480cd3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00480cd4:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00480cd7:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00480cda:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00480cdd:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_00480ce1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00480ce2:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480ce7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480ce7:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00480cea:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00480cee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00480cef:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00480cf2:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480cf7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480cf7:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00480cfb:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00480cff:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00480d03:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_00480d07:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00480d0b:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00480d0e:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_00480d12:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_00480d15:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_00480d18:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00480d1c:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00480d20:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00480d22:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00480d24:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00480d28:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_00480d2c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00480d2e:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00480d30:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00480d32:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00480d34:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00480d38:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_00480d3c:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00480d3e:  // fcomp qword ptr [0x5d87b0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87b0u)));
    lpop(x);
L_00480d44:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00480d46:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00480d48:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00480d4b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00480d4d:  // je 0x480d8a
    if (f.zf) goto L_00480d8a;
L_00480d4f:  // mov edx, dword ptr [ecx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00480d52:  // mov eax, 0x100
    eax = (uint32_t)(0x100u);
L_00480d57:  // test eax, edx
    t0 = llog<32>(eax & edx, f);
L_00480d59:  // jne 0x480d60
    if (!f.zf) goto L_00480d60;
L_00480d5b:  // test dword ptr [esi + 0xc], eax
    t0 = llog<32>(M32((uint32_t)(esi + 0xcu)) & eax, f);
L_00480d5e:  // je 0x480d81
    if (f.zf) goto L_00480d81;
L_00480d60:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00480d62:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00480d63:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480d66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480d66:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00480d68:  // je 0x480ccb
    if (f.zf) goto L_00480ccb;
L_00480d6e:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00480d71:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00480d73:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00480d74:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00480d76:  // call dword ptr [edx + 0x20]
    t0 = M32((uint32_t)(edx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480d79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480d79:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00480d7b:  // je 0x480ccb
    if (f.zf) goto L_00480ccb;
L_00480d81:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00480d84:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00480d85:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00480d87:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480d8au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480d8a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00480d8b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00480d8d:  // mov dword ptr [edi + 0x10], 1
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(0x1u);
L_00480d94:  // call 0x480ed0
    t0 = 0x00480ed0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480d99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480d99:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00480d9a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00480d9b:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00480d9e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00480c90, 00480c90)
