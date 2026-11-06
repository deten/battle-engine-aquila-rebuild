// lifted from 00420d70 (FUN_00420d70, 1155 bytes, 338 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00420d70(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00420d70;
L_00420d70:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00420d73:  // mov ecx, dword ptr [0x8889f0]
    ecx = (uint32_t)(M32((uint32_t)(0x8889f0u)));
L_00420d79:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00420d7a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00420d7b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00420d7c:  // lea edx, [ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + 0x1u));
L_00420d7f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00420d80:  // xor bl, bl
    t0 = llog<8>((ebx & 0xffu) ^ (ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00420d82:  // lea eax, [edx + edx*2]
    eax = (uint32_t)((uint32_t)(edx + edx * 2u));
L_00420d85:  // mov byte ptr [esp + 0x13], bl
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)((ebx & 0xffu));
L_00420d89:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00420d8c:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00420d8e:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00420d91:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00420d94:  // mov eax, dword ptr [eax*4 + 0x855bb0]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x855bb0u)));
L_00420d9b:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00420d9e:  // lea edx, [eax + edx*8]
    edx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_00420da1:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_00420da4:  // lea edx, [eax + edx*4]
    edx = (uint32_t)((uint32_t)(eax + edx * 4u));
L_00420da7:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_00420daa:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00420dad:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00420daf:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00420db2:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00420db5:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00420db8:  // mov ecx, dword ptr [eax + edx*8 + 0x856f64]
    ecx = (uint32_t)(M32((uint32_t)(eax + edx * 8u + 0x856f64u)));
L_00420dbf:  // lea eax, [eax + edx*8 + 0x856014]
    eax = (uint32_t)((uint32_t)(eax + edx * 8u + 0x856014u));
L_00420dc6:  // lea ecx, [ecx + ecx*2]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_00420dc9:  // lea edx, [eax + ecx*8 + 0x140]
    edx = (uint32_t)((uint32_t)(eax + ecx * 8u + 0x140u));
L_00420dd0:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00420dd4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00420dd5:  // call 0x420d10
    t0 = 0x00420d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00420ddau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00420dda:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00420dde:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00420de0:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420de3:  // mov dword ptr [0x6254f0], eax
    M32((uint32_t)(0x6254f0u)) = (uint32_t)(eax);
L_00420de8:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00420dea:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420ded:  // mov dword ptr [0x6254f4], ecx
    M32((uint32_t)(0x6254f4u)) = (uint32_t)(ecx);
L_00420df3:  // mov bp, word ptr [esi]
    ebp = (ebp & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi))) & 0xffffu);
L_00420df6:  // mov dx, word ptr [esi + 2]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x2u))) & 0xffffu);
L_00420dfa:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00420dfd:  // mov word ptr [esp + 0x1c], dx
    M16((uint32_t)(esp + 0x1cu)) = (uint16_t)((edx & 0xffffu));
L_00420e02:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00420e05:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_00420e09:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00420e0b:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e0e:  // mov dword ptr [0x6321a0], eax
    M32((uint32_t)(0x6321a0u)) = (uint32_t)(eax);
L_00420e13:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00420e15:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e18:  // mov dword ptr [0x631e88], ecx
    M32((uint32_t)(0x631e88u)) = (uint32_t)(ecx);
L_00420e1e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00420e20:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e23:  // mov dword ptr [0x630e0c], edx
    M32((uint32_t)(0x630e0cu)) = (uint32_t)(edx);
L_00420e29:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00420e2b:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e2e:  // mov dword ptr [0x9c7558], eax
    M32((uint32_t)(0x9c7558u)) = (uint32_t)(eax);
L_00420e33:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00420e35:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e38:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00420e3c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00420e3d:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_00420e41:  // mov ecx, 0x8aa990
    ecx = (uint32_t)(0x8aa990u);
L_00420e46:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00420e49:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00420e4eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00420e4e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00420e50:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00420e51:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_00420e55:  // mov ecx, 0x82b478
    ecx = (uint32_t)(0x82b478u);
L_00420e5a:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_00420e5e:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e61:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00420e64:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00420e69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00420e69:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00420e6b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00420e6c:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00420e70:  // mov ecx, 0x82b468
    ecx = (uint32_t)(0x82b468u);
L_00420e75:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_00420e79:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e7c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00420e7f:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00420e84u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00420e84:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00420e86:  // mov edx, dword ptr [0x66306c]
    edx = (uint32_t)(M32((uint32_t)(0x66306cu)));
L_00420e8c:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420e8f:  // mov dword ptr [0x66061c], ecx
    M32((uint32_t)(0x66061cu)) = (uint32_t)(ecx);
L_00420e95:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00420e99:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00420e9b:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00420e9f:  // mov ecx, 0x66306c
    ecx = (uint32_t)(0x66306cu);
L_00420ea4:  // mov dword ptr [0x66306c], eax
    M32((uint32_t)(0x66306cu)) = (uint32_t)(eax);
L_00420ea9:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00420eab:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420eae:  // cmp eax, dword ptr [ecx]
    t0 = lsub<32>(eax, M32((uint32_t)(ecx)), f);
L_00420eb0:  // je 0x420eb4
    if (f.zf) goto L_00420eb4;
L_00420eb2:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00420eb4:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00420eb6:  // mov edi, dword ptr [0x8aa95c]
    edi = (uint32_t)(M32((uint32_t)(0x8aa95cu)));
L_00420ebc:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00420ec0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00420ec1:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_00420ec5:  // mov ecx, 0x8aa950
    ecx = (uint32_t)(0x8aa950u);
L_00420eca:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420ecd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00420ed0:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00420ed5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00420ed5:  // cmp dword ptr [0x8aa95c], edi
    t0 = lsub<32>(M32((uint32_t)(0x8aa95cu)), edi, f);
L_00420edb:  // je 0x420edf
    if (f.zf) goto L_00420edf;
L_00420edd:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00420edf:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00420ee1:  // mov edi, dword ptr [0x9cc104]
    edi = (uint32_t)(M32((uint32_t)(0x9cc104u)));
L_00420ee7:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00420eeb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00420eec:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_00420ef0:  // mov ecx, 0x9cc0f8
    ecx = (uint32_t)(0x9cc0f8u);
L_00420ef5:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420ef8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00420efb:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00420f00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00420f00:  // cmp dword ptr [0x9cc104], edi
    t0 = lsub<32>(M32((uint32_t)(0x9cc104u)), edi, f);
L_00420f06:  // je 0x420f0a
    if (f.zf) goto L_00420f0a;
L_00420f08:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00420f0a:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00420f0c:  // mov edi, dword ptr [0x9cc0e4]
    edi = (uint32_t)(M32((uint32_t)(0x9cc0e4u)));
L_00420f12:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00420f16:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00420f17:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_00420f1b:  // mov ecx, 0x9cc0d8
    ecx = (uint32_t)(0x9cc0d8u);
L_00420f20:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420f23:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00420f26:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00420f2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00420f2b:  // cmp dword ptr [0x9cc0e4], edi
    t0 = lsub<32>(M32((uint32_t)(0x9cc0e4u)), edi, f);
L_00420f31:  // je 0x420f35
    if (f.zf) goto L_00420f35;
L_00420f33:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00420f35:  // mov ecx, dword ptr [0x8889f0]
    ecx = (uint32_t)(M32((uint32_t)(0x8889f0u)));
L_00420f3b:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420f3e:  // lea edx, [ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + 0x1u));
L_00420f41:  // lea eax, [edx + edx*2]
    eax = (uint32_t)((uint32_t)(edx + edx * 2u));
L_00420f44:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00420f47:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00420f49:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00420f4c:  // lea edx, [eax + eax*8]
    edx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00420f4f:  // mov eax, dword ptr [edx*4 + 0x855bb0]
    eax = (uint32_t)(M32((uint32_t)(edx * 4u + 0x855bb0u)));
L_00420f56:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00420f59:  // lea edx, [eax + edx*8]
    edx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_00420f5c:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_00420f5f:  // lea edx, [eax + edx*4]
    edx = (uint32_t)((uint32_t)(eax + edx * 4u));
L_00420f62:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_00420f65:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00420f68:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00420f6a:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00420f6d:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00420f70:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00420f73:  // mov ecx, dword ptr [eax + edx*8 + 0x856f6c]
    ecx = (uint32_t)(M32((uint32_t)(eax + edx * 8u + 0x856f6cu)));
L_00420f7a:  // lea eax, [eax + edx*8 + 0x856f6c]
    eax = (uint32_t)((uint32_t)(eax + edx * 8u + 0x856f6cu));
L_00420f81:  // mov edx, dword ptr [esi - 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xfffffffcu)));
L_00420f84:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00420f88:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00420f8a:  // mov ecx, dword ptr [0x8889f0]
    ecx = (uint32_t)(M32((uint32_t)(0x8889f0u)));
L_00420f90:  // lea edx, [ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + 0x1u));
L_00420f93:  // lea eax, [edx + edx*2]
    eax = (uint32_t)((uint32_t)(edx + edx * 2u));
L_00420f96:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00420f99:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00420f9b:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00420f9e:  // lea edi, [eax + eax*8]
    edi = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00420fa1:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_00420fa4:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00420fa7:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00420fa9:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00420fac:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00420faf:  // mov eax, dword ptr [edi*4 + 0x855bb0]
    eax = (uint32_t)(M32((uint32_t)(edi * 4u + 0x855bb0u)));
L_00420fb6:  // shl ecx, 2
    t0 = lshl<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00420fb9:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_00420fbc:  // lea edx, [eax + edx*8]
    edx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_00420fbf:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_00420fc2:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_00420fc5:  // lea edx, [ecx + eax*8 + 0x856f6c]
    edx = (uint32_t)((uint32_t)(ecx + eax * 8u + 0x856f6cu));
L_00420fcc:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_00420fd0:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00420fd2:  // cmp eax, dword ptr [edx]
    t0 = lsub<32>(eax, M32((uint32_t)(edx)), f);
L_00420fd4:  // je 0x420fd8
    if (f.zf) goto L_00420fd8;
L_00420fd6:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00420fd8:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00420fda:  // mov eax, dword ptr [0x663074]
    eax = (uint32_t)(M32((uint32_t)(0x663074u)));
L_00420fdf:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420fe2:  // mov dword ptr [0x663070], edx
    M32((uint32_t)(0x663070u)) = (uint32_t)(edx);
L_00420fe8:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00420fec:  // mov eax, 0x663074
    eax = (uint32_t)(0x663074u);
L_00420ff1:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00420ff3:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00420ff6:  // mov dword ptr [0x663074], edx
    M32((uint32_t)(0x663074u)) = (uint32_t)(edx);
L_00420ffc:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00421000:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00421002:  // cmp edx, dword ptr [eax]
    t0 = lsub<32>(edx, M32((uint32_t)(eax)), f);
L_00421004:  // je 0x42100b
    if (f.zf) goto L_0042100b;
L_00421006:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_0042100b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0042100d:  // mov eax, dword ptr [0x663080]
    eax = (uint32_t)(M32((uint32_t)(0x663080u)));
L_00421012:  // mov dword ptr [0x663080], edx
    M32((uint32_t)(0x663080u)) = (uint32_t)(edx);
L_00421018:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042101c:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00421020:  // mov eax, 0x663080
    eax = (uint32_t)(0x663080u);
L_00421025:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00421027:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0042102a:  // cmp edx, dword ptr [eax]
    t0 = lsub<32>(edx, M32((uint32_t)(eax)), f);
L_0042102c:  // je 0x421033
    if (f.zf) goto L_00421033;
L_0042102e:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_00421033:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00421035:  // mov eax, dword ptr [0x663078]
    eax = (uint32_t)(M32((uint32_t)(0x663078u)));
L_0042103a:  // mov dword ptr [0x663078], edx
    M32((uint32_t)(0x663078u)) = (uint32_t)(edx);
L_00421040:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00421044:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00421048:  // mov eax, 0x663078
    eax = (uint32_t)(0x663078u);
L_0042104d:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0042104f:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00421052:  // cmp edx, dword ptr [eax]
    t0 = lsub<32>(edx, M32((uint32_t)(eax)), f);
L_00421054:  // je 0x42105b
    if (f.zf) goto L_0042105b;
L_00421056:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_0042105b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0042105d:  // mov eax, dword ptr [0x663084]
    eax = (uint32_t)(M32((uint32_t)(0x663084u)));
L_00421062:  // mov dword ptr [0x663084], edx
    M32((uint32_t)(0x663084u)) = (uint32_t)(edx);
L_00421068:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0042106c:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00421070:  // mov eax, 0x663084
    eax = (uint32_t)(0x663084u);
L_00421075:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00421077:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0042107a:  // cmp edx, dword ptr [eax]
    t0 = lsub<32>(edx, M32((uint32_t)(eax)), f);
L_0042107c:  // je 0x421083
    if (f.zf) goto L_00421083;
L_0042107e:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_00421083:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_00421086:  // setne al
    eax = (eax & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_00421089:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0042108a:  // mov byte ptr [0x9c7c54], al
    M8((uint32_t)(0x9c7c54u)) = (uint8_t)((eax & 0xffu));
L_0042108f:  // mov eax, dword ptr [0x66061c]
    eax = (uint32_t)(M32((uint32_t)(0x66061cu)));
L_00421094:  // cmp byte ptr [esi], 0
    t0 = lsub<8>(M8((uint32_t)(esi)), 0x0u, f);
L_00421097:  // setne dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0042109a:  // mov byte ptr [0x9c7c56], dl
    M8((uint32_t)(0x9c7c56u)) = (uint8_t)((edx & 0xffu));
L_004210a0:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004210a4:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_004210a6:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004210a7:  // test eax, 0xffffffff
    t0 = llog<32>(eax & 0xffffffffu, f);
L_004210ac:  // je 0x421181
    if (f.zf) goto L_00421181;
L_004210b2:  // mov edi, dword ptr [edi*4 + 0x855bb0]
    edi = (uint32_t)(M32((uint32_t)(edi * 4u + 0x855bb0u)));
L_004210b9:  // lea eax, [edi + edi*4]
    eax = (uint32_t)((uint32_t)(edi + edi * 4u));
L_004210bc:  // lea eax, [edi + eax*8]
    eax = (uint32_t)((uint32_t)(edi + eax * 8u));
L_004210bf:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004210c2:  // lea eax, [edi + edx*4]
    eax = (uint32_t)((uint32_t)(edi + edx * 4u));
L_004210c5:  // lea edx, [ecx + eax*8 + 0x856014]
    edx = (uint32_t)((uint32_t)(ecx + eax * 8u + 0x856014u));
L_004210cc:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004210d0:  // mov eax, dword ptr [edx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x13cu)));
L_004210d6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004210d8:  // je 0x421181
    if (f.zf) goto L_00421181;
L_004210de:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004210e0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004210e2:  // jbe 0x421153
    if ((f.cf || f.zf)) goto L_00421153;
L_004210e4:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004210e8:  // lea edi, [edx + 0x148]
    edi = (uint32_t)((uint32_t)(edx + 0x148u));
L_004210ee:  // mov eax, dword ptr [edi - 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xfffffff8u)));
L_004210f1:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_004210f3:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_004210f8:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_004210fa:  // mov ecx, dword ptr [edi - 4]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xfffffffcu)));
L_004210fd:  // and ecx, 0x7fff
    t0 = llog<32>(ecx & 0x7fffu, f);
    ecx = (uint32_t)(t0);
L_00421103:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00421108:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0042110b:  // or eax, ecx
    t0 = llog<32>(eax | ecx, f);
    eax = (uint32_t)(t0);
L_0042110d:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0042110f:  // cmp ecx, 0x16
    t0 = lsub<32>(ecx, 0x16u, f);
L_00421112:  // je 0x421122
    if (f.zf) goto L_00421122;
L_00421114:  // cmp ecx, 0x15
    t0 = lsub<32>(ecx, 0x15u, f);
L_00421117:  // je 0x421122
    if (f.zf) goto L_00421122;
L_00421119:  // cmp ecx, 0x14
    t0 = lsub<32>(ecx, 0x14u, f);
L_0042111c:  // je 0x421122
    if (f.zf) goto L_00421122;
L_0042111e:  // xor cl, cl
    t0 = llog<8>((ecx & 0xffu) ^ (ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00421120:  // jmp 0x421124
    goto L_00421124;
L_00421122:  // mov cl, 1
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_00421124:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00421126:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_00421128:  // setne bl
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0042112b:  // shl ebx, 0x1f
    t0 = lshl<32>(ebx, 0x1fu, f);
    ebx = (uint32_t)(t0);
L_0042112e:  // and eax, 0x7fffffff
    t0 = llog<32>(eax & 0x7fffffffu, f);
    eax = (uint32_t)(t0);
L_00421133:  // or ebx, eax
    t0 = llog<32>(ebx | eax, f);
    ebx = (uint32_t)(t0);
L_00421135:  // mov eax, dword ptr [0x66061c]
    eax = (uint32_t)(M32((uint32_t)(0x66061cu)));
L_0042113a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042113c:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_0042113e:  // test eax, 0xffffffff
    t0 = llog<32>(eax & 0xffffffffu, f);
L_00421143:  // je 0x421166
    if (f.zf) goto L_00421166;
L_00421145:  // mov eax, dword ptr [edx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x13cu)));
L_0042114b:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0042114c:  // add edi, 0x18
    t0 = ladd<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_0042114f:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_00421151:  // jb 0x4210ee
    if (f.cf) goto L_004210ee;
L_00421153:  // push 0xf6
    t0 = 0xf6u; esp -= 4; M32(esp) = t0;
L_00421158:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0042115a:  // call 0x4d1710
    t0 = 0x004d1710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042115fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042115f:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00421163:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00421166:  // mov dword ptr [edx + 0xf50], ebp
    M32((uint32_t)(edx + 0xf50u)) = (uint32_t)(ebp);
L_0042116c:  // mov eax, dword ptr [0x66061c]
    eax = (uint32_t)(M32((uint32_t)(0x66061cu)));
L_00421171:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00421175:  // and eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0042117a:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_0042117c:  // mov dword ptr [0x66061c], eax
    M32((uint32_t)(0x66061cu)) = (uint32_t)(eax);
L_00421181:  // and ebp, 0xffff
    t0 = llog<32>(ebp & 0xffffu, f);
    ebp = (uint32_t)(t0);
L_00421187:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00421188:  // call 0x453780
    t0 = 0x00453780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042118du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042118d:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00421191:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00421194:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_0042119a:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0042119f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004211a0:  // call 0x466ab0
    t0 = 0x00466ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004211a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004211a5:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_004211a7:  // mov dword ptr [0x66305c], edi
    M32((uint32_t)(0x66305cu)) = (uint32_t)(edi);
L_004211ad:  // je 0x4211bf
    if (f.zf) goto L_004211bf;
L_004211af:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_004211b4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004211b6:  // je 0x4211bf
    if (f.zf) goto L_004211bf;
L_004211b8:  // mov byte ptr [0x82b5b0], 2
    M8((uint32_t)(0x82b5b0u)) = (uint8_t)(0x2u);
L_004211bf:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_004211c3:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004211c5:  // je 0x4211dd
    if (f.zf) goto L_004211dd;
L_004211c7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004211c9:  // call 0x4cddf0
    t0 = 0x004cddf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004211ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004211ce:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004211d1:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004211d3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004211d4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004211d5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004211d6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004211d7:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004211da:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004211dd:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004211e2:  // call 0x4e2c50
    t0 = 0x004e2c50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004211e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004211e7:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004211e9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004211ea:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004211eb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004211ec:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004211ed:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004211f0:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00420d70, 00420d70)
