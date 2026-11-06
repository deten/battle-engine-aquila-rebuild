// lifted from 00458ee0 (vslot5, 1694 bytes, 502 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00458ee0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00458ee0;
L_00458ee0:  // sub esp, 0x628
    t0 = lsub<32>(esp, 0x628u, f);
    esp = (uint32_t)(t0);
L_00458ee6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00458ee7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00458ee8:  // mov ebp, dword ptr [esp + 0x638]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x638u)));
L_00458eef:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00458ef0:  // mov esi, dword ptr [esp + 0x638]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x638u)));
L_00458ef7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00458ef8:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00458efa:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00458efb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00458efc:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00458f01:  // call 0x467200
    t0 = 0x00467200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458f06u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458f06:  // fld dword ptr [esp + 0x63c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x63cu)));
L_00458f0d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00458f13:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00458f15:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00458f17:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00458f1a:  // jne 0x4593e7
    if (!f.zf) goto L_004593e7;
L_00458f20:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_00458f24:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_00458f29:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00458f2a:  // call 0x514950
    t0 = 0x00514950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458f2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458f2f:  // fld dword ptr [esp + 0x63c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x63cu)));
L_00458f36:  // cmp ebp, 0xd
    t0 = lsub<32>(ebp, 0xdu, f);
L_00458f39:  // jne 0x458f69
    if (!f.zf) goto L_00458f69;
L_00458f3b:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00458f41:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00458f43:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00458f49:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00458f4b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00458f4e:  // je 0x458f5a
    if (f.zf) goto L_00458f5a;
L_00458f50:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00458f52:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00458f58:  // jmp 0x458fa1
    goto L_00458fa1;
L_00458f5a:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00458f60:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00458f62:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00458f65:  // jne 0x458fa1
    if (!f.zf) goto L_00458fa1;
L_00458f67:  // jmp 0x458f99
    goto L_00458f99;
L_00458f69:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00458f6f:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_00458f75:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00458f7b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00458f7d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00458f80:  // je 0x458f8c
    if (f.zf) goto L_00458f8c;
L_00458f82:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00458f84:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00458f8a:  // jmp 0x458fa1
    goto L_00458fa1;
L_00458f8c:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00458f92:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00458f94:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00458f97:  // jne 0x458fa1
    if (!f.zf) goto L_00458fa1;
L_00458f99:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00458f9b:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00458fa1:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00458fa7:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00458fab:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00458faf:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_00458fb1:  // jge 0x458fb7
    if ((f.sf == f.of)) goto L_00458fb7;
L_00458fb3:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00458fb5:  // jmp 0x458fc4
    goto L_00458fc4;
L_00458fb7:  // cmp ebp, 0xff
    t0 = lsub<32>(ebp, 0xffu, f);
L_00458fbd:  // jle 0x458fc4
    if ((f.zf || f.sf != f.of)) goto L_00458fc4;
L_00458fbf:  // mov ebp, 0xff
    ebp = (uint32_t)(0xffu);
L_00458fc4:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00458fc6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00458fc8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00458fc9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00458fce:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458fd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458fd3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00458fd5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00458fd7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00458fd8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00458fdd:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458fe2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458fe2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00458fe3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00458fe4:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00458fe9:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458feeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458fee:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_00458ff3:  // call 0x5019c0
    t0 = 0x005019c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458ff8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458ff8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00458ffa:  // je 0x45905a
    if (f.zf) goto L_0045905a;
L_00458ffc:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00459000:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00459004:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459005:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00459006:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459007:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459008:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0045900a:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_0045900f:  // call 0x514960
    t0 = 0x00514960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459014u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459014:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00459018:  // mov ecx, dword ptr [edi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0045901b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0045901d:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0045901f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00459021:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00459025:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00459029:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0045902d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0045902f:  // sete al
    eax = (eax & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_00459032:  // fsubr dword ptr [esp + 0x20]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x20u))) - (ST(0));
L_00459036:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00459038:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459039:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045903a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045903f:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_00459044:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459045:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459046:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00459048:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045904b:  // push 0x42f00000
    t0 = 0x42f00000u; esp -= 4; M32(esp) = t0;
L_00459050:  // push 0x43480000
    t0 = 0x43480000u; esp -= 4; M32(esp) = t0;
L_00459055:  // call 0x4595b0
    t0 = 0x004595b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045905au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045905a:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0045905e:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00459060:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00459062:  // jle 0x459128
    if ((f.zf || f.sf != f.of)) goto L_00459128;
L_00459068:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0045906c:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_00459070:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00459071:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00459075:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459076:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0045907a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045907b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045907c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045907d:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_00459082:  // call 0x514960
    t0 = 0x00514960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459087u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459087:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0045908b:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0045908f:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_00459091:  // je 0x459097
    if (f.zf) goto L_00459097;
L_00459093:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_00459095:  // jne 0x45909f
    if (!f.zf) goto L_0045909f;
L_00459097:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0045909b:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0045909f:  // cmp dword ptr [edi + 0xc], 1
    t0 = lsub<32>(M32((uint32_t)(edi + 0xcu)), 0x1u, f);
L_004590a3:  // jne 0x4590b1
    if (!f.zf) goto L_004590b1;
L_004590a5:  // cmp dword ptr [edi + 8], esi
    t0 = lsub<32>(M32((uint32_t)(edi + 0x8u)), esi, f);
L_004590a8:  // jne 0x4590b1
    if (!f.zf) goto L_004590b1;
L_004590aa:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004590af:  // jmp 0x4590b3
    goto L_004590b3;
L_004590b1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004590b3:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004590b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004590b8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004590b9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004590ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004590bb:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004590bf:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004590c3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004590c4:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004590c8:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_004590cd:  // push 0x3f63d70a
    t0 = 0x3f63d70au; esp -= 4; M32(esp) = t0;
L_004590d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004590d3:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004590d5:  // fsubr dword ptr [esp + 0x38]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x38u))) - (ST(0));
L_004590d9:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004590da:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004590dc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004590dd:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004590df:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004590e2:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004590e6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004590e8:  // fild dword ptr [esp + 0x3c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x3cu)));
L_004590ec:  // and ecx, 1
    t0 = llog<32>(ecx & 0x1u, f);
    ecx = (uint32_t)(t0);
L_004590ef:  // push 0x438c0000
    t0 = 0x438c0000u; esp -= 4; M32(esp) = t0;
L_004590f4:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004590f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004590f9:  // fmul dword ptr [0x5d963c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d963cu)));
L_004590ff:  // fild dword ptr [esp + 0x44]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x44u)));
L_00459103:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00459105:  // fmul dword ptr [0x5db4e4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4e4u)));
L_0045910b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045910d:  // fadd dword ptr [0x5db4e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4e0u)));
L_00459113:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00459116:  // call 0x4595b0
    t0 = 0x004595b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045911bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045911b:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0045911f:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00459120:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00459122:  // jl 0x459068
    if ((f.sf != f.of)) goto L_00459068;
L_00459128:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0045912c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045912d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045912e:  // push 0x53
    t0 = 0x53u; esp -= 4; M32(esp) = t0;
L_00459130:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459135u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459135:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00459138:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045913d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045913e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00459140:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459145u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459145:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00459147:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045914cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045914c:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0045914e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00459153:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00459158:  // push 0x3f4a3d71
    t0 = 0x3f4a3d71u; esp -= 4; M32(esp) = t0;
L_0045915d:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_00459160:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459161:  // sub esi, ebp
    t0 = lsub<32>(esi, ebp, f);
    esi = (uint32_t)(t0);
L_00459163:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459164:  // push 0x53
    t0 = 0x53u; esp -= 4; M32(esp) = t0;
L_00459166:  // shl esi, 0x10
    t0 = lshl<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_00459169:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045916eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045916e:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_00459172:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00459175:  // fsubr dword ptr [0x5db4dc]
    ST(0) = ((long double)F32((uint32_t)(0x5db4dcu))) - (ST(0));
L_0045917b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045917c:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0045917e:  // and eax, 0xff7f7f00
    t0 = llog<32>(eax & 0xff7f7f00u, f);
    eax = (uint32_t)(t0);
L_00459183:  // fsub dword ptr [0x5d85cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ccu)));
L_00459189:  // or eax, 0x7f7f00
    t0 = llog<32>(eax | 0x7f7f00u, f);
    eax = (uint32_t)(t0);
L_0045918e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045918f:  // push 0x43aa0000
    t0 = 0x43aa0000u; esp -= 4; M32(esp) = t0;
L_00459194:  // fadd dword ptr [0x5db020]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db020u)));
L_0045919a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045919b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004591a0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004591a3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004591a5:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004591aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004591aa:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004591ac:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004591b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004591b1:  // mov eax, dword ptr [edi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004591b4:  // and esi, 0xff7f7f7f
    t0 = llog<32>(esi & 0xff7f7f7fu, f);
    esi = (uint32_t)(t0);
L_004591ba:  // or esi, 0x7f7f7f
    t0 = llog<32>(esi | 0x7f7f7fu, f);
    esi = (uint32_t)(t0);
L_004591c0:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004591c2:  // jne 0x4592a9
    if (!f.zf) goto L_004592a9;
L_004591c8:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004591cd:  // call 0x5019c0
    t0 = 0x005019c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004591d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004591d2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004591d4:  // je 0x459338
    if (f.zf) goto L_00459338;
L_004591da:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004591de:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004591e2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004591e3:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004591e7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004591e8:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004591ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004591ed:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004591ee:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004591f0:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004591f5:  // call 0x514960
    t0 = 0x00514960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004591fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004591fa:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004591fe:  // sub eax, 0x800
    t0 = lsub<32>(eax, 0x800u, f);
    eax = (uint32_t)(t0);
L_00459203:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00459207:  // jns 0x45920d
    if (!f.sf) goto L_0045920d;
L_00459209:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0045920d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00459211:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00459215:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00459216:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459217:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_0045921c:  // call 0x5151a0
    t0 = 0x005151a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459221u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459221:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00459225:  // lea ecx, [esp + 0x238]
    ecx = (uint32_t)((uint32_t)(esp + 0x238u));
L_0045922c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045922d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045922e:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_00459233:  // call 0x5151a0
    t0 = 0x005151a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459238u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459238:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045923d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00459242:  // push 0x3f4a3d71
    t0 = 0x3f4a3d71u; esp -= 4; M32(esp) = t0;
L_00459247:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459248:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459249:  // push 0x55
    t0 = 0x55u; esp -= 4; M32(esp) = t0;
L_0045924b:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459250u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459250:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00459253:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00459258:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459259:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045925a:  // push 0x43aa0000
    t0 = 0x43aa0000u; esp -= 4; M32(esp) = t0;
L_0045925f:  // push 0x42b80000
    t0 = 0x42b80000u; esp -= 4; M32(esp) = t0;
L_00459264:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459265:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045926au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045926a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045926c:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459271u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459271:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00459276:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045927b:  // push 0x3f4a3d71
    t0 = 0x3f4a3d71u; esp -= 4; M32(esp) = t0;
L_00459280:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_00459284:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459285:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459286:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00459287:  // push 0x43aa0000
    t0 = 0x43aa0000u; esp -= 4; M32(esp) = t0;
L_0045928c:  // push 0x43ff0000
    t0 = 0x43ff0000u; esp -= 4; M32(esp) = t0;
L_00459291:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00459293:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00459298:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045929du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045929d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045929f:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004592a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004592a4:  // jmp 0x459338
    goto L_00459338;
L_004592a9:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004592ad:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004592b1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004592b2:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004592b6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004592b7:  // mov edx, dword ptr [edi + 0x10]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_004592ba:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004592be:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004592bf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004592c0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004592c1:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004592c6:  // call 0x514960
    t0 = 0x00514960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004592cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004592cb:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004592cf:  // sub eax, 0x800
    t0 = lsub<32>(eax, 0x800u, f);
    eax = (uint32_t)(t0);
L_004592d4:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004592d8:  // jns 0x4592de
    if (!f.sf) goto L_004592de;
L_004592da:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_004592de:  // cmp dword ptr [esp + 0x24], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x24u)), ebx, f);
L_004592e2:  // je 0x459338
    if (f.zf) goto L_00459338;
L_004592e4:  // cmp dword ptr [esp + 0x20], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x20u)), ebx, f);
L_004592e8:  // je 0x459338
    if (f.zf) goto L_00459338;
L_004592ea:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_004592ed:  // lea eax, [esp + 0x438]
    eax = (uint32_t)((uint32_t)(esp + 0x438u));
L_004592f4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004592f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004592f6:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004592fb:  // call 0x5149a0
    t0 = 0x005149a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459300u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459300:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00459304:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00459308:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00459309:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045930a:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_0045930f:  // call 0x5151a0
    t0 = 0x005151a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459314u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459314:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00459318:  // lea ecx, [esp + 0x238]
    ecx = (uint32_t)((uint32_t)(esp + 0x238u));
L_0045931f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459320:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00459321:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_00459326:  // call 0x5151a0
    t0 = 0x005151a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045932bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045932b:  // mov byte ptr [0x9c68ac], bl
    M8((uint32_t)(0x9c68acu)) = (uint8_t)((ebx & 0xffu));
L_00459331:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00459338:  // cmp dword ptr [edi + 0x10], -2
    t0 = lsub<32>(M32((uint32_t)(edi + 0x10u)), 0xfffffffeu, f);
L_0045933c:  // jne 0x4593b6
    if (!f.zf) goto L_004593b6;
L_0045933e:  // cmp dword ptr [0x677614], ebx
    t0 = lsub<32>(M32((uint32_t)(0x677614u)), ebx, f);
L_00459344:  // jne 0x4593b6
    if (!f.zf) goto L_004593b6;
L_00459346:  // fld dword ptr [esp + 0x63c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x63cu)));
L_0045934d:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00459353:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00459355:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00459358:  // je 0x4593b6
    if (f.zf) goto L_004593b6;
L_0045935a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045935b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045935c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045935d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045935e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045935f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00459361:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00459366:  // mov dword ptr [0x675688], ebx
    M32((uint32_t)(0x675688u)) = (uint32_t)(ebx);
L_0045936c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459371u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459371:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459372:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459373:  // push 0x58
    t0 = 0x58u; esp -= 4; M32(esp) = t0;
L_00459375:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045937au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045937a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045937d:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_00459382:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459383:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00459388:  // push 0x43e10000
    t0 = 0x43e10000u; esp -= 4; M32(esp) = t0;
L_0045938d:  // push 0x43aa0000
    t0 = 0x43aa0000u; esp -= 4; M32(esp) = t0;
L_00459392:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00459397:  // call 0x44d390
    t0 = 0x0044d390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045939cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045939c:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_004593a1:  // call 0x44d6f0
    t0 = 0x0044d6f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004593a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004593a6:  // mov dword ptr [0x675688], 1
    M32((uint32_t)(0x675688u)) = (uint32_t)(0x1u);
L_004593b0:  // mov dword ptr [0x677614], ebx
    M32((uint32_t)(0x677614u)) = (uint32_t)(ebx);
L_004593b6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004593b8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004593ba:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004593bb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004593c0:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004593c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004593c5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004593c7:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004593c9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004593ca:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004593cf:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004593d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004593d4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004593d5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004593d6:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004593db:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004593e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004593e0:  // mov esi, dword ptr [esp + 0x63c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x63cu)));
L_004593e7:  // cmp dword ptr [edi + 0x10], -2
    t0 = lsub<32>(M32((uint32_t)(edi + 0x10u)), 0xfffffffeu, f);
L_004593eb:  // jne 0x4593f5
    if (!f.zf) goto L_004593f5;
L_004593ed:  // cmp dword ptr [0x677614], ebx
    t0 = lsub<32>(M32((uint32_t)(0x677614u)), ebx, f);
L_004593f3:  // je 0x459402
    if (f.zf) goto L_00459402;
L_004593f5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004593f6:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_004593f8:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_004593fd:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459402u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459402:  // mov eax, dword ptr [0x8a968c]
    eax = (uint32_t)(M32((uint32_t)(0x8a968cu)));
L_00459407:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00459408:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_0045940b:  // jne 0x459411
    if (!f.zf) goto L_00459411;
L_0045940d:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0045940f:  // jmp 0x459420
    goto L_00459420;
L_00459411:  // mov edi, dword ptr [0x8a9580]
    edi = (uint32_t)(M32((uint32_t)(0x8a9580u)));
L_00459417:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00459419:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_0045941b:  // setne al
    eax = (eax & 0xffffff00u) | ((uint32_t)(!f.zf) & 0xffu);
L_0045941e:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0045941f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00459420:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00459425:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045942au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045942a:  // fld dword ptr [esp + 0x63c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x63cu)));
L_00459431:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00459437:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_0045943d:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00459441:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00459447:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00459449:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045944c:  // je 0x459458
    if (f.zf) goto L_00459458;
L_0045944e:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00459456:  // jmp 0x459471
    goto L_00459471;
L_00459458:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0045945c:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00459462:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00459464:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00459467:  // jne 0x459471
    if (!f.zf) goto L_00459471;
L_00459469:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_00459471:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00459475:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00459476:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0045947b:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459480u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459480:  // cmp dword ptr [0x8a9580], ebx
    t0 = lsub<32>(M32((uint32_t)(0x8a9580u)), ebx, f);
L_00459486:  // je 0x45949b
    if (f.zf) goto L_0045949b;
L_00459488:  // mov eax, dword ptr [0x662aa8]
    eax = (uint32_t)(M32((uint32_t)(0x662aa8u)));
L_0045948d:  // mov ebp, 0x1e
    ebp = (uint32_t)(0x1eu);
L_00459492:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_00459494:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00459496:  // add eax, 0x12
    t0 = ladd<32>(eax, 0x12u, f);
    eax = (uint32_t)(t0);
L_00459499:  // jmp 0x4594a5
    goto L_004594a5;
L_0045949b:  // mov eax, 0xd
    eax = (uint32_t)(0xdu);
L_004594a0:  // mov ebp, 0x1f
    ebp = (uint32_t)(0x1fu);
L_004594a5:  // mov edx, dword ptr [esp + 0x640]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x640u)));
L_004594ac:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004594ad:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004594ae:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004594af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004594b0:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004594b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004594b5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004594b8:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004594bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004594be:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004594c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004594c3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004594c7:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004594cd:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004594d1:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004594d5:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004594d7:  // jge 0x4594dd
    if ((f.sf == f.of)) goto L_004594dd;
L_004594d9:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004594db:  // jmp 0x4594ea
    goto L_004594ea;
L_004594dd:  // cmp edi, 0xff
    t0 = lsub<32>(edi, 0xffu, f);
L_004594e3:  // jle 0x4594ea
    if ((f.zf || f.sf != f.of)) goto L_004594ea;
L_004594e5:  // mov edi, 0xff
    edi = (uint32_t)(0xffu);
L_004594ea:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004594ee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004594ef:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004594f0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004594f1:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004594f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004594f6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004594f9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004594fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004594ff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00459501:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459506u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459506:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00459508:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045950du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045950d:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0045950f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459510:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_00459513:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00459514:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00459519:  // sub esi, edi
    t0 = lsub<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_0045951b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045951c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045951d:  // shl esi, 0x10
    t0 = lshl<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_00459520:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459525u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459525:  // fild dword ptr [esp + 0x44]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x44u)));
L_00459529:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045952c:  // and esi, 0xff000000
    t0 = llog<32>(esi & 0xff000000u, f);
    esi = (uint32_t)(t0);
L_00459532:  // xor esi, 0x3f3f5f
    t0 = llog<32>(esi ^ 0x3f3f5fu, f);
    esi = (uint32_t)(t0);
L_00459538:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0045953e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045953f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00459540:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00459545:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045954a:  // fsubr dword ptr [0x5db4d8]
    ST(0) = ((long double)F32((uint32_t)(0x5db4d8u))) - (ST(0));
L_00459550:  // push 0x3c23d70a
    t0 = 0x3c23d70au; esp -= 4; M32(esp) = t0;
L_00459555:  // push 0x42c80000
    t0 = 0x42c80000u; esp -= 4; M32(esp) = t0;
L_0045955a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045955b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00459560:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00459563:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00459565:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045956au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045956a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045956c:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00459571u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00459571:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00459572:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00459573:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00459574:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00459575:  // add esp, 0x628
    t0 = ladd<32>(esp, 0x628u, f);
    esp = (uint32_t)(t0);
L_0045957b:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00458ee0, 00458ee0)
