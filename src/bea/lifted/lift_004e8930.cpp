// lifted from 004e8930 (FUN_004e8930, 927 bytes, 312 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e8930(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e8930;
L_004e8930:  // sub esp, 0x80
    t0 = lsub<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004e8936:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e8937:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e8938:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e8939:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e893a:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004e893c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e893e:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_004e8942:  // call 0x4e83b0
    t0 = 0x004e83b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8947u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8947:  // fld dword ptr [edi + 0x104]
    lpush(x, (long double)F32((uint32_t)(edi + 0x104u)));
L_004e894d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004e8953:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e8955:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004e8958:  // jne 0x4e8a4d
    if (!f.zf) goto L_004e8a4d;
L_004e895e:  // cmp dword ptr [edi + 0xbc], 2
    t0 = lsub<32>(M32((uint32_t)(edi + 0xbcu)), 0x2u, f);
L_004e8965:  // je 0x4e8a4d
    if (f.zf) goto L_004e8a4d;
L_004e896b:  // mov ecx, dword ptr [edi + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xb4u)));
L_004e8971:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004e8973:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004e8975:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e8976:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004e897c:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e897e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004e8980:  // sar esi, 1
    t0 = lsar<32>(esi, 0x1u, f);
    esi = (uint32_t)(t0);
L_004e8982:  // cmp esi, 6
    t0 = lsub<32>(esi, 0x6u, f);
L_004e8985:  // jge 0x4e898c
    if ((f.sf == f.of)) goto L_004e898c;
L_004e8987:  // mov esi, 6
    esi = (uint32_t)(0x6u);
L_004e898c:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_004e898e:  // jle 0x4e8992
    if ((f.zf || f.sf != f.of)) goto L_004e8992;
L_004e8990:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004e8992:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004e8994:  // and eax, 0x80000001
    t0 = llog<32>(eax & 0x80000001u, f);
    eax = (uint32_t)(t0);
L_004e8999:  // jns 0x4e89a0
    if (!f.sf) goto L_004e89a0;
L_004e899b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004e899c:  // or eax, 0xfffffffe
    t0 = llog<32>(eax | 0xfffffffeu, f);
    eax = (uint32_t)(t0);
L_004e899f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004e89a0:  // jne 0x4e89aa
    if (!f.zf) goto L_004e89aa;
L_004e89a2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e89a4:  // fld dword ptr [edi + 0x104]
    lpush(x, (long double)F32((uint32_t)(edi + 0x104u)));
L_004e89aa:  // mov ebx, dword ptr [edi + 0xa4]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0xa4u)));
L_004e89b0:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e89b2:  // je 0x4e89b8
    if (f.zf) goto L_004e89b8;
L_004e89b4:  // mov edi, dword ptr [ebx]
    edi = (uint32_t)(M32((uint32_t)(ebx)));
L_004e89b6:  // jmp 0x4e89ba
    goto L_004e89ba;
L_004e89b8:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004e89ba:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004e89bc:  // je 0x4e8a3b
    if (f.zf) goto L_004e8a3b;
L_004e89be:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004e89c0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004e89c2:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e89c3:  // idiv esi
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)esi; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_004e89c5:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004e89c9:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_004e89cc:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004e89ce:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004e89d0:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004e89d4:  // and edx, 0x80000001
    t0 = llog<32>(edx & 0x80000001u, f);
    edx = (uint32_t)(t0);
L_004e89da:  // jns 0x4e89e1
    if (!f.sf) goto L_004e89e1;
L_004e89dc:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_004e89dd:  // or edx, 0xfffffffe
    t0 = llog<32>(edx | 0xfffffffeu, f);
    edx = (uint32_t)(t0);
L_004e89e0:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004e89e1:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_004e89e4:  // jne 0x4e89ff
    if (!f.zf) goto L_004e89ff;
L_004e89e6:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004e89e9:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004e89eb:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e89ef:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004e89f3:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004e89f7:  // fmul dword ptr [ecx + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x104u)));
L_004e89fd:  // jmp 0x4e8a0d
    goto L_004e8a0d;
L_004e89ff:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004e8a03:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e8a07:  // fmul dword ptr [edx + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edx + 0x104u)));
L_004e8a0d:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004e8a0f:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e8a13:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004e8a14:  // fstp dword ptr [edi + 4]
    F32((uint32_t)(edi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e8a17:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004e8a1b:  // fmul dword ptr [eax + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x104u)));
L_004e8a21:  // fmul dword ptr [0x5d95c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d95c0u)));
L_004e8a27:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e8a2a:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004e8a2d:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e8a2f:  // je 0x4e8a35
    if (f.zf) goto L_004e8a35;
L_004e8a31:  // mov edi, dword ptr [ebx]
    edi = (uint32_t)(M32((uint32_t)(ebx)));
L_004e8a33:  // jmp 0x4e8a37
    goto L_004e8a37;
L_004e8a35:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004e8a37:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004e8a39:  // jne 0x4e89be
    if (!f.zf) goto L_004e89be;
L_004e8a3b:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e8a3f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e8a41:  // mov dword ptr [ecx + 0xbc], 2
    M32((uint32_t)(ecx + 0xbcu)) = (uint32_t)(0x2u);
L_004e8a4b:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004e8a4d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e8a4f:  // call 0x4e84e0
    t0 = 0x004e84e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8a54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8a54:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e8a56:  // jne 0x4e8a63
    if (!f.zf) goto L_004e8a63;
L_004e8a58:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e8a5a:  // call 0x4e84e0
    t0 = 0x004e84e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8a5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8a5f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e8a61:  // je 0x4e8a58
    if (f.zf) goto L_004e8a58;
L_004e8a63:  // mov ebp, dword ptr [edi + 0xa4]
    ebp = (uint32_t)(M32((uint32_t)(edi + 0xa4u)));
L_004e8a69:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004e8a6b:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_004e8a6f:  // je 0x4e8a76
    if (f.zf) goto L_004e8a76;
L_004e8a71:  // mov esi, dword ptr [ebp]
    esi = (uint32_t)(M32((uint32_t)(ebp)));
L_004e8a74:  // jmp 0x4e8a78
    goto L_004e8a78;
L_004e8a76:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004e8a78:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e8a7a:  // je 0x4e8cc4
    if (f.zf) goto L_004e8cc4;
L_004e8a80:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e8a82:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004e8a84:  // je 0x4e8caa
    if (f.zf) goto L_004e8caa;
L_004e8a8a:  // mov ecx, dword ptr [edi + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xc4u)));
L_004e8a90:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004e8a92:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e8a94:  // je 0x4e8ad4
    if (f.zf) goto L_004e8ad4;
L_004e8a96:  // mov eax, dword ptr [ecx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x34u)));
L_004e8a99:  // test eax, 0x20000000
    t0 = llog<32>(eax & 0x20000000u, f);
L_004e8a9e:  // je 0x4e8ace
    if (f.zf) goto L_004e8ace;
L_004e8aa0:  // add edx, 0x1c
    t0 = ladd<32>(edx, 0x1cu, f);
    edx = (uint32_t)(t0);
L_004e8aa3:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e8aa6:  // mov ebx, esp
    ebx = (uint32_t)(esp);
L_004e8aa8:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004e8aaa:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_004e8aac:  // mov dword ptr [ebx], ebp
    M32((uint32_t)(ebx)) = (uint32_t)(ebp);
L_004e8aae:  // mov ebp, dword ptr [edx + 4]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004e8ab1:  // mov dword ptr [ebx + 4], ebp
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(ebp);
L_004e8ab4:  // mov ebp, dword ptr [edx + 8]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004e8ab7:  // mov dword ptr [ebx + 8], ebp
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ebp);
L_004e8aba:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004e8abd:  // mov dword ptr [ebx + 0xc], edx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(edx);
L_004e8ac0:  // call dword ptr [eax + 0x12c]
    t0 = M32((uint32_t)(eax + 0x12cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8ac6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8ac6:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004e8aca:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004e8acc:  // jmp 0x4e8ad4
    goto L_004e8ad4;
L_004e8ace:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_004e8ad0:  // je 0x4e8ad4
    if (f.zf) goto L_004e8ad4;
L_004e8ad2:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004e8ad4:  // cmp dword ptr [esi], 0
    t0 = lsub<32>(M32((uint32_t)(esi)), 0x0u, f);
L_004e8ad7:  // je 0x4e8b73
    if (f.zf) goto L_004e8b73;
L_004e8add:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004e8ae0:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004e8ae3:  // mov edi, dword ptr [esi + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e8ae6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e8ae8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8ae9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e8aea:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004e8aee:  // add edi, 0x1c
    t0 = ladd<32>(edi, 0x1cu, f);
    edi = (uint32_t)(t0);
L_004e8af1:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8af6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8af6:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e8af9:  // lea edx, [esp + 0x60]
    edx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004e8afd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8afe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e8aff:  // add ecx, 0x3c
    t0 = ladd<32>(ecx, 0x3cu, f);
    ecx = (uint32_t)(t0);
L_004e8b02:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8b07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8b07:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8b08:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_004e8b0c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8b0d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e8b0f:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8b14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8b14:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004e8b18:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004e8b1c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e8b1d:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e8b1f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e8b20:  // add ecx, 0x1c
    t0 = ladd<32>(ecx, 0x1cu, f);
    ecx = (uint32_t)(t0);
L_004e8b23:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8b28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8b28:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e8b2b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004e8b2d:  // call dword ptr [eax + 0x138]
    t0 = M32((uint32_t)(eax + 0x138u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8b33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8b33:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e8b35:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e8b39:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004e8b3d:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e8b41:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004e8b45:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e8b48:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e8b4a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e8b4c:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004e8b50:  // call dword ptr [edx + 0x138]
    t0 = M32((uint32_t)(edx + 0x138u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8b56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8b56:  // fmul qword ptr [0x5df260]
    ST(0) = (ST(0)) * ((long double)F64((uint32_t)(0x5df260u)));
L_004e8b5c:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e8b60:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e8b62:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e8b66:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_004e8b6a:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004e8b6c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e8b6e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e8b71:  // je 0x4e8bcf
    if (f.zf) goto L_004e8bcf;
L_004e8b73:  // mov eax, dword ptr [edi + 0x110]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x110u)));
L_004e8b79:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e8b7b:  // jne 0x4e8bcf
    if (!f.zf) goto L_004e8bcf;
L_004e8b7d:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e8b7f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e8b81:  // je 0x4e8caa
    if (f.zf) goto L_004e8caa;
L_004e8b87:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e8b89:  // je 0x4e8bb2
    if (f.zf) goto L_004e8bb2;
L_004e8b8b:  // lea eax, [ebx + 0x1c]
    eax = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004e8b8e:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e8b91:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004e8b93:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_004e8b95:  // mov dword ptr [edx], ebp
    M32((uint32_t)(edx)) = (uint32_t)(ebp);
L_004e8b97:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e8b9a:  // mov dword ptr [edx + 4], ebp
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebp);
L_004e8b9d:  // mov ebp, dword ptr [eax + 8]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e8ba0:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_004e8ba3:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e8ba6:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004e8ba9:  // call 0x4fcec0
    t0 = 0x004fcec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8baeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8bae:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004e8bb2:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_004e8bb4:  // mov ecx, dword ptr [esi + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_004e8bba:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e8bbc:  // je 0x4e8caa
    if (f.zf) goto L_004e8caa;
L_004e8bc2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e8bc4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e8bc5:  // call 0x4ffdd0
    t0 = 0x004ffdd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8bcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8bca:  // jmp 0x4e8caa
    goto L_004e8caa;
L_004e8bcf:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e8bd1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e8bd3:  // je 0x4e8c20
    if (f.zf) goto L_004e8c20;
L_004e8bd5:  // call 0x4fd570
    t0 = 0x004fd570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8bdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8bda:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e8bdc:  // je 0x4e8c20
    if (f.zf) goto L_004e8c20;
L_004e8bde:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e8be0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e8be2:  // je 0x4e8c3b
    if (f.zf) goto L_004e8c3b;
L_004e8be4:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e8be6:  // je 0x4e8c0f
    if (f.zf) goto L_004e8c0f;
L_004e8be8:  // lea edx, [ebx + 0x1c]
    edx = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004e8beb:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e8bee:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004e8bf0:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_004e8bf2:  // mov dword ptr [eax], ebp
    M32((uint32_t)(eax)) = (uint32_t)(ebp);
L_004e8bf4:  // mov ebp, dword ptr [edx + 4]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004e8bf7:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_004e8bfa:  // mov ebp, dword ptr [edx + 8]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004e8bfd:  // mov dword ptr [eax + 8], ebp
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebp);
L_004e8c00:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004e8c03:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004e8c06:  // call 0x4fcec0
    t0 = 0x004fcec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8c0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8c0b:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004e8c0f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e8c11:  // mov ecx, dword ptr [eax + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x13cu)));
L_004e8c17:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e8c19:  // je 0x4e8c3b
    if (f.zf) goto L_004e8c3b;
L_004e8c1b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e8c1d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e8c1e:  // jmp 0x4e8c36
    goto L_004e8c36;
L_004e8c20:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e8c22:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e8c24:  // je 0x4e8c3b
    if (f.zf) goto L_004e8c3b;
L_004e8c26:  // mov eax, dword ptr [eax + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x13cu)));
L_004e8c2c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e8c2e:  // je 0x4e8c3b
    if (f.zf) goto L_004e8c3b;
L_004e8c30:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e8c32:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e8c34:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e8c36:  // call 0x4ffdd0
    t0 = 0x004ffdd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8c3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8c3b:  // cmp dword ptr [esi], 0
    t0 = lsub<32>(M32((uint32_t)(esi)), 0x0u, f);
L_004e8c3e:  // je 0x4e8caa
    if (f.zf) goto L_004e8caa;
L_004e8c40:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004e8c43:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004e8c46:  // mov edi, dword ptr [esi + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e8c49:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e8c4b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8c4c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e8c4d:  // lea ecx, [esp + 0x7c]
    ecx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004e8c51:  // add edi, 0x1c
    t0 = ladd<32>(edi, 0x1cu, f);
    edi = (uint32_t)(t0);
L_004e8c54:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8c59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8c59:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e8c5c:  // lea edx, [esp + 0x80]
    edx = (uint32_t)((uint32_t)(esp + 0x80u));
L_004e8c63:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8c64:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e8c65:  // add ecx, 0x3c
    t0 = ladd<32>(ecx, 0x3cu, f);
    ecx = (uint32_t)(t0);
L_004e8c68:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8c6du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8c6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8c6e:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_004e8c72:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e8c73:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e8c75:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8c7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8c7a:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e8c7c:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004e8c80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e8c82:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e8c85:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e8c87:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004e8c89:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_004e8c8b:  // mov esi, dword ptr [esp + 0x48]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004e8c8f:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_004e8c92:  // mov esi, dword ptr [esp + 0x4c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004e8c96:  // mov dword ptr [eax + 8], esi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(esi);
L_004e8c99:  // mov esi, dword ptr [esp + 0x50]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004e8c9d:  // mov dword ptr [eax + 0xc], esi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(esi);
L_004e8ca0:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e8ca6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e8ca6:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e8caa:  // mov ebp, dword ptr [ebp + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004e8cad:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004e8caf:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_004e8cb3:  // je 0x4e8cba
    if (f.zf) goto L_004e8cba;
L_004e8cb5:  // mov esi, dword ptr [ebp]
    esi = (uint32_t)(M32((uint32_t)(ebp)));
L_004e8cb8:  // jmp 0x4e8cbc
    goto L_004e8cbc;
L_004e8cba:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004e8cbc:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e8cbe:  // jne 0x4e8a80
    if (!f.zf) goto L_004e8a80;
L_004e8cc4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e8cc5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e8cc6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e8cc7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e8cc8:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_004e8cce:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e8930, 004e8930)
