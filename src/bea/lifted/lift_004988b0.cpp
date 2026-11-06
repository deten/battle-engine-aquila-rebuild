// lifted from 004988b0 (FUN_004988b0, 824 bytes, 217 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004988b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004988b0;
L_004988b0:  // sub esp, 0x5c
    t0 = lsub<32>(esp, 0x5cu, f);
    esp = (uint32_t)(t0);
L_004988b3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004988b4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004988b5:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004988b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004988b8:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004988ba:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004988bb:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_004988be:  // mov edi, dword ptr [esp + 0x70]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004988c2:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004988c4:  // mov dword ptr [ebp + 0x54], eax
    M32((uint32_t)(ebp + 0x54u)) = (uint32_t)(eax);
L_004988c7:  // jne 0x4988e3
    if (!f.zf) goto L_004988e3;
L_004988c9:  // cmp dword ptr [0x8a9ac0], 2
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac0u)), 0x2u, f);
L_004988d0:  // jl 0x4988e3
    if ((f.sf != f.of)) goto L_004988e3;
L_004988d2:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_004988d4:  // jne 0x4988e3
    if (!f.zf) goto L_004988e3;
L_004988d6:  // cmp dword ptr [ebp + 0xcc], 5
    t0 = lsub<32>(M32((uint32_t)(ebp + 0xccu)), 0x5u, f);
L_004988dd:  // jge 0x498bde
    if ((f.sf == f.of)) goto L_00498bde;
L_004988e3:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004988e6:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004988e8:  // je 0x498bde
    if (f.zf) goto L_00498bde;
L_004988ee:  // mov ecx, dword ptr [eax + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x28u)));
L_004988f1:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004988f3:  // je 0x498bde
    if (f.zf) goto L_00498bde;
L_004988f9:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004988fb:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004988feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004988fe:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00498900:  // je 0x498bde
    if (f.zf) goto L_00498bde;
L_00498906:  // mov ecx, dword ptr [eax + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_0049890c:  // mov ebx, dword ptr [ecx]
    ebx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049890e:  // cmp ebx, esi
    t0 = lsub<32>(ebx, esi, f);
L_00498910:  // je 0x498bde
    if (f.zf) goto L_00498bde;
L_00498916:  // mov ecx, dword ptr [ebp + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xccu)));
L_0049891c:  // mov dword ptr [esp + 0x2c], 0x3f800000
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x3f800000u);
L_00498924:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00498928:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00498929:  // mov dword ptr [ebp + 0xcc], ecx
    M32((uint32_t)(ebp + 0xccu)) = (uint32_t)(ecx);
L_0049892f:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00498937:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0049893b:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_00498943:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00498947:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_0049894b:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0049894f:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00498953:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_00498957:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_0049895f:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00498963:  // mov dword ptr [esp + 0x30], 0x3f800000
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x3f800000u);
L_0049896b:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0049896f:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_00498973:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_0049897b:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0049897f:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_00498983:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00498987:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_0049898b:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_00498993:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00498997:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_0049899b:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_0049899f:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_004989a7:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004989ab:  // mov dword ptr [esp + 0x34], 0x3f800000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x3f800000u);
L_004989b3:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004989b7:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_004989bb:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004989bf:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_004989c1:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004989c9:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_004989d1:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_004989d9:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004989dd:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_004989e1:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_004989e5:  // jne 0x498ae3
    if (!f.zf) goto L_00498ae3;
L_004989eb:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004989f1:  // fsub dword ptr [ebp + 0x4c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4cu)));
L_004989f4:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004989f8:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004989fc:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00498a00:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00498a05:  // lea esi, [esp + 0x3c]
    esi = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00498a09:  // lea edi, [esp + 0x3c]
    edi = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00498a0d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00498a11:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00498a13:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00498a17:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_00498a1b:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00498a1f:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00498a23:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00498a27:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_00498a2b:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00498a2f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00498a31:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00498a35:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00498a36:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00498a3a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00498a3b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00498a3c:  // lea eax, [esp + 0x4c]
    eax = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00498a40:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00498a41:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00498a45:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00498a46:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00498a47:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00498a49:  // mov dword ptr [esp + 0x34], 0xffffffff
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xffffffffu);
L_00498a51:  // call 0x499e30
    t0 = 0x00499e30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00498a56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00498a56:  // mov eax, dword ptr [ebx + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_00498a5c:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_00498a64:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00498a66:  // jle 0x498bc5
    if ((f.zf || f.sf != f.of)) goto L_00498bc5;
L_00498a6c:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00498a70:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00498a74:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00498a78:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00498a7a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00498a7b:  // mov edx, dword ptr [ebx + 0x94]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_00498a81:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00498a82:  // mov eax, dword ptr [esp + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00498a86:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00498a87:  // lea esi, [esp + 0x4c]
    esi = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00498a8b:  // mov ecx, dword ptr [edx + eax*4]
    ecx = (uint32_t)(M32((uint32_t)(edx + eax * 4u)));
L_00498a8e:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00498a92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00498a93:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00498a98:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00498a9b:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00498a9d:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00498aa0:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00498aa2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00498aa4:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_00498aab:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00498aad:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00498ab4:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00498ab7:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_00498abe:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00498ac1:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00498ac4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00498ac6:  // call 0x49bd50
    t0 = 0x0049bd50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00498acbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00498acb:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_00498acf:  // mov ecx, dword ptr [ebx + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_00498ad5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00498ad6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00498ad8:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00498adc:  // jl 0x498a6c
    if ((f.sf != f.of)) goto L_00498a6c;
L_00498ade:  // jmp 0x498bc5
    goto L_00498bc5;
L_00498ae3:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00498ae7:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00498aeb:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_00498aef:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00498af4:  // lea esi, [esp + 0x3c]
    esi = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00498af8:  // lea edi, [esp + 0x3c]
    edi = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00498afc:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00498afe:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00498b02:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_00498b06:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00498b0a:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00498b0e:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_00498b12:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00498b14:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00498b18:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_00498b1d:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00498b21:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_00498b25:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00498b26:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00498b27:  // lea edx, [esp + 0x4c]
    edx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00498b2b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00498b2c:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_00498b30:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00498b31:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00498b32:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00498b34:  // mov dword ptr [esp + 0x30], 0xffffffff
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0xffffffffu);
L_00498b3c:  // call 0x499e30
    t0 = 0x00499e30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00498b41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00498b41:  // mov eax, dword ptr [ebx + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_00498b47:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_00498b4f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00498b51:  // jle 0x498bc5
    if ((f.zf || f.sf != f.of)) goto L_00498bc5;
L_00498b53:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00498b57:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00498b5b:  // mov eax, dword ptr [ebx + 0x94]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_00498b61:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00498b63:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_00498b68:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00498b69:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00498b6d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00498b6e:  // lea esi, [esp + 0x4c]
    esi = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00498b72:  // mov edx, dword ptr [eax + ecx*4]
    edx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_00498b75:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00498b7a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00498b7b:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00498b7f:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00498b82:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00498b84:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00498b87:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00498b89:  // mov ecx, dword ptr [esp + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_00498b90:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00498b92:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00498b94:  // mov ecx, dword ptr [esp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00498b9b:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00498b9e:  // mov edx, dword ptr [esp + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_00498ba5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00498ba8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00498baa:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00498bad:  // call 0x49bd50
    t0 = 0x0049bd50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00498bb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00498bb2:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_00498bb6:  // mov ecx, dword ptr [ebx + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_00498bbc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00498bbd:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00498bbf:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00498bc3:  // jl 0x498b53
    if ((f.sf != f.of)) goto L_00498b53;
L_00498bc5:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00498bca:  // mov dword ptr [ebp + 0x50], 0
    M32((uint32_t)(ebp + 0x50u)) = (uint32_t)(0x0u);
L_00498bd1:  // mov dword ptr [ebp + 0x4c], eax
    M32((uint32_t)(ebp + 0x4cu)) = (uint32_t)(eax);
L_00498bd4:  // mov dword ptr [ebp + 0xc8], 1
    M32((uint32_t)(ebp + 0xc8u)) = (uint32_t)(0x1u);
L_00498bde:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00498bdf:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00498be0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00498be1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00498be2:  // add esp, 0x5c
    t0 = ladd<32>(esp, 0x5cu, f);
    esp = (uint32_t)(t0);
L_00498be5:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004988b0, 004988b0)
