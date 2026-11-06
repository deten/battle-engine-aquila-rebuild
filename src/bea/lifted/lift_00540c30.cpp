// lifted from 00540c30 (FUN_00540c30, 831 bytes, 214 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00540c30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00540c30;
L_00540c30:  // sub esp, 0x7c
    t0 = lsub<32>(esp, 0x7cu, f);
    esp = (uint32_t)(t0);
L_00540c33:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00540c34:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00540c35:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540c36:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00540c37:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00540c3a:  // mov edx, dword ptr [0x8a97bc]
    edx = (uint32_t)(M32((uint32_t)(0x8a97bcu)));
L_00540c40:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00540c45:  // mov esi, 0x8a9788
    esi = (uint32_t)(0x8a9788u);
L_00540c4a:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00540c4c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00540c4f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00540c51:  // mov ecx, dword ptr [0x8a97b8]
    ecx = (uint32_t)(M32((uint32_t)(0x8a97b8u)));
L_00540c57:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00540c59:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00540c5b:  // mov ecx, dword ptr [0x8a97c0]
    ecx = (uint32_t)(M32((uint32_t)(0x8a97c0u)));
L_00540c61:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00540c64:  // mov edx, dword ptr [0x8a97c4]
    edx = (uint32_t)(M32((uint32_t)(0x8a97c4u)));
L_00540c6a:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00540c6d:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00540c72:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00540c75:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540c7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540c7a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00540c7c:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00540c80:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540c81:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540c82:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540c83:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_00540c87:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540c8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540c8c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540c8d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540c8e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540c8f:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00540c93:  // mov dword ptr [esp + 0x60], esi
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(esi);
L_00540c97:  // mov dword ptr [esp + 0x64], esi
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esi);
L_00540c9b:  // mov dword ptr [esp + 0x68], esi
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(esi);
L_00540c9f:  // mov dword ptr [esp + 0x6c], esi
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(esi);
L_00540ca3:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540ca8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540ca8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540ca9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540caa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540cab:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_00540cb2:  // mov dword ptr [esp + 0x70], esi
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(esi);
L_00540cb6:  // mov dword ptr [esp + 0x74], esi
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(esi);
L_00540cba:  // mov dword ptr [esp + 0x78], esi
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(esi);
L_00540cbe:  // mov dword ptr [esp + 0x7c], esi
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(esi);
L_00540cc2:  // mov dword ptr [esp + 0x80], esi
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(esi);
L_00540cc9:  // mov dword ptr [esp + 0x84], esi
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(esi);
L_00540cd0:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540cd5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540cd5:  // fld qword ptr [0x5db378]
    lpush(x, (long double)F64((uint32_t)(0x5db378u)));
L_00540cdb:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00540cdd:  // mov dword ptr [esp + 0x10], 0xc59c4000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xc59c4000u);
L_00540ce5:  // mov dword ptr [esp + 0x14], 0x459c4000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x459c4000u);
L_00540ced:  // mov dword ptr [esp + 0x18], 0x44bb8000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x44bb8000u);
L_00540cf5:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00540cfb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00540cfd:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00540d00:  // jne 0x540d2c
    if (!f.zf) goto L_00540d2c;
L_00540d02:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00540d08:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00540d0a:  // fmul dword ptr [0x5db370]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db370u)));
L_00540d10:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00540d14:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00540d16:  // fmul dword ptr [0x5db36c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db36cu)));
L_00540d1c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00540d20:  // fmul dword ptr [0x5db368]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db368u)));
L_00540d26:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00540d2a:  // jmp 0x540d2e
    goto L_00540d2e;
L_00540d2c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00540d2e:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00540d32:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_00540d37:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00540d3c:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_00540d41:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00540d45:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00540d48:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00540d4c:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00540d4e:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_00540d53:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00540d54:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00540d56:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00540d5a:  // mov dword ptr [0x9c68a8], esi
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(esi);
L_00540d60:  // mov byte ptr [0x9c690c], bl
    M8((uint32_t)(0x9c690cu)) = (uint8_t)((ebx & 0xffu));
L_00540d66:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_00540d69:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_00540d6c:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_00540d6f:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00540d73:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540d78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540d78:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00540d7c:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_00540d81:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00540d86:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_00540d8b:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00540d90:  // fchs 
    ST(0) = -ST(0);
L_00540d92:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00540d96:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00540d9a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00540d9d:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00540d9f:  // lea esi, [esp + 0x4c]
    esi = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00540da3:  // mov edi, 0x9c65c0
    edi = (uint32_t)(0x9c65c0u);
L_00540da8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00540daa:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00540dac:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00540db0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00540db2:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00540db6:  // mov dword ptr [edx + 4], ebp
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebp);
L_00540db9:  // mov byte ptr [0x9c68fc], bl
    M8((uint32_t)(0x9c68fcu)) = (uint8_t)((ebx & 0xffu));
L_00540dbf:  // mov byte ptr [0x9c68a0], bl
    M8((uint32_t)(0x9c68a0u)) = (uint8_t)((ebx & 0xffu));
L_00540dc5:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00540dc8:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00540dcc:  // mov byte ptr [0x9c6904], bl
    M8((uint32_t)(0x9c6904u)) = (uint8_t)((ebx & 0xffu));
L_00540dd2:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00540dd5:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540ddau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540dda:  // fld qword ptr [0x5db360]
    lpush(x, (long double)F64((uint32_t)(0x5db360u)));
L_00540de0:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00540de2:  // mov dword ptr [esp + 0x28], 0x43480000
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x43480000u);
L_00540dea:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00540dee:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00540df2:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00540df7:  // lea esi, [esp + 0x30]
    esi = (uint32_t)((uint32_t)(esp + 0x30u));
L_00540dfb:  // mov edi, 0x9c661c
    edi = (uint32_t)(0x9c661cu);
L_00540e00:  // mov dword ptr [esp + 0x24], 0x447a0000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x447a0000u);
L_00540e08:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00540e0c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00540e0e:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00540e16:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00540e1a:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00540e1e:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00540e22:  // mov byte ptr [0x9c68fd], bl
    M8((uint32_t)(0x9c68fdu)) = (uint8_t)((ebx & 0xffu));
L_00540e28:  // mov byte ptr [0x9c68a1], bl
    M8((uint32_t)(0x9c68a1u)) = (uint8_t)((ebx & 0xffu));
L_00540e2e:  // mov byte ptr [0x9c6905], bl
    M8((uint32_t)(0x9c6905u)) = (uint8_t)((ebx & 0xffu));
L_00540e34:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00540e3a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00540e3c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00540e3f:  // jne 0x540e6b
    if (!f.zf) goto L_00540e6b;
L_00540e41:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00540e47:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00540e4f:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00540e53:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00540e57:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00540e59:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00540e5d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00540e61:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00540e63:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00540e67:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00540e69:  // jmp 0x540e6d
    goto L_00540e6d;
L_00540e6b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00540e6d:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00540e72:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00540e77:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00540e7c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00540e7f:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00540e81:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00540e83:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00540e85:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00540e89:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_00540e8c:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00540e90:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00540e93:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00540e97:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00540e9a:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540e9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540e9f:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00540ea4:  // lea esi, [esp + 0x30]
    esi = (uint32_t)((uint32_t)(esp + 0x30u));
L_00540ea8:  // mov edi, 0x9c6678
    edi = (uint32_t)(0x9c6678u);
L_00540ead:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00540eaf:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00540eb4:  // mov byte ptr [0x9c68fe], bl
    M8((uint32_t)(0x9c68feu)) = (uint8_t)((ebx & 0xffu));
L_00540eba:  // mov byte ptr [0x9c68a2], bl
    M8((uint32_t)(0x9c68a2u)) = (uint8_t)((ebx & 0xffu));
L_00540ec0:  // mov byte ptr [0x9c6906], bl
    M8((uint32_t)(0x9c6906u)) = (uint8_t)((ebx & 0xffu));
L_00540ec6:  // mov byte ptr [0x9c68ad], bl
    M8((uint32_t)(0x9c68adu)) = (uint8_t)((ebx & 0xffu));
L_00540ecc:  // mov byte ptr [0x9c6910], bl
    M8((uint32_t)(0x9c6910u)) = (uint8_t)((ebx & 0xffu));
L_00540ed2:  // call 0x4cb300
    t0 = 0x004cb300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540ed7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540ed7:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00540edc:  // call 0x4cbc60
    t0 = 0x004cbc60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540ee1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540ee1:  // mov eax, dword ptr [0x8a97b8]
    eax = (uint32_t)(M32((uint32_t)(0x8a97b8u)));
L_00540ee6:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00540ee9:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00540eeb:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00540eee:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00540ef3:  // mov esi, 0x8a9788
    esi = (uint32_t)(0x8a9788u);
L_00540ef8:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00540efa:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00540efc:  // mov ecx, dword ptr [0x8a97bc]
    ecx = (uint32_t)(M32((uint32_t)(0x8a97bcu)));
L_00540f02:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00540f04:  // mov eax, dword ptr [0x8a97c0]
    eax = (uint32_t)(M32((uint32_t)(0x8a97c0u)));
L_00540f09:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00540f0c:  // mov ecx, dword ptr [0x8a97c4]
    ecx = (uint32_t)(M32((uint32_t)(0x8a97c4u)));
L_00540f12:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00540f15:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00540f18:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00540f1d:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540f22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540f22:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00540f27:  // push 0x83d248
    t0 = 0x83d248u; esp -= 4; M32(esp) = t0;
L_00540f2c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00540f2d:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00540f2f:  // call dword ptr [edx + 0xc4]
    t0 = M32((uint32_t)(edx + 0xc4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540f35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540f35:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00540f37:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00540f39:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00540f3e:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_00540f45:  // mov byte ptr [0x9c6910], bl
    M8((uint32_t)(0x9c6910u)) = (uint8_t)((ebx & 0xffu));
L_00540f4b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540f50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540f50:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00540f55:  // call 0x54f7e0
    t0 = 0x0054f7e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540f5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540f5a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00540f5b:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00540f5d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00540f62:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00540f67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00540f67:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00540f68:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00540f69:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00540f6a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00540f6b:  // add esp, 0x7c
    t0 = ladd<32>(esp, 0x7cu, f);
    esp = (uint32_t)(t0);
L_00540f6e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00540c30, 00540c30)
