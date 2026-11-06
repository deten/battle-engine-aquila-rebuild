// lifted from 004b1eb0 (FUN_004b1eb0, 1559 bytes, 404 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b1eb0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b1eb0;
L_004b1eb0:  // sub esp, 0xf4
    t0 = lsub<32>(esp, 0xf4u, f);
    esp = (uint32_t)(t0);
L_004b1eb6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b1eb7:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004b1eb9:  // mov dword ptr [esp + 0xa0], ebx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(ebx);
L_004b1ec0:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b1ec6:  // cmp eax, 0x2710
    t0 = lsub<32>(eax, 0x2710u, f);
L_004b1ecb:  // jg 0x4b24bd
    if ((!f.zf && f.sf == f.of)) goto L_004b24bd;
L_004b1ed1:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004b1ed3:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004b1ed5:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004b1ed9:  // jle 0x4b24bd
    if ((f.zf || f.sf != f.of)) goto L_004b24bd;
L_004b1edf:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b1ee0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b1ee1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b1ee2:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004b1ee6:  // mov eax, dword ptr [0x704d90]
    eax = (uint32_t)(M32((uint32_t)(0x704d90u)));
L_004b1eeb:  // mov ecx, dword ptr [0x704d94]
    ecx = (uint32_t)(M32((uint32_t)(0x704d94u)));
L_004b1ef1:  // mov esi, dword ptr [0x704d98]
    esi = (uint32_t)(M32((uint32_t)(0x704d98u)));
L_004b1ef7:  // mov edi, dword ptr [0x704d9c]
    edi = (uint32_t)(M32((uint32_t)(0x704d9cu)));
L_004b1efd:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004b1f01:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004b1f05:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004b1f09:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004b1f0f:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004b1f13:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004b1f15:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004b1f17:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_004b1f1b:  // mov dword ptr [esp + 0x2c], edi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edi);
L_004b1f1f:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_004b1f23:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_004b1f27:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004b1f2b:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_004b1f2f:  // jle 0x4b2287
    if ((f.zf || f.sf != f.of)) goto L_004b2287;
L_004b1f35:  // mov ecx, dword ptr [ebx + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b1f3b:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004b1f3f:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004b1f41:  // mov dword ptr [esp + 0xb0], ecx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ecx);
L_004b1f48:  // mov esi, dword ptr [ecx + 0x20]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_004b1f4b:  // mov ecx, dword ptr [ebx + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004b1f51:  // mov dword ptr [esp + 0x44], esi
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(esi);
L_004b1f55:  // jmp 0x4b1f5b
    goto L_004b1f5b;
L_004b1f57:  // mov esi, dword ptr [esp + 0x44]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004b1f5b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004b1f5d:  // mov edx, dword ptr [eax + 0x20]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_004b1f60:  // cmp edx, esi
    t0 = lsub<32>(edx, esi, f);
L_004b1f62:  // mov dword ptr [esp + 0xa8], edx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(edx);
L_004b1f69:  // je 0x4b1f87
    if (f.zf) goto L_004b1f87;
L_004b1f6b:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004b1f6e:  // mov edi, dword ptr [eax + 0x20]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_004b1f71:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_004b1f73:  // je 0x4b1f87
    if (f.zf) goto L_004b1f87;
L_004b1f75:  // mov ebp, dword ptr [ecx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004b1f78:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004b1f7c:  // mov esi, dword ptr [ebp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_004b1f7f:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004b1f81:  // jne 0x4b210d
    if (!f.zf) goto L_004b210d;
L_004b1f87:  // mov ebp, dword ptr [ecx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004b1f8a:  // mov eax, dword ptr [ebx + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_004b1f90:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b1f93:  // mov esi, dword ptr [ebp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_004b1f96:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_004b1f98:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004b1f9a:  // add edx, ebx
    t0 = ladd<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_004b1f9c:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004b1f9f:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_004b1fa1:  // fsub dword ptr [eax + ebx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + ebx)));
L_004b1fa4:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_004b1fa6:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004b1fad:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_004b1fb0:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b1fb3:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_004b1fba:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_004b1fbd:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b1fc0:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004b1fc3:  // mov edi, dword ptr [eax + 0x20]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_004b1fc6:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004b1fc8:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004b1fcf:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_004b1fd1:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004b1fd4:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_004b1fd6:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004b1fd8:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_004b1fdf:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_004b1fe2:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b1fe5:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_004b1fec:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_004b1fef:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b1ff2:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_004b1ff9:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004b2000:  // fmul dword ptr [esp + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x90u)));
L_004b2007:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004b200e:  // fmul dword ptr [esp + 0x8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8cu)));
L_004b2015:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004b2017:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004b201e:  // fmul dword ptr [esp + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x88u)));
L_004b2025:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004b202c:  // fmul dword ptr [esp + 0x98]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x98u)));
L_004b2033:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004b2035:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004b2039:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004b2040:  // fmul dword ptr [esp + 0x98]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x98u)));
L_004b2047:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004b204e:  // fmul dword ptr [esp + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x88u)));
L_004b2055:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004b2057:  // fst dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
L_004b205b:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b205f:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004b2061:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004b2063:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004b2065:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004b2067:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b2069:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004b206b:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004b206d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b206f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004b2071:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004b2073:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b2075:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004b207b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004b207d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004b2080:  // jne 0x4b20a2
    if (!f.zf) goto L_004b20a2;
L_004b2082:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004b2088:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004b208a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b208c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004b208e:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b2092:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b2094:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004b2098:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b209c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b209e:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004b20a2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b20a4:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b20a8:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004b20aa:  // mov ebx, dword ptr [esp + 0xac]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_004b20b1:  // fstp dword ptr [esp + 0xe4]
    F32((uint32_t)(esp + 0xe4u)) = lf32(ST(0));
    lpop(x);
L_004b20b8:  // mov edx, dword ptr [esp + 0xe4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xe4u)));
L_004b20bf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b20c1:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004b20c5:  // fadd dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004b20c9:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004b20cd:  // fstp dword ptr [esp + 0xe8]
    F32((uint32_t)(esp + 0xe8u)) = lf32(ST(0));
    lpop(x);
L_004b20d4:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b20d8:  // mov eax, dword ptr [esp + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_004b20df:  // fadd dword ptr [esp + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x50u)));
L_004b20e3:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004b20e7:  // mov eax, dword ptr [esp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_004b20ee:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004b20f2:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b20f6:  // fstp dword ptr [esp + 0xec]
    F32((uint32_t)(esp + 0xecu)) = lf32(ST(0));
    lpop(x);
L_004b20fd:  // mov edx, dword ptr [esp + 0xec]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004b2104:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b2105:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004b2109:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004b210d:  // mov eax, dword ptr [esp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_004b2114:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b2116:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_004b2118:  // je 0x4b2127
    if (f.zf) goto L_004b2127;
L_004b211a:  // cmp dword ptr [ecx + 4], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x4u)), eax, f);
L_004b211d:  // je 0x4b2127
    if (f.zf) goto L_004b2127;
L_004b211f:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004b2121:  // jne 0x4b2271
    if (!f.zf) goto L_004b2271;
L_004b2127:  // mov edx, dword ptr [ebx + 0x84]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_004b212d:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_004b2134:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004b2137:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_004b2139:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004b213c:  // fld dword ptr [eax + edx]
    lpush(x, (long double)F32((uint32_t)(eax + edx)));
L_004b213f:  // fsub dword ptr [esi + edx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + edx)));
L_004b2142:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b2144:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_004b2146:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_004b2149:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_004b214d:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004b2150:  // fsub dword ptr [esi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x4u)));
L_004b2153:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_004b2155:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004b2159:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004b215c:  // fsub dword ptr [esi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x8u)));
L_004b215f:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004b2166:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004b2168:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_004b216a:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004b216e:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004b2171:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_004b2174:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_004b2178:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004b217b:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_004b217e:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004b2182:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b2186:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_004b218d:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004b2191:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_004b2195:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004b2197:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004b219b:  // fmul dword ptr [esp + 0x78]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x78u)));
L_004b219f:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004b21a6:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_004b21aa:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004b21ac:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_004b21b0:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004b21b4:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_004b21b8:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b21bc:  // fmul dword ptr [esp + 0x78]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x78u)));
L_004b21c0:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004b21c2:  // fst dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
L_004b21c6:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b21ca:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004b21cc:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b21ce:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004b21d0:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004b21d2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b21d4:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004b21d6:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004b21d8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b21da:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004b21dc:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004b21de:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b21e0:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004b21e6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004b21e8:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004b21eb:  // jne 0x4b220d
    if (!f.zf) goto L_004b220d;
L_004b21ed:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004b21f3:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004b21f5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b21f7:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004b21f9:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b21fd:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b21ff:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_004b2203:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b2207:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b2209:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004b220d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b220f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b2213:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004b2215:  // fstp dword ptr [esp + 0xb4]
    F32((uint32_t)(esp + 0xb4u)) = lf32(ST(0));
    lpop(x);
L_004b221c:  // mov eax, dword ptr [esp + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_004b2223:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b2225:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b2229:  // fadd dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x5cu)));
L_004b222d:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004b2231:  // fstp dword ptr [esp + 0xb8]
    F32((uint32_t)(esp + 0xb8u)) = lf32(ST(0));
    lpop(x);
L_004b2238:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b223c:  // fadd dword ptr [esp + 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x60u)));
L_004b2240:  // mov edx, dword ptr [esp + 0xb8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_004b2247:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004b224b:  // mov edx, dword ptr [esp + 0xc0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_004b2252:  // fstp dword ptr [esp + 0xbc]
    F32((uint32_t)(esp + 0xbcu)) = lf32(ST(0));
    lpop(x);
L_004b2259:  // mov eax, dword ptr [esp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004b2260:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004b2264:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004b2268:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b226c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b226d:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004b2271:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004b2275:  // add ecx, 0xc
    t0 = ladd<32>(ecx, 0xcu, f);
    ecx = (uint32_t)(t0);
L_004b2278:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b2279:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004b227d:  // jne 0x4b1f57
    if (!f.zf) goto L_004b1f57;
L_004b2283:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004b2287:  // mov al, byte ptr [esp + 0x108]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x108u))) & 0xffu);
L_004b228e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b2290:  // je 0x4b23c6
    if (f.zf) goto L_004b23c6;
L_004b2296:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b229a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b229c:  // jne 0x4b22f0
    if (!f.zf) goto L_004b22f0;
L_004b229e:  // mov eax, dword ptr [ebx + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b22a4:  // mov dword ptr [esp + 0xc4], 0x3f800000
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(0x3f800000u);
L_004b22af:  // mov ecx, dword ptr [esp + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_004b22b6:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b22b8:  // mov dword ptr [esp + 0xc8], 0
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(0x0u);
L_004b22c3:  // mov dword ptr [esp + 0xcc], 0
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(0x0u);
L_004b22ce:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b22d0:  // mov ecx, dword ptr [esp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_004b22d7:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004b22da:  // mov ecx, dword ptr [esp + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_004b22e1:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b22e4:  // mov ecx, dword ptr [esp + 0xd0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_004b22eb:  // jmp 0x4b23c3
    goto L_004b23c3;
L_004b22f0:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b22f4:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b22f8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004b22fa:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b22fc:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004b22fe:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004b2300:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b2302:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b2306:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004b230a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b230c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004b230e:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004b2310:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b2312:  // fcom dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
L_004b2318:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004b231a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004b231d:  // je 0x4b2370
    if (f.zf) goto L_004b2370;
L_004b231f:  // mov eax, dword ptr [ebx + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b2325:  // mov dword ptr [esp + 0xd4], 0x3f800000
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(0x3f800000u);
L_004b2330:  // mov ecx, dword ptr [esp + 0xd4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd4u)));
L_004b2337:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b2339:  // mov dword ptr [esp + 0xd8], 0
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(0x0u);
L_004b2344:  // mov dword ptr [esp + 0xdc], 0
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(0x0u);
L_004b234f:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b2351:  // mov ecx, dword ptr [esp + 0xd8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_004b2358:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b235a:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004b235d:  // mov ecx, dword ptr [esp + 0xdc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xdcu)));
L_004b2364:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b2367:  // mov ecx, dword ptr [esp + 0xe0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xe0u)));
L_004b236e:  // jmp 0x4b23c3
    goto L_004b23c3;
L_004b2370:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004b2376:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004b2378:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004b237b:  // jne 0x4b23a1
    if (!f.zf) goto L_004b23a1;
L_004b237d:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004b2383:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b2387:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b2389:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004b238d:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b2391:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b2393:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004b2397:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b239b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b239d:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004b23a1:  // mov eax, dword ptr [ebx + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b23a7:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b23ab:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b23ad:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b23af:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b23b1:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b23b5:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004b23b8:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004b23bc:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b23bf:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b23c3:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_004b23c6:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b23ca:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b23cc:  // jne 0x4b2422
    if (!f.zf) goto L_004b2422;
L_004b23ce:  // mov eax, dword ptr [ebx + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b23d4:  // mov dword ptr [esp + 0xf4], 0x3f800000
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(0x3f800000u);
L_004b23df:  // mov dword ptr [esp + 0xf8], 0
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(0x0u);
L_004b23ea:  // mov dword ptr [esp + 0xfc], 0
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(0x0u);
L_004b23f5:  // lea ecx, [eax + edx + 0x10]
    ecx = (uint32_t)((uint32_t)(eax + edx + 0x10u));
L_004b23f9:  // mov eax, dword ptr [esp + 0xf4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_004b2400:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_004b2402:  // mov eax, dword ptr [esp + 0xf8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_004b2409:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004b240c:  // mov eax, dword ptr [esp + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xfcu)));
L_004b2413:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004b2416:  // mov eax, dword ptr [esp + 0x100]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x100u)));
L_004b241d:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004b2420:  // jmp 0x4b249c
    goto L_004b249c;
L_004b2422:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004b2426:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b242a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004b242c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b242e:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004b2430:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004b2432:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b2434:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b2438:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b243c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b243e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004b2440:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004b2442:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b2444:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004b244a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004b244c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004b244f:  // jne 0x4b2475
    if (!f.zf) goto L_004b2475;
L_004b2451:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004b2457:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004b2459:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b245d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b2461:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004b2465:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b2467:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004b246b:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b246f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004b2471:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004b2475:  // mov ecx, dword ptr [ebx + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b247b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004b247d:  // lea eax, [ecx + edx + 0x10]
    eax = (uint32_t)((uint32_t)(ecx + edx + 0x10u));
L_004b2481:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b2485:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b2487:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b248b:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004b248e:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b2492:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b2495:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b2499:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_004b249c:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004b24a0:  // mov ecx, dword ptr [ebx + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b24a6:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b24a7:  // add edx, 0x60
    t0 = ladd<32>(edx, 0x60u, f);
    edx = (uint32_t)(t0);
L_004b24aa:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004b24ac:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_004b24b0:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004b24b4:  // jl 0x4b1ee6
    if ((f.sf != f.of)) goto L_004b1ee6;
L_004b24ba:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b24bb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b24bc:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b24bd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b24be:  // add esp, 0xf4
    t0 = ladd<32>(esp, 0xf4u, f);
    esp = (uint32_t)(t0);
L_004b24c4:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b1eb0, 004b1eb0)
