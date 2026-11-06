// lifted from 00507ab0 (FUN_00507ab0, 3582 bytes, 958 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00507ab0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00507ab0;
L_00507ab0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00507ab2:  // push 0x5d5959
    t0 = 0x5d5959u; esp -= 4; M32(esp) = t0;
L_00507ab7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00507abd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507abe:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00507ac5:  // sub esp, 0x1b4
    t0 = lsub<32>(esp, 0x1b4u, f);
    esp = (uint32_t)(t0);
L_00507acb:  // mov eax, dword ptr [0x6fbdfc]
    eax = (uint32_t)(M32((uint32_t)(0x6fbdfcu)));
L_00507ad0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507ad1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00507ad2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00507ad3:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00507ad5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00507ad6:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00507ada:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00507ade:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507adf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00507ae1:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507ae6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507ae6:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00507ae9:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00507aed:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507aef:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00507af2:  // je 0x508891
    if (f.zf) goto L_00508891;
L_00507af8:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00507afe:  // mov edi, dword ptr [esp + 0x1d4]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1d4u)));
L_00507b05:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00507b07:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00507b09:  // je 0x507b68
    if (f.zf) goto L_00507b68;
L_00507b0b:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_00507b0e:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_00507b10:  // je 0x507b68
    if (f.zf) goto L_00507b68;
L_00507b12:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00507b14:  // cmp dword ptr [eax + 0x58], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x58u)), ebx, f);
L_00507b17:  // je 0x507b68
    if (f.zf) goto L_00507b68;
L_00507b19:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00507b1c:  // mov eax, dword ptr [edx + 0x138]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x138u)));
L_00507b22:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00507b24:  // jne 0x507b2e
    if (!f.zf) goto L_00507b2e;
L_00507b26:  // mov ecx, dword ptr [0x8a9d7c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d7cu)));
L_00507b2c:  // jmp 0x507b39
    goto L_00507b39;
L_00507b2e:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00507b31:  // jne 0x507b68
    if (!f.zf) goto L_00507b68;
L_00507b33:  // mov ecx, dword ptr [0x8a9d80]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d80u)));
L_00507b39:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_00507b3b:  // je 0x507b68
    if (f.zf) goto L_00507b68;
L_00507b3d:  // lea eax, [edi + 0x1c]
    eax = (uint32_t)((uint32_t)(edi + 0x1cu));
L_00507b40:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00507b43:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00507b45:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_00507b47:  // mov dword ptr [edx], ebp
    M32((uint32_t)(edx)) = (uint32_t)(ebp);
L_00507b49:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00507b4c:  // mov dword ptr [edx + 4], ebp
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebp);
L_00507b4f:  // mov ebp, dword ptr [eax + 8]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00507b52:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_00507b55:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00507b58:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00507b5b:  // call 0x44c780
    t0 = 0x0044c780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507b60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507b60:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00507b62:  // je 0x508891
    if (f.zf) goto L_00508891;
L_00507b68:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00507b6e:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00507b75:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00507b76:  // mov eax, dword ptr [eax + 0x18]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_00507b79:  // mov ecx, dword ptr [eax + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_00507b7c:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00507b80:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00507b82:  // call 0x44a930
    t0 = 0x0044a930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507b87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507b87:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00507b8b:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_00507b8e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507b8f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507b92:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00507b96:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_00507b99:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507b9a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507b9d:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00507ba1:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00507ba4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507ba5:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00507bac:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507baf:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507bb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507bb4:  // cmp dword ptr [esi + 0x94], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x94u)), ebx, f);
L_00507bba:  // je 0x507c27
    if (f.zf) goto L_00507c27;
L_00507bbc:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00507bbf:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00507bc6:  // lea ecx, [eax + 0x3c]
    ecx = (uint32_t)((uint32_t)(eax + 0x3cu));
L_00507bc9:  // mov eax, dword ptr [eax + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xe0u)));
L_00507bcf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507bd0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00507bd1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507bd2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507bd3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507bd4:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_00507bdb:  // call 0x40d1f0
    t0 = 0x0040d1f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507be0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507be0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00507be2:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507be7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507be7:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00507bee:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00507bf2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507bf3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507bf6:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_00507bfd:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00507c01:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507c02:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507c05:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_00507c0c:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00507c10:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507c11:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00507c15:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507c18:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507c1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507c1d:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00507c21:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00507c25:  // jmp 0x507c35
    goto L_00507c35;
L_00507c27:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_00507c2e:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_00507c35:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00507c37:  // cmp dword ptr [esi + 0x98], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x98u)), ebx, f);
L_00507c3d:  // fchs 
    ST(0) = -ST(0);
L_00507c3f:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00507c43:  // je 0x507c54
    if (f.zf) goto L_00507c54;
L_00507c45:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00507c48:  // mov edx, dword ptr [ecx + 0xe8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xe8u)));
L_00507c4e:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_00507c52:  // jmp 0x507c95
    goto L_00507c95;
L_00507c54:  // lea ecx, [esp + 0xe8]
    ecx = (uint32_t)((uint32_t)(esp + 0xe8u));
L_00507c5b:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507c60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507c60:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00507c66:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507c68:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00507c6b:  // jne 0x507c8b
    if (!f.zf) goto L_00507c8b;
L_00507c6d:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_00507c74:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00507c76:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00507c7a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507c7c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00507c80:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507c85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507c85:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00507c89:  // jmp 0x507c95
    goto L_00507c95;
L_00507c8b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507c8d:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00507c95:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_00507c99:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00507c9a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507c9b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00507c9d:  // call 0x50a0e0
    t0 = 0x0050a0e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507ca2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507ca2:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00507ca6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507ca7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00507ca9:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507caeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507cae:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00507cb2:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_00507cb5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507cb6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507cb9:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00507cbd:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00507cc0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507cc1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507cc4:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00507cc8:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00507cca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507ccb:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_00507ccf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00507cd2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507cd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507cd7:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00507cdb:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00507cdf:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00507ce1:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00507ce5:  // fchs 
    ST(0) = -ST(0);
L_00507ce7:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00507ceb:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507cf0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507cf0:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00507cf6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507cf8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00507cfb:  // jne 0x507d18
    if (!f.zf) goto L_00507d18;
L_00507cfd:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00507d01:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00507d03:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00507d07:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507d09:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00507d0d:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507d12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507d12:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00507d16:  // jmp 0x507d22
    goto L_00507d22;
L_00507d18:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507d1a:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00507d22:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00507d26:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00507d2a:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00507d30:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507d32:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00507d35:  // je 0x507d56
    if (f.zf) goto L_00507d56;
L_00507d37:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00507d3b:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00507d41:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507d43:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00507d46:  // jne 0x507d56
    if (!f.zf) goto L_00507d56;
L_00507d48:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507d4a:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00507d4e:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00507d54:  // jmp 0x507d84
    goto L_00507d84;
L_00507d56:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00507d5a:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00507d60:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507d62:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00507d65:  // jne 0x507d84
    if (!f.zf) goto L_00507d84;
L_00507d67:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00507d6b:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00507d71:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507d73:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00507d76:  // je 0x507d84
    if (f.zf) goto L_00507d84;
L_00507d78:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507d7a:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00507d7e:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00507d84:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_00507d88:  // fcom dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
L_00507d8e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507d90:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00507d93:  // je 0x507d9d
    if (f.zf) goto L_00507d9d;
L_00507d95:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00507d9b:  // jmp 0x507db0
    goto L_00507db0;
L_00507d9d:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_00507da3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507da5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00507da8:  // jne 0x507db0
    if (!f.zf) goto L_00507db0;
L_00507daa:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00507db0:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00507db6:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00507db8:  // mov edx, dword ptr [ecx + 0x84]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_00507dbe:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00507dc2:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00507dc6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507dc8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00507dcb:  // je 0x508891
    if (f.zf) goto L_00508891;
L_00507dd1:  // mov ecx, dword ptr [ecx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00507dd4:  // call 0x40d0f0
    t0 = 0x0040d0f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507dd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507dd9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00507ddb:  // je 0x508627
    if (f.zf) goto L_00508627;
L_00507de1:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00507de4:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_00507dea:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00507dee:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_00507df1:  // mov edx, dword ptr [eax + 0x18]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_00507df4:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00507df6:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00507dfa:  // fld dword ptr [edx + 0x2c]
    lpush(x, (long double)F32((uint32_t)(edx + 0x2cu)));
L_00507dfd:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00507e03:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00507e07:  // fld dword ptr [eax + 0x3c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x3cu)));
L_00507e0a:  // fmul dword ptr [0x5d8c6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c6cu)));
L_00507e10:  // cmp dword ptr [esi + 0x98], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x98u)), ebx, f);
L_00507e16:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00507e1a:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00507e1e:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_00507e22:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00507e26:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_00507e2a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507e2c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00507e2e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00507e32:  // je 0x508016
    if (f.zf) goto L_00508016;
L_00507e38:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00507e3c:  // fcos 
    ST(0) = lfcos(ST(0));
L_00507e3e:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00507e42:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00507e46:  // fsin 
    ST(0) = lfsin(ST(0));
L_00507e48:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00507e4c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00507e4e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00507e50:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00507e54:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00507e58:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00507e5a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00507e5c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00507e5e:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00507e60:  // fdiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x30u)));
L_00507e64:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_00507e66:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507e68:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00507e6e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507e70:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00507e73:  // je 0x507e7d
    if (f.zf) goto L_00507e7d;
L_00507e75:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00507e77:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00507e7d:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_00507e81:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00507e83:  // fcomp dword ptr [0x5db4e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db4e8u)));
    lpop(x);
L_00507e89:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00507e8b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00507e8e:  // je 0x508891
    if (f.zf) goto L_00508891;
L_00507e94:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00507e98:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00507e9c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507e9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507e9e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507e9f:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_00507ea6:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507eabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507eab:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00507eb2:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00507eb8:  // lea edx, [esp + 0x1a4]
    edx = (uint32_t)((uint32_t)(esp + 0x1a4u));
L_00507ebf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00507ec1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00507ec2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00507ec6:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_00507ecd:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00507ed3:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00507ed7:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_00507ede:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00507ee4:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00507ee8:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507eedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507eed:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00507ef1:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_00507ef4:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00507ef8:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00507efb:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00507eff:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00507f01:  // lea eax, [esp + 0x1b4]
    eax = (uint32_t)((uint32_t)(esp + 0x1b4u));
L_00507f08:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00507f0a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507f0b:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00507f0f:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00507f13:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00507f17:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507f1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507f1c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507f1d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507f1e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507f1f:  // lea ecx, [esp + 0x94]
    ecx = (uint32_t)((uint32_t)(esp + 0x94u));
L_00507f26:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00507f28:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507f2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507f2d:  // mov dword ptr [esp + 0x84], 0x5d892c
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x5d892cu);
L_00507f38:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_00507f3a:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_00507f41:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00507f44:  // mov dword ptr [esp + 0x9c], edx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edx);
L_00507f4b:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00507f4e:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00507f52:  // mov dword ptr [esp + 0xa0], eax
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(eax);
L_00507f59:  // mov ecx, dword ptr [edi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_00507f5c:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00507f60:  // mov dword ptr [esp + 0xa4], ecx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ecx);
L_00507f67:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00507f6b:  // mov dword ptr [esp + 0xa8], edx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(edx);
L_00507f72:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00507f76:  // mov dword ptr [esp + 0xac], eax
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(eax);
L_00507f7d:  // mov dword ptr [esp + 0xb0], ecx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ecx);
L_00507f84:  // mov dword ptr [esp + 0xb4], edx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(edx);
L_00507f8b:  // mov dword ptr [esp + 0x84], 0x5d8bfc
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x5d8bfcu);
L_00507f96:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00507f99:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00507f9b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00507f9d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00507f9f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00507fa1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00507fa2:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_00507fa6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00507fa8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00507fa9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00507faa:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_00507fad:  // lea edx, [esp + 0xd8]
    edx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_00507fb4:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00507fb6:  // mov dword ptr [esp + 0x64], esp
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esp);
L_00507fba:  // mov dword ptr [esp + 0x220], ebx
    M32((uint32_t)(esp + 0x220u)) = (uint32_t)(ebx);
L_00507fc1:  // mov dword ptr [esp + 0x88], ebx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ebx);
L_00507fc8:  // mov dword ptr [esp + 0x8c], 0xffffffff
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(0xffffffffu);
L_00507fd3:  // mov dword ptr [esp + 0x90], ebx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(ebx);
L_00507fda:  // mov dword ptr [esp + 0x94], 0xbf800000
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0xbf800000u);
L_00507fe5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00507fe6:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507febu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507feb:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00507ff0:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00507ff5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00507ff5:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00507ff7:  // jne 0x508003
    if (!f.zf) goto L_00508003;
L_00507ff9:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00507ffe:  // jmp 0x508893
    goto L_00508893;
L_00508003:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00508006:  // jne 0x508891
    if (!f.zf) goto L_00508891;
L_0050800c:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00508011:  // jmp 0x508893
    goto L_00508893;
L_00508016:  // lea eax, [ecx + 0x3c]
    eax = (uint32_t)((uint32_t)(ecx + 0x3cu));
L_00508019:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00508020:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00508021:  // mov eax, dword ptr [ecx + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xe0u)));
L_00508027:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00508028:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00508029:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050802a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050802b:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_00508032:  // call 0x40d1f0
    t0 = 0x0040d1f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508037u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508037:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00508039:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050803eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050803e:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00508045:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00508049:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050804a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050804d:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_00508054:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00508058:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508059:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050805c:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_00508063:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00508067:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508068:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_0050806c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0050806f:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508074u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508074:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00508078:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050807du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050807d:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00508083:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508085:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508088:  // jne 0x5080a1
    if (!f.zf) goto L_005080a1;
L_0050808a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0050808e:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00508090:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00508094:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508096:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0050809a:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050809fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050809f:  // jmp 0x5080a9
    goto L_005080a9;
L_005080a1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005080a3:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_005080a9:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_005080af:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005080b1:  // fadd dword ptr [eax + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x7cu)));
L_005080b4:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_005080b8:  // fadd dword ptr [eax + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x80u)));
L_005080be:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_005080c2:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_005080c6:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_005080cc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005080ce:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005080d1:  // jne 0x5080e4
    if (!f.zf) goto L_005080e4;
L_005080d3:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005080d7:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_005080dd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005080df:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005080e2:  // je 0x50810e
    if (f.zf) goto L_0050810e;
L_005080e4:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_005080e8:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_005080ee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005080f0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005080f3:  // je 0x5081b4
    if (f.zf) goto L_005081b4;
L_005080f9:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005080fd:  // fcomp dword ptr [0x5d8dec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8decu)));
    lpop(x);
L_00508103:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508105:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508108:  // je 0x5081b4
    if (f.zf) goto L_005081b4;
L_0050810e:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00508112:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508114:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00508116:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0050811a:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0050811e:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00508120:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00508124:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00508126:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050812a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050812e:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508132:  // fst dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
L_00508136:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508138:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050813a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050813e:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00508140:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00508144:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508146:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508148:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050814a:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0050814c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508150:  // fdiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x30u)));
L_00508154:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00508158:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0050815c:  // fsin 
    ST(0) = lfsin(ST(0));
L_0050815e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00508160:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00508162:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508166:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050816a:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0050816e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508170:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00508174:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508178:  // fcos 
    ST(0) = lfcos(ST(0));
L_0050817a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050817c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508180:  // fsubr dword ptr [esp + 0x28]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x28u))) - (ST(0));
L_00508184:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00508186:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050818a:  // fdiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x30u)));
L_0050818e:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00508192:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00508194:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508196:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508199:  // jne 0x5082d0
    if (!f.zf) goto L_005082d0;
L_0050819f:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_005081a3:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005081a7:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_005081ab:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_005081af:  // jmp 0x5082d0
    goto L_005082d0;
L_005081b4:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_005081b8:  // fsin 
    ST(0) = lfsin(ST(0));
L_005081ba:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005081bc:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_005081c0:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_005081c4:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_005081c6:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_005081ca:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005081cc:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_005081d0:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_005081d4:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_005081d8:  // fst dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
L_005081dc:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_005081de:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_005081e0:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_005081e4:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_005081e6:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_005081ea:  // fcos 
    ST(0) = lfcos(ST(0));
L_005081ec:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_005081ee:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_005081f0:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_005081f2:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_005081f6:  // fdiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x30u)));
L_005081fa:  // fst dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
L_005081fe:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508202:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508204:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00508206:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00508208:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050820c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508210:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508214:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_00508218:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0050821a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050821c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508220:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00508222:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508226:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508228:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050822a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0050822c:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0050822e:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508232:  // fdiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x30u)));
L_00508236:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0050823a:  // fld qword ptr [0x5dfca8]
    lpush(x, (long double)F64((uint32_t)(0x5dfca8u)));
L_00508240:  // fsin 
    ST(0) = lfsin(ST(0));
L_00508242:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00508244:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00508246:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050824a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0050824e:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00508252:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00508254:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00508258:  // fld qword ptr [0x5dfca8]
    lpush(x, (long double)F64((uint32_t)(0x5dfca8u)));
L_0050825e:  // fcos 
    ST(0) = lfcos(ST(0));
L_00508260:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00508262:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508266:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_0050826a:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0050826c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00508270:  // fdiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x30u)));
L_00508274:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00508278:  // fst dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
L_0050827c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00508280:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00508282:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508284:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508287:  // je 0x508291
    if (f.zf) goto L_00508291;
L_00508289:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050828d:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00508291:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508295:  // fcomp dword ptr [esp + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x24u)));
    lpop(x);
L_00508299:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050829b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050829e:  // je 0x5082a8
    if (f.zf) goto L_005082a8;
L_005082a0:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005082a4:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_005082a8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_005082ac:  // fcomp dword ptr [esp + 0x28]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x28u)));
    lpop(x);
L_005082b0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005082b2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005082b5:  // jne 0x5082bd
    if (!f.zf) goto L_005082bd;
L_005082b7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005082b9:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_005082bd:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_005082c1:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_005082c3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005082c5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005082c8:  // jne 0x5082d0
    if (!f.zf) goto L_005082d0;
L_005082ca:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005082cc:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_005082d0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005082d4:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_005082d6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005082d8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005082db:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005082dd:  // je 0x508891
    if (f.zf) goto L_00508891;
L_005082e3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005082e7:  // fcomp dword ptr [esp + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x24u)));
    lpop(x);
L_005082eb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005082ed:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005082f0:  // jne 0x508891
    if (!f.zf) goto L_00508891;
L_005082f6:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_005082f9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005082fb:  // add ecx, 0x114
    t0 = ladd<32>(ecx, 0x114u, f);
    ecx = (uint32_t)(t0);
L_00508301:  // mov edi, dword ptr [ecx]
    edi = (uint32_t)(M32((uint32_t)(ecx)));
L_00508303:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00508306:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_0050830a:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0050830d:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00508311:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508312:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00508313:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_0050831a:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_0050831e:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508323u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508323:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00508327:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00508329:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050832a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050832b:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_00508332:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508337u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508337:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_0050833e:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00508344:  // lea eax, [esp + 0x1b4]
    eax = (uint32_t)((uint32_t)(esp + 0x1b4u));
L_0050834b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050834d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050834e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00508352:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_00508359:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_0050835f:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00508363:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0050836a:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00508370:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00508374:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508379u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508379:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0050837d:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_00508380:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00508384:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00508387:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0050838b:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0050838d:  // lea ecx, [esp + 0x1a4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1a4u));
L_00508394:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508395:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00508397:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0050839b:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0050839f:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_005083a3:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005083a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005083a8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005083aa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005083ac:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005083ae:  // lea ecx, [esp + 0x170]
    ecx = (uint32_t)((uint32_t)(esp + 0x170u));
L_005083b5:  // mov edi, eax
    edi = (uint32_t)(eax);
L_005083b7:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005083bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005083bc:  // mov ebp, 0x5d892c
    ebp = (uint32_t)(0x5d892cu);
L_005083c1:  // mov ebx, 0x5d8bfc
    ebx = (uint32_t)(0x5d8bfcu);
L_005083c6:  // mov dword ptr [esp + 0x160], ebp
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(ebp);
L_005083cd:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_005083cf:  // mov dword ptr [esp + 0x174], edx
    M32((uint32_t)(esp + 0x174u)) = (uint32_t)(edx);
L_005083d6:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_005083d9:  // mov dword ptr [esp + 0x178], eax
    M32((uint32_t)(esp + 0x178u)) = (uint32_t)(eax);
L_005083e0:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_005083e3:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005083e7:  // mov dword ptr [esp + 0x17c], ecx
    M32((uint32_t)(esp + 0x17cu)) = (uint32_t)(ecx);
L_005083ee:  // mov edx, dword ptr [edi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_005083f1:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005083f5:  // mov dword ptr [esp + 0x180], edx
    M32((uint32_t)(esp + 0x180u)) = (uint32_t)(edx);
L_005083fc:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00508400:  // mov dword ptr [esp + 0x184], eax
    M32((uint32_t)(esp + 0x184u)) = (uint32_t)(eax);
L_00508407:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0050840b:  // mov dword ptr [esp + 0x188], ecx
    M32((uint32_t)(esp + 0x188u)) = (uint32_t)(ecx);
L_00508412:  // mov dword ptr [esp + 0x18c], edx
    M32((uint32_t)(esp + 0x18cu)) = (uint32_t)(edx);
L_00508419:  // mov dword ptr [esp + 0x190], eax
    M32((uint32_t)(esp + 0x190u)) = (uint32_t)(eax);
L_00508420:  // mov dword ptr [esp + 0x160], ebx
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(ebx);
L_00508427:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_0050842e:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00508434:  // mov dword ptr [esp + 0x1cc], 1
    M32((uint32_t)(esp + 0x1ccu)) = (uint32_t)(0x1u);
L_0050843f:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00508443:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_0050844a:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00508450:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00508454:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508455:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00508457:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0050845b:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_00508462:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00508468:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0050846c:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508471u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508471:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00508475:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_00508478:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0050847c:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0050847f:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00508483:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00508485:  // lea edx, [esp + 0x194]
    edx = (uint32_t)((uint32_t)(esp + 0x194u));
L_0050848c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050848e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050848f:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00508493:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00508497:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0050849b:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005084a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005084a0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005084a2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005084a4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005084a6:  // lea ecx, [esp + 0x13c]
    ecx = (uint32_t)((uint32_t)(esp + 0x13cu));
L_005084ad:  // mov edi, eax
    edi = (uint32_t)(eax);
L_005084af:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005084b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005084b4:  // mov dword ptr [esp + 0x12c], ebp
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(ebp);
L_005084bb:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_005084bd:  // mov dword ptr [esp + 0x140], eax
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(eax);
L_005084c4:  // mov ecx, dword ptr [edi + 4]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_005084c7:  // mov dword ptr [esp + 0x144], ecx
    M32((uint32_t)(esp + 0x144u)) = (uint32_t)(ecx);
L_005084ce:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_005084d1:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005084d5:  // mov dword ptr [esp + 0x148], edx
    M32((uint32_t)(esp + 0x148u)) = (uint32_t)(edx);
L_005084dc:  // mov eax, dword ptr [edi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_005084df:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005084e3:  // mov dword ptr [esp + 0x14c], eax
    M32((uint32_t)(esp + 0x14cu)) = (uint32_t)(eax);
L_005084ea:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_005084ee:  // mov dword ptr [esp + 0x150], ecx
    M32((uint32_t)(esp + 0x150u)) = (uint32_t)(ecx);
L_005084f5:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_005084f9:  // mov dword ptr [esp + 0x154], edx
    M32((uint32_t)(esp + 0x154u)) = (uint32_t)(edx);
L_00508500:  // mov dword ptr [esp + 0x158], eax
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(eax);
L_00508507:  // mov dword ptr [esp + 0x15c], ecx
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(ecx);
L_0050850e:  // mov dword ptr [esp + 0x12c], ebx
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(ebx);
L_00508515:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_0050851a:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0050851c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050851d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050851f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00508521:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00508522:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00508523:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_00508527:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_0050852b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050852c:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0050852f:  // lea edx, [esp + 0x5c]
    edx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00508533:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00508534:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00508535:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_00508538:  // lea edx, [esp + 0x1b4]
    edx = (uint32_t)((uint32_t)(esp + 0x1b4u));
L_0050853f:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00508541:  // mov dword ptr [esp + 0x64], esp
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esp);
L_00508545:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00508546:  // mov byte ptr [esp + 0x224], 2
    M8((uint32_t)(esp + 0x224u)) = (uint8_t)(0x2u);
L_0050854e:  // mov dword ptr [esp + 0xa0], 0xffffffff
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0xffffffffu);
L_00508559:  // mov dword ptr [esp + 0xa8], 0xbf800000
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0xbf800000u);
L_00508564:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508569u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508569:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_0050856e:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508573u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508573:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00508575:  // je 0x50857c
    if (f.zf) goto L_0050857c;
L_00508577:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0050857a:  // jne 0x50857e
    if (!f.zf) goto L_0050857e;
L_0050857c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0050857e:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00508581:  // mov bl, 0x10
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
L_00508583:  // jne 0x5085a9
    if (!f.zf) goto L_005085a9;
L_00508585:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00508589:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050858b:  // je 0x5085a9
    if (f.zf) goto L_005085a9;
L_0050858d:  // test byte ptr [eax + 0x34], bl
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & (ebx & 0xffu), f);
L_00508590:  // je 0x5085a9
    if (f.zf) goto L_005085a9;
L_00508592:  // mov ecx, dword ptr [esp + 0x1d4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1d4u)));
L_00508599:  // mov eax, dword ptr [eax + 0x138]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x138u)));
L_0050859f:  // cmp eax, dword ptr [ecx + 0x138]
    t0 = lsub<32>(eax, M32((uint32_t)(ecx + 0x138u)), f);
L_005085a5:  // je 0x5085a9
    if (f.zf) goto L_005085a9;
L_005085a7:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005085a9:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_005085ac:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005085ae:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005085b0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005085b2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005085b4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005085b6:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_005085ba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005085bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005085bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005085be:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_005085c1:  // lea edx, [esp + 0x180]
    edx = (uint32_t)((uint32_t)(esp + 0x180u));
L_005085c8:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_005085ca:  // mov dword ptr [esp + 0x64], esp
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esp);
L_005085ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005085cf:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005085d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005085d4:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_005085d9:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005085deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005085de:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005085e1:  // je 0x5085e8
    if (f.zf) goto L_005085e8;
L_005085e3:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_005085e6:  // jne 0x5085ea
    if (!f.zf) goto L_005085ea;
L_005085e8:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005085ea:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_005085ed:  // jne 0x508615
    if (!f.zf) goto L_00508615;
L_005085ef:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_005085f3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005085f5:  // je 0x508615
    if (f.zf) goto L_00508615;
L_005085f7:  // test byte ptr [eax + 0x34], bl
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & (ebx & 0xffu), f);
L_005085fa:  // je 0x508615
    if (f.zf) goto L_00508615;
L_005085fc:  // mov ecx, dword ptr [esp + 0x1d4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1d4u)));
L_00508603:  // mov eax, dword ptr [eax + 0x138]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x138u)));
L_00508609:  // cmp eax, dword ptr [ecx + 0x138]
    t0 = lsub<32>(eax, M32((uint32_t)(ecx + 0x138u)), f);
L_0050860f:  // jne 0x508891
    if (!f.zf) goto L_00508891;
L_00508615:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00508617:  // je 0x508891
    if (f.zf) goto L_00508891;
L_0050861d:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00508622:  // jmp 0x508893
    goto L_00508893;
L_00508627:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_0050862d:  // mov eax, dword ptr [ecx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00508630:  // cmp dword ptr [eax + 0x6c], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x6cu)), ebx, f);
L_00508633:  // je 0x508666
    if (f.zf) goto L_00508666;
L_00508635:  // mov esi, dword ptr [esi + 8]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00508638:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0050863d:  // add esi, 0x1c
    t0 = ladd<32>(esi, 0x1cu, f);
    esi = (uint32_t)(t0);
L_00508640:  // mov edx, esi
    edx = (uint32_t)(esi);
L_00508642:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508647u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508647:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_0050864d:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0050864f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508651:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508654:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508656:  // je 0x508891
    if (f.zf) goto L_00508891;
L_0050865c:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00508661:  // jmp 0x508893
    goto L_00508893;
L_00508666:  // cmp dword ptr [esi + 0x98], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x98u)), ebx, f);
L_0050866c:  // je 0x50871c
    if (f.zf) goto L_0050871c;
L_00508672:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00508676:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0050867a:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00508680:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508682:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00508685:  // je 0x5086a6
    if (f.zf) goto L_005086a6;
L_00508687:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0050868b:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00508691:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508693:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508696:  // jne 0x5086a6
    if (!f.zf) goto L_005086a6;
L_00508698:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050869a:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0050869e:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_005086a4:  // jmp 0x5086d4
    goto L_005086d4;
L_005086a6:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_005086aa:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_005086b0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005086b2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005086b5:  // jne 0x5086d4
    if (!f.zf) goto L_005086d4;
L_005086b7:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005086bb:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_005086c1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005086c3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005086c6:  // je 0x5086d4
    if (f.zf) goto L_005086d4;
L_005086c8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005086ca:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005086ce:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_005086d4:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_005086d8:  // fcom dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
L_005086de:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005086e0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005086e3:  // je 0x5086ed
    if (f.zf) goto L_005086ed;
L_005086e5:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_005086eb:  // jmp 0x508700
    goto L_00508700;
L_005086ed:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_005086f3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005086f5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005086f8:  // jne 0x508700
    if (!f.zf) goto L_00508700;
L_005086fa:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00508700:  // mov edx, dword ptr [ecx + 0x84]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_00508706:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00508708:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0050870c:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00508710:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508712:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00508715:  // jne 0x508743
    if (!f.zf) goto L_00508743;
L_00508717:  // jmp 0x508891
    goto L_00508891;
L_0050871c:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00508720:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_00508724:  // fcom dword ptr [ecx + 0x7c]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x7cu)));
L_00508727:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00508729:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050872c:  // je 0x50888f
    if (f.zf) goto L_0050888f;
L_00508732:  // fcomp dword ptr [ecx + 0x80]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x80u)));
    lpop(x);
L_00508738:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050873a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0050873d:  // jne 0x508891
    if (!f.zf) goto L_00508891;
L_00508743:  // cmp dword ptr [esp + 0x1d8], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x1d8u)), ebx, f);
L_0050874a:  // jne 0x508756
    if (!f.zf) goto L_00508756;
L_0050874c:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00508751:  // jmp 0x508893
    goto L_00508893;
L_00508756:  // lea eax, [esp + 0x194]
    eax = (uint32_t)((uint32_t)(esp + 0x194u));
L_0050875d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050875f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00508760:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508765u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508765:  // mov dword ptr [esp + 0xfc], 0
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(0x0u);
L_00508770:  // mov dword ptr [esp + 0x100], 0
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(0x0u);
L_0050877b:  // mov dword ptr [esp + 0x104], 0
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(0x0u);
L_00508786:  // mov dword ptr [esp + 0xf8], 0x5d892c
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(0x5d892cu);
L_00508791:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00508793:  // mov dword ptr [esp + 0x10c], ecx
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(ecx);
L_0050879a:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0050879d:  // mov dword ptr [esp + 0x110], edx
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(edx);
L_005087a4:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005087a7:  // mov dword ptr [esp + 0x114], ecx
    M32((uint32_t)(esp + 0x114u)) = (uint32_t)(ecx);
L_005087ae:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005087b1:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_005087b5:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_005087b9:  // mov dword ptr [esp + 0x118], edx
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(edx);
L_005087c0:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_005087c4:  // mov dword ptr [esp + 0x11c], eax
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(eax);
L_005087cb:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_005087cf:  // mov dword ptr [esp + 0x120], ecx
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(ecx);
L_005087d6:  // mov dword ptr [esp + 0x124], edx
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(edx);
L_005087dd:  // mov dword ptr [esp + 0x128], eax
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(eax);
L_005087e4:  // mov dword ptr [esp + 0xf8], 0x5d8bfc
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(0x5d8bfcu);
L_005087ef:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_005087f2:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_005087f7:  // test cl, ah
    t0 = llog<8>((ecx & 0xffu) & ((eax >> 8) & 0xffu), f);
L_005087f9:  // mov dword ptr [esp + 0x1cc], 3
    M32((uint32_t)(esp + 0x1ccu)) = (uint32_t)(0x3u);
L_00508804:  // mov dword ptr [esp + 0x74], ebx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ebx);
L_00508808:  // mov dword ptr [esp + 0x78], 0xffffffff
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0xffffffffu);
L_00508810:  // mov dword ptr [esp + 0x7c], ebx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ebx);
L_00508814:  // mov dword ptr [esp + 0x80], 0xbf800000
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0xbf800000u);
L_0050881f:  // je 0x508823
    if (f.zf) goto L_00508823;
L_00508821:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00508823:  // mov esi, dword ptr [esi + 8]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00508826:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00508828:  // cmp dword ptr [esi + 0x24c], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x24cu)), ebx, f);
L_0050882e:  // je 0x508832
    if (f.zf) goto L_00508832;
L_00508830:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00508832:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00508834:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00508836:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00508838:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050883a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050883b:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_00508842:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00508843:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00508844:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00508845:  // lea edx, [esp + 0x118]
    edx = (uint32_t)((uint32_t)(esp + 0x118u));
L_0050884c:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_0050884f:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00508851:  // mov dword ptr [esp + 0x64], esp
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esp);
L_00508855:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00508856:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050885bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050885b:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_00508860:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00508865u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00508865:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00508868:  // jne 0x508891
    if (!f.zf) goto L_00508891;
L_0050886a:  // mov eax, dword ptr [esp + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0050886e:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00508870:  // je 0x508891
    if (f.zf) goto L_00508891;
L_00508872:  // test byte ptr [eax + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x10u, f);
L_00508876:  // je 0x508891
    if (f.zf) goto L_00508891;
L_00508878:  // mov eax, dword ptr [eax + 0x138]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x138u)));
L_0050887e:  // mov ecx, dword ptr [edi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x138u)));
L_00508884:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00508886:  // jne 0x508891
    if (!f.zf) goto L_00508891;
L_00508888:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0050888d:  // jmp 0x508893
    goto L_00508893;
L_0050888f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00508891:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00508893:  // mov ecx, dword ptr [esp + 0x1c4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1c4u)));
L_0050889a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050889b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050889c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0050889d:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005088a4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005088a5:  // add esp, 0x1c0
    t0 = ladd<32>(esp, 0x1c0u, f);
    esp = (uint32_t)(t0);
L_005088ab:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00507ab0, 00507ab0)
