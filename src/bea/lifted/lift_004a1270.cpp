// lifted from 004a1270 (FUN_004a1270, 282 bytes, 91 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004a1270(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004a1270;
L_004a1270:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a1273:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004a1274:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a1275:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004a1276:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004a1278:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004a127a:  // lea ebx, [edi + 0x44]
    ebx = (uint32_t)((uint32_t)(edi + 0x44u));
L_004a127d:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004a127f:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a1284u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a1284:  // mov eax, dword ptr [edi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004a1287:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_004a128c:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004a128f:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004a1292:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004a1294:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004a1296:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004a1298:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004a129b:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004a129e:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004a12a1:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004a12a4:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004a12a7:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004a12aa:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_004a12af:  // call 0x491ea0
    t0 = 0x00491ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a12b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a12b4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a12b6:  // mov dword ptr [esp + 0x10], 0x497423f0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x497423f0u);
L_004a12be:  // je 0x4a1383
    if (f.zf) goto L_004a1383;
L_004a12c4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004a12c6:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a12cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a12cb:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004a12cd:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004a12cf:  // je 0x4a1371
    if (f.zf) goto L_004a1371;
L_004a12d5:  // mov ecx, dword ptr [edi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004a12d8:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_004a12da:  // je 0x4a1371
    if (f.zf) goto L_004a1371;
L_004a12e0:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_004a12e3:  // test eax, 0x80000
    t0 = llog<32>(eax & 0x80000u, f);
L_004a12e8:  // jne 0x4a1371
    if (!f.zf) goto L_004a1371;
L_004a12ee:  // test eax, 0x20800
    t0 = llog<32>(eax & 0x20800u, f);
L_004a12f3:  // je 0x4a1371
    if (f.zf) goto L_004a1371;
L_004a12f5:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004a12f8:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004a12fb:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004a12fe:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004a1301:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004a1304:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004a1307:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004a130b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004a130d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004a130f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004a1311:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004a1315:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004a1319:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a131b:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004a131d:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004a131f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004a1321:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004a1323:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004a1325:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004a1327:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004a132b:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a132eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a132e:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_004a1332:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004a1334:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004a1336:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004a133a:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a133du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a133d:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_004a1341:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_004a1345:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_004a1349:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a134b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004a134e:  // je 0x4a1371
    if (f.zf) goto L_004a1371;
L_004a1350:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004a1354:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004a135a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004a135c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004a135f:  // je 0x4a1371
    if (f.zf) goto L_004a1371;
L_004a1361:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004a1362:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004a1364:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a1369u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a1369:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004a136d:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004a1371:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_004a1376:  // call 0x492020
    t0 = 0x00492020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004a137bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004a137b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004a137d:  // jne 0x4a12c4
    if (!f.zf) goto L_004a12c4;
L_004a1383:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004a1384:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004a1385:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004a1386:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004a1389:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004a1270, 004a1270)
