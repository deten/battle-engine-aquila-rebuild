// lifted from 0047b570 (vslot8, 348 bytes, 117 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047b570(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047b570;
L_0047b570:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047b571:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047b572:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047b573:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047b575:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047b576:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0047b579:  // lea edi, [esi + 0x24]
    edi = (uint32_t)((uint32_t)(esi + 0x24u));
L_0047b57c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047b57e:  // je 0x47b60e
    if (f.zf) goto L_0047b60e;
L_0047b584:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b587:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_0047b58a:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_0047b58d:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_0047b590:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_0047b593:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_0047b596:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047b598:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047b59a:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047b59c:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047b59e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047b5a0:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0047b5a2:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0047b5a4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047b5a6:  // fcomp dword ptr [0x5d85bc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85bcu)));
    lpop(x);
L_0047b5ac:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047b5ae:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047b5b1:  // je 0x47b5c2
    if (f.zf) goto L_0047b5c2;
L_0047b5b3:  // mov eax, dword ptr [ecx + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x3cu)));
L_0047b5b6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0047b5b8:  // je 0x47b5c2
    if (f.zf) goto L_0047b5c2;
L_0047b5ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047b5bb:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0047b5bd:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b5c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b5c2:  // mov edi, dword ptr [edi]
    edi = (uint32_t)(M32((uint32_t)(edi)));
L_0047b5c4:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b5c7:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0047b5c9:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b5cb:  // je 0x47b617
    if (f.zf) goto L_0047b617;
L_0047b5cd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047b5cf:  // add edi, 0x1c
    t0 = ladd<32>(edi, 0x1cu, f);
    edi = (uint32_t)(t0);
L_0047b5d2:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047b5d5:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_0047b5d7:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0047b5d9:  // mov dword ptr [edx], ebx
    M32((uint32_t)(edx)) = (uint32_t)(ebx);
L_0047b5db:  // mov ebx, dword ptr [edi + 4]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0047b5de:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_0047b5e1:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0047b5e4:  // mov edi, dword ptr [edi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0047b5e7:  // mov dword ptr [edx + 8], ebx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebx);
L_0047b5ea:  // mov dword ptr [edx + 0xc], edi
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(edi);
L_0047b5ed:  // call dword ptr [eax + 0xf4]
    t0 = M32((uint32_t)(eax + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b5f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b5f3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0047b5f5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047b5f7:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b5fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b5fa:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0047b5fd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b5ff:  // je 0x47b631
    if (f.zf) goto L_0047b631;
L_0047b601:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b604:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047b605:  // call 0x4fb5a0
    t0 = 0x004fb5a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b60au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b60a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047b60c:  // je 0x47b631
    if (f.zf) goto L_0047b631;
L_0047b60e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047b610:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047b612:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b615u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b615:  // jmp 0x47b686
    goto L_0047b686;
L_0047b617:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b61du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b61d:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b620:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047b622:  // call dword ptr [edx + 0x148]
    t0 = M32((uint32_t)(edx + 0x148u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b628u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b628:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047b62a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047b62c:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b62fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b62f:  // jmp 0x47b686
    goto L_0047b686;
L_0047b631:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0047b637:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b63cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b63c:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0047b641:  // jns 0x47b64a
    if (!f.sf) goto L_0047b64a;
L_0047b643:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b644:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0047b649:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b64a:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_0047b64e:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047b652:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_0047b656:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047b657:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047b659:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0047b65d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047b65f:  // fmul dword ptr [0x5d8c5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c5cu)));
L_0047b665:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047b666:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047b667:  // push 0xbb9
    t0 = 0xbb9u; esp -= 4; M32(esp) = t0;
L_0047b66c:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0047b671:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_0047b677:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_0047b67d:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0047b681:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b686u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b686:  // mov dword ptr [esi + 0x60], 1
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x1u);
L_0047b68d:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0047b693:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b698u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b698:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0047b69d:  // jns 0x47b6a6
    if (!f.sf) goto L_0047b6a6;
L_0047b69f:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b6a0:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0047b6a5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047b6a6:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0047b6aa:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047b6ad:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0047b6b1:  // fmul dword ptr [0x5db1e0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1e0u)));
L_0047b6b7:  // fadd dword ptr [0x5d85d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d4u)));
L_0047b6bd:  // fstp dword ptr [esi + 0x64]
    F32((uint32_t)(esi + 0x64u)) = lf32(ST(0));
    lpop(x);
L_0047b6c0:  // call 0x47bfa0
    t0 = 0x0047bfa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047b6c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047b6c5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047b6c6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047b6c7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047b6c8:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0047b6c9:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0047b570, 0047b570)
