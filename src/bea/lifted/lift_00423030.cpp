// lifted from 00423030 (vslot3, 1119 bytes, 324 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00423030(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00423030;
L_00423030:  // sub esp, 0x3c
    t0 = lsub<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00423033:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00423034:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00423036:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00423037:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0042303a:  // test byte ptr [eax + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(eax + 0x2cu)) & 0x4u, f);
L_0042303e:  // jne 0x423425
    if (!f.zf) goto L_00423425;
L_00423044:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_00423047:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_0042304a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042304b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0042304e:  // fld dword ptr [esi + 0xc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xcu)));
L_00423051:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_00423054:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00423055:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00423058:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0042305b:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_0042305e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042305f:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00423063:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00423066:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042306bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042306b:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0042306f:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00423073:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00423075:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00423078:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042307c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042307d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0042307f:  // fchs 
    ST(0) = -ST(0);
L_00423081:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00423085:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00423089:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0042308d:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0042308f:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_00423091:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00423095:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00423099:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_0042309b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0042309d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0042309f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004230a1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004230a3:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004230a5:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004230a9:  // call dword ptr [eax + 0x6c]
    t0 = M32((uint32_t)(eax + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004230acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004230ac:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004230ae:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004230b1:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004230b3:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004230b6:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004230ba:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004230bb:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004230bd:  // fchs 
    ST(0) = -ST(0);
L_004230bf:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004230c3:  // call dword ptr [eax + 0x6c]
    t0 = M32((uint32_t)(eax + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004230c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004230c6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004230c8:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004230cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004230cd:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004230d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004230d1:  // add eax, 0x3c
    t0 = ladd<32>(eax, 0x3cu, f);
    eax = (uint32_t)(t0);
L_004230d4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004230d6:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_004230d9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004230dc:  // fld dword ptr [eax + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + 0x10u)));
L_004230df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004230e0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004230e3:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004230e5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004230e6:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004230ea:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004230ed:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004230f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004230f2:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004230f5:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004230f8:  // je 0x42310b
    if (f.zf) goto L_0042310b;
L_004230fa:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004230fe:  // sub eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00423101:  // jne 0x42311d
    if (!f.zf) goto L_0042311d;
L_00423103:  // fsub dword ptr [0x5d85e8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e8u)));
L_00423109:  // jmp 0x42311d
    goto L_0042311d;
L_0042310b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0042310f:  // fadd dword ptr [0x5d85e4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e4u)));
L_00423115:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_0042311d:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_00423123:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00423125:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00423128:  // jne 0x423130
    if (!f.zf) goto L_00423130;
L_0042312a:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00423130:  // fcom dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
L_00423136:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00423138:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0042313b:  // je 0x423143
    if (f.zf) goto L_00423143;
L_0042313d:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00423143:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00423147:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_0042314d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042314f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00423152:  // jne 0x423162
    if (!f.zf) goto L_00423162;
L_00423154:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00423158:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0042315e:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00423162:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00423166:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_0042316c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042316e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00423171:  // je 0x423181
    if (f.zf) goto L_00423181;
L_00423173:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00423177:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_0042317d:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00423181:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00423184:  // mov eax, dword ptr [ecx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x13cu)));
L_0042318a:  // cmp dword ptr [eax + 0x20], 2
    t0 = lsub<32>(M32((uint32_t)(eax + 0x20u)), 0x2u, f);
L_0042318e:  // je 0x423291
    if (f.zf) goto L_00423291;
L_00423194:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_00423197:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00423199:  // je 0x4231be
    if (f.zf) goto L_004231be;
L_0042319b:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_0042319e:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004231a1:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004231a7:  // mov dword ptr [esp + 8], 0xbf860a92
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0xbf860a92u);
L_004231af:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004231b1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004231b4:  // je 0x4231be
    if (f.zf) goto L_004231be;
L_004231b6:  // mov dword ptr [esp + 8], 0x3f860a92
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x3f860a92u);
L_004231be:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004231c1:  // fcomp dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
    lpop(x);
L_004231c7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004231c9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004231cc:  // je 0x4231d8
    if (f.zf) goto L_004231d8;
L_004231ce:  // mov dword ptr [esp + 8], 0xbf490fdb
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0xbf490fdbu);
L_004231d6:  // jmp 0x42321b
    goto L_0042321b;
L_004231d8:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004231db:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004231e1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004231e3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004231e6:  // je 0x423203
    if (f.zf) goto L_00423203;
L_004231e8:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004231ec:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004231f2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004231f4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004231f7:  // jne 0x423203
    if (!f.zf) goto L_00423203;
L_004231f9:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_00423201:  // jmp 0x42321b
    goto L_0042321b;
L_00423203:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_00423206:  // fcomp dword ptr [0x5d85d0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d0u)));
    lpop(x);
L_0042320c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042320e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00423211:  // jne 0x42321b
    if (!f.zf) goto L_0042321b;
L_00423213:  // mov dword ptr [esp + 8], 0x3f490fdb
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x3f490fdbu);
L_0042321b:  // mov eax, dword ptr [ecx + 0x244]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x244u)));
L_00423221:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00423224:  // je 0x423291
    if (f.zf) goto L_00423291;
L_00423226:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00423229:  // je 0x423291
    if (f.zf) goto L_00423291;
L_0042322b:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_0042322e:  // fcomp dword ptr [0x5d85cc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ccu)));
    lpop(x);
L_00423234:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00423236:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00423239:  // je 0x423245
    if (f.zf) goto L_00423245;
L_0042323b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0042323d:  // fld dword ptr [0x5d85c8]
    lpush(x, (long double)F32((uint32_t)(0x5d85c8u)));
L_00423243:  // jmp 0x423291
    goto L_00423291;
L_00423245:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_00423248:  // fcomp dword ptr [0x5d85c4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c4u)));
    lpop(x);
L_0042324e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00423250:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00423253:  // jne 0x42325f
    if (!f.zf) goto L_0042325f;
L_00423255:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00423257:  // fld dword ptr [0x5d85e4]
    lpush(x, (long double)F32((uint32_t)(0x5d85e4u)));
L_0042325d:  // jmp 0x423291
    goto L_00423291;
L_0042325f:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_00423262:  // fcomp dword ptr [0x5d85cc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ccu)));
    lpop(x);
L_00423268:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042326a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0042326d:  // je 0x423279
    if (f.zf) goto L_00423279;
L_0042326f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00423271:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00423277:  // jmp 0x423291
    goto L_00423291;
L_00423279:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_0042327c:  // fcomp dword ptr [0x5d85c4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c4u)));
    lpop(x);
L_00423282:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00423284:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00423287:  // jne 0x423291
    if (!f.zf) goto L_00423291;
L_00423289:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0042328b:  // fld dword ptr [0x5d85e8]
    lpush(x, (long double)F32((uint32_t)(0x5d85e8u)));
L_00423291:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00423293:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00423297:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0042329d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042329f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004232a2:  // je 0x4232bf
    if (f.zf) goto L_004232bf;
L_004232a4:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004232a6:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004232ac:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004232ae:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004232b1:  // jne 0x4232bf
    if (!f.zf) goto L_004232bf;
L_004232b3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004232b5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004232b7:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004232bd:  // jmp 0x4232e9
    goto L_004232e9;
L_004232bf:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004232c3:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004232c9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004232cb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004232ce:  // jne 0x4232e9
    if (!f.zf) goto L_004232e9;
L_004232d0:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004232d2:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004232d8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004232da:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004232dd:  // je 0x4232e9
    if (f.zf) goto L_004232e9;
L_004232df:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004232e1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004232e3:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004232e9:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_004232ed:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004232ef:  // fcom dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
L_004232f5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004232f7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004232fa:  // jne 0x423304
    if (!f.zf) goto L_00423304;
L_004232fc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004232fe:  // fld dword ptr [0x5d85e4]
    lpush(x, (long double)F32((uint32_t)(0x5d85e4u)));
L_00423304:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00423308:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0042330c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00423310:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00423314:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00423316:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0042331a:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0042331e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00423320:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00423326:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00423328:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0042332b:  // jne 0x42332f
    if (!f.zf) goto L_0042332f;
L_0042332d:  // fchs 
    ST(0) = -ST(0);
L_0042332f:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00423333:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00423337:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00423339:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_0042333f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00423341:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00423344:  // jne 0x423352
    if (!f.zf) goto L_00423352;
L_00423346:  // mov dword ptr [ecx + 0x174], 0x3f800000
    M32((uint32_t)(ecx + 0x174u)) = (uint32_t)(0x3f800000u);
L_00423350:  // jmp 0x42335c
    goto L_0042335c;
L_00423352:  // mov dword ptr [ecx + 0x174], 0
    M32((uint32_t)(ecx + 0x174u)) = (uint32_t)(0x0u);
L_0042335c:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00423360:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00423363:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00423367:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0042336b:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_0042336f:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00423373:  // add eax, 0x120
    t0 = ladd<32>(eax, 0x120u, f);
    eax = (uint32_t)(t0);
L_00423378:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_0042337c:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00423380:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00423382:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00423386:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00423389:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0042338c:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0042338f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00423391:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00423394u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00423394:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_0042339a:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0042339d:  // add eax, 0x14c
    t0 = ladd<32>(eax, 0x14cu, f);
    eax = (uint32_t)(t0);
L_004233a2:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_004233a8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004233aa:  // fmul dword ptr [eax - 0x10c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0xfffffef4u)));
L_004233b0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004233b4:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004233b8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004233ba:  // fmul dword ptr [eax - 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0xffffff04u)));
L_004233c0:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004233c4:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004233c8:  // fmul dword ptr [eax - 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0xffffff14u)));
L_004233ce:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004233d0:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004233d4:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004233d8:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004233db:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004233df:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004233e2:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004233e5:  // mov edi, dword ptr [esi + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004233e8:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004233ea:  // call 0x422940
    t0 = 0x00422940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004233efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004233ef:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004233f1:  // je 0x423489
    if (f.zf) goto L_00423489;
L_004233f7:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004233fa:  // fld dword ptr [eax + 0x11c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x11cu)));
L_00423400:  // fadd dword ptr [0x5d85e4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e4u)));
L_00423406:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_0042340c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042340e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00423411:  // jne 0x423419
    if (!f.zf) goto L_00423419;
L_00423413:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00423419:  // fstp dword ptr [edi + 0x128]
    F32((uint32_t)(edi + 0x128u)) = lf32(ST(0));
    lpop(x);
L_0042341f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00423420:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00423421:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00423424:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00423425:  // mov dword ptr [eax + 0x174], 0
    M32((uint32_t)(eax + 0x174u)) = (uint32_t)(0x0u);
L_0042342f:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00423432:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00423434:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00423437u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00423437:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_0042343d:  // mov esi, dword ptr [esi + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00423440:  // add esi, 0x14c
    t0 = ladd<32>(esi, 0x14cu, f);
    esi = (uint32_t)(t0);
L_00423446:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_0042344c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0042344e:  // fmul dword ptr [esi - 0x10c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xfffffef4u)));
L_00423454:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00423458:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0042345c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0042345e:  // fmul dword ptr [esi - 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xffffff04u)));
L_00423464:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00423468:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0042346c:  // fmul dword ptr [esi - 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xffffff14u)));
L_00423472:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_00423474:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00423478:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0042347c:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00423480:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_00423483:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_00423486:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_00423489:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042348a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042348b:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0042348e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00423030, 00423030)
