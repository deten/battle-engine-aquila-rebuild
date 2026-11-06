// lifted from 0043bbf0 (vslot1, 144 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043bbf0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043bbf0;
L_0043bbf0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043bbf1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043bbf2:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0043bbf6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043bbf7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043bbf9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043bbfa:  // je 0x43bc79
    if (f.zf) goto L_0043bc79;
L_0043bbfc:  // mov edx, dword ptr [0x855404]
    edx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0043bc02:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0043bc04:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bc06:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043bc09:  // je 0x43bc0f
    if (f.zf) goto L_0043bc0f;
L_0043bc0b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043bc0d:  // jmp 0x43bc11
    goto L_0043bc11;
L_0043bc0f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bc11:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bc13:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043bc15:  // je 0x43bc79
    if (f.zf) goto L_0043bc79;
L_0043bc17:  // mov esi, dword ptr [edi + 0x20]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x20u)));
L_0043bc1a:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_0043bc1c:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0043bc1e:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043bc20:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_0043bc22:  // jne 0x43bc40
    if (!f.zf) goto L_0043bc40;
L_0043bc24:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043bc26:  // je 0x43bc3c
    if (f.zf) goto L_0043bc3c;
L_0043bc28:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0043bc2b:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_0043bc2d:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0043bc30:  // jne 0x43bc40
    if (!f.zf) goto L_0043bc40;
L_0043bc32:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0043bc35:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0043bc38:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0043bc3a:  // jne 0x43bc1c
    if (!f.zf) goto L_0043bc1c;
L_0043bc3c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bc3e:  // jmp 0x43bc45
    goto L_0043bc45;
L_0043bc40:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0043bc42:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0043bc45:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bc47:  // je 0x43bc6f
    if (f.zf) goto L_0043bc6f;
L_0043bc49:  // mov edx, dword ptr [0x855404]
    edx = (uint32_t)(M32((uint32_t)(0x855404u)));
L_0043bc4f:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0043bc52:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0043bc55:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bc57:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0043bc5a:  // je 0x43bc60
    if (f.zf) goto L_0043bc60;
L_0043bc5c:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0043bc5e:  // jmp 0x43bc62
    goto L_0043bc62;
L_0043bc60:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043bc62:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043bc64:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0043bc66:  // jne 0x43bc17
    if (!f.zf) goto L_0043bc17;
L_0043bc68:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043bc69:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043bc6a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043bc6b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043bc6c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0043bc6f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0043bc71:  // je 0x43bc79
    if (f.zf) goto L_0043bc79;
L_0043bc73:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0043bc76:  // mov dword ptr [edi + 0x1c], ecx
    M32((uint32_t)(edi + 0x1cu)) = (uint32_t)(ecx);
L_0043bc79:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043bc7a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043bc7b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043bc7c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043bc7d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043bbf0, 0043bbf0)
