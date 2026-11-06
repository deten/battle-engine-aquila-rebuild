// lifted from 0043d3a0 (vslot1, 192 bytes, 76 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043d3a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043d3a0;
L_0043d3a0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043d3a1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043d3a2:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0043d3a6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043d3a7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043d3a9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043d3aa:  // je 0x43d459
    if (f.zf) goto L_0043d459;
L_0043d3b0:  // mov edx, dword ptr [0x855400]
    edx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_0043d3b6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043d3b8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d3ba:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043d3bd:  // je 0x43d3c3
    if (f.zf) goto L_0043d3c3;
L_0043d3bf:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043d3c1:  // jmp 0x43d3c5
    goto L_0043d3c5;
L_0043d3c3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d3c5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d3c7:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043d3c9:  // je 0x43d459
    if (f.zf) goto L_0043d459;
L_0043d3cf:  // mov esi, dword ptr [edi + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xb0u)));
L_0043d3d5:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0043d3d7:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043d3d9:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043d3db:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043d3dd:  // jne 0x43d3fb
    if (!f.zf) goto L_0043d3fb;
L_0043d3df:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043d3e1:  // je 0x43d3f7
    if (f.zf) goto L_0043d3f7;
L_0043d3e3:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043d3e6:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043d3e8:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043d3eb:  // jne 0x43d3fb
    if (!f.zf) goto L_0043d3fb;
L_0043d3ed:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043d3f0:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043d3f3:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043d3f5:  // jne 0x43d3d7
    if (!f.zf) goto L_0043d3d7;
L_0043d3f7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d3f9:  // jmp 0x43d400
    goto L_0043d400;
L_0043d3fb:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043d3fd:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043d400:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d402:  // je 0x43d42a
    if (f.zf) goto L_0043d42a;
L_0043d404:  // mov edx, dword ptr [0x855400]
    edx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_0043d40a:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043d40d:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043d410:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d412:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043d415:  // je 0x43d41b
    if (f.zf) goto L_0043d41b;
L_0043d417:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043d419:  // jmp 0x43d41d
    goto L_0043d41d;
L_0043d41b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d41d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d41f:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043d421:  // jne 0x43d3cf
    if (!f.zf) goto L_0043d3cf;
L_0043d423:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d424:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d425:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d426:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d427:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0043d42a:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043d42c:  // je 0x43d459
    if (f.zf) goto L_0043d459;
L_0043d42e:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0043d431:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0043d437:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0043d439:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0043d43c:  // jne 0x43d44f
    if (!f.zf) goto L_0043d44f;
L_0043d43e:  // mov dword ptr [edi + 0x108], 1
    M32((uint32_t)(edi + 0x108u)) = (uint32_t)(0x1u);
L_0043d448:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d449:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d44a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d44b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d44c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0043d44f:  // mov dword ptr [edi + 0x108], 0
    M32((uint32_t)(edi + 0x108u)) = (uint32_t)(0x0u);
L_0043d459:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d45a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d45b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d45c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d45d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0043d3a0, 0043d3a0)
