// lifted from 0043a7b0 (vslot1, 144 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043a7b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043a7b0;
L_0043a7b0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043a7b1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043a7b2:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0043a7b6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043a7b7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043a7b9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043a7ba:  // je 0x43a839
    if (f.zf) goto L_0043a839;
L_0043a7bc:  // mov edx, dword ptr [0x8553f4]
    edx = (uint32_t)(M32((uint32_t)(0x8553f4u)));
L_0043a7c2:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043a7c4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a7c6:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043a7c9:  // je 0x43a7cf
    if (f.zf) goto L_0043a7cf;
L_0043a7cb:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043a7cd:  // jmp 0x43a7d1
    goto L_0043a7d1;
L_0043a7cf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043a7d1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a7d3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043a7d5:  // je 0x43a839
    if (f.zf) goto L_0043a839;
L_0043a7d7:  // mov esi, dword ptr [edi + 8]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0043a7da:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0043a7dc:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043a7de:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043a7e0:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043a7e2:  // jne 0x43a800
    if (!f.zf) goto L_0043a800;
L_0043a7e4:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043a7e6:  // je 0x43a7fc
    if (f.zf) goto L_0043a7fc;
L_0043a7e8:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043a7eb:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043a7ed:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043a7f0:  // jne 0x43a800
    if (!f.zf) goto L_0043a800;
L_0043a7f2:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043a7f5:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043a7f8:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043a7fa:  // jne 0x43a7dc
    if (!f.zf) goto L_0043a7dc;
L_0043a7fc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043a7fe:  // jmp 0x43a805
    goto L_0043a805;
L_0043a800:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043a802:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043a805:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a807:  // je 0x43a82f
    if (f.zf) goto L_0043a82f;
L_0043a809:  // mov edx, dword ptr [0x8553f4]
    edx = (uint32_t)(M32((uint32_t)(0x8553f4u)));
L_0043a80f:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043a812:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043a815:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a817:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043a81a:  // je 0x43a820
    if (f.zf) goto L_0043a820;
L_0043a81c:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043a81e:  // jmp 0x43a822
    goto L_0043a822;
L_0043a820:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043a822:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043a824:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043a826:  // jne 0x43a7d7
    if (!f.zf) goto L_0043a7d7;
L_0043a828:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043a829:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043a82a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043a82b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043a82c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0043a82f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043a831:  // je 0x43a839
    if (f.zf) goto L_0043a839;
L_0043a833:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0043a836:  // mov dword ptr [edi + 0x24], ecx
    M32((uint32_t)(edi + 0x24u)) = (uint32_t)(ecx);
L_0043a839:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043a83a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043a83b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043a83c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043a83d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043a7b0, 0043a7b0)
