// lifted from 0046fb80 (FUN_0046fb80, 191 bytes, 68 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0046fb80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0046fb80;
L_0046fb80:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046fb81:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0046fb82:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0046fb84:  // mov ecx, dword ptr [edi + 0x9f8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x9f8u)));
L_0046fb8a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0046fb8c:  // je 0x46fc3c
    if (f.zf) goto L_0046fc3c;
L_0046fb92:  // mov edx, dword ptr [edi + 0xa00]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xa00u)));
L_0046fb98:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0046fb99:  // mov dword ptr [edi + 0xa00], edx
    M32((uint32_t)(edi + 0xa00u)) = (uint32_t)(edx);
L_0046fb9f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0046fba1:  // call dword ptr [eax + 0x144]
    t0 = M32((uint32_t)(eax + 0x144u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fba7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fba7:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0046fba9:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0046fbab:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fbad:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0046fbb0:  // je 0x46fbb6
    if (f.zf) goto L_0046fbb6;
L_0046fbb2:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0046fbb4:  // jmp 0x46fbb8
    goto L_0046fbb8;
L_0046fbb6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0046fbb8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046fbb9:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0046fbbb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fbbd:  // jne 0x46fbd7
    if (!f.zf) goto L_0046fbd7;
L_0046fbbf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046fbc0:  // lea ecx, [edi + 0xa04]
    ecx = (uint32_t)((uint32_t)(edi + 0xa04u));
L_0046fbc6:  // mov dword ptr [edi + 0xa00], 0xffffffff
    M32((uint32_t)(edi + 0xa00u)) = (uint32_t)(0xffffffffu);
L_0046fbd0:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fbd5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fbd5:  // jmp 0x46fc25
    goto L_0046fc25;
L_0046fbd7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046fbd8:  // lea ebp, [edi + 0xa04]
    ebp = (uint32_t)((uint32_t)(edi + 0xa04u));
L_0046fbde:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046fbdf:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0046fbe1:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fbe6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fbe6:  // mov ecx, dword ptr [edi + 0xa00]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xa00u)));
L_0046fbec:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0046fbee:  // jle 0x46fc1c
    if ((f.zf || f.sf != f.of)) goto L_0046fc1c;
L_0046fbf0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0046fbf2:  // je 0x46fc1c
    if (f.zf) goto L_0046fc1c;
L_0046fbf4:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0046fbf7:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0046fbfa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fbfc:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_0046fbff:  // je 0x46fc10
    if (f.zf) goto L_0046fc10;
L_0046fc01:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0046fc03:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0046fc05:  // je 0x46fc10
    if (f.zf) goto L_0046fc10;
L_0046fc07:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0046fc08:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0046fc0a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0046fc0c:  // jle 0x46fc1c
    if ((f.zf || f.sf != f.of)) goto L_0046fc1c;
L_0046fc0e:  // jmp 0x46fbf0
    goto L_0046fbf0;
L_0046fc10:  // mov dword ptr [edi + 0xa00], 0xffffffff
    M32((uint32_t)(edi + 0xa00u)) = (uint32_t)(0xffffffffu);
L_0046fc1a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0046fc1c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046fc1d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0046fc1f:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fc24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fc24:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046fc25:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0046fc27:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046fc28:  // je 0x46fc3c
    if (f.zf) goto L_0046fc3c;
L_0046fc2a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0046fc2c:  // call 0x42f220
    t0 = 0x0042f220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fc31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fc31:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046fc32:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0046fc37:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046fc3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046fc3c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0046fc3d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046fc3e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0046fb80, 0046fb80)
