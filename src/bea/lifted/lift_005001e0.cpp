// lifted from 005001e0 (FUN_005001e0, 100 bytes, 50 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005001e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005001e0;
L_005001e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005001e1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005001e2:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_005001e4:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_005001e7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005001e9:  // je 0x50023f
    if (f.zf) goto L_0050023f;
L_005001eb:  // mov cl, byte ptr [ebx + 0x28]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x28u))) & 0xffu);
L_005001ee:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_005001f0:  // je 0x500236
    if (f.zf) goto L_00500236;
L_005001f2:  // lea edx, [esp + 4]
    edx = (uint32_t)((uint32_t)(esp + 0x4u));
L_005001f6:  // push 0x800
    t0 = 0x800u; esp -= 4; M32(esp) = t0;
L_005001fb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005001fc:  // mov byte ptr [ebx + 0x28], 0
    M8((uint32_t)(ebx + 0x28u)) = (uint8_t)(0x0u);
L_00500200:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00500202:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00500204:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00500206:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00500207:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050020au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050020a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050020c:  // jl 0x500241
    if ((f.sf != f.of)) goto L_00500241;
L_0050020e:  // mov ecx, dword ptr [ebx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_00500211:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00500212:  // mov esi, dword ptr [ebx + 0x24]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x24u)));
L_00500215:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00500217:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00500218:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0050021c:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0050021f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00500221:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00500223:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00500226:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00500228:  // mov ebx, dword ptr [ebx + 8]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0050022b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050022c:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_0050022e:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00500231u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00500231:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00500232:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00500233:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00500234:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00500235:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00500236:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00500238:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00500239:  // call dword ptr [edx + 0x30]
    t0 = M32((uint32_t)(edx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050023cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050023c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0050023d:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0050023e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0050023f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00500241:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00500242:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00500243:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x005001e0, 005001e0)
