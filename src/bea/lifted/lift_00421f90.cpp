// lifted from 00421f90 (vslot3, 959 bytes, 272 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00421f90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00421f90;
L_00421f90:  // sub esp, 0x74
    t0 = lsub<32>(esp, 0x74u, f);
    esp = (uint32_t)(t0);
L_00421f93:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00421f94:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00421f96:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00421f99:  // test byte ptr [eax + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(eax + 0x2cu)) & 0x4u, f);
L_00421f9d:  // jne 0x42234a
    if (!f.zf) goto L_0042234a;
L_00421fa3:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00421fab:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00421faf:  // add eax, 0x14c
    t0 = ladd<32>(eax, 0x14cu, f);
    eax = (uint32_t)(t0);
L_00421fb4:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00421fbc:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00421fc0:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00421fc8:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00421fca:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00421fce:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00421fd1:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00421fd5:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00421fd8:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00421fdb:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_00421fde:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00421fe0:  // je 0x42234a
    if (f.zf) goto L_0042234a;
L_00421fe6:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00421fe9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00421fea:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_00421fed:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_00421ff0:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00421ff3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00421ff6:  // fld dword ptr [esi + 0xc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xcu)));
L_00421ff9:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00421ffc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00421ffd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00422000:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00422003:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00422005:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00422006:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0042200a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0042200d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422012u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422012:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00422016:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00422018:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0042201a:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0042201e:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00422022:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00422025:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00422027:  // mov eax, dword ptr [ecx + 0x114]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x114u)));
L_0042202d:  // mov dword ptr [esp + 4], eax
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(eax);
L_00422031:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00422033:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00422037:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_0042203d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042203f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00422042:  // jne 0x422054
    if (!f.zf) goto L_00422054;
L_00422044:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00422048:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0042204c:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0042204e:  // fchs 
    ST(0) = -ST(0);
L_00422050:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00422054:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00422058:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0042205c:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0042205e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042205f:  // mov edx, dword ptr [ecx + 0x114]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x114u)));
L_00422065:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00422069:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0042206d:  // fld dword ptr [ecx + 0x5c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x5cu)));
L_00422070:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00422073:  // fld dword ptr [ecx + 0x4c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4cu)));
L_00422076:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00422077:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0042207a:  // fld dword ptr [ecx + 0x3c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x3cu)));
L_0042207d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042207e:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00422082:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00422085:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042208au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042208a:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0042208d:  // sub eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00422090:  // jne 0x4220ae
    if (!f.zf) goto L_004220ae;
L_00422092:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00422096:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0042209c:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004220a0:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004220a4:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004220aa:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004220ae:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004220b2:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004220b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004220ba:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004220bd:  // jne 0x4220cd
    if (!f.zf) goto L_004220cd;
L_004220bf:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004220c3:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004220c9:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004220cd:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004220d1:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_004220d7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004220d9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004220dc:  // je 0x4220ec
    if (f.zf) goto L_004220ec;
L_004220de:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004220e2:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004220e8:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004220ec:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004220f0:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004220f6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004220f8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004220fb:  // jne 0x42210b
    if (!f.zf) goto L_0042210b;
L_004220fd:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00422101:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00422107:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0042210b:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_0042210f:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_00422115:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00422117:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0042211a:  // je 0x42212a
    if (f.zf) goto L_0042212a;
L_0042211c:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00422120:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00422126:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0042212a:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_0042212e:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00422132:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00422138:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042213a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0042213d:  // je 0x42215e
    if (f.zf) goto L_0042215e;
L_0042213f:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00422143:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00422149:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042214b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0042214e:  // jne 0x42215e
    if (!f.zf) goto L_0042215e;
L_00422150:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00422152:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00422156:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0042215c:  // jmp 0x42218c
    goto L_0042218c;
L_0042215e:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00422162:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00422168:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042216a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0042216d:  // jne 0x42218c
    if (!f.zf) goto L_0042218c;
L_0042216f:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00422173:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00422179:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042217b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0042217e:  // je 0x42218c
    if (f.zf) goto L_0042218c;
L_00422180:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00422182:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00422186:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_0042218c:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_00422190:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00422192:  // fcom dword ptr [0x5d9440]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d9440u)));
L_00422198:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042219a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0042219d:  // jne 0x4221a7
    if (!f.zf) goto L_004221a7;
L_0042219f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004221a1:  // fld dword ptr [0x5d9440]
    lpush(x, (long double)F32((uint32_t)(0x5d9440u)));
L_004221a7:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004221ab:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004221af:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004221b3:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004221b7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004221b9:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004221bd:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004221c1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004221c3:  // fcomp qword ptr [0x5d87b0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87b0u)));
    lpop(x);
L_004221c9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004221cb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004221ce:  // jne 0x4221d2
    if (!f.zf) goto L_004221d2;
L_004221d0:  // fchs 
    ST(0) = -ST(0);
L_004221d2:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004221d6:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004221da:  // fcomp dword ptr [0x5d943c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d943cu)));
    lpop(x);
L_004221e0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004221e2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004221e5:  // jne 0x4221f1
    if (!f.zf) goto L_004221f1;
L_004221e7:  // mov dword ptr [esp + 8], 0x3e490fdb
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x3e490fdbu);
L_004221ef:  // jmp 0x42220a
    goto L_0042220a;
L_004221f1:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004221f5:  // fcomp dword ptr [0x5d9438]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d9438u)));
    lpop(x);
L_004221fb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004221fd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00422200:  // je 0x42220a
    if (f.zf) goto L_0042220a;
L_00422202:  // mov dword ptr [esp + 8], 0xbe490fdb
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0xbe490fdbu);
L_0042220a:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0042220e:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00422210:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_00422216:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00422218:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0042221b:  // jne 0x42222c
    if (!f.zf) goto L_0042222c;
L_0042221d:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00422220:  // mov dword ptr [eax + 0x174], 0x3f800000
    M32((uint32_t)(eax + 0x174u)) = (uint32_t)(0x3f800000u);
L_0042222a:  // jmp 0x422239
    goto L_00422239;
L_0042222c:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0042222f:  // mov dword ptr [ecx + 0x174], 0
    M32((uint32_t)(ecx + 0x174u)) = (uint32_t)(0x0u);
L_00422239:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0042223c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0042223e:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422241u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422241:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00422247:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_0042224d:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00422251:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00422255:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00422259:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0042225b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0042225d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0042225f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00422261:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00422263:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00422267:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0042226b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0042226d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0042226f:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00422271:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00422273:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00422277:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0042227d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042227f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00422282:  // jne 0x422297
    if (!f.zf) goto L_00422297;
L_00422284:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00422288:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_0042228c:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422291u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422291:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00422295:  // jmp 0x42229f
    goto L_0042229f;
L_00422297:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0042229f:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004222a3:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004222a7:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004222a9:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004222ad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004222af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004222b0:  // fchs 
    ST(0) = -ST(0);
L_004222b2:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004222b6:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004222ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004222bb:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004222bf:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004222c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004222c4:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004222c8:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004222cc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004222cd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004222d0:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004222d4:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004222d8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004222d9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004222dc:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004222e0:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004222e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004222e5:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004222e9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004222ec:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004222f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004222f1:  // mov edx, dword ptr [esi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004222f4:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004222f8:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004222fc:  // add edx, 0x14c
    t0 = ladd<32>(edx, 0x14cu, f);
    edx = (uint32_t)(t0);
L_00422302:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00422304:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00422308:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0042230b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0042230f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00422312:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00422316:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0042231a:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0042231d:  // mov edx, dword ptr [esp + 4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_00422321:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00422325:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00422329:  // mov edx, dword ptr [esi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0042232c:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00422330:  // add edx, 0x120
    t0 = ladd<32>(edx, 0x120u, f);
    edx = (uint32_t)(t0);
L_00422336:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0042233a:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0042233e:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00422340:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00422344:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00422347:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0042234a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042234b:  // add esp, 0x74
    t0 = ladd<32>(esp, 0x74u, f);
    esp = (uint32_t)(t0);
L_0042234e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00421f90, 00421f90)
