// lifted from 00435df0 (vslot1, 151 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00435df0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00435df0;
L_00435df0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00435df1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00435df2:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00435df6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00435df7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00435df9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00435dfa:  // je 0x435e80
    if (f.zf) goto L_00435e80;
L_00435e00:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00435e06:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00435e08:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435e0a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00435e0d:  // je 0x435e13
    if (f.zf) goto L_00435e13;
L_00435e0f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00435e11:  // jmp 0x435e15
    goto L_00435e15;
L_00435e13:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00435e15:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435e17:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00435e19:  // je 0x435e80
    if (f.zf) goto L_00435e80;
L_00435e1b:  // mov esi, dword ptr [edi + 0x30]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_00435e1e:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00435e20:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00435e22:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00435e24:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_00435e26:  // jne 0x435e44
    if (!f.zf) goto L_00435e44;
L_00435e28:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00435e2a:  // je 0x435e40
    if (f.zf) goto L_00435e40;
L_00435e2c:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00435e2f:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00435e31:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00435e34:  // jne 0x435e44
    if (!f.zf) goto L_00435e44;
L_00435e36:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00435e39:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00435e3c:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00435e3e:  // jne 0x435e20
    if (!f.zf) goto L_00435e20;
L_00435e40:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00435e42:  // jmp 0x435e49
    goto L_00435e49;
L_00435e44:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00435e46:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_00435e49:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435e4b:  // je 0x435e73
    if (f.zf) goto L_00435e73;
L_00435e4d:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00435e53:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00435e56:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00435e59:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435e5b:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00435e5e:  // je 0x435e64
    if (f.zf) goto L_00435e64;
L_00435e60:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00435e62:  // jmp 0x435e66
    goto L_00435e66;
L_00435e64:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00435e66:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435e68:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00435e6a:  // jne 0x435e1b
    if (!f.zf) goto L_00435e1b;
L_00435e6c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00435e6d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00435e6e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00435e6f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00435e70:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00435e73:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00435e75:  // je 0x435e80
    if (f.zf) goto L_00435e80;
L_00435e77:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00435e7a:  // mov dword ptr [edi + 0xb8], ecx
    M32((uint32_t)(edi + 0xb8u)) = (uint32_t)(ecx);
L_00435e80:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00435e81:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00435e82:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00435e83:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00435e84:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00435df0, 00435df0)
