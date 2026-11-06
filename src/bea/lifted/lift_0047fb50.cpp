// lifted from 0047fb50 (FUN_0047fb50, 483 bytes, 133 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047fb50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047fb50;
L_0047fb50:  // mov eax, 0x1f54
    eax = (uint32_t)(0x1f54u);
L_0047fb55:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fb5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fb5a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047fb5b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047fb5c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047fb5d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047fb5e:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047fb60:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0047fb62:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0047fb64:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fb66:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0047fb6b:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fb70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fb70:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0047fb72:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0047fb74:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fb76:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0047fb7b:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fb80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fb80:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0047fb82:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047fb84:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fb86:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0047fb8b:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fb90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fb90:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fb92:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fb94:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0047fb99:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fb9eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fb9e:  // mov dword ptr [esp + 0x14], 0x42480000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x42480000u);
L_0047fba6:  // lea ebp, [esi + 0xc]
    ebp = (uint32_t)((uint32_t)(esi + 0xcu));
L_0047fba9:  // mov dword ptr [esp + 0x18], 2
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x2u);
L_0047fbb1:  // cmp dword ptr [ebp], 0
    t0 = lsub<32>(M32((uint32_t)(ebp)), 0x0u, f);
L_0047fbb5:  // je 0x47fd16
    if (f.zf) goto L_0047fd16;
L_0047fbbb:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0047fbc1:  // fsub dword ptr [ebp - 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xfffffffcu)));
L_0047fbc4:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0047fbc8:  // fcomp dword ptr [0x5d857c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d857cu)));
    lpop(x);
L_0047fbce:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047fbd0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047fbd3:  // jne 0x47fbe1
    if (!f.zf) goto L_0047fbe1;
L_0047fbd5:  // mov dword ptr [ebp], 0
    M32((uint32_t)(ebp)) = (uint32_t)(0x0u);
L_0047fbdc:  // jmp 0x47fd16
    goto L_0047fd16;
L_0047fbe1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047fbe5:  // fcomp dword ptr [0x5dbe00]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbe00u)));
    lpop(x);
L_0047fbeb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047fbed:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047fbf0:  // je 0x47fc0d
    if (f.zf) goto L_0047fc0d;
L_0047fbf2:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047fbf6:  // fcomp qword ptr [0x5d87e0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87e0u)));
    lpop(x);
L_0047fbfc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047fbfe:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047fc01:  // jne 0x47fc21
    if (!f.zf) goto L_0047fc21;
L_0047fc03:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_0047fc0b:  // jmp 0x47fc21
    goto L_0047fc21;
L_0047fc0d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047fc11:  // fsub dword ptr [0x5dbdfc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbdfcu)));
L_0047fc17:  // fmul dword ptr [0x5d8c44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c44u)));
L_0047fc1d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047fc21:  // mov eax, dword ptr [ebp - 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfffffff8u)));
L_0047fc24:  // push 0x44098000
    t0 = 0x44098000u; esp -= 4; M32(esp) = t0;
L_0047fc29:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0047fc2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047fc2e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047fc2f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fc31:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047fc36:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fc3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fc3b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047fc3d:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fc42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fc42:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0047fc44:  // mov eax, dword ptr [0x662ad4]
    eax = (uint32_t)(M32((uint32_t)(0x662ad4u)));
L_0047fc49:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0047fc4c:  // je 0x47fc53
    if (f.zf) goto L_0047fc53;
L_0047fc4e:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_0047fc51:  // jne 0x47fc69
    if (!f.zf) goto L_0047fc69;
L_0047fc53:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fc55:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047fc5a:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fc5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fc5f:  // mov dword ptr [eax + 0x16c], 1
    M32((uint32_t)(eax + 0x16cu)) = (uint32_t)(0x1u);
L_0047fc69:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0047fc6b:  // jle 0x47fd00
    if ((f.zf || f.sf != f.of)) goto L_0047fd00;
L_0047fc71:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047fc75:  // lea esi, [esp + 0x24]
    esi = (uint32_t)((uint32_t)(esp + 0x24u));
L_0047fc79:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0047fc7d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047fc82:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047fc83:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047fc84:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fc86:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fc8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fc8b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047fc8d:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fc92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fc92:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_0047fc96:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_0047fc9c:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0047fca2:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047fca6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fca8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047fcaa:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047fcab:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_0047fcb1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047fcb3:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0047fcb9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047fcba:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0047fcbc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047fcc1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047fcc6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047fccb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047fccc:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0047fcce:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047fccf:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047fcd4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047fcd7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fcd9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fcdeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fcde:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047fce0:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fce5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fce5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047fce9:  // fadd dword ptr [0x5db2b8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db2b8u)));
L_0047fcef:  // add esi, 0xc8
    t0 = ladd<32>(esi, 0xc8u, f);
    esi = (uint32_t)(t0);
L_0047fcf5:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0047fcf6:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047fcfa:  // jne 0x47fc79
    if (!f.zf) goto L_0047fc79;
L_0047fd00:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047fd02:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047fd07:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047fd0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047fd0c:  // mov dword ptr [eax + 0x16c], 0
    M32((uint32_t)(eax + 0x16cu)) = (uint32_t)(0x0u);
L_0047fd16:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047fd1a:  // add ebp, 0xc
    t0 = ladd<32>(ebp, 0xcu, f);
    ebp = (uint32_t)(t0);
L_0047fd1d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047fd1e:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0047fd22:  // jne 0x47fbb1
    if (!f.zf) goto L_0047fbb1;
L_0047fd28:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047fd29:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047fd2a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047fd2b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047fd2c:  // add esp, 0x1f54
    t0 = ladd<32>(esp, 0x1f54u, f);
    esp = (uint32_t)(t0);
L_0047fd32:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0047fb50, 0047fb50)
