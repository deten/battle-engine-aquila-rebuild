// lifted from 0041a000 (vslot1, 401 bytes, 129 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041a000(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041a000;
L_0041a000:  // sub esp, 0x78
    t0 = lsub<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0041a003:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041a004:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0041a006:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041a007:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041a008:  // fld dword ptr [ebx + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x3cu)));
L_0041a00b:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_0041a011:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041a013:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041a016:  // je 0x41a034
    if (f.zf) goto L_0041a034;
L_0041a018:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_0041a01f:  // lea esi, [ebx + 0x40]
    esi = (uint32_t)((uint32_t)(ebx + 0x40u));
L_0041a022:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a027:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0041a029:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a02b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a02c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a02d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a02e:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0041a031:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a034:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041a035:  // lea ebp, [ebx + 0x40]
    ebp = (uint32_t)((uint32_t)(ebx + 0x40u));
L_0041a038:  // lea edi, [ebx + 0x70]
    edi = (uint32_t)((uint32_t)(ebx + 0x70u));
L_0041a03b:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a040:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0041a042:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041a044:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a046:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0041a04c:  // fsub dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0041a04f:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_0041a052:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041a054:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0041a058:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0041a05c:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041a060:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a061:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a066u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a066:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0041a06a:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0041a070:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_0041a074:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0041a078:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0041a07c:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0041a082:  // fadd dword ptr [esp + 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x40u)));
L_0041a086:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0041a08a:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0041a08e:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0041a094:  // fadd dword ptr [esp + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x50u)));
L_0041a098:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_0041a09c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0041a09e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0041a0a2:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0041a0a4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041a0a6:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0041a0a8:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0041a0aa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0041a0ac:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0041a0b0:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0041a0b4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0041a0b6:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0041a0b8:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0041a0ba:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041a0bc:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0041a0c2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041a0c4:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041a0c7:  // jne 0x41a0ed
    if (!f.zf) goto L_0041a0ed;
L_0041a0c9:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0041a0cf:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0041a0d3:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041a0d5:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0041a0d9:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0041a0dd:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041a0df:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0041a0e3:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0041a0e5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041a0e7:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_0041a0eb:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0041a0ed:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041a0ef:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0041a0f3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0041a0f5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041a0f7:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0041a0f9:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0041a0fb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0041a0fd:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0041a101:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0041a105:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0041a107:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0041a109:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0041a10b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041a10d:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0041a111:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0041a117:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041a119:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0041a11c:  // jne 0x41a131
    if (!f.zf) goto L_0041a131;
L_0041a11e:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0041a122:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_0041a126:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a12bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a12b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0041a12f:  // jmp 0x41a139
    goto L_0041a139;
L_0041a131:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0041a139:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0041a13d:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0041a141:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0041a143:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0041a147:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041a149:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041a14a:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_0041a14e:  // fchs 
    ST(0) = -ST(0);
L_0041a150:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0041a154:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0041a158:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041a159:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a15eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a15e:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0041a163:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a168:  // lea esi, [esp + 0x58]
    esi = (uint32_t)((uint32_t)(esp + 0x58u));
L_0041a16c:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0041a16e:  // mov dword ptr [ebx + 0x3c], eax
    M32((uint32_t)(ebx + 0x3cu)) = (uint32_t)(eax);
L_0041a171:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0041a178:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a17a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041a17f:  // lea esi, [esp + 0x58]
    esi = (uint32_t)((uint32_t)(esp + 0x58u));
L_0041a183:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0041a185:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041a186:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041a188:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a189:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a18a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a18b:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0041a18e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0041a000, 0041a000)
