// lifted from 004b5ad0 (FUN_004b5ad0, 930 bytes, 245 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b5ad0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b5ad0;
L_004b5ad0:  // sub esp, 0x98
    t0 = lsub<32>(esp, 0x98u, f);
    esp = (uint32_t)(t0);
L_004b5ad6:  // mov eax, dword ptr [esp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004b5add:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b5ade:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b5adf:  // mov ebx, dword ptr [esp + 0xe8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_004b5ae6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b5ae7:  // mov esi, dword ptr [esp + 0xe8]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_004b5aee:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004b5af2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b5af3:  // mov eax, dword ptr [esi + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x98u)));
L_004b5af9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b5afb:  // jne 0x4b5d79
    if (!f.zf) goto L_004b5d79;
L_004b5b01:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b5b03:  // je 0x4b5d79
    if (f.zf) goto L_004b5d79;
L_004b5b09:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b5b0b:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b5b0f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5b10:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b5b12:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5b15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5b15:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004b5b1c:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b5b1f:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b5b26:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b5b29:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b5b2b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b5b2d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5b2f:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b5b36:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b5b38:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5b3a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b5b3e:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004b5b45:  // fmul dword ptr [eax + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x18u)));
L_004b5b48:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b5b4f:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_004b5b52:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5b54:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b5b5b:  // fmul dword ptr [eax + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x10u)));
L_004b5b5e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5b60:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004b5b64:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004b5b6b:  // fmul dword ptr [eax + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x28u)));
L_004b5b6e:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b5b75:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_004b5b78:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5b7a:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b5b81:  // fmul dword ptr [eax + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x20u)));
L_004b5b84:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004b5b88:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5b89:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5b8b:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004b5b8f:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5b91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5b91:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b5b95:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004b5b97:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004b5b9b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004b5b9f:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b5ba2:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b5ba6:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004b5baa:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b5bae:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b5bb1:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004b5bb5:  // mov dword ptr [esp + 0xac], ecx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ecx);
L_004b5bbc:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b5bc0:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_004b5bc7:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b5bc9:  // mov dword ptr [esp + 0xb8], ecx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(ecx);
L_004b5bd0:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004b5bd4:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b5bd8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b5bda:  // mov dword ptr [esp + 0xb4], eax
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(eax);
L_004b5be1:  // lea eax, [esp + 0x78]
    eax = (uint32_t)((uint32_t)(esp + 0x78u));
L_004b5be5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5be6:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5be9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5be9:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_004b5bf0:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b5bf2:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004b5bf5:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b5bfc:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004b5bff:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c01:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b5c08:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004b5c0b:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004b5c0f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5c10:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5c11:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c13:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004b5c17:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004b5c1e:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004b5c21:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_004b5c28:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004b5c2b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c2d:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004b5c34:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004b5c37:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c39:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004b5c3d:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b5c44:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004b5c47:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004b5c4e:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004b5c51:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c53:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b5c5a:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004b5c5d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c5f:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004b5c63:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b5c6a:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004b5c6d:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004b5c74:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004b5c77:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c79:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b5c80:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004b5c83:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c85:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5c88:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004b5c8f:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004b5c92:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_004b5c99:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004b5c9c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5c9d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5c9f:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b5ca6:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004b5ca9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5cab:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5cae:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_004b5cb5:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004b5cb8:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004b5cbf:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004b5cc2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5cc3:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b5cc7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5cc9:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b5cd0:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004b5cd3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5cd5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5cd8:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5cddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5cdd:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004b5ce4:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004b5ce6:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_004b5ced:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004b5cf0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5cf1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5cf2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5cf4:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004b5cfb:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004b5cfe:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5d00:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5d03:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b5d0a:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004b5d0c:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004b5d13:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004b5d16:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5d17:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5d19:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004b5d20:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004b5d23:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5d25:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5d28:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b5d2f:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004b5d31:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004b5d38:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004b5d3b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5d3c:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004b5d40:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5d42:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004b5d49:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004b5d4c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5d4e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5d51:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5d56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5d56:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5d57:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004b5d5b:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5d60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5d60:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b5d65:  // lea esi, [esp + 0x48]
    esi = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b5d69:  // lea edi, [esp + 0xbc]
    edi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_004b5d70:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b5d72:  // mov esi, dword ptr [esp + 0xec]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004b5d79:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004b5d7d:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_004b5d81:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5d82:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5d83:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_004b5d8a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b5d8b:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004b5d92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5d93:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5d94:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b5d95:  // call 0x4b5330
    t0 = 0x004b5330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5d9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5d9a:  // mov eax, dword ptr [esp + 0x114]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x114u)));
L_004b5da1:  // mov ecx, dword ptr [esp + 0x110]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x110u)));
L_004b5da8:  // mov edx, dword ptr [esp + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10cu)));
L_004b5daf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5db0:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004b5db4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5db5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5db6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b5db7:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_004b5dbe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5dbf:  // lea edx, [esp + 0xd8]
    edx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_004b5dc6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5dc7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5dc8:  // call 0x4b6350
    t0 = 0x004b6350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5dcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5dcd:  // mov eax, dword ptr [esi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004b5dd3:  // add esp, 0x34
    t0 = ladd<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_004b5dd6:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004b5dd8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b5dda:  // jle 0x4b5e67
    if ((f.zf || f.sf != f.of)) goto L_004b5e67;
L_004b5de0:  // jmp 0x4b5de9
    goto L_004b5de9;
L_004b5de2:  // mov esi, dword ptr [esp + 0xec]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004b5de9:  // mov eax, dword ptr [esp + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xfcu)));
L_004b5df0:  // mov ecx, dword ptr [esp + 0xf8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_004b5df7:  // mov edx, dword ptr [esp + 0xf4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_004b5dfe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5dff:  // mov eax, dword ptr [esi + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x94u)));
L_004b5e05:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5e06:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5e07:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b5e08:  // mov ecx, dword ptr [eax + ebp*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebp * 4u)));
L_004b5e0b:  // mov eax, dword ptr [esp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004b5e12:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5e13:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b5e18:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b5e1b:  // lea esi, [esp + 0x100]
    esi = (uint32_t)((uint32_t)(esp + 0x100u));
L_004b5e22:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004b5e24:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b5e27:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004b5e29:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b5e2b:  // mov ecx, dword ptr [esp + 0x104]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x104u)));
L_004b5e32:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004b5e34:  // mov eax, dword ptr [esp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_004b5e3b:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004b5e3e:  // mov ecx, dword ptr [esp + 0x10c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10cu)));
L_004b5e45:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b5e48:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b5e4b:  // call 0x4b5ad0
    t0 = 0x004b5ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5e50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5e50:  // mov edx, dword ptr [esp + 0x140]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_004b5e57:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_004b5e5a:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004b5e5b:  // cmp ebp, dword ptr [edx + 0x90]
    t0 = lsub<32>(ebp, M32((uint32_t)(edx + 0x90u)), f);
L_004b5e61:  // jl 0x4b5de2
    if ((f.sf != f.of)) goto L_004b5de2;
L_004b5e67:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b5e68:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b5e69:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b5e6a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b5e6b:  // add esp, 0x98
    t0 = ladd<32>(esp, 0x98u, f);
    esp = (uint32_t)(t0);
L_004b5e71:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b5ad0, 004b5ad0)
