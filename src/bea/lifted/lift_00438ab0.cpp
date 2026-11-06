// lifted from 00438ab0 (vslot1, 144 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00438ab0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00438ab0;
L_00438ab0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00438ab1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00438ab2:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00438ab6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00438ab7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00438ab9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00438aba:  // je 0x438b39
    if (f.zf) goto L_00438b39;
L_00438abc:  // mov edx, dword ptr [0x8553f0]
    edx = (uint32_t)(M32((uint32_t)(0x8553f0u)));
L_00438ac2:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00438ac4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438ac6:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00438ac9:  // je 0x438acf
    if (f.zf) goto L_00438acf;
L_00438acb:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00438acd:  // jmp 0x438ad1
    goto L_00438ad1;
L_00438acf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00438ad1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438ad3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00438ad5:  // je 0x438b39
    if (f.zf) goto L_00438b39;
L_00438ad7:  // mov esi, dword ptr [edi + 0x18]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_00438ada:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00438adc:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00438ade:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00438ae0:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_00438ae2:  // jne 0x438b00
    if (!f.zf) goto L_00438b00;
L_00438ae4:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00438ae6:  // je 0x438afc
    if (f.zf) goto L_00438afc;
L_00438ae8:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00438aeb:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00438aed:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00438af0:  // jne 0x438b00
    if (!f.zf) goto L_00438b00;
L_00438af2:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00438af5:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00438af8:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00438afa:  // jne 0x438adc
    if (!f.zf) goto L_00438adc;
L_00438afc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00438afe:  // jmp 0x438b05
    goto L_00438b05;
L_00438b00:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00438b02:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_00438b05:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438b07:  // je 0x438b2f
    if (f.zf) goto L_00438b2f;
L_00438b09:  // mov edx, dword ptr [0x8553f0]
    edx = (uint32_t)(M32((uint32_t)(0x8553f0u)));
L_00438b0f:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00438b12:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00438b15:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438b17:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00438b1a:  // je 0x438b20
    if (f.zf) goto L_00438b20;
L_00438b1c:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00438b1e:  // jmp 0x438b22
    goto L_00438b22;
L_00438b20:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00438b22:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438b24:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00438b26:  // jne 0x438ad7
    if (!f.zf) goto L_00438ad7;
L_00438b28:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00438b29:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00438b2a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00438b2b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00438b2c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00438b2f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00438b31:  // je 0x438b39
    if (f.zf) goto L_00438b39;
L_00438b33:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00438b36:  // mov dword ptr [edi + 0x44], ecx
    M32((uint32_t)(edi + 0x44u)) = (uint32_t)(ecx);
L_00438b39:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00438b3a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00438b3b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00438b3c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00438b3d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00438ab0, 00438ab0)
