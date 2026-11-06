// lifted from 004f9260 (vslot95, 454 bytes, 130 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f9260(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f9260;
L_004f9260:  // sub esp, 0x3f0
    t0 = lsub<32>(esp, 0x3f0u, f);
    esp = (uint32_t)(t0);
L_004f9266:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9267:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f9269:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f926a:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004f926c:  // cmp dword ptr [esi + 0x164], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x164u)), edi, f);
L_004f9272:  // je 0x4f941d
    if (f.zf) goto L_004f941d;
L_004f9278:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004f927c:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9281u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9281:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004f9284:  // mov dword ptr [esp + 0x20], 0x5d8c80
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x5d8c80u);
L_004f928c:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004f928e:  // mov dword ptr [esp + 0x3dc], edi
    M32((uint32_t)(esp + 0x3dcu)) = (uint32_t)(edi);
L_004f9295:  // mov dword ptr [esp + 0x3e0], edi
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(edi);
L_004f929c:  // mov dword ptr [esp + 0x3e4], edi
    M32((uint32_t)(esp + 0x3e4u)) = (uint32_t)(edi);
L_004f92a3:  // mov dword ptr [esp + 0x3e8], edi
    M32((uint32_t)(esp + 0x3e8u)) = (uint32_t)(edi);
L_004f92aa:  // mov dword ptr [esp + 0x3ec], edi
    M32((uint32_t)(esp + 0x3ecu)) = (uint32_t)(edi);
L_004f92b1:  // mov dword ptr [esp + 0x3f4], edi
    M32((uint32_t)(esp + 0x3f4u)) = (uint32_t)(edi);
L_004f92b8:  // mov dword ptr [esp + 0x3f0], edi
    M32((uint32_t)(esp + 0x3f0u)) = (uint32_t)(edi);
L_004f92bf:  // je 0x4f92ce
    if (f.zf) goto L_004f92ce;
L_004f92c1:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004f92c3:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004f92c7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f92c8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f92c9:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f92ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f92cc:  // jmp 0x4f92d1
    goto L_004f92d1;
L_004f92ce:  // lea eax, [esi + 0x1c]
    eax = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004f92d1:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004f92d3:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004f92d9:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004f92dd:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f92e0:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004f92e6:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004f92ea:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f92ed:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004f92f1:  // fcomp dword ptr [esp + 0x2c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x2cu)));
    lpop(x);
L_004f92f5:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f92f8:  // mov eax, dword ptr [esi + 0x138]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_004f92fe:  // mov dword ptr [esp + 0xc0], eax
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(eax);
L_004f9305:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004f9309:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f930b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f930e:  // jne 0x4f941d
    if (!f.zf) goto L_004f941d;
L_004f9314:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004f9318:  // fsub dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004f931b:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004f931f:  // fsub dword ptr [esi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x20u)));
L_004f9322:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004f9326:  // fsub dword ptr [esi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x24u)));
L_004f9329:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f932b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f932d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004f932f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004f9331:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f9333:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9335:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f9337:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004f9339:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004f933b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f933d:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004f9341:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f9343:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f9345:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f9347:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f934au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f934a:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004f934c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f934e:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004f9352:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9355u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9355:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004f9359:  // fcomp dword ptr [esp + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x8u)));
    lpop(x);
L_004f935d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f935f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f9362:  // jne 0x4f941d
    if (!f.zf) goto L_004f941d;
L_004f9368:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f936e:  // mov eax, dword ptr [ecx + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xecu)));
L_004f9374:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9375:  // call 0x50ff10
    t0 = 0x0050ff10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f937au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f937a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f937c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f937f:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004f9381:  // je 0x4f941d
    if (f.zf) goto L_004f941d;
L_004f9387:  // mov edx, dword ptr [esi + 0x164]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004f938d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f938e:  // mov dword ptr [esp + 0x3e8], esi
    M32((uint32_t)(esp + 0x3e8u)) = (uint32_t)(esi);
L_004f9395:  // mov dword ptr [esp + 0x3ec], edi
    M32((uint32_t)(esp + 0x3ecu)) = (uint32_t)(edi);
L_004f939c:  // mov dword ptr [esp + 0x3f0], edi
    M32((uint32_t)(esp + 0x3f0u)) = (uint32_t)(edi);
L_004f93a3:  // mov ebx, dword ptr [edx + 0xec]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0xecu)));
L_004f93a9:  // mov edx, dword ptr [0x8553f8]
    edx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004f93af:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f93b1:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004f93b3:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004f93b5:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004f93b8:  // je 0x4f93be
    if (f.zf) goto L_004f93be;
L_004f93ba:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f93bc:  // jmp 0x4f93c0
    goto L_004f93c0;
L_004f93be:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f93c0:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004f93c2:  // je 0x4f93e6
    if (f.zf) goto L_004f93e6;
L_004f93c4:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004f93c6:  // je 0x4f93e8
    if (f.zf) goto L_004f93e8;
L_004f93c8:  // mov edx, dword ptr [0x8553f8]
    edx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004f93ce:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004f93cf:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004f93d2:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f93d5:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004f93d7:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004f93da:  // je 0x4f93e0
    if (f.zf) goto L_004f93e0;
L_004f93dc:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004f93de:  // jmp 0x4f93e2
    goto L_004f93e2;
L_004f93e0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f93e2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004f93e4:  // jne 0x4f93c4
    if (!f.zf) goto L_004f93c4;
L_004f93e6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f93e8:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004f93ee:  // fcomp dword ptr [esp + 0x30]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x30u)));
    lpop(x);
L_004f93f2:  // mov dword ptr [esp + 0x3e0], eax
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(eax);
L_004f93f9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f93fa:  // mov dword ptr [esp + 0x3e0], 2
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(0x2u);
L_004f9405:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9407:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f940a:  // jne 0x4f9413
    if (!f.zf) goto L_004f9413;
L_004f940c:  // mov dword ptr [esp + 0x3e0], edi
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(edi);
L_004f9413:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f9415:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004f9419:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f941a:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f941du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f941d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f941e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f941f:  // add esp, 0x3f0
    t0 = ladd<32>(esp, 0x3f0u, f);
    esp = (uint32_t)(t0);
L_004f9425:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f9260, 004f9260)
