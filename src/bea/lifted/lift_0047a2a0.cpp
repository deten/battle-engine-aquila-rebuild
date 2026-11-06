// lifted from 0047a2a0 (vslot9, 339 bytes, 115 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047a2a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047a2a0;
L_0047a2a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047a2a1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047a2a2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047a2a3:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047a2a5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047a2a6:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047a2a9:  // test byte ptr [eax + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(eax + 0x2cu)) & 0x4u, f);
L_0047a2ad:  // jne 0x47a3ec
    if (!f.zf) goto L_0047a3ec;
L_0047a2b3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047a2b5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047a2b7:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a2bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a2ba:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047a2bd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047a2bf:  // je 0x47a397
    if (f.zf) goto L_0047a397;
L_0047a2c5:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047a2c8:  // lea edx, [eax + 0x1c]
    edx = (uint32_t)((uint32_t)(eax + 0x1cu));
L_0047a2cb:  // mov edi, dword ptr [eax + 0x34]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x34u)));
L_0047a2ce:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_0047a2d0:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_0047a2d3:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_0047a2d6:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_0047a2d9:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_0047a2dc:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_0047a2df:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0047a2e3:  // test edi, 0x8000
    t0 = llog<32>(edi & 0x8000u, f);
L_0047a2e9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047a2eb:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047a2ed:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0047a2f1:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_0047a2f5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047a2f7:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047a2f9:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047a2fb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047a2fd:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0047a2ff:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0047a301:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047a303:  // fld dword ptr [0x5d85d4]
    lpush(x, (long double)F32((uint32_t)(0x5d85d4u)));
L_0047a309:  // je 0x47a313
    if (f.zf) goto L_0047a313;
L_0047a30b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047a30d:  // fld dword ptr [0x5db254]
    lpush(x, (long double)F32((uint32_t)(0x5db254u)));
L_0047a313:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047a315:  // fadd dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cc0u)));
L_0047a31b:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047a31d:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_0047a31f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047a321:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047a324:  // jne 0x47a351
    if (!f.zf) goto L_0047a351;
L_0047a326:  // mov ebx, dword ptr [edx]
    ebx = (uint32_t)(M32((uint32_t)(edx)));
L_0047a328:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047a32a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047a32d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047a32f:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0047a331:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047a333:  // mov dword ptr [edi], ebx
    M32((uint32_t)(edi)) = (uint32_t)(ebx);
L_0047a335:  // mov ebx, dword ptr [edx + 4]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0047a338:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047a33a:  // mov dword ptr [edi + 4], ebx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebx);
L_0047a33d:  // mov ebx, dword ptr [edx + 8]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0047a340:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0047a343:  // mov dword ptr [edi + 8], ebx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebx);
L_0047a346:  // mov dword ptr [edi + 0xc], edx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(edx);
L_0047a349:  // call dword ptr [eax + 0xf4]
    t0 = M32((uint32_t)(eax + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a34fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a34f:  // jmp 0x47a397
    goto L_0047a397;
L_0047a351:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047a353:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047a355:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047a357:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047a35a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047a35c:  // jne 0x47a397
    if (!f.zf) goto L_0047a397;
L_0047a35e:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047a360:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a366u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a366:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047a369:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047a36c:  // add ecx, 0x1c
    t0 = ladd<32>(ecx, 0x1cu, f);
    ecx = (uint32_t)(t0);
L_0047a36f:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0047a371:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047a373:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0047a375:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0047a378:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0047a37b:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0047a37e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0047a381:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0047a384:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0047a387:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047a38a:  // call 0x4fce80
    t0 = 0x004fce80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a38fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a38f:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047a392:  // call 0x479db0
    t0 = 0x00479db0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a397u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a397:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0047a39d:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a3a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a3a2:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0047a3a7:  // jns 0x47a3b0
    if (!f.sf) goto L_0047a3b0;
L_0047a3a9:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047a3aa:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0047a3af:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047a3b0:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_0047a3b4:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047a3b8:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_0047a3bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047a3bd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047a3bf:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_0047a3c3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047a3c5:  // fmul dword ptr [0x5d85f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f0u)));
L_0047a3cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047a3cc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047a3cd:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_0047a3d2:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0047a3d7:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_0047a3dd:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_0047a3e3:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0047a3e7:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047a3ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047a3ec:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047a3ed:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047a3ee:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047a3ef:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0047a3f0:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0047a2a0, 0047a2a0)
