// lifted from 004c0ab0 (vslot9, 446 bytes, 127 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c0ab0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c0ab0;
L_004c0ab0:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004c0ab3:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c0ab9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c0aba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c0abb:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c0abd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c0abe:  // fsub dword ptr [esi + 0x74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x74u)));
L_004c0ac1:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004c0ac7:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c0acb:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c0ad0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c0ad0:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c0ad6:  // fsub dword ptr [esi + 0x74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x74u)));
L_004c0ad9:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c0ade:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c0ae2:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c0ae7:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004c0aeb:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004c0af1:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004c0af5:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c0af9:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c0aff:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c0b01:  // fadd dword ptr [esi + 0x74]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x74u)));
L_004c0b04:  // fimul dword ptr [esi + 0x70]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esi + 0x70u)));
L_004c0b07:  // fstp dword ptr [ebx + 0x60]
    F32((uint32_t)(ebx + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004c0b0a:  // mov edi, dword ptr [esi + 0x60]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_004c0b0d:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004c0b0f:  // jne 0x4c0b19
    if (!f.zf) goto L_004c0b19;
L_004c0b11:  // fld dword ptr [esi + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x5cu)));
L_004c0b14:  // jmp 0x4c0bb8
    goto L_004c0bb8;
L_004c0b19:  // mov eax, dword ptr [edi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x84u)));
L_004c0b1f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c0b21:  // jne 0x4c0b43
    if (!f.zf) goto L_004c0b43;
L_004c0b23:  // mov eax, dword ptr [edi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004c0b29:  // mov ecx, dword ptr [edi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x7cu)));
L_004c0b2c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c0b2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c0b2e:  // lea edx, [edi + 0x74]
    edx = (uint32_t)((uint32_t)(edi + 0x74u));
L_004c0b31:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c0b32:  // lea eax, [edi + 0x6c]
    eax = (uint32_t)((uint32_t)(edi + 0x6cu));
L_004c0b35:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c0b36:  // lea ecx, [edi + 0x64]
    ecx = (uint32_t)((uint32_t)(edi + 0x64u));
L_004c0b39:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c0b3a:  // add edi, 0x5c
    t0 = ladd<32>(edi, 0x5cu, f);
    edi = (uint32_t)(t0);
L_004c0b3d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c0b3e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c0b3f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004c0b41:  // jmp 0x4c0bad
    goto L_004c0bad;
L_004c0b43:  // mov edx, dword ptr [0x9c6400]
    edx = (uint32_t)(M32((uint32_t)(0x9c6400u)));
L_004c0b49:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c0b4a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004c0b4c:  // lea ecx, [edi + 0x88]
    ecx = (uint32_t)((uint32_t)(edi + 0x88u));
L_004c0b52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c0b53:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004c0b57:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c0b5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c0b5c:  // mov eax, dword ptr [edi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x90u)));
L_004c0b62:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004c0b66:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c0b68:  // je 0x4c0b7c
    if (f.zf) goto L_004c0b7c;
L_004c0b6a:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004c0b6c:  // je 0x4c0b7c
    if (f.zf) goto L_004c0b7c;
L_004c0b6e:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004c0b72:  // fsub dword ptr [ebx + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x84u)));
L_004c0b78:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004c0b7c:  // mov ecx, dword ptr [edi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004c0b82:  // mov edx, dword ptr [edi + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x7cu)));
L_004c0b85:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004c0b89:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004c0b8d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c0b8e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c0b8f:  // lea eax, [edi + 0x74]
    eax = (uint32_t)((uint32_t)(edi + 0x74u));
L_004c0b92:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c0b93:  // lea ecx, [edi + 0x6c]
    ecx = (uint32_t)((uint32_t)(edi + 0x6cu));
L_004c0b96:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c0b97:  // lea edx, [edi + 0x64]
    edx = (uint32_t)((uint32_t)(edi + 0x64u));
L_004c0b9a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c0b9b:  // add edi, 0x5c
    t0 = ladd<32>(edi, 0x5cu, f);
    edi = (uint32_t)(t0);
L_004c0b9e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c0b9f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c0ba0:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c0ba5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c0ba5:  // fdiv dword ptr [esp + 0x28]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x28u)));
L_004c0ba9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c0baa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c0bad:  // call 0x4c0c70
    t0 = 0x004c0c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c0bb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c0bb2:  // fmul dword ptr [esi + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x5cu)));
L_004c0bb5:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004c0bb8:  // fstp dword ptr [ebx + 0x74]
    F32((uint32_t)(ebx + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004c0bbb:  // mov dword ptr [ebx + 0x78], 0
    M32((uint32_t)(ebx + 0x78u)) = (uint32_t)(0x0u);
L_004c0bc2:  // mov eax, dword ptr [esi + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004c0bc8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c0bca:  // je 0x4c0c17
    if (f.zf) goto L_004c0c17;
L_004c0bcc:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004c0bd2:  // mov ecx, dword ptr [esi + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004c0bd8:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004c0bda:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004c0bdb:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004c0bdf:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_004c0be3:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004c0be9:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c0bed:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c0bf2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c0bf2:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c0bf7:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c0bfc:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004c0c00:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_004c0c04:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c0c0a:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004c0c10:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c0c14:  // fstp dword ptr [ebx + 0x78]
    F32((uint32_t)(ebx + 0x78u)) = lf32(ST(0));
    lpop(x);
L_004c0c17:  // mov ecx, dword ptr [esi + 0xb8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_004c0c1d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c0c1e:  // mov dword ptr [ebx + 0xc8], ecx
    M32((uint32_t)(ebx + 0xc8u)) = (uint32_t)(ecx);
L_004c0c24:  // mov edx, dword ptr [esi + 0xc0]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xc0u)));
L_004c0c2a:  // mov dword ptr [ebx + 0xd0], edx
    M32((uint32_t)(ebx + 0xd0u)) = (uint32_t)(edx);
L_004c0c30:  // mov eax, dword ptr [esi + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xbcu)));
L_004c0c36:  // mov dword ptr [ebx + 0xcc], eax
    M32((uint32_t)(ebx + 0xccu)) = (uint32_t)(eax);
L_004c0c3c:  // mov ecx, dword ptr [esi + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xc4u)));
L_004c0c42:  // mov dword ptr [ebx + 0xd4], ecx
    M32((uint32_t)(ebx + 0xd4u)) = (uint32_t)(ecx);
L_004c0c48:  // mov dl, byte ptr [0x829e50]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x829e50u))) & 0xffu);
L_004c0c4e:  // and edx, 0xf
    t0 = llog<32>(edx & 0xfu, f);
    edx = (uint32_t)(t0);
L_004c0c51:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c0c52:  // add edx, 0xc0
    t0 = ladd<32>(edx, 0xc0u, f);
    edx = (uint32_t)(t0);
L_004c0c58:  // mov word ptr [ebx + 0x7e], dx
    M16((uint32_t)(ebx + 0x7eu)) = (uint16_t)((edx & 0xffffu));
L_004c0c5c:  // mov eax, dword ptr [0x829e50]
    eax = (uint32_t)(M32((uint32_t)(0x829e50u)));
L_004c0c61:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004c0c62:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c0c63:  // mov dword ptr [0x829e50], eax
    M32((uint32_t)(0x829e50u)) = (uint32_t)(eax);
L_004c0c68:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004c0c6b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004c0ab0, 004c0ab0)
