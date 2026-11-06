// lifted from 0054c920 (FUN_0054c920, 2254 bytes, 676 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0054c920(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0054c920;
L_0054c920:  // sub esp, 0x228
    t0 = lsub<32>(esp, 0x228u, f);
    esp = (uint32_t)(t0);
L_0054c926:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054c927:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054c928:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054c929:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0054c92b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054c92c:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0054c92e:  // push 0x651290
    t0 = 0x651290u; esp -= 4; M32(esp) = t0;
L_0054c933:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0054c938:  // mov dword ptr [ebp + 0x108], ebx
    M32((uint32_t)(ebp + 0x108u)) = (uint32_t)(ebx);
L_0054c93e:  // call 0x42b500
    t0 = 0x0042b500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c943u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c943:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054c949:  // push 0x1a9
    t0 = 0x1a9u; esp -= 4; M32(esp) = t0;
L_0054c94e:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054c953:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054c955:  // mov edi, dword ptr [eax + 0xa8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xa8u)));
L_0054c95b:  // mov eax, dword ptr [eax + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xb0u)));
L_0054c961:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0054c963:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_0054c967:  // shl esi, 6
    t0 = lshl<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_0054c96a:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0054c96e:  // lea ecx, [esi + esi*2]
    ecx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_0054c971:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054c974:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054c975:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c97a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c97fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c97f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0054c981:  // je 0x54c98c
    if (f.zf) goto L_0054c98c;
L_0054c983:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0054c984:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0054c988:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0054c98a:  // jmp 0x54c98e
    goto L_0054c98e;
L_0054c98c:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054c98e:  // lea edx, [edi + edi*2]
    edx = (uint32_t)((uint32_t)(edi + edi * 2u));
L_0054c991:  // push 0x1aa
    t0 = 0x1aau; esp -= 4; M32(esp) = t0;
L_0054c996:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054c99b:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054c99d:  // shl edx, 7
    t0 = lshl<32>(edx, 0x7u, f);
    edx = (uint32_t)(t0);
L_0054c9a0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054c9a1:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c9a6:  // mov dword ptr [esp + 0x38], esi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(esi);
L_0054c9aa:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c9afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c9af:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0054c9b3:  // push 0x1ab
    t0 = 0x1abu; esp -= 4; M32(esp) = t0;
L_0054c9b8:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054c9bd:  // lea eax, [edi + edi]
    eax = (uint32_t)((uint32_t)(edi + edi));
L_0054c9c0:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054c9c2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054c9c3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054c9c8:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c9cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c9cd:  // call 0x5019d0
    t0 = 0x005019d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054c9d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054c9d2:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_0054c9d4:  // jle 0x54cc25
    if ((f.zf || f.sf != f.of)) goto L_0054cc25;
L_0054c9da:  // add esi, 0x20
    t0 = ladd<32>(esi, 0x20u, f);
    esi = (uint32_t)(t0);
L_0054c9dd:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0054c9e1:  // mov dword ptr [esp + 0x34], esi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(esi);
L_0054c9e5:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_0054c9e9:  // jmp 0x54c9ed
    goto L_0054c9ed;
L_0054c9eb:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0054c9ed:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054c9f3:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054c9f7:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0054c9fb:  // mov esi, dword ptr [eax + 0x134]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x134u)));
L_0054ca01:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054ca07:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0054ca09:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0054ca0b:  // jle 0x54caac
    if ((f.zf || f.sf != f.of)) goto L_0054caac;
L_0054ca11:  // lea ebx, [ebp + 8]
    ebx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0054ca14:  // mov edi, 0xfffffff0
    edi = (uint32_t)(0xfffffff0u);
L_0054ca19:  // mov dword ptr [esp + 0x18], 1
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x1u);
L_0054ca21:  // lea ecx, [esi + 0x30]
    ecx = (uint32_t)((uint32_t)(esi + 0x30u));
L_0054ca24:  // sub edi, esi
    t0 = lsub<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_0054ca26:  // mov dword ptr [esp + 0x30], 6
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x6u);
L_0054ca2e:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054ca30:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054ca33:  // je 0x54ca6a
    if (f.zf) goto L_0054ca6a;
L_0054ca35:  // mov edx, dword ptr [ebp + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054ca3b:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054ca3e:  // mov edx, dword ptr [edx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0054ca44:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054ca46:  // fld dword ptr [edx + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(edx + eax * 4u + 0x20u)));
L_0054ca4a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054ca50:  // lea edx, [edx + eax*4]
    edx = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0054ca53:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054ca55:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054ca58:  // jne 0x54ca6a
    if (!f.zf) goto L_0054ca6a;
L_0054ca5a:  // cmp dword ptr [edx], 0
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x0u, f);
L_0054ca5d:  // je 0x54ca6a
    if (f.zf) goto L_0054ca6a;
L_0054ca5f:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0054ca61:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_0054ca63:  // cmp dword ptr [eax + ecx], edx
    t0 = lsub<32>(M32((uint32_t)(eax + ecx)), edx, f);
L_0054ca66:  // je 0x54ca7c
    if (f.zf) goto L_0054ca7c;
L_0054ca68:  // jmp 0x54ca74
    goto L_0054ca74;
L_0054ca6a:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0054ca6c:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_0054ca6e:  // cmp dword ptr [edx + ecx], 0
    t0 = lsub<32>(M32((uint32_t)(edx + ecx)), 0x0u, f);
L_0054ca72:  // je 0x54ca7c
    if (f.zf) goto L_0054ca7c;
L_0054ca74:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0054ca7c:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0054ca80:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054ca83:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054ca84:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0054ca88:  // jne 0x54ca2e
    if (!f.zf) goto L_0054ca2e;
L_0054ca8a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054ca8e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054ca90:  // jne 0x54caac
    if (!f.zf) goto L_0054caac;
L_0054ca92:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054ca96:  // mov ecx, dword ptr [ebp + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054ca9c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054ca9d:  // add ebx, 4
    t0 = ladd<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_0054caa0:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054caa2:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0054caa6:  // jl 0x54ca14
    if ((f.sf != f.of)) goto L_0054ca14;
L_0054caac:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054cab0:  // mov ecx, dword ptr [ebp + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cab6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054cab8:  // jne 0x54cb86
    if (!f.zf) goto L_0054cb86;
L_0054cabe:  // push 0x1d8
    t0 = 0x1d8u; esp -= 4; M32(esp) = t0;
L_0054cac3:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054cac8:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054caca:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_0054cacc:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054cad1:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cad6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cad6:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0054cad8:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054cada:  // je 0x54cae3
    if (f.zf) goto L_0054cae3;
L_0054cadc:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0054cade:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_0054cae1:  // jmp 0x54cae5
    goto L_0054cae5;
L_0054cae3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054cae5:  // mov edx, dword ptr [ebp + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054caeb:  // mov edi, 0xfffffff0
    edi = (uint32_t)(0xfffffff0u);
L_0054caf0:  // sub edi, esi
    t0 = lsub<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_0054caf2:  // mov ebx, 6
    ebx = (uint32_t)(0x6u);
L_0054caf7:  // mov dword ptr [ebp + edx*4 + 8], eax
    M32((uint32_t)(ebp + edx * 4u + 0x8u)) = (uint32_t)(eax);
L_0054cafb:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cb01:  // mov edx, dword ptr [ebp + eax*4 + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x8u)));
L_0054cb05:  // mov dword ptr [edx + 0x14], ecx
    M32((uint32_t)(edx + 0x14u)) = (uint32_t)(ecx);
L_0054cb08:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cb0e:  // mov edx, dword ptr [ebp + eax*4 + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x8u)));
L_0054cb12:  // mov dword ptr [edx + 0x10], ecx
    M32((uint32_t)(edx + 0x10u)) = (uint32_t)(ecx);
L_0054cb15:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cb1b:  // mov edx, dword ptr [ebp + eax*4 + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x8u)));
L_0054cb1f:  // mov dword ptr [edx + 0x18], ecx
    M32((uint32_t)(edx + 0x18u)) = (uint32_t)(ecx);
L_0054cb22:  // lea ecx, [esi + 0x30]
    ecx = (uint32_t)((uint32_t)(esi + 0x30u));
L_0054cb25:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054cb27:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054cb2a:  // je 0x54cb67
    if (f.zf) goto L_0054cb67;
L_0054cb2c:  // mov edx, dword ptr [ebp + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cb32:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054cb35:  // mov edx, dword ptr [edx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0054cb3b:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054cb3d:  // fld dword ptr [edx + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(edx + eax * 4u + 0x20u)));
L_0054cb41:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054cb47:  // lea edx, [edx + eax*4]
    edx = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0054cb4a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054cb4c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054cb4f:  // jne 0x54cb67
    if (!f.zf) goto L_0054cb67;
L_0054cb51:  // cmp dword ptr [edx], 0
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x0u, f);
L_0054cb54:  // je 0x54cb67
    if (f.zf) goto L_0054cb67;
L_0054cb56:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cb5c:  // mov eax, dword ptr [ebp + eax*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0x8u)));
L_0054cb60:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0054cb62:  // mov dword ptr [eax + edi], edx
    M32((uint32_t)(eax + edi)) = (uint32_t)(edx);
L_0054cb65:  // jmp 0x54cb7a
    goto L_0054cb7a;
L_0054cb67:  // mov edx, dword ptr [ebp + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cb6d:  // mov eax, dword ptr [ebp + edx*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x8u)));
L_0054cb71:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0054cb73:  // mov dword ptr [eax + edi], 0
    M32((uint32_t)(eax + edi)) = (uint32_t)(0x0u);
L_0054cb7a:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054cb7d:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0054cb7e:  // jne 0x54cb25
    if (!f.zf) goto L_0054cb25;
L_0054cb80:  // inc dword ptr [ebp + 0x108]
    t0 = linc<32>(M32((uint32_t)(ebp + 0x108u)), f);
    M32((uint32_t)(ebp + 0x108u)) = (uint32_t)(t0);
L_0054cb86:  // mov ecx, dword ptr [ebp + 0x10c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cb8c:  // mov edx, dword ptr [ecx + 0x84]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_0054cb92:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054cb95:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054cb98:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054cb9a:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054cb9e:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0054cba0:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054cba2:  // mov dword ptr [edx - 0x20], ecx
    M32((uint32_t)(edx + 0xffffffe0u)) = (uint32_t)(ecx);
L_0054cba5:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054cba8:  // mov dword ptr [edx - 0x1c], ecx
    M32((uint32_t)(edx + 0xffffffe4u)) = (uint32_t)(ecx);
L_0054cbab:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054cbae:  // mov dword ptr [edx - 0x18], eax
    M32((uint32_t)(edx + 0xffffffe8u)) = (uint32_t)(eax);
L_0054cbb1:  // mov ecx, dword ptr [esi + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_0054cbb4:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0054cbb7:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0054cbba:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0054cbbd:  // mov ecx, dword ptr [esi + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_0054cbc0:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0054cbc3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0054cbc5:  // mov dword ptr [edx - 8], eax
    M32((uint32_t)(edx + 0xfffffff8u)) = (uint32_t)(eax);
L_0054cbc8:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0054cbcb:  // mov dword ptr [edx - 4], ecx
    M32((uint32_t)(edx + 0xfffffffcu)) = (uint32_t)(ecx);
L_0054cbce:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0054cbd1:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0054cbd3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054cbd5:  // lea ecx, [edx - 0x14]
    ecx = (uint32_t)((uint32_t)(edx + 0xffffffecu));
L_0054cbd8:  // mov ebx, dword ptr [ebp + 0x10c]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cbde:  // mov edi, dword ptr [esi + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054cbe1:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054cbe4:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054cbe7:  // mov ebx, dword ptr [ebx + 0xd8]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xd8u)));
L_0054cbed:  // cmp eax, 0xc
    t0 = lsub<32>(eax, 0xcu, f);
L_0054cbf0:  // mov edi, dword ptr [ebx + edi*4]
    edi = (uint32_t)(M32((uint32_t)(ebx + edi * 4u)));
L_0054cbf3:  // fild dword ptr [edi + eax - 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edi + eax + 0xfffffffcu)));
L_0054cbf7:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_0054cbfd:  // fstp dword ptr [ecx - 4]
    F32((uint32_t)(ecx + 0xfffffffcu)) = lf32(ST(0));
    lpop(x);
L_0054cc00:  // jl 0x54cbd8
    if ((f.sf != f.of)) goto L_0054cbd8;
L_0054cc02:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054cc06:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054cc0a:  // add esi, 0x60
    t0 = ladd<32>(esi, 0x60u, f);
    esi = (uint32_t)(t0);
L_0054cc0d:  // add edx, 0x30
    t0 = ladd<32>(edx, 0x30u, f);
    edx = (uint32_t)(t0);
L_0054cc10:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054cc11:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0054cc15:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_0054cc19:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0054cc1d:  // jne 0x54c9eb
    if (!f.zf) goto L_0054c9eb;
L_0054cc23:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0054cc25:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0054cc27:  // call 0x56eb60
    t0 = 0x0056eb60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cc2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cc2c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054cc2e:  // call 0x56eb70
    t0 = 0x0056eb70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cc33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cc33:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054cc34:  // call 0x56eb80
    t0 = 0x0056eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cc39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cc39:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054cc3a:  // call 0x56eb50
    t0 = 0x0056eb50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cc3fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cc3f:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cc45:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0054cc48:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0054cc4a:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0054cc4c:  // jle 0x54cc6a
    if ((f.zf || f.sf != f.of)) goto L_0054cc6a;
L_0054cc4e:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0054cc51:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054cc53:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054cc54:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054cc57:  // mov dword ptr [edx + 0x10], ebx
    M32((uint32_t)(edx + 0x10u)) = (uint32_t)(ebx);
L_0054cc5a:  // mov edx, dword ptr [eax - 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054cc5d:  // mov dword ptr [edx + 0x18], ebx
    M32((uint32_t)(edx + 0x18u)) = (uint32_t)(ebx);
L_0054cc60:  // mov edx, dword ptr [ebp + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cc66:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0054cc68:  // jl 0x54cc51
    if ((f.sf != f.of)) goto L_0054cc51;
L_0054cc6a:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cc70:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054cc72:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0054cc74:  // jle 0x54ccac
    if ((f.zf || f.sf != f.of)) goto L_0054ccac;
L_0054cc76:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054cc7a:  // lea edi, [edi + edi*2]
    edi = (uint32_t)((uint32_t)(edi + edi * 2u));
L_0054cc7d:  // shl edi, 1
    t0 = lshl<32>(edi, 0x1u, f);
    edi = (uint32_t)(t0);
L_0054cc7f:  // push 0x216
    t0 = 0x216u; esp -= 4; M32(esp) = t0;
L_0054cc84:  // push 0x651244
    t0 = 0x651244u; esp -= 4; M32(esp) = t0;
L_0054cc89:  // push 0x3a
    t0 = 0x3au; esp -= 4; M32(esp) = t0;
L_0054cc8b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054cc8c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054cc91:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cc96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cc96:  // mov dword ptr [esp + esi*4 + 0x138], eax
    M32((uint32_t)(esp + esi * 4u + 0x138u)) = (uint32_t)(eax);
L_0054cc9d:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cca3:  // mov dword ptr [esp + esi*4 + 0x38], ebx
    M32((uint32_t)(esp + esi * 4u + 0x38u)) = (uint32_t)(ebx);
L_0054cca7:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0054cca8:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0054ccaa:  // jl 0x54cc7f
    if ((f.sf != f.of)) goto L_0054cc7f;
L_0054ccac:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054ccb0:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0054ccb2:  // jle 0x54ce36
    if ((f.zf || f.sf != f.of)) goto L_0054ce36;
L_0054ccb8:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0054ccc0:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0054ccc4:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054ccca:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054ccce:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054ccd0:  // mov ebx, dword ptr [eax + 0x80]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x80u)));
L_0054ccd6:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054ccdc:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0054ccde:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054cce0:  // jle 0x54cd8f
    if ((f.zf || f.sf != f.of)) goto L_0054cd8f;
L_0054cce6:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0054cce9:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0054cced:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0054ccef:  // mov esi, 0xfffffff0
    esi = (uint32_t)(0xfffffff0u);
L_0054ccf4:  // mov dword ptr [esp + 0x14], 1
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x1u);
L_0054ccfc:  // sub esi, eax
    t0 = lsub<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0054ccfe:  // lea ecx, [eax + 0x30]
    ecx = (uint32_t)((uint32_t)(eax + 0x30u));
L_0054cd01:  // mov dword ptr [esp + 0x1c], 6
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x6u);
L_0054cd09:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054cd0b:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054cd0e:  // je 0x54cd49
    if (f.zf) goto L_0054cd49;
L_0054cd10:  // mov edx, dword ptr [ebp + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cd16:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054cd19:  // mov edx, dword ptr [edx + 0x128]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0054cd1f:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054cd21:  // fld dword ptr [edx + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(edx + eax * 4u + 0x20u)));
L_0054cd25:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054cd2b:  // lea edx, [edx + eax*4]
    edx = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0054cd2e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054cd30:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054cd33:  // jne 0x54cd49
    if (!f.zf) goto L_0054cd49;
L_0054cd35:  // cmp dword ptr [edx], 0
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x0u, f);
L_0054cd38:  // je 0x54cd49
    if (f.zf) goto L_0054cd49;
L_0054cd3a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054cd3e:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0054cd40:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0054cd42:  // cmp dword ptr [eax + ecx], edx
    t0 = lsub<32>(M32((uint32_t)(eax + ecx)), edx, f);
L_0054cd45:  // je 0x54cd5f
    if (f.zf) goto L_0054cd5f;
L_0054cd47:  // jmp 0x54cd57
    goto L_0054cd57;
L_0054cd49:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054cd4d:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054cd4f:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0054cd51:  // cmp dword ptr [eax + ecx], 0
    t0 = lsub<32>(M32((uint32_t)(eax + ecx)), 0x0u, f);
L_0054cd55:  // je 0x54cd5f
    if (f.zf) goto L_0054cd5f;
L_0054cd57:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0054cd5f:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054cd63:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054cd66:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054cd67:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0054cd6b:  // jne 0x54cd09
    if (!f.zf) goto L_0054cd09;
L_0054cd6d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054cd71:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054cd73:  // jne 0x54cd8f
    if (!f.zf) goto L_0054cd8f;
L_0054cd75:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054cd79:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cd7f:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0054cd80:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054cd83:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0054cd85:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_0054cd89:  // jl 0x54cced
    if ((f.sf != f.of)) goto L_0054cced;
L_0054cd8f:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cd95:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0054cd97:  // mov ecx, dword ptr [esp + edi*4 + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x38u)));
L_0054cd9b:  // mov esi, dword ptr [esp + edi*4 + 0x138]
    esi = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x138u)));
L_0054cda2:  // sub edx, dword ptr [eax + 0x134]
    t0 = lsub<32>(edx, M32((uint32_t)(eax + 0x134u)), f);
    edx = (uint32_t)(t0);
L_0054cda8:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_0054cdad:  // add ecx, 3
    t0 = ladd<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054cdb0:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0054cdb2:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0054cdb5:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054cdb7:  // mov dword ptr [esp + edi*4 + 0x38], ecx
    M32((uint32_t)(esp + edi * 4u + 0x38u)) = (uint32_t)(ecx);
L_0054cdbb:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0054cdbe:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054cdc0:  // mov word ptr [esi + ecx*2 - 6], dx
    M16((uint32_t)(esi + ecx * 2u + 0xfffffffau)) = (uint16_t)((edx & 0xffffu));
L_0054cdc5:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cdcb:  // mov edx, dword ptr [ebx + 4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_0054cdce:  // sub edx, dword ptr [eax + 0x134]
    t0 = lsub<32>(edx, M32((uint32_t)(eax + 0x134u)), f);
    edx = (uint32_t)(t0);
L_0054cdd4:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_0054cdd9:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0054cddb:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0054cdde:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054cde0:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0054cde3:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054cde5:  // mov word ptr [esi + ecx*2 - 4], dx
    M16((uint32_t)(esi + ecx * 2u + 0xfffffffcu)) = (uint16_t)((edx & 0xffffu));
L_0054cdea:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cdf0:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0054cdf3:  // mov ebx, dword ptr [eax + 0x134]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x134u)));
L_0054cdf9:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_0054cdfe:  // sub edx, ebx
    t0 = lsub<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_0054ce00:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0054ce02:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0054ce05:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054ce07:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0054ce0a:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054ce0c:  // mov word ptr [esi + ecx*2 - 2], dx
    M16((uint32_t)(esi + ecx * 2u + 0xfffffffeu)) = (uint16_t)((edx & 0xffffu));
L_0054ce11:  // mov eax, dword ptr [ebp + edi*4 + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + edi * 4u + 0x8u)));
L_0054ce15:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054ce19:  // mov edx, dword ptr [eax + 0x10]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054ce1c:  // add ecx, 0xc
    t0 = ladd<32>(ecx, 0xcu, f);
    ecx = (uint32_t)(t0);
L_0054ce1f:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0054ce20:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0054ce24:  // mov dword ptr [eax + 0x10], edx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(edx);
L_0054ce27:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054ce2b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054ce2c:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0054ce30:  // jne 0x54ccc4
    if (!f.zf) goto L_0054ccc4;
L_0054ce36:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054ce3c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054ce3e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054ce40:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_0054ce44:  // jle 0x54cf0a
    if ((f.zf || f.sf != f.of)) goto L_0054cf0a;
L_0054ce4a:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054ce4e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0054ce50:  // lea esi, [ebp + 8]
    esi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0054ce53:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0054ce56:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0054ce58:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0054ce5c:  // mov eax, dword ptr [esp + edi*4 + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x38u)));
L_0054ce60:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0054ce64:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0054ce68:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054ce69:  // mov ecx, dword ptr [esp + edi*4 + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(esp + edi * 4u + 0x13cu)));
L_0054ce70:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054ce71:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054ce72:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054ce73:  // call 0x56eb90
    t0 = 0x0056eb90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054ce78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054ce78:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0054ce7a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054ce7c:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0054ce7f:  // mov dword ptr [edx + 0x10], eax
    M32((uint32_t)(edx + 0x10u)) = (uint32_t)(eax);
L_0054ce82:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054ce86:  // cmp dword ptr [ecx + 4], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), eax, f);
L_0054ce89:  // jle 0x54ceb8
    if ((f.zf || f.sf != f.of)) goto L_0054ceb8;
L_0054ce8b:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054ce8f:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0054ce91:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0054ce94:  // mov edi, dword ptr [edi + 0x10]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0054ce97:  // mov cx, word ptr [ecx + eax*2]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + eax * 2u))) & 0xffffu);
L_0054ce9b:  // add edi, ebx
    t0 = ladd<32>(edi, ebx, f);
    edi = (uint32_t)(t0);
L_0054ce9d:  // mov word ptr [edx + edi*2], cx
    M16((uint32_t)(edx + edi * 2u)) = (uint16_t)((ecx & 0xffffu));
L_0054cea1:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0054cea3:  // mov edi, dword ptr [ecx + 0x10]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0x10u)));
L_0054cea6:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0054cea7:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054cea8:  // mov dword ptr [ecx + 0x10], edi
    M32((uint32_t)(ecx + 0x10u)) = (uint32_t)(edi);
L_0054ceab:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054ceaf:  // cmp eax, dword ptr [ecx + 4]
    t0 = lsub<32>(eax, M32((uint32_t)(ecx + 0x4u)), f);
L_0054ceb2:  // jl 0x54ce8f
    if ((f.sf != f.of)) goto L_0054ce8f;
L_0054ceb4:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054ceb8:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0054ceba:  // mov edx, dword ptr [eax + 0x10]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054cebd:  // sub edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_0054cec0:  // mov dword ptr [eax + 0x18], edx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(edx);
L_0054cec3:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054cec7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054cec9:  // je 0x54ceee
    if (f.zf) goto L_0054ceee;
L_0054cecb:  // mov ecx, dword ptr [eax - 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054cece:  // lea edi, [eax - 4]
    edi = (uint32_t)((uint32_t)(eax + 0xfffffffcu));
L_0054ced1:  // push 0x48e310
    t0 = 0x48e310u; esp -= 4; M32(esp) = t0;
L_0054ced6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054ced7:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_0054ced9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054ceda:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cedfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cedf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054cee0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054cee5:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054ceeau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054ceea:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054ceee:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054cef2:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cef8:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0054cef9:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0054cefc:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0054cefe:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0054cf00:  // mov dword ptr [esp + 0x10], edi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edi);
L_0054cf04:  // jl 0x54ce5c
    if ((f.sf != f.of)) goto L_0054ce5c;
L_0054cf0a:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cf10:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054cf12:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054cf14:  // jle 0x54cf38
    if ((f.zf || f.sf != f.of)) goto L_0054cf38;
L_0054cf16:  // lea edi, [esp + 0x138]
    edi = (uint32_t)((uint32_t)(esp + 0x138u));
L_0054cf1d:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0054cf1f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054cf24:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054cf25:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cf2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cf2a:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cf30:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0054cf31:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0054cf34:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0054cf36:  // jl 0x54cf1d
    if ((f.sf != f.of)) goto L_0054cf1d;
L_0054cf38:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054cf3e:  // mov dword ptr [esp + 0x18], 1
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x1u);
L_0054cf46:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054cf48:  // jle 0x54d05a
    if ((f.zf || f.sf != f.of)) goto L_0054d05a;
L_0054cf4e:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054cf51:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054cf55:  // mov dword ptr [eax + 0x14], ecx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(ecx);
L_0054cf58:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054cf5b:  // mov ecx, dword ptr [eax + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_0054cf5e:  // lea edx, [ecx + ecx*2]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0054cf61:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_0054cf66:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0054cf69:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0054cf6c:  // mov dl, byte ptr [0x854e6c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x854e6cu))) & 0xffu);
L_0054cf72:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0054cf74:  // mov eax, 8
    eax = (uint32_t)(0x8u);
L_0054cf79:  // je 0x54cf85
    if (f.zf) goto L_0054cf85;
L_0054cf7b:  // mov eax, 0x18
    eax = (uint32_t)(0x18u);
L_0054cf80:  // mov ecx, 2
    ecx = (uint32_t)(0x2u);
L_0054cf85:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054cf88:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054cf8a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054cf8b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054cf8c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054cf8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054cf8e:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0054cf91:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054cf96:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054cf97:  // call 0x513770
    t0 = 0x00513770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cf9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cf9c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054cf9e:  // jl 0x54d015
    if ((f.sf != f.of)) goto L_0054d015;
L_0054cfa0:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054cfa6:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0054cfac:  // mov edx, dword ptr [eax + 0x128]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x128u)));
L_0054cfb2:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054cfb5:  // add edx, 0x24
    t0 = ladd<32>(edx, 0x24u, f);
    edx = (uint32_t)(t0);
L_0054cfb8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054cfb9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054cfba:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054cfbd:  // push 0x651264
    t0 = 0x651264u; esp -= 4; M32(esp) = t0;
L_0054cfc2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054cfc3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054cfc4:  // push 0x9c3df0
    t0 = 0x9c3df0u; esp -= 4; M32(esp) = t0;
L_0054cfc9:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cfceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cfce:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054cfd1:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0054cfd4:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054cfd6:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0054cfda:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054cfdb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054cfdc:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054cfde:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054cfdf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054cfe0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054cfe1:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054cfe4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054cfe4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054cfe6:  // jl 0x54d015
    if ((f.sf != f.of)) goto L_0054d015;
L_0054cfe8:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054cfec:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054cff0:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054cff4:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0054cff7:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054cffa:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0054cffc:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0054cfff:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054d001:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0054d003:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054d006:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0054d008:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054d00b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0054d00d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054d00e:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054d010:  // call dword ptr [edx + 0x30]
    t0 = M32((uint32_t)(edx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d013u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d013:  // jmp 0x54d019
    goto L_0054d019;
L_0054d015:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_0054d019:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054d01f:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_0054d024:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054d026:  // jle 0x54d05a
    if ((f.zf || f.sf != f.of)) goto L_0054d05a;
L_0054d028:  // lea eax, [ebp + 0xc]
    eax = (uint32_t)((uint32_t)(ebp + 0xcu));
L_0054d02b:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054d02e:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_0054d030:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0054d031:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054d034:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0054d037:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_0054d03a:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054d03d:  // mov esi, dword ptr [eax - 4]
    esi = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054d040:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0054d042:  // mov dword ptr [esi], edx
    M32((uint32_t)(esi)) = (uint32_t)(edx);
L_0054d044:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054d047:  // mov esi, dword ptr [eax - 4]
    esi = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054d04a:  // mov edx, dword ptr [edx + 0x14]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x14u)));
L_0054d04d:  // mov dword ptr [esi + 0x14], edx
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(edx);
L_0054d050:  // mov edx, dword ptr [ebp + 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054d056:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0054d058:  // jl 0x54d02b
    if ((f.sf != f.of)) goto L_0054d02b;
L_0054d05a:  // mov eax, dword ptr [ebp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054d060:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0054d068:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054d06a:  // jle 0x54d17e
    if ((f.zf || f.sf != f.of)) goto L_0054d17e;
L_0054d070:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054d074:  // lea ebx, [ebp + 8]
    ebx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0054d077:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0054d07a:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0054d07d:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0054d081:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054d085:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0054d089:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_0054d08b:  // mov edx, 1
    edx = (uint32_t)(0x1u);
L_0054d090:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054d092:  // mov dword ptr [ecx + 0x1c], edx
    M32((uint32_t)(ecx + 0x1cu)) = (uint32_t)(edx);
L_0054d095:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0054d097:  // cmp dword ptr [eax + 0x1c], esi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x1cu)), esi, f);
L_0054d09a:  // je 0x54d156
    if (f.zf) goto L_0054d156;
L_0054d0a0:  // cmp byte ptr [0x854e6c], 0
    t0 = lsub<8>(M8((uint32_t)(0x854e6cu)), 0x0u, f);
L_0054d0a7:  // mov ecx, 8
    ecx = (uint32_t)(0x8u);
L_0054d0ac:  // je 0x54d0b8
    if (f.zf) goto L_0054d0b8;
L_0054d0ae:  // mov ecx, 0x18
    ecx = (uint32_t)(0x18u);
L_0054d0b3:  // mov edx, 2
    edx = (uint32_t)(0x2u);
L_0054d0b8:  // mov edi, dword ptr [eax + 0x10]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054d0bb:  // shl edi, 1
    t0 = lshl<32>(edi, 0x1u, f);
    edi = (uint32_t)(t0);
L_0054d0bd:  // mov dword ptr [eax + 0xc], edi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edi);
L_0054d0c0:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0054d0c2:  // lea edi, [eax + 4]
    edi = (uint32_t)((uint32_t)(eax + 0x4u));
L_0054d0c5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054d0c6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054d0c7:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0054d0ca:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0054d0cc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054d0cd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054d0ce:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054d0d3:  // call 0x5137d0
    t0 = 0x005137d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d0d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d0d8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054d0da:  // jl 0x54d152
    if ((f.sf != f.of)) goto L_0054d152;
L_0054d0dc:  // mov eax, dword ptr [ebp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10cu)));
L_0054d0e2:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054d0e6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054d0e7:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_0054d0e9:  // mov edx, dword ptr [eax + 0x88]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0054d0ef:  // mov eax, dword ptr [eax + 0x128]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x128u)));
L_0054d0f5:  // add eax, 0x24
    t0 = ladd<32>(eax, 0x24u, f);
    eax = (uint32_t)(t0);
L_0054d0f8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054d0f9:  // mov edx, dword ptr [ecx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0054d0fc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054d0fd:  // push 0x6511f8
    t0 = 0x6511f8u; esp -= 4; M32(esp) = t0;
L_0054d102:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054d103:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054d104:  // push 0x9c3df0
    t0 = 0x9c3df0u; esp -= 4; M32(esp) = t0;
L_0054d109:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d10eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d10e:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0054d110:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0054d113:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0054d117:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054d11a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054d11b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054d11c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054d11d:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054d11f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054d120:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054d121:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d124u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d124:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054d126:  // jl 0x54d152
    if ((f.sf != f.of)) goto L_0054d152;
L_0054d128:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0054d12a:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054d12e:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054d132:  // mov ecx, dword ptr [eax + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0054d135:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0054d137:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0054d139:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0054d13c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054d13e:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0054d140:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0054d143:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0054d145:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0054d147:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054d14a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054d14b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054d14d:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d150u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d150:  // jmp 0x54d156
    goto L_0054d156;
L_0054d152:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_0054d156:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054d15a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054d15e:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054d162:  // mov ecx, dword ptr [ebp + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x108u)));
L_0054d168:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054d169:  // add ebx, 4
    t0 = ladd<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_0054d16c:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0054d16e:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054d170:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0054d174:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_0054d178:  // jl 0x54d089
    if ((f.sf != f.of)) goto L_0054d089;
L_0054d17e:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054d182:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054d187:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054d188:  // mov dword ptr [ebp + 0x114], 0x30
    M32((uint32_t)(ebp + 0x114u)) = (uint32_t)(0x30u);
L_0054d192:  // mov dword ptr [ebp + 0x118], 0
    M32((uint32_t)(ebp + 0x118u)) = (uint32_t)(0x0u);
L_0054d19c:  // mov dword ptr [ebp + 0x11c], 4
    M32((uint32_t)(ebp + 0x11cu)) = (uint32_t)(0x4u);
L_0054d1a6:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d1abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d1ab:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054d1af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054d1b0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0054d1b5:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d1bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d1ba:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054d1be:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0054d1c3:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0054d1c5:  // setne dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0054d1c8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054d1c9:  // push 0x651290
    t0 = 0x651290u; esp -= 4; M32(esp) = t0;
L_0054d1ce:  // call 0x42b800
    t0 = 0x0042b800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054d1d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054d1d3:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0054d1d5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054d1d6:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054d1d8:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0054d1da:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054d1db:  // and eax, 0x7fffbffb
    t0 = llog<32>(eax & 0x7fffbffbu, f);
    eax = (uint32_t)(t0);
L_0054d1e0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054d1e1:  // add eax, 0x80004005
    t0 = ladd<32>(eax, 0x80004005u, f);
    eax = (uint32_t)(t0);
L_0054d1e6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054d1e7:  // add esp, 0x228
    t0 = ladd<32>(esp, 0x228u, f);
    esp = (uint32_t)(t0);
L_0054d1ed:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0054c920, 0054c920)
