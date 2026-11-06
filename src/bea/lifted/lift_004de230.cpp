// lifted from 004de230 (FUN_004de230, 120 bytes, 38 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004de230(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004de230;
L_004de230:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004de232:  // push 0x5d4ac8
    t0 = 0x5d4ac8u; esp -= 4; M32(esp) = t0;
L_004de237:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004de23d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004de23e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004de245:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004de246:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004de247:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004de249:  // mov dword ptr [esp + 4], esi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(esi);
L_004de24d:  // mov edx, dword ptr [0x83cde8]
    edx = (uint32_t)(M32((uint32_t)(0x83cde8u)));
L_004de253:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004de25b:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_004de25c:  // mov dword ptr [0x83cde8], edx
    M32((uint32_t)(0x83cde8u)) = (uint32_t)(edx);
L_004de262:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004de265:  // lea edx, [esi + 0xc]
    edx = (uint32_t)((uint32_t)(esi + 0xcu));
L_004de268:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004de26a:  // je 0x4de27b
    if (f.zf) goto L_004de27b;
L_004de26c:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004de26f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004de271:  // je 0x4de27b
    if (f.zf) goto L_004de27b;
L_004de273:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004de274:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004de276:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004de27bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004de27b:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004de27d:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_004de285:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004de287:  // je 0x4de298
    if (f.zf) goto L_004de298;
L_004de289:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004de28c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004de28e:  // je 0x4de298
    if (f.zf) goto L_004de298;
L_004de290:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004de291:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004de293:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004de298u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004de298:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004de29c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004de29d:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004de2a4:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004de2a7:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004de230, 004de230)
