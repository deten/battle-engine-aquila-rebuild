// lifted from 004b4ba0 (FUN_004b4ba0, 289 bytes, 94 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b4ba0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b4ba0;
L_004b4ba0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4ba1:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004b4ba5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b4ba6:  // mov ebx, dword ptr [esp + 0x4c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004b4baa:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b4bab:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004b4bad:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b4bae:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004b4bb2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b4bb3:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004b4bb7:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_004b4bbb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4bbc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b4bbd:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b4bc1:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004b4bc5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b4bc6:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004b4bca:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b4bcb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4bcc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b4bcd:  // call 0x4b5330
    t0 = 0x004b5330u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b4bd2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b4bd2:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_004b4bd8:  // mov esi, dword ptr [ebp]
    esi = (uint32_t)(M32((uint32_t)(ebp)));
L_004b4bdb:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b4be0:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004b4be3:  // lea edi, [eax + eax*2]
    edi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b4be6:  // mov dword ptr [esp + 0x58], 0
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x0u);
L_004b4bee:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_004b4bf1:  // add edi, esi
    t0 = ladd<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_004b4bf3:  // lea esi, [esp + 0x28]
    esi = (uint32_t)((uint32_t)(esp + 0x28u));
L_004b4bf7:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b4bf9:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_004b4bff:  // mov ecx, dword ptr [ebp + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004b4c02:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004b4c05:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b4c07:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b4c0b:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b4c0d:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b4c11:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004b4c14:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b4c18:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b4c1b:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b4c1f:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b4c22:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b4c26:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_004b4c2c:  // mov ecx, dword ptr [ebp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004b4c2f:  // mov edx, dword ptr [edx + 0x88]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x88u)));
L_004b4c35:  // mov dword ptr [ecx + eax*4], edx
    M32((uint32_t)(ecx + eax * 4u)) = (uint32_t)(edx);
L_004b4c38:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_004b4c3e:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004b4c41:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b4c45:  // mov dword ptr [ecx + eax*4], edx
    M32((uint32_t)(ecx + eax * 4u)) = (uint32_t)(edx);
L_004b4c48:  // mov eax, dword ptr [ebx + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_004b4c4e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b4c50:  // jle 0x4b4cb9
    if ((f.zf || f.sf != f.of)) goto L_004b4cb9;
L_004b4c52:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b4c56:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004b4c5a:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004b4c5e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b4c5f:  // mov eax, dword ptr [ebx + 0x94]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_004b4c65:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4c66:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004b4c6a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b4c6b:  // lea esi, [esp + 0x34]
    esi = (uint32_t)((uint32_t)(esp + 0x34u));
L_004b4c6f:  // mov edx, dword ptr [eax + ecx*4]
    edx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_004b4c72:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b4c77:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b4c78:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b4c7c:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b4c7f:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004b4c81:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b4c84:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b4c86:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004b4c8a:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004b4c8c:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b4c8e:  // mov ecx, dword ptr [esp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004b4c92:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004b4c95:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b4c99:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b4c9c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b4c9e:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b4ca1:  // call 0x4b4ba0
    t0 = 0x004b4ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b4ca6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b4ca6:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004b4caa:  // mov ecx, dword ptr [ebx + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_004b4cb0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b4cb1:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004b4cb3:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_004b4cb7:  // jl 0x4b4c52
    if ((f.sf != f.of)) goto L_004b4c52;
L_004b4cb9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b4cba:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b4cbb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b4cbc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b4cbd:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_004b4cbe:  // ret 0x50
    c->target = M32(esp); esp += 84u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004b4ba0, 004b4ba0)
