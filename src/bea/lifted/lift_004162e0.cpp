// lifted from 004162e0 (vslot66, 218 bytes, 61 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004162e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004162e0;
L_004162e0:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004162e3:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004162e8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004162e9:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004162eb:  // cmp dword ptr [esi + 0x168], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0x168u)), eax, f);
L_004162f1:  // jne 0x416303
    if (!f.zf) goto L_00416303;
L_004162f3:  // mov dword ptr [esi + 0x168], 0
    M32((uint32_t)(esi + 0x168u)) = (uint32_t)(0x0u);
L_004162fd:  // mov dword ptr [esi + 0x1e8], eax
    M32((uint32_t)(esi + 0x1e8u)) = (uint32_t)(eax);
L_00416303:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_00416307:  // je 0x416342
    if (f.zf) goto L_00416342;
L_00416309:  // fld dword ptr [esi + 0x11c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x11cu)));
L_0041630f:  // fadd dword ptr [0x5d85f8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85f8u)));
L_00416315:  // mov dword ptr [esi + 0x134], 0x3e4ccccd
    M32((uint32_t)(esi + 0x134u)) = (uint32_t)(0x3e4ccccdu);
L_0041631f:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_00416325:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00416327:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0041632a:  // jne 0x416332
    if (!f.zf) goto L_00416332;
L_0041632c:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00416332:  // fstp dword ptr [esi + 0x128]
    F32((uint32_t)(esi + 0x128u)) = lf32(ST(0));
    lpop(x);
L_00416338:  // mov dword ptr [esi + 0x124], 0x3fc90fdb
    M32((uint32_t)(esi + 0x124u)) = (uint32_t)(0x3fc90fdbu);
L_00416342:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00416344:  // call 0x402fa0
    t0 = 0x00402fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00416349u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00416349:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_0041634f:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_00416355:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_00416358:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0041635a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041635c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0041635e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00416360:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00416362:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00416364:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00416366:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00416368:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0041636a:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_0041636c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041636e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00416370:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00416372:  // fmul dword ptr [esi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x40u)));
L_00416375:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00416379:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0041637d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0041637f:  // fmul dword ptr [esi + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x50u)));
L_00416382:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00416386:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0041638a:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0041638e:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_00416392:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00416396:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0041639a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041639b:  // fmul dword ptr [esi + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x60u)));
L_0041639e:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004163a2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004163a4:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004163a8:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004163ac:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004163b0:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004163b2:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004163b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004163b5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004163b6:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004163b9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004162e0, 004162e0)
