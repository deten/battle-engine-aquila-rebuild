// lifted from 0053df40 (FUN_0053df40, 734 bytes, 191 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053df40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053df40;
L_0053df40:  // sub esp, 0x94
    t0 = lsub<32>(esp, 0x94u, f);
    esp = (uint32_t)(t0);
L_0053df46:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053df47:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053df48:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053df49:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053df4a:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0053df4c:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0053df4f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0053df54:  // mov esi, 0x89d640
    esi = (uint32_t)(0x89d640u);
L_0053df59:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0053df5b:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0053df5e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0053df60:  // mov dword ptr [esp + 0x50], 0
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x0u);
L_0053df68:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0053df6c:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0053df6e:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_0053df76:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0053df7a:  // mov dword ptr [esp + 0x58], 0
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x0u);
L_0053df82:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0053df84:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0053df88:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0053df8b:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0053df8f:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0053df92:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053df97:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0053df9a:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053df9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053df9f:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_0053dfa6:  // fsub dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa8u)));
L_0053dfad:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_0053dfb5:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0053dfbd:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0053dfc1:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_0053dfc8:  // fsub dword ptr [esp + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xacu)));
L_0053dfcf:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0053dfd3:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0053dfda:  // fsub dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb0u)));
L_0053dfe1:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0053dfe5:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0053dfe9:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0053dfef:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_0053dff3:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0053dff7:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0053dffd:  // fsubr dword ptr [esp + 0x20]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x20u))) - (ST(0));
L_0053e001:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0053e005:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0053e009:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0053e00d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0053e00f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0053e011:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0053e013:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0053e015:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053e017:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0053e019:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0053e01b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053e01d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0053e01f:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0053e021:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053e023:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0053e029:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0053e02b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0053e02e:  // jne 0x53e050
    if (!f.zf) goto L_0053e050;
L_0053e030:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0053e036:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0053e038:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053e03a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0053e03c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0053e040:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053e042:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0053e046:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0053e04a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053e04c:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0053e050:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053e052:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0053e058:  // mov eax, dword ptr [ebx + 0x4ec]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4ecu)));
L_0053e05e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053e060:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053e061:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0053e065:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0053e069:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0053e06f:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0053e073:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053e077:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0053e07d:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0053e081:  // call 0x501280
    t0 = 0x00501280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e086u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e086:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0053e089:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0053e08b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053e08d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053e08f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053e091:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_0053e093:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0053e098:  // push 0x152
    t0 = 0x152u; esp -= 4; M32(esp) = t0;
L_0053e09d:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e0a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e0a2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053e0a4:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053e0a6:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0053e0ab:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0053e0ad:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053e0af:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e0b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e0b4:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_0053e0bb:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0053e0bf:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_0053e0c6:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0053e0ca:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_0053e0d1:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_0053e0d7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0053e0d9:  // lea ebx, [esp + 0x50]
    ebx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0053e0dd:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0053e0e1:  // mov edx, esi
    edx = (uint32_t)(esi);
L_0053e0e3:  // and edx, 2
    t0 = llog<32>(edx & 0x2u, f);
    edx = (uint32_t)(t0);
L_0053e0e6:  // je 0x53e0ee
    if (f.zf) goto L_0053e0ee;
L_0053e0e8:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0053e0ec:  // jmp 0x53e110
    goto L_0053e110;
L_0053e0ee:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053e0f2:  // fchs 
    ST(0) = -ST(0);
L_0053e0f4:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_0053e0f8:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0053e0fc:  // fchs 
    ST(0) = -ST(0);
L_0053e0fe:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_0053e102:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0053e106:  // fchs 
    ST(0) = -ST(0);
L_0053e108:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_0053e10c:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_0053e110:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_0053e112:  // mov eax, 0x89d670
    eax = (uint32_t)(0x89d670u);
L_0053e117:  // and ebp, 1
    t0 = llog<32>(ebp & 0x1u, f);
    ebp = (uint32_t)(t0);
L_0053e11a:  // jne 0x53e120
    if (!f.zf) goto L_0053e120;
L_0053e11c:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_0053e120:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0053e122:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0053e124:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_0053e127:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0053e12a:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0053e12c:  // mov dword ptr [esp + 0x9c], 0x3f800000
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0x3f800000u);
L_0053e137:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_0053e13b:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0053e13e:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0053e141:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_0053e145:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_0053e149:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0053e150:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_0053e154:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_0053e158:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0053e15f:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_0053e163:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0053e167:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_0053e16e:  // jne 0x53e17b
    if (!f.zf) goto L_0053e17b;
L_0053e170:  // mov dword ptr [esp + 0x9c], 0
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0x0u);
L_0053e17b:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0053e17d:  // mov dword ptr [esp + 0xa0], 0
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0x0u);
L_0053e188:  // jne 0x53e195
    if (!f.zf) goto L_0053e195;
L_0053e18a:  // mov dword ptr [esp + 0xa0], 0x3f800000
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0x3f800000u);
L_0053e195:  // mov ecx, dword ptr [esp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_0053e19c:  // lea edx, [esp + 0x80]
    edx = (uint32_t)((uint32_t)(esp + 0x80u));
L_0053e1a3:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_0053e1aa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e1ac:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053e1ad:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053e1af:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e1b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e1b4:  // mov dword ptr [ebx], eax
    M32((uint32_t)(ebx)) = (uint32_t)(eax);
L_0053e1b6:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0053e1b7:  // add ebx, 4
    t0 = ladd<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_0053e1ba:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_0053e1bd:  // jl 0x53e0e1
    if ((f.sf != f.of)) goto L_0053e0e1;
L_0053e1c3:  // mov cx, word ptr [esp + 0x58]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x58u))) & 0xffffu);
L_0053e1c8:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0053e1cc:  // mov dx, word ptr [esp + 0x54]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x54u))) & 0xffffu);
L_0053e1d1:  // mov word ptr [esp + 0x28], cx
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)((ecx & 0xffffu));
L_0053e1d6:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0053e1da:  // mov word ptr [esp + 0x24], ax
    M16((uint32_t)(esp + 0x24u)) = (uint16_t)((eax & 0xffffu));
L_0053e1df:  // mov word ptr [esp + 0x2a], ax
    M16((uint32_t)(esp + 0x2au)) = (uint16_t)((eax & 0xffffu));
L_0053e1e4:  // mov ax, word ptr [esp + 0x5c]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x5cu))) & 0xffffu);
L_0053e1e9:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053e1eb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053e1ec:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053e1ee:  // mov word ptr [esp + 0x2e], dx
    M16((uint32_t)(esp + 0x2eu)) = (uint16_t)((edx & 0xffffu));
L_0053e1f3:  // mov word ptr [esp + 0x36], ax
    M16((uint32_t)(esp + 0x36u)) = (uint16_t)((eax & 0xffffu));
L_0053e1f8:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e1fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e1fd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053e1ff:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053e201:  // call 0x500e70
    t0 = 0x00500e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e206u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e206:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0053e208:  // je 0x53e211
    if (f.zf) goto L_0053e211;
L_0053e20a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053e20c:  // call 0x501310
    t0 = 0x00501310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053e211u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053e211:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053e212:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053e213:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053e214:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053e215:  // add esp, 0x94
    t0 = ladd<32>(esp, 0x94u, f);
    esp = (uint32_t)(t0);
L_0053e21b:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053df40, 0053df40)
