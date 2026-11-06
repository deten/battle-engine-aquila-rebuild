// lifted from 00460b40 (vslot5, 3802 bytes, 1060 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00460b40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00460b40;
L_00460b40:  // sub esp, 0x80
    t0 = lsub<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_00460b46:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00460b4d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00460b4e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00460b4f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00460b50:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00460b52:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00460b53:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_00460b5a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00460b5b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460b5c:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00460b61:  // call 0x467200
    t0 = 0x00467200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460b66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460b66:  // fld dword ptr [0x5db53c]
    lpush(x, (long double)F32((uint32_t)(0x5db53cu)));
L_00460b6c:  // fsub dword ptr [esi + 0x3460]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x3460u)));
L_00460b72:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00460b76:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00460b7d:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_00460b83:  // fst dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
L_00460b87:  // fsub dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00460b8d:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00460b93:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00460b97:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00460b9b:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00460b9d:  // jge 0x460ba1
    if ((f.sf == f.of)) goto L_00460ba1;
L_00460b9f:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00460ba1:  // mov edx, dword ptr [esi + 0x3468]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x3468u)));
L_00460ba7:  // mov ebp, dword ptr [esi + 0x346c]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x346cu)));
L_00460bad:  // mov eax, dword ptr [esi + edx*4 + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + edx * 4u + 0x4u)));
L_00460bb1:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_00460bb3:  // jl 0x460bba
    if ((f.sf != f.of)) goto L_00460bba;
L_00460bb5:  // lea ebp, [eax - 1]
    ebp = (uint32_t)((uint32_t)(eax + 0xffffffffu));
L_00460bb8:  // jmp 0x460bc0
    goto L_00460bc0;
L_00460bba:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00460bbc:  // jge 0x460bc0
    if ((f.sf == f.of)) goto L_00460bc0;
L_00460bbe:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00460bc0:  // mov eax, dword ptr [esi + 0x345c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x345cu)));
L_00460bc6:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_00460bca:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00460bcc:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_00460bd4:  // jle 0x460e1a
    if ((f.zf || f.sf != f.of)) goto L_00460e1a;
L_00460bda:  // lea eax, [esi + 0xcc]
    eax = (uint32_t)((uint32_t)(esi + 0xccu));
L_00460be0:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00460be4:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460be8:  // fcomp dword ptr [0x5db5b0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db5b0u)));
    lpop(x);
L_00460bee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460bf0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00460bf3:  // je 0x460e1a
    if (f.zf) goto L_00460e1a;
L_00460bf9:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460bfd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00460c03:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460c05:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00460c08:  // jne 0x460dea
    if (!f.zf) goto L_00460dea;
L_00460c0e:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00460c12:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00460c14:  // mov ecx, 0x64
    ecx = (uint32_t)(0x64u);
L_00460c19:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00460c1a:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00460c1c:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00460c1e:  // jne 0x460dea
    if (!f.zf) goto L_00460dea;
L_00460c24:  // mov eax, dword ptr [esi + 0x3468]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x3468u)));
L_00460c2a:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00460c2d:  // lea eax, [ebp + edx*2]
    eax = (uint32_t)((uint32_t)(ebp + edx * 2u));
L_00460c31:  // mov ecx, dword ptr [esi + eax*4 + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0xccu)));
L_00460c38:  // mov eax, 0x51eb851f
    eax = (uint32_t)(0x51eb851fu);
L_00460c3d:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00460c3f:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_00460c42:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00460c44:  // mov eax, 0x51eb851f
    eax = (uint32_t)(0x51eb851fu);
L_00460c49:  // shr ecx, 0x1f
    t0 = lshr<32>(ecx, 0x1fu, f);
    ecx = (uint32_t)(t0);
L_00460c4c:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00460c4e:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00460c53:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_00460c55:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00460c59:  // imul dword ptr [edx]
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)M32((uint32_t)(edx)); eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00460c5b:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_00460c5e:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00460c60:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00460c63:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00460c65:  // sub ebx, edx
    t0 = lsub<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_00460c67:  // neg ebx
    t0 = lneg<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00460c69:  // sbb ebx, ebx
    t0 = lsbb<32>(ebx, ebx, f);
    ebx = (uint32_t)(t0);
L_00460c6b:  // and ebx, 0xff9f9fa0
    t0 = llog<32>(ebx & 0xff9f9fa0u, f);
    ebx = (uint32_t)(t0);
L_00460c71:  // add ebx, 0xff8f8f8f
    t0 = ladd<32>(ebx, 0xff8f8f8fu, f);
    ebx = (uint32_t)(t0);
L_00460c77:  // mov dword ptr [esp + 0x28], ebx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebx);
L_00460c7b:  // call 0x4681c0
    t0 = 0x004681c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460c80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460c80:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00460c82:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00460c84:  // mov cl, byte ptr [esp + 0x2a]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x2au))) & 0xffu);
L_00460c88:  // mov dl, bh
    edx = (edx & 0xffffff00u) | ((uint32_t)(((ebx >> 8) & 0xffu)) & 0xffu);
L_00460c8a:  // imul ecx, edi
    t0 = limul32(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_00460c8d:  // imul edx, edi
    t0 = limul32(edx, edi, f);
    edx = (uint32_t)(t0);
L_00460c90:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460c94:  // fsub dword ptr [0x5d85cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ccu)));
L_00460c9a:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_00460c9c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00460c9e:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_00460ca3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00460ca8:  // imul eax, edi
    t0 = limul32(eax, edi, f);
    eax = (uint32_t)(t0);
L_00460cab:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00460cae:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00460cb1:  // shr edx, 8
    t0 = lshr<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00460cb4:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00460cb6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00460cb8:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00460cbb:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00460cbe:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00460cc0:  // and ebx, 0xff000000
    t0 = llog<32>(ebx & 0xff000000u, f);
    ebx = (uint32_t)(t0);
L_00460cc6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00460cc8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00460ccd:  // add ecx, ebx
    t0 = ladd<32>(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_00460ccf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00460cd4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460cd5:  // mov ecx, dword ptr [0x89d888]
    ecx = (uint32_t)(M32((uint32_t)(0x89d888u)));
L_00460cdb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460cdc:  // push 0x3f747ae1
    t0 = 0x3f747ae1u; esp -= 4; M32(esp) = t0;
L_00460ce1:  // push 0x43a10000
    t0 = 0x43a10000u; esp -= 4; M32(esp) = t0;
L_00460ce6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460ce7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00460cea:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460cefu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460cef:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00460cf2:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00460cf7:  // call 0x4681e0
    t0 = 0x004681e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460cfcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460cfc:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00460d00:  // mov eax, 0x51eb851f
    eax = (uint32_t)(0x51eb851fu);
L_00460d05:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_00460d07:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00460d09:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_00460d0c:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00460d0e:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00460d12:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00460d15:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00460d17:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00460d18:  // push 0x6245cc
    t0 = 0x6245ccu; esp -= 4; M32(esp) = t0;
L_00460d1d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460d1e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460d23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460d23:  // mov eax, dword ptr [esi + 0x3468]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x3468u)));
L_00460d29:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00460d2c:  // mov dword ptr [esp + 0x28], 0xff1f4f7f
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xff1f4f7fu);
L_00460d34:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00460d37:  // lea eax, [ebp + edx*2]
    eax = (uint32_t)((uint32_t)(ebp + edx * 2u));
L_00460d3b:  // mov ecx, dword ptr [esi + eax*4 + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0xccu)));
L_00460d42:  // mov eax, 0x51eb851f
    eax = (uint32_t)(0x51eb851fu);
L_00460d47:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00460d49:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00460d4b:  // mov eax, 0x51eb851f
    eax = (uint32_t)(0x51eb851fu);
L_00460d50:  // sar ecx, 5
    t0 = lsar<32>(ecx, 0x5u, f);
    ecx = (uint32_t)(t0);
L_00460d53:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00460d55:  // shr edx, 0x1f
    t0 = lshr<32>(edx, 0x1fu, f);
    edx = (uint32_t)(t0);
L_00460d58:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00460d5a:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00460d5c:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00460d5e:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_00460d61:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00460d63:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00460d66:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00460d68:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_00460d6a:  // je 0x460d74
    if (f.zf) goto L_00460d74;
L_00460d6c:  // mov dword ptr [esp + 0x28], 0x3e1f4f7f
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x3e1f4f7fu);
L_00460d74:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00460d78:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00460d7a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00460d7c:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00460d80:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00460d85:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460d86:  // shr ebx, 8
    t0 = lshr<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00460d89:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460d8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460d8e:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_00460d90:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00460d94:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_00460d9a:  // and ebx, 0xff0000
    t0 = llog<32>(ebx & 0xff0000u, f);
    ebx = (uint32_t)(t0);
L_00460da0:  // imul edx, edi
    t0 = limul32(edx, edi, f);
    edx = (uint32_t)(t0);
L_00460da3:  // imul ebx, edi
    t0 = limul32(ebx, edi, f);
    ebx = (uint32_t)(t0);
L_00460da6:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00460daa:  // fadd dword ptr [0x5d85d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d4u)));
L_00460db0:  // xor edx, ecx
    t0 = llog<32>(edx ^ ecx, f);
    edx = (uint32_t)(t0);
L_00460db2:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00460db5:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00460dbb:  // xor edx, ebx
    t0 = llog<32>(edx ^ ebx, f);
    edx = (uint32_t)(t0);
L_00460dbd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00460dbe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00460dbf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00460dc4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00460dc9:  // push 0x3eb0a3d7
    t0 = 0x3eb0a3d7u; esp -= 4; M32(esp) = t0;
L_00460dce:  // push 0x43330000
    t0 = 0x43330000u; esp -= 4; M32(esp) = t0;
L_00460dd3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460dd4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00460dd7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00460dd9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00460dde:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460de3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460de3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00460de5:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460deau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460dea:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460dee:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00460df2:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00460df6:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_00460dfc:  // mov ecx, dword ptr [esi + 0x345c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x345cu)));
L_00460e02:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00460e03:  // add edx, 0x18
    t0 = ladd<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_00460e06:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00460e08:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00460e0c:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_00460e10:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00460e14:  // jl 0x460be4
    if ((f.sf != f.of)) goto L_00460be4;
L_00460e1a:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00460e1f:  // call 0x4681e0
    t0 = 0x004681e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460e24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460e24:  // fld dword ptr [0x5db53c]
    lpush(x, (long double)F32((uint32_t)(0x5db53cu)));
L_00460e2a:  // fsub dword ptr [esi + 0x3460]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x3460u)));
L_00460e30:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00460e34:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00460e3b:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00460e41:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_00460e47:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00460e4d:  // fst dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
L_00460e51:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460e53:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00460e56:  // je 0x460e62
    if (f.zf) goto L_00460e62;
L_00460e58:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00460e5a:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00460e60:  // jmp 0x460e77
    goto L_00460e77;
L_00460e62:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00460e68:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460e6a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00460e6d:  // jne 0x460e77
    if (!f.zf) goto L_00460e77;
L_00460e6f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00460e71:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00460e77:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00460e7d:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00460e7f:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00460e83:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00460e87:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00460e8b:  // mov eax, dword ptr [esi + 0x345c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x345cu)));
L_00460e91:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00460e93:  // jle 0x4617a8
    if ((f.zf || f.sf != f.of)) goto L_004617a8;
L_00460e99:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460e9d:  // fcomp dword ptr [0x629390]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x629390u)));
    lpop(x);
L_00460ea3:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00460ea5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460ea7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00460eaa:  // jne 0x460ec2
    if (!f.zf) goto L_00460ec2;
L_00460eac:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460eb0:  // fcomp dword ptr [0x629394]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x629394u)));
    lpop(x);
L_00460eb6:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_00460ebb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460ebd:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00460ec0:  // jne 0x460ec7
    if (!f.zf) goto L_00460ec7;
L_00460ec2:  // mov byte ptr [esp + 0x13], 0
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x0u);
L_00460ec7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460ecb:  // fcomp dword ptr [0x629390]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x629390u)));
    lpop(x);
L_00460ed1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460ed3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00460ed6:  // je 0x460ef9
    if (f.zf) goto L_00460ef9;
L_00460ed8:  // cmp dword ptr [esi + 0x3468], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x3468u)), ebx, f);
L_00460ede:  // jg 0x460ef9
    if ((!f.zf && f.sf == f.of)) goto L_00460ef9;
L_00460ee0:  // lea eax, [ebx + 1]
    eax = (uint32_t)((uint32_t)(ebx + 0x1u));
L_00460ee3:  // mov dword ptr [esi + 0x346c], ecx
    M32((uint32_t)(esi + 0x346cu)) = (uint32_t)(ecx);
L_00460ee9:  // mov dword ptr [esi + 0x3468], eax
    M32((uint32_t)(esi + 0x3468u)) = (uint32_t)(eax);
L_00460eef:  // mov eax, dword ptr [esi + eax*4 + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x4u)));
L_00460ef3:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00460ef5:  // jg 0x460f2c
    if ((!f.zf && f.sf == f.of)) goto L_00460f2c;
L_00460ef7:  // jmp 0x460f29
    goto L_00460f29;
L_00460ef9:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460efd:  // fcomp dword ptr [0x629394]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x629394u)));
    lpop(x);
L_00460f03:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460f05:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00460f08:  // jne 0x460f30
    if (!f.zf) goto L_00460f30;
L_00460f0a:  // cmp dword ptr [esi + 0x3468], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x3468u)), ebx, f);
L_00460f10:  // jl 0x460f30
    if ((f.sf != f.of)) goto L_00460f30;
L_00460f12:  // lea eax, [ebx - 1]
    eax = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_00460f15:  // mov dword ptr [esi + 0x346c], ecx
    M32((uint32_t)(esi + 0x346cu)) = (uint32_t)(ecx);
L_00460f1b:  // mov dword ptr [esi + 0x3468], eax
    M32((uint32_t)(esi + 0x3468u)) = (uint32_t)(eax);
L_00460f21:  // mov eax, dword ptr [esi + eax*4 + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x4u)));
L_00460f25:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00460f27:  // jg 0x460f2c
    if ((!f.zf && f.sf == f.of)) goto L_00460f2c;
L_00460f29:  // lea ecx, [eax - 1]
    ecx = (uint32_t)((uint32_t)(eax + 0xffffffffu));
L_00460f2c:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00460f30:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460f34:  // fcomp dword ptr [0x5db5b0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db5b0u)));
    lpop(x);
L_00460f3a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460f3c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00460f3f:  // je 0x4617a8
    if (f.zf) goto L_004617a8;
L_00460f45:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00460f49:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00460f4f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460f51:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00460f54:  // jne 0x46178b
    if (!f.zf) goto L_0046178b;
L_00460f5a:  // mov eax, dword ptr [esi + ebx*4 + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + ebx * 4u + 0x4u)));
L_00460f5e:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_00460f66:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00460f68:  // lea ecx, [eax - 1]
    ecx = (uint32_t)((uint32_t)(eax + 0xffffffffu));
L_00460f6b:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_00460f6f:  // fild dword ptr [esp + 0x3c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x3cu)));
L_00460f73:  // fmul dword ptr [0x5db538]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db538u)));
L_00460f79:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00460f7f:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_00460f85:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00460f89:  // jle 0x46178b
    if ((f.zf || f.sf != f.of)) goto L_0046178b;
L_00460f8f:  // lea ecx, [ebx + ebx*2]
    ecx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_00460f92:  // lea edx, [ebx + ebx*2]
    edx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_00460f95:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_00460f98:  // lea eax, [esi + edx*8 + 0xcc]
    eax = (uint32_t)((uint32_t)(esi + edx * 8u + 0xccu));
L_00460f9f:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00460fa7:  // lea edx, [ecx + esi + 0xee0]
    edx = (uint32_t)((uint32_t)(ecx + esi + 0xee0u));
L_00460fae:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00460fb2:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_00460fb6:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00460fba:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00460fbc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460fbd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00460fbf:  // call 0x461a50
    t0 = 0x00461a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00460fc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00460fc4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00460fc6:  // je 0x461376
    if (f.zf) goto L_00461376;
L_00460fcc:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_00460fd0:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00460fd2:  // je 0x461069
    if (f.zf) goto L_00461069;
L_00460fd8:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00460fdf:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00460fe5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00460fe7:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00460fea:  // je 0x461069
    if (f.zf) goto L_00461069;
L_00460fec:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00460ff0:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_00460ff6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00460ff7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00460ffa:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00460ffe:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_00461004:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461005:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00461008:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0046100c:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_00461012:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461013:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00461016:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0046101a:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_00461020:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461021:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00461024:  // call 0x469400
    t0 = 0x00469400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461029u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461029:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0046102c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0046102e:  // je 0x461069
    if (f.zf) goto L_00461069;
L_00461030:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00461034:  // mov dword ptr [esi + 0x3468], ebx
    M32((uint32_t)(esi + 0x3468u)) = (uint32_t)(ebx);
L_0046103a:  // mov dword ptr [esi + 0x346c], eax
    M32((uint32_t)(esi + 0x346cu)) = (uint32_t)(eax);
L_00461040:  // mov ecx, dword ptr [esi + ebx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + ebx * 4u + 0x4u)));
L_00461044:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00461046:  // jl 0x46104d
    if ((f.sf != f.of)) goto L_0046104d;
L_00461048:  // lea eax, [ecx - 1]
    eax = (uint32_t)((uint32_t)(ecx + 0xffffffffu));
L_0046104b:  // jmp 0x461057
    goto L_00461057;
L_0046104d:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00461051:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00461053:  // jge 0x461057
    if ((f.sf == f.of)) goto L_00461057;
L_00461055:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00461057:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00461059:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046105e:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_00461060:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00461062:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00461066:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461069u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461069:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046106b:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0046106d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00461072:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461077u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461077:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00461079:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0046107b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00461080:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461085u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461085:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00461087:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00461089:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046108b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00461090:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461095u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461095:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00461097:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00461099:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046109b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004610a0:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004610a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004610a5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004610a7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004610a9:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004610ae:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004610b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004610b3:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004610b7:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_004610bc:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_004610be:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004610bf:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004610c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004610c4:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004610c6:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004610c8:  // je 0x4611cc
    if (f.zf) goto L_004611cc;
L_004610ce:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004610cf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004610d1:  // call 0x461a50
    t0 = 0x00461a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004610d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004610d6:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004610d9:  // jne 0x4611cc
    if (!f.zf) goto L_004611cc;
L_004610df:  // fld dword ptr [ebp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x3cu)));
L_004610e2:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_004610e8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004610ea:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004610ed:  // jne 0x4611cc
    if (!f.zf) goto L_004611cc;
L_004610f3:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004610f7:  // mov edi, dword ptr [ecx]
    edi = (uint32_t)(M32((uint32_t)(ecx)));
L_004610f9:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_004610fe:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004610ff:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461104u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461104:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00461106:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00461108:  // je 0x461143
    if (f.zf) goto L_00461143;
L_0046110a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046110b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046110d:  // call 0x461a50
    t0 = 0x00461a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461112u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461112:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00461115:  // jne 0x461143
    if (!f.zf) goto L_00461143;
L_00461117:  // fld dword ptr [ebp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x3cu)));
L_0046111a:  // fst dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
L_0046111e:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_00461124:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00461126:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00461129:  // jne 0x46113c
    if (!f.zf) goto L_0046113c;
L_0046112b:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0046112f:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_00461134:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00461135:  // call 0x421470
    t0 = 0x00421470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046113au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046113a:  // jmp 0x461153
    goto L_00461153;
L_0046113c:  // push 0x6293b8
    t0 = 0x6293b8u; esp -= 4; M32(esp) = t0;
L_00461141:  // jmp 0x461148
    goto L_00461148;
L_00461143:  // push 0x624624
    t0 = 0x624624u; esp -= 4; M32(esp) = t0;
L_00461148:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046114du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046114d:  // mov ax, word ptr [eax]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax))) & 0xffffu);
L_00461150:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00461153:  // movsx eax, al
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu)));
L_00461156:  // add eax, -0x41
    t0 = ladd<32>(eax, 0xffffffbfu, f);
    eax = (uint32_t)(t0);
L_00461159:  // cmp eax, 0x12
    t0 = lsub<32>(eax, 0x12u, f);
L_0046115c:  // ja 0x461190
    if ((!f.cf && !f.zf)) goto L_00461190;
L_0046115e:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00461160:  // mov cl, byte ptr [eax + 0x461a34]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x461a34u))) & 0xffu);
L_00461166:  // jmp dword ptr [ecx*4 + 0x461a1c]
    t0 = M32((uint32_t)(ecx * 4u + 0x461a1cu));
    switch (t0) {
    case 0x0046116du: goto L_0046116d;
    case 0x00461174u: goto L_00461174;
    case 0x0046117bu: goto L_0046117b;
    case 0x00461182u: goto L_00461182;
    case 0x00461189u: goto L_00461189;
    case 0x00461190u: goto L_00461190;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0046116d:  // mov eax, dword ptr [0x89d830]
    eax = (uint32_t)(M32((uint32_t)(0x89d830u)));
L_00461172:  // jmp 0x461195
    goto L_00461195;
L_00461174:  // mov eax, dword ptr [0x89d81c]
    eax = (uint32_t)(M32((uint32_t)(0x89d81cu)));
L_00461179:  // jmp 0x461195
    goto L_00461195;
L_0046117b:  // mov eax, dword ptr [0x89d820]
    eax = (uint32_t)(M32((uint32_t)(0x89d820u)));
L_00461180:  // jmp 0x461195
    goto L_00461195;
L_00461182:  // mov eax, dword ptr [0x89d824]
    eax = (uint32_t)(M32((uint32_t)(0x89d824u)));
L_00461187:  // jmp 0x461195
    goto L_00461195;
L_00461189:  // mov eax, dword ptr [0x89d828]
    eax = (uint32_t)(M32((uint32_t)(0x89d828u)));
L_0046118e:  // jmp 0x461195
    goto L_00461195;
L_00461190:  // mov eax, dword ptr [0x89d82c]
    eax = (uint32_t)(M32((uint32_t)(0x89d82cu)));
L_00461195:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00461199:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0046119d:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0046119f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004611a1:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_004611a4:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004611a6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004611ab:  // shl edi, 0x10
    t0 = lshl<32>(edi, 0x10u, f);
    edi = (uint32_t)(t0);
L_004611ae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004611b0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004611b2:  // or edi, 0xffffff
    t0 = llog<32>(edi | 0xffffffu, f);
    edi = (uint32_t)(t0);
L_004611b8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004611bd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004611c2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004611c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004611c4:  // push 0x3e9eb852
    t0 = 0x3e9eb852u; esp -= 4; M32(esp) = t0;
L_004611c9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004611ca:  // jmp 0x461206
    goto L_00461206;
L_004611cc:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004611d0:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004611d4:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004611d6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004611d8:  // shl edi, 8
    t0 = lshl<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_004611db:  // sub edi, eax
    t0 = lsub<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_004611dd:  // mov eax, dword ptr [0x89d808]
    eax = (uint32_t)(M32((uint32_t)(0x89d808u)));
L_004611e2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004611e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004611e9:  // shl edi, 0x10
    t0 = lshl<32>(edi, 0x10u, f);
    edi = (uint32_t)(t0);
L_004611ec:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004611ee:  // or edi, 0xffffff
    t0 = llog<32>(edi | 0xffffffu, f);
    edi = (uint32_t)(t0);
L_004611f4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004611f9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004611fe:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004611ff:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461200:  // push 0x3e9eb852
    t0 = 0x3e9eb852u; esp -= 4; M32(esp) = t0;
L_00461205:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461206:  // mov ebp, dword ptr [esp + 0x3c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0046120a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046120b:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461210u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461210:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00461213:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00461218:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0046121a:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0046121c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461221u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461221:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00461223:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00461225:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0046122a:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046122fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046122f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00461231:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00461233:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461235:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0046123a:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046123fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046123f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00461241:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00461243:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461245:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0046124a:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046124fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046124f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461251:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461253:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00461258:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046125du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046125d:  // lea edx, [ebx + ebx*4]
    edx = (uint32_t)((uint32_t)(ebx + ebx * 4u));
L_00461260:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461262:  // lea eax, [ebx + edx*2]
    eax = (uint32_t)((uint32_t)(ebx + edx * 2u));
L_00461265:  // mov edx, dword ptr [0x89d814]
    edx = (uint32_t)(M32((uint32_t)(0x89d814u)));
L_0046126b:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0046126f:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00461273:  // fild dword ptr [esp + 0x40]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_00461277:  // fiadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_0046127b:  // fmul dword ptr [0x5db534]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db534u)));
L_00461281:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_00461287:  // fmul dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb8u)));
L_0046128d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0046128f:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00461293:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00461297:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461298:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046129a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046129c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004612a1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004612a6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004612a7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004612a8:  // push 0x3eab851f
    t0 = 0x3eab851fu; esp -= 4; M32(esp) = t0;
L_004612ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004612ae:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004612af:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004612b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004612b4:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004612b8:  // lea ecx, [ebx + ebx*2]
    ecx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_004612bb:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_004612be:  // lea eax, [edx + ecx*2]
    eax = (uint32_t)((uint32_t)(edx + ecx * 2u));
L_004612c1:  // fld dword ptr [esi + eax*4 + 0x57c]
    lpush(x, (long double)F32((uint32_t)(esi + eax * 4u + 0x57cu)));
L_004612c8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004612ce:  // lea ecx, [esi + eax*4 + 0x57c]
    ecx = (uint32_t)((uint32_t)(esi + eax * 4u + 0x57cu));
L_004612d5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004612d7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004612da:  // jne 0x461376
    if (!f.zf) goto L_00461376;
L_004612e0:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004612e2:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004612e4:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004612ea:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004612ec:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004612ef:  // je 0x4612fb
    if (f.zf) goto L_004612fb;
L_004612f1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004612f3:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004612f9:  // jmp 0x461310
    goto L_00461310;
L_004612fb:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00461301:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00461303:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00461306:  // jne 0x461310
    if (!f.zf) goto L_00461310;
L_00461308:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0046130a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00461310:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00461316:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0046131a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046131c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046131d:  // mov eax, 0x80808081
    eax = (uint32_t)(0x80808081u);
L_00461322:  // fistp qword ptr [esp + 0x54]
    M64((uint32_t)(esp + 0x54u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00461326:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0046132a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046132c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046132e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00461333:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00461338:  // imul ecx, dword ptr [esp + 0x34]
    t0 = limul32(ecx, M32((uint32_t)(esp + 0x34u)), f);
    ecx = (uint32_t)(t0);
L_0046133d:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0046133f:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00461341:  // sar edx, 7
    t0 = lsar<32>(edx, 0x7u, f);
    edx = (uint32_t)(t0);
L_00461344:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00461346:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00461349:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0046134b:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046134f:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00461351:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00461354:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00461356:  // mov edx, dword ptr [0x89d818]
    edx = (uint32_t)(M32((uint32_t)(0x89d818u)));
L_0046135c:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0046135f:  // or ecx, 0xffffff
    t0 = llog<32>(ecx | 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00461365:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461366:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00461367:  // push 0x3eab851f
    t0 = 0x3eab851fu; esp -= 4; M32(esp) = t0;
L_0046136c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046136d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046136e:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461373u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461373:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00461376:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046137a:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00461381:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00461388:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0046138a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046138c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046138d:  // call 0x461a50
    t0 = 0x00461a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461392u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461392:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00461394:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_00461398:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_0046139a:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_0046139e:  // neg ebp
    t0 = lneg<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004613a0:  // sbb ebp, ebp
    t0 = lsbb<32>(ebp, ebp, f);
    ebp = (uint32_t)(t0);
L_004613a2:  // and ebp, 0xe0000000
    t0 = llog<32>(ebp & 0xe0000000u, f);
    ebp = (uint32_t)(t0);
L_004613a8:  // add ebp, 0x1fffffff
    t0 = ladd<32>(ebp, 0x1fffffffu, f);
    ebp = (uint32_t)(t0);
L_004613ae:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004613b0:  // je 0x461425
    if (f.zf) goto L_00461425;
L_004613b2:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004613b6:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_004613bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004613bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004613c0:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004613c4:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_004613ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004613cb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004613ce:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004613d2:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_004613d8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004613d9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004613dc:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004613e0:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_004613e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004613e7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004613ea:  // call 0x4693d0
    t0 = 0x004693d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004613efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004613ef:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004613f2:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004613f4:  // je 0x461425
    if (f.zf) goto L_00461425;
L_004613f6:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004613f8:  // je 0x461425
    if (f.zf) goto L_00461425;
L_004613fa:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004613fe:  // mov dword ptr [esi + 0x3468], ebx
    M32((uint32_t)(esi + 0x3468u)) = (uint32_t)(ebx);
L_00461404:  // mov dword ptr [esi + 0x346c], ecx
    M32((uint32_t)(esi + 0x346cu)) = (uint32_t)(ecx);
L_0046140a:  // mov eax, dword ptr [esi + ebx*4 + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + ebx * 4u + 0x4u)));
L_0046140e:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00461410:  // jl 0x461417
    if ((f.sf != f.of)) goto L_00461417;
L_00461412:  // lea ecx, [eax - 1]
    ecx = (uint32_t)((uint32_t)(eax + 0xffffffffu));
L_00461415:  // jmp 0x461421
    goto L_00461421;
L_00461417:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046141b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046141d:  // jge 0x461421
    if ((f.sf == f.of)) goto L_00461421;
L_0046141f:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00461421:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00461425:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_0046142c:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00461432:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00461434:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00461437:  // jne 0x46155d
    if (!f.zf) goto L_0046155d;
L_0046143d:  // cmp dword ptr [esi + 0x3468], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x3468u)), ebx, f);
L_00461443:  // jne 0x46155d
    if (!f.zf) goto L_0046155d;
L_00461449:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0046144d:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00461451:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00461453:  // jne 0x46155d
    if (!f.zf) goto L_0046155d;
L_00461459:  // mov eax, dword ptr [esp + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_00461460:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_00461463:  // je 0x46146e
    if (f.zf) goto L_0046146e;
L_00461465:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_00461468:  // jne 0x46155d
    if (!f.zf) goto L_0046155d;
L_0046146e:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00461475:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0046147b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0046147d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00461480:  // jne 0x461631
    if (!f.zf) goto L_00461631;
L_00461486:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0046148c:  // fsub dword ptr [esp + 0x94]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x94u)));
L_00461493:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_0046149a:  // fmul dword ptr [0x5db530]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db530u)));
L_004614a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004614a1:  // mov ecx, dword ptr [0x89d810]
    ecx = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_004614a7:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004614ab:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004614ad:  // fmul dword ptr [0x5d8bd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd8u)));
L_004614b3:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004614b9:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004614bd:  // fld dword ptr [0x5db52c]
    lpush(x, (long double)F32((uint32_t)(0x5db52cu)));
L_004614c3:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004614c7:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004614cb:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004614cd:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004614d1:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004614d5:  // fld dword ptr [0x5d85f4]
    lpush(x, (long double)F32((uint32_t)(0x5d85f4u)));
L_004614db:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004614df:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004614e3:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004614e5:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004614e9:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004614ed:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004614f1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004614f3:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004614f7:  // fchs 
    ST(0) = -ST(0);
L_004614f9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004614fc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00461501:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461503:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00461505:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461506:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461507:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00461508:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461509:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_0046150e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046150f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00461510:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461515u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461515:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00461519:  // fmul dword ptr [0x5db528]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db528u)));
L_0046151f:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00461523:  // mov ecx, dword ptr [0x89d80c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d80cu)));
L_00461529:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046152a:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0046152e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00461533:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461535:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0046153c:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_00461543:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00461545:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461546:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461547:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00461548:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461549:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_0046154e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046154f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00461550:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461555u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461555:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00461558:  // jmp 0x461631
    goto L_00461631;
L_0046155d:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00461561:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00461563:  // jle 0x461631
    if ((f.zf || f.sf != f.of)) goto L_00461631;
L_00461569:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0046156d:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0046156f:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00461572:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00461574:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_00461579:  // and edi, 0xffff0000
    t0 = llog<32>(edi & 0xffff0000u, f);
    edi = (uint32_t)(t0);
L_0046157f:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00461582:  // imul edi, ecx
    t0 = limul32(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00461585:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00461589:  // xor edi, ebp
    t0 = llog<32>(edi ^ ebp, f);
    edi = (uint32_t)(t0);
L_0046158b:  // and edi, 0xffffff
    t0 = llog<32>(edi & 0xffffffu, f);
    edi = (uint32_t)(t0);
L_00461591:  // xor edi, eax
    t0 = llog<32>(edi ^ eax, f);
    edi = (uint32_t)(t0);
L_00461593:  // lea eax, [ebx + ebx*2]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_00461596:  // lea edx, [ecx + eax*2]
    edx = (uint32_t)((uint32_t)(ecx + eax * 2u));
L_00461599:  // mov ecx, dword ptr [0x89d804]
    ecx = (uint32_t)(M32((uint32_t)(0x89d804u)));
L_0046159f:  // fld dword ptr [esi + edx*4 + 0x57c]
    lpush(x, (long double)F32((uint32_t)(esi + edx * 4u + 0x57cu)));
L_004615a6:  // fmul dword ptr [0x5d8de8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de8u)));
L_004615ac:  // lea eax, [esi + edx*4 + 0x57c]
    eax = (uint32_t)((uint32_t)(esi + edx * 4u + 0x57cu));
L_004615b3:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004615b7:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004615bb:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004615bd:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004615c1:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_004615c7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004615c8:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004615cc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004615d1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004615d3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004615d5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004615da:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004615e0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004615e5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004615e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004615e7:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_004615ec:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004615ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004615ee:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004615f2:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004615f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004615f7:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004615fb:  // mov eax, dword ptr [esp + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004615ff:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_00461602:  // mov ecx, dword ptr [0x89d800]
    ecx = (uint32_t)(M32((uint32_t)(0x89d800u)));
L_00461608:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0046160c:  // fchs 
    ST(0) = -ST(0);
L_0046160e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00461611:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00461616:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461618:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0046161a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046161b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046161c:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00461620:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00461621:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461622:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_00461627:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00461628:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461629:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046162eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046162e:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00461631:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00461635:  // mov dword ptr [esp + 0x3c], 0
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x0u);
L_0046163d:  // mov eax, dword ptr [ecx + 0x960]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x960u)));
L_00461643:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00461645:  // jle 0x461747
    if ((f.zf || f.sf != f.of)) goto L_00461747;
L_0046164b:  // mov ebp, dword ptr [esp + 0x34]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046164f:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00461653:  // mov eax, dword ptr [ebp - 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfffffffcu)));
L_00461656:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_00461659:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0046165b:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0046165f:  // sub edx, ebx
    t0 = lsub<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_00461661:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_00461665:  // mov edx, dword ptr [esi + eax*4 + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x4u)));
L_00461669:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_0046166d:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0046166e:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00461671:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_00461675:  // fmul dword ptr [0x5db538]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db538u)));
L_0046167b:  // lea ecx, [ecx + eax*2]
    ecx = (uint32_t)((uint32_t)(ecx + eax * 2u));
L_0046167e:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_00461682:  // mov edx, dword ptr [esi + ecx*4 + 0xcc]
    edx = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0xccu)));
L_00461689:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046168b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046168c:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00461690:  // fild dword ptr [esp + 0x4c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4cu)));
L_00461694:  // fmul dword ptr [0x5db538]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db538u)));
L_0046169a:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004616a0:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_004616a6:  // fild dword ptr [esp + 0x3c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x3cu)));
L_004616aa:  // fmul dword ptr [0x5db538]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db538u)));
L_004616b0:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004616b2:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004616b6:  // call 0x461a50
    t0 = 0x00461a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004616bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004616bb:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004616bf:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004616c1:  // je 0x4616cc
    if (f.zf) goto L_004616cc;
L_004616c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004616c5:  // mov ecx, 0xafffffff
    ecx = (uint32_t)(0xafffffffu);
L_004616ca:  // jne 0x4616d1
    if (!f.zf) goto L_004616d1;
L_004616cc:  // mov ecx, 0x1fffffff
    ecx = (uint32_t)(0x1fffffffu);
L_004616d1:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004616d5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004616d7:  // jle 0x461729
    if ((f.zf || f.sf != f.of)) goto L_00461729;
L_004616d9:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004616db:  // push 0x3ecccccd
    t0 = 0x3ecccccdu; esp -= 4; M32(esp) = t0;
L_004616e0:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004616e3:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004616e5:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_004616ea:  // imul eax, dword ptr [esp + 0x20]
    t0 = limul32(eax, M32((uint32_t)(esp + 0x20u)), f);
    eax = (uint32_t)(t0);
L_004616ef:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_004616f5:  // push 0x3e9db22d
    t0 = 0x3e9db22du; esp -= 4; M32(esp) = t0;
L_004616fa:  // imul edx, dword ptr [esp + 0x24]
    t0 = limul32(edx, M32((uint32_t)(esp + 0x24u)), f);
    edx = (uint32_t)(t0);
L_004616ff:  // xor edx, ecx
    t0 = llog<32>(edx ^ ecx, f);
    edx = (uint32_t)(t0);
L_00461701:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00461705:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0046170b:  // push 0x41200000
    t0 = 0x41200000u; esp -= 4; M32(esp) = t0;
L_00461710:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_00461712:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00461716:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00461717:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0046171b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046171c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046171d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046171e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046171f:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00461724:  // call 0x466de0
    t0 = 0x00466de0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461729u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461729:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046172d:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00461731:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00461732:  // add ebp, 8
    t0 = ladd<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00461735:  // mov edx, dword ptr [ecx + 0x960]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x960u)));
L_0046173b:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_0046173f:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_00461741:  // jl 0x461653
    if ((f.sf != f.of)) goto L_00461653;
L_00461747:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0046174b:  // fsub dword ptr [0x5db538]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db538u)));
L_00461751:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00461755:  // mov ebp, dword ptr [esp + 0x34]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00461759:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046175d:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00461761:  // mov ecx, dword ptr [esi + ebx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + ebx * 4u + 0x4u)));
L_00461765:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00461766:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0046176a:  // add ebp, 0x20
    t0 = ladd<32>(ebp, 0x20u, f);
    ebp = (uint32_t)(t0);
L_0046176d:  // add edi, 7
    t0 = ladd<32>(edi, 0x7u, f);
    edi = (uint32_t)(t0);
L_00461770:  // add edx, 4
    t0 = ladd<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_00461773:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00461775:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00461779:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_0046177d:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_00461781:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_00461785:  // jl 0x460fb6
    if ((f.sf != f.of)) goto L_00460fb6;
L_0046178b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0046178f:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_00461795:  // mov eax, dword ptr [esi + 0x345c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x345cu)));
L_0046179b:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0046179c:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_0046179e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004617a2:  // jl 0x460e99
    if ((f.sf != f.of)) goto L_00460e99;
L_004617a8:  // mov ebp, dword ptr [esp + 0x98]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004617af:  // cmp ebp, 5
    t0 = lsub<32>(ebp, 0x5u, f);
L_004617b2:  // je 0x4617f3
    if (f.zf) goto L_004617f3;
L_004617b4:  // cmp ebp, 6
    t0 = lsub<32>(ebp, 0x6u, f);
L_004617b7:  // je 0x4617f3
    if (f.zf) goto L_004617f3;
L_004617b9:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004617bd:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004617c3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004617c5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004617c8:  // je 0x4617d8
    if (f.zf) goto L_004617d8;
L_004617ca:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004617cc:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004617d2:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004617d6:  // jmp 0x4617fb
    goto L_004617fb;
L_004617d8:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_004617de:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004617e0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004617e3:  // jne 0x4617ed
    if (!f.zf) goto L_004617ed;
L_004617e5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004617e7:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004617ed:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004617f1:  // jmp 0x4617fb
    goto L_004617fb;
L_004617f3:  // mov dword ptr [esp + 0x40], 0x3f800000
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x3f800000u);
L_004617fb:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004617ff:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00461804:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00461805:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046180au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046180a:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0046180e:  // fsub dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8ba0u)));
L_00461814:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0046181a:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0046181e:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00461822:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00461824:  // jge 0x46182a
    if ((f.sf == f.of)) goto L_0046182a;
L_00461826:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00461828:  // jmp 0x461837
    goto L_00461837;
L_0046182a:  // cmp edi, 0xff
    t0 = lsub<32>(edi, 0xffu, f);
L_00461830:  // jle 0x461837
    if ((f.zf || f.sf != f.of)) goto L_00461837;
L_00461832:  // mov edi, 0xff
    edi = (uint32_t)(0xffu);
L_00461837:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0046183d:  // fsub dword ptr [esp + 0x94]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x94u)));
L_00461844:  // fsub dword ptr [0x5d858c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d858cu)));
L_0046184a:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00461850:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00461852:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00461855:  // je 0x46185f
    if (f.zf) goto L_0046185f;
L_00461857:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00461859:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0046185f:  // mov eax, dword ptr [esi + 0x3468]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x3468u)));
L_00461865:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00461869:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0046186b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0046186d:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00461870:  // fmul dword ptr [0x5db3fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3fcu)));
L_00461876:  // lea edx, [ecx + eax*2]
    edx = (uint32_t)((uint32_t)(ecx + eax * 2u));
L_00461879:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0046187b:  // mov eax, dword ptr [esi + edx*4 + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(esi + edx * 4u + 0xccu)));
L_00461882:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00461886:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461887:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00461889:  // call 0x461a50
    t0 = 0x00461a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046188eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046188e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00461890:  // je 0x4618b4
    if (f.zf) goto L_004618b4;
L_00461892:  // mov eax, dword ptr [esi + 0x3468]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x3468u)));
L_00461898:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0046189c:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0046189f:  // lea eax, [edx + ecx*2]
    eax = (uint32_t)((uint32_t)(edx + ecx * 2u));
L_004618a2:  // mov ecx, dword ptr [esi + eax*4 + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0xccu)));
L_004618a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004618aa:  // call 0x469550
    t0 = 0x00469550u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004618afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004618af:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004618b2:  // jmp 0x4618c0
    goto L_004618c0;
L_004618b4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004618b6:  // push 0x5b
    t0 = 0x5bu; esp -= 4; M32(esp) = t0;
L_004618b8:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004618bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004618bd:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004618c0:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004618c4:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004618c6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004618c7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004618c8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004618ca:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004618cf:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004618d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004618d4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004618d6:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004618dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004618db:  // fild dword ptr [esp + 0x54]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x54u)));
L_004618df:  // mov dword ptr [esp + 0x44], 0x3f800000
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x3f800000u);
L_004618e7:  // fcomp dword ptr [0x5db5ac]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db5acu)));
    lpop(x);
L_004618ed:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004618ef:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004618f2:  // jne 0x4618fc
    if (!f.zf) goto L_004618fc;
L_004618f4:  // mov dword ptr [esp + 0x44], 0x3f4ccccd
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x3f4ccccdu);
L_004618fc:  // fld dword ptr [0x5db4c0]
    lpush(x, (long double)F32((uint32_t)(0x5db4c0u)));
L_00461902:  // fsub dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00461906:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461908:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046190a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0046190f:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_00461912:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00461916:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046191bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046191b:  // fsub dword ptr [esi + 0x3474]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x3474u)));
L_00461921:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00461922:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00461926:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00461928:  // or eax, 0x7f6f3f
    t0 = llog<32>(eax | 0x7f6f3fu, f);
    eax = (uint32_t)(t0);
L_0046192d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00461930:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00461931:  // mov ebx, dword ptr [esp + 0x5c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00461935:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461936:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0046193b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046193c:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_00461941:  // push 0x43190000
    t0 = 0x43190000u; esp -= 4; M32(esp) = t0;
L_00461946:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00461947:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00461949:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0046194e:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461953u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461953:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00461955:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046195au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046195a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046195c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0046195e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00461963:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461968u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461968:  // mov eax, dword ptr [esi + 0x3468]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x3468u)));
L_0046196e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046196f:  // fsub dword ptr [esi + 0x3470]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x3470u)));
L_00461975:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00461978:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046197c:  // lea ecx, [eax + edx*2]
    ecx = (uint32_t)((uint32_t)(eax + edx * 2u));
L_0046197f:  // mov eax, 0x51eb851f
    eax = (uint32_t)(0x51eb851fu);
L_00461984:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00461987:  // mov esi, dword ptr [esi + ecx*4 + 0xcc]
    esi = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0xccu)));
L_0046198e:  // imul esi
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)esi; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00461990:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_00461993:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00461995:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00461998:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0046199a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046199b:  // call 0x469c20
    t0 = 0x00469c20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004619a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004619a0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004619a3:  // or edi, 0x7f7f7f
    t0 = llog<32>(edi | 0x7f7f7fu, f);
    edi = (uint32_t)(t0);
L_004619a9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004619ae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004619af:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004619b0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004619b5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004619ba:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_004619bf:  // push 0x42fa0000
    t0 = 0x42fa0000u; esp -= 4; M32(esp) = t0;
L_004619c4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004619c5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004619c7:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004619ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004619cc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004619ce:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004619d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004619d3:  // mov esi, dword ptr [esp + 0x94]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004619da:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_004619df:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004619e0:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_004619e2:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004619e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004619e7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004619e8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004619ea:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_004619ef:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004619f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004619f4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004619f5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004619f6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004619f8:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004619fa:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004619ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004619ff:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00461a02:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00461a07:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00461a08:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00461a0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00461a0d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00461a0e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00461a0f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00461a10:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00461a11:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_00461a17:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00460b40, 00460b40)
