// lifted from 00543300 (FUN_00543300, 1467 bytes, 377 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00543300(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00543300;
L_00543300:  // mov eax, dword ptr [0x67a67c]
    eax = (uint32_t)(M32((uint32_t)(0x67a67cu)));
L_00543305:  // sub esp, 0x254
    t0 = lsub<32>(esp, 0x254u, f);
    esp = (uint32_t)(t0);
L_0054330b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054330d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054330e:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00543310:  // je 0x5438b1
    if (f.zf) goto L_005438b1;
L_00543316:  // mov eax, dword ptr [ebp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x38u)));
L_00543319:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054331b:  // je 0x5438b1
    if (f.zf) goto L_005438b1;
L_00543321:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00543322:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00543323:  // mov esi, dword ptr [esp + 0x264]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x264u)));
L_0054332a:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_0054332e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054332f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543330:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00543332:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00543334:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543336u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543336:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00543338:  // lea eax, [esp + 0xe4]
    eax = (uint32_t)((uint32_t)(esp + 0xe4u));
L_0054333f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00543340:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00543342:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543345u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543345:  // fld qword ptr [0x5dc478]
    lpush(x, (long double)F64((uint32_t)(0x5dc478u)));
L_0054334b:  // fcos 
    ST(0) = lfcos(ST(0));
L_0054334d:  // fld qword ptr [0x5dc478]
    lpush(x, (long double)F64((uint32_t)(0x5dc478u)));
L_00543353:  // fsin 
    ST(0) = lfsin(ST(0));
L_00543355:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00543359:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0054335f:  // fcos 
    ST(0) = lfcos(ST(0));
L_00543361:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00543365:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0054336b:  // fsin 
    ST(0) = lfsin(ST(0));
L_0054336d:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00543371:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00543375:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00543379:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054337d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0054337f:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00543383:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00543387:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00543389:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0054338b:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0054338f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00543391:  // fstp dword ptr [esp + 0x124]
    F32((uint32_t)(esp + 0x124u)) = lf32(ST(0));
    lpop(x);
L_00543398:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0054339c:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_005433a0:  // fchs 
    ST(0) = -ST(0);
L_005433a2:  // fstp dword ptr [esp + 0x128]
    F32((uint32_t)(esp + 0x128u)) = lf32(ST(0));
    lpop(x);
L_005433a9:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_005433ab:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_005433af:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_005433b3:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_005433b7:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005433bb:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_005433bd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005433bf:  // fstp dword ptr [esp + 0x12c]
    F32((uint32_t)(esp + 0x12cu)) = lf32(ST(0));
    lpop(x);
L_005433c6:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_005433c8:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_005433cc:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_005433d0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005433d2:  // fstp dword ptr [esp + 0x134]
    F32((uint32_t)(esp + 0x134u)) = lf32(ST(0));
    lpop(x);
L_005433d9:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_005433dd:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_005433df:  // fstp dword ptr [esp + 0x138]
    F32((uint32_t)(esp + 0x138u)) = lf32(ST(0));
    lpop(x);
L_005433e6:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_005433ea:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_005433ee:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005433f2:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_005433f4:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_005433f6:  // fstp dword ptr [esp + 0x13c]
    F32((uint32_t)(esp + 0x13cu)) = lf32(ST(0));
    lpop(x);
L_005433fd:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00543401:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00543405:  // fchs 
    ST(0) = -ST(0);
L_00543407:  // fstp dword ptr [esp + 0x144]
    F32((uint32_t)(esp + 0x144u)) = lf32(ST(0));
    lpop(x);
L_0054340e:  // mov ecx, dword ptr [ebp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x24u)));
L_00543411:  // fstp dword ptr [esp + 0x148]
    F32((uint32_t)(esp + 0x148u)) = lf32(ST(0));
    lpop(x);
L_00543418:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543419:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054341b:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0054341f:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00543423:  // fstp dword ptr [esp + 0x150]
    F32((uint32_t)(esp + 0x150u)) = lf32(ST(0));
    lpop(x);
L_0054342a:  // mov eax, dword ptr [ecx + 0x150]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x150u)));
L_00543430:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_00543437:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00543439:  // fld dword ptr [esp + 0x10c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10cu)));
L_00543440:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00543443:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00543445:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_0054344c:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0054344f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00543451:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00543454:  // fld dword ptr [esp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf8u)));
L_0054345b:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0054345d:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_00543464:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00543467:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543468:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054346a:  // fld dword ptr [esp + 0x104]
    lpush(x, (long double)F32((uint32_t)(esp + 0x104u)));
L_00543471:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00543474:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00543476:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00543479:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_00543480:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00543482:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_00543489:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0054348c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054348d:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00543491:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00543493:  // fld dword ptr [esp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf8u)));
L_0054349a:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0054349d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054349f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005434a2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005434a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005434a7:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_005434ab:  // fadd dword ptr [esp + 0x74]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x74u)));
L_005434af:  // mov eax, dword ptr [esp + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x26cu)));
L_005434b6:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_005434b9:  // or eax, 0xffffff
    t0 = llog<32>(eax | 0xffffffu, f);
    eax = (uint32_t)(t0);
L_005434be:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_005434c0:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_005434c4:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_005434c8:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_005434cc:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_005434d0:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_005434d4:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_005434d8:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_005434dc:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_005434e0:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_005434e5:  // lea esi, [esp + 0xe4]
    esi = (uint32_t)((uint32_t)(esp + 0xe4u));
L_005434ec:  // lea edi, [esp + 0x44]
    edi = (uint32_t)((uint32_t)(esp + 0x44u));
L_005434f0:  // cmp ebx, 4
    t0 = lsub<32>(ebx, 0x4u, f);
L_005434f3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005434f5:  // jne 0x5435f8
    if (!f.zf) goto L_005435f8;
L_005434fb:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00543500:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00543502:  // lea edx, [esp + 0x8c]
    edx = (uint32_t)((uint32_t)(esp + 0x8cu));
L_00543509:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0054350b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054350c:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543511u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543511:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00543513:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00543515:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0054351a:  // lea ecx, [esp + 0x170]
    ecx = (uint32_t)((uint32_t)(esp + 0x170u));
L_00543521:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543526u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543526:  // fld qword ptr [0x5e50c0]
    lpush(x, (long double)F64((uint32_t)(0x5e50c0u)));
L_0054352c:  // fsin 
    ST(0) = lfsin(ST(0));
L_0054352e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00543530:  // mov dword ptr [esp + 0x84], ecx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ecx);
L_00543537:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054353a:  // mov dword ptr [esp + 0x88], edx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edx);
L_00543541:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00543544:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543545:  // mov dword ptr [esp + 0x90], ecx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(ecx);
L_0054354c:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0054354f:  // lea ecx, [esp + 0x1b8]
    ecx = (uint32_t)((uint32_t)(esp + 0x1b8u));
L_00543556:  // mov dword ptr [esp + 0x94], edx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edx);
L_0054355d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00543561:  // fld qword ptr [0x5e50c0]
    lpush(x, (long double)F64((uint32_t)(0x5e50c0u)));
L_00543567:  // fcos 
    ST(0) = lfcos(ST(0));
L_00543569:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0054356d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00543571:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00543575:  // fchs 
    ST(0) = -ST(0);
L_00543577:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0054357a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054357b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054357d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543582u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543582:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00543584:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00543585:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_0054358c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054358f:  // mov dword ptr [esp + 0x9c], edx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edx);
L_00543596:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00543599:  // mov dword ptr [esp + 0xa0], ecx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(ecx);
L_005435a0:  // lea ecx, [esp + 0x1a8]
    ecx = (uint32_t)((uint32_t)(esp + 0x1a8u));
L_005435a7:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005435aa:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005435ae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005435af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005435b1:  // mov dword ptr [esp + 0xac], edx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(edx);
L_005435b8:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005435bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005435bd:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005435bf:  // mov dword ptr [esp + 0xa4], ecx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ecx);
L_005435c6:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_005435c9:  // mov dword ptr [esp + 0xa8], edx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(edx);
L_005435d0:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005435d3:  // mov dword ptr [esp + 0xac], ecx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ecx);
L_005435da:  // lea ecx, [esp + 0x1d4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1d4u));
L_005435e1:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005435e4:  // lea eax, [esp + 0x84]
    eax = (uint32_t)((uint32_t)(esp + 0x84u));
L_005435eb:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_005435f2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005435f3:  // jmp 0x5436f9
    goto L_005436f9;
L_005435f8:  // cmp ebx, 5
    t0 = lsub<32>(ebx, 0x5u, f);
L_005435fb:  // jne 0x543710
    if (!f.zf) goto L_00543710;
L_00543601:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00543606:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00543608:  // lea edx, [esp + 0xbc]
    edx = (uint32_t)((uint32_t)(esp + 0xbcu));
L_0054360f:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00543611:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00543612:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543617u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543617:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00543619:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054361b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00543620:  // lea ecx, [esp + 0x160]
    ecx = (uint32_t)((uint32_t)(esp + 0x160u));
L_00543627:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054362cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054362c:  // fld qword ptr [0x5e50b8]
    lpush(x, (long double)F64((uint32_t)(0x5e50b8u)));
L_00543632:  // fsin 
    ST(0) = lfsin(ST(0));
L_00543634:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00543636:  // mov dword ptr [esp + 0xb4], ecx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(ecx);
L_0054363d:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00543640:  // mov dword ptr [esp + 0xb8], edx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(edx);
L_00543647:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054364a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054364b:  // mov dword ptr [esp + 0xc0], ecx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(ecx);
L_00543652:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00543655:  // lea ecx, [esp + 0x178]
    ecx = (uint32_t)((uint32_t)(esp + 0x178u));
L_0054365c:  // mov dword ptr [esp + 0xc4], edx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(edx);
L_00543663:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00543667:  // fld qword ptr [0x5e50b8]
    lpush(x, (long double)F64((uint32_t)(0x5e50b8u)));
L_0054366d:  // fcos 
    ST(0) = lfcos(ST(0));
L_0054366f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00543673:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00543677:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054367b:  // fchs 
    ST(0) = -ST(0);
L_0054367d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00543680:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00543681:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00543683:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543688u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543688:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054368a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054368b:  // mov dword ptr [esp + 0xc8], ecx
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(ecx);
L_00543692:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00543695:  // mov dword ptr [esp + 0xcc], edx
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(edx);
L_0054369c:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054369f:  // mov dword ptr [esp + 0xd0], ecx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(ecx);
L_005436a6:  // lea ecx, [esp + 0x198]
    ecx = (uint32_t)((uint32_t)(esp + 0x198u));
L_005436ad:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005436b0:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005436b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005436b5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005436b7:  // mov dword ptr [esp + 0xdc], edx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(edx);
L_005436be:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005436c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005436c3:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005436c5:  // mov dword ptr [esp + 0xd4], ecx
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(ecx);
L_005436cc:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_005436cf:  // mov dword ptr [esp + 0xd8], edx
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(edx);
L_005436d6:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005436d9:  // mov dword ptr [esp + 0xdc], ecx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(ecx);
L_005436e0:  // lea ecx, [esp + 0x204]
    ecx = (uint32_t)((uint32_t)(esp + 0x204u));
L_005436e7:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005436ea:  // lea eax, [esp + 0xb4]
    eax = (uint32_t)((uint32_t)(esp + 0xb4u));
L_005436f1:  // mov dword ptr [esp + 0xe0], edx
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(edx);
L_005436f8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005436f9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005436fa:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_005436fe:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543703u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543703:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00543708:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0054370a:  // lea edi, [esp + 0x44]
    edi = (uint32_t)((uint32_t)(esp + 0x44u));
L_0054370e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00543710:  // mov eax, dword ptr [ebp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x3cu)));
L_00543713:  // lea edx, [ebx + ebx*2]
    edx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_00543716:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0054371a:  // fld dword ptr [eax + edx*8 + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + edx * 8u + 0x10u)));
L_0054371e:  // fmul dword ptr [0x5d8cc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc4u)));
L_00543724:  // fld dword ptr [eax + edx*8 + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + edx * 8u + 0x14u)));
L_00543728:  // lea eax, [eax + edx*8]
    eax = (uint32_t)((uint32_t)(eax + edx * 8u));
L_0054372b:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0054372f:  // fmul dword ptr [0x5d8cc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc4u)));
L_00543735:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00543739:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_0054373d:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_00543741:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00543745:  // lea edx, [esp + 0x1c4]
    edx = (uint32_t)((uint32_t)(esp + 0x1c4u));
L_0054374c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054374d:  // fstp dword ptr [esp + 0x120]
    F32((uint32_t)(esp + 0x120u)) = lf32(ST(0));
    lpop(x);
L_00543754:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00543758:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054375a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054375b:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_0054375f:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00543763:  // mov dword ptr [esp + 0x2c], 0x3f800000
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x3f800000u);
L_0054376b:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00543773:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_0054377b:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0054377f:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00543783:  // fmul dword ptr [esp + 0x124]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x124u)));
L_0054378a:  // mov dword ptr [esp + 0x3c], 0
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x0u);
L_00543792:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_0054379a:  // mov dword ptr [esp + 0x44], 0x3f800000
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x3f800000u);
L_005437a2:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_005437a6:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_005437aa:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005437ac:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_005437b0:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_005437b4:  // fmul dword ptr [esp + 0x124]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x124u)));
L_005437bb:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_005437bf:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_005437c3:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005437c5:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_005437c9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005437cb:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_005437cf:  // fmul dword ptr [esp + 0x124]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x124u)));
L_005437d6:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_005437da:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005437dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005437df:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005437e1:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_005437e5:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_005437e8:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_005437ec:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005437ef:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_005437f3:  // lea ecx, [esp + 0x184]
    ecx = (uint32_t)((uint32_t)(esp + 0x184u));
L_005437fa:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005437fd:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00543801:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00543802:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543803:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00543807:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_0054380b:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543810u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543810:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00543812:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_00543816:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00543819:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0054381d:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00543820:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_00543824:  // mov edx, dword ptr [ebp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x3cu)));
L_00543827:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0054382a:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0054382e:  // mov eax, dword ptr [ebp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00543831:  // imul eax, dword ptr [esp + 0x270]
    t0 = limul32(eax, M32((uint32_t)(esp + 0x270u)), f);
    eax = (uint32_t)(t0);
L_00543839:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0054383b:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0054383e:  // lea eax, [edx + ecx*8]
    eax = (uint32_t)((uint32_t)(edx + ecx * 8u));
L_00543841:  // mov ecx, dword ptr [ebp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_00543844:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543845:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00543848:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054384b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054384c:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054384f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543850:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00543851:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00543853:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00543857:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00543858:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054385c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054385d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054385e:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00543862:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543863:  // lea eax, [esp + 0x94]
    eax = (uint32_t)((uint32_t)(esp + 0x94u));
L_0054386a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054386b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054386c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0054386e:  // call 0x542f90
    t0 = 0x00542f90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543873u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543873:  // cmp ebx, 4
    t0 = lsub<32>(ebx, 0x4u, f);
L_00543876:  // jge 0x5438a4
    if ((f.sf == f.of)) goto L_005438a4;
L_00543878:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_0054387f:  // lea edx, [esp + 0x234]
    edx = (uint32_t)((uint32_t)(esp + 0x234u));
L_00543886:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00543887:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00543888:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0054388f:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00543894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00543894:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00543899:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0054389b:  // lea edi, [esp + 0xe4]
    edi = (uint32_t)((uint32_t)(esp + 0xe4u));
L_005438a2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005438a4:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_005438a5:  // cmp ebx, 6
    t0 = lsub<32>(ebx, 0x6u, f);
L_005438a8:  // jl 0x5434e0
    if ((f.sf != f.of)) goto L_005434e0;
L_005438ae:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005438af:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005438b0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005438b1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005438b2:  // add esp, 0x254
    t0 = ladd<32>(esp, 0x254u, f);
    esp = (uint32_t)(t0);
L_005438b8:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00543300, 00543300)
