// lifted from 00555be0 (FUN_00555be0, 1979 bytes, 516 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00555be0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00555be0;
L_00555be0:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00555be4:  // fcomp dword ptr [0x5e5998]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5e5998u)));
    lpop(x);
L_00555bea:  // sub esp, 0x8c
    t0 = lsub<32>(esp, 0x8cu, f);
    esp = (uint32_t)(t0);
L_00555bf0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00555bf2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00555bf5:  // jne 0x555c17
    if (!f.zf) goto L_00555c17;
L_00555bf7:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00555bfe:  // fsub dword ptr [0x5e5998]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e5998u)));
L_00555c04:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00555c0a:  // fadd dword ptr [0x5e5998]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e5998u)));
L_00555c10:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00555c17:  // cmp dword ptr [0x8557f4], 5
    t0 = lsub<32>(M32((uint32_t)(0x8557f4u)), 0x5u, f);
L_00555c1e:  // jne 0x555c3f
    if (!f.zf) goto L_00555c3f;
L_00555c20:  // mov eax, dword ptr [esp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_00555c27:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00555c29:  // and eax, 0xff000000
    t0 = llog<32>(eax & 0xff000000u, f);
    eax = (uint32_t)(t0);
L_00555c2e:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_00555c30:  // and ecx, 0x7f7f7f
    t0 = llog<32>(ecx & 0x7f7f7fu, f);
    ecx = (uint32_t)(t0);
L_00555c36:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00555c38:  // mov dword ptr [esp + 0xb0], ecx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ecx);
L_00555c3f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00555c40:  // mov esi, dword ptr [esp + 0xa0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00555c47:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00555c48:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_00555c4e:  // mov cl, byte ptr [esi + 0xb2]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0xb2u))) & 0xffu);
L_00555c54:  // movsx edx, word ptr [esi + 0xb0]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esi + 0xb0u))));
L_00555c5b:  // shl eax, cl
    t0 = lshl<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_00555c5d:  // shl edx, cl
    t0 = lshl<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_00555c5f:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_00555c63:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00555c6a:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00555c6e:  // mov dword ptr [esp + 8], edx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(edx);
L_00555c72:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00555c73:  // cmp eax, 7
    t0 = lsub<32>(eax, 0x7u, f);
L_00555c76:  // fmul dword ptr [esp + 0xbc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xbcu)));
L_00555c7d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00555c81:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00555c85:  // fmul dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc0u)));
L_00555c8c:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00555c90:  // ja 0x555d4f
    if ((!f.cf && !f.zf)) goto L_00555d4f;
L_00555c96:  // jmp dword ptr [eax*4 + 0x55639c]
    t0 = M32((uint32_t)(eax * 4u + 0x55639cu));
    switch (t0) {
    case 0x00555c9du: goto L_00555c9d;
    case 0x00555cb4u: goto L_00555cb4;
    case 0x00555cd3u: goto L_00555cd3;
    case 0x00555ce6u: goto L_00555ce6;
    case 0x00555cfeu: goto L_00555cfe;
    case 0x00555d0bu: goto L_00555d0b;
    case 0x00555d25u: goto L_00555d25;
    case 0x00555d37u: goto L_00555d37;
    case 0x00555d8eu: goto L_00555d8e;
    case 0x00555e51u: goto L_00555e51;
    case 0x00555f1cu: goto L_00555f1c;
    case 0x00555fedu: goto L_00555fed;
    case 0x005560c6u: goto L_005560c6;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00555c9d:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00555ca4:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00555ca8:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00555caf:  // jmp 0x555d4f
    goto L_00555d4f;
L_00555cb4:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00555cbb:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00555cbf:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00555cc6:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00555ccd:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_00555cd1:  // jmp 0x555d48
    goto L_00555d48;
L_00555cd3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00555cd7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00555cdd:  // fsubr dword ptr [esp + 0x98]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x98u))) - (ST(0));
L_00555ce4:  // jmp 0x555d30
    goto L_00555d30;
L_00555ce6:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00555cea:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00555cf0:  // fsubr dword ptr [esp + 0x98]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x98u))) - (ST(0));
L_00555cf7:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00555cfe:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00555d05:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_00555d09:  // jmp 0x555d48
    goto L_00555d48;
L_00555d0b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00555d0f:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00555d15:  // fsubr dword ptr [esp + 0x98]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x98u))) - (ST(0));
L_00555d1c:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00555d23:  // jmp 0x555d4f
    goto L_00555d4f;
L_00555d25:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00555d2c:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00555d30:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00555d37:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00555d3b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00555d41:  // fsubr dword ptr [esp + 0x9c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x9cu))) - (ST(0));
L_00555d48:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_00555d4f:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00555d55:  // fdiv dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xa0u)));
L_00555d5c:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_00555d60:  // fcomp dword ptr [0x5d85bc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85bcu)));
    lpop(x);
L_00555d66:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00555d68:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00555d6b:  // jne 0x555d75
    if (!f.zf) goto L_00555d75;
L_00555d6d:  // mov dword ptr [esp + 8], 0x40800000
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x40800000u);
L_00555d75:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_00555d7c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00555d7d:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_00555d80:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00555d81:  // ja 0x5561a9
    if ((!f.cf && !f.zf)) goto L_005561a9;
L_00555d87:  // jmp dword ptr [eax*4 + 0x5563bc]
    t0 = M32((uint32_t)(eax * 4u + 0x5563bcu));
    switch (t0) {
    case 0x00555d8eu: goto L_00555d8e;
    case 0x00555e51u: goto L_00555e51;
    case 0x00555f1cu: goto L_00555f1c;
    case 0x00555fedu: goto L_00555fed;
    case 0x005560c6u: goto L_005560c6;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00555d8e:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00555d95:  // mov eax, dword ptr [esp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_00555d9c:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00555da0:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00555da4:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00555dab:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00555daf:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00555db1:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00555db5:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00555db9:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00555dbb:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00555dbf:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00555dc1:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_00555dc3:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00555dc7:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_00555dca:  // mov dword ptr [ecx + 8], ebx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(ebx);
L_00555dcd:  // mov dword ptr [ecx + 0xc], edi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edi);
L_00555dd0:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00555dd2:  // and ecx, 1
    t0 = llog<32>(ecx & 0x1u, f);
    ecx = (uint32_t)(t0);
L_00555dd5:  // je 0x555ddd
    if (f.zf) goto L_00555ddd;
L_00555dd7:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00555ddb:  // jmp 0x555de3
    goto L_00555de3;
L_00555ddd:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555de3:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00555de5:  // mov esi, edx
    esi = (uint32_t)(edx);
L_00555de7:  // and esi, 2
    t0 = llog<32>(esi & 0x2u, f);
    esi = (uint32_t)(t0);
L_00555dea:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00555dec:  // je 0x555df4
    if (f.zf) goto L_00555df4;
L_00555dee:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00555df2:  // jmp 0x555dfa
    goto L_00555dfa;
L_00555df4:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555dfa:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00555dfd:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00555e01:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00555e03:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00555e06:  // mov dword ptr [eax + 0xc], ebp
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebp);
L_00555e09:  // mov ebp, dword ptr [esp + 0xc0]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_00555e10:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_00555e13:  // je 0x555e1e
    if (f.zf) goto L_00555e1e;
L_00555e15:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_00555e1c:  // jmp 0x555e25
    goto L_00555e25;
L_00555e1e:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_00555e25:  // fstp dword ptr [eax + 0x14]
    F32((uint32_t)(eax + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00555e28:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00555e2a:  // je 0x555e35
    if (f.zf) goto L_00555e35;
L_00555e2c:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_00555e33:  // jmp 0x555e3c
    goto L_00555e3c;
L_00555e35:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_00555e3c:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00555e3f:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00555e40:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00555e43:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_00555e46:  // jl 0x555dbb
    if ((f.sf != f.of)) goto L_00555dbb;
L_00555e4c:  // jmp 0x5561a2
    goto L_005561a2;
L_00555e51:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00555e58:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_00555e5f:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00555e63:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00555e67:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00555e6e:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00555e70:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00555e74:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00555e78:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00555e7c:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00555e80:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00555e84:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00555e86:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_00555e88:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00555e8c:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_00555e8f:  // mov dword ptr [ecx + 8], ebx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(ebx);
L_00555e92:  // mov dword ptr [ecx + 0xc], edi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edi);
L_00555e95:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00555e97:  // and ecx, 1
    t0 = llog<32>(ecx & 0x1u, f);
    ecx = (uint32_t)(t0);
L_00555e9a:  // je 0x555ea9
    if (f.zf) goto L_00555ea9;
L_00555e9c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00555ea0:  // fmul dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb8u)));
L_00555ea7:  // jmp 0x555eaf
    goto L_00555eaf;
L_00555ea9:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555eaf:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00555eb1:  // mov esi, edx
    esi = (uint32_t)(edx);
L_00555eb3:  // and esi, 2
    t0 = llog<32>(esi & 0x2u, f);
    esi = (uint32_t)(t0);
L_00555eb6:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00555eb8:  // je 0x555ec0
    if (f.zf) goto L_00555ec0;
L_00555eba:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00555ebe:  // jmp 0x555ec6
    goto L_00555ec6;
L_00555ec0:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555ec6:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00555ec9:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00555ecd:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00555ecf:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00555ed2:  // mov dword ptr [eax + 0xc], ebp
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebp);
L_00555ed5:  // mov ebp, dword ptr [esp + 0xc0]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_00555edc:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_00555edf:  // je 0x555eea
    if (f.zf) goto L_00555eea;
L_00555ee1:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_00555ee8:  // jmp 0x555ef0
    goto L_00555ef0;
L_00555eea:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555ef0:  // fstp dword ptr [eax + 0x14]
    F32((uint32_t)(eax + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00555ef3:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00555ef5:  // je 0x555f00
    if (f.zf) goto L_00555f00;
L_00555ef7:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_00555efe:  // jmp 0x555f07
    goto L_00555f07;
L_00555f00:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_00555f07:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00555f0a:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00555f0b:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00555f0e:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_00555f11:  // jl 0x555e80
    if ((f.sf != f.of)) goto L_00555e80;
L_00555f17:  // jmp 0x5561a2
    goto L_005561a2;
L_00555f1c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00555f20:  // fadd dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa0u)));
L_00555f27:  // mov eax, dword ptr [esp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_00555f2e:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00555f35:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00555f39:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00555f3d:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00555f3f:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00555f43:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00555f47:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00555f4b:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00555f4d:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00555f51:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00555f53:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_00555f55:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00555f59:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_00555f5c:  // mov dword ptr [ecx + 8], ebx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(ebx);
L_00555f5f:  // mov dword ptr [ecx + 0xc], edi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edi);
L_00555f62:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00555f64:  // and ecx, 1
    t0 = llog<32>(ecx & 0x1u, f);
    ecx = (uint32_t)(t0);
L_00555f67:  // je 0x555f71
    if (f.zf) goto L_00555f71;
L_00555f69:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555f6f:  // jmp 0x555f7c
    goto L_00555f7c;
L_00555f71:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00555f75:  // fmul dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb8u)));
L_00555f7c:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00555f7e:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00555f80:  // mov esi, edx
    esi = (uint32_t)(edx);
L_00555f82:  // and esi, 2
    t0 = llog<32>(esi & 0x2u, f);
    esi = (uint32_t)(t0);
L_00555f85:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00555f87:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00555f89:  // je 0x555f91
    if (f.zf) goto L_00555f91;
L_00555f8b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00555f8f:  // jmp 0x555f97
    goto L_00555f97;
L_00555f91:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555f97:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00555f9a:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00555f9e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00555fa0:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00555fa3:  // mov dword ptr [eax + 0xc], ebp
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebp);
L_00555fa6:  // mov ebp, dword ptr [esp + 0xc0]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_00555fad:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_00555fb0:  // je 0x555fba
    if (f.zf) goto L_00555fba;
L_00555fb2:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00555fb8:  // jmp 0x555fc1
    goto L_00555fc1;
L_00555fba:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_00555fc1:  // fstp dword ptr [eax + 0x14]
    F32((uint32_t)(eax + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00555fc4:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00555fc6:  // je 0x555fd1
    if (f.zf) goto L_00555fd1;
L_00555fc8:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_00555fcf:  // jmp 0x555fd8
    goto L_00555fd8;
L_00555fd1:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_00555fd8:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00555fdb:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_00555fdc:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00555fdf:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_00555fe2:  // jl 0x555f4d
    if ((f.sf != f.of)) goto L_00555f4d;
L_00555fe8:  // jmp 0x5561a2
    goto L_005561a2;
L_00555fed:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_00555ff4:  // fld qword ptr [0x5d87e0]
    lpush(x, (long double)F64((uint32_t)(0x5d87e0u)));
L_00555ffa:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00555fffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00555fff:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00556006:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0055600d:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00556011:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00556015:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_0055601c:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0055601e:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00556022:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00556026:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0055602a:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0055602e:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00556032:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00556034:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_00556036:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0055603a:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_0055603d:  // mov dword ptr [ecx + 8], ebx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(ebx);
L_00556040:  // mov dword ptr [ecx + 0xc], edi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edi);
L_00556043:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00556045:  // and ecx, 1
    t0 = llog<32>(ecx & 0x1u, f);
    ecx = (uint32_t)(t0);
L_00556048:  // je 0x556050
    if (f.zf) goto L_00556050;
L_0055604a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0055604e:  // jmp 0x556056
    goto L_00556056;
L_00556050:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00556056:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00556058:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0055605a:  // and esi, 2
    t0 = llog<32>(esi & 0x2u, f);
    esi = (uint32_t)(t0);
L_0055605d:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_0055605f:  // je 0x556067
    if (f.zf) goto L_00556067;
L_00556061:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00556065:  // jmp 0x55606d
    goto L_0055606d;
L_00556067:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0055606d:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00556070:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00556074:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00556076:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00556079:  // mov dword ptr [eax + 0xc], ebp
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebp);
L_0055607c:  // mov ebp, dword ptr [esp + 0xc0]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_00556083:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_00556086:  // je 0x556091
    if (f.zf) goto L_00556091;
L_00556088:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_0055608f:  // jmp 0x556098
    goto L_00556098;
L_00556091:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_00556098:  // fstp dword ptr [eax + 0x14]
    F32((uint32_t)(eax + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0055609b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0055609d:  // je 0x5560a8
    if (f.zf) goto L_005560a8;
L_0055609f:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_005560a6:  // jmp 0x5560af
    goto L_005560af;
L_005560a8:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_005560af:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_005560b1:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_005560b2:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_005560b5:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_005560b8:  // fstp dword ptr [eax - 4]
    F32((uint32_t)(eax + 0xfffffffcu)) = lf32(ST(0));
    lpop(x);
L_005560bb:  // jl 0x55602e
    if ((f.sf != f.of)) goto L_0055602e;
L_005560c1:  // jmp 0x5561a0
    goto L_005561a0;
L_005560c6:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_005560cd:  // fld qword ptr [0x5d87e0]
    lpush(x, (long double)F64((uint32_t)(0x5d87e0u)));
L_005560d3:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005560d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005560d8:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_005560df:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_005560e6:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005560ea:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_005560ee:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_005560f5:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_005560f7:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_005560fb:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_005560ff:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00556103:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00556107:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0055610b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0055610d:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_0055610f:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00556113:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_00556116:  // mov dword ptr [ecx + 8], ebx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(ebx);
L_00556119:  // mov dword ptr [ecx + 0xc], edi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edi);
L_0055611c:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0055611e:  // and ecx, 1
    t0 = llog<32>(ecx & 0x1u, f);
    ecx = (uint32_t)(t0);
L_00556121:  // je 0x556129
    if (f.zf) goto L_00556129;
L_00556123:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00556127:  // jmp 0x55612f
    goto L_0055612f;
L_00556129:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0055612f:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00556131:  // mov esi, edx
    esi = (uint32_t)(edx);
L_00556133:  // and esi, 2
    t0 = llog<32>(esi & 0x2u, f);
    esi = (uint32_t)(t0);
L_00556136:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_00556138:  // je 0x556140
    if (f.zf) goto L_00556140;
L_0055613a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0055613e:  // jmp 0x556146
    goto L_00556146;
L_00556140:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00556146:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_00556149:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0055614d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0055614f:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00556152:  // mov dword ptr [eax + 0xc], ebp
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebp);
L_00556155:  // mov ebp, dword ptr [esp + 0xc0]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0055615c:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_0055615f:  // je 0x55616a
    if (f.zf) goto L_0055616a;
L_00556161:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_00556168:  // jmp 0x556171
    goto L_00556171;
L_0055616a:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_00556171:  // fstp dword ptr [eax + 0x14]
    F32((uint32_t)(eax + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00556174:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00556176:  // je 0x556181
    if (f.zf) goto L_00556181;
L_00556178:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_0055617f:  // jmp 0x556188
    goto L_00556188;
L_00556181:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_00556188:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0055618b:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0055618c:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_0055618f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00556191:  // fadd dword ptr [eax - 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0xfffffff8u)));
L_00556194:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_00556197:  // fstp dword ptr [eax - 8]
    F32((uint32_t)(eax + 0xfffffff8u)) = lf32(ST(0));
    lpop(x);
L_0055619a:  // jl 0x556107
    if ((f.sf != f.of)) goto L_00556107;
L_005561a0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005561a2:  // mov esi, dword ptr [esp + 0xac]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_005561a9:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_005561b0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005561b6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005561b8:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_005561bb:  // jne 0x556275
    if (!f.zf) goto L_00556275;
L_005561c1:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_005561c5:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_005561cb:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_005561cf:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_005561d4:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005561d6:  // fadd dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa0u)));
L_005561dd:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_005561e1:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_005561e7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005561e9:  // fadd dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa4u)));
L_005561f0:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_005561f7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005561f9:  // fcos 
    ST(0) = lfcos(ST(0));
L_005561fb:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_005561ff:  // fsin 
    ST(0) = lfsin(ST(0));
L_00556201:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00556203:  // fsub st(4)
    ST(0) = (ST(0)) - (ST(4));
L_00556205:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00556207:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_0055620a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0055620b:  // fstp dword ptr [eax - 0x1c]
    F32((uint32_t)(eax + 0xffffffe4u)) = lf32(ST(0));
    lpop(x);
L_0055620e:  // fld dword ptr [eax - 0x18]
    lpush(x, (long double)F32((uint32_t)(eax + 0xffffffe8u)));
L_00556211:  // fsub st(2)
    ST(0) = (ST(0)) - (ST(2));
L_00556213:  // fstp dword ptr [eax - 0x18]
    F32((uint32_t)(eax + 0xffffffe8u)) = lf32(ST(0));
    lpop(x);
L_00556216:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_00556218:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0055621c:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_00556220:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00556223:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00556227:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00556229:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_0055622d:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00556230:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00556234:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00556237:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_0055623b:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0055623f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00556241:  // fadd st(5)
    ST(0) = (ST(0)) + (ST(5));
L_00556243:  // fadd dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa0u)));
L_0055624a:  // fstp dword ptr [eax - 0x1c]
    F32((uint32_t)(eax + 0xffffffe4u)) = lf32(ST(0));
    lpop(x);
L_0055624d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0055624f:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00556253:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00556257:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0055625b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0055625d:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_0055625f:  // fadd dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa4u)));
L_00556266:  // fstp dword ptr [eax - 0x18]
    F32((uint32_t)(eax + 0xffffffe8u)) = lf32(ST(0));
    lpop(x);
L_00556269:  // jne 0x556201
    if (!f.zf) goto L_00556201;
L_0055626b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0055626d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0055626f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00556271:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00556273:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00556275:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00556277:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00556279:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055627cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055627c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055627e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00556280:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00556285:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055628au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055628a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0055628c:  // call 0x5588f0
    t0 = 0x005588f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00556291u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00556291:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_00556296:  // call 0x51a270
    t0 = 0x0051a270u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055629bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055629b:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0055629f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005562a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005562a2:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_005562a7:  // call 0x51a430
    t0 = 0x0051a430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005562acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005562ac:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005562ad:  // cmp ax, 0xffff
    t0 = lsub<16>((eax & 0xffffu), 0xffffu, f);
L_005562b1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005562b2:  // je 0x556386
    if (f.zf) goto L_00556386;
L_005562b8:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_005562bd:  // call 0x465f00
    t0 = 0x00465f00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005562c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005562c2:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005562c4:  // je 0x55631d
    if (f.zf) goto L_0055631d;
L_005562c6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005562cb:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005562d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005562d0:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_005562d4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005562d9:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_005562dd:  // fmul dword ptr [0x5db3a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3a4u)));
L_005562e3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_005562e7:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005562ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005562ec:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_005562f0:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_005562f4:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_005562f8:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_005562fd:  // fmul dword ptr [0x5db39c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db39cu)));
L_00556303:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00556307:  // fmul dword ptr [eax - 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0xfffffffcu)));
L_0055630a:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_0055630d:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0055630e:  // fstp dword ptr [eax - 0x20]
    F32((uint32_t)(eax + 0xffffffe0u)) = lf32(ST(0));
    lpop(x);
L_00556311:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00556313:  // fmul dword ptr [eax - 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0xffffffe4u)));
L_00556316:  // fstp dword ptr [eax - 0x1c]
    F32((uint32_t)(eax + 0xffffffe4u)) = lf32(ST(0));
    lpop(x);
L_00556319:  // jne 0x556303
    if (!f.zf) goto L_00556303;
L_0055631b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0055631d:  // mov al, byte ptr [0x9c7fc8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x9c7fc8u))) & 0xffu);
L_00556322:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00556324:  // jne 0x556341
    if (!f.zf) goto L_00556341;
L_00556326:  // mov edi, dword ptr [esp + 8]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0055632a:  // mov ecx, 0x1c
    ecx = (uint32_t)(0x1cu);
L_0055632f:  // lea esi, [esp + 0x24]
    esi = (uint32_t)((uint32_t)(esp + 0x24u));
L_00556333:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00556335:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_0055633a:  // call 0x51a6a0
    t0 = 0x0051a6a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055633fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055633f:  // jmp 0x556386
    goto L_00556386;
L_00556341:  // mov edi, dword ptr [esp + 8]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00556345:  // mov ecx, 7
    ecx = (uint32_t)(0x7u);
L_0055634a:  // lea esi, [esp + 0x24]
    esi = (uint32_t)((uint32_t)(esp + 0x24u));
L_0055634e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00556350:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00556354:  // mov ecx, 7
    ecx = (uint32_t)(0x7u);
L_00556359:  // lea esi, [esp + 0x40]
    esi = (uint32_t)((uint32_t)(esp + 0x40u));
L_0055635d:  // lea edi, [edx + 0x1c]
    edi = (uint32_t)((uint32_t)(edx + 0x1cu));
L_00556360:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00556362:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00556366:  // mov ecx, 7
    ecx = (uint32_t)(0x7u);
L_0055636b:  // lea esi, [esp + 0x5c]
    esi = (uint32_t)((uint32_t)(esp + 0x5cu));
L_0055636f:  // lea edi, [eax + 0x54]
    edi = (uint32_t)((uint32_t)(eax + 0x54u));
L_00556372:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00556374:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00556378:  // lea esi, [esp + 0x78]
    esi = (uint32_t)((uint32_t)(esp + 0x78u));
L_0055637c:  // lea edi, [ecx + 0x38]
    edi = (uint32_t)((uint32_t)(ecx + 0x38u));
L_0055637f:  // mov ecx, 7
    ecx = (uint32_t)(0x7u);
L_00556384:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00556386:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00556388:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0055638d:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00556392u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00556392:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00556393:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00556394:  // add esp, 0x8c
    t0 = ladd<32>(esp, 0x8cu, f);
    esp = (uint32_t)(t0);
L_0055639a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00555be0, 00555be0)
