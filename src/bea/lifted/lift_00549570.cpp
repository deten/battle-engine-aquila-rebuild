// lifted from 00549570 (FUN_00549570, 8844 bytes, 2093 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00549570(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00549570;
L_00549570:  // mov eax, 0x1e54
    eax = (uint32_t)(0x1e54u);
L_00549575:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054957au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054957a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054957b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054957c:  // mov ebp, dword ptr [esp + 0x1e74]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1e74u)));
L_00549583:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00549584:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00549585:  // mov eax, dword ptr [ebp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8cu)));
L_0054958b:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0054958e:  // jne 0x54a4c0
    if (!f.zf) goto L_0054a4c0;
L_00549594:  // mov edi, dword ptr [esp + 0x1e80]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1e80u)));
L_0054959b:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0054959e:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_005495a0:  // je 0x5495ab
    if (f.zf) goto L_005495ab;
L_005495a2:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_005495a4:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_005495a6:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005495a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005495a9:  // mov esi, eax
    esi = (uint32_t)(eax);
L_005495ab:  // mov ecx, dword ptr [esp + 0x1e8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1e8cu)));
L_005495b2:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_005495b4:  // and ebx, 8
    t0 = llog<32>(ebx & 0x8u, f);
    ebx = (uint32_t)(t0);
L_005495b7:  // cmp ebx, 8
    t0 = lsub<32>(ebx, 0x8u, f);
L_005495ba:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_005495be:  // jne 0x5495c6
    if (!f.zf) goto L_005495c6;
L_005495c0:  // mov esi, dword ptr [0x704e5c]
    esi = (uint32_t)(M32((uint32_t)(0x704e5cu)));
L_005495c6:  // mov edx, dword ptr [ebp + 0xb8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xb8u)));
L_005495cc:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_005495d1:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_005495d3:  // jle 0x549915
    if ((f.zf || f.sf != f.of)) goto L_00549915;
L_005495d9:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_005495df:  // cmp dword ptr [edx + 0x14], 0
    t0 = lsub<32>(M32((uint32_t)(edx + 0x14u)), 0x0u, f);
L_005495e3:  // je 0x549915
    if (f.zf) goto L_00549915;
L_005495e9:  // cmp dword ptr [ebp + 0xb4], eax
    t0 = lsub<32>(M32((uint32_t)(ebp + 0xb4u)), eax, f);
L_005495ef:  // jle 0x549915
    if ((f.zf || f.sf != f.of)) goto L_00549915;
L_005495f5:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_005495f7:  // jl 0x549915
    if ((f.sf != f.of)) goto L_00549915;
L_005495fd:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_005495ff:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00549607:  // je 0x549614
    if (f.zf) goto L_00549614;
L_00549609:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0054960b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0054960d:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549610u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549610:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00549614:  // cmp ebx, 8
    t0 = lsub<32>(ebx, 0x8u, f);
L_00549617:  // jne 0x549623
    if (!f.zf) goto L_00549623;
L_00549619:  // mov ecx, dword ptr [0x704e58]
    ecx = (uint32_t)(M32((uint32_t)(0x704e58u)));
L_0054961f:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_00549623:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_00549629:  // lea edx, [esi + esi*8]
    edx = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0054962c:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_0054962f:  // fild dword ptr [ecx + edx*4 + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + edx * 4u + 0x1cu)));
L_00549633:  // lea eax, [ecx + edx*4]
    eax = (uint32_t)((uint32_t)(ecx + edx * 4u));
L_00549636:  // mov ecx, dword ptr [esp + 0x1e90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1e90u)));
L_0054963d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0054963f:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00549643:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00549647:  // fild dword ptr [eax + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + 0x14u)));
L_0054964a:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_0054964e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00549652:  // je 0x54965f
    if (f.zf) goto L_0054965f;
L_00549654:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00549656:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0054965a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054965b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054965c:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054965fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054965f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00549663:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00549666:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00549669:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054966eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054966e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00549670:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00549674:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00549677:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054967cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054967c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00549680:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00549682:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00549686:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00549688:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0054968e:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_00549692:  // fstp qword ptr [esp + 0x28]
    F64((uint32_t)(esp + 0x28u)) = lf64(ST(0));
    lpop(x);
L_00549696:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054969a:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054969e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054969f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005496a0:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005496a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005496a5:  // fistp qword ptr [esp + 0xe0]
    M64((uint32_t)(esp + 0xe0u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_005496ac:  // mov ebx, dword ptr [esp + 0xe0]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xe0u)));
L_005496b3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005496b5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005496b7:  // lea esi, [ebx + 1]
    esi = (uint32_t)((uint32_t)(ebx + 0x1u));
L_005496ba:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005496bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005496bf:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_005496c2:  // fistp qword ptr [esp + 0xd0]
    M64((uint32_t)(esp + 0xd0u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_005496c9:  // cmp esi, dword ptr [esp + 0xd0]
    t0 = lsub<32>(esi, M32((uint32_t)(esp + 0xd0u)), f);
L_005496d0:  // jle 0x5496ec
    if ((f.zf || f.sf != f.of)) goto L_005496ec;
L_005496d2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005496d4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005496d6:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005496dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005496db:  // fistp qword ptr [esp + 0xd8]
    M64((uint32_t)(esp + 0xd8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_005496e2:  // mov esi, dword ptr [esp + 0xd8]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_005496e9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005496ec:  // mov eax, dword ptr [ebp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x84u)));
L_005496f2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005496f3:  // mov ebx, dword ptr [eax + ebx*4]
    ebx = (uint32_t)(M32((uint32_t)(eax + ebx * 4u)));
L_005496f6:  // mov edx, dword ptr [eax + esi*4]
    edx = (uint32_t)(M32((uint32_t)(eax + esi * 4u)));
L_005496f9:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_005496fd:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_00549704:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00549705:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054970au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054970a:  // fsubr dword ptr [esp + 0x38]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x38u))) - (ST(0));
L_0054970e:  // mov ecx, dword ptr [ebp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_00549714:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00549716:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00549719:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0054971b:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0054971f:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00549725:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00549729:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_0054972d:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00549731:  // jle 0x54989b
    if ((f.zf || f.sf != f.of)) goto L_0054989b;
L_00549737:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0054973b:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054973f:  // mov edi, dword ptr [ebp + 0x134]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x134u)));
L_00549745:  // mov ecx, dword ptr [esp + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0054974c:  // add esi, edi
    t0 = ladd<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_0054974e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00549752:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00549755:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00549758:  // fmul dword ptr [eax + ecx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx)));
L_0054975b:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0054975f:  // fmul dword ptr [eax + ecx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx + 0x4u)));
L_00549763:  // fstp dword ptr [esp + 0x12c]
    F32((uint32_t)(esp + 0x12cu)) = lf32(ST(0));
    lpop(x);
L_0054976a:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0054976e:  // fmul dword ptr [eax + ecx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx + 0x8u)));
L_00549772:  // fstp dword ptr [esp + 0x130]
    F32((uint32_t)(esp + 0x130u)) = lf32(ST(0));
    lpop(x);
L_00549779:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0054977d:  // fmul dword ptr [eax + ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebx)));
L_00549780:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00549784:  // fmul dword ptr [eax + ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebx + 0x4u)));
L_00549788:  // fstp dword ptr [esp + 0x10c]
    F32((uint32_t)(esp + 0x10cu)) = lf32(ST(0));
    lpop(x);
L_0054978f:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00549793:  // fmul dword ptr [eax + ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ebx + 0x8u)));
L_00549797:  // fstp dword ptr [esp + 0x110]
    F32((uint32_t)(esp + 0x110u)) = lf32(ST(0));
    lpop(x);
L_0054979e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005497a0:  // fld dword ptr [esp + 0x10c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10cu)));
L_005497a7:  // fadd dword ptr [esp + 0x12c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x12cu)));
L_005497ae:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_005497b2:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_005497b9:  // fadd dword ptr [esp + 0x130]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x130u)));
L_005497c0:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_005497c4:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_005497c8:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_005497cf:  // mov edx, dword ptr [esp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_005497d6:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_005497da:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_005497de:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_005497e1:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_005497e5:  // mov ecx, dword ptr [esi + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_005497e8:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_005497ec:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_005497ee:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_005497f2:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_005497f5:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_005497f9:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_005497fc:  // mov eax, dword ptr [0x63012c]
    eax = (uint32_t)(M32((uint32_t)(0x63012cu)));
L_00549801:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_00549805:  // mov edi, dword ptr [esi + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_00549808:  // cmp eax, 0xff
    t0 = lsub<32>(eax, 0xffu, f);
L_0054980d:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_00549811:  // je 0x54983d
    if (f.zf) goto L_0054983d;
L_00549813:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00549815:  // and edi, 0xffffff
    t0 = llog<32>(edi & 0xffffffu, f);
    edi = (uint32_t)(t0);
L_0054981b:  // shr ecx, 0x18
    t0 = lshr<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0054981e:  // imul ecx, eax
    t0 = limul32(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00549821:  // mov eax, 0x80808081
    eax = (uint32_t)(0x80808081u);
L_00549826:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00549828:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0054982a:  // sar edx, 7
    t0 = lsar<32>(edx, 0x7u, f);
    edx = (uint32_t)(t0);
L_0054982d:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054982f:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00549832:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00549834:  // shl edx, 0x18
    t0 = lshl<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_00549837:  // or edx, edi
    t0 = llog<32>(edx | edi, f);
    edx = (uint32_t)(t0);
L_00549839:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_0054983d:  // cmp dword ptr [0x704e48], 1
    t0 = lsub<32>(M32((uint32_t)(0x704e48u)), 0x1u, f);
L_00549844:  // jne 0x549858
    if (!f.zf) goto L_00549858;
L_00549846:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0054984b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054984c:  // call 0x4b52c0
    t0 = 0x004b52c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549851u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549851:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00549854:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_00549858:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0054985b:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0054985f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00549861:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00549862:  // lea edx, [eax + eax*8]
    edx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00549865:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054986b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054986d:  // mov ecx, dword ptr [ecx + edx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edx * 4u + 0x4u)));
L_00549871:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549876u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549876:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054987a:  // mov dword ptr [esi + 0x48], eax
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(eax);
L_0054987d:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_00549881:  // mov ecx, dword ptr [ebp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_00549887:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00549888:  // add edx, 0x60
    t0 = ladd<32>(edx, 0x60u, f);
    edx = (uint32_t)(t0);
L_0054988b:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054988d:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_00549891:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00549895:  // jl 0x54973b
    if ((f.sf != f.of)) goto L_0054973b;
L_0054989b:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_005498a1:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_005498a3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005498a5:  // jle 0x549904
    if ((f.zf || f.sf != f.of)) goto L_00549904;
L_005498a7:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005498a9:  // mov edx, dword ptr [ebp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_005498af:  // mov eax, edi
    eax = (uint32_t)(edi);
L_005498b1:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_005498b3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005498b5:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005498b7:  // mov cx, word ptr [edx + 0x48]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x48u))) & 0xffffu);
L_005498bb:  // mov word ptr [esp + 0x24], cx
    M16((uint32_t)(esp + 0x24u)) = (uint16_t)((ecx & 0xffffu));
L_005498c0:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_005498c3:  // mov cx, word ptr [edx + 0x48]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x48u))) & 0xffffu);
L_005498c7:  // mov word ptr [esp + 0x26], cx
    M16((uint32_t)(esp + 0x26u)) = (uint16_t)((ecx & 0xffffu));
L_005498cc:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005498cf:  // mov cx, word ptr [edx + 0x48]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x48u))) & 0xffffu);
L_005498d3:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_005498d7:  // mov word ptr [esp + 0x28], cx
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)((ecx & 0xffffu));
L_005498dc:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_005498de:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005498df:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_005498e5:  // mov eax, dword ptr [eax + 0x30]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_005498e8:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_005498eb:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_005498ed:  // mov ecx, dword ptr [eax + ecx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u + 0x4u)));
L_005498f1:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005498f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005498f6:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_005498fc:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_005498fd:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_00549900:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00549902:  // jl 0x5498a9
    if ((f.sf != f.of)) goto L_005498a9;
L_00549904:  // mov ecx, dword ptr [ebp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054990a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054990b:  // call 0x500d10
    t0 = 0x00500d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549910u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549910:  // jmp 0x54b7e0
    goto L_0054b7e0;
L_00549915:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_0054991b:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0054991d:  // je 0x54a49e
    if (f.zf) goto L_0054a49e;
L_00549923:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_00549926:  // je 0x54a49e
    if (f.zf) goto L_0054a49e;
L_0054992c:  // cmp edx, 8
    t0 = lsub<32>(edx, 0x8u, f);
L_0054992f:  // je 0x54a49e
    if (f.zf) goto L_0054a49e;
L_00549935:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00549937:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0054993a:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0054993c:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_00549940:  // je 0x549951
    if (f.zf) goto L_00549951;
L_00549942:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00549944:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00549946:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549949u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549949:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_0054994f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00549951:  // cmp dword ptr [esp + 0x18], 8
    t0 = lsub<32>(M32((uint32_t)(esp + 0x18u)), 0x8u, f);
L_00549956:  // jne 0x54995e
    if (!f.zf) goto L_0054995e;
L_00549958:  // mov esi, dword ptr [0x704e5c]
    esi = (uint32_t)(M32((uint32_t)(0x704e5cu)));
L_0054995e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00549960:  // jl 0x5499c1
    if ((f.sf != f.of)) goto L_005499c1;
L_00549962:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00549964:  // je 0x549971
    if (f.zf) goto L_00549971;
L_00549966:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00549968:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0054996a:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054996du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054996d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00549971:  // cmp dword ptr [esp + 0x18], 8
    t0 = lsub<32>(M32((uint32_t)(esp + 0x18u)), 0x8u, f);
L_00549976:  // jne 0x549982
    if (!f.zf) goto L_00549982;
L_00549978:  // mov ecx, dword ptr [0x704e58]
    ecx = (uint32_t)(M32((uint32_t)(0x704e58u)));
L_0054997e:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_00549982:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_00549988:  // lea eax, [esi + esi*8]
    eax = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0054998b:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054998e:  // mov ecx, dword ptr [edx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x18u)));
L_00549991:  // fild dword ptr [ecx + eax*4 + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + eax * 4u + 0x1cu)));
L_00549995:  // lea eax, [ecx + eax*4]
    eax = (uint32_t)((uint32_t)(ecx + eax * 4u));
L_00549998:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0054999c:  // fiadd dword ptr [eax + 0x14]
    ST(0) = (ST(0)) + ((long double)(int32_t)M32((uint32_t)(eax + 0x14u)));
L_0054999f:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_005499a2:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005499a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005499a7:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_005499ab:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005499af:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005499b2:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_005499b3:  // idiv dword ptr [ebp + 0xb8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ebp + 0xb8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_005499b9:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_005499bb:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_005499c1:  // mov eax, dword ptr [ebp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x84u)));
L_005499c7:  // cmp edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
L_005499ca:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005499cc:  // mov dword ptr [esp + 0xd0], ecx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(ecx);
L_005499d3:  // jne 0x549ac9
    if (!f.zf) goto L_00549ac9;
L_005499d9:  // mov eax, dword ptr [0x89ce84]
    eax = (uint32_t)(M32((uint32_t)(0x89ce84u)));
L_005499de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005499e0:  // jne 0x5499fc
    if (!f.zf) goto L_005499fc;
L_005499e2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005499e4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005499e6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_005499e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005499e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005499ea:  // push 0x625498
    t0 = 0x625498u; esp -= 4; M32(esp) = t0;
L_005499ef:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005499f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005499f4:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_005499f7:  // mov dword ptr [0x89ce84], eax
    M32((uint32_t)(0x89ce84u)) = (uint32_t)(eax);
L_005499fc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005499fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005499ff:  // call 0x501280
    t0 = 0x00501280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549a04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549a04:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00549a07:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00549a09:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00549a0b:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00549a0f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00549a11:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00549a13:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_00549a15:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00549a17:  // push 0x152
    t0 = 0x152u; esp -= 4; M32(esp) = t0;
L_00549a1c:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549a21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549a21:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00549a23:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00549a25:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00549a27:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_00549a29:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00549a2b:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549a30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549a30:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00549a35:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_00549a39:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00549a3a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00549a3b:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00549a3d:  // call dword ptr [edx + 0xc0]
    t0 = M32((uint32_t)(edx + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549a43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549a43:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00549a48:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_00549a4d:  // lea edi, [esp + 0x184]
    edi = (uint32_t)((uint32_t)(esp + 0x184u));
L_00549a54:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00549a58:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00549a5a:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00549a5f:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00549a64:  // lea edi, [esp + 0x274]
    edi = (uint32_t)((uint32_t)(esp + 0x274u));
L_00549a6b:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00549a6d:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00549a72:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_00549a77:  // lea edi, [esp + 0x1c4]
    edi = (uint32_t)((uint32_t)(esp + 0x1c4u));
L_00549a7e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00549a80:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00549a82:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_00549a88:  // fild dword ptr [eax + 0xac]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + 0xacu)));
L_00549a8e:  // movsx eax, word ptr [eax + 0xb0]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0xb0u))));
L_00549a95:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00549a99:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00549a9d:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00549aa1:  // fstp dword ptr [esp + 0x178]
    F32((uint32_t)(esp + 0x178u)) = lf32(ST(0));
    lpop(x);
L_00549aa8:  // fild dword ptr [0x89ce14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce14u)));
L_00549aae:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00549ab0:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_00549ab4:  // fstp dword ptr [esp + 0x180]
    F32((uint32_t)(esp + 0x180u)) = lf32(ST(0));
    lpop(x);
L_00549abb:  // fdiv dword ptr [esp + 0x178]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x178u)));
L_00549ac2:  // fstp dword ptr [esp + 0x17c]
    F32((uint32_t)(esp + 0x17cu)) = lf32(ST(0));
    lpop(x);
L_00549ac9:  // cmp edx, 6
    t0 = lsub<32>(edx, 0x6u, f);
L_00549acc:  // je 0x549ad3
    if (f.zf) goto L_00549ad3;
L_00549ace:  // cmp edx, 8
    t0 = lsub<32>(edx, 0x8u, f);
L_00549ad1:  // jne 0x549b13
    if (!f.zf) goto L_00549b13;
L_00549ad3:  // mov ecx, dword ptr [0x704e54]
    ecx = (uint32_t)(M32((uint32_t)(0x704e54u)));
L_00549ad9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00549adb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00549adc:  // call 0x501280
    t0 = 0x00501280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549ae1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549ae1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00549ae4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00549ae6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00549ae8:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00549aec:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00549aee:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00549af0:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_00549af2:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00549af4:  // push 0x152
    t0 = 0x152u; esp -= 4; M32(esp) = t0;
L_00549af9:  // call 0x500540
    t0 = 0x00500540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549afeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549afe:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00549b00:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00549b02:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00549b04:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_00549b06:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00549b08:  // call 0x500590
    t0 = 0x00500590u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549b0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549b0d:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_00549b13:  // mov edi, 6
    edi = (uint32_t)(0x6u);
L_00549b18:  // cmp edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
L_00549b1b:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_00549b1f:  // je 0x549b2a
    if (f.zf) goto L_00549b2a;
L_00549b21:  // cmp edx, edi
    t0 = lsub<32>(edx, edi, f);
L_00549b23:  // je 0x549b2a
    if (f.zf) goto L_00549b2a;
L_00549b25:  // cmp edx, 8
    t0 = lsub<32>(edx, 0x8u, f);
L_00549b28:  // jne 0x549b33
    if (!f.zf) goto L_00549b33;
L_00549b2a:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_00549b2f:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_00549b33:  // mov esi, dword ptr [esp + 0x1e78]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1e78u)));
L_00549b3a:  // cmp edx, 6
    t0 = lsub<32>(edx, 0x6u, f);
L_00549b3d:  // jne 0x549cef
    if (!f.zf) goto L_00549cef;
L_00549b43:  // mov ecx, dword ptr [0x704e40]
    ecx = (uint32_t)(M32((uint32_t)(0x704e40u)));
L_00549b49:  // mov eax, dword ptr [0x704e3c]
    eax = (uint32_t)(M32((uint32_t)(0x704e3cu)));
L_00549b4e:  // mov edx, dword ptr [0x704e38]
    edx = (uint32_t)(M32((uint32_t)(0x704e38u)));
L_00549b54:  // mov dword ptr [esp + 0x70], ecx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ecx);
L_00549b58:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00549b5c:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_00549b60:  // mov dword ptr [esp + 0x68], edx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edx);
L_00549b64:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00549b68:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00549b6c:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_00549b70:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00549b72:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00549b74:  // mov edx, dword ptr [0x704e44]
    edx = (uint32_t)(M32((uint32_t)(0x704e44u)));
L_00549b7a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549b7c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00549b7e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00549b80:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_00549b84:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549b86:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00549b88:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00549b8a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00549b8c:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00549b92:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00549b94:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00549b97:  // jne 0x549bbd
    if (!f.zf) goto L_00549bbd;
L_00549b99:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00549b9f:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00549ba3:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00549ba5:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_00549ba9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00549bab:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00549baf:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_00549bb3:  // fmul dword ptr [esp + 0x70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x70u)));
L_00549bb7:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_00549bbb:  // jmp 0x549bbf
    goto L_00549bbf;
L_00549bbd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00549bbf:  // lea eax, [esp + 0xd8]
    eax = (uint32_t)((uint32_t)(esp + 0xd8u));
L_00549bc6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00549bc8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00549bc9:  // call 0x49bc80
    t0 = 0x0049bc80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549bceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549bce:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00549bd5:  // mov ecx, dword ptr [esp + 0xe8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_00549bdc:  // mov edx, dword ptr [esp + 0xf8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_00549be3:  // fstp dword ptr [esp + 0xe8]
    F32((uint32_t)(esp + 0xe8u)) = lf32(ST(0));
    lpop(x);
L_00549bea:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_00549bf1:  // mov eax, dword ptr [esp + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xfcu)));
L_00549bf8:  // mov dword ptr [esp + 0xdc], ecx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(ecx);
L_00549bff:  // fstp dword ptr [esp + 0xf8]
    F32((uint32_t)(esp + 0xf8u)) = lf32(ST(0));
    lpop(x);
L_00549c06:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_00549c0d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00549c0f:  // mov dword ptr [esp + 0xe0], edx
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(edx);
L_00549c16:  // fstp dword ptr [esp + 0xfc]
    F32((uint32_t)(esp + 0xfcu)) = lf32(ST(0));
    lpop(x);
L_00549c1d:  // mov dword ptr [esp + 0xf0], eax
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(eax);
L_00549c24:  // call 0x49bc40
    t0 = 0x0049bc40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549c29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549c29:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00549c2a:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_00549c31:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00549c34:  // call 0x49bbb0
    t0 = 0x0049bbb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00549c39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00549c39:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_00549c40:  // fmul dword ptr [esp + 0x70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x70u)));
L_00549c44:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00549c4b:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00549c4f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549c51:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00549c55:  // fmul dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd8u)));
L_00549c5c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549c5e:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_00549c65:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_00549c6c:  // fmul dword ptr [esp + 0x70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x70u)));
L_00549c70:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_00549c77:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00549c7b:  // mov ecx, dword ptr [esp + 0x9c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_00549c82:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549c84:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00549c88:  // fmul dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe8u)));
L_00549c8f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549c91:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_00549c98:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_00549c9f:  // fmul dword ptr [esp + 0x70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x70u)));
L_00549ca3:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_00549caa:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00549cae:  // mov edx, dword ptr [esp + 0xa0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00549cb5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549cb7:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00549cbb:  // fmul dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf8u)));
L_00549cc2:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_00549cc6:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00549ccd:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_00549cd1:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_00549cd7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549cd9:  // mov dword ptr [esp + 0x74], ecx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ecx);
L_00549cdd:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_00549ce4:  // mov eax, dword ptr [esp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_00549ceb:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00549cef:  // mov eax, dword ptr [ebp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_00549cf5:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00549cf7:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00549cf9:  // mov dword ptr [esp + 0x64], esi
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(esi);
L_00549cfd:  // jle 0x54a1d0
    if ((f.zf || f.sf != f.of)) goto L_0054a1d0;
L_00549d03:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_00549d07:  // add esi, dword ptr [ebp + 0x134]
    t0 = ladd<32>(esi, M32((uint32_t)(ebp + 0x134u)), f);
    esi = (uint32_t)(t0);
L_00549d0d:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00549d0f:  // jle 0x54a1ae
    if ((f.zf || f.sf != f.of)) goto L_0054a1ae;
L_00549d15:  // lea eax, [esi + 0x30]
    eax = (uint32_t)((uint32_t)(esi + 0x30u));
L_00549d18:  // mov dword ptr [esp + 0xac], edi
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(edi);
L_00549d1f:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00549d23:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00549d27:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00549d29:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_00549d2c:  // je 0x54a18a
    if (f.zf) goto L_0054a18a;
L_00549d32:  // mov ecx, dword ptr [ebp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_00549d38:  // lea edx, [eax + eax*8]
    edx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_00549d3b:  // shl edx, 2
    t0 = lshl<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00549d3e:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00549d40:  // fld dword ptr [eax + edx + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + edx + 0x20u)));
L_00549d44:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00549d4a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00549d4c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00549d4f:  // jne 0x54a184
    if (!f.zf) goto L_0054a184;
L_00549d55:  // mov eax, dword ptr [0x704e48]
    eax = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_00549d5a:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00549d5d:  // je 0x549d73
    if (f.zf) goto L_00549d73;
L_00549d5f:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_00549d62:  // je 0x549d73
    if (f.zf) goto L_00549d73;
L_00549d64:  // cmp eax, 8
    t0 = lsub<32>(eax, 0x8u, f);
L_00549d67:  // je 0x549d73
    if (f.zf) goto L_00549d73;
L_00549d69:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00549d6b:  // mov eax, dword ptr [eax + edx + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + edx + 0x4u)));
L_00549d6f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00549d73:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00549d76:  // mov edi, dword ptr [esp + 0xd0]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_00549d7d:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00549d80:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00549d82:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_00549d84:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_00549d88:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00549d8b:  // mov dword ptr [esp + 0x38], edi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edi);
L_00549d8f:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00549d92:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_00549d96:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00549d99:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_00549d9d:  // mov eax, dword ptr [esi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_00549da0:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_00549da4:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00549da6:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00549daa:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00549dad:  // mov edi, dword ptr [esi + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_00549db0:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00549db4:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00549db7:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_00549dbb:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_00549dbf:  // mov eax, dword ptr [0x704e48]
    eax = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_00549dc4:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_00549dc7:  // jne 0x549e6a
    if (!f.zf) goto L_00549e6a;
L_00549dcd:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00549dd1:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_00549dd4:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00549dd8:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_00549ddb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549ddd:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00549de1:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_00549de4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549de6:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00549dec:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00549dee:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00549df1:  // je 0x549e45
    if (f.zf) goto L_00549e45;
L_00549df3:  // fld dword ptr [0x704e50]
    lpush(x, (long double)F32((uint32_t)(0x704e50u)));
L_00549df9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00549dfb:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_00549dff:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00549e01:  // fstp dword ptr [esp + 0x108]
    F32((uint32_t)(esp + 0x108u)) = lf32(ST(0));
    lpop(x);
L_00549e08:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00549e0a:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00549e0e:  // fstp dword ptr [esp + 0x10c]
    F32((uint32_t)(esp + 0x10cu)) = lf32(ST(0));
    lpop(x);
L_00549e15:  // fmul dword ptr [esp + 0x70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x70u)));
L_00549e19:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00549e1d:  // fsub dword ptr [esp + 0x108]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x108u)));
L_00549e24:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00549e28:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00549e2c:  // fsub dword ptr [esp + 0x10c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10cu)));
L_00549e33:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00549e37:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00549e3b:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00549e3d:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00549e41:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00549e43:  // jmp 0x549e4a
    goto L_00549e4a;
L_00549e45:  // mov edi, 0xff000000
    edi = (uint32_t)(0xff000000u);
L_00549e4a:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00549e4e:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_00549e54:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_00549e58:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00549e5c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00549e60:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_00549e66:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00549e6a:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00549e6c:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_00549e6e:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00549e70:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00549e71:  // idiv dword ptr [ecx + 8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ecx + 0x8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00549e74:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00549e77:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00549e79:  // shr ecx, 0x18
    t0 = lshr<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_00549e7c:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00549e80:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00549e84:  // fmul dword ptr [eax + edx*4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + edx * 4u)));
L_00549e87:  // mov eax, dword ptr [0x63012c]
    eax = (uint32_t)(M32((uint32_t)(0x63012cu)));
L_00549e8c:  // cmp eax, 0xff
    t0 = lsub<32>(eax, 0xffu, f);
L_00549e91:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00549e95:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00549e99:  // je 0x549eb3
    if (f.zf) goto L_00549eb3;
L_00549e9b:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00549e9d:  // imul ecx, eax
    t0 = limul32(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00549ea0:  // mov eax, 0x80808081
    eax = (uint32_t)(0x80808081u);
L_00549ea5:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_00549ea7:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00549ea9:  // sar edx, 7
    t0 = lsar<32>(edx, 0x7u, f);
    edx = (uint32_t)(t0);
L_00549eac:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00549eae:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_00549eb1:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00549eb3:  // mov ecx, dword ptr [0x704e48]
    ecx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_00549eb9:  // and edi, 0xffffff
    t0 = llog<32>(edi & 0xffffffu, f);
    edi = (uint32_t)(t0);
L_00549ebf:  // shl edx, 0x18
    t0 = lshl<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_00549ec2:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_00549ec4:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00549ec7:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_00549ecb:  // je 0x549ed6
    if (f.zf) goto L_00549ed6;
L_00549ecd:  // cmp ecx, 7
    t0 = lsub<32>(ecx, 0x7u, f);
L_00549ed0:  // jne 0x54a06e
    if (!f.zf) goto L_0054a06e;
L_00549ed6:  // mov eax, dword ptr [esp + 0x1e78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1e78u)));
L_00549edd:  // cmp ecx, 7
    t0 = lsub<32>(ecx, 0x7u, f);
L_00549ee0:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00549ee4:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00549ee7:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00549eeb:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00549eed:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549eef:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00549ef3:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00549ef6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549ef8:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_00549eff:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00549f03:  // fmul dword ptr [eax + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x10u)));
L_00549f06:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00549f0a:  // fmul dword ptr [eax + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x18u)));
L_00549f0d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f0f:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00549f13:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_00549f16:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f18:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_00549f1f:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00549f23:  // fmul dword ptr [eax + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x28u)));
L_00549f26:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00549f2a:  // fmul dword ptr [eax + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x20u)));
L_00549f2d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f2f:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00549f33:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_00549f36:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f38:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_00549f3f:  // jne 0x549fdc
    if (!f.zf) goto L_00549fdc;
L_00549f45:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00549f49:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00549f4c:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00549f50:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00549f52:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f54:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00549f58:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00549f5b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f5d:  // fstp dword ptr [esp + 0xb0]
    F32((uint32_t)(esp + 0xb0u)) = lf32(ST(0));
    lpop(x);
L_00549f64:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00549f68:  // fmul dword ptr [eax + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x10u)));
L_00549f6b:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00549f6f:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_00549f72:  // mov ecx, dword ptr [esp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_00549f79:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f7b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00549f7f:  // fmul dword ptr [eax + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x18u)));
L_00549f82:  // mov dword ptr [esp + 0x9c], ecx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(ecx);
L_00549f89:  // mov ecx, dword ptr [esp + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_00549f90:  // mov dword ptr [esp + 0xa8], ecx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(ecx);
L_00549f97:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549f99:  // fstp dword ptr [esp + 0xb4]
    F32((uint32_t)(esp + 0xb4u)) = lf32(ST(0));
    lpop(x);
L_00549fa0:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00549fa4:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_00549fa7:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00549fab:  // fmul dword ptr [eax + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x28u)));
L_00549fae:  // mov edx, dword ptr [esp + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_00549fb5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549fb7:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00549fbb:  // fmul dword ptr [eax + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x20u)));
L_00549fbe:  // mov dword ptr [esp + 0xa0], edx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(edx);
L_00549fc5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549fc7:  // fstp dword ptr [esp + 0xb8]
    F32((uint32_t)(esp + 0xb8u)) = lf32(ST(0));
    lpop(x);
L_00549fce:  // mov eax, dword ptr [esp + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_00549fd5:  // mov dword ptr [esp + 0xa4], eax
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(eax);
L_00549fdc:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_00549fe3:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00549fea:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00549fec:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00549fee:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00549ff0:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00549ff2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00549ff4:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00549ffb:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_0054a002:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a004:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0054a006:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0054a008:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054a00a:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0054a010:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054a012:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0054a015:  // jne 0x54a04d
    if (!f.zf) goto L_0054a04d;
L_0054a017:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0054a01d:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_0054a024:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054a026:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_0054a02d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0054a02f:  // fmul dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa0u)));
L_0054a036:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_0054a03d:  // fmul dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xa4u)));
L_0054a044:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_0054a04b:  // jmp 0x54a04f
    goto L_0054a04f;
L_0054a04d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054a04f:  // lea edx, [esp + 0x9c]
    edx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_0054a056:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0054a05b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a05c:  // call 0x4b52c0
    t0 = 0x004b52c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a061u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a061:  // mov ecx, dword ptr [0x704e48]
    ecx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_0054a067:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a06a:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_0054a06e:  // cmp ecx, 2
    t0 = lsub<32>(ecx, 0x2u, f);
L_0054a071:  // jne 0x54a16d
    if (!f.zf) goto L_0054a16d;
L_0054a077:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054a07b:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0054a07f:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0054a083:  // mov dword ptr [esp + 0xc0], eax
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(eax);
L_0054a08a:  // mov dword ptr [esp + 0xc4], ecx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(ecx);
L_0054a091:  // lea eax, [esp + 0x274]
    eax = (uint32_t)((uint32_t)(esp + 0x274u));
L_0054a098:  // mov dword ptr [esp + 0xc8], edx
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(edx);
L_0054a09f:  // lea ecx, [esp + 0x1c4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1c4u));
L_0054a0a6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a0a7:  // lea edx, [esp + 0x188]
    edx = (uint32_t)((uint32_t)(esp + 0x188u));
L_0054a0ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a0af:  // lea eax, [esp + 0x80]
    eax = (uint32_t)((uint32_t)(esp + 0x80u));
L_0054a0b6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a0b7:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_0054a0be:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a0bf:  // lea edx, [esp + 0x138]
    edx = (uint32_t)((uint32_t)(esp + 0x138u));
L_0054a0c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a0c7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a0c8:  // call 0x576297
    t0 = 0x00576297u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a0cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a0cd:  // fld dword ptr [esp + 0x128]
    lpush(x, (long double)F32((uint32_t)(esp + 0x128u)));
L_0054a0d4:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_0054a0d8:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0054a0dc:  // fld dword ptr [esp + 0x12c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x12cu)));
L_0054a0e3:  // fdiv dword ptr [esp + 0x178]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x178u)));
L_0054a0ea:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_0054a0ee:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0054a0f2:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054a0f8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054a0fa:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0054a0fd:  // je 0x54a107
    if (f.zf) goto L_0054a107;
L_0054a0ff:  // mov dword ptr [esp + 0x50], 0
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x0u);
L_0054a107:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054a10b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054a111:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054a113:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0054a116:  // je 0x54a120
    if (f.zf) goto L_0054a120;
L_0054a118:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_0054a120:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0054a124:  // fcomp dword ptr [esp + 0x180]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x180u)));
    lpop(x);
L_0054a12b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054a12d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054a130:  // jne 0x54a13d
    if (!f.zf) goto L_0054a13d;
L_0054a132:  // mov eax, dword ptr [esp + 0x180]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_0054a139:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_0054a13d:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054a141:  // fcomp dword ptr [esp + 0x17c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x17cu)));
    lpop(x);
L_0054a148:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054a14a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054a14d:  // jne 0x54a15a
    if (!f.zf) goto L_0054a15a;
L_0054a14f:  // mov ecx, dword ptr [esp + 0x17c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x17cu)));
L_0054a156:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_0054a15a:  // mov edx, dword ptr [0x704e4c]
    edx = (uint32_t)(M32((uint32_t)(0x704e4cu)));
L_0054a160:  // shl edx, 0x18
    t0 = lshl<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_0054a163:  // or edx, 0xffffff
    t0 = llog<32>(edx | 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0054a169:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_0054a16d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054a171:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_0054a175:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a177:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a178:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a17du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a17d:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054a181:  // mov dword ptr [ecx + 0x18], eax
    M32((uint32_t)(ecx + 0x18u)) = (uint32_t)(eax);
L_0054a184:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_0054a18a:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0054a18e:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0054a195:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0054a198:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054a199:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0054a19d:  // mov dword ptr [esp + 0xac], eax
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(eax);
L_0054a1a4:  // jne 0x549d23
    if (!f.zf) goto L_00549d23;
L_0054a1aa:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054a1ae:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0054a1b2:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0054a1b6:  // mov ecx, dword ptr [ebp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_0054a1bc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054a1bd:  // add esi, 0x60
    t0 = ladd<32>(esi, 0x60u, f);
    esi = (uint32_t)(t0);
L_0054a1c0:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054a1c2:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_0054a1c6:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_0054a1ca:  // jl 0x549d07
    if ((f.sf != f.of)) goto L_00549d07;
L_0054a1d0:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_0054a1d6:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054a1d8:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0054a1da:  // mov dword ptr [esp + 0x64], edi
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edi);
L_0054a1de:  // jle 0x54a3f7
    if ((f.zf || f.sf != f.of)) goto L_0054a3f7;
L_0054a1e4:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_0054a1e8:  // mov ecx, dword ptr [ebp + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_0054a1ee:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0054a1f0:  // cmp edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
L_0054a1f3:  // je 0x54a378
    if (f.zf) goto L_0054a378;
L_0054a1f9:  // cmp edx, 6
    t0 = lsub<32>(edx, 0x6u, f);
L_0054a1fc:  // je 0x54a378
    if (f.zf) goto L_0054a378;
L_0054a202:  // cmp edx, 8
    t0 = lsub<32>(edx, 0x8u, f);
L_0054a205:  // je 0x54a378
    if (f.zf) goto L_0054a378;
L_0054a20b:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054a20f:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0054a217:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054a219:  // jle 0x54a3d5
    if ((f.zf || f.sf != f.of)) goto L_0054a3d5;
L_0054a21f:  // mov esi, 0x30
    esi = (uint32_t)(0x30u);
L_0054a224:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0054a226:  // mov eax, dword ptr [esi + edx]
    eax = (uint32_t)(M32((uint32_t)(esi + edx)));
L_0054a229:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054a22c:  // je 0x54a35e
    if (f.zf) goto L_0054a35e;
L_0054a232:  // mov ecx, dword ptr [ebp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a238:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a23b:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054a23d:  // fld dword ptr [ecx + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + eax * 4u + 0x20u)));
L_0054a241:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054a247:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054a249:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054a24c:  // jne 0x54a35e
    if (!f.zf) goto L_0054a35e;
L_0054a252:  // mov dx, word ptr [esi + edx + 0x18]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + edx + 0x18u))) & 0xffffu);
L_0054a257:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054a259:  // mov word ptr [esp + 0x24], dx
    M16((uint32_t)(esp + 0x24u)) = (uint16_t)((edx & 0xffffu));
L_0054a25e:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0054a261:  // mov cx, word ptr [eax + esi + 0x18]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax + esi + 0x18u))) & 0xffffu);
L_0054a266:  // mov word ptr [esp + 0x26], cx
    M16((uint32_t)(esp + 0x26u)) = (uint16_t)((ecx & 0xffffu));
L_0054a26b:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0054a26e:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0054a272:  // mov ax, word ptr [edx + esi + 0x18]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + esi + 0x18u))) & 0xffffu);
L_0054a277:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a278:  // mov word ptr [esp + 0x2c], ax
    M16((uint32_t)(esp + 0x2cu)) = (uint16_t)((eax & 0xffffu));
L_0054a27d:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0054a27f:  // mov eax, dword ptr [esi + edx]
    eax = (uint32_t)(M32((uint32_t)(esi + edx)));
L_0054a282:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a285:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a28b:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054a28d:  // mov ecx, dword ptr [edx + ecx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + ecx * 4u + 0x4u)));
L_0054a291:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a296u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a296:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0054a298:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a29e:  // mov eax, dword ptr [esi + eax]
    eax = (uint32_t)(M32((uint32_t)(esi + eax)));
L_0054a2a1:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a2a4:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054a2a6:  // mov ecx, dword ptr [eax + ecx*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u + 0x4u)));
L_0054a2aa:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054a2ae:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054a2b0:  // mov dword ptr [edx + 0x88], eax
    M32((uint32_t)(edx + 0x88u)) = (uint32_t)(eax);
L_0054a2b6:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0054a2b8:  // mov eax, dword ptr [esi + ecx]
    eax = (uint32_t)(M32((uint32_t)(esi + ecx)));
L_0054a2bb:  // lea edx, [eax + eax*8]
    edx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a2be:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a2c4:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054a2c6:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0054a2c8:  // lea ecx, [ecx + edx*4]
    ecx = (uint32_t)((uint32_t)(ecx + edx * 4u));
L_0054a2cb:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054a2cc:  // idiv dword ptr [ecx + 8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ecx + 0x8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0054a2cf:  // mov eax, dword ptr [ecx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x10u)));
L_0054a2d2:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0054a2d5:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054a2d7:  // mov edx, dword ptr [eax + edx*4]
    edx = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_0054a2da:  // mov dword ptr [ecx + 0x8c], edx
    M32((uint32_t)(ecx + 0x8cu)) = (uint32_t)(edx);
L_0054a2e0:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0054a2e2:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a2e8:  // mov eax, dword ptr [esi + eax]
    eax = (uint32_t)(M32((uint32_t)(esi + eax)));
L_0054a2eb:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a2ee:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054a2f0:  // lea ecx, [eax + ecx*4]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_0054a2f3:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0054a2f5:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054a2f6:  // idiv dword ptr [ecx + 8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ecx + 0x8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0054a2f9:  // mov eax, dword ptr [ecx + 0x14]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_0054a2fc:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0054a2ff:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054a301:  // mov edx, dword ptr [eax + edx*4]
    edx = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_0054a304:  // mov dword ptr [ecx + 0x90], edx
    M32((uint32_t)(ecx + 0x90u)) = (uint32_t)(edx);
L_0054a30a:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0054a30c:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a312:  // mov eax, dword ptr [esi + eax]
    eax = (uint32_t)(M32((uint32_t)(esi + eax)));
L_0054a315:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a318:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054a31a:  // lea ecx, [eax + ecx*4]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_0054a31d:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0054a31f:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054a320:  // idiv dword ptr [ecx + 8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ecx + 0x8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0054a323:  // mov eax, dword ptr [ecx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_0054a326:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0054a329:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054a32b:  // mov edx, dword ptr [eax + edx*4]
    edx = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_0054a32e:  // mov dword ptr [ecx + 0x94], edx
    M32((uint32_t)(ecx + 0x94u)) = (uint32_t)(edx);
L_0054a334:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0054a336:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a33c:  // mov eax, dword ptr [esi + eax]
    eax = (uint32_t)(M32((uint32_t)(esi + eax)));
L_0054a33f:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a342:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0054a344:  // lea ecx, [eax + ecx*4]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_0054a347:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0054a349:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054a34a:  // idiv dword ptr [ecx + 8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ecx + 0x8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0054a34d:  // mov eax, dword ptr [ecx + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_0054a350:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0054a353:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054a355:  // mov edx, dword ptr [eax + edx*4]
    edx = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_0054a358:  // mov dword ptr [ecx + 0x98], edx
    M32((uint32_t)(ecx + 0x98u)) = (uint32_t)(edx);
L_0054a35e:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054a362:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054a366:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054a367:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0054a36a:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054a36c:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0054a370:  // jl 0x54a224
    if ((f.sf != f.of)) goto L_0054a224;
L_0054a376:  // jmp 0x54a3cf
    goto L_0054a3cf;
L_0054a378:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0054a37a:  // mov eax, dword ptr [ecx + 0x30]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x30u)));
L_0054a37d:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0054a380:  // je 0x54a3d5
    if (f.zf) goto L_0054a3d5;
L_0054a382:  // mov esi, dword ptr [ebp + 0x128]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a388:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054a38b:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_0054a38d:  // fld dword ptr [esi + eax*4 + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + eax * 4u + 0x20u)));
L_0054a391:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054a397:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054a399:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054a39c:  // jne 0x54a3d5
    if (!f.zf) goto L_0054a3d5;
L_0054a39e:  // mov cx, word ptr [ecx + 0x48]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + 0x48u))) & 0xffffu);
L_0054a3a2:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054a3a4:  // mov word ptr [esp + 0x24], cx
    M16((uint32_t)(esp + 0x24u)) = (uint16_t)((ecx & 0xffffu));
L_0054a3a9:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0054a3ac:  // mov ax, word ptr [edx + 0x48]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x48u))) & 0xffffu);
L_0054a3b0:  // mov word ptr [esp + 0x26], ax
    M16((uint32_t)(esp + 0x26u)) = (uint16_t)((eax & 0xffffu));
L_0054a3b5:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0054a3b8:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0054a3bc:  // mov dx, word ptr [ecx + 0x48]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + 0x48u))) & 0xffffu);
L_0054a3c0:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054a3c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a3c5:  // mov word ptr [esp + 0x2c], dx
    M16((uint32_t)(esp + 0x2cu)) = (uint16_t)((edx & 0xffffu));
L_0054a3ca:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a3cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a3cf:  // mov edx, dword ptr [0x704e48]
    edx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_0054a3d5:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0054a3d9:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0054a3dd:  // mov ecx, dword ptr [ebp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_0054a3e3:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054a3e4:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_0054a3e7:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054a3e9:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_0054a3ed:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_0054a3f1:  // jl 0x54a1e8
    if ((f.sf != f.of)) goto L_0054a1e8;
L_0054a3f7:  // cmp edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
L_0054a3fa:  // jne 0x54a44a
    if (!f.zf) goto L_0054a44a;
L_0054a3fc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a3fe:  // push 0x89
    t0 = 0x89u; esp -= 4; M32(esp) = t0;
L_0054a403:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054a408:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a40du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a40d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0054a40f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a411:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a413:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054a418:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a41du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a41d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054a421:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a423:  // call 0x500e70
    t0 = 0x00500e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a428u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a428:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a42a:  // push 0x89
    t0 = 0x89u; esp -= 4; M32(esp) = t0;
L_0054a42f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054a434:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a439u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a439:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a43b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054a440:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a445u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a445:  // jmp 0x54b7e3
    goto L_0054b7e3;
L_0054a44a:  // cmp edx, 6
    t0 = lsub<32>(edx, 0x6u, f);
L_0054a44d:  // jne 0x54a481
    if (!f.zf) goto L_0054a481;
L_0054a44f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a451:  // push 0x89
    t0 = 0x89u; esp -= 4; M32(esp) = t0;
L_0054a456:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054a45b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a460u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a460:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054a464:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a466:  // call 0x500e70
    t0 = 0x00500e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a46bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a46b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a46d:  // push 0x89
    t0 = 0x89u; esp -= 4; M32(esp) = t0;
L_0054a472:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054a477:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a47cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a47c:  // jmp 0x54b7e3
    goto L_0054b7e3;
L_0054a481:  // cmp edx, 8
    t0 = lsub<32>(edx, 0x8u, f);
L_0054a484:  // jne 0x549904
    if (!f.zf) goto L_00549904;
L_0054a48a:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054a48e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a490:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a492:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a494:  // call 0x500fa0
    t0 = 0x00500fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a499u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a499:  // jmp 0x54b7e3
    goto L_0054b7e3;
L_0054a49e:  // mov eax, dword ptr [esp + 0x1e78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1e78u)));
L_0054a4a5:  // lea edx, [esp + 0x1e68]
    edx = (uint32_t)((uint32_t)(esp + 0x1e68u));
L_0054a4ac:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a4ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a4ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a4af:  // mov ecx, dword ptr [ebp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_0054a4b5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054a4b6:  // call 0x54d530
    t0 = 0x0054d530u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a4bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a4bb:  // jmp 0x54b7e3
    goto L_0054b7e3;
L_0054a4c0:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0054a4c3:  // jne 0x54b7ae
    if (!f.zf) goto L_0054b7ae;
L_0054a4c9:  // mov edi, dword ptr [esp + 0x1e80]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1e80u)));
L_0054a4d0:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0054a4d3:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0054a4d5:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0054a4dd:  // je 0x54a4e8
    if (f.zf) goto L_0054a4e8;
L_0054a4df:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0054a4e1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0054a4e3:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a4e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a4e6:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0054a4e8:  // mov ebx, dword ptr [esp + 0x1e8c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1e8cu)));
L_0054a4ef:  // and ebx, 8
    t0 = llog<32>(ebx & 0x8u, f);
    ebx = (uint32_t)(t0);
L_0054a4f2:  // cmp ebx, 8
    t0 = lsub<32>(ebx, 0x8u, f);
L_0054a4f5:  // jne 0x54a4fd
    if (!f.zf) goto L_0054a4fd;
L_0054a4f7:  // mov esi, dword ptr [0x704e5c]
    esi = (uint32_t)(M32((uint32_t)(0x704e5cu)));
L_0054a4fd:  // cmp dword ptr [ebp + 0xb8], 1
    t0 = lsub<32>(M32((uint32_t)(ebp + 0xb8u)), 0x1u, f);
L_0054a504:  // jle 0x54a616
    if ((f.zf || f.sf != f.of)) goto L_0054a616;
L_0054a50a:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a510:  // mov ecx, dword ptr [eax + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_0054a513:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0054a515:  // je 0x54a616
    if (f.zf) goto L_0054a616;
L_0054a51b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0054a51d:  // jl 0x54a616
    if ((f.sf != f.of)) goto L_0054a616;
L_0054a523:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0054a525:  // je 0x54a532
    if (f.zf) goto L_0054a532;
L_0054a527:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0054a529:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0054a52b:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a52eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a52e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0054a532:  // cmp ebx, 8
    t0 = lsub<32>(ebx, 0x8u, f);
L_0054a535:  // jne 0x54a540
    if (!f.zf) goto L_0054a540;
L_0054a537:  // mov eax, dword ptr [0x704e58]
    eax = (uint32_t)(M32((uint32_t)(0x704e58u)));
L_0054a53c:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0054a540:  // mov edx, dword ptr [ebp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054a546:  // lea ecx, [esi + esi*8]
    ecx = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0054a549:  // mov eax, dword ptr [edx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x18u)));
L_0054a54c:  // fild dword ptr [eax + ecx*4 + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + ecx * 4u + 0x1cu)));
L_0054a550:  // lea esi, [eax + ecx*4]
    esi = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_0054a553:  // mov ecx, dword ptr [esp + 0x1e90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1e90u)));
L_0054a55a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0054a55c:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0054a560:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0054a564:  // fild dword ptr [esi + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x14u)));
L_0054a567:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_0054a56b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0054a56f:  // je 0x54a57c
    if (f.zf) goto L_0054a57c;
L_0054a571:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054a573:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0054a577:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a578:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0054a579:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a57cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a57c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054a580:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a583:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054a586:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a58bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a58b:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0054a58f:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054a593:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0054a596:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0054a597:  // idiv dword ptr [ebp + 0xb8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ebp + 0xb8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0054a59d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a5a0:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_0054a5a4:  // lea eax, [edx + 1]
    eax = (uint32_t)((uint32_t)(edx + 0x1u));
L_0054a5a7:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054a5a9:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0054a5ad:  // jle 0x54a5b6
    if ((f.zf || f.sf != f.of)) goto L_0054a5b6;
L_0054a5af:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0054a5b2:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_0054a5b6:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0054a5ba:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a5bd:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054a5c0:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a5c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a5c5:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0054a5c9:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0054a5cb:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0054a5d3:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0054a5d7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054a5d9:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0054a5dd:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054a5e0:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a5e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a5e5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a5e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a5e9:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0054a5ed:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0054a5f1:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a5f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a5f6:  // lea edx, [esi + 1]
    edx = (uint32_t)((uint32_t)(esi + 0x1u));
L_0054a5f9:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0054a5fc:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0054a600:  // cmp edx, dword ptr [esp + 0x20]
    t0 = lsub<32>(edx, M32((uint32_t)(esp + 0x20u)), f);
L_0054a604:  // jle 0x54a63e
    if ((f.zf || f.sf != f.of)) goto L_0054a63e;
L_0054a606:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a608:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a60a:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a60fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a60f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054a611:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a614:  // jmp 0x54a63e
    goto L_0054a63e;
L_0054a616:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054a618:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a619:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a61a:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0054a61e:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0054a622:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0054a626:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a62bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a62b:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0054a62f:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054a633:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a636:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_0054a63e:  // mov eax, dword ptr [ebp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x84u)));
L_0054a644:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a647:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0054a64b:  // mov ecx, dword ptr [eax + esi*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + esi * 4u)));
L_0054a64e:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0054a651:  // mov dword ptr [esp + 0xd8], ecx
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(ecx);
L_0054a658:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a65du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a65d:  // mov ecx, dword ptr [esp + 0x1e88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1e88u)));
L_0054a664:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054a667:  // lea edx, [esp + 0x128]
    edx = (uint32_t)((uint32_t)(esp + 0x128u));
L_0054a66e:  // lea eax, [esp + 0x2b4]
    eax = (uint32_t)((uint32_t)(esp + 0x2b4u));
L_0054a675:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a677:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a679:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a67b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a67c:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0054a680:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a681:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054a685:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a686:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054a68a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a68b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a68c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a68d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0054a68f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054a691:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a696u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a696:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0054a69a:  // lea ecx, [esp + 0x2b4]
    ecx = (uint32_t)((uint32_t)(esp + 0x2b4u));
L_0054a6a1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a6a2:  // call 0x49bc80
    t0 = 0x0049bc80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a6a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a6a7:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0054a6ab:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0054a6af:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0054a6b3:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0054a6b7:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0054a6bb:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0054a6bf:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_0054a6c3:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_0054a6c7:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054a6cb:  // lea ecx, [esp + 0x2b4]
    ecx = (uint32_t)((uint32_t)(esp + 0x2b4u));
L_0054a6d2:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_0054a6d6:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_0054a6da:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_0054a6de:  // call 0x49bc40
    t0 = 0x0049bc40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a6e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a6e3:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0054a6e7:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054a6eb:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0054a6ef:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054a6f0:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a6f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a6f5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054a6f6:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_0054a6fa:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a6ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a6ff:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054a700:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_0054a704:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a709u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a709:  // mov eax, dword ptr [ebp + 0xc0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xc0u)));
L_0054a70f:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0054a711:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054a713:  // jle 0x54b047
    if ((f.zf || f.sf != f.of)) goto L_0054b047;
L_0054a719:  // lea eax, [esp + 0x564]
    eax = (uint32_t)((uint32_t)(esp + 0x564u));
L_0054a720:  // mov dword ptr [esp + 0xac], eax
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(eax);
L_0054a727:  // mov eax, dword ptr [ebp + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xd0u)));
L_0054a72d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a72f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a731:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_0054a738:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a73a:  // lea edx, [esp + 0x154]
    edx = (uint32_t)((uint32_t)(esp + 0x154u));
L_0054a741:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a742:  // mov ecx, dword ptr [eax + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebx * 4u)));
L_0054a745:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a746:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a748:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a74a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a74c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a74e:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a753u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a753:  // mov eax, dword ptr [esp + 0x1e80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1e80u)));
L_0054a75a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054a75c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a75e:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_0054a762:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054a764:  // lea edx, [esp + 0xe4]
    edx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_0054a76b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a76c:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0054a770:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a771:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054a775:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a776:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0054a77a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054a77b:  // mov ecx, dword ptr [ebp + 0xd0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xd0u)));
L_0054a781:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a782:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054a783:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_0054a786:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a78bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a78b:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054a78f:  // fmul dword ptr [esp + 0x168]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x168u)));
L_0054a796:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054a79a:  // fmul dword ptr [esp + 0x158]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x158u)));
L_0054a7a1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a7a3:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_0054a7aa:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_0054a7ae:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a7b0:  // fstp dword ptr [esp + 0x204]
    F32((uint32_t)(esp + 0x204u)) = lf32(ST(0));
    lpop(x);
L_0054a7b7:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054a7bb:  // fmul dword ptr [esp + 0x16c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x16cu)));
L_0054a7c2:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054a7c6:  // fmul dword ptr [esp + 0x15c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x15cu)));
L_0054a7cd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a7cf:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054a7d3:  // fmul dword ptr [esp + 0x14c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14cu)));
L_0054a7da:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a7dc:  // fstp dword ptr [esp + 0x208]
    F32((uint32_t)(esp + 0x208u)) = lf32(ST(0));
    lpop(x);
L_0054a7e3:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054a7e7:  // fmul dword ptr [esp + 0x170]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x170u)));
L_0054a7ee:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054a7f2:  // fmul dword ptr [esp + 0x160]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x160u)));
L_0054a7f9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a7fb:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054a7ff:  // fmul dword ptr [esp + 0x150]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x150u)));
L_0054a806:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a808:  // fstp dword ptr [esp + 0x20c]
    F32((uint32_t)(esp + 0x20cu)) = lf32(ST(0));
    lpop(x);
L_0054a80f:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054a813:  // fmul dword ptr [esp + 0x158]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x158u)));
L_0054a81a:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054a81e:  // fmul dword ptr [esp + 0x168]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x168u)));
L_0054a825:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a827:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_0054a82e:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_0054a832:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a834:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0054a838:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054a83c:  // fmul dword ptr [esp + 0x15c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x15cu)));
L_0054a843:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054a847:  // fmul dword ptr [esp + 0x16c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x16cu)));
L_0054a84e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a850:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054a854:  // fmul dword ptr [esp + 0x14c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14cu)));
L_0054a85b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a85d:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0054a861:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054a865:  // fmul dword ptr [esp + 0x160]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x160u)));
L_0054a86c:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054a870:  // fmul dword ptr [esp + 0x170]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x170u)));
L_0054a877:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0054a87c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054a87e:  // lea edx, [esp + 0x21c]
    edx = (uint32_t)((uint32_t)(esp + 0x21cu));
L_0054a885:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0054a887:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a889:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0054a88d:  // fmul dword ptr [esp + 0x15c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x15cu)));
L_0054a894:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054a895:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a897:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0054a89b:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054a89f:  // fmul dword ptr [esp + 0x168]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x168u)));
L_0054a8a6:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054a8aa:  // fmul dword ptr [esp + 0x178]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x178u)));
L_0054a8b1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a8b3:  // fld dword ptr [esp + 0x158]
    lpush(x, (long double)F32((uint32_t)(esp + 0x158u)));
L_0054a8ba:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_0054a8be:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a8c0:  // fstp dword ptr [esp + 0x128]
    F32((uint32_t)(esp + 0x128u)) = lf32(ST(0));
    lpop(x);
L_0054a8c7:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054a8cb:  // fmul dword ptr [esp + 0x16c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x16cu)));
L_0054a8d2:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054a8d6:  // fmul dword ptr [esp + 0x15c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x15cu)));
L_0054a8dd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a8df:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054a8e3:  // fmul dword ptr [esp + 0x17c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x17cu)));
L_0054a8ea:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a8ec:  // fstp dword ptr [esp + 0x12c]
    F32((uint32_t)(esp + 0x12cu)) = lf32(ST(0));
    lpop(x);
L_0054a8f3:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054a8f7:  // fmul dword ptr [esp + 0x170]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x170u)));
L_0054a8fe:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054a902:  // fmul dword ptr [esp + 0x160]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x160u)));
L_0054a909:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a90b:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054a90f:  // fmul dword ptr [esp + 0x180]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x180u)));
L_0054a916:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054a918:  // fstp dword ptr [esp + 0x130]
    F32((uint32_t)(esp + 0x130u)) = lf32(ST(0));
    lpop(x);
L_0054a91f:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054a924u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054a924:  // mov ecx, dword ptr [esp + 0x11c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x11cu)));
L_0054a92b:  // mov eax, dword ptr [esp + 0x118]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x118u)));
L_0054a932:  // mov edx, dword ptr [esp + 0x120]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x120u)));
L_0054a939:  // mov dword ptr [esp + 0x218], ecx
    M32((uint32_t)(esp + 0x218u)) = (uint32_t)(ecx);
L_0054a940:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054a944:  // mov dword ptr [esp + 0x214], eax
    M32((uint32_t)(esp + 0x214u)) = (uint32_t)(eax);
L_0054a94b:  // mov eax, dword ptr [esp + 0x124]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_0054a952:  // mov dword ptr [esp + 0x21c], edx
    M32((uint32_t)(esp + 0x21cu)) = (uint32_t)(edx);
L_0054a959:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054a95d:  // mov dword ptr [esp + 0x224], ecx
    M32((uint32_t)(esp + 0x224u)) = (uint32_t)(ecx);
L_0054a964:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_0054a96b:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0054a96f:  // mov dword ptr [esp + 0x220], eax
    M32((uint32_t)(esp + 0x220u)) = (uint32_t)(eax);
L_0054a976:  // fsub dword ptr [esp + 0x128]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x128u)));
L_0054a97d:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054a981:  // mov dword ptr [esp + 0x228], edx
    M32((uint32_t)(esp + 0x228u)) = (uint32_t)(edx);
L_0054a988:  // mov edx, dword ptr [esp + 0x204]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x204u)));
L_0054a98f:  // mov dword ptr [esp + 0x230], ecx
    M32((uint32_t)(esp + 0x230u)) = (uint32_t)(ecx);
L_0054a996:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0054a99d:  // mov ecx, dword ptr [esp + 0x20c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20cu)));
L_0054a9a4:  // mov dword ptr [esp + 0x22c], eax
    M32((uint32_t)(esp + 0x22cu)) = (uint32_t)(eax);
L_0054a9ab:  // fsub dword ptr [esp + 0x12c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x12cu)));
L_0054a9b2:  // mov eax, dword ptr [esp + 0x208]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x208u)));
L_0054a9b9:  // mov dword ptr [esp + 0x234], edx
    M32((uint32_t)(esp + 0x234u)) = (uint32_t)(edx);
L_0054a9c0:  // mov edx, dword ptr [esp + 0x210]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x210u)));
L_0054a9c7:  // mov dword ptr [esp + 0x23c], ecx
    M32((uint32_t)(esp + 0x23cu)) = (uint32_t)(ecx);
L_0054a9ce:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0054a9d3:  // lea esi, [esp + 0x214]
    esi = (uint32_t)((uint32_t)(esp + 0x214u));
L_0054a9da:  // lea edi, [esp + 0x148]
    edi = (uint32_t)((uint32_t)(esp + 0x148u));
L_0054a9e1:  // mov dword ptr [esp + 0x238], eax
    M32((uint32_t)(esp + 0x238u)) = (uint32_t)(eax);
L_0054a9e8:  // mov dword ptr [esp + 0x240], edx
    M32((uint32_t)(esp + 0x240u)) = (uint32_t)(edx);
L_0054a9ef:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054a9f1:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_0054a9f8:  // fsub dword ptr [esp + 0x130]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x130u)));
L_0054a9ff:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0054aa03:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054aa05:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0054aa09:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054aa0b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aa0d:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0054aa11:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0054aa13:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aa15:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_0054aa19:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054aa1d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054aa1f:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054aa23:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054aa25:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0054aa29:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aa2b:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054aa2f:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0054aa31:  // mov dword ptr [esp + 0x9c], eax
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(eax);
L_0054aa38:  // mov eax, dword ptr [esp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_0054aa3f:  // mov dword ptr [esp + 0xa8], eax
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(eax);
L_0054aa46:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aa48:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0054aa4c:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054aa50:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054aa52:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054aa56:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054aa58:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_0054aa5c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aa5e:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054aa62:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0054aa64:  // mov dword ptr [esp + 0xa0], ecx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(ecx);
L_0054aa6b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aa6d:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0054aa74:  // mov edx, dword ptr [esp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_0054aa7b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054aa7d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054aa7f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054aa81:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054aa85:  // fmul dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf8u)));
L_0054aa8c:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054aa90:  // fmul dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe8u)));
L_0054aa97:  // mov dword ptr [esp + 0xa4], edx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(edx);
L_0054aa9e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aaa0:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054aaa4:  // fmul dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd8u)));
L_0054aaab:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aaad:  // fstp dword ptr [esp + 0xc0]
    F32((uint32_t)(esp + 0xc0u)) = lf32(ST(0));
    lpop(x);
L_0054aab4:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054aab8:  // fmul dword ptr [esp + 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xfcu)));
L_0054aabf:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054aac3:  // fmul dword ptr [esp + 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xecu)));
L_0054aaca:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aacc:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054aad0:  // fmul dword ptr [esp + 0xdc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xdcu)));
L_0054aad7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aad9:  // fstp dword ptr [esp + 0xc4]
    F32((uint32_t)(esp + 0xc4u)) = lf32(ST(0));
    lpop(x);
L_0054aae0:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054aae4:  // fmul dword ptr [esp + 0x100]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x100u)));
L_0054aaeb:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054aaef:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_0054aaf6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054aaf8:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054aafc:  // fmul dword ptr [esp + 0xe0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe0u)));
L_0054ab03:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ab05:  // fstp dword ptr [esp + 0xc8]
    F32((uint32_t)(esp + 0xc8u)) = lf32(ST(0));
    lpop(x);
L_0054ab0c:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054ab10:  // fmul dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe8u)));
L_0054ab17:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054ab1b:  // fmul dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf8u)));
L_0054ab22:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0054ab27:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054ab29:  // lea ecx, [esp + 0x24c]
    ecx = (uint32_t)((uint32_t)(esp + 0x24cu));
L_0054ab30:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0054ab32:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ab34:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0054ab38:  // fmul dword ptr [esp + 0xe4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe4u)));
L_0054ab3f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054ab40:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ab42:  // fstp dword ptr [esp + 0x148]
    F32((uint32_t)(esp + 0x148u)) = lf32(ST(0));
    lpop(x);
L_0054ab49:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054ab4d:  // fmul dword ptr [esp + 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xfcu)));
L_0054ab54:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054ab58:  // fmul dword ptr [esp + 0x10c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10cu)));
L_0054ab5f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ab61:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054ab65:  // fmul dword ptr [esp + 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xecu)));
L_0054ab6c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ab6e:  // fstp dword ptr [esp + 0x14c]
    F32((uint32_t)(esp + 0x14cu)) = lf32(ST(0));
    lpop(x);
L_0054ab75:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054ab79:  // fmul dword ptr [esp + 0x100]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x100u)));
L_0054ab80:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054ab84:  // fmul dword ptr [esp + 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x110u)));
L_0054ab8b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ab8d:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054ab91:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_0054ab98:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ab9a:  // fstp dword ptr [esp + 0x150]
    F32((uint32_t)(esp + 0x150u)) = lf32(ST(0));
    lpop(x);
L_0054aba1:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054aba5:  // fmul dword ptr [esp + 0x108]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x108u)));
L_0054abac:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054abb0:  // fmul dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe8u)));
L_0054abb7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054abb9:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054abbd:  // fmul dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf8u)));
L_0054abc4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054abc6:  // fstp dword ptr [esp + 0xc0]
    F32((uint32_t)(esp + 0xc0u)) = lf32(ST(0));
    lpop(x);
L_0054abcd:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054abd1:  // fmul dword ptr [esp + 0xfc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xfcu)));
L_0054abd8:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054abdc:  // fmul dword ptr [esp + 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xecu)));
L_0054abe3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054abe5:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054abe9:  // fmul dword ptr [esp + 0x10c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10cu)));
L_0054abf0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054abf2:  // fstp dword ptr [esp + 0xc4]
    F32((uint32_t)(esp + 0xc4u)) = lf32(ST(0));
    lpop(x);
L_0054abf9:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054abfd:  // fmul dword ptr [esp + 0x100]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x100u)));
L_0054ac04:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054ac08:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_0054ac0f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ac11:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054ac15:  // fmul dword ptr [esp + 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x110u)));
L_0054ac1c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ac1e:  // fstp dword ptr [esp + 0xc8]
    F32((uint32_t)(esp + 0xc8u)) = lf32(ST(0));
    lpop(x);
L_0054ac25:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054ac2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054ac2a:  // mov edx, dword ptr [esp + 0xb0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_0054ac31:  // mov eax, dword ptr [esp + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0054ac38:  // mov ecx, dword ptr [esp + 0xb8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_0054ac3f:  // mov dword ptr [esp + 0x244], edx
    M32((uint32_t)(esp + 0x244u)) = (uint32_t)(edx);
L_0054ac46:  // mov edx, dword ptr [esp + 0xbc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_0054ac4d:  // mov dword ptr [esp + 0x248], eax
    M32((uint32_t)(esp + 0x248u)) = (uint32_t)(eax);
L_0054ac54:  // mov eax, dword ptr [esp + 0x138]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x138u)));
L_0054ac5b:  // mov dword ptr [esp + 0x24c], ecx
    M32((uint32_t)(esp + 0x24cu)) = (uint32_t)(ecx);
L_0054ac62:  // mov ecx, dword ptr [esp + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_0054ac69:  // mov dword ptr [esp + 0x250], edx
    M32((uint32_t)(esp + 0x250u)) = (uint32_t)(edx);
L_0054ac70:  // mov edx, dword ptr [esp + 0x140]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_0054ac77:  // mov dword ptr [esp + 0x254], eax
    M32((uint32_t)(esp + 0x254u)) = (uint32_t)(eax);
L_0054ac7e:  // mov dword ptr [esp + 0x258], ecx
    M32((uint32_t)(esp + 0x258u)) = (uint32_t)(ecx);
L_0054ac85:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0054ac89:  // fsub dword ptr [esp + 0x128]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x128u)));
L_0054ac90:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0054ac94:  // fsub dword ptr [esp + 0x12c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x12cu)));
L_0054ac9b:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0054ac9f:  // fsub dword ptr [esp + 0x130]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x130u)));
L_0054aca6:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0054acaa:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054acac:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0054acb0:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054acb2:  // mov ecx, dword ptr [esp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0054acb9:  // mov eax, dword ptr [esp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x144u)));
L_0054acc0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054acc2:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0054acc6:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054acc8:  // mov dword ptr [esp + 0x264], ecx
    M32((uint32_t)(esp + 0x264u)) = (uint32_t)(ecx);
L_0054accf:  // mov ecx, dword ptr [esp + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_0054acd6:  // mov dword ptr [esp + 0x25c], edx
    M32((uint32_t)(esp + 0x25cu)) = (uint32_t)(edx);
L_0054acdd:  // mov edx, dword ptr [esp + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_0054ace4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ace6:  // mov dword ptr [esp + 0x260], eax
    M32((uint32_t)(esp + 0x260u)) = (uint32_t)(eax);
L_0054aced:  // mov eax, dword ptr [esp + 0xc8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_0054acf4:  // mov dword ptr [esp + 0x270], ecx
    M32((uint32_t)(esp + 0x270u)) = (uint32_t)(ecx);
L_0054acfb:  // mov dword ptr [esp + 0x268], edx
    M32((uint32_t)(esp + 0x268u)) = (uint32_t)(edx);
L_0054ad02:  // fstp dword ptr [esp + 0x108]
    F32((uint32_t)(esp + 0x108u)) = lf32(ST(0));
    lpop(x);
L_0054ad09:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0054ad0d:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054ad0f:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0054ad13:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054ad15:  // mov edx, dword ptr [esp + 0x108]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_0054ad1c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0054ad21:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ad23:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0054ad27:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054ad29:  // lea esi, [esp + 0x244]
    esi = (uint32_t)((uint32_t)(esp + 0x244u));
L_0054ad30:  // lea edi, [esp + 0xd8]
    edi = (uint32_t)((uint32_t)(esp + 0xd8u));
L_0054ad37:  // mov dword ptr [esp + 0x26c], eax
    M32((uint32_t)(esp + 0x26cu)) = (uint32_t)(eax);
L_0054ad3e:  // mov dword ptr [esp + 0x68], edx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edx);
L_0054ad42:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ad44:  // mov edx, dword ptr [esp + 0x114]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x114u)));
L_0054ad4b:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054ad4d:  // fstp dword ptr [esp + 0x10c]
    F32((uint32_t)(esp + 0x10cu)) = lf32(ST(0));
    lpop(x);
L_0054ad54:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0054ad58:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054ad5a:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0054ad5e:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054ad60:  // mov eax, dword ptr [esp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10cu)));
L_0054ad67:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_0054ad6b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ad6d:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0054ad71:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054ad73:  // mov edx, dword ptr [esp + 0xc0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0054ad7a:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_0054ad7e:  // mov eax, dword ptr [esp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_0054ad85:  // mov dword ptr [esp + 0x1cc], edx
    M32((uint32_t)(esp + 0x1ccu)) = (uint32_t)(edx);
L_0054ad8c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054ad8e:  // mov dword ptr [esp + 0x1c4], eax
    M32((uint32_t)(esp + 0x1c4u)) = (uint32_t)(eax);
L_0054ad95:  // mov eax, dword ptr [esp + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0054ad9c:  // fstp dword ptr [esp + 0x110]
    F32((uint32_t)(esp + 0x110u)) = lf32(ST(0));
    lpop(x);
L_0054ada3:  // mov ecx, dword ptr [esp + 0x110]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x110u)));
L_0054adaa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054adac:  // mov dword ptr [esp + 0x70], ecx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ecx);
L_0054adb0:  // mov ecx, dword ptr [esp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x138u)));
L_0054adb7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054adb9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054adbb:  // mov dword ptr [esp + 0x1c8], ecx
    M32((uint32_t)(esp + 0x1c8u)) = (uint32_t)(ecx);
L_0054adc2:  // mov ecx, dword ptr [esp + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_0054adc9:  // mov edx, dword ptr [esp + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_0054add0:  // mov dword ptr [esp + 0x1d4], eax
    M32((uint32_t)(esp + 0x1d4u)) = (uint32_t)(eax);
L_0054add7:  // mov eax, dword ptr [esp + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_0054adde:  // mov dword ptr [esp + 0x1d8], ecx
    M32((uint32_t)(esp + 0x1d8u)) = (uint32_t)(ecx);
L_0054ade5:  // mov ecx, dword ptr [esp + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_0054adec:  // mov dword ptr [esp + 0x1e4], eax
    M32((uint32_t)(esp + 0x1e4u)) = (uint32_t)(eax);
L_0054adf3:  // mov eax, dword ptr [esp + 0x148]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x148u)));
L_0054adfa:  // mov dword ptr [esp + 0x1e8], ecx
    M32((uint32_t)(esp + 0x1e8u)) = (uint32_t)(ecx);
L_0054ae01:  // mov ecx, dword ptr [esp + 0x158]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x158u)));
L_0054ae08:  // mov dword ptr [esp + 0x1dc], edx
    M32((uint32_t)(esp + 0x1dcu)) = (uint32_t)(edx);
L_0054ae0f:  // mov edx, dword ptr [esp + 0xc8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_0054ae16:  // mov dword ptr [esp + 0x184], eax
    M32((uint32_t)(esp + 0x184u)) = (uint32_t)(eax);
L_0054ae1d:  // mov eax, dword ptr [esp + 0x14c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14cu)));
L_0054ae24:  // mov dword ptr [esp + 0x188], ecx
    M32((uint32_t)(esp + 0x188u)) = (uint32_t)(ecx);
L_0054ae2b:  // mov ecx, dword ptr [esp + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_0054ae32:  // mov dword ptr [esp + 0x1ec], edx
    M32((uint32_t)(esp + 0x1ecu)) = (uint32_t)(edx);
L_0054ae39:  // mov edx, dword ptr [esp + 0x168]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x168u)));
L_0054ae40:  // mov dword ptr [esp + 0x194], eax
    M32((uint32_t)(esp + 0x194u)) = (uint32_t)(eax);
L_0054ae47:  // mov eax, dword ptr [esp + 0x150]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x150u)));
L_0054ae4e:  // mov dword ptr [esp + 0x198], ecx
    M32((uint32_t)(esp + 0x198u)) = (uint32_t)(ecx);
L_0054ae55:  // mov ecx, dword ptr [esp + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_0054ae5c:  // mov dword ptr [esp + 0x18c], edx
    M32((uint32_t)(esp + 0x18cu)) = (uint32_t)(edx);
L_0054ae63:  // mov edx, dword ptr [esp + 0x16c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x16cu)));
L_0054ae6a:  // mov dword ptr [esp + 0x1a4], eax
    M32((uint32_t)(esp + 0x1a4u)) = (uint32_t)(eax);
L_0054ae71:  // lea eax, [esp + 0x184]
    eax = (uint32_t)((uint32_t)(esp + 0x184u));
L_0054ae78:  // mov dword ptr [esp + 0x1a8], ecx
    M32((uint32_t)(esp + 0x1a8u)) = (uint32_t)(ecx);
L_0054ae7f:  // mov dword ptr [esp + 0x19c], edx
    M32((uint32_t)(esp + 0x19cu)) = (uint32_t)(edx);
L_0054ae86:  // mov edx, dword ptr [esp + 0x170]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x170u)));
L_0054ae8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054ae8e:  // lea ecx, [esp + 0x188]
    ecx = (uint32_t)((uint32_t)(esp + 0x188u));
L_0054ae95:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054ae97:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054ae98:  // mov dword ptr [esp + 0x1fc], 0
    M32((uint32_t)(esp + 0x1fcu)) = (uint32_t)(0x0u);
L_0054aea3:  // mov dword ptr [esp + 0x1ec], 0
    M32((uint32_t)(esp + 0x1ecu)) = (uint32_t)(0x0u);
L_0054aeae:  // mov dword ptr [esp + 0x1dc], 0
    M32((uint32_t)(esp + 0x1dcu)) = (uint32_t)(0x0u);
L_0054aeb9:  // mov dword ptr [esp + 0x208], 0
    M32((uint32_t)(esp + 0x208u)) = (uint32_t)(0x0u);
L_0054aec4:  // mov dword ptr [esp + 0x204], 0
    M32((uint32_t)(esp + 0x204u)) = (uint32_t)(0x0u);
L_0054aecf:  // mov dword ptr [esp + 0x200], 0
    M32((uint32_t)(esp + 0x200u)) = (uint32_t)(0x0u);
L_0054aeda:  // mov dword ptr [esp + 0x20c], 0x3f800000
    M32((uint32_t)(esp + 0x20cu)) = (uint32_t)(0x3f800000u);
L_0054aee5:  // mov dword ptr [esp + 0x1b8], edx
    M32((uint32_t)(esp + 0x1b8u)) = (uint32_t)(edx);
L_0054aeec:  // mov dword ptr [esp + 0x1bc], 0
    M32((uint32_t)(esp + 0x1bcu)) = (uint32_t)(0x0u);
L_0054aef7:  // mov dword ptr [esp + 0x1ac], 0
    M32((uint32_t)(esp + 0x1acu)) = (uint32_t)(0x0u);
L_0054af02:  // mov dword ptr [esp + 0x19c], 0
    M32((uint32_t)(esp + 0x19cu)) = (uint32_t)(0x0u);
L_0054af0d:  // mov dword ptr [esp + 0x1c8], 0
    M32((uint32_t)(esp + 0x1c8u)) = (uint32_t)(0x0u);
L_0054af18:  // mov dword ptr [esp + 0x1c4], 0
    M32((uint32_t)(esp + 0x1c4u)) = (uint32_t)(0x0u);
L_0054af23:  // mov dword ptr [esp + 0x1c0], 0
    M32((uint32_t)(esp + 0x1c0u)) = (uint32_t)(0x0u);
L_0054af2e:  // mov dword ptr [esp + 0x1cc], 0x3f800000
    M32((uint32_t)(esp + 0x1ccu)) = (uint32_t)(0x3f800000u);
L_0054af39:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054af3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054af3e:  // mov edx, dword ptr [esp + 0x70]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0054af42:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0054af46:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0054af4a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054af4b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054af4c:  // lea edx, [esp + 0x2ec]
    edx = (uint32_t)((uint32_t)(esp + 0x2ecu));
L_0054af53:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054af54:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054af55:  // call 0x577267
    t0 = 0x00577267u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054af5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054af5a:  // mov eax, dword ptr [esp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0054af61:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_0054af68:  // mov edx, dword ptr [esp + 0x9c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_0054af6f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054af70:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054af71:  // lea eax, [esp + 0x27c]
    eax = (uint32_t)((uint32_t)(esp + 0x27cu));
L_0054af78:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054af79:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054af7a:  // call 0x577267
    t0 = 0x00577267u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054af7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054af7f:  // lea ecx, [esp + 0x274]
    ecx = (uint32_t)((uint32_t)(esp + 0x274u));
L_0054af86:  // lea edx, [esp + 0x274]
    edx = (uint32_t)((uint32_t)(esp + 0x274u));
L_0054af8d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054af8e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054af90:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054af91:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054af96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054af96:  // lea eax, [esp + 0x184]
    eax = (uint32_t)((uint32_t)(esp + 0x184u));
L_0054af9d:  // lea ecx, [esp + 0x274]
    ecx = (uint32_t)((uint32_t)(esp + 0x274u));
L_0054afa4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054afa5:  // lea edx, [esp + 0x3e8]
    edx = (uint32_t)((uint32_t)(esp + 0x3e8u));
L_0054afac:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054afad:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054afae:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054afb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054afb3:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0054afb8:  // lea esi, [esp + 0x3e4]
    esi = (uint32_t)((uint32_t)(esp + 0x3e4u));
L_0054afbf:  // lea edi, [esp + 0x364]
    edi = (uint32_t)((uint32_t)(esp + 0x364u));
L_0054afc6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054afc8:  // lea eax, [esp + 0x1c4]
    eax = (uint32_t)((uint32_t)(esp + 0x1c4u));
L_0054afcf:  // lea ecx, [esp + 0x364]
    ecx = (uint32_t)((uint32_t)(esp + 0x364u));
L_0054afd6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054afd7:  // lea edx, [esp + 0x428]
    edx = (uint32_t)((uint32_t)(esp + 0x428u));
L_0054afde:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054afdf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054afe0:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054afe5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054afe5:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0054afea:  // lea esi, [esp + 0x424]
    esi = (uint32_t)((uint32_t)(esp + 0x424u));
L_0054aff1:  // lea edi, [esp + 0x324]
    edi = (uint32_t)((uint32_t)(esp + 0x324u));
L_0054aff8:  // lea eax, [esp + 0x2e4]
    eax = (uint32_t)((uint32_t)(esp + 0x2e4u));
L_0054afff:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054b001:  // lea ecx, [esp + 0x324]
    ecx = (uint32_t)((uint32_t)(esp + 0x324u));
L_0054b008:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b009:  // lea edx, [esp + 0x3a8]
    edx = (uint32_t)((uint32_t)(esp + 0x3a8u));
L_0054b010:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b011:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054b012:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b017u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b017:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0054b01e:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0054b01f:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0054b021:  // add eax, 0x40
    t0 = ladd<32>(eax, 0x40u, f);
    eax = (uint32_t)(t0);
L_0054b024:  // mov dword ptr [esp + 0xac], eax
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(eax);
L_0054b02b:  // mov eax, dword ptr [ebp + 0xc0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xc0u)));
L_0054b031:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0054b036:  // lea esi, [esp + 0x3a4]
    esi = (uint32_t)((uint32_t)(esp + 0x3a4u));
L_0054b03d:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_0054b03f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054b041:  // jl 0x54a727
    if ((f.sf != f.of)) goto L_0054a727;
L_0054b047:  // mov al, byte ptr [0x63c108]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x63c108u))) & 0xffu);
L_0054b04c:  // mov ebx, dword ptr [0x704e48]
    ebx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_0054b052:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0054b054:  // je 0x54b289
    if (f.zf) goto L_0054b289;
L_0054b05a:  // mov eax, dword ptr [ebp + 0xc0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xc0u)));
L_0054b060:  // cmp eax, 0x19
    t0 = lsub<32>(eax, 0x19u, f);
L_0054b063:  // jg 0x54b289
    if ((!f.zf && f.sf == f.of)) goto L_0054b289;
L_0054b069:  // mov ecx, dword ptr [0x704e60]
    ecx = (uint32_t)(M32((uint32_t)(0x704e60u)));
L_0054b06f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0054b071:  // jne 0x54b289
    if (!f.zf) goto L_0054b289;
L_0054b077:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0054b079:  // je 0x54b084
    if (f.zf) goto L_0054b084;
L_0054b07b:  // cmp ebx, 4
    t0 = lsub<32>(ebx, 0x4u, f);
L_0054b07e:  // jne 0x54b289
    if (!f.zf) goto L_0054b289;
L_0054b084:  // test byte ptr [0x89ce54], 0x10
    t0 = llog<8>(M8((uint32_t)(0x89ce54u)) & 0x10u, f);
L_0054b08b:  // jne 0x54b289
    if (!f.zf) goto L_0054b289;
L_0054b091:  // mov dword ptr [0x9c68cc], eax
    M32((uint32_t)(0x9c68ccu)) = (uint32_t)(eax);
L_0054b096:  // mov ecx, dword ptr [ebp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xc0u)));
L_0054b09c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054b09e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0054b0a0:  // jle 0x54b225
    if ((f.zf || f.sf != f.of)) goto L_0054b225;
L_0054b0a6:  // lea edx, [esp + 0x564]
    edx = (uint32_t)((uint32_t)(esp + 0x564u));
L_0054b0ad:  // mov ebx, 0x9c69d4
    ebx = (uint32_t)(0x9c69d4u);
L_0054b0b2:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0054b0b7:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0054b0b9:  // lea edi, [esp + 0x1c4]
    edi = (uint32_t)((uint32_t)(esp + 0x1c4u));
L_0054b0c0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054b0c1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054b0c3:  // fld dword ptr [esp + 0x1c4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1c4u)));
L_0054b0ca:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b0d0:  // fstp dword ptr [esp + 0x184]
    F32((uint32_t)(esp + 0x184u)) = lf32(ST(0));
    lpop(x);
L_0054b0d7:  // fld dword ptr [esp + 0x1c8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1c8u)));
L_0054b0de:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b0e4:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0054b0e9:  // lea esi, [esp + 0x184]
    esi = (uint32_t)((uint32_t)(esp + 0x184u));
L_0054b0f0:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0054b0f2:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_0054b0f5:  // fstp dword ptr [esp + 0x188]
    F32((uint32_t)(esp + 0x188u)) = lf32(ST(0));
    lpop(x);
L_0054b0fc:  // fld dword ptr [esp + 0x1cc]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1ccu)));
L_0054b103:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b109:  // add ebx, 0x40
    t0 = ladd<32>(ebx, 0x40u, f);
    ebx = (uint32_t)(t0);
L_0054b10c:  // fstp dword ptr [esp + 0x18c]
    F32((uint32_t)(esp + 0x18cu)) = lf32(ST(0));
    lpop(x);
L_0054b113:  // fld dword ptr [esp + 0x1d0]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1d0u)));
L_0054b11a:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b120:  // fstp dword ptr [esp + 0x190]
    F32((uint32_t)(esp + 0x190u)) = lf32(ST(0));
    lpop(x);
L_0054b127:  // fld dword ptr [esp + 0x1d4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1d4u)));
L_0054b12e:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b134:  // fstp dword ptr [esp + 0x194]
    F32((uint32_t)(esp + 0x194u)) = lf32(ST(0));
    lpop(x);
L_0054b13b:  // fld dword ptr [esp + 0x1d8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1d8u)));
L_0054b142:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b148:  // fstp dword ptr [esp + 0x198]
    F32((uint32_t)(esp + 0x198u)) = lf32(ST(0));
    lpop(x);
L_0054b14f:  // fld dword ptr [esp + 0x1dc]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1dcu)));
L_0054b156:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b15c:  // fstp dword ptr [esp + 0x19c]
    F32((uint32_t)(esp + 0x19cu)) = lf32(ST(0));
    lpop(x);
L_0054b163:  // fld dword ptr [esp + 0x1e0]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1e0u)));
L_0054b16a:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b170:  // fstp dword ptr [esp + 0x1a0]
    F32((uint32_t)(esp + 0x1a0u)) = lf32(ST(0));
    lpop(x);
L_0054b177:  // fld dword ptr [esp + 0x1e4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1e4u)));
L_0054b17e:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b184:  // fstp dword ptr [esp + 0x1a4]
    F32((uint32_t)(esp + 0x1a4u)) = lf32(ST(0));
    lpop(x);
L_0054b18b:  // fld dword ptr [esp + 0x1e8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1e8u)));
L_0054b192:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b198:  // fstp dword ptr [esp + 0x1a8]
    F32((uint32_t)(esp + 0x1a8u)) = lf32(ST(0));
    lpop(x);
L_0054b19f:  // fld dword ptr [esp + 0x1ec]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1ecu)));
L_0054b1a6:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b1ac:  // fstp dword ptr [esp + 0x1ac]
    F32((uint32_t)(esp + 0x1acu)) = lf32(ST(0));
    lpop(x);
L_0054b1b3:  // fld dword ptr [esp + 0x1f0]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f0u)));
L_0054b1ba:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b1c0:  // fstp dword ptr [esp + 0x1b0]
    F32((uint32_t)(esp + 0x1b0u)) = lf32(ST(0));
    lpop(x);
L_0054b1c7:  // fld dword ptr [esp + 0x1f4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f4u)));
L_0054b1ce:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b1d4:  // fstp dword ptr [esp + 0x1b4]
    F32((uint32_t)(esp + 0x1b4u)) = lf32(ST(0));
    lpop(x);
L_0054b1db:  // fld dword ptr [esp + 0x1f8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f8u)));
L_0054b1e2:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b1e8:  // fstp dword ptr [esp + 0x1b8]
    F32((uint32_t)(esp + 0x1b8u)) = lf32(ST(0));
    lpop(x);
L_0054b1ef:  // fld dword ptr [esp + 0x1fc]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1fcu)));
L_0054b1f6:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b1fc:  // fstp dword ptr [esp + 0x1bc]
    F32((uint32_t)(esp + 0x1bcu)) = lf32(ST(0));
    lpop(x);
L_0054b203:  // fld dword ptr [esp + 0x200]
    lpush(x, (long double)F32((uint32_t)(esp + 0x200u)));
L_0054b20a:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b210:  // fstp dword ptr [esp + 0x1c0]
    F32((uint32_t)(esp + 0x1c0u)) = lf32(ST(0));
    lpop(x);
L_0054b217:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0054b219:  // cmp eax, dword ptr [ebp + 0xc0]
    t0 = lsub<32>(eax, M32((uint32_t)(ebp + 0xc0u)), f);
L_0054b21f:  // jl 0x54b0b2
    if ((f.sf != f.of)) goto L_0054b0b2;
L_0054b225:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054b227:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0054b22c:  // call 0x5512f0
    t0 = 0x005512f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b231u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b231:  // mov ecx, dword ptr [esp + 0x1e78]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1e78u)));
L_0054b238:  // mov edx, dword ptr [esp + 0x1e8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1e8cu)));
L_0054b23f:  // lea eax, [esp + 0x1e68]
    eax = (uint32_t)((uint32_t)(esp + 0x1e68u));
L_0054b246:  // mov byte ptr [0x9c68c8], 1
    M8((uint32_t)(0x9c68c8u)) = (uint8_t)(0x1u);
L_0054b24d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b24e:  // mov eax, dword ptr [esp + 0x1e84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1e84u)));
L_0054b255:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b256:  // mov byte ptr [0x9c690f], 1
    M8((uint32_t)(0x9c690fu)) = (uint8_t)(0x1u);
L_0054b25d:  // mov ecx, dword ptr [ebp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x138u)));
L_0054b263:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054b264:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b265:  // call 0x54d530
    t0 = 0x0054d530u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b26au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b26a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054b26c:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0054b271:  // mov byte ptr [0x9c68c8], 0
    M8((uint32_t)(0x9c68c8u)) = (uint8_t)(0x0u);
L_0054b278:  // mov byte ptr [0x9c690f], 1
    M8((uint32_t)(0x9c690fu)) = (uint8_t)(0x1u);
L_0054b27f:  // call 0x5512f0
    t0 = 0x005512f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b284u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b284:  // jmp 0x54b7e3
    goto L_0054b7e3;
L_0054b289:  // mov ecx, dword ptr [ebp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_0054b28f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054b291:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0054b293:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_0054b297:  // jle 0x54b5d6
    if ((f.zf || f.sf != f.of)) goto L_0054b5d6;
L_0054b29d:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0054b2a1:  // jmp 0x54b2a9
    goto L_0054b2a9;
L_0054b2a3:  // mov ebx, dword ptr [0x704e48]
    ebx = (uint32_t)(M32((uint32_t)(0x704e48u)));
L_0054b2a9:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054b2ad:  // mov eax, dword ptr [ebp + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x134u)));
L_0054b2b3:  // mov edx, dword ptr [esp + 0xd0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_0054b2ba:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0054b2bc:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054b2bf:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0054b2c2:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0054b2c4:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054b2c6:  // mov dword ptr [esp + 0x78], ecx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ecx);
L_0054b2ca:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054b2cd:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_0054b2d1:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054b2d4:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_0054b2db:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0054b2de:  // mov dword ptr [esp + 0x94], ecx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(ecx);
L_0054b2e5:  // mov edx, dword ptr [esi + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_0054b2e8:  // mov dword ptr [esp + 0x98], edx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(edx);
L_0054b2ef:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0054b2f1:  // mov dword ptr [esp + 0x84], eax
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(eax);
L_0054b2f8:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0054b2fb:  // mov eax, dword ptr [0x63012c]
    eax = (uint32_t)(M32((uint32_t)(0x63012cu)));
L_0054b300:  // mov dword ptr [esp + 0x88], ecx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ecx);
L_0054b307:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0054b30a:  // cmp eax, 0xff
    t0 = lsub<32>(eax, 0xffu, f);
L_0054b30f:  // mov dword ptr [esp + 0x8c], edx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edx);
L_0054b316:  // mov edi, dword ptr [esi + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_0054b319:  // mov dword ptr [esp + 0x90], edi
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(edi);
L_0054b320:  // je 0x54b34f
    if (f.zf) goto L_0054b34f;
L_0054b322:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0054b324:  // and edi, 0xffffff
    t0 = llog<32>(edi & 0xffffffu, f);
    edi = (uint32_t)(t0);
L_0054b32a:  // shr ecx, 0x18
    t0 = lshr<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0054b32d:  // imul ecx, eax
    t0 = limul32(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0054b330:  // mov eax, 0x80808081
    eax = (uint32_t)(0x80808081u);
L_0054b335:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0054b337:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0054b339:  // sar edx, 7
    t0 = lsar<32>(edx, 0x7u, f);
    edx = (uint32_t)(t0);
L_0054b33c:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0054b33e:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0054b341:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0054b343:  // shl edx, 0x18
    t0 = lshl<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_0054b346:  // or edx, edi
    t0 = llog<32>(edx | edi, f);
    edx = (uint32_t)(t0);
L_0054b348:  // mov dword ptr [esp + 0x90], edx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(edx);
L_0054b34f:  // cmp ebx, 1
    t0 = lsub<32>(ebx, 0x1u, f);
L_0054b352:  // jne 0x54b369
    if (!f.zf) goto L_0054b369;
L_0054b354:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0054b359:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054b35a:  // call 0x4b52c0
    t0 = 0x004b52c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b35fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b35f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0054b362:  // mov dword ptr [esp + 0x90], eax
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(eax);
L_0054b369:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_0054b370:  // mov ecx, dword ptr [esp + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0054b374:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_0054b378:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0054b37c:  // mov eax, dword ptr [esp + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0054b383:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0054b387:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_0054b38e:  // mov dword ptr [esp + 0x120], eax
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(eax);
L_0054b395:  // mov al, byte ptr [0x89ce54]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89ce54u))) & 0xffu);
L_0054b39a:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0054b39e:  // mov edx, dword ptr [esp + 0x88]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_0054b3a5:  // mov dword ptr [esp + 0x118], ecx
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(ecx);
L_0054b3ac:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_0054b3ae:  // mov dword ptr [esp + 0x11c], edx
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(edx);
L_0054b3b5:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_0054b3bd:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_0054b3c5:  // mov dword ptr [esp + 0x80], 0
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x0u);
L_0054b3d0:  // jne 0x54b670
    if (!f.zf) goto L_0054b670;
L_0054b3d6:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054b3d9:  // mov edx, dword ptr [ebp + 0xd8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xd8u)));
L_0054b3df:  // mov eax, dword ptr [edx + ecx*4]
    eax = (uint32_t)(M32((uint32_t)(edx + ecx * 4u)));
L_0054b3e2:  // cmp dword ptr [eax], -1
    t0 = lsub<32>(M32((uint32_t)(eax)), 0xffffffffu, f);
L_0054b3e5:  // je 0x54b650
    if (f.zf) goto L_0054b650;
L_0054b3eb:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054b3ed:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054b3f0:  // mov edx, dword ptr [ebp + 0xd8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xd8u)));
L_0054b3f6:  // mov eax, dword ptr [edx + ecx*4]
    eax = (uint32_t)(M32((uint32_t)(edx + ecx * 4u)));
L_0054b3f9:  // mov ecx, dword ptr [eax + edi]
    ecx = (uint32_t)(M32((uint32_t)(eax + edi)));
L_0054b3fc:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0054b400:  // shl ecx, 6
    t0 = lshl<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0054b403:  // lea edx, [esp + ecx + 0x564]
    edx = (uint32_t)((uint32_t)(esp + ecx + 0x564u));
L_0054b40a:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_0054b411:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054b412:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b413:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b414:  // call 0x576161
    t0 = 0x00576161u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b419u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b419:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054b41c:  // mov eax, dword ptr [ebp + 0xd8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xd8u)));
L_0054b422:  // mov ecx, dword ptr [eax + edx*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_0054b425:  // mov edx, dword ptr [ecx + edi]
    edx = (uint32_t)(M32((uint32_t)(ecx + edi)));
L_0054b428:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_0054b42f:  // shl edx, 6
    t0 = lshl<32>(edx, 0x6u, f);
    edx = (uint32_t)(t0);
L_0054b432:  // lea eax, [esp + edx + 0x564]
    eax = (uint32_t)((uint32_t)(esp + edx + 0x564u));
L_0054b439:  // lea edx, [esp + 0xb0]
    edx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0054b440:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b441:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b442:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054b443:  // call 0x576161
    t0 = 0x00576161u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b448u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b448:  // fld dword ptr [esp + 0x138]
    lpush(x, (long double)F32((uint32_t)(esp + 0x138u)));
L_0054b44f:  // fadd dword ptr [esp + 0x78]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x78u)));
L_0054b453:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0054b456:  // cmp edi, 0xc
    t0 = lsub<32>(edi, 0xcu, f);
L_0054b459:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_0054b45d:  // fld dword ptr [esp + 0x13c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x13cu)));
L_0054b464:  // fadd dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x7cu)));
L_0054b468:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0054b46c:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_0054b473:  // fadd dword ptr [esp + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x80u)));
L_0054b47a:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0054b481:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_0054b488:  // fadd dword ptr [esp + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x84u)));
L_0054b48f:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0054b496:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_0054b49d:  // fadd dword ptr [esp + 0x88]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x88u)));
L_0054b4a4:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_0054b4ab:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_0054b4b2:  // fadd dword ptr [esp + 0x8c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x8cu)));
L_0054b4b9:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_0054b4c0:  // jl 0x54b3ed
    if ((f.sf != f.of)) goto L_0054b3ed;
L_0054b4c6:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_0054b4ca:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b4d0:  // fstp dword ptr [esp + 0xc0]
    F32((uint32_t)(esp + 0xc0u)) = lf32(ST(0));
    lpop(x);
L_0054b4d7:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_0054b4db:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b4e1:  // mov eax, dword ptr [esp + 0xc0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0054b4e8:  // mov dword ptr [esp + 0x78], eax
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(eax);
L_0054b4ec:  // fstp dword ptr [esp + 0xc4]
    F32((uint32_t)(esp + 0xc4u)) = lf32(ST(0));
    lpop(x);
L_0054b4f3:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_0054b4fa:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_0054b500:  // mov ecx, dword ptr [esp + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_0054b507:  // mov dword ptr [esp + 0x7c], ecx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ecx);
L_0054b50b:  // fstp dword ptr [esp + 0xc8]
    F32((uint32_t)(esp + 0xc8u)) = lf32(ST(0));
    lpop(x);
L_0054b512:  // mov edx, dword ptr [esp + 0xc8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_0054b519:  // mov dword ptr [esp + 0x80], edx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(edx);
L_0054b520:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_0054b527:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_0054b52e:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_0054b535:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_0054b53c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0054b53e:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0054b540:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054b542:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0054b544:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054b546:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054b548:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0054b54a:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0054b54c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054b54e:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0054b554:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054b556:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0054b559:  // jne 0x54b591
    if (!f.zf) goto L_0054b591;
L_0054b55b:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0054b561:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_0054b568:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054b56a:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0054b571:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_0054b578:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054b57a:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_0054b581:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_0054b588:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0054b58a:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_0054b591:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054b593:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0054b596:  // mov ecx, dword ptr [ebp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054b59c:  // lea edx, [esp + 0x78]
    edx = (uint32_t)((uint32_t)(esp + 0x78u));
L_0054b5a0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054b5a2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054b5a3:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054b5a5:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054b5a8:  // mov ecx, dword ptr [edx + eax*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + eax * 4u + 0x4u)));
L_0054b5ac:  // call 0x500a10
    t0 = 0x00500a10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b5b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b5b1:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0054b5b5:  // mov dword ptr [esi + 0x48], eax
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(eax);
L_0054b5b8:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0054b5bc:  // mov ecx, dword ptr [ebp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_0054b5c2:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0054b5c3:  // add edx, 0x60
    t0 = ladd<32>(edx, 0x60u, f);
    edx = (uint32_t)(t0);
L_0054b5c6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0054b5c8:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_0054b5cc:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0054b5d0:  // jl 0x54b2a3
    if ((f.sf != f.of)) goto L_0054b2a3;
L_0054b5d6:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_0054b5dc:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054b5de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054b5e0:  // jle 0x54b63f
    if ((f.zf || f.sf != f.of)) goto L_0054b63f;
L_0054b5e2:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054b5e4:  // mov edx, dword ptr [ebp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_0054b5ea:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0054b5ec:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0054b5ee:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0054b5f0:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0054b5f2:  // mov dx, word ptr [ecx + 0x48]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + 0x48u))) & 0xffffu);
L_0054b5f6:  // mov word ptr [esp + 0x24], dx
    M16((uint32_t)(esp + 0x24u)) = (uint16_t)((edx & 0xffffu));
L_0054b5fb:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054b5fe:  // mov dx, word ptr [ecx + 0x48]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + 0x48u))) & 0xffffu);
L_0054b602:  // mov word ptr [esp + 0x26], dx
    M16((uint32_t)(esp + 0x26u)) = (uint16_t)((edx & 0xffffu));
L_0054b607:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0054b60a:  // mov dx, word ptr [ecx + 0x48]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + 0x48u))) & 0xffffu);
L_0054b60e:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0054b612:  // mov word ptr [esp + 0x28], dx
    M16((uint32_t)(esp + 0x28u)) = (uint16_t)((edx & 0xffffu));
L_0054b617:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0054b619:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b61a:  // mov ecx, dword ptr [ebp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054b620:  // mov eax, dword ptr [edx + 0x30]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x30u)));
L_0054b623:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0054b625:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0054b628:  // mov ecx, dword ptr [edx + eax*4 + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + eax * 4u + 0x4u)));
L_0054b62c:  // call 0x500ac0
    t0 = 0x00500ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b631u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b631:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_0054b637:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0054b638:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_0054b63b:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0054b63d:  // jl 0x54b5e4
    if ((f.sf != f.of)) goto L_0054b5e4;
L_0054b63f:  // mov eax, dword ptr [ebp + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x128u)));
L_0054b645:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b646:  // call 0x500d10
    t0 = 0x00500d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b64bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b64b:  // jmp 0x54b7e0
    goto L_0054b7e0;
L_0054b650:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054b654:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054b658:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054b65c:  // mov dword ptr [esp + 0x78], eax
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(eax);
L_0054b660:  // mov dword ptr [esp + 0x7c], ecx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ecx);
L_0054b664:  // mov dword ptr [esp + 0x80], edx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(edx);
L_0054b66b:  // jmp 0x54b593
    goto L_0054b593;
L_0054b670:  // mov eax, dword ptr [ebp + 0xc0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xc0u)));
L_0054b676:  // xor cl, cl
    t0 = llog<8>((ecx & 0xffu) ^ (ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0054b678:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0054b67a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054b67c:  // jle 0x54b764
    if ((f.zf || f.sf != f.of)) goto L_0054b764;
L_0054b682:  // lea ebx, [esp + 0x564]
    ebx = (uint32_t)((uint32_t)(esp + 0x564u));
L_0054b689:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0054b68c:  // mov edx, dword ptr [ebp + 0xd4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xd4u)));
L_0054b692:  // mov eax, dword ptr [edx + eax*4]
    eax = (uint32_t)(M32((uint32_t)(edx + eax * 4u)));
L_0054b695:  // fld dword ptr [eax + edi*4]
    lpush(x, (long double)F32((uint32_t)(eax + edi * 4u)));
L_0054b698:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_0054b69c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0054b6a2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054b6a4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054b6a7:  // jne 0x54b74a
    if (!f.zf) goto L_0054b74a;
L_0054b6ad:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0054b6b1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054b6b2:  // lea edx, [esp + 0xa0]
    edx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_0054b6b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b6ba:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054b6bb:  // call 0x576161
    t0 = 0x00576161u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b6c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b6c0:  // lea eax, [esp + 0x118]
    eax = (uint32_t)((uint32_t)(esp + 0x118u));
L_0054b6c7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054b6c8:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_0054b6cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b6cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b6ce:  // call 0x576161
    t0 = 0x00576161u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b6d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b6d3:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_0054b6da:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0054b6de:  // mov cl, 1
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_0054b6e0:  // fadd dword ptr [esp + 0x78]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x78u)));
L_0054b6e4:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_0054b6e8:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0054b6ef:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0054b6f3:  // fadd dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x7cu)));
L_0054b6f7:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_0054b6fb:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_0054b702:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0054b706:  // fadd dword ptr [esp + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x80u)));
L_0054b70d:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0054b714:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0054b718:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0054b71c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0054b71e:  // fadd dword ptr [esp + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x84u)));
L_0054b725:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0054b72c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0054b72e:  // fadd dword ptr [esp + 0x88]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x88u)));
L_0054b735:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_0054b73c:  // fadd dword ptr [esp + 0x8c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x8cu)));
L_0054b743:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_0054b74a:  // mov eax, dword ptr [ebp + 0xc0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xc0u)));
L_0054b750:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0054b751:  // add ebx, 0x40
    t0 = ladd<32>(ebx, 0x40u, f);
    ebx = (uint32_t)(t0);
L_0054b754:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0054b756:  // jl 0x54b689
    if ((f.sf != f.of)) goto L_0054b689;
L_0054b75c:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0054b75e:  // jne 0x54b520
    if (!f.zf) goto L_0054b520;
L_0054b764:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054b768:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0054b76c:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054b770:  // mov dword ptr [esp + 0x78], edx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(edx);
L_0054b774:  // mov edx, dword ptr [esp + 0x118]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x118u)));
L_0054b77b:  // mov dword ptr [esp + 0x7c], eax
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(eax);
L_0054b77f:  // mov eax, dword ptr [esp + 0x11c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x11cu)));
L_0054b786:  // mov dword ptr [esp + 0x80], ecx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ecx);
L_0054b78d:  // mov ecx, dword ptr [esp + 0x120]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x120u)));
L_0054b794:  // mov dword ptr [esp + 0x84], edx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(edx);
L_0054b79b:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_0054b7a2:  // mov dword ptr [esp + 0x8c], ecx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(ecx);
L_0054b7a9:  // jmp 0x54b593
    goto L_0054b593;
L_0054b7ae:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_0054b7b1:  // je 0x54b7e3
    if (f.zf) goto L_0054b7e3;
L_0054b7b3:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0054b7b6:  // je 0x54b7e3
    if (f.zf) goto L_0054b7e3;
L_0054b7b8:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_0054b7bb:  // je 0x54b7e3
    if (f.zf) goto L_0054b7e3;
L_0054b7bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054b7be:  // lea ecx, [esp + 0x468]
    ecx = (uint32_t)((uint32_t)(esp + 0x468u));
L_0054b7c5:  // push 0x651160
    t0 = 0x651160u; esp -= 4; M32(esp) = t0;
L_0054b7ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054b7cb:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b7d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b7d0:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0054b7d3:  // lea edx, [esp + 0x464]
    edx = (uint32_t)((uint32_t)(esp + 0x464u));
L_0054b7da:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054b7db:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b7e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b7e0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0054b7e3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0054b7e5:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_0054b7e7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0054b7ec:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054b7f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054b7f1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0054b7f2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0054b7f3:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054b7f4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054b7f5:  // add esp, 0x1e54
    t0 = ladd<32>(esp, 0x1e54u, f);
    esp = (uint32_t)(t0);
L_0054b7fb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00549570, 00549570)
