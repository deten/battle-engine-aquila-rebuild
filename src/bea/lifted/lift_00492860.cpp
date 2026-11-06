// lifted from 00492860 (FUN_00492860, 233 bytes, 69 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00492860(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00492860;
L_00492860:  // sub esp, 0x24
    t0 = lsub<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00492863:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00492867:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0049286c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049286d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049286e:  // mov ecx, dword ptr [ecx + edx*4 + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edx * 4u + 0x94u)));
L_00492875:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0049287d:  // shl eax, cl
    t0 = lshl<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0049287f:  // movsx ecx, word ptr [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esp + 0x30u))));
L_00492884:  // imul ecx, eax
    t0 = limul32(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00492887:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_0049288b:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_0049288f:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_00492893:  // movsx ecx, word ptr [esp + 0x32]
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esp + 0x32u))));
L_00492898:  // imul ecx, eax
    t0 = limul32(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0049289b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004928a1:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_004928a5:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004928a7:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_004928ab:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004928ad:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004928b1:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_004928b5:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004928b7:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004928bb:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_004928bf:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_004928c3:  // fmul dword ptr [0x5d85d4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d4u)));
L_004928c9:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004928cd:  // jne 0x4928d6
    if (!f.zf) goto L_004928d6;
L_004928cf:  // mov eax, 0xff00ff20
    eax = (uint32_t)(0xff00ff20u);
L_004928d4:  // jmp 0x492914
    goto L_00492914;
L_004928d6:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_004928d9:  // jne 0x4928e2
    if (!f.zf) goto L_004928e2;
L_004928db:  // mov eax, 0xffff0050
    eax = (uint32_t)(0xffff0050u);
L_004928e0:  // jmp 0x492914
    goto L_00492914;
L_004928e2:  // cmp edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
L_004928e5:  // jne 0x4928ee
    if (!f.zf) goto L_004928ee;
L_004928e7:  // mov eax, 0xff2000ff
    eax = (uint32_t)(0xff2000ffu);
L_004928ec:  // jmp 0x492914
    goto L_00492914;
L_004928ee:  // cmp edx, 3
    t0 = lsub<32>(edx, 0x3u, f);
L_004928f1:  // jne 0x4928fa
    if (!f.zf) goto L_004928fa;
L_004928f3:  // mov eax, 0xff309030
    eax = (uint32_t)(0xff309030u);
L_004928f8:  // jmp 0x492914
    goto L_00492914;
L_004928fa:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_004928fd:  // jne 0x492906
    if (!f.zf) goto L_00492906;
L_004928ff:  // mov eax, 0xff00ffff
    eax = (uint32_t)(0xff00ffffu);
L_00492904:  // jmp 0x492914
    goto L_00492914;
L_00492906:  // cmp edx, 5
    t0 = lsub<32>(edx, 0x5u, f);
L_00492909:  // mov eax, 0xffff00ff
    eax = (uint32_t)(0xffff00ffu);
L_0049290e:  // je 0x492914
    if (f.zf) goto L_00492914;
L_00492910:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00492914:  // mov edx, dword ptr [0x89ce88]
    edx = (uint32_t)(M32((uint32_t)(0x89ce88u)));
L_0049291a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049291f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00492920:  // mov esi, 0x7042d0
    esi = (uint32_t)(0x7042d0u);
L_00492925:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00492928:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_0049292c:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0049292e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00492930:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00492934:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00492935:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00492936:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00492937:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0049293c:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00492941u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00492941:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00492942:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00492943:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00492946:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00492860, 00492860)
