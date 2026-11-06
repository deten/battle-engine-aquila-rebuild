// lifted from 00494940 (vslot5, 409 bytes, 109 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00494940(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00494940;
L_00494940:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00494946:  // sub esp, 0x50
    t0 = lsub<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_00494949:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049494a:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0049494c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049494d:  // mov ebp, dword ptr [esp + 0x5c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00494951:  // fcomp dword ptr [ebx + 0x3c]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x3cu)));
    lpop(x);
L_00494954:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00494955:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00494956:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00494958:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0049495b:  // jne 0x494a89
    if (!f.zf) goto L_00494a89;
L_00494961:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_00494969:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0049496d:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00494975:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00494979:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0049497d:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00494981:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00494989:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049498d:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_00494991:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_00494995:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0049499d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004949a1:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004949a9:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004949ad:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004949b1:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_004949b9:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004949bd:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004949c1:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004949c5:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_004949c9:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004949d1:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004949d5:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_004949d9:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_004949e1:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004949e5:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_004949e9:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_004949ef:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004949f3:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004949fb:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004949ff:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_00494a03:  // mov ecx, dword ptr [eax + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_00494a09:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_00494a0d:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00494a11:  // mov esi, dword ptr [ecx]
    esi = (uint32_t)(M32((uint32_t)(ecx)));
L_00494a13:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_00494a18:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00494a20:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00494a28:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_00494a30:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_00494a34:  // call 0x44a0c0
    t0 = 0x0044a0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494a39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494a39:  // fsub dword ptr [ebx + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x3cu)));
L_00494a3c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00494a3d:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00494a41:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00494a46:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00494a49:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00494a4b:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00494a4d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00494a4e:  // lea esi, [esp + 0x40]
    esi = (uint32_t)((uint32_t)(esp + 0x40u));
L_00494a52:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00494a55:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00494a57:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00494a5a:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00494a5c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00494a5e:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_00494a62:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00494a64:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_00494a68:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00494a6b:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00494a6f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00494a72:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00494a75:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00494a77:  // call 0x4934f0
    t0 = 0x004934f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494a7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494a7c:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_00494a81:  // call 0x44a0c0
    t0 = 0x0044a0c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00494a86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00494a86:  // fstp dword ptr [ebx + 0x3c]
    F32((uint32_t)(ebx + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00494a89:  // mov eax, dword ptr [ebp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x88u)));
L_00494a8f:  // mov edx, dword ptr [ebx + 0x38]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x38u)));
L_00494a92:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00494a95:  // lea ecx, [edx + eax]
    ecx = (uint32_t)((uint32_t)(edx + eax));
L_00494a98:  // mov edx, dword ptr [edx + eax]
    edx = (uint32_t)(M32((uint32_t)(edx + eax)));
L_00494a9b:  // cmp edx, 0xbf800000
    t0 = lsub<32>(edx, 0xbf800000u, f);
L_00494aa1:  // je 0x494ac3
    if (f.zf) goto L_00494ac3;
L_00494aa3:  // mov edx, dword ptr [ebx + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_00494aa6:  // fld dword ptr [edx + eax]
    lpush(x, (long double)F32((uint32_t)(edx + eax)));
L_00494aa9:  // fsub dword ptr [ecx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx)));
L_00494aab:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00494aaf:  // fmul dword ptr [0x8a9e44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x8a9e44u)));
L_00494ab5:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_00494ab7:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00494ab9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00494aba:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00494abb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00494abc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00494abd:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_00494ac0:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00494ac3:  // mov ecx, dword ptr [ebx + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x2cu)));
L_00494ac6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00494ac7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00494ac8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00494ac9:  // mov edx, dword ptr [ecx + eax]
    edx = (uint32_t)(M32((uint32_t)(ecx + eax)));
L_00494acc:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00494ad0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00494ad1:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00494ad3:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_00494ad6:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00494940, 00494940)
