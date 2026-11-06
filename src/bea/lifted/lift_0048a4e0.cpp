// lifted from 0048a4e0 (FUN_0048a4e0, 142 bytes, 42 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048a4e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048a4e0;
L_0048a4e0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0048a4e2:  // push 0x5d2f1e
    t0 = 0x5d2f1eu; esp -= 4; M32(esp) = t0;
L_0048a4e7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0048a4ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048a4ee:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0048a4f5:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0048a4f8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048a4f9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048a4fa:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0048a4fc:  // mov dword ptr [esp + 8], edi
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(edi);
L_0048a500:  // mov eax, dword ptr [edi + 0x44]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x44u)));
L_0048a503:  // lea edx, [edi + 0x44]
    edx = (uint32_t)((uint32_t)(edi + 0x44u));
L_0048a506:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048a508:  // mov dword ptr [esp + 0x18], 1
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x1u);
L_0048a510:  // je 0x48a521
    if (f.zf) goto L_0048a521;
L_0048a512:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0048a515:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048a517:  // je 0x48a521
    if (f.zf) goto L_0048a521;
L_0048a519:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048a51a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048a51c:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048a521u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048a521:  // lea esi, [edi + 0x24]
    esi = (uint32_t)((uint32_t)(edi + 0x24u));
L_0048a524:  // mov dword ptr [esp + 0xc], esi
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(esi);
L_0048a528:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0048a52b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0048a530:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048a531:  // mov byte ptr [esp + 0x1c], 2
    M8((uint32_t)(esp + 0x1cu)) = (uint8_t)(0x2u);
L_0048a536:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048a53bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048a53b:  // mov esi, dword ptr [esi + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_0048a53e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0048a543:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048a544:  // mov byte ptr [esp + 0x1c], 0
    M8((uint32_t)(esp + 0x1cu)) = (uint8_t)(0x0u);
L_0048a549:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048a54eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048a54e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048a550:  // mov dword ptr [esp + 0x18], 0xffffffff
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0xffffffffu);
L_0048a558:  // call 0x4bac40
    t0 = 0x004bac40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048a55du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048a55d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048a561:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048a562:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048a563:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0048a56a:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0048a56d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0048a4e0, 0048a4e0)
