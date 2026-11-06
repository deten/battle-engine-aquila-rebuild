// lifted from 0041a630 (vslot4, 163 bytes, 53 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041a630(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041a630;
L_0041a630:  // sub esp, 0x44
    t0 = lsub<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a633:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041a634:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0041a636:  // fld dword ptr [esi + 0x50]
    lpush(x, (long double)F32((uint32_t)(esi + 0x50u)));
L_0041a639:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_0041a63f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041a641:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041a644:  // je 0x41a64e
    if (f.zf) goto L_0041a64e;
L_0041a646:  // fld dword ptr [esi + 0x54]
    lpush(x, (long double)F32((uint32_t)(esi + 0x54u)));
L_0041a649:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a64a:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a64d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a64e:  // mov eax, dword ptr [esi + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x54u)));
L_0041a651:  // mov dword ptr [esi + 0x98], eax
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(eax);
L_0041a657:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0041a65a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041a65c:  // je 0x41a6b9
    if (f.zf) goto L_0041a6b9;
L_0041a65e:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_0041a661:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041a663:  // je 0x41a69e
    if (f.zf) goto L_0041a69e;
L_0041a665:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0041a668:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041a66a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a66b:  // lea eax, [esp + 8]
    eax = (uint32_t)((uint32_t)(esp + 0x8u));
L_0041a66f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a670:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0041a674:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a675:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0041a679:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a67a:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a67du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a67d:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_0041a681:  // fmul dword ptr [0x5d9338]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d9338u)));
L_0041a687:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0041a68d:  // fst dword ptr [esi + 0x54]
    F32((uint32_t)(esi + 0x54u)) = lf32(ST(0));
L_0041a690:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0041a696:  // mov dword ptr [esi + 0x50], ecx
    M32((uint32_t)(esi + 0x50u)) = (uint32_t)(ecx);
L_0041a699:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a69a:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a69d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a69e:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0041a6a4:  // mov dword ptr [esi + 0x54], 0x3f800000
    M32((uint32_t)(esi + 0x54u)) = (uint32_t)(0x3f800000u);
L_0041a6ab:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0041a6b1:  // mov dword ptr [esi + 0x50], edx
    M32((uint32_t)(esi + 0x50u)) = (uint32_t)(edx);
L_0041a6b4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a6b5:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a6b8:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a6b9:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0041a6bf:  // mov dword ptr [esi + 0x54], 0x3f800000
    M32((uint32_t)(esi + 0x54u)) = (uint32_t)(0x3f800000u);
L_0041a6c6:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0041a6cb:  // mov dword ptr [esi + 0x50], eax
    M32((uint32_t)(esi + 0x50u)) = (uint32_t)(eax);
L_0041a6ce:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a6cf:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a6d2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0041a630, 0041a630)
