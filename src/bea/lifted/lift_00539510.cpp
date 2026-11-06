// lifted from 00539510 (FUN_00539510, 156 bytes, 50 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00539510(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00539510;
L_00539510:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00539512:  // push 0x5d7580
    t0 = 0x5d7580u; esp -= 4; M32(esp) = t0;
L_00539517:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0053951d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053951e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00539525:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00539528:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00539529:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0053952b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053952c:  // mov dword ptr [esp + 8], ebp
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ebp);
L_00539530:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00539533:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00539535:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00539537:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0053953f:  // jle 0x53958c
    if ((f.zf || f.sf != f.of)) goto L_0053958c;
L_00539541:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00539542:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_00539545:  // mov esi, dword ptr [eax + edi*4]
    esi = (uint32_t)(M32((uint32_t)(eax + edi * 4u)));
L_00539548:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0053954a:  // je 0x539583
    if (f.zf) goto L_00539583;
L_0053954c:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00539550:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00539553:  // mov byte ptr [esp + 0x1c], 1
    M8((uint32_t)(esp + 0x1cu)) = (uint8_t)(0x1u);
L_00539558:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053955a:  // je 0x539562
    if (f.zf) goto L_00539562;
L_0053955c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053955e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00539560:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539562u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539562:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00539564:  // mov byte ptr [esp + 0x1c], 0
    M8((uint32_t)(esp + 0x1cu)) = (uint8_t)(0x0u);
L_00539569:  // call 0x52f740
    t0 = 0x0052f740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0053956eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0053956e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053956f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00539574:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539579u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539579:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0053957c:  // mov dword ptr [eax + edi*4], 0
    M32((uint32_t)(eax + edi * 4u)) = (uint32_t)(0x0u);
L_00539583:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_00539586:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00539587:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_00539589:  // jl 0x539542
    if ((f.sf != f.of)) goto L_00539542;
L_0053958b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053958c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0053958e:  // mov dword ptr [esp + 0x18], 0xffffffff
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0xffffffffu);
L_00539596:  // call 0x465570
    t0 = 0x00465570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0053959bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0053959b:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053959f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005395a0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005395a1:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005395a8:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_005395ab:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00539510, 00539510)
