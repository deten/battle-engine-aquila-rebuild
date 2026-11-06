// lifted from 004c44f0 (vslot7, 104 bytes, 42 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c44f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c44f0;
L_004c44f0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c44f1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c44f3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c44f4:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c44f8:  // lea eax, [esi + 0x5c]
    eax = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c44fb:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c44fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c44fe:  // push 0x55
    t0 = 0x55u; esp -= 4; M32(esp) = t0;
L_004c4500:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4505u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4505:  // mov ecx, dword ptr [esi + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c4508:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c4509:  // push 0x56
    t0 = 0x56u; esp -= 4; M32(esp) = t0;
L_004c450b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c450d:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4512u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4512:  // mov edx, dword ptr [esi + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c4515:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4517:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c4518:  // push 0x57
    t0 = 0x57u; esp -= 4; M32(esp) = t0;
L_004c451a:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c451fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c451f:  // mov eax, dword ptr [esi + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6cu)));
L_004c4522:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4524:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c4525:  // push 0x58
    t0 = 0x58u; esp -= 4; M32(esp) = t0;
L_004c4527:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c452cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c452c:  // mov ecx, dword ptr [esi + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_004c452f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c4530:  // push 0x59
    t0 = 0x59u; esp -= 4; M32(esp) = t0;
L_004c4532:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c4534:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4539u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4539:  // mov edx, dword ptr [esi + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004c453c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c453e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c453f:  // push 0x5a
    t0 = 0x5au; esp -= 4; M32(esp) = t0;
L_004c4541:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4546u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4546:  // mov eax, dword ptr [esi + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_004c4549:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c454b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c454c:  // push 0x5b
    t0 = 0x5bu; esp -= 4; M32(esp) = t0;
L_004c454e:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c4553u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c4553:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c4554:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c4555:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c44f0, 004c44f0)
