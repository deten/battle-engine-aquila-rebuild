// lifted from 0043d2e0 (vslot1, 192 bytes, 76 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043d2e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043d2e0;
L_0043d2e0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043d2e1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043d2e2:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0043d2e6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043d2e7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043d2e9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043d2ea:  // je 0x43d399
    if (f.zf) goto L_0043d399;
L_0043d2f0:  // mov edx, dword ptr [0x855400]
    edx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_0043d2f6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043d2f8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d2fa:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043d2fd:  // je 0x43d303
    if (f.zf) goto L_0043d303;
L_0043d2ff:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043d301:  // jmp 0x43d305
    goto L_0043d305;
L_0043d303:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d305:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d307:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043d309:  // je 0x43d399
    if (f.zf) goto L_0043d399;
L_0043d30f:  // mov esi, dword ptr [edi + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xb0u)));
L_0043d315:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0043d317:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043d319:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043d31b:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043d31d:  // jne 0x43d33b
    if (!f.zf) goto L_0043d33b;
L_0043d31f:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043d321:  // je 0x43d337
    if (f.zf) goto L_0043d337;
L_0043d323:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043d326:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043d328:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043d32b:  // jne 0x43d33b
    if (!f.zf) goto L_0043d33b;
L_0043d32d:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043d330:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043d333:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043d335:  // jne 0x43d317
    if (!f.zf) goto L_0043d317;
L_0043d337:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d339:  // jmp 0x43d340
    goto L_0043d340;
L_0043d33b:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043d33d:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043d340:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d342:  // je 0x43d36a
    if (f.zf) goto L_0043d36a;
L_0043d344:  // mov edx, dword ptr [0x855400]
    edx = (uint32_t)(M32((uint32_t)(0x855400u)));
L_0043d34a:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043d34d:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043d350:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d352:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043d355:  // je 0x43d35b
    if (f.zf) goto L_0043d35b;
L_0043d357:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043d359:  // jmp 0x43d35d
    goto L_0043d35d;
L_0043d35b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043d35d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043d35f:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043d361:  // jne 0x43d30f
    if (!f.zf) goto L_0043d30f;
L_0043d363:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d364:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d365:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d366:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d367:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0043d36a:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043d36c:  // je 0x43d399
    if (f.zf) goto L_0043d399;
L_0043d36e:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0043d371:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0043d377:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0043d379:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0043d37c:  // jne 0x43d38f
    if (!f.zf) goto L_0043d38f;
L_0043d37e:  // mov dword ptr [edi + 0x134], 1
    M32((uint32_t)(edi + 0x134u)) = (uint32_t)(0x1u);
L_0043d388:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d389:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d38a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d38b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d38c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0043d38f:  // mov dword ptr [edi + 0x134], 0
    M32((uint32_t)(edi + 0x134u)) = (uint32_t)(0x0u);
L_0043d399:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043d39a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043d39b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043d39c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043d39d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0043d2e0, 0043d2e0)
