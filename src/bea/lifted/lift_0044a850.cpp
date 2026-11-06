// lifted from 0044a850 (FUN_0044a850, 219 bytes, 76 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0044a850(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0044a850;
L_0044a850:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_0044a853:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044a854:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0044a856:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0044a859:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0044a85c:  // je 0x44a902
    if (f.zf) goto L_0044a902;
L_0044a862:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044a865:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044a866:  // lea edi, [esp + 0x18]
    edi = (uint32_t)((uint32_t)(esp + 0x18u));
L_0044a86a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0044a86c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044a86d:  // lea edi, [esp + 0xc]
    edi = (uint32_t)((uint32_t)(esp + 0xcu));
L_0044a871:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044a872:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044a873:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_0044a876:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044a877:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044a87du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044a87d:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_0044a881:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0044a887:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044a888:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044a88a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0044a88d:  // je 0x44a8da
    if (f.zf) goto L_0044a8da;
L_0044a88f:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_0044a893:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0044a899:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044a89b:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0044a89e:  // je 0x44a8da
    if (f.zf) goto L_0044a8da;
L_0044a8a0:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0044a8a4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0044a8aa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044a8ac:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0044a8af:  // je 0x44a8da
    if (f.zf) goto L_0044a8da;
L_0044a8b1:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044a8b4:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0044a8b8:  // add ecx, 0x1c
    t0 = ladd<32>(ecx, 0x1cu, f);
    ecx = (uint32_t)(t0);
L_0044a8bb:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0044a8bd:  // mov esi, dword ptr [ecx]
    esi = (uint32_t)(M32((uint32_t)(ecx)));
L_0044a8bf:  // mov dword ptr [edx], esi
    M32((uint32_t)(edx)) = (uint32_t)(esi);
L_0044a8c1:  // mov esi, dword ptr [ecx + 4]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0044a8c4:  // mov dword ptr [edx + 4], esi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(esi);
L_0044a8c7:  // mov esi, dword ptr [ecx + 8]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0044a8ca:  // mov dword ptr [edx + 8], esi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(esi);
L_0044a8cd:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044a8ce:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0044a8d1:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0044a8d4:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_0044a8d7:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044a8da:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0044a8de:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0044a8e2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0044a8e4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044a8e5:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0044a8e7:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0044a8eb:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0044a8ee:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0044a8f2:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_0044a8f5:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0044a8f9:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0044a8fc:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_0044a8ff:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044a902:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044a905:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0044a909:  // add edx, 0x1c
    t0 = ladd<32>(edx, 0x1cu, f);
    edx = (uint32_t)(t0);
L_0044a90c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0044a90e:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_0044a910:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_0044a912:  // mov esi, dword ptr [edx + 4]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0044a915:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_0044a918:  // mov esi, dword ptr [edx + 8]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0044a91b:  // mov dword ptr [ecx + 8], esi
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(esi);
L_0044a91e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044a91f:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0044a922:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_0044a925:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_0044a928:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0044a850, 0044a850)
