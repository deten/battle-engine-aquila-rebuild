// lifted from 0049bd50 (FUN_0049bd50, 167 bytes, 63 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0049bd50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0049bd50;
L_0049bd50:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049bd51:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0049bd55:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0049bd59:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049bd5a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049bd5b:  // mov ebp, dword ptr [esp + 0x50]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0049bd5f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049bd60:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049bd61:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049bd62:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049bd63:  // lea eax, [esp + 0x68]
    eax = (uint32_t)((uint32_t)(esp + 0x68u));
L_0049bd67:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0049bd6b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049bd6c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049bd6d:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_0049bd71:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049bd72:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0049bd76:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049bd77:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049bd78:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_0049bd7c:  // call 0x499e30
    t0 = 0x00499e30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0049bd81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0049bd81:  // mov eax, dword ptr [ebp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x90u)));
L_0049bd87:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0049bd89:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049bd8b:  // jle 0x49bdef
    if ((f.zf || f.sf != f.of)) goto L_0049bdef;
L_0049bd8d:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0049bd91:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0049bd95:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0049bd99:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049bd9a:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0049bd9e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049bd9f:  // mov ecx, dword ptr [ebp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x94u)));
L_0049bda5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049bda6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049bda7:  // lea esi, [esp + 0x38]
    esi = (uint32_t)((uint32_t)(esp + 0x38u));
L_0049bdab:  // mov edx, dword ptr [ecx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_0049bdae:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049bdb3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049bdb4:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0049bdb8:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0049bdbb:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0049bdbd:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0049bdc0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049bdc2:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0049bdc6:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0049bdc8:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0049bdca:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0049bdce:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0049bdd1:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0049bdd5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0049bdd8:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0049bddc:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0049bddf:  // call 0x49bd50
    t0 = 0x0049bd50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0049bde4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0049bde4:  // mov eax, dword ptr [ebp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x90u)));
L_0049bdea:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0049bdeb:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_0049bded:  // jl 0x49bd8d
    if ((f.sf != f.of)) goto L_0049bd8d;
L_0049bdef:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0049bdf0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0049bdf1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049bdf2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049bdf3:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0049bdf4:  // ret 0x54
    c->target = M32(esp); esp += 88u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0049bd50, 0049bd50)
