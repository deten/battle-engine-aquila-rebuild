// lifted from 00404210 (vslot66, 953 bytes, 281 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00404210(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00404210;
L_00404210:  // sub esp, 0x28
    t0 = lsub<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_00404213:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404214:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00404215:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00404217:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00404218:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00404219:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_0040421c:  // lea ecx, [ebp + 0x8c]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8cu));
L_00404222:  // lea ebx, [ebp + 0x3c]
    ebx = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_00404225:  // lea edi, [ebp + 0x9c]
    edi = (uint32_t)((uint32_t)(ebp + 0x9cu));
L_0040422b:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0040422d:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_0040422f:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00404231:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00404234:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00404237:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0040423a:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0040423d:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00404240:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00404243:  // mov eax, dword ptr [ebp + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xd0u)));
L_00404249:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0040424e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00404250:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00404252:  // je 0x404266
    if (f.zf) goto L_00404266;
L_00404254:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404259u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404259:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0040425a:  // mov ecx, 0x32
    ecx = (uint32_t)(0x32u);
L_0040425f:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00404261:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_00404264:  // jne 0x404294
    if (!f.zf) goto L_00404294;
L_00404266:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040426bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040426b:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0040426c:  // idiv dword ptr [0x660134]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(0x660134u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00404272:  // mov eax, dword ptr [0x660130]
    eax = (uint32_t)(M32((uint32_t)(0x660130u)));
L_00404277:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00404279:  // jle 0x40428a
    if ((f.zf || f.sf != f.of)) goto L_0040428a;
L_0040427b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040427d:  // je 0x40428a
    if (f.zf) goto L_0040428a;
L_0040427f:  // mov eax, dword ptr [eax + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xccu)));
L_00404285:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_00404286:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00404288:  // jg 0x40427b
    if ((!f.zf && f.sf == f.of)) goto L_0040427b;
L_0040428a:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0040428c:  // je 0x404294
    if (f.zf) goto L_00404294;
L_0040428e:  // mov dword ptr [ebp + 0xd0], eax
    M32((uint32_t)(ebp + 0xd0u)) = (uint32_t)(eax);
L_00404294:  // mov eax, dword ptr [ebp + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xd0u)));
L_0040429a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040429c:  // je 0x40458c
    if (f.zf) goto L_0040458c;
L_004042a2:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004042a5:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004042a7:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004042ab:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004042ae:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004042b2:  // fsub dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_004042b5:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004042b9:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004042bc:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004042c0:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004042c3:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_004042c6:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004042ca:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_004042cd:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004042d1:  // fld dword ptr [ebx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x24u)));
L_004042d4:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004042d8:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004042db:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004042df:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004042e1:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004042e5:  // fchs 
    ST(0) = -ST(0);
L_004042e7:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004042eb:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004042ef:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004042f3:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004042f5:  // fchs 
    ST(0) = -ST(0);
L_004042f7:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004042fb:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004042ff:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_00404303:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00404307:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0040430b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040430d:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00404311:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00404315:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00404317:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00404319:  // fst dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
L_0040431d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00404323:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00404325:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00404328:  // jne 0x40433d
    if (!f.zf) goto L_0040433d;
L_0040432a:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0040432e:  // fdiv dword ptr [esp + 0x24]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x24u)));
L_00404332:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404337u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404337:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0040433b:  // jmp 0x404345
    goto L_00404345;
L_0040433d:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00404345:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00404347:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040434c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040434e:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00404352:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404357u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404357:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0040435c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040435e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00404360:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00404364:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404369u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404369:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0040436d:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00404371:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00404373:  // fcom dword ptr [0x5d87c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d87c0u)));
L_00404379:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040437b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040437e:  // je 0x40438c
    if (f.zf) goto L_0040438c;
L_00404380:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00404384:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00404386:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0040438a:  // jmp 0x4043cf
    goto L_004043cf;
L_0040438c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00404390:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_00404394:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00404396:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_0040439c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040439f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004043a1:  // je 0x4043b4
    if (f.zf) goto L_004043b4;
L_004043a3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004043a7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004043aa:  // je 0x4043c5
    if (f.zf) goto L_004043c5;
L_004043ac:  // fadd dword ptr [0x5d87c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d87c0u)));
L_004043b2:  // jmp 0x4043cb
    goto L_004043cb;
L_004043b4:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004043b8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004043bb:  // jne 0x4043c5
    if (!f.zf) goto L_004043c5;
L_004043bd:  // fadd dword ptr [0x5d87c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d87c0u)));
L_004043c3:  // jmp 0x4043cb
    goto L_004043cb;
L_004043c5:  // fsub dword ptr [0x5d87c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d87c0u)));
L_004043cb:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004043cf:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004043d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004043d4:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004043d5:  // mov ecx, 0x64
    ecx = (uint32_t)(0x64u);
L_004043da:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_004043dc:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004043de:  // jne 0x404405
    if (!f.zf) goto L_00404405;
L_004043e0:  // call 0x55dbfe
    t0 = 0x0055dbfeu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004043e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004043e5:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004043e9:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004043ed:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004043f3:  // fmul dword ptr [0x5d8618]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8618u)));
L_004043f9:  // fsub dword ptr [0x5d858c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d858cu)));
L_004043ff:  // fstp dword ptr [ebp + 0xdc]
    F32((uint32_t)(ebp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_00404405:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_00404408:  // fcomp dword ptr [0x5d87bc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d87bcu)));
    lpop(x);
L_0040440e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00404410:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00404413:  // jne 0x40441f
    if (!f.zf) goto L_0040441f;
L_00404415:  // mov dword ptr [ebp + 0xdc], 0xbe800000
    M32((uint32_t)(ebp + 0xdcu)) = (uint32_t)(0xbe800000u);
L_0040441f:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_00404422:  // fcomp dword ptr [0x5d87b8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d87b8u)));
    lpop(x);
L_00404428:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040442a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040442d:  // je 0x404439
    if (f.zf) goto L_00404439;
L_0040442f:  // mov dword ptr [ebp + 0xdc], 0x3e800000
    M32((uint32_t)(ebp + 0xdcu)) = (uint32_t)(0x3e800000u);
L_00404439:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040443d:  // fcom dword ptr [ebp + 0xdc]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xdcu)));
L_00404443:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00404445:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00404448:  // jne 0x404450
    if (!f.zf) goto L_00404450;
L_0040444a:  // fsub dword ptr [0x5d8574]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8574u)));
L_00404450:  // fcom dword ptr [ebp + 0xdc]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xdcu)));
L_00404456:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00404458:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040445b:  // je 0x404463
    if (f.zf) goto L_00404463;
L_0040445d:  // fadd dword ptr [0x5d8574]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8574u)));
L_00404463:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00404467:  // fcos 
    ST(0) = lfcos(ST(0));
L_00404469:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040446d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00404471:  // fsin 
    ST(0) = lfsin(ST(0));
L_00404473:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00404477:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0040447d:  // fcos 
    ST(0) = lfcos(ST(0));
L_0040447f:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00404483:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_00404489:  // fsin 
    ST(0) = lfsin(ST(0));
L_0040448b:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0040448f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00404491:  // fcos 
    ST(0) = lfcos(ST(0));
L_00404493:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00404497:  // fsin 
    ST(0) = lfsin(ST(0));
L_00404499:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040449b:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0040449f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004044a3:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004044a7:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004044a9:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004044ad:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004044af:  // fstp dword ptr [ebx]
    F32((uint32_t)(ebx)) = lf32(ST(0));
    lpop(x);
L_004044b1:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004044b5:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004044b9:  // fchs 
    ST(0) = -ST(0);
L_004044bb:  // fstp dword ptr [ebx + 4]
    F32((uint32_t)(ebx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004044be:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004044c0:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004044c4:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004044c8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004044cc:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004044d0:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004044d4:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004044d8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004044da:  // fstp dword ptr [ebx + 8]
    F32((uint32_t)(ebx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004044dd:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004044e1:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004044e5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004044e7:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004044eb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004044ed:  // fstp dword ptr [ebx + 0x10]
    F32((uint32_t)(ebx + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004044f0:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004044f4:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004044f8:  // fstp dword ptr [ebx + 0x14]
    F32((uint32_t)(ebx + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004044fb:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004044ff:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00404503:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00404507:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0040450b:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0040450d:  // fstp dword ptr [ebx + 0x18]
    F32((uint32_t)(ebx + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00404510:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00404514:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00404518:  // fchs 
    ST(0) = -ST(0);
L_0040451a:  // fstp dword ptr [ebx + 0x20]
    F32((uint32_t)(ebx + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0040451d:  // fstp dword ptr [ebx + 0x24]
    F32((uint32_t)(ebx + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00404520:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00404524:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00404528:  // fstp dword ptr [ebx + 0x28]
    F32((uint32_t)(ebx + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040452b:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_0040452e:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_00404534:  // lea eax, [ebp + 0x7c]
    eax = (uint32_t)((uint32_t)(ebp + 0x7cu));
L_00404537:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00404539:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040453d:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_00404540:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_00404546:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0040454a:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0040454e:  // fld dword ptr [ebx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x24u)));
L_00404551:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_00404557:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_00404559:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0040455d:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00404561:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00404564:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00404568:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_0040456b:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0040456f:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00404572:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_00404575:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_00404577:  // fstp dword ptr [ebp + 0x1c]
    F32((uint32_t)(ebp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0040457a:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0040457d:  // fadd dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x20u)));
L_00404580:  // fstp dword ptr [ebp + 0x20]
    F32((uint32_t)(ebp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00404583:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00404586:  // fadd dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x24u)));
L_00404589:  // fstp dword ptr [ebp + 0x24]
    F32((uint32_t)(ebp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0040458c:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_0040458f:  // lea ecx, [ebp + 0xc]
    ecx = (uint32_t)((uint32_t)(ebp + 0xcu));
L_00404592:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00404593:  // call 0x492ca0
    t0 = 0x00492ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404598u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404598:  // test byte ptr [ebp + 0x2c], 1
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x1u, f);
L_0040459c:  // jne 0x4045c1
    if (!f.zf) goto L_004045c1;
L_0040459e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004045a0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004045a2:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004045a6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004045a8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004045a9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004045aa:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_004045af:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004045b4:  // mov dword ptr [esp + 0x3c], 0xbf800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0xbf800000u);
L_004045bc:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004045c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004045c1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004045c2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004045c3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004045c4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004045c5:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_004045c8:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00404210, 00404210)
