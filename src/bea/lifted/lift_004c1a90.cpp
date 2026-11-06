// lifted from 004c1a90 (vslot10, 1582 bytes, 499 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c1a90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c1a90;
L_004c1a90:  // sub esp, 0xe8
    t0 = lsub<32>(esp, 0xe8u, f);
    esp = (uint32_t)(t0);
L_004c1a96:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1a97:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c1a98:  // mov ebx, dword ptr [esp + 0xf4]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_004c1a9f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c1aa0:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c1aa2:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_004c1aa6:  // mov ecx, dword ptr [esi + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xb0u)));
L_004c1aac:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c1aae:  // je 0x4c1ac6
    if (f.zf) goto L_004c1ac6;
L_004c1ab0:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1ab3:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004c1ab5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1ab6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c1ab8:  // fsub dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1abb:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c1abd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1ac0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1ac1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1ac3:  // call dword ptr [eax + 0x30]
    t0 = M32((uint32_t)(eax + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1ac6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1ac6:  // mov eax, dword ptr [esi + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c1ac9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c1acb:  // je 0x4c20b0
    if (f.zf) goto L_004c20b0;
L_004c1ad1:  // mov eax, dword ptr [0x9c63fc]
    eax = (uint32_t)(M32((uint32_t)(0x9c63fcu)));
L_004c1ad6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c1ad8:  // je 0x4c20b0
    if (f.zf) goto L_004c20b0;
L_004c1ade:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1ae1:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1ae4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1ae5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1ae6:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1ae8:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c1aea:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c1aed:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c1aef:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1af2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1af4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1af6:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1afbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1afb:  // dec word ptr [ebx + 0x7e]
    t0 = ldec<16>(M16((uint32_t)(ebx + 0x7eu)), f);
    M16((uint32_t)(ebx + 0x7eu)) = (uint16_t)(t0);
L_004c1aff:  // mov ax, word ptr [ebx + 0x7e]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebx + 0x7eu))) & 0xffffu);
L_004c1b03:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c1b07:  // test ax, ax
    t0 = llog<16>((eax & 0xffffu) & (eax & 0xffffu), f);
L_004c1b0a:  // jge 0x4c1b67
    if ((f.sf == f.of)) goto L_004c1b67;
L_004c1b0c:  // add eax, 0x14
    t0 = ladd<32>(eax, 0x14u, f);
    eax = (uint32_t)(t0);
L_004c1b0f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1b10:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004c1b15:  // mov word ptr [ebx + 0x7e], ax
    M16((uint32_t)(ebx + 0x7eu)) = (uint16_t)((eax & 0xffffu));
L_004c1b19:  // call 0x4cba90
    t0 = 0x004cba90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1b1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1b1e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004c1b20:  // fsub dword ptr [0x5db1e4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db1e4u)));
L_004c1b26:  // fmul dword ptr [0x5ddacc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddaccu)));
L_004c1b2c:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004c1b32:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c1b34:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c1b37:  // je 0x4c1b43
    if (f.zf) goto L_004c1b43;
L_004c1b39:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1b3b:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004c1b41:  // jmp 0x4c1b58
    goto L_004c1b58;
L_004c1b43:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_004c1b49:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c1b4b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c1b4e:  // jne 0x4c1b58
    if (!f.zf) goto L_004c1b58;
L_004c1b50:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1b52:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c1b58:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_004c1b5e:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_004c1b64:  // fstp dword ptr [ebx + 0x74]
    F32((uint32_t)(ebx + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004c1b67:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004c1b6b:  // fmul dword ptr [ebx + 0x74]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x74u)));
L_004c1b6e:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004c1b71:  // fadd dword ptr [ebx + 0x78]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x78u)));
L_004c1b74:  // fst dword ptr [ebx + 0x78]
    F32((uint32_t)(ebx + 0x78u)) = lf32(ST(0));
L_004c1b77:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004c1b7a:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1b7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1b7f:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c1b83:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004c1b87:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004c1b8a:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004c1b8e:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004c1b92:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004c1b96:  // fsubr dword ptr [ebx + 0x78]
    ST(0) = ((long double)F32((uint32_t)(ebx + 0x78u))) - (ST(0));
L_004c1b99:  // fstp dword ptr [ebx + 0x78]
    F32((uint32_t)(ebx + 0x78u)) = lf32(ST(0));
    lpop(x);
L_004c1b9c:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004c1ba2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c1ba4:  // jne 0x4c1bae
    if (!f.zf) goto L_004c1bae;
L_004c1ba6:  // mov dword ptr [esp + 0x1c], 0xffffffff
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xffffffffu);
L_004c1bae:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004c1bb4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c1bb6:  // je 0x4c1bc7
    if (f.zf) goto L_004c1bc7;
L_004c1bb8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c1bba:  // jne 0x4c1bc7
    if (!f.zf) goto L_004c1bc7;
L_004c1bbc:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004c1bbe:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1bc1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1bc1:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004c1bc5:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004c1bc7:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004c1bc9:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004c1bcb:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_004c1bcf:  // jle 0x4c20b0
    if ((f.zf || f.sf != f.of)) goto L_004c20b0;
L_004c1bd5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c1bd6:  // mov edi, dword ptr [esi + 0x68]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c1bd9:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004c1bdb:  // je 0x4c1bf6
    if (f.zf) goto L_004c1bf6;
L_004c1bdd:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004c1bdf:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1be1:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1be4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1be4:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004c1be7:  // jne 0x4c1bf6
    if (!f.zf) goto L_004c1bf6;
L_004c1be9:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004c1beb:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c1bed:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1bf0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1bf0:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004c1bf2:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004c1bf4:  // jne 0x4c1bdd
    if (!f.zf) goto L_004c1bdd;
L_004c1bf6:  // mov eax, dword ptr [ebx + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c1bf9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c1bfb:  // je 0x4c1c11
    if (f.zf) goto L_004c1c11;
L_004c1bfd:  // mov ax, word ptr [eax + 0xb6]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + 0xb6u))) & 0xffffu);
L_004c1c04:  // or ax, 1
    t0 = llog<16>((eax & 0xffffu) | 0x1u, f);
    eax = (eax & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_004c1c08:  // je 0x4c1c11
    if (f.zf) goto L_004c1c11;
L_004c1c0a:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004c1c0f:  // jmp 0x4c1c13
    goto L_004c1c13;
L_004c1c11:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c1c13:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c1c14:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c1c15:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004c1c1a:  // call 0x4cb5c0
    t0 = 0x004cb5c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1c1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1c1f:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004c1c21:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004c1c23:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_004c1c27:  // je 0x4c2090
    if (f.zf) goto L_004c2090;
L_004c1c2d:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004c1c33:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c1c35:  // je 0x4c1d10
    if (f.zf) goto L_004c1d10;
L_004c1c3b:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004c1c3f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004c1c41:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c1c42:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c1c43:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c1c44:  // call dword ptr [edx + 0x48]
    t0 = M32((uint32_t)(edx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1c47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1c47:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1c4a:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1c4d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1c4e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1c4f:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1c51:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c1c53:  // lea ecx, [esi + 0xa8]
    ecx = (uint32_t)((uint32_t)(esi + 0xa8u));
L_004c1c59:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c1c5b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1c5e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1c60:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1c62:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1c67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1c67:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004c1c6d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c1c6f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004c1c72:  // jne 0x4c1d0e
    if (!f.zf) goto L_004c1d0e;
L_004c1c78:  // fld dword ptr [ebx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x10u)));
L_004c1c7b:  // fmul dword ptr [edi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x40u)));
L_004c1c7e:  // fld dword ptr [ebx + 0xc]
    lpush(x, (long double)F32((uint32_t)(ebx + 0xcu)));
L_004c1c81:  // fmul dword ptr [edi + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x3cu)));
L_004c1c84:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1c86:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_004c1c89:  // fmul dword ptr [edi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x38u)));
L_004c1c8c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1c8e:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_004c1c91:  // fmul dword ptr [edi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x38u)));
L_004c1c94:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_004c1c97:  // fmul dword ptr [edi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x40u)));
L_004c1c9a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1c9c:  // fld dword ptr [ebx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x1cu)));
L_004c1c9f:  // fmul dword ptr [edi + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x3cu)));
L_004c1ca2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1ca4:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_004c1cab:  // fld dword ptr [ebx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x28u)));
L_004c1cae:  // fmul dword ptr [edi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x38u)));
L_004c1cb1:  // fld dword ptr [ebx + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x30u)));
L_004c1cb4:  // fmul dword ptr [edi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x40u)));
L_004c1cb7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1cb9:  // fld dword ptr [ebx + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x2cu)));
L_004c1cbc:  // fmul dword ptr [edi + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x3cu)));
L_004c1cbf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1cc1:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_004c1cc8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c1cca:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004c1cd1:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004c1cd3:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_004c1cda:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004c1ce1:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004c1ce3:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_004c1cea:  // fadd dword ptr [edi + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x48u)));
L_004c1ced:  // fstp dword ptr [edi + 0x48]
    F32((uint32_t)(edi + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004c1cf0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1cf2:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004c1cf9:  // fadd dword ptr [edi + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x4cu)));
L_004c1cfc:  // fstp dword ptr [edi + 0x4c]
    F32((uint32_t)(edi + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004c1cff:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004c1d06:  // fadd dword ptr [edi + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x50u)));
L_004c1d09:  // fstp dword ptr [edi + 0x50]
    F32((uint32_t)(edi + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c1d0c:  // jmp 0x4c1d10
    goto L_004c1d10;
L_004c1d0e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1d10:  // fld dword ptr [ebx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x10u)));
L_004c1d13:  // fmul dword ptr [edi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x40u)));
L_004c1d16:  // fld dword ptr [ebx + 0xc]
    lpush(x, (long double)F32((uint32_t)(ebx + 0xcu)));
L_004c1d19:  // fmul dword ptr [edi + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x3cu)));
L_004c1d1c:  // lea ebp, [edi + 0x38]
    ebp = (uint32_t)((uint32_t)(edi + 0x38u));
L_004c1d1f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1d20:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1d22:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004c1d25:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004c1d28:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004c1d2a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1d2c:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004c1d30:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_004c1d33:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004c1d36:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_004c1d39:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004c1d3c:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004c1d40:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1d42:  // fld dword ptr [ebx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x1cu)));
L_004c1d45:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004c1d48:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1d4a:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004c1d4e:  // fld dword ptr [ebx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x28u)));
L_004c1d51:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004c1d54:  // fld dword ptr [ebx + 0x30]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x30u)));
L_004c1d57:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004c1d5a:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004c1d5e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1d60:  // fld dword ptr [ebx + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x2cu)));
L_004c1d63:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004c1d66:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004c1d68:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1d6a:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004c1d6d:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004c1d71:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004c1d75:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004c1d79:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004c1d7c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1d7d:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004c1d80:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c1d83:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004c1d86:  // fadd dword ptr [ebx + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x38u)));
L_004c1d89:  // fstp dword ptr [ebp]
    F32((uint32_t)(ebp)) = lf32(ST(0));
    lpop(x);
L_004c1d8c:  // fld dword ptr [ebx + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x3cu)));
L_004c1d8f:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004c1d92:  // fstp dword ptr [ebp + 4]
    F32((uint32_t)(ebp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004c1d95:  // fld dword ptr [ebx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x40u)));
L_004c1d98:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004c1d9b:  // fstp dword ptr [ebp + 8]
    F32((uint32_t)(ebp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004c1d9e:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1da1:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1da4:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1da6:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c1da8:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c1daa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1dad:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1daf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1db1:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1db6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1db6:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004c1dba:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1dbd:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1dc0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1dc1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1dc2:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1dc4:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c1dc6:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c1dc8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1dcb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1dcd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1dcf:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c1dd2:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1dd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1dd7:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004c1ddb:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1dde:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1de1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1de2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1de3:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1de5:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c1de7:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c1dea:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c1dec:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1def:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1df1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1df3:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1df8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1df8:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c1dfc:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1dff:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1e02:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1e03:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1e04:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1e06:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c1e08:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c1e0e:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c1e10:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1e13:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1e15:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1e17:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1e1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1e1c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c1e20:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1e25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1e25:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c1e2a:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c1e2f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004c1e33:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1e38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1e38:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c1e3d:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c1e42:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004c1e46:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1e4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1e4b:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c1e50:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c1e55:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004c1e59:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004c1e5d:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c1e61:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c1e67:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_004c1e6b:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c1e6f:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c1e75:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_004c1e79:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004c1e7d:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c1e81:  // fmul dword ptr [0x5ddac8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac8u)));
L_004c1e87:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004c1e8b:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_004c1e8f:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004c1e93:  // fadd dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004c1e97:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004c1e9b:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004c1e9f:  // fadd dword ptr [esp + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x50u)));
L_004c1ea3:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004c1eaa:  // fadd dword ptr [edi + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x48u)));
L_004c1ead:  // fstp dword ptr [edi + 0x48]
    F32((uint32_t)(edi + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004c1eb0:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004c1eb4:  // fadd dword ptr [edi + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x4cu)));
L_004c1eb7:  // fstp dword ptr [edi + 0x4c]
    F32((uint32_t)(edi + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004c1eba:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004c1ec1:  // fadd dword ptr [edi + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x50u)));
L_004c1ec4:  // fstp dword ptr [edi + 0x50]
    F32((uint32_t)(edi + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c1ec7:  // mov eax, dword ptr [esi + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004c1ecd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c1ecf:  // je 0x4c1ef1
    if (f.zf) goto L_004c1ef1;
L_004c1ed1:  // fld dword ptr [edi + 0x60]
    lpush(x, (long double)F32((uint32_t)(edi + 0x60u)));
L_004c1ed4:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1ed7:  // fidiv dword ptr [esi + 0x64]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1eda:  // fst dword ptr [edi + 0x60]
    F32((uint32_t)(edi + 0x60u)) = lf32(ST(0));
L_004c1edd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004c1ee3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c1ee5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c1ee8:  // je 0x4c1ef1
    if (f.zf) goto L_004c1ef1;
L_004c1eea:  // mov dword ptr [edi + 0x60], 0x3c23d70a
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(0x3c23d70au);
L_004c1ef1:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_004c1ef4:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004c1ef7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c1ef8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1ef9:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1efb:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c1efd:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004c1f03:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c1f05:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1f08:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1f0a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1f0c:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1f11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1f11:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004c1f17:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c1f19:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004c1f1c:  // jne 0x4c1f5d
    if (!f.zf) goto L_004c1f5d;
L_004c1f1e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c1f20:  // fmul dword ptr [ebx + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x48u)));
L_004c1f23:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c1f25:  // fmul dword ptr [ebx + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4cu)));
L_004c1f28:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_004c1f2f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004c1f31:  // fmul dword ptr [ebx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x50u)));
L_004c1f34:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004c1f3b:  // fadd dword ptr [edi + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x48u)));
L_004c1f3e:  // fstp dword ptr [edi + 0x48]
    F32((uint32_t)(edi + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004c1f41:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004c1f48:  // fadd dword ptr [edi + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x4cu)));
L_004c1f4b:  // fstp dword ptr [edi + 0x4c]
    F32((uint32_t)(edi + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004c1f4e:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004c1f55:  // fadd dword ptr [edi + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x50u)));
L_004c1f58:  // fstp dword ptr [edi + 0x50]
    F32((uint32_t)(edi + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c1f5b:  // jmp 0x4c1f5f
    goto L_004c1f5f;
L_004c1f5d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c1f5f:  // mov ecx, dword ptr [esi + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c1f65:  // mov eax, dword ptr [ebx + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x58u)));
L_004c1f68:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c1f6a:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004c1f6e:  // je 0x4c1f78
    if (f.zf) goto L_004c1f78;
L_004c1f70:  // mov dword ptr [edi + 0x58], eax
    M32((uint32_t)(edi + 0x58u)) = (uint32_t)(eax);
L_004c1f73:  // jmp 0x4c2078
    goto L_004c2078;
L_004c1f78:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c1f7a:  // je 0x4c2078
    if (f.zf) goto L_004c2078;
L_004c1f80:  // mov ecx, dword ptr [eax + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xa0u)));
L_004c1f86:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004c1f88:  // je 0x4c205e
    if (f.zf) goto L_004c205e;
L_004c1f8e:  // fld dword ptr [eax + 0x30]
    lpush(x, (long double)F32((uint32_t)(eax + 0x30u)));
L_004c1f91:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004c1f94:  // fld dword ptr [eax + 0x38]
    lpush(x, (long double)F32((uint32_t)(eax + 0x38u)));
L_004c1f97:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004c1f9a:  // lea esi, [eax + 0x10]
    esi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004c1f9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1f9e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1fa0:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004c1fa3:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004c1fa6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1fa8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1fab:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004c1fae:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004c1fb1:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004c1fb4:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004c1fb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1fb8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1fba:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004c1fbd:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004c1fc0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1fc2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1fc5:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004c1fc8:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004c1fcb:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004c1fce:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004c1fd1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c1fd2:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004c1fd6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1fd8:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004c1fdb:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004c1fdd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c1fdf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c1fe2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c1fe7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c1fe7:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004c1feb:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004c1fef:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004c1ff1:  // add edi, 8
    t0 = ladd<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_004c1ff4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c1ff5:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004c1ff7:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004c1ffb:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004c1ffe:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004c2002:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004c2005:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004c2008:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004c200f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c2010:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c2012:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2017u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2017:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004c201b:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004c2020:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c2022:  // lea eax, [esp + 0xb8]
    eax = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004c2029:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004c202b:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c202f:  // lea esi, [edx + 0x48]
    esi = (uint32_t)((uint32_t)(edx + 0x48u));
L_004c2032:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c2033:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c2034:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004c2037:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c203cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c203c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004c203e:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004c2042:  // mov dword ptr [esi], edx
    M32((uint32_t)(esi)) = (uint32_t)(edx);
L_004c2044:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004c2047:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_004c204a:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004c204d:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_004c2050:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004c2053:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_004c2056:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004c205a:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c205e:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004c2061:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004c2063:  // fstp dword ptr [ebp]
    F32((uint32_t)(ebp)) = lf32(ST(0));
    lpop(x);
L_004c2066:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004c2069:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004c206c:  // fstp dword ptr [ebp + 4]
    F32((uint32_t)(ebp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004c206f:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004c2072:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004c2075:  // fstp dword ptr [ebp + 8]
    F32((uint32_t)(ebp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004c2078:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c2079:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004c207e:  // call 0x4cb920
    t0 = 0x004cb920u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c2083u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c2083:  // mov ecx, dword ptr [edi + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x5cu)));
L_004c2086:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c2087:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004c2089:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c208cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c208c:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c2090:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c2094:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004c2095:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004c2097:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_004c209b:  // jl 0x4c1bd6
    if ((f.sf != f.of)) goto L_004c1bd6;
L_004c20a1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c20a2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c20a3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004c20a4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c20a6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c20a7:  // add esp, 0xe8
    t0 = ladd<32>(esp, 0xe8u, f);
    esp = (uint32_t)(t0);
L_004c20ad:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004c20b0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c20b1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004c20b2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c20b4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004c20b5:  // add esp, 0xe8
    t0 = ladd<32>(esp, 0xe8u, f);
    esp = (uint32_t)(t0);
L_004c20bb:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004c1a90, 004c1a90)
