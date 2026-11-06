// lifted from 00435e90 (vslot1, 151 bytes, 66 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00435e90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00435e90;
L_00435e90:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00435e91:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00435e92:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00435e96:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00435e97:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00435e99:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00435e9a:  // je 0x435f20
    if (f.zf) goto L_00435f20;
L_00435ea0:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00435ea6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00435ea8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435eaa:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00435ead:  // je 0x435eb3
    if (f.zf) goto L_00435eb3;
L_00435eaf:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00435eb1:  // jmp 0x435eb5
    goto L_00435eb5;
L_00435eb3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00435eb5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435eb7:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00435eb9:  // je 0x435f20
    if (f.zf) goto L_00435f20;
L_00435ebb:  // mov esi, dword ptr [edi + 0x30]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_00435ebe:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00435ec0:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00435ec2:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00435ec4:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_00435ec6:  // jne 0x435ee4
    if (!f.zf) goto L_00435ee4;
L_00435ec8:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00435eca:  // je 0x435ee0
    if (f.zf) goto L_00435ee0;
L_00435ecc:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00435ecf:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00435ed1:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00435ed4:  // jne 0x435ee4
    if (!f.zf) goto L_00435ee4;
L_00435ed6:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00435ed9:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00435edc:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00435ede:  // jne 0x435ec0
    if (!f.zf) goto L_00435ec0;
L_00435ee0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00435ee2:  // jmp 0x435ee9
    goto L_00435ee9;
L_00435ee4:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00435ee6:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_00435ee9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435eeb:  // je 0x435f13
    if (f.zf) goto L_00435f13;
L_00435eed:  // mov edx, dword ptr [0x8553ec]
    edx = (uint32_t)(M32((uint32_t)(0x8553ecu)));
L_00435ef3:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00435ef6:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00435ef9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435efb:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00435efe:  // je 0x435f04
    if (f.zf) goto L_00435f04;
L_00435f00:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00435f02:  // jmp 0x435f06
    goto L_00435f06;
L_00435f04:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00435f06:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00435f08:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00435f0a:  // jne 0x435ebb
    if (!f.zf) goto L_00435ebb;
L_00435f0c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00435f0d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00435f0e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00435f0f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00435f10:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00435f13:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00435f15:  // je 0x435f20
    if (f.zf) goto L_00435f20;
L_00435f17:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00435f1a:  // mov dword ptr [edi + 0xbc], ecx
    M32((uint32_t)(edi + 0xbcu)) = (uint32_t)(ecx);
L_00435f20:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00435f21:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00435f22:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00435f23:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00435f24:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00435e90, 00435e90)
