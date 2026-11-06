// lifted from 00438ed0 (vslot1, 183 bytes, 76 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00438ed0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00438ed0;
L_00438ed0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00438ed1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00438ed2:  // mov ebp, dword ptr [esp + 0xc]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00438ed6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00438ed7:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00438ed9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00438eda:  // je 0x438f80
    if (f.zf) goto L_00438f80;
L_00438ee0:  // mov edx, dword ptr [0x8553f0]
    edx = (uint32_t)(M32((uint32_t)(0x8553f0u)));
L_00438ee6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00438ee8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438eea:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00438eed:  // je 0x438ef3
    if (f.zf) goto L_00438ef3;
L_00438eef:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00438ef1:  // jmp 0x438ef5
    goto L_00438ef5;
L_00438ef3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00438ef5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438ef7:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00438ef9:  // je 0x438f80
    if (f.zf) goto L_00438f80;
L_00438eff:  // mov esi, dword ptr [edi + 0x18]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_00438f02:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00438f04:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00438f06:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00438f08:  // cmp bl, byte ptr [esi]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi)), f);
L_00438f0a:  // jne 0x438f28
    if (!f.zf) goto L_00438f28;
L_00438f0c:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00438f0e:  // je 0x438f24
    if (f.zf) goto L_00438f24;
L_00438f10:  // mov bl, byte ptr [eax + 1]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00438f13:  // mov dl, bl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
L_00438f15:  // cmp bl, byte ptr [esi + 1]
    t0 = lsub<8>((ebx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_00438f18:  // jne 0x438f28
    if (!f.zf) goto L_00438f28;
L_00438f1a:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00438f1d:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00438f20:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_00438f22:  // jne 0x438f04
    if (!f.zf) goto L_00438f04;
L_00438f24:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00438f26:  // jmp 0x438f2d
    goto L_00438f2d;
L_00438f28:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00438f2a:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_00438f2d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438f2f:  // je 0x438f57
    if (f.zf) goto L_00438f57;
L_00438f31:  // mov edx, dword ptr [0x8553f0]
    edx = (uint32_t)(M32((uint32_t)(0x8553f0u)));
L_00438f37:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00438f3a:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00438f3d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438f3f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00438f42:  // je 0x438f48
    if (f.zf) goto L_00438f48;
L_00438f44:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00438f46:  // jmp 0x438f4a
    goto L_00438f4a;
L_00438f48:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00438f4a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00438f4c:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00438f4e:  // jne 0x438eff
    if (!f.zf) goto L_00438eff;
L_00438f50:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00438f51:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00438f52:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00438f53:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00438f54:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00438f57:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00438f59:  // je 0x438f80
    if (f.zf) goto L_00438f80;
L_00438f5b:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_00438f5e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00438f64:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00438f66:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00438f69:  // jne 0x438f79
    if (!f.zf) goto L_00438f79;
L_00438f6b:  // mov dword ptr [edi + 0x60], 1
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(0x1u);
L_00438f72:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00438f73:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00438f74:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00438f75:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00438f76:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00438f79:  // mov dword ptr [edi + 0x60], 0
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(0x0u);
L_00438f80:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00438f81:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00438f82:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00438f83:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00438f84:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00438ed0, 00438ed0)
