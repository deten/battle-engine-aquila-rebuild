// lifted from 004daba0 (FUN_004daba0, 240 bytes, 88 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004daba0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004daba0;
L_004daba0:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004daba3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004daba4:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004daba6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004daba7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004daba8:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004dabae:  // lea edi, [ebp + 0x1c]
    edi = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004dabb1:  // mov edx, edi
    edx = (uint32_t)(edi);
L_004dabb3:  // mov ecx, dword ptr [eax + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x90u)));
L_004dabb9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004dabba:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_004dabbc:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004dabbf:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004dabc1:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004dabc3:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004dabc6:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004dabc9:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004dabcc:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004dabcf:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004dabd2:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_004dabd7:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004dabda:  // call 0x491ea0
    t0 = 0x00491ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dabdfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dabdf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004dabe1:  // je 0x4dac7e
    if (f.zf) goto L_004dac7e;
L_004dabe7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004dabe9:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dabeeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dabee:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004dabf0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004dabf2:  // je 0x4dac6c
    if (f.zf) goto L_004dac6c;
L_004dabf4:  // cmp esi, dword ptr [ebp + 0xe8]
    t0 = lsub<32>(esi, M32((uint32_t)(ebp + 0xe8u)), f);
L_004dabfa:  // je 0x4dac6c
    if (f.zf) goto L_004dac6c;
L_004dabfc:  // test byte ptr [esi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(esi + 0x34u)) & 0x10u, f);
L_004dac00:  // je 0x4dac6c
    if (f.zf) goto L_004dac6c;
L_004dac02:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_004dac06:  // jne 0x4dac6c
    if (!f.zf) goto L_004dac6c;
L_004dac08:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_004dac0c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004dac0e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dac0f:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dac14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dac14:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004dac18:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004dac1a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004dac1e:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004dac21:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004dac25:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_004dac28:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004dac2a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004dac2c:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004dac2e:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004dac30:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004dac36:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004dac38:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004dac3a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004dac3c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004dac3e:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004dac40:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004dac42:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004dac44:  // fld dword ptr [ecx + 0x90]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x90u)));
L_004dac4a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004dac4c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004dac4e:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004dac50:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004dac52:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004dac54:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004dac57:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004dac59:  // je 0x4dac6a
    if (f.zf) goto L_004dac6a;
L_004dac5b:  // fcomp dword ptr [0x5d858c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d858cu)));
    lpop(x);
L_004dac61:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004dac63:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004dac66:  // je 0x4dac87
    if (f.zf) goto L_004dac87;
L_004dac68:  // jmp 0x4dac6c
    goto L_004dac6c;
L_004dac6a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004dac6c:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_004dac71:  // call 0x492020
    t0 = 0x00492020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dac76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dac76:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004dac78:  // jne 0x4dabe7
    if (!f.zf) goto L_004dabe7;
L_004dac7e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dac80:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004dac81:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004dac82:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004dac83:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004dac86:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004dac87:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004dac89:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004dac8a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004dac8b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004dac8c:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004dac8f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004daba0, 004daba0)
