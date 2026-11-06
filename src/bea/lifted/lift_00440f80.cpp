// lifted from 00440f80 (FUN_00440f80, 125 bytes, 37 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00440f80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00440f80;
L_00440f80:  // movsx eax, word ptr [esp + 4]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esp + 0x4u))));
L_00440f85:  // mov ax, word ptr [ecx + eax*2 + 0x13884]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + eax * 2u + 0x13884u))) & 0xffffu);
L_00440f8d:  // test ax, ax
    t0 = llog<16>((eax & 0xffffu) & (eax & 0xffffu), f);
L_00440f90:  // je 0x440ffa
    if (f.zf) goto L_00440ffa;
L_00440f92:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00440f93:  // mov bl, byte ptr [esp + 0xc]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0xcu))) & 0xffu);
L_00440f97:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00440f98:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00440f99:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_00440f9e:  // lea esi, [ecx + eax*8 + 4]
    esi = (uint32_t)((uint32_t)(ecx + eax * 8u + 0x4u));
L_00440fa2:  // mov al, byte ptr [ecx + eax*8 + 8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + eax * 8u + 0x8u))) & 0xffu);
L_00440fa6:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_00440fa8:  // jne 0x440fee
    if (!f.zf) goto L_00440fee;
L_00440faa:  // mov dl, byte ptr [esp + 0x18]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x18u))) & 0xffu);
L_00440fae:  // mov al, byte ptr [esi + 5]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x5u))) & 0xffu);
L_00440fb1:  // cmp al, dl
    t0 = lsub<8>((eax & 0xffu), (edx & 0xffu), f);
L_00440fb3:  // jne 0x440fee
    if (!f.zf) goto L_00440fee;
L_00440fb5:  // mov dx, word ptr [esi]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi))) & 0xffffu);
L_00440fb8:  // mov ax, word ptr [esi + 2]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x2u))) & 0xffffu);
L_00440fbc:  // test dh, 0x80
    t0 = llog<8>(((edx >> 8) & 0xffu) & 0x80u, f);
L_00440fbf:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00440fc1:  // je 0x440fd9
    if (f.zf) goto L_00440fd9;
L_00440fc3:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_00440fc9:  // and edi, 0xffff7fff
    t0 = llog<32>(edi & 0xffff7fffu, f);
    edi = (uint32_t)(t0);
L_00440fcf:  // mov word ptr [ecx + edi*2 + 0x13884], ax
    M16((uint32_t)(ecx + edi * 2u + 0x13884u)) = (uint16_t)((eax & 0xffffu));
L_00440fd7:  // jmp 0x440fe4
    goto L_00440fe4;
L_00440fd9:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_00440fdf:  // mov word ptr [ecx + edi*8 + 6], ax
    M16((uint32_t)(ecx + edi * 8u + 0x6u)) = (uint16_t)((eax & 0xffffu));
L_00440fe4:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_00440fe9:  // mov word ptr [ecx + eax*8 + 4], dx
    M16((uint32_t)(ecx + eax * 8u + 0x4u)) = (uint16_t)((edx & 0xffffu));
L_00440fee:  // mov ax, word ptr [esi + 2]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x2u))) & 0xffffu);
L_00440ff2:  // test ax, ax
    t0 = llog<16>((eax & 0xffffu) & (eax & 0xffffu), f);
L_00440ff5:  // jne 0x440f99
    if (!f.zf) goto L_00440f99;
L_00440ff7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00440ff8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00440ff9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00440ffa:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00440f80, 00440f80)
