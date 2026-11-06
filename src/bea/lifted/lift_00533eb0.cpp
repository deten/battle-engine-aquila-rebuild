// lifted from 00533eb0 (FUN_00533eb0, 1011 bytes, 333 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00533eb0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00533eb0;
L_00533eb0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00533eb2:  // push 0x5d6eff
    t0 = 0x5d6effu; esp -= 4; M32(esp) = t0;
L_00533eb7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00533ebd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00533ebe:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00533ec5:  // sub esp, 0x28
    t0 = lsub<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_00533ec8:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00533ecc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00533ecd:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00533ecf:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00533ed1:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533ed4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533ed4:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00533ed6:  // mov dword ptr [esp + 4], eax
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(eax);
L_00533eda:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00533edc:  // jne 0x533f02
    if (!f.zf) goto L_00533f02;
L_00533ede:  // push 0x64fad8
    t0 = 0x64fad8u; esp -= 4; M32(esp) = t0;
L_00533ee3:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00533ee8:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533eedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533eed:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00533ef0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00533ef1:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00533ef5:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00533efc:  // add esp, 0x34
    t0 = ladd<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_00533eff:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00533f02:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00533f03:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00533f04:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00533f05:  // push 0x1fc
    t0 = 0x1fcu; esp -= 4; M32(esp) = t0;
L_00533f0a:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_00533f0f:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_00533f11:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00533f13:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00533f18:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533f1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533f1d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00533f1f:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00533f23:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00533f25:  // mov dword ptr [esp + 0x40], ebx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ebx);
L_00533f29:  // je 0x533f34
    if (f.zf) goto L_00533f34;
L_00533f2b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00533f2d:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533f32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533f32:  // mov ebx, esi
    ebx = (uint32_t)(esi);
L_00533f34:  // push 0x1fd
    t0 = 0x1fdu; esp -= 4; M32(esp) = t0;
L_00533f39:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_00533f3e:  // or ebp, 0xffffffff
    t0 = llog<32>(ebp | 0xffffffffu, f);
    ebp = (uint32_t)(t0);
L_00533f41:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_00533f43:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00533f45:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00533f4a:  // mov dword ptr [esp + 0x50], ebp
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ebp);
L_00533f4e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533f53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533f53:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00533f55:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_00533f59:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00533f5b:  // mov dword ptr [esp + 0x40], 1
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x1u);
L_00533f63:  // je 0x533fd5
    if (f.zf) goto L_00533fd5;
L_00533f65:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00533f69:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_00533f70:  // je 0x533f77
    if (f.zf) goto L_00533f77;
L_00533f72:  // add esi, 0x3c
    t0 = ladd<32>(esi, 0x3cu, f);
    esi = (uint32_t)(t0);
L_00533f75:  // jmp 0x533f7c
    goto L_00533f7c;
L_00533f77:  // mov esi, 0x83d9c0
    esi = (uint32_t)(0x83d9c0u);
L_00533f7c:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00533f80:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00533f83:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_00533f87:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00533f88:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00533f8a:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533f8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533f8d:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_00533f90:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00533f92:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_00533f95:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00533f98:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00533f9a:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_00533f9d:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00533fa0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00533fa2:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_00533fa5:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00533fa7:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_00533faa:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00533fad:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00533faf:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_00533fb2:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00533fb5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00533fb7:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00533fba:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00533fbd:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00533fc0:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00533fc3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00533fc5:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00533fc7:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_00533fc9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00533fcb:  // fstp dword ptr [edi]
    F32((uint32_t)(edi)) = lf32(ST(0));
    lpop(x);
L_00533fcd:  // fstp dword ptr [edi + 4]
    F32((uint32_t)(edi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00533fd0:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00533fd3:  // jmp 0x533fd7
    goto L_00533fd7;
L_00533fd5:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00533fd7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00533fd8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00533fda:  // mov dword ptr [esp + 0x44], ebp
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebp);
L_00533fde:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533fe3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533fe3:  // push 0x1fe
    t0 = 0x1feu; esp -= 4; M32(esp) = t0;
L_00533fe8:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_00533fed:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_00533fef:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00533ff1:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00533ff6:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00533ffbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00533ffb:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00533ffd:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_00534001:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00534003:  // mov dword ptr [esp + 0x40], 2
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x2u);
L_0053400b:  // je 0x53407d
    if (f.zf) goto L_0053407d;
L_0053400d:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00534011:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_00534018:  // je 0x53401f
    if (f.zf) goto L_0053401f;
L_0053401a:  // add esi, 0x3c
    t0 = ladd<32>(esi, 0x3cu, f);
    esi = (uint32_t)(t0);
L_0053401d:  // jmp 0x534024
    goto L_00534024;
L_0053401f:  // mov esi, 0x83d9c0
    esi = (uint32_t)(0x83d9c0u);
L_00534024:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00534028:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_0053402c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053402d:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00534030:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00534032:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534035u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534035:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_00534038:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0053403b:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_0053403e:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00534041:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00534043:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_00534046:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00534048:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053404a:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_0053404d:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00534050:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_00534053:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00534056:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00534058:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_0053405b:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0053405d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053405f:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00534062:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00534065:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00534068:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053406b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053406d:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_0053406f:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00534071:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00534073:  // fstp dword ptr [edi]
    F32((uint32_t)(edi)) = lf32(ST(0));
    lpop(x);
L_00534075:  // fstp dword ptr [edi + 4]
    F32((uint32_t)(edi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00534078:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0053407b:  // jmp 0x53407f
    goto L_0053407f;
L_0053407d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0053407f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00534080:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00534082:  // mov dword ptr [esp + 0x44], ebp
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebp);
L_00534086:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053408bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053408b:  // push 0x1ff
    t0 = 0x1ffu; esp -= 4; M32(esp) = t0;
L_00534090:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_00534095:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_00534097:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00534099:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053409e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005340a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005340a3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_005340a5:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_005340a9:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_005340ab:  // mov dword ptr [esp + 0x40], 3
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x3u);
L_005340b3:  // je 0x534130
    if (f.zf) goto L_00534130;
L_005340b5:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005340b9:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_005340c0:  // je 0x5340c7
    if (f.zf) goto L_005340c7;
L_005340c2:  // add esi, 0x3c
    t0 = ladd<32>(esi, 0x3cu, f);
    esi = (uint32_t)(t0);
L_005340c5:  // jmp 0x5340cc
    goto L_005340cc;
L_005340c7:  // mov esi, 0x83d9c0
    esi = (uint32_t)(0x83d9c0u);
L_005340cc:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_005340d0:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_005340d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005340d5:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_005340d8:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_005340da:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005340ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005340dd:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_005340e0:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_005340e2:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_005340e5:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_005340e8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005340e9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005340eb:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_005340ee:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_005340f1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005340f3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005340f6:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_005340f9:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_005340fb:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_005340fe:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00534101:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00534102:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00534104:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_00534107:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053410a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053410c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053410f:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00534112:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00534115:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00534118:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053411b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053411c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053411e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00534120:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00534122:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00534124:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00534126:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00534129:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053412eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053412e:  // jmp 0x534132
    goto L_00534132;
L_00534130:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00534132:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00534133:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00534135:  // mov dword ptr [esp + 0x44], ebp
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebp);
L_00534139:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053413eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053413e:  // push 0x200
    t0 = 0x200u; esp -= 4; M32(esp) = t0;
L_00534143:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_00534148:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_0053414a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0053414c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00534151:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534156u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534156:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00534158:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0053415c:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0053415e:  // mov dword ptr [esp + 0x40], 4
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x4u);
L_00534166:  // je 0x5341e3
    if (f.zf) goto L_005341e3;
L_00534168:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053416c:  // test dword ptr [esi + 0x34], 0x80000000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) & 0x80000000u, f);
L_00534173:  // je 0x53417a
    if (f.zf) goto L_0053417a;
L_00534175:  // add esi, 0x3c
    t0 = ladd<32>(esi, 0x3cu, f);
    esi = (uint32_t)(t0);
L_00534178:  // jmp 0x53417f
    goto L_0053417f;
L_0053417a:  // mov esi, 0x83d9c0
    esi = (uint32_t)(0x83d9c0u);
L_0053417f:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00534183:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_00534187:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00534188:  // mov ecx, dword ptr [ecx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x10u)));
L_0053418b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053418d:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534190u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534190:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_00534193:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00534196:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_00534199:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053419c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053419d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053419f:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_005341a2:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_005341a4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005341a6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005341a9:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_005341ac:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_005341af:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_005341b2:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_005341b5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005341b6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005341b8:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_005341bb:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_005341bd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005341bf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005341c2:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_005341c5:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_005341c8:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_005341cb:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_005341ce:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005341cf:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_005341d1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005341d3:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_005341d5:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_005341d7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005341d9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005341dc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005341e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005341e1:  // jmp 0x5341e5
    goto L_005341e5;
L_005341e3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005341e5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005341e6:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_005341e8:  // mov dword ptr [esp + 0x44], ebp
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebp);
L_005341ec:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005341f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005341f1:  // push 0x201
    t0 = 0x201u; esp -= 4; M32(esp) = t0;
L_005341f6:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_005341fb:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_005341fd:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_005341ff:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00534204:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534209u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534209:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0053420d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053420f:  // mov dword ptr [esp + 0x40], 5
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x5u);
L_00534217:  // je 0x534227
    if (f.zf) goto L_00534227;
L_00534219:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053421b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053421c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0053421e:  // call 0x416d10
    t0 = 0x00416d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534223u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534223:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00534225:  // jmp 0x534229
    goto L_00534229;
L_00534227:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00534229:  // push 0x202
    t0 = 0x202u; esp -= 4; M32(esp) = t0;
L_0053422e:  // push 0x64fa40
    t0 = 0x64fa40u; esp -= 4; M32(esp) = t0;
L_00534233:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_00534235:  // push 0x9c
    t0 = 0x9cu; esp -= 4; M32(esp) = t0;
L_0053423a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0053423f:  // mov dword ptr [esp + 0x50], ebp
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ebp);
L_00534243:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534248u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534248:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0053424a:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_0053424e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00534250:  // mov dword ptr [esp + 0x40], 6
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x6u);
L_00534258:  // je 0x534279
    if (f.zf) goto L_00534279;
L_0053425a:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0053425e:  // mov ecx, dword ptr [ecx + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_00534261:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00534263:  // call dword ptr [edx + 0x34]
    t0 = M32((uint32_t)(edx + 0x34u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534266u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534266:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053426a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053426b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0053426d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00534270:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00534271:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00534272:  // call 0x4198d0
    t0 = 0x004198d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00534277u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00534277:  // jmp 0x53427b
    goto L_0053427b;
L_00534279:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053427b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053427d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053427e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00534280:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00534285:  // mov dword ptr [esp + 0x4c], ebp
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ebp);
L_00534289:  // call 0x4705e0
    t0 = 0x004705e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053428eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053428e:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00534292:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00534293:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00534294:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00534295:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00534296:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0053429d:  // add esp, 0x34
    t0 = ladd<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_005342a0:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00533eb0, 00533eb0)
