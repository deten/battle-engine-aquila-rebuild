// lifted from 00490a40 (FUN_00490a40, 963 bytes, 261 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00490a40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00490a40;
L_00490a40:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00490a42:  // push 0x5d3188
    t0 = 0x5d3188u; esp -= 4; M32(esp) = t0;
L_00490a47:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00490a4d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00490a4e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00490a55:  // sub esp, 0x78
    t0 = lsub<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_00490a58:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00490a59:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00490a5b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00490a5c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00490a5d:  // mov eax, dword ptr [ebx + 0x1034]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1034u)));
L_00490a63:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00490a64:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00490a68:  // mov eax, dword ptr [esp + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_00490a6f:  // mov dword ptr [esp + 0x20], 0xb
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xbu);
L_00490a77:  // fld dword ptr [eax + 0x2c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x2cu)));
L_00490a7a:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_00490a7d:  // lea esi, [eax + 0x14]
    esi = (uint32_t)((uint32_t)(eax + 0x14u));
L_00490a80:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00490a84:  // fld dword ptr [eax + 0x28]
    lpush(x, (long double)F32((uint32_t)(eax + 0x28u)));
L_00490a87:  // fsub dword ptr [esi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x4u)));
L_00490a8a:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00490a8e:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_00490a91:  // fsub dword ptr [esi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi)));
L_00490a93:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00490a97:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00490a9b:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_00490a9f:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_00490aa3:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00490aa7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00490aab:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00490aaf:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00490ab3:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00490ab7:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00490abb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00490abd:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00490ac1:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00490ac5:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_00490ac9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00490acb:  // fst dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
L_00490acf:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00490ad1:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00490ad5:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00490ad9:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_00490adf:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00490ae3:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_00490ae9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490aeb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00490aee:  // jne 0x490b1d
    if (!f.zf) goto L_00490b1d;
L_00490af0:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00490af4:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00490afa:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00490afd:  // mov dword ptr [esp + 0x18], 0x40000000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x40000000u);
L_00490b05:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00490b08:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00490b0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00490b0d:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00490b11:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00490b15:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00490b18:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00490b19:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00490b1d:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00490b21:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00490b23:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00490b29:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490b2b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00490b2e:  // jne 0x490b54
    if (!f.zf) goto L_00490b54;
L_00490b30:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00490b36:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00490b38:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00490b3c:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00490b40:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00490b42:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00490b46:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00490b4a:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00490b4e:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00490b52:  // jmp 0x490b56
    goto L_00490b56;
L_00490b54:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00490b56:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00490b5a:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00490b5e:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00490b61:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00490b63:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00490b66:  // mov ebp, dword ptr [esi + 8]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00490b69:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00490b6d:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00490b71:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00490b75:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00490b79:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00490b7d:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00490b7f:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_00490b83:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00490b85:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00490b89:  // mov dword ptr [esp + 0x3c], ebp
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebp);
L_00490b8d:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00490b91:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00490b95:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00490b99:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00490b9d:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00490ba1:  // jl 0x490de6
    if ((f.sf != f.of)) goto L_00490de6;
L_00490ba7:  // cmp dword ptr [esp + 0xa0], 1
    t0 = lsub<32>(M32((uint32_t)(esp + 0xa0u)), 0x1u, f);
L_00490baf:  // jne 0x490bc4
    if (!f.zf) goto L_00490bc4;
L_00490bb1:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00490bb5:  // fcomp dword ptr [esp + 0x30]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x30u)));
    lpop(x);
L_00490bb9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490bbb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00490bbe:  // je 0x490cb3
    if (f.zf) goto L_00490cb3;
L_00490bc4:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00490bc8:  // fsub dword ptr [0x5dc244]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dc244u)));
L_00490bce:  // fadd dword ptr [0x5dbdec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbdecu)));
L_00490bd4:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00490bd8:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00490bdc:  // fsub dword ptr [0x5dc244]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dc244u)));
L_00490be2:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00490be6:  // fadd dword ptr [0x5dbdec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbdecu)));
L_00490bec:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00490bf0:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00490bf4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00490bf6:  // or ecx, edx
    t0 = llog<32>(ecx | edx, f);
    ecx = (uint32_t)(t0);
L_00490bf8:  // test ecx, 0x3e0000
    t0 = llog<32>(ecx & 0x3e0000u, f);
L_00490bfe:  // jne 0x490c68
    if (!f.zf) goto L_00490c68;
L_00490c00:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00490c02:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00490c04:  // sar eax, 5
    t0 = lsar<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_00490c07:  // sar ecx, 0xb
    t0 = lsar<32>(ecx, 0xbu, f);
    ecx = (uint32_t)(t0);
L_00490c0a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00490c0e:  // and eax, 0xfc0
    t0 = llog<32>(eax & 0xfc0u, f);
    eax = (uint32_t)(t0);
L_00490c13:  // and ecx, 0x3f
    t0 = llog<32>(ecx & 0x3fu, f);
    ecx = (uint32_t)(t0);
L_00490c16:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00490c18:  // fcomp dword ptr [ebx + eax*8 + 0x13e0]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + eax * 8u + 0x13e0u)));
    lpop(x);
L_00490c1f:  // lea ecx, [ebx + eax*8 + 0x13dc]
    ecx = (uint32_t)((uint32_t)(ebx + eax * 8u + 0x13dcu));
L_00490c26:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490c28:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00490c2b:  // jne 0x490c79
    if (!f.zf) goto L_00490c79;
L_00490c2d:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00490c31:  // fcomp dword ptr [ecx]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx)));
    lpop(x);
L_00490c33:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490c35:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00490c38:  // je 0x490cb3
    if (f.zf) goto L_00490cb3;
L_00490c3a:  // mov eax, dword ptr [ebx + 0x102c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x102cu)));
L_00490c40:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00490c41:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00490c43:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00490c47:  // call 0x47eb00
    t0 = 0x0047eb00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00490c4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00490c4c:  // movsx ecx, ax
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)((eax & 0xffffu)));
L_00490c4f:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_00490c53:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00490c57:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00490c5b:  // fcomp dword ptr [esp + 0x3c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x3cu)));
    lpop(x);
L_00490c5f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490c61:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00490c64:  // jne 0x490cb3
    if (!f.zf) goto L_00490cb3;
L_00490c66:  // jmp 0x490c79
    goto L_00490c79;
L_00490c68:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00490c6c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00490c72:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490c74:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00490c77:  // je 0x490cb3
    if (f.zf) goto L_00490cb3;
L_00490c79:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00490c7d:  // fadd dword ptr [esp + 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x44u)));
L_00490c81:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00490c85:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00490c86:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00490c88:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00490c8c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00490c90:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_00490c94:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00490c98:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00490c9c:  // fadd dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00490ca0:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00490ca4:  // jg 0x490de2
    if ((!f.zf && f.sf == f.of)) goto L_00490de2;
L_00490caa:  // mov ebp, dword ptr [esp + 0x3c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00490cae:  // jmp 0x490ba7
    goto L_00490ba7;
L_00490cb3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00490cb7:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_00490cbd:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00490cc1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00490cc3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00490cc6:  // je 0x490cf0
    if (f.zf) goto L_00490cf0;
L_00490cc8:  // mov edx, dword ptr [esp + 0x9c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_00490ccf:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00490cd3:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00490cd7:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00490cd9:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00490cdd:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00490ce0:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_00490ce3:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00490ce6:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00490ceb:  // jmp 0x490de8
    goto L_00490de8;
L_00490cf0:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00490cf4:  // fsub dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00490cf8:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00490cfc:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_00490d00:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00490d04:  // fsub dword ptr [esp + 0x44]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x44u)));
L_00490d08:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00490d0a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00490d0c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00490d0e:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00490d12:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00490d16:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00490d1a:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_00490d1e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00490d23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00490d23:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00490d27:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00490d2b:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00490d2f:  // mov esi, dword ptr [esp + 0x38]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00490d33:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_00490d37:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00490d3b:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_00490d3f:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00490d43:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00490d47:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00490d4b:  // mov dword ptr [esp + 0x74], ecx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ecx);
L_00490d4f:  // mov dword ptr [esp + 0x78], edx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(edx);
L_00490d53:  // mov dword ptr [esp + 0x7c], esi
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(esi);
L_00490d57:  // mov dword ptr [esp + 0x80], ebp
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ebp);
L_00490d5e:  // mov dword ptr [esp + 0x84], eax
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(eax);
L_00490d65:  // mov dword ptr [esp + 0x54], 0x5d8bfc
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x5d8bfcu);
L_00490d6d:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00490d74:  // mov edi, dword ptr [esp + 0x9c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_00490d7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00490d7c:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_00490d80:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00490d81:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00490d82:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00490d84:  // mov dword ptr [esp + 0x9c], 0
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0x0u);
L_00490d8f:  // call 0x490a40
    t0 = 0x00490a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00490d94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00490d94:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00490d96:  // jne 0x490de8
    if (!f.zf) goto L_00490de8;
L_00490d98:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00490d9c:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00490da0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00490da4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00490da5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00490da6:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00490da9:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00490dac:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00490db0:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00490db3:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00490db6:  // push 0x62d964
    t0 = 0x62d964u; esp -= 4; M32(esp) = t0;
L_00490dbb:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00490dc0:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00490dc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00490dc5:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00490dc9:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00490dcd:  // mov dword ptr [edi], edx
    M32((uint32_t)(edi)) = (uint32_t)(edx);
L_00490dcf:  // mov dword ptr [edi + 4], esi
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(esi);
L_00490dd2:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_00490dd5:  // mov dword ptr [edi + 0xc], eax
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(eax);
L_00490dd8:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00490ddb:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00490de0:  // jmp 0x490de8
    goto L_00490de8;
L_00490de2:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00490de6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00490de8:  // mov ecx, dword ptr [esp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00490def:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00490df0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00490df1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00490df2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00490df3:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00490dfa:  // add esp, 0x84
    t0 = ladd<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_00490e00:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00490a40, 00490a40)
