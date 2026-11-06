// lifted from 004883f0 (FUN_004883f0, 100 bytes, 50 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004883f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004883f0;
L_004883f0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004883f1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004883f2:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004883f4:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004883f7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004883f9:  // je 0x48844f
    if (f.zf) goto L_0048844f;
L_004883fb:  // mov cl, byte ptr [ebx + 0x20]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x20u))) & 0xffu);
L_004883fe:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_00488400:  // je 0x488446
    if (f.zf) goto L_00488446;
L_00488402:  // lea edx, [esp + 4]
    edx = (uint32_t)((uint32_t)(esp + 0x4u));
L_00488406:  // push 0x800
    t0 = 0x800u; esp -= 4; M32(esp) = t0;
L_0048840b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048840c:  // mov byte ptr [ebx + 0x20], 0
    M8((uint32_t)(ebx + 0x20u)) = (uint8_t)(0x0u);
L_00488410:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00488412:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00488414:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00488416:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00488417:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048841au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048841a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048841c:  // jl 0x488451
    if ((f.sf != f.of)) goto L_00488451;
L_0048841e:  // mov ecx, dword ptr [ebx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00488421:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00488422:  // mov esi, dword ptr [ebx + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x1cu)));
L_00488425:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00488427:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00488428:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0048842c:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0048842f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00488431:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00488433:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00488436:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00488438:  // mov ebx, dword ptr [ebx + 8]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0048843b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048843c:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_0048843e:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00488441u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00488441:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00488442:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00488443:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00488444:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00488445:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00488446:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00488448:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00488449:  // call dword ptr [edx + 0x30]
    t0 = M32((uint32_t)(edx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048844cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048844c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048844d:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0048844e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0048844f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00488451:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00488452:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00488453:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004883f0, 004883f0)
