// lifted from 00492950 (FUN_00492950, 342 bytes, 109 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00492950(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00492950;
L_00492950:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00492953:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00492954:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00492955:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_00492959:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049295a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049295b:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_00492960:  // call 0x44a690
    t0 = 0x0044a690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00492965u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00492965:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00492968:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049296d:  // mov esi, 0x7042d0
    esi = (uint32_t)(0x7042d0u);
L_00492972:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00492974:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00492977:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_0049297f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00492981:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00492985:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00492987:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_0049298f:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00492993:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00492995:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_0049299d:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004929a1:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004929a4:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004929a8:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004929ab:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004929b0:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004929b3:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004929b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004929b8:  // mov eax, 0x40
    eax = (uint32_t)(0x40u);
L_004929bd:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004929bf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004929c1:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004929c5:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004929c9:  // mov ebx, 4
    ebx = (uint32_t)(0x4u);
L_004929ce:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004929d2:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004929d4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004929d6:  // jle 0x492a83
    if ((f.zf || f.sf != f.of)) goto L_00492a83;
L_004929dc:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004929de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004929e0:  // jle 0x492a7a
    if ((f.zf || f.sf != f.of)) goto L_00492a7a;
L_004929e6:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004929e9:  // jg 0x492a69
    if ((!f.zf && f.sf == f.of)) goto L_00492a69;
L_004929eb:  // cmp esi, -1
    t0 = lsub<32>(esi, 0xffffffffu, f);
L_004929ee:  // jle 0x492a69
    if ((f.zf || f.sf != f.of)) goto L_00492a69;
L_004929f0:  // test di, di
    t0 = llog<16>((edi & 0xffffu) & (edi & 0xffffu), f);
L_004929f3:  // jl 0x492a69
    if ((f.sf != f.of)) goto L_00492a69;
L_004929f5:  // mov eax, 0x40
    eax = (uint32_t)(0x40u);
L_004929fa:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004929fc:  // sar eax, cl
    t0 = lsar<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_004929fe:  // movsx ecx, di
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)((edi & 0xffffu)));
L_00492a01:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00492a03:  // jge 0x492a69
    if ((f.sf == f.of)) goto L_00492a69;
L_00492a05:  // test bp, bp
    t0 = llog<16>((ebp & 0xffffu) & (ebp & 0xffffu), f);
L_00492a08:  // jl 0x492a69
    if ((f.sf != f.of)) goto L_00492a69;
L_00492a0a:  // movsx edx, bp
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)((ebp & 0xffffu)));
L_00492a0d:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00492a0f:  // jge 0x492a69
    if ((f.sf == f.of)) goto L_00492a69;
L_00492a11:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00492a15:  // imul eax, edx
    t0 = limul32(eax, edx, f);
    eax = (uint32_t)(t0);
L_00492a18:  // mov esi, dword ptr [esi + 0x90]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_00492a1e:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00492a20:  // mov ecx, dword ptr [esi + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(esi + ebx * 4u)));
L_00492a23:  // mov esi, dword ptr [ecx + eax*8 + 4]
    esi = (uint32_t)(M32((uint32_t)(ecx + eax * 8u + 0x4u)));
L_00492a27:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00492a29:  // je 0x492a65
    if (f.zf) goto L_00492a65;
L_00492a2b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00492a2d:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00492a32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00492a32:  // mov edx, dword ptr [eax + 0x34]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x34u)));
L_00492a35:  // and edx, 0x2000000
    t0 = llog<32>(edx & 0x2000000u, f);
    edx = (uint32_t)(t0);
L_00492a3b:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_00492a3e:  // jne 0x492a48
    if (!f.zf) goto L_00492a48;
L_00492a40:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_00492a42:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00492a44:  // jne 0x492a2b
    if (!f.zf) goto L_00492a2b;
L_00492a46:  // jmp 0x492a65
    goto L_00492a65;
L_00492a48:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00492a4a:  // je 0x492a65
    if (f.zf) goto L_00492a65;
L_00492a4c:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00492a50:  // mov word ptr [esp + 0x20], di
    M16((uint32_t)(esp + 0x20u)) = (uint16_t)((edi & 0xffffu));
L_00492a55:  // mov word ptr [esp + 0x22], bp
    M16((uint32_t)(esp + 0x22u)) = (uint16_t)((ebp & 0xffffu));
L_00492a5a:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00492a5e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00492a5f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00492a60:  // call 0x492860
    t0 = 0x00492860u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00492a65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00492a65:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00492a69:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00492a6d:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00492a6e:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00492a70:  // jl 0x4929e6
    if ((f.sf != f.of)) goto L_004929e6;
L_00492a76:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00492a7a:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_00492a7b:  // cmp ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
L_00492a7d:  // jl 0x4929dc
    if ((f.sf != f.of)) goto L_004929dc;
L_00492a83:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00492a85:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_00492a87:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00492a88:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00492a89:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_00492a8c:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00492a90:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00492a94:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00492a98:  // jle 0x4929d2
    if ((f.zf || f.sf != f.of)) goto L_004929d2;
L_00492a9e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00492a9f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00492aa0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00492aa1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00492aa2:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00492aa5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00492950, 00492950)
