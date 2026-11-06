// lifted from 004151a0 (vslot66, 649 bytes, 204 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004151a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004151a0;
L_004151a0:  // sub esp, 0x70
    t0 = lsub<32>(esp, 0x70u, f);
    esp = (uint32_t)(t0);
L_004151a3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004151a4:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004151a6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004151a7:  // mov eax, dword ptr [ebx + 0x264]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x264u)));
L_004151ad:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004151af:  // jne 0x4151bb
    if (!f.zf) goto L_004151bb;
L_004151b1:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004151b3:  // call dword ptr [eax + 0x114]
    t0 = M32((uint32_t)(eax + 0x114u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004151b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004151b9:  // jmp 0x4151c5
    goto L_004151c5;
L_004151bb:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004151bd:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004151bf:  // call dword ptr [edx + 0x110]
    t0 = M32((uint32_t)(edx + 0x110u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004151c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004151c5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004151c7:  // call 0x47c970
    t0 = 0x0047c970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004151ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004151cc:  // test byte ptr [ebx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebx + 0x2cu)) & 0x4u, f);
L_004151d0:  // je 0x41522b
    if (f.zf) goto L_0041522b;
L_004151d2:  // mov eax, dword ptr [ebx + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x164u)));
L_004151d8:  // mov ecx, dword ptr [eax + 0x11c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x11cu)));
L_004151de:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004151e0:  // jne 0x41522b
    if (!f.zf) goto L_0041522b;
L_004151e2:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004151e4:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004151e6:  // mov dword ptr [ebx + 0x124], 0x3f65c8fa
    M32((uint32_t)(ebx + 0x124u)) = (uint32_t)(0x3f65c8fau);
L_004151f0:  // call dword ptr [edx + 0x60]
    t0 = M32((uint32_t)(edx + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004151f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004151f3:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_004151f9:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004151fb:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004151fd:  // fstp dword ptr [ebx + 0x84]
    F32((uint32_t)(ebx + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00415203:  // call dword ptr [eax + 0x60]
    t0 = M32((uint32_t)(eax + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415206u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415206:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0041520a:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0041520e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00415210:  // jle 0x415423
    if ((f.zf || f.sf != f.of)) goto L_00415423;
L_00415216:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00415218:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0041521a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041521c:  // call dword ptr [edx + 0x180]
    t0 = M32((uint32_t)(edx + 0x180u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415222u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415222:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00415223:  // jne 0x415218
    if (!f.zf) goto L_00415218;
L_00415225:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00415226:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00415227:  // add esp, 0x70
    t0 = ladd<32>(esp, 0x70u, f);
    esp = (uint32_t)(t0);
L_0041522a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041522b:  // mov esi, dword ptr [ebx + 0x30]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_0041522e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041522f:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_00415234:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00415236:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_0041523a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0041523c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041523d:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415242u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415242:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00415244:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00415246:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_0041524a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0041524c:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_00415250:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00415251:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00415252:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00415254:  // push 0x6239c0
    t0 = 0x6239c0u; esp -= 4; M32(esp) = t0;
L_00415259:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041525b:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041525eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041525e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00415262:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00415268:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041526a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041526d:  // je 0x415295
    if (f.zf) goto L_00415295;
L_0041526f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00415273:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00415279:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041527b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041527e:  // je 0x415295
    if (f.zf) goto L_00415295;
L_00415280:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00415284:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0041528a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041528c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041528f:  // jne 0x4153c2
    if (!f.zf) goto L_004153c2;
L_00415295:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00415299:  // fmul dword ptr [ebx + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x44u)));
L_0041529c:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004152a0:  // fmul dword ptr [ebx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x40u)));
L_004152a3:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004152a6:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004152aa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004152ac:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004152b0:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_004152b2:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004152b7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004152b9:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004152bd:  // fmul dword ptr [edi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x18u)));
L_004152c0:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004152c4:  // fmul dword ptr [edi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x14u)));
L_004152c7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004152c9:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004152cd:  // fmul dword ptr [edi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x10u)));
L_004152d0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004152d2:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004152d6:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004152da:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_004152dd:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004152e1:  // fmul dword ptr [edi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x24u)));
L_004152e4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004152e6:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004152ea:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_004152ed:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004152ef:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004152f3:  // fadd dword ptr [ebx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x1cu)));
L_004152f6:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004152fa:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004152fe:  // fadd dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x20u)));
L_00415301:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00415305:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00415309:  // fadd dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0041530c:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00415310:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415315u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415315:  // fcomp dword ptr [esp + 0x34]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x34u)));
    lpop(x);
L_00415319:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041531b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0041531e:  // je 0x4153c2
    if (f.zf) goto L_004153c2;
L_00415324:  // mov esi, dword ptr [ebx + 0x268]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x268u)));
L_0041532a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041532c:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0041532d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041532f:  // mov dword ptr [ebx + 0x268], esi
    M32((uint32_t)(ebx + 0x268u)) = (uint32_t)(esi);
L_00415335:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00415339:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0041533f:  // fadd dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00415345:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00415347:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00415348:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00415349:  // push 0x1f40
    t0 = 0x1f40u; esp -= 4; M32(esp) = t0;
L_0041534e:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00415353:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00415357:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041535cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041535c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041535d:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00415361:  // call 0x44adb0
    t0 = 0x0044adb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415366u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415366:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0041536a:  // fsub dword ptr [0x5d8574]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8574u)));
L_00415370:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00415374:  // lea eax, [ebx + 0x114]
    eax = (uint32_t)((uint32_t)(ebx + 0x114u));
L_0041537a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0041537c:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00415380:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00415381:  // fst dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
L_00415385:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00415389:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_0041538b:  // fstp dword ptr [ebx + 0x124]
    F32((uint32_t)(ebx + 0x124u)) = lf32(ST(0));
    lpop(x);
L_00415391:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_00415394:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00415395:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00415396:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_0041539a:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_0041539d:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004153a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004153a2:  // mov eax, dword ptr [ebx + 0x268]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x268u)));
L_004153a8:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004153ad:  // lea esi, [esp + 0x4c]
    esi = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004153b1:  // cmp eax, 0x3c
    t0 = lsub<32>(eax, 0x3cu, f);
L_004153b4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004153b6:  // jle 0x4153c2
    if ((f.zf || f.sf != f.of)) goto L_004153c2;
L_004153b8:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004153ba:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004153bc:  // call dword ptr [edx + 0x174]
    t0 = M32((uint32_t)(edx + 0x174u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004153c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004153c2:  // mov eax, dword ptr [0x6fbdfc]
    eax = (uint32_t)(M32((uint32_t)(0x6fbdfcu)));
L_004153c7:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004153c9:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004153cb:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004153cf:  // call dword ptr [edx + 0xc0]
    t0 = M32((uint32_t)(edx + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004153d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004153d5:  // fadd dword ptr [esp + 0xc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xcu)));
L_004153d9:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004153db:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004153df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004153e0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004153e2:  // fstp dword ptr [ebx + 0x24]
    F32((uint32_t)(ebx + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004153e5:  // call dword ptr [eax + 0x6c]
    t0 = M32((uint32_t)(eax + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004153e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004153e8:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004153eb:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004153ed:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004153ef:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004153f1:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004153f3:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004153f5:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004153f7:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004153fb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004153fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004153fe:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00415400:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00415402:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00415404:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00415406:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00415408:  // fmul dword ptr [ebx + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x40u)));
L_0041540b:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0041540f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00415411:  // fmul dword ptr [ebx + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x50u)));
L_00415414:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00415418:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_0041541b:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0041541f:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00415422u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00415422:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00415423:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00415424:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00415425:  // add esp, 0x70
    t0 = ladd<32>(esp, 0x70u, f);
    esp = (uint32_t)(t0);
L_00415428:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004151a0, 004151a0)
