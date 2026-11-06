// lifted from 00522190 (vslot5, 3886 bytes, 1041 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00522190(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00522190;
L_00522190:  // sub esp, 0x148
    t0 = lsub<32>(esp, 0x148u, f);
    esp = (uint32_t)(t0);
L_00522196:  // fld dword ptr [esp + 0x14c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14cu)));
L_0052219d:  // fmul dword ptr [0x5d85e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e8u)));
L_005221a3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005221a4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005221a5:  // mov eax, dword ptr [0x89d8d0]
    eax = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_005221aa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005221ab:  // fcos 
    ST(0) = lfcos(ST(0));
L_005221ad:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005221ae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005221b0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_005221b5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005221b7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005221b9:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_005221be:  // push 0x3f3c28f5
    t0 = 0x3f3c28f5u; esp -= 4; M32(esp) = t0;
L_005221c3:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_005221c7:  // push 0x3e000000
    t0 = 0x3e000000u; esp -= 4; M32(esp) = t0;
L_005221cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005221cd:  // push 0x3f733333
    t0 = 0x3f733333u; esp -= 4; M32(esp) = t0;
L_005221d2:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_005221d7:  // fchs 
    ST(0) = -ST(0);
L_005221d9:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_005221df:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_005221e5:  // fmul dword ptr [0x5db394]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db394u)));
L_005221eb:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_005221ef:  // fld dword ptr [0x5db390]
    lpush(x, (long double)F32((uint32_t)(0x5db390u)));
L_005221f5:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_005221f9:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_005221fd:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522202u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522202:  // fadd dword ptr [0x5db38c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db38cu)));
L_00522208:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522209:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0052220e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522211:  // call 0x468730
    t0 = 0x00468730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522216u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522216:  // fadd dword ptr [esp + 0x48]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x48u)));
L_0052221a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052221b:  // fadd dword ptr [0x5d85d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d8u)));
L_00522221:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522224:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522229u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522229:  // mov eax, dword ptr [0x89d8d4]
    eax = (uint32_t)(M32((uint32_t)(0x89d8d4u)));
L_0052222e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522230:  // mov esi, dword ptr [esp + 0x50]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00522234:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522239:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052223b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0052223d:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_00522242:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_00522247:  // push 0xff037fa0
    t0 = 0xff037fa0u; esp -= 4; M32(esp) = t0;
L_0052224c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052224d:  // push 0x3f733333
    t0 = 0x3f733333u; esp -= 4; M32(esp) = t0;
L_00522252:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00522257:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522258:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052225du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052225d:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00522260:  // mov ecx, dword ptr [0x89d8d0]
    ecx = (uint32_t)(M32((uint32_t)(0x89d8d0u)));
L_00522266:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522268:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0052226d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052226f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00522271:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_00522276:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_0052227b:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0052227d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052227e:  // push 0x3f733333
    t0 = 0x3f733333u; esp -= 4; M32(esp) = t0;
L_00522283:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00522288:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522289:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052228eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052228e:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00522291:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00522296:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_0052229b:  // mov edi, 0x89bd00
    edi = (uint32_t)(0x89bd00u);
L_005222a0:  // push 0x3f400000
    t0 = 0x3f400000u; esp -= 4; M32(esp) = t0;
L_005222a5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_005222aa:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005222ac:  // push 0x45dac000
    t0 = 0x45dac000u; esp -= 4; M32(esp) = t0;
L_005222b1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_005222b6:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_005222bb:  // call 0x550b10
    t0 = 0x00550b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005222c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005222c0:  // fld dword ptr [esp + 0x15c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x15cu)));
L_005222c7:  // fld dword ptr [esp + 0x15c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x15cu)));
L_005222ce:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005222d4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005222d6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005222d9:  // je 0x5222e5
    if (f.zf) goto L_005222e5;
L_005222db:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005222dd:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_005222e3:  // jmp 0x522301
    goto L_00522301;
L_005222e5:  // fld dword ptr [esp + 0x15c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x15cu)));
L_005222ec:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_005222f2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005222f4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005222f7:  // jne 0x522301
    if (!f.zf) goto L_00522301;
L_005222f9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005222fb:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00522301:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00522307:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00522309:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0052230b:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00522311:  // fadd dword ptr [0x5d8cb4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cb4u)));
L_00522317:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00522319:  // fcos 
    ST(0) = lfcos(ST(0));
L_0052231b:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0052231f:  // fsin 
    ST(0) = lfsin(ST(0));
L_00522321:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_00522327:  // fcos 
    ST(0) = lfcos(ST(0));
L_00522329:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0052232d:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_00522333:  // fsin 
    ST(0) = lfsin(ST(0));
L_00522335:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00522339:  // fld qword ptr [0x5db380]
    lpush(x, (long double)F64((uint32_t)(0x5db380u)));
L_0052233f:  // fcos 
    ST(0) = lfcos(ST(0));
L_00522341:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00522345:  // fld qword ptr [0x5db380]
    lpush(x, (long double)F64((uint32_t)(0x5db380u)));
L_0052234b:  // fsin 
    ST(0) = lfsin(ST(0));
L_0052234d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0052234f:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00522353:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00522357:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_0052235b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0052235d:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0052235f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00522361:  // fstp dword ptr [0x89d764]
    F32((uint32_t)(0x89d764u)) = lf32(ST(0));
    lpop(x);
L_00522367:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0052236b:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0052236d:  // fchs 
    ST(0) = -ST(0);
L_0052236f:  // fstp dword ptr [0x89d768]
    F32((uint32_t)(0x89d768u)) = lf32(ST(0));
    lpop(x);
L_00522375:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00522377:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_0052237b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0052237f:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00522383:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_00522387:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0052238b:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0052238d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0052238f:  // fstp dword ptr [0x89d76c]
    F32((uint32_t)(0x89d76cu)) = lf32(ST(0));
    lpop(x);
L_00522395:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00522399:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0052239b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0052239d:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_005223a1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005223a3:  // fstp dword ptr [0x89d774]
    F32((uint32_t)(0x89d774u)) = lf32(ST(0));
    lpop(x);
L_005223a9:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_005223ad:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_005223b1:  // fstp dword ptr [0x89d778]
    F32((uint32_t)(0x89d778u)) = lf32(ST(0));
    lpop(x);
L_005223b7:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_005223bb:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_005223bd:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005223c1:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_005223c5:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_005223c7:  // fstp dword ptr [0x89d77c]
    F32((uint32_t)(0x89d77cu)) = lf32(ST(0));
    lpop(x);
L_005223cd:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_005223d1:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_005223d5:  // fchs 
    ST(0) = -ST(0);
L_005223d7:  // fstp dword ptr [0x89d784]
    F32((uint32_t)(0x89d784u)) = lf32(ST(0));
    lpop(x);
L_005223dd:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_005223e5:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005223e9:  // fstp dword ptr [0x89d788]
    F32((uint32_t)(0x89d788u)) = lf32(ST(0));
    lpop(x);
L_005223ef:  // mov dword ptr [esp + 0x18], 0xbfcccccd
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0xbfcccccdu);
L_005223f7:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005223fb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005223fd:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00522401:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00522405:  // mov dword ptr [esp + 0x14], 0xc0a00000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xc0a00000u);
L_0052240d:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00522411:  // mov dword ptr [0x89d794], edx
    M32((uint32_t)(0x89d794u)) = (uint32_t)(edx);
L_00522417:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052241b:  // mov dword ptr [0x89d79c], ecx
    M32((uint32_t)(0x89d79cu)) = (uint32_t)(ecx);
L_00522421:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00522426:  // fstp dword ptr [0x89d78c]
    F32((uint32_t)(0x89d78cu)) = lf32(ST(0));
    lpop(x);
L_0052242c:  // mov dword ptr [0x89d798], eax
    M32((uint32_t)(0x89d798u)) = (uint32_t)(eax);
L_00522431:  // mov dword ptr [0x89d7a0], edx
    M32((uint32_t)(0x89d7a0u)) = (uint32_t)(edx);
L_00522437:  // call 0x4685a0
    t0 = 0x004685a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052243cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052243c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052243e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522440:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522442:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_00522449:  // mov dword ptr [esp + 0xc8], 0
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(0x0u);
L_00522454:  // mov dword ptr [esp + 0xdc], 0
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(0x0u);
L_0052245f:  // mov dword ptr [esp + 0xe0], 0
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(0x0u);
L_0052246a:  // mov dword ptr [esp + 0xe4], 0
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(0x0u);
L_00522475:  // mov dword ptr [esp + 0xec], 0
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(0x0u);
L_00522480:  // mov dword ptr [esp + 0xf0], 0
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(0x0u);
L_0052248b:  // mov dword ptr [esp + 0xf4], 0
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(0x0u);
L_00522496:  // mov dword ptr [esp + 0xf8], 0
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(0x0u);
L_005224a1:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005224a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005224a6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005224a8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005224aa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005224ac:  // lea ecx, [esp + 0x114]
    ecx = (uint32_t)((uint32_t)(esp + 0x114u));
L_005224b3:  // mov dword ptr [esp + 0xfc], 0
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(0x0u);
L_005224be:  // mov dword ptr [esp + 0x100], 0
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(0x0u);
L_005224c9:  // mov dword ptr [esp + 0x104], 0
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(0x0u);
L_005224d4:  // mov dword ptr [esp + 0x108], 0
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(0x0u);
L_005224df:  // mov dword ptr [esp + 0x10c], 0
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(0x0u);
L_005224ea:  // mov dword ptr [esp + 0x110], 0
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(0x0u);
L_005224f5:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005224fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005224fa:  // fld qword ptr [0x5db378]
    lpush(x, (long double)F64((uint32_t)(0x5db378u)));
L_00522500:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00522502:  // mov dword ptr [esp + 0x10], 0xc59c4000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xc59c4000u);
L_0052250a:  // mov dword ptr [esp + 0x14], 0x459c4000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x459c4000u);
L_00522512:  // mov dword ptr [esp + 0x18], 0x44bb8000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x44bb8000u);
L_0052251a:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00522520:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00522522:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00522525:  // jne 0x522551
    if (!f.zf) goto L_00522551;
L_00522527:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0052252d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0052252f:  // fmul dword ptr [0x5db370]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db370u)));
L_00522535:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00522539:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0052253b:  // fmul dword ptr [0x5db36c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db36cu)));
L_00522541:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00522545:  // fmul dword ptr [0x5db368]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db368u)));
L_0052254b:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0052254f:  // jmp 0x522553
    goto L_00522553;
L_00522551:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00522553:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00522557:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_0052255c:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_00522561:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_00522566:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0052256a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0052256d:  // mov ebx, dword ptr [esp + 0x34]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00522571:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00522573:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00522577:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522579:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0052257b:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_00522582:  // mov dword ptr [0x9c68a8], 0
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(0x0u);
L_0052258c:  // mov byte ptr [0x9c690c], 1
    M8((uint32_t)(0x9c690cu)) = (uint8_t)(0x1u);
L_00522593:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_00522596:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_00522599:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0052259c:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005225a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005225a1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005225a5:  // push 0x3ef5c290
    t0 = 0x3ef5c290u; esp -= 4; M32(esp) = t0;
L_005225aa:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_005225af:  // push 0x3df5c290
    t0 = 0x3df5c290u; esp -= 4; M32(esp) = t0;
L_005225b4:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_005225b9:  // lea esi, [esp + 0xc8]
    esi = (uint32_t)((uint32_t)(esp + 0xc8u));
L_005225c0:  // mov edi, 0x9c65c0
    edi = (uint32_t)(0x9c65c0u);
L_005225c5:  // fchs 
    ST(0) = -ST(0);
L_005225c7:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_005225cb:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_005225ce:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005225d2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005225d4:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_005225d8:  // mov eax, esp
    eax = (uint32_t)(esp);
L_005225da:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005225dc:  // mov byte ptr [0x9c68fc], 1
    M8((uint32_t)(0x9c68fcu)) = (uint8_t)(0x1u);
L_005225e3:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_005225e5:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_005225ec:  // mov byte ptr [0x9c68a0], 1
    M8((uint32_t)(0x9c68a0u)) = (uint8_t)(0x1u);
L_005225f3:  // mov byte ptr [0x9c6904], 1
    M8((uint32_t)(0x9c6904u)) = (uint8_t)(0x1u);
L_005225fa:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_005225fd:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_00522600:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00522603:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522608u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522608:  // fld qword ptr [0x5db360]
    lpush(x, (long double)F64((uint32_t)(0x5db360u)));
L_0052260e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00522610:  // mov dword ptr [esp + 0x3c], 0x447a0000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x447a0000u);
L_00522618:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0052261c:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00522620:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00522625:  // lea esi, [esp + 0xbc]
    esi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_0052262c:  // mov edi, 0x9c661c
    edi = (uint32_t)(0x9c661cu);
L_00522631:  // mov dword ptr [esp + 0x40], 0x43480000
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x43480000u);
L_00522639:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0052263d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0052263f:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_00522647:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0052264b:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0052264f:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00522653:  // mov byte ptr [0x9c68fd], 1
    M8((uint32_t)(0x9c68fdu)) = (uint8_t)(0x1u);
L_0052265a:  // mov byte ptr [0x9c68a1], 1
    M8((uint32_t)(0x9c68a1u)) = (uint8_t)(0x1u);
L_00522661:  // mov byte ptr [0x9c6905], 1
    M8((uint32_t)(0x9c6905u)) = (uint8_t)(0x1u);
L_00522668:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0052266e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00522670:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00522673:  // jne 0x52269f
    if (!f.zf) goto L_0052269f;
L_00522675:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0052267b:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00522683:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00522687:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0052268b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0052268d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00522691:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00522695:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00522697:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0052269b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0052269d:  // jmp 0x5226a1
    goto L_005226a1;
L_0052269f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005226a1:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_005226a6:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_005226ab:  // push 0x3e75c290
    t0 = 0x3e75c290u; esp -= 4; M32(esp) = t0;
L_005226b0:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_005226b3:  // mov eax, esp
    eax = (uint32_t)(esp);
L_005226b5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005226b7:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_005226b9:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005226bd:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_005226c0:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005226c4:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_005226c7:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_005226ce:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_005226d1:  // call 0x4901e0
    t0 = 0x004901e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005226d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005226d6:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_005226db:  // lea esi, [esp + 0xbc]
    esi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_005226e2:  // mov edi, 0x9c6678
    edi = (uint32_t)(0x9c6678u);
L_005226e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005226e9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005226eb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005226ed:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_005226f2:  // mov byte ptr [0x9c68fe], 1
    M8((uint32_t)(0x9c68feu)) = (uint8_t)(0x1u);
L_005226f9:  // mov byte ptr [0x9c68a2], 1
    M8((uint32_t)(0x9c68a2u)) = (uint8_t)(0x1u);
L_00522700:  // mov byte ptr [0x9c6906], 1
    M8((uint32_t)(0x9c6906u)) = (uint8_t)(0x1u);
L_00522707:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_0052270e:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00522715:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052271au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052271a:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_0052271f:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522724u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522724:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00522726:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522728:  // je 0x522a01
    if (f.zf) goto L_00522a01;
L_0052272e:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522731:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522733:  // je 0x52273a
    if (f.zf) goto L_0052273a;
L_00522735:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_0052273a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0052273d:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0052273f:  // je 0x522742
    if (f.zf) goto L_00522742;
L_00522741:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522742:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522745:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522747:  // je 0x52274a
    if (f.zf) goto L_0052274a;
L_00522749:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0052274a:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0052274e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522750:  // jle 0x522a05
    if ((f.zf || f.sf != f.of)) goto L_00522a05;
L_00522756:  // mov esi, dword ptr [ebp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_00522759:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_0052275e:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522763u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522763:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522765:  // je 0x52279c
    if (f.zf) goto L_0052279c;
L_00522767:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0052276a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052276c:  // je 0x522777
    if (f.zf) goto L_00522777;
L_0052276e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522770:  // jne 0x522776
    if (!f.zf) goto L_00522776;
L_00522772:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00522774:  // jmp 0x52279f
    goto L_0052279f;
L_00522776:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00522777:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0052277a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052277c:  // je 0x52278a
    if (f.zf) goto L_0052278a;
L_0052277e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522780:  // jne 0x522789
    if (!f.zf) goto L_00522789;
L_00522782:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00522787:  // jmp 0x52279f
    goto L_0052279f;
L_00522789:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0052278a:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0052278d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052278f:  // je 0x52279c
    if (f.zf) goto L_0052279c;
L_00522791:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522793:  // jne 0x52279c
    if (!f.zf) goto L_0052279c;
L_00522795:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_0052279a:  // jmp 0x52279f
    goto L_0052279f;
L_0052279c:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0052279f:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_005227a2:  // je 0x5227b8
    if (f.zf) goto L_005227b8;
L_005227a4:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_005227a5:  // je 0x5227b3
    if (f.zf) goto L_005227b3;
L_005227a7:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_005227a8:  // jne 0x522a05
    if (!f.zf) goto L_00522a05;
L_005227ae:  // mov ebx, dword ptr [ebp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_005227b1:  // jmp 0x5227bb
    goto L_005227bb;
L_005227b3:  // mov ebx, dword ptr [ebp + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_005227b6:  // jmp 0x5227bb
    goto L_005227bb;
L_005227b8:  // mov ebx, dword ptr [ebp + 8]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005227bb:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_005227bd:  // je 0x522a05
    if (f.zf) goto L_00522a05;
L_005227c3:  // fld dword ptr [ebp + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x14u)));
L_005227c6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005227c8:  // fcos 
    ST(0) = lfcos(ST(0));
L_005227ca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005227cc:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_005227d0:  // fst dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
L_005227d4:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_005227d8:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_005227dc:  // fsin 
    ST(0) = lfsin(ST(0));
L_005227de:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005227df:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_005227e3:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005227e7:  // fchs 
    ST(0) = -ST(0);
L_005227e9:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_005227ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005227ee:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005227f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005227f3:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005227f5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_005227fa:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_00522801:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522803:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522806:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522808:  // mov dword ptr [esp + 0xa4], edx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(edx);
L_0052280f:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522812:  // mov dword ptr [esp + 0xa8], ecx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(ecx);
L_00522819:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0052281d:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522820:  // mov dword ptr [esp + 0xac], edx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(edx);
L_00522827:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052282cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052282c:  // fld qword ptr [0x5e4a38]
    lpush(x, (long double)F64((uint32_t)(0x5e4a38u)));
L_00522832:  // fsin 
    ST(0) = lfsin(ST(0));
L_00522834:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00522836:  // mov dword ptr [esp + 0xa4], ecx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ecx);
L_0052283d:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522840:  // mov dword ptr [esp + 0xa8], edx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(edx);
L_00522847:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0052284a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052284b:  // mov dword ptr [esp + 0xb0], ecx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ecx);
L_00522852:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522855:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00522859:  // mov dword ptr [esp + 0xb4], edx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(edx);
L_00522860:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00522864:  // fld qword ptr [0x5e4a38]
    lpush(x, (long double)F64((uint32_t)(0x5e4a38u)));
L_0052286a:  // fcos 
    ST(0) = lfcos(ST(0));
L_0052286c:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00522870:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00522874:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00522878:  // fchs 
    ST(0) = -ST(0);
L_0052287a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0052287d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052287e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522880:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522885u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522885:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00522887:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522888:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_0052288c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0052288f:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_00522893:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522896:  // mov dword ptr [esp + 0x70], ecx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ecx);
L_0052289a:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052289e:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005228a1:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005228a5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005228a6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005228a8:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_005228ac:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005228b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005228b1:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005228b3:  // mov dword ptr [esp + 0x74], ecx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ecx);
L_005228b7:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_005228ba:  // mov dword ptr [esp + 0x78], edx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(edx);
L_005228be:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005228c1:  // mov dword ptr [esp + 0x7c], ecx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ecx);
L_005228c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005228c6:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_005228cd:  // fmul dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb0u)));
L_005228d4:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_005228d8:  // fmul dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa0u)));
L_005228df:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005228e2:  // mov dword ptr [esp + 0x84], edx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(edx);
L_005228e9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005228eb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005228ee:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_005228f5:  // fmul dword ptr [esp + 0xac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xacu)));
L_005228fc:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_00522900:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_00522907:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522908:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0052290a:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_0052290e:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_00522912:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00522914:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522917:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_0052291e:  // fmul dword ptr [esp + 0xac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xacu)));
L_00522925:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_0052292c:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_00522933:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522934:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00522938:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0052293a:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_00522941:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_00522945:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00522947:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0052294a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052294fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052294f:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00522953:  // fmul dword ptr [esp + 0xac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xacu)));
L_0052295a:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0052295e:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_00522965:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00522966:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522967:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00522969:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0052296c:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_00522970:  // fmul dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb0u)));
L_00522977:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0052297b:  // fmul dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa0u)));
L_00522982:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522983:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00522985:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00522989:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_0052298d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0052298f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522992:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_00522996:  // fmul dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb0u)));
L_0052299d:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_005229a1:  // fmul dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa0u)));
L_005229a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005229a9:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_005229ad:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005229af:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_005229b3:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_005229b7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005229b9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005229bc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005229c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005229c1:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_005229c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005229c6:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_005229ca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005229cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005229cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005229ce:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_005229d5:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005229dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005229da:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005229db:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_005229e2:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005229e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005229e7:  // lea edi, [ebx + 0x14]
    edi = (uint32_t)((uint32_t)(ebx + 0x14u));
L_005229ea:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_005229ef:  // lea esi, [esp + 0x128]
    esi = (uint32_t)((uint32_t)(esp + 0x128u));
L_005229f6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005229f8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_005229fa:  // call 0x46bc20
    t0 = 0x0046bc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005229ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005229ff:  // jmp 0x522a05
    goto L_00522a05;
L_00522a01:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00522a05:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00522a07:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00522a09:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00522a0e:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_00522a15:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00522a1c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522a21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522a21:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00522a23:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00522a25:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00522a2a:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522a2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522a2f:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00522a31:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00522a33:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00522a38:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522a3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522a3d:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00522a42:  // mov esi, 0x89bd00
    esi = (uint32_t)(0x89bd00u);
L_00522a47:  // mov edi, 0x9c6994
    edi = (uint32_t)(0x9c6994u);
L_00522a4c:  // mov edx, dword ptr [0x89d86c]
    edx = (uint32_t)(M32((uint32_t)(0x89d86cu)));
L_00522a52:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00522a54:  // fld dword ptr [0x5db34c]
    lpush(x, (long double)F32((uint32_t)(0x5db34cu)));
L_00522a5a:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_00522a5e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522a60:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522a65:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522a67:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522a69:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522a6e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522a73:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00522a75:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00522a76:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00522a7b:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_00522a80:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522a81:  // mov byte ptr [0x9c73ea], 1
    M8((uint32_t)(0x9c73eau)) = (uint8_t)(0x1u);
L_00522a88:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522a8b:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522a90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522a90:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00522a93:  // mov eax, dword ptr [0x89d870]
    eax = (uint32_t)(M32((uint32_t)(0x89d870u)));
L_00522a98:  // fld dword ptr [0x5db348]
    lpush(x, (long double)F32((uint32_t)(0x5db348u)));
L_00522a9e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522aa0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522aa5:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00522aa9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522aab:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522aad:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522ab2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522ab7:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00522ab9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00522aba:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00522abf:  // push 0x43340000
    t0 = 0x43340000u; esp -= 4; M32(esp) = t0;
L_00522ac4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522ac5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522ac8:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522acdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522acd:  // mov esi, dword ptr [ebp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_00522ad0:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00522ad3:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_00522ad8:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522addu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522add:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522adf:  // je 0x522b16
    if (f.zf) goto L_00522b16;
L_00522ae1:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522ae4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522ae6:  // je 0x522af1
    if (f.zf) goto L_00522af1;
L_00522ae8:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522aea:  // jne 0x522af0
    if (!f.zf) goto L_00522af0;
L_00522aec:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00522aee:  // jmp 0x522b19
    goto L_00522b19;
L_00522af0:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00522af1:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522af4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522af6:  // je 0x522b04
    if (f.zf) goto L_00522b04;
L_00522af8:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522afa:  // jne 0x522b03
    if (!f.zf) goto L_00522b03;
L_00522afc:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00522b01:  // jmp 0x522b19
    goto L_00522b19;
L_00522b03:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00522b04:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522b07:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522b09:  // je 0x522b16
    if (f.zf) goto L_00522b16;
L_00522b0b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522b0d:  // jne 0x522b16
    if (!f.zf) goto L_00522b16;
L_00522b0f:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_00522b14:  // jmp 0x522b19
    goto L_00522b19;
L_00522b16:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_00522b19:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_00522b1c:  // je 0x522b48
    if (f.zf) goto L_00522b48;
L_00522b1e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00522b1f:  // je 0x522b36
    if (f.zf) goto L_00522b36;
L_00522b21:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00522b22:  // jne 0x522b58
    if (!f.zf) goto L_00522b58;
L_00522b24:  // mov dword ptr [esp + 0x28], 0x3e570a3d
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x3e570a3du);
L_00522b2c:  // mov dword ptr [esp + 0x38], 0x3f800000
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x3f800000u);
L_00522b34:  // jmp 0x522b58
    goto L_00522b58;
L_00522b36:  // mov dword ptr [esp + 0x28], 0x3f800000
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x3f800000u);
L_00522b3e:  // mov dword ptr [esp + 0x38], 0x3e570a3d
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x3e570a3du);
L_00522b46:  // jmp 0x522b58
    goto L_00522b58;
L_00522b48:  // mov dword ptr [esp + 0x28], 0x3f1c28f6
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x3f1c28f6u);
L_00522b50:  // mov dword ptr [esp + 0x38], 0x3f1c28f6
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x3f1c28f6u);
L_00522b58:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00522b5c:  // push 0xff6fff4f
    t0 = 0xff6fff4fu; esp -= 4; M32(esp) = t0;
L_00522b61:  // fld dword ptr [0x5db340]
    lpush(x, (long double)F32((uint32_t)(0x5db340u)));
L_00522b67:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_00522b6b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522b6c:  // push 0x435a0000
    t0 = 0x435a0000u; esp -= 4; M32(esp) = t0;
L_00522b71:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522b72:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522b75:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522b7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522b7a:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00522b7e:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00522b81:  // fld dword ptr [0x5db33c]
    lpush(x, (long double)F32((uint32_t)(0x5db33cu)));
L_00522b87:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_00522b8b:  // push 0xff4f6fff
    t0 = 0xff4f6fffu; esp -= 4; M32(esp) = t0;
L_00522b90:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00522b91:  // push 0x435a0000
    t0 = 0x435a0000u; esp -= 4; M32(esp) = t0;
L_00522b96:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522b97:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522b9a:  // call 0x450460
    t0 = 0x00450460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522b9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522b9f:  // fld dword ptr [esp + 0x16c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x16cu)));
L_00522ba6:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00522bac:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00522baf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00522bb1:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00522bb4:  // je 0x522bf9
    if (f.zf) goto L_00522bf9;
L_00522bb6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522bbb:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00522bc0:  // call 0x452fd0
    t0 = 0x00452fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522bc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522bc5:  // mov eax, dword ptr [0x89d810]
    eax = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_00522bca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522bcc:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522bd1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522bd3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00522bd5:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00522bda:  // push 0x3fcccccd
    t0 = 0x3fcccccdu; esp -= 4; M32(esp) = t0;
L_00522bdf:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00522be1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00522be2:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_00522be7:  // push 0x43610000
    t0 = 0x43610000u; esp -= 4; M32(esp) = t0;
L_00522bec:  // push 0x438e8000
    t0 = 0x438e8000u; esp -= 4; M32(esp) = t0;
L_00522bf1:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522bf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522bf6:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00522bf9:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_00522bfe:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522c03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522c03:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00522c05:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522c07:  // je 0x522c36
    if (f.zf) goto L_00522c36;
L_00522c09:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522c0c:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522c0e:  // je 0x522c15
    if (f.zf) goto L_00522c15;
L_00522c10:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_00522c15:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522c18:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522c1a:  // je 0x522c1d
    if (f.zf) goto L_00522c1d;
L_00522c1c:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522c1d:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522c20:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522c22:  // je 0x522c25
    if (f.zf) goto L_00522c25;
L_00522c24:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522c25:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00522c28:  // jle 0x522c36
    if ((f.zf || f.sf != f.of)) goto L_00522c36;
L_00522c2a:  // mov esi, dword ptr [esp + 0x15c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_00522c31:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522c32:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00522c34:  // jmp 0x522c40
    goto L_00522c40;
L_00522c36:  // mov esi, dword ptr [esp + 0x15c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_00522c3d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522c3e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522c40:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00522c45:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522c4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522c4a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522c4b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00522c4d:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_00522c52:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522c57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522c57:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_00522c5c:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522c61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522c61:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00522c63:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522c65:  // je 0x52306a
    if (f.zf) goto L_0052306a;
L_00522c6b:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522c6e:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522c70:  // je 0x522c77
    if (f.zf) goto L_00522c77;
L_00522c72:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_00522c77:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522c7a:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522c7c:  // je 0x522c7f
    if (f.zf) goto L_00522c7f;
L_00522c7e:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522c7f:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522c82:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522c84:  // je 0x522c87
    if (f.zf) goto L_00522c87;
L_00522c86:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522c87:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522c89:  // jle 0x52306a
    if ((f.zf || f.sf != f.of)) goto L_0052306a;
L_00522c8f:  // mov esi, dword ptr [ebp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_00522c92:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_00522c97:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522c9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522c9c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522c9e:  // je 0x522cf6
    if (f.zf) goto L_00522cf6;
L_00522ca0:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522ca3:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522ca5:  // je 0x522cbd
    if (f.zf) goto L_00522cbd;
L_00522ca7:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522ca9:  // jne 0x522cbc
    if (!f.zf) goto L_00522cbc;
L_00522cab:  // push 0x3c345
    t0 = 0x3c345u; esp -= 4; M32(esp) = t0;
L_00522cb0:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00522cb5:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522cbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522cba:  // jmp 0x522d03
    goto L_00522d03;
L_00522cbc:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00522cbd:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522cc0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522cc2:  // je 0x522cda
    if (f.zf) goto L_00522cda;
L_00522cc4:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522cc6:  // jne 0x522cd9
    if (!f.zf) goto L_00522cd9;
L_00522cc8:  // push 0xcb1fd
    t0 = 0xcb1fdu; esp -= 4; M32(esp) = t0;
L_00522ccd:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00522cd2:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522cd7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522cd7:  // jmp 0x522d03
    goto L_00522d03;
L_00522cd9:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00522cda:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522cdd:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522cdf:  // je 0x522cf6
    if (f.zf) goto L_00522cf6;
L_00522ce1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522ce3:  // jne 0x522cf6
    if (!f.zf) goto L_00522cf6;
L_00522ce5:  // push 0x19f8cf
    t0 = 0x19f8cfu; esp -= 4; M32(esp) = t0;
L_00522cea:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00522cef:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522cf4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522cf4:  // jmp 0x522d03
    goto L_00522d03;
L_00522cf6:  // push 0x63fd3c
    t0 = 0x63fd3cu; esp -= 4; M32(esp) = t0;
L_00522cfb:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522d00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522d00:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00522d03:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_00522d0a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00522d0c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522d0d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522d0e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522d10:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00522d15:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522d1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522d1a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00522d1c:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522d21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522d21:  // fild dword ptr [esp + 0xb4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xb4u)));
L_00522d28:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522d2a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522d2c:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00522d31:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522d32:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00522d38:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00522d3a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522d3f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522d44:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00522d49:  // fsubr dword ptr [0x5db5a8]
    ST(0) = ((long double)F32((uint32_t)(0x5db5a8u))) - (ST(0));
L_00522d4f:  // push 0x43160000
    t0 = 0x43160000u; esp -= 4; M32(esp) = t0;
L_00522d54:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522d55:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00522d5a:  // fsub dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x4cu)));
L_00522d5e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522d61:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522d63:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522d68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522d68:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00522d6a:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522d6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522d6f:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00522d76:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00522d7d:  // mov esi, dword ptr [ebp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_00522d80:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_00522d85:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522d8au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522d8a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522d8c:  // je 0x522dc3
    if (f.zf) goto L_00522dc3;
L_00522d8e:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522d91:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522d93:  // je 0x522d9e
    if (f.zf) goto L_00522d9e;
L_00522d95:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522d97:  // jne 0x522d9d
    if (!f.zf) goto L_00522d9d;
L_00522d99:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00522d9b:  // jmp 0x522dc6
    goto L_00522dc6;
L_00522d9d:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00522d9e:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522da1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522da3:  // je 0x522db1
    if (f.zf) goto L_00522db1;
L_00522da5:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522da7:  // jne 0x522db0
    if (!f.zf) goto L_00522db0;
L_00522da9:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00522dae:  // jmp 0x522dc6
    goto L_00522dc6;
L_00522db0:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00522db1:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522db4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00522db6:  // je 0x522dc3
    if (f.zf) goto L_00522dc3;
L_00522db8:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00522dba:  // jne 0x522dc3
    if (!f.zf) goto L_00522dc3;
L_00522dbc:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_00522dc1:  // jmp 0x522dc6
    goto L_00522dc6;
L_00522dc3:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_00522dc6:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_00522dc9:  // je 0x522ddf
    if (f.zf) goto L_00522ddf;
L_00522dcb:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00522dcc:  // je 0x522dd8
    if (f.zf) goto L_00522dd8;
L_00522dce:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00522dcf:  // jne 0x522de6
    if (!f.zf) goto L_00522de6;
L_00522dd1:  // mov eax, dword ptr [0x89d878]
    eax = (uint32_t)(M32((uint32_t)(0x89d878u)));
L_00522dd6:  // jmp 0x522dea
    goto L_00522dea;
L_00522dd8:  // mov eax, dword ptr [0x89d874]
    eax = (uint32_t)(M32((uint32_t)(0x89d874u)));
L_00522ddd:  // jmp 0x522dea
    goto L_00522dea;
L_00522ddf:  // mov eax, dword ptr [0x89d87c]
    eax = (uint32_t)(M32((uint32_t)(0x89d87cu)));
L_00522de4:  // jmp 0x522dea
    goto L_00522dea;
L_00522de6:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00522dea:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522dec:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00522df0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522df5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522df7:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00522df9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522dfe:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522e03:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00522e05:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00522e06:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00522e0b:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00522e10:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00522e11:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522e16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522e16:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00522e19:  // mov ecx, 0x89da44
    ecx = (uint32_t)(0x89da44u);
L_00522e1e:  // call 0x5230e0
    t0 = 0x005230e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522e23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522e23:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00522e25:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00522e27:  // je 0x52306a
    if (f.zf) goto L_0052306a;
L_00522e2d:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00522e30:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522e32:  // je 0x522e39
    if (f.zf) goto L_00522e39;
L_00522e34:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_00522e39:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00522e3c:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522e3e:  // je 0x522e41
    if (f.zf) goto L_00522e41;
L_00522e40:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522e41:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00522e44:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00522e46:  // je 0x522e49
    if (f.zf) goto L_00522e49;
L_00522e48:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522e49:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00522e4c:  // jle 0x52306a
    if ((f.zf || f.sf != f.of)) goto L_0052306a;
L_00522e52:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00522e56:  // fsub dword ptr [0x5db1dc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db1dcu)));
L_00522e5c:  // push 0x36
    t0 = 0x36u; esp -= 4; M32(esp) = t0;
L_00522e5e:  // push 0x43970000
    t0 = 0x43970000u; esp -= 4; M32(esp) = t0;
L_00522e63:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522e64:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00522e68:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00522e6c:  // fadd dword ptr [0x5d8610]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8610u)));
L_00522e72:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522e75:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00522e79:  // fsub dword ptr [0x5d8610]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8610u)));
L_00522e7f:  // push 0x435e0000
    t0 = 0x435e0000u; esp -= 4; M32(esp) = t0;
L_00522e84:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522e85:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522e88:  // call 0x469390
    t0 = 0x00469390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522e8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522e8d:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00522e91:  // fadd dword ptr [0x5db1dc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db1dcu)));
L_00522e97:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00522e9a:  // push 0x37
    t0 = 0x37u; esp -= 4; M32(esp) = t0;
L_00522e9c:  // push 0x43970000
    t0 = 0x43970000u; esp -= 4; M32(esp) = t0;
L_00522ea1:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00522ea5:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00522ea9:  // fadd dword ptr [0x5db4c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4c0u)));
L_00522eaf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522eb0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522eb3:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00522eb7:  // fsub dword ptr [0x5d8610]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8610u)));
L_00522ebd:  // push 0x435e0000
    t0 = 0x435e0000u; esp -= 4; M32(esp) = t0;
L_00522ec2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522ec3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00522ec6:  // call 0x469390
    t0 = 0x00469390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522ecbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522ecb:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_00522ed1:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00522ed5:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00522ed9:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00522edc:  // and eax, 0x8000003f
    t0 = llog<32>(eax & 0x8000003fu, f);
    eax = (uint32_t)(t0);
L_00522ee1:  // jns 0x522ee8
    if (!f.sf) goto L_00522ee8;
L_00522ee3:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00522ee4:  // or eax, 0xffffffc0
    t0 = llog<32>(eax | 0xffffffc0u, f);
    eax = (uint32_t)(t0);
L_00522ee7:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00522ee8:  // cmp eax, 0x32
    t0 = lsub<32>(eax, 0x32u, f);
L_00522eeb:  // jl 0x522f01
    if ((f.sf != f.of)) goto L_00522f01;
L_00522eed:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00522ef0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00522ef6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00522ef8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00522efb:  // jne 0x522f9e
    if (!f.zf) goto L_00522f9e;
L_00522f01:  // mov ecx, dword ptr [0x89d840]
    ecx = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_00522f07:  // push 0xc0490fdb
    t0 = 0xc0490fdbu; esp -= 4; M32(esp) = t0;
L_00522f0c:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00522f10:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522f15:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522f17:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00522f19:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522f1e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522f23:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00522f25:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522f26:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00522f2b:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00522f30:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522f31:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522f36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522f36:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00522f39:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00522f3f:  // push 0xc0490fdb
    t0 = 0xc0490fdbu; esp -= 4; M32(esp) = t0;
L_00522f44:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522f49:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522f4b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00522f4d:  // fistp qword ptr [esp + 0x64]
    M64((uint32_t)(esp + 0x64u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00522f51:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00522f55:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00522f57:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00522f5a:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00522f5c:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00522f5f:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00522f65:  // fsub dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_00522f68:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00522f6a:  // not edx
    edx = (uint32_t)(~edx);
L_00522f6c:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00522f72:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_00522f78:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_00522f7a:  // mov eax, dword ptr [0x89d840]
    eax = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_00522f7f:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00522f83:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00522f87:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522f88:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00522f89:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00522f8a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00522f8b:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00522f90:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00522f95:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522f96:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00522f9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00522f9b:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_00522f9e:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_00522fa4:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00522fa8:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00522fac:  // and ecx, 0x8000003f
    t0 = llog<32>(ecx & 0x8000003fu, f);
    ecx = (uint32_t)(t0);
L_00522fb2:  // jns 0x522fb9
    if (!f.sf) goto L_00522fb9;
L_00522fb4:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522fb5:  // or ecx, 0xffffffc0
    t0 = llog<32>(ecx | 0xffffffc0u, f);
    ecx = (uint32_t)(t0);
L_00522fb8:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00522fb9:  // cmp ecx, 0x32
    t0 = lsub<32>(ecx, 0x32u, f);
L_00522fbc:  // jl 0x522fd2
    if ((f.sf != f.of)) goto L_00522fd2;
L_00522fbe:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00522fc1:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00522fc7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00522fc9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00522fcc:  // jne 0x52306a
    if (!f.zf) goto L_0052306a;
L_00522fd2:  // mov edx, dword ptr [0x89d840]
    edx = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_00522fd8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522fda:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00522fde:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522fe3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00522fe5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00522fe7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522fec:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00522ff1:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00522ff3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00522ff4:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_00522ff9:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00522ffe:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00522fff:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00523004u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00523004:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00523007:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0052300d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052300f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00523014:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00523016:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00523018:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0052301c:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_00523020:  // mov edx, dword ptr [0x89d840]
    edx = (uint32_t)(M32((uint32_t)(0x89d840u)));
L_00523026:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00523028:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0052302b:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0052302d:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00523030:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00523036:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_00523039:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0052303f:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00523043:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00523047:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00523048:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00523049:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0052304b:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0052304d:  // and ecx, 0xffffff
    t0 = llog<32>(ecx & 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_00523053:  // xor ecx, eax
    t0 = llog<32>(ecx ^ eax, f);
    ecx = (uint32_t)(t0);
L_00523055:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00523056:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00523057:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0052305c:  // push 0x43830000
    t0 = 0x43830000u; esp -= 4; M32(esp) = t0;
L_00523061:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00523062:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00523067u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00523067:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0052306a:  // fld dword ptr [esp + 0x15c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x15cu)));
L_00523071:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00523077:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00523079:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0052307c:  // je 0x5230b1
    if (f.zf) goto L_005230b1;
L_0052307e:  // mov eax, dword ptr [esp + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_00523085:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00523086:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0052308b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052308d:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0052308f:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00523094u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00523094:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00523097:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0052309c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052309d:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005230a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005230a2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_005230a7:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_005230ac:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005230b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005230b1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005230b2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005230b3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005230b4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005230b5:  // add esp, 0x148
    t0 = ladd<32>(esp, 0x148u, f);
    esp = (uint32_t)(t0);
L_005230bb:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00522190, 00522190)
