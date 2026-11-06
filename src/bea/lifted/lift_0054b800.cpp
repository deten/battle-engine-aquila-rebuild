// lifted from 0054b800 (FUN_0054b800, 1912 bytes, 488 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0054b800(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0054b800;
L_0054b800:  // sub esp, 0x260
    t0 = lsub<32>(esp, 0x260u, f);
    esp = (uint32_t)(t0);
L_0054b806:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054b807:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054b808:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054b809:  // mov esi, dword ptr [esp + 0x274]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x274u)));
L_0054b810:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0054b812:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054b813:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0054b815:  // je 0x54b820
    if (f.zf) goto L_0054b820;
L_0054b817:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0054b819:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054b81b:  // call dword ptr [eax + 0x70]
    t0 = M32((uint32_t)(eax + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b81eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b81e:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0054b820:  // mov ebx, dword ptr [esp + 0x274]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x274u)));
L_0054b827:  // mov eax, dword ptr [ebx + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8cu)));
L_0054b82d:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0054b830:  // je 0x54bf6d
    if (f.zf) goto L_0054bf6d;
L_0054b836:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_0054b839:  // je 0x54bf6d
    if (f.zf) goto L_0054bf6d;
L_0054b83f:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0054b842:  // jne 0x54bf2a
    if (!f.zf) goto L_0054bf2a;
L_0054b848:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0054b84a:  // je 0x54b92f
    if (f.zf) goto L_0054b92f;
L_0054b850:  // cmp dword ptr [ebx + 0xb8], 1
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xb8u)), 0x1u, f);
L_0054b857:  // jle 0x54b92f
    if ((f.zf || f.sf != f.of)) goto L_0054b92f;
L_0054b85d:  // mov ecx, dword ptr [ebx + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x128u)));
L_0054b863:  // mov eax, dword ptr [ecx + 0x14]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_0054b866:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054b868:  // je 0x54b92f
    if (f.zf) goto L_0054b92f;
L_0054b86e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0054b870:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054b872:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b875u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b875:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0054b877:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0054b879:  // jl 0x54b92f
    if ((f.sf != f.of)) goto L_0054b92f;
L_0054b87f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0054b881:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054b883:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b886u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b886:  // mov edx, dword ptr [ebx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x128u)));
L_0054b88c:  // lea ecx, [edi + edi*8]
    ecx = (uint32_t)((uint32_t)(edi + edi * 8u));
L_0054b88f:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0054b893:  // mov eax, dword ptr [edx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x18u)));
L_0054b896:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0054b898:  // fild dword ptr [eax + ecx*4 + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + ecx * 4u + 0x1cu)));
L_0054b89c:  // lea eax, [eax + ecx*4]
    eax = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_0054b89f:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0054b8a3:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0054b8a7:  // fild dword ptr [eax + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + 0x14u)));
L_0054b8aa:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0054b8ae:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0054b8b2:  // je 0x54b8c2
    if (f.zf) goto L_0054b8c2;
L_0054b8b4:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0054b8b7:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0054b8bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b8bc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054b8bd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0054b8bf:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b8c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b8c2:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0054b8c6:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054b8c9:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054b8cc:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b8d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b8d1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054b8d3:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0054b8d7:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054b8da:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b8dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b8df:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0054b8e3:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0054b8e5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054b8e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054b8e9:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0054b8ed:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054b8ef:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b8f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b8f4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054b8f6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054b8f8:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0054b8fc:  // mov esi, dword ptr [esp + 0x4c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0054b900:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b905u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b905:  // lea ecx, [esi + 1]
    ecx = (uint32_t)((uint32_t)(esi + 0x1u));
L_0054b908:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0054b90b:  // fistp qword ptr [esp + 0x34]
    M64((uint32_t)(esp + 0x34u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0054b90f:  // cmp ecx, dword ptr [esp + 0x34]
    t0 = lsub<32>(ecx, M32((uint32_t)(esp + 0x34u)), f);
L_0054b913:  // jle 0x54b923
    if ((f.zf || f.sf != f.of)) goto L_0054b923;
L_0054b915:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054b917:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054b919:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b91eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b91e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054b920:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054b923:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054b925:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_0054b92d:  // jmp 0x54b937
    goto L_0054b937;
L_0054b92f:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054b933:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054b937:  // mov eax, dword ptr [ebx + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_0054b93d:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054b940:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0054b944:  // mov ebp, dword ptr [eax + esi*4]
    ebp = (uint32_t)(M32((uint32_t)(eax + esi * 4u)));
L_0054b947:  // mov esi, dword ptr [eax + ecx*4]
    esi = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_0054b94a:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054b94d:  // mov dword ptr [esp + 0x90], esi
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(esi);
L_0054b954:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b959u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b959:  // fsubr dword ptr [esp + 0x20]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x20u))) - (ST(0));
L_0054b95d:  // mov eax, dword ptr [ebx + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xfcu)));
L_0054b963:  // mov ecx, dword ptr [ebx + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_0054b969:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054b96c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0054b970:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0054b976:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_0054b97a:  // mov edx, dword ptr [eax + 0x14]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_0054b97d:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0054b981:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0054b985:  // fld dword ptr [eax + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + 0x10u)));
L_0054b988:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0054b98a:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0054b98c:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0054b990:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0054b993:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_0054b997:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054b999:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0054b99b:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_0054b99f:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0054b9a3:  // fild dword ptr [0x888a0c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x888a0cu)));
L_0054b9a9:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0054b9ad:  // fild dword ptr [0x888a08]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x888a08u)));
L_0054b9b3:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0054b9b5:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0054b9b7:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_0054b9b9:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0054b9bd:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0054b9c1:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0054b9c3:  // fdivr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) / (ST(0));
L_0054b9c7:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0054b9cb:  // jle 0x54bf6d
    if ((f.zf || f.sf != f.of)) goto L_0054bf6d;
L_0054b9d1:  // fld qword ptr [0x5dbe40]
    lpush(x, (long double)F64((uint32_t)(0x5dbe40u)));
L_0054b9d7:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0054b9d9:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0054b9dd:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0054b9e4:  // jmp 0x54b9ed
    goto L_0054b9ed;
L_0054b9e6:  // mov esi, dword ptr [esp + 0x88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_0054b9ed:  // mov edi, dword ptr [ebx + 0x80]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_0054b9f3:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054b9f7:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_0054b9f9:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054b9fd:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0054b9ff:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0054ba02:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_0054ba06:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0054ba09:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_0054ba0c:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_0054ba10:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054ba13:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0054ba17:  // fmul dword ptr [eax + esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi)));
L_0054ba1a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054ba1e:  // fmul dword ptr [eax + esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x4u)));
L_0054ba22:  // fstp dword ptr [esp + 0x104]
    F32((uint32_t)(esp + 0x104u)) = lf32(ST(0));
    lpop(x);
L_0054ba29:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054ba2d:  // fmul dword ptr [eax + esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x8u)));
L_0054ba31:  // fstp dword ptr [esp + 0x108]
    F32((uint32_t)(esp + 0x108u)) = lf32(ST(0));
    lpop(x);
L_0054ba38:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054ba3c:  // fmul dword ptr [eax + ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp)));
L_0054ba3f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054ba43:  // fmul dword ptr [eax + ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp + 0x4u)));
L_0054ba47:  // fstp dword ptr [esp + 0x154]
    F32((uint32_t)(esp + 0x154u)) = lf32(ST(0));
    lpop(x);
L_0054ba4e:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054ba52:  // fmul dword ptr [eax + ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp + 0x8u)));
L_0054ba56:  // mov eax, dword ptr [edx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x20u)));
L_0054ba59:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0054ba5d:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054ba60:  // fstp dword ptr [esp + 0x158]
    F32((uint32_t)(esp + 0x158u)) = lf32(ST(0));
    lpop(x);
L_0054ba67:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ba69:  // fld dword ptr [esp + 0x154]
    lpush(x, (long double)F32((uint32_t)(esp + 0x154u)));
L_0054ba70:  // fadd dword ptr [esp + 0x104]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x104u)));
L_0054ba77:  // fstp dword ptr [esp + 0x134]
    F32((uint32_t)(esp + 0x134u)) = lf32(ST(0));
    lpop(x);
L_0054ba7e:  // fld dword ptr [esp + 0x158]
    lpush(x, (long double)F32((uint32_t)(esp + 0x158u)));
L_0054ba85:  // fadd dword ptr [esp + 0x108]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x108u)));
L_0054ba8c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054ba90:  // fmul dword ptr [eax + esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi)));
L_0054ba93:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054ba97:  // fmul dword ptr [eax + esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x4u)));
L_0054ba9b:  // fstp dword ptr [esp + 0x164]
    F32((uint32_t)(esp + 0x164u)) = lf32(ST(0));
    lpop(x);
L_0054baa2:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054baa6:  // fmul dword ptr [eax + esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x8u)));
L_0054baaa:  // fstp dword ptr [esp + 0x168]
    F32((uint32_t)(esp + 0x168u)) = lf32(ST(0));
    lpop(x);
L_0054bab1:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054bab5:  // fmul dword ptr [eax + ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp)));
L_0054bab8:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054babc:  // fmul dword ptr [eax + ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp + 0x4u)));
L_0054bac0:  // fstp dword ptr [esp + 0x124]
    F32((uint32_t)(esp + 0x124u)) = lf32(ST(0));
    lpop(x);
L_0054bac7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054bacb:  // fmul dword ptr [eax + ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp + 0x8u)));
L_0054bacf:  // mov eax, dword ptr [edx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x20u)));
L_0054bad2:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054bad5:  // fstp dword ptr [esp + 0x128]
    F32((uint32_t)(esp + 0x128u)) = lf32(ST(0));
    lpop(x);
L_0054badc:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0054bade:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_0054bae5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bae7:  // fld dword ptr [esp + 0x124]
    lpush(x, (long double)F32((uint32_t)(esp + 0x124u)));
L_0054baee:  // fadd dword ptr [esp + 0x164]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x164u)));
L_0054baf5:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_0054bafc:  // fld dword ptr [esp + 0x128]
    lpush(x, (long double)F32((uint32_t)(esp + 0x128u)));
L_0054bb03:  // fadd dword ptr [esp + 0x168]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x168u)));
L_0054bb0a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054bb0e:  // fmul dword ptr [eax + esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi)));
L_0054bb11:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054bb15:  // fmul dword ptr [eax + esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x4u)));
L_0054bb19:  // mov dword ptr [esp + 0x8c], 0x3f800000
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(0x3f800000u);
L_0054bb24:  // mov dword ptr [esp + 0x90], 0x3f800000
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(0x3f800000u);
L_0054bb2f:  // fstp dword ptr [esp + 0x114]
    F32((uint32_t)(esp + 0x114u)) = lf32(ST(0));
    lpop(x);
L_0054bb36:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054bb3a:  // fmul dword ptr [eax + esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x8u)));
L_0054bb3e:  // fstp dword ptr [esp + 0x118]
    F32((uint32_t)(esp + 0x118u)) = lf32(ST(0));
    lpop(x);
L_0054bb45:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054bb49:  // fmul dword ptr [eax + ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp)));
L_0054bb4c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054bb50:  // fmul dword ptr [eax + ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp + 0x4u)));
L_0054bb54:  // fstp dword ptr [esp + 0x144]
    F32((uint32_t)(esp + 0x144u)) = lf32(ST(0));
    lpop(x);
L_0054bb5b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0054bb5f:  // fmul dword ptr [eax + ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebp + 0x8u)));
L_0054bb63:  // fstp dword ptr [esp + 0x148]
    F32((uint32_t)(esp + 0x148u)) = lf32(ST(0));
    lpop(x);
L_0054bb6a:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0054bb6c:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_0054bb70:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bb72:  // fld dword ptr [esp + 0x144]
    lpush(x, (long double)F32((uint32_t)(esp + 0x144u)));
L_0054bb79:  // fadd dword ptr [esp + 0x114]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x114u)));
L_0054bb80:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_0054bb84:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_0054bb8b:  // fadd dword ptr [esp + 0x118]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x118u)));
L_0054bb92:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0054bb96:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_0054bb9d:  // fsub st(3)
    ST(0) = (ST(0)) - (ST(3));
L_0054bb9f:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_0054bba3:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0054bbaa:  // fsub dword ptr [esp + 0x134]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x134u)));
L_0054bbb1:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_0054bbb5:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0054bbb7:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_0054bbbb:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_0054bbbf:  // fsub st(2)
    ST(0) = (ST(0)) - (ST(2));
L_0054bbc1:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_0054bbc5:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_0054bbc9:  // fsub dword ptr [esp + 0x134]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x134u)));
L_0054bbd0:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_0054bbd4:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_0054bbd8:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0054bbda:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_0054bbde:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bbe0:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0054bbe4:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_0054bbe8:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0054bbec:  // fmul dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x5cu)));
L_0054bbf0:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0054bbf2:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054bbf6:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_0054bbfa:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0054bbfe:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_0054bc02:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0054bc04:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0054bc08:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_0054bc0c:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054bc10:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_0054bc14:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0054bc16:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0054bc1c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0054bc1e:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0054bc20:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0054bc24:  // fld st(4)
    v0 = ST(4); lpush(x, v0);
L_0054bc26:  // fmul st(5)
    ST(0) = (ST(0)) * (ST(5));
L_0054bc28:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0054bc2c:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0054bc30:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054bc32:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0054bc34:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054bc36:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054bc38:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0054bc3a:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0054bc3e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bc40:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0054bc44:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0054bc4a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054bc4c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0054bc4f:  // jne 0x54bc69
    if (!f.zf) goto L_0054bc69;
L_0054bc51:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0054bc57:  // fxch st(4)
    v0 = ST(0); ST(0) = ST(4); ST(4) = v0;
L_0054bc59:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0054bc5b:  // fxch st(4)
    v0 = ST(0); ST(0) = ST(4); ST(4) = v0;
L_0054bc5d:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0054bc5f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054bc61:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0054bc63:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0054bc65:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054bc67:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0054bc69:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bc6b:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_0054bc72:  // fst dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
L_0054bc76:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054bc7c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054bc7e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0054bc81:  // jne 0x54bc9d
    if (!f.zf) goto L_0054bc9d;
L_0054bc83:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bc85:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0054bc8b:  // fdiv dword ptr [esp + 0x28]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x28u)));
L_0054bc8f:  // fst dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
L_0054bc96:  // fst dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
L_0054bc9d:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_0054bca4:  // fmulp st(4)
    ST(4) = (ST(4)) * (ST(0));
    lpop(x);
L_0054bca6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054bca8:  // mov esi, 0xff7f7f7f
    esi = (uint32_t)(0xff7f7f7fu);
L_0054bcad:  // mov dword ptr [esp + 0xb4], 0x3f800000
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(0x3f800000u);
L_0054bcb8:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_0054bcba:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0054bcc1:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054bcc3:  // mov dword ptr [esp + 0xb8], 0x3f800000
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(0x3f800000u);
L_0054bcce:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_0054bcd0:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0054bcd2:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_0054bcd8:  // fcos 
    ST(0) = lfcos(ST(0));
L_0054bcda:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0054bcdc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bcde:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054bce0:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0054bce2:  // fmul dword ptr [0x5e50f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e50f4u)));
L_0054bce8:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0054bcec:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054bcf0:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0054bcf2:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0054bcf5:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054bcf7:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0054bcfa:  // fsub dword ptr [esp + 0x44]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x44u)));
L_0054bcfe:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054bd00:  // sub esi, edx
    t0 = lsub<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0054bd02:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_0054bd06:  // mov dword ptr [esp + 0xbc], esi
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(esi);
L_0054bd0d:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_0054bd14:  // fld dword ptr [esp + 0x134]
    lpush(x, (long double)F32((uint32_t)(esp + 0x134u)));
L_0054bd1b:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_0054bd1f:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_0054bd23:  // fsubr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) - (ST(0));
L_0054bd27:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_0054bd2e:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_0054bd31:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054bd32:  // call 0x4b5250
    t0 = 0x004b5250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bd37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bd37:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054bd3b:  // fstp dword ptr [esp + 0xc4]
    F32((uint32_t)(esp + 0xc4u)) = lf32(ST(0));
    lpop(x);
L_0054bd42:  // mov edx, dword ptr [ecx + 0x28]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x28u)));
L_0054bd45:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054bd46:  // call 0x4b52a0
    t0 = 0x004b52a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bd4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bd4b:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0054bd51:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0054bd54:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0054bd57:  // call 0x4b5250
    t0 = 0x004b5250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bd5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bd5c:  // fstp dword ptr [esp + 0xc8]
    F32((uint32_t)(esp + 0xc8u)) = lf32(ST(0));
    lpop(x);
L_0054bd63:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0054bd6a:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_0054bd6e:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0054bd72:  // mov dword ptr [esp + 0xd4], 0x3f800000
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(0x3f800000u);
L_0054bd7d:  // mov dword ptr [esp + 0xd8], 0x3f800000
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(0x3f800000u);
L_0054bd88:  // mov dword ptr [esp + 0xdc], esi
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(esi);
L_0054bd8f:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_0054bd93:  // fstp dword ptr [esp + 0xcc]
    F32((uint32_t)(esp + 0xccu)) = lf32(ST(0));
    lpop(x);
L_0054bd9a:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_0054bda1:  // fsub dword ptr [esp + 0x44]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x44u)));
L_0054bda5:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_0054bda9:  // fsubr dword ptr [esp + 0x28]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x28u))) - (ST(0));
L_0054bdad:  // fstp dword ptr [esp + 0xd0]
    F32((uint32_t)(esp + 0xd0u)) = lf32(ST(0));
    lpop(x);
L_0054bdb4:  // mov ecx, dword ptr [eax + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x24u)));
L_0054bdb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054bdb8:  // call 0x4b5250
    t0 = 0x004b5250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bdbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bdbd:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0054bdc1:  // fstp dword ptr [esp + 0xe4]
    F32((uint32_t)(esp + 0xe4u)) = lf32(ST(0));
    lpop(x);
L_0054bdc8:  // mov eax, dword ptr [edx + 0x28]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x28u)));
L_0054bdcb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054bdcc:  // call 0x4b52a0
    t0 = 0x004b52a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bdd1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bdd1:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0054bdd7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054bdda:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0054bddd:  // call 0x4b5250
    t0 = 0x004b5250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bde2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bde2:  // fstp dword ptr [esp + 0xe4]
    F32((uint32_t)(esp + 0xe4u)) = lf32(ST(0));
    lpop(x);
L_0054bde9:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_0054bded:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_0054bdf1:  // mov dword ptr [esp + 0xf8], esi
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(esi);
L_0054bdf8:  // mov esi, dword ptr [esp + 0x50]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0054bdfc:  // mov dword ptr [esp + 0xf0], 0x3f800000
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(0x3f800000u);
L_0054be07:  // mov dword ptr [esp + 0xf4], 0x3f800000
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(0x3f800000u);
L_0054be12:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_0054be16:  // fstp dword ptr [esp + 0xe8]
    F32((uint32_t)(esp + 0xe8u)) = lf32(ST(0));
    lpop(x);
L_0054be1d:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_0054be21:  // fsub dword ptr [esp + 0x44]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x44u)));
L_0054be25:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_0054be29:  // fsubr dword ptr [esp + 0x28]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x28u))) - (ST(0));
L_0054be2d:  // fstp dword ptr [esp + 0xec]
    F32((uint32_t)(esp + 0xecu)) = lf32(ST(0));
    lpop(x);
L_0054be34:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0054be37:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054be38:  // call 0x4b5250
    t0 = 0x004b5250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054be3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054be3d:  // fstp dword ptr [esp + 0x100]
    F32((uint32_t)(esp + 0x100u)) = lf32(ST(0));
    lpop(x);
L_0054be44:  // mov edx, dword ptr [esi + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_0054be47:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054be48:  // call 0x4b52a0
    t0 = 0x004b52a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054be4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054be4d:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0054be53:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054be56:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0054be59:  // call 0x4b5250
    t0 = 0x004b5250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054be5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054be5e:  // fstp dword ptr [esp + 0x100]
    F32((uint32_t)(esp + 0x100u)) = lf32(ST(0));
    lpop(x);
L_0054be65:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0054be67:  // mov edx, dword ptr [ebx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x128u)));
L_0054be6d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0054be70:  // mov eax, dword ptr [eax + 0x30]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_0054be73:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054be76:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054be78:  // mov ecx, dword ptr [eax + ecx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u + 0x4u)));
L_0054be7c:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054be7e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054be80:  // call dword ptr [edx + 0x20]
    t0 = M32((uint32_t)(edx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054be83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054be83:  // mov edx, dword ptr [ebx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x128u)));
L_0054be89:  // mov word ptr [esp + 0x34], 0
    M16((uint32_t)(esp + 0x34u)) = (uint16_t)(0x0u);
L_0054be90:  // mov word ptr [esp + 0x36], 1
    M16((uint32_t)(esp + 0x36u)) = (uint16_t)(0x1u);
L_0054be97:  // mov word ptr [esp + 0x38], 2
    M16((uint32_t)(esp + 0x38u)) = (uint16_t)(0x2u);
L_0054be9e:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0054bea0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054bea2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054bea4:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_0054bea6:  // mov eax, dword ptr [eax + 0x30]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_0054bea9:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0054beae:  // push 0x144
    t0 = 0x144u; esp -= 4; M32(esp) = t0;
L_0054beb3:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054beb6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054beb8:  // mov esi, dword ptr [eax + ecx*4 + 4]
    esi = (uint32_t)(M32((uint32_t)(eax + ecx * 4u + 0x4u)));
L_0054bebc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054bebe:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bec3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bec3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054bec5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0054bec7:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0054becc:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0054bece:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054bed0:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bed5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bed5:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_0054bedc:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054bede:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054bedf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054bee1:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bee6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bee6:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0054beea:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054beec:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054beed:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054beef:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bef4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bef4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054bef6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0054bef8:  // call 0x500e70
    t0 = 0x00500e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054befdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054befd:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0054bf01:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054bf05:  // mov ecx, dword ptr [ebx + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_0054bf0b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054bf0c:  // add edx, 0xc
    t0 = ladd<32>(edx, 0xcu, f);
    edx = (uint32_t)(t0);
L_0054bf0f:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054bf11:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_0054bf15:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0054bf19:  // jl 0x54b9e6
    if ((f.sf != f.of)) goto L_0054b9e6;
L_0054bf1f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054bf20:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054bf21:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054bf22:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054bf23:  // add esp, 0x260
    t0 = ladd<32>(esp, 0x260u, f);
    esp = (uint32_t)(t0);
L_0054bf29:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0054bf2a:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0054bf2d:  // jne 0x54bf47
    if (!f.zf) goto L_0054bf47;
L_0054bf2f:  // push 0x651190
    t0 = 0x651190u; esp -= 4; M32(esp) = t0;
L_0054bf34:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bf39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bf39:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0054bf3c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054bf3d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054bf3e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054bf3f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054bf40:  // add esp, 0x260
    t0 = ladd<32>(esp, 0x260u, f);
    esp = (uint32_t)(t0);
L_0054bf46:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0054bf47:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054bf48:  // lea eax, [esp + 0x174]
    eax = (uint32_t)((uint32_t)(esp + 0x174u));
L_0054bf4f:  // push 0x651160
    t0 = 0x651160u; esp -= 4; M32(esp) = t0;
L_0054bf54:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054bf55:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bf5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bf5a:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0054bf5d:  // lea ecx, [esp + 0x170]
    ecx = (uint32_t)((uint32_t)(esp + 0x170u));
L_0054bf64:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054bf65:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054bf6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054bf6a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0054bf6d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054bf6e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054bf6f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054bf70:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054bf71:  // add esp, 0x260
    t0 = ladd<32>(esp, 0x260u, f);
    esp = (uint32_t)(t0);
L_0054bf77:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0054b800, 0054b800)
