// lifted from 0047c970 (vslot66, 1291 bytes, 375 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047c970(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047c970;
L_0047c970:  // sub esp, 0x68
    t0 = lsub<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_0047c973:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047c974:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047c975:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0047c977:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047c978:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047c979:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0047c97c:  // call dword ptr [eax + 0x60]
    t0 = M32((uint32_t)(eax + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c97fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c97f:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0047c982:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047c984:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_0047c988:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047c98c:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0047c990:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0047c998:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_0047c99c:  // call dword ptr [edx + 0xb8]
    t0 = M32((uint32_t)(edx + 0xb8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c9a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c9a2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047c9a4:  // je 0x47c9b5
    if (f.zf) goto L_0047c9b5;
L_0047c9a6:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0047c9a9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047c9ab:  // call dword ptr [eax + 0xb4]
    t0 = M32((uint32_t)(eax + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c9b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c9b1:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0047c9b5:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0047c9b8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047c9ba:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_0047c9c2:  // mov dword ptr [esp + 0x3c], 0
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x0u);
L_0047c9ca:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_0047c9d2:  // call dword ptr [edx + 0x124]
    t0 = M32((uint32_t)(edx + 0x124u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c9d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c9d8:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0047c9db:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047c9dd:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047c9e1:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c9e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c9e7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047c9e9:  // jne 0x47ca05
    if (!f.zf) goto L_0047ca05;
L_0047c9eb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047c9ed:  // call 0x401fa0
    t0 = 0x00401fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047c9f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047c9f2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047c9f4:  // jne 0x47ca05
    if (!f.zf) goto L_0047ca05;
L_0047c9f6:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0047c9f9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047c9fb:  // call dword ptr [edx + 0xb8]
    t0 = M32((uint32_t)(edx + 0xb8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ca01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ca01:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047ca03:  // jne 0x47ca73
    if (!f.zf) goto L_0047ca73;
L_0047ca05:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0047ca08:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047ca0a:  // call dword ptr [eax + 0x130]
    t0 = M32((uint32_t)(eax + 0x130u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ca10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ca10:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047ca12:  // je 0x47ca73
    if (f.zf) goto L_0047ca73;
L_0047ca14:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0047ca17:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047ca19:  // call dword ptr [edx + 0x120]
    t0 = M32((uint32_t)(edx + 0x120u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ca1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ca1f:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047ca23:  // fld dword ptr [ebp + 0x14c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x14cu)));
L_0047ca29:  // fmul dword ptr [0x5d8c40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c40u)));
L_0047ca2f:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047ca33:  // fld dword ptr [ebp + 0x150]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x150u)));
L_0047ca39:  // fmul dword ptr [0x5d8c40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c40u)));
L_0047ca3f:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047ca43:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_0047ca47:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047ca4b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0047ca4f:  // fld dword ptr [ebp + 0x154]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x154u)));
L_0047ca55:  // fmul dword ptr [0x5d8c40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c40u)));
L_0047ca5b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047ca5f:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_0047ca63:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_0047ca67:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0047ca6b:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0047ca6f:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_0047ca73:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_0047ca77:  // jne 0x47ccb1
    if (!f.zf) goto L_0047ccb1;
L_0047ca7d:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_0047ca83:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_0047ca88:  // cmp dword ptr [ecx + 0x100], esi
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x100u)), esi, f);
L_0047ca8e:  // jne 0x47ccb1
    if (!f.zf) goto L_0047ccb1;
L_0047ca94:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_0047ca97:  // mov ecx, dword ptr [0x6fbdf4]
    ecx = (uint32_t)(M32((uint32_t)(0x6fbdf4u)));
L_0047ca9d:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047caa1:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047caa5:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_0047caa8:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047caac:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047cab0:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0047cab4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047cab5:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0047caba:  // call 0x47ea20
    t0 = 0x0047ea20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cabfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cabf:  // movsx edx, ax
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)((eax & 0xffffu)));
L_0047cac2:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0047cac6:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0047cac9:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0047cacd:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047cacf:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0047cad3:  // fsubr dword ptr [ebp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(ebp + 0x24u))) - (ST(0));
L_0047cad6:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047cada:  // call dword ptr [eax + 0xc0]
    t0 = M32((uint32_t)(eax + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cae0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cae0:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_0047cae6:  // fsubr dword ptr [esp + 0x20]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x20u))) - (ST(0));
L_0047caea:  // fld dword ptr [ecx + 0x18c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x18cu)));
L_0047caf0:  // fchs 
    ST(0) = -ST(0);
L_0047caf2:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047caf4:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_0047caf6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047caf8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047cafb:  // jne 0x47cc6d
    if (!f.zf) goto L_0047cc6d;
L_0047cb01:  // fld dword ptr [ecx + 0x188]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x188u)));
L_0047cb07:  // fchs 
    ST(0) = -ST(0);
L_0047cb09:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047cb0b:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_0047cb0d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047cb0f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047cb12:  // je 0x47cc6f
    if (f.zf) goto L_0047cc6f;
L_0047cb18:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047cb1c:  // fmul dword ptr [0x5dbd88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbd88u)));
L_0047cb22:  // mov dword ptr [ebp + 0x1e4], esi
    M32((uint32_t)(ebp + 0x1e4u)) = (uint32_t)(esi);
L_0047cb28:  // mov ebx, dword ptr [ebp + 0x1d4]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x1d4u)));
L_0047cb2e:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0047cb30:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0047cb34:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047cb38:  // je 0x47cb3e
    if (f.zf) goto L_0047cb3e;
L_0047cb3a:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_0047cb3c:  // jmp 0x47cb40
    goto L_0047cb40;
L_0047cb3e:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0047cb40:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0047cb42:  // je 0x47ccb1
    if (f.zf) goto L_0047ccb1;
L_0047cb48:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0047cb4b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047cb4d:  // jne 0x47cb8e
    if (!f.zf) goto L_0047cb8e;
L_0047cb4f:  // mov edx, dword ptr [0x67a2f0]
    edx = (uint32_t)(M32((uint32_t)(0x67a2f0u)));
L_0047cb55:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047cb57:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047cb59:  // mov eax, dword ptr [0x67a2f4]
    eax = (uint32_t)(M32((uint32_t)(0x67a2f4u)));
L_0047cb5e:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047cb61:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0047cb63:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047cb64:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0047cb66:  // mov edx, dword ptr [0x67a2f8]
    edx = (uint32_t)(M32((uint32_t)(0x67a2f8u)));
L_0047cb6c:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0047cb6f:  // mov eax, dword ptr [0x67a2fc]
    eax = (uint32_t)(M32((uint32_t)(0x67a2fcu)));
L_0047cb74:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0047cb77:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0047cb7a:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_0047cb80:  // mov edx, dword ptr [ecx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0047cb83:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_0047cb88:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047cb89:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cb8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cb8e:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0047cb91:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_0047cb95:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047cb96:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047cb9a:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0047cb9e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047cb9f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047cba0:  // push 0x1a
    t0 = 0x1au; esp -= 4; M32(esp) = t0;
L_0047cba2:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047cba4:  // call dword ptr [eax + 0x160]
    t0 = M32((uint32_t)(eax + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cbaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cbaa:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0047cbad:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047cbaf:  // je 0x47cc2a
    if (f.zf) goto L_0047cc2a;
L_0047cbb1:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_0047cbb8:  // jne 0x47cc05
    if (!f.zf) goto L_0047cc05;
L_0047cbba:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047cbbe:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_0047cbc4:  // mov dword ptr [ecx + 0x80], eax
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(eax);
L_0047cbca:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047cbce:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0047cbd1:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0047cbd5:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0047cbd8:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047cbdc:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_0047cbdf:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047cbe3:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_0047cbe6:  // mov dword ptr [ecx + 0x40], eax
    M32((uint32_t)(ecx + 0x40u)) = (uint32_t)(eax);
L_0047cbe9:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047cbed:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0047cbf0:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0047cbf4:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0047cbf7:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047cbfb:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_0047cbfe:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0047cc02:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047cc03:  // jmp 0x47cc25
    goto L_0047cc25;
L_0047cc05:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0047cc07:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_0047cc0a:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_0047cc0c:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_0047cc0e:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0047cc11:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_0047cc14:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0047cc17:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_0047cc1a:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0047cc1d:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0047cc20:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0047cc24:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047cc25:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cc2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cc2a:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0047cc2d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047cc2f:  // je 0x47cc49
    if (f.zf) goto L_0047cc49;
L_0047cc31:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_0047cc34:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0047cc39:  // lea esi, [esp + 0x48]
    esi = (uint32_t)((uint32_t)(esp + 0x48u));
L_0047cc3d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0047cc3f:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_0047cc49:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047cc4d:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_0047cc50:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047cc51:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0047cc53:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0047cc57:  // je 0x47cc5d
    if (f.zf) goto L_0047cc5d;
L_0047cc59:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_0047cc5b:  // jmp 0x47cc5f
    goto L_0047cc5f;
L_0047cc5d:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0047cc5f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0047cc61:  // jne 0x47cb48
    if (!f.zf) goto L_0047cb48;
L_0047cc67:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0047cc6b:  // jmp 0x47ccb1
    goto L_0047ccb1;
L_0047cc6d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047cc6f:  // mov eax, dword ptr [ebp + 0x1e4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1e4u)));
L_0047cc75:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047cc77:  // je 0x47ccb1
    if (f.zf) goto L_0047ccb1;
L_0047cc79:  // mov esi, dword ptr [ebp + 0x1d4]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x1d4u)));
L_0047cc7f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0047cc81:  // je 0x47cc87
    if (f.zf) goto L_0047cc87;
L_0047cc83:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0047cc85:  // jmp 0x47cc89
    goto L_0047cc89;
L_0047cc87:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0047cc89:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047cc8b:  // je 0x47cca7
    if (f.zf) goto L_0047cca7;
L_0047cc8d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047cc8f:  // call 0x4cb0b0
    t0 = 0x004cb0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cc94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cc94:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0047cc97:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0047cc99:  // je 0x47cc9f
    if (f.zf) goto L_0047cc9f;
L_0047cc9b:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0047cc9d:  // jmp 0x47cca1
    goto L_0047cca1;
L_0047cc9f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0047cca1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047cca3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047cca5:  // jne 0x47cc8d
    if (!f.zf) goto L_0047cc8d;
L_0047cca7:  // mov dword ptr [ebp + 0x1e4], 0
    M32((uint32_t)(ebp + 0x1e4u)) = (uint32_t)(0x0u);
L_0047ccb1:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0047ccb5:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0047ccb9:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0047ccbb:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0047ccbf:  // jle 0x47cd1a
    if ((f.zf || f.sf != f.of)) goto L_0047cd1a;
L_0047ccc1:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0047ccc3:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0047ccc7:  // fadd dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_0047ccca:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047cccb:  // fstp dword ptr [ebp + 0x7c]
    F32((uint32_t)(ebp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0047ccce:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0047ccd2:  // fadd dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x80u)));
L_0047ccd8:  // fstp dword ptr [ebp + 0x80]
    F32((uint32_t)(ebp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0047ccde:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0047cce2:  // fadd dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x84u)));
L_0047cce8:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0047ccee:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047ccf2:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_0047ccf5:  // fstp dword ptr [ebp + 0x7c]
    F32((uint32_t)(ebp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0047ccf8:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047ccfc:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_0047cd02:  // fstp dword ptr [ebp + 0x80]
    F32((uint32_t)(ebp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0047cd08:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047cd0c:  // fmul dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x84u)));
L_0047cd12:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0047cd18:  // jne 0x47ccc3
    if (!f.zf) goto L_0047ccc3;
L_0047cd1a:  // lea esi, [ebp + 0x7c]
    esi = (uint32_t)((uint32_t)(ebp + 0x7cu));
L_0047cd1d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047cd1f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047cd21:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_0047cd25:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0047cd28:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_0047cd2c:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0047cd2f:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_0047cd33:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0047cd36:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0047cd39:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047cd3b:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_0047cd3f:  // call dword ptr [edx + 0x1bc]
    t0 = M32((uint32_t)(edx + 0x1bcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cd45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cd45:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_0047cd4b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0047cd4f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047cd51:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0047cd53:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0047cd57:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_0047cd5b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047cd5d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0047cd5f:  // fcom st(1)
    lcom(x, ST(0), ST(1));
L_0047cd61:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047cd63:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047cd66:  // jne 0x47cd8e
    if (!f.zf) goto L_0047cd8e;
L_0047cd68:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047cd6a:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_0047cd6c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047cd6e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047cd70:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047cd72:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_0047cd76:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047cd78:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_0047cd7c:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0047cd80:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0047cd84:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_0047cd86:  // mov dword ptr [ebp + 0x80], eax
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(eax);
L_0047cd8c:  // jmp 0x47cd92
    goto L_0047cd92;
L_0047cd8e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047cd90:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047cd92:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047cd94:  // call 0x4fa8d0
    t0 = 0x004fa8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047cd99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047cd99:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_0047cd9f:  // mov eax, dword ptr [ecx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x10cu)));
L_0047cda5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047cda7:  // jne 0x47cdb7
    if (!f.zf) goto L_0047cdb7;
L_0047cda9:  // mov eax, dword ptr [ebp + 0x258]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x258u)));
L_0047cdaf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047cdb1:  // je 0x47ce73
    if (f.zf) goto L_0047ce73;
L_0047cdb7:  // mov al, byte ptr [ebp + 0x2c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x2cu))) & 0xffu);
L_0047cdba:  // mov edx, dword ptr [ebp + 0x250]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x250u)));
L_0047cdc0:  // test al, 4
    t0 = llog<8>((eax & 0xffu) & 0x4u, f);
L_0047cdc2:  // mov dword ptr [ebp + 0x254], edx
    M32((uint32_t)(ebp + 0x254u)) = (uint32_t)(edx);
L_0047cdc8:  // je 0x47cdfa
    if (f.zf) goto L_0047cdfa;
L_0047cdca:  // fld dword ptr [ebp + 0x25c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x25cu)));
L_0047cdd0:  // fadd dword ptr [ebp + 0x250]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x250u)));
L_0047cdd6:  // fstp dword ptr [ebp + 0x250]
    F32((uint32_t)(ebp + 0x250u)) = lf32(ST(0));
    lpop(x);
L_0047cddc:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0047cde0:  // fmul dword ptr [0x5d8cb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb0u)));
L_0047cde6:  // fsubr dword ptr [ebp + 0x25c]
    ST(0) = ((long double)F32((uint32_t)(ebp + 0x25cu))) - (ST(0));
L_0047cdec:  // fstp dword ptr [ebp + 0x25c]
    F32((uint32_t)(ebp + 0x25cu)) = lf32(ST(0));
    lpop(x);
L_0047cdf2:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047cdf3:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047cdf4:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047cdf5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047cdf6:  // add esp, 0x68
    t0 = ladd<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_0047cdf9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0047cdfa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047cdfc:  // call 0x4fde10
    t0 = 0x004fde10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047ce01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047ce01:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047ce03:  // je 0x47ce2a
    if (f.zf) goto L_0047ce2a;
L_0047ce05:  // fld dword ptr [ebp + 0x25c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x25cu)));
L_0047ce0b:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_0047ce11:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047ce13:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047ce16:  // je 0x47ce2a
    if (f.zf) goto L_0047ce2a;
L_0047ce18:  // mov dword ptr [ebp + 0x25c], 0
    M32((uint32_t)(ebp + 0x25cu)) = (uint32_t)(0x0u);
L_0047ce22:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047ce23:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047ce24:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047ce25:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047ce26:  // add esp, 0x68
    t0 = ladd<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_0047ce29:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0047ce2a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0047ce2e:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0047ce34:  // fadd dword ptr [ebp + 0x25c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x25cu)));
L_0047ce3a:  // fst dword ptr [ebp + 0x25c]
    F32((uint32_t)(ebp + 0x25cu)) = lf32(ST(0));
L_0047ce40:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047ce42:  // fsin 
    ST(0) = lfsin(ST(0));
L_0047ce44:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_0047ce4a:  // fstp dword ptr [ebp + 0x250]
    F32((uint32_t)(ebp + 0x250u)) = lf32(ST(0));
    lpop(x);
L_0047ce50:  // fcom dword ptr [0x5d85e0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e0u)));
L_0047ce56:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047ce58:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047ce5b:  // jne 0x47ce71
    if (!f.zf) goto L_0047ce71;
L_0047ce5d:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0047ce63:  // fstp dword ptr [ebp + 0x25c]
    F32((uint32_t)(ebp + 0x25cu)) = lf32(ST(0));
    lpop(x);
L_0047ce69:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047ce6a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047ce6b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047ce6c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047ce6d:  // add esp, 0x68
    t0 = ladd<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_0047ce70:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0047ce71:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047ce73:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047ce74:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047ce75:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047ce76:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047ce77:  // add esp, 0x68
    t0 = ladd<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_0047ce7a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0047c970, 0047c970)
