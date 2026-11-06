// lifted from 0040b6d0 (FUN_0040b6d0, 2290 bytes, 652 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0040b6d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0040b6d0;
L_0040b6d0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0040b6d2:  // push 0x5d1268
    t0 = 0x5d1268u; esp -= 4; M32(esp) = t0;
L_0040b6d7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0040b6dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040b6de:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0040b6e5:  // sub esp, 0xc0
    t0 = lsub<32>(esp, 0xc0u, f);
    esp = (uint32_t)(t0);
L_0040b6eb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040b6ec:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0040b6ed:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0040b6ef:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040b6f0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040b6f1:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0040b6f4:  // call dword ptr [eax + 0x1d4]
    t0 = M32((uint32_t)(eax + 0x1d4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b6fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b6fa:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_0040b6fd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040b6fe:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0040b700:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040b703:  // fld dword ptr [ebp + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x50u)));
L_0040b706:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040b707:  // mov dword ptr [esp + 0x70], esi
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(esi);
L_0040b70b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040b70e:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_0040b711:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040b712:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_0040b716:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040b719:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b71eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b71e:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0040b722:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0040b726:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0040b728:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040b729:  // fchs 
    ST(0) = -ST(0);
L_0040b72b:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040b72f:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_0040b732:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040b735:  // fld dword ptr [ebp + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x50u)));
L_0040b738:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040b739:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040b73c:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_0040b73f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040b740:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_0040b744:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040b747:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b74cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b74c:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_0040b750:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b755u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b755:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0040b75b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040b75d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040b760:  // jne 0x40b77d
    if (!f.zf) goto L_0040b77d;
L_0040b762:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0040b766:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_0040b768:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0040b76c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040b76e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040b772:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b777u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b777:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0040b77b:  // jmp 0x40b787
    goto L_0040b787;
L_0040b77d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040b77f:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0040b787:  // lea edi, [ebp + 0x1c]
    edi = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_0040b78a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0040b78d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0040b78f:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0040b791:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0040b793:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0040b795:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0040b798:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0040b79b:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0040b79e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0040b7a1:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0040b7a4:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0040b7a7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040b7a9:  // call 0x5096a0
    t0 = 0x005096a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b7aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b7ae:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0040b7b1:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0040b7b3:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0040b7b5:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_0040b7b7:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0040b7bb:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0040b7bd:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0040b7c0:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_0040b7c3:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0040b7c6:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0040b7c9:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0040b7cc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040b7ce:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0040b7d1:  // call 0x5099a0
    t0 = 0x005099a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b7d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b7d6:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0040b7da:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0040b7dc:  // lea ecx, [ebp + 0x4e0]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4e0u));
L_0040b7e2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040b7e3:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b7e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b7e8:  // cmp dword ptr [0x8a9ab8], ebx
    t0 = lsub<32>(M32((uint32_t)(0x8a9ab8u)), ebx, f);
L_0040b7ee:  // jne 0x40b80d
    if (!f.zf) goto L_0040b80d;
L_0040b7f0:  // mov dword ptr [ebp + 0x4e8], ebx
    M32((uint32_t)(ebp + 0x4e8u)) = (uint32_t)(ebx);
L_0040b7f6:  // mov dword ptr [ebp + 0x4f4], ebx
    M32((uint32_t)(ebp + 0x4f4u)) = (uint32_t)(ebx);
L_0040b7fc:  // mov dword ptr [ebp + 0x4ec], ebx
    M32((uint32_t)(ebp + 0x4ecu)) = (uint32_t)(ebx);
L_0040b802:  // mov dword ptr [ebp + 0x4f8], ebx
    M32((uint32_t)(ebp + 0x4f8u)) = (uint32_t)(ebx);
L_0040b808:  // jmp 0x40bfa7
    goto L_0040bfa7;
L_0040b80d:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_0040b813:  // mov eax, dword ptr [eax + 0x30]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_0040b816:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040b818:  // je 0x40be09
    if (f.zf) goto L_0040be09;
L_0040b81e:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0040b822:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0040b828:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0040b82c:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0040b830:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040b832:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040b835:  // je 0x40b847
    if (f.zf) goto L_0040b847;
L_0040b837:  // mov dword ptr [esp + 0x10], 0x447a0000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x447a0000u);
L_0040b83f:  // mov dword ptr [esp + 0x20], 0x447a0000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x447a0000u);
L_0040b847:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040b84b:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0040b84d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040b84e:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0040b850:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0040b853:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0040b855:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0040b857:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0040b85a:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0040b85d:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0040b860:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0040b863:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0040b866:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0040b869:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0040b86e:  // call 0x491ea0
    t0 = 0x00491ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b873u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b873:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_0040b879:  // mov dword ptr [esp + 0x18], 0x3e4ccccd
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3e4ccccdu);
L_0040b881:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0040b883:  // je 0x40b895
    if (f.zf) goto L_0040b895;
L_0040b885:  // cmp dword ptr [ecx + 0xb0], ebx
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xb0u)), ebx, f);
L_0040b88b:  // je 0x40b895
    if (f.zf) goto L_0040b895;
L_0040b88d:  // mov dword ptr [esp + 0x18], 0x3f4ccccd
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f4ccccdu);
L_0040b895:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040b897:  // je 0x40be09
    if (f.zf) goto L_0040be09;
L_0040b89d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0040b89f:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b8a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b8a4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0040b8a6:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_0040b8a8:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040b8ae:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0040b8b1:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_0040b8b3:  // je 0x40bbad
    if (f.zf) goto L_0040bbad;
L_0040b8b9:  // mov eax, dword ptr [esi + 0x138]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_0040b8bf:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040b8c1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040b8c2:  // call 0x4fd3d0
    t0 = 0x004fd3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b8c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b8c7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040b8c9:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040b8cf:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_0040b8d3:  // jne 0x40bdf7
    if (!f.zf) goto L_0040bdf7;
L_0040b8d9:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0040b8dc:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_0040b8e1:  // test ah, 4
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x4u, f);
L_0040b8e4:  // je 0x40b8fe
    if (f.zf) goto L_0040b8fe;
L_0040b8e6:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0040b8ea:  // mov eax, dword ptr [edx + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xa0u)));
L_0040b8f0:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040b8f2:  // je 0x40b8fc
    if (f.zf) goto L_0040b8fc;
L_0040b8f4:  // cmp dword ptr [eax + 0xb0], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0xb0u)), ebx, f);
L_0040b8fa:  // jne 0x40b8fe
    if (!f.zf) goto L_0040b8fe;
L_0040b8fc:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0040b8fe:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_0040b904:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040b906:  // je 0x40b914
    if (f.zf) goto L_0040b914;
L_0040b908:  // cmp dword ptr [eax + 0x124], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x124u)), ebx, f);
L_0040b90e:  // jne 0x40bdf7
    if (!f.zf) goto L_0040bdf7;
L_0040b914:  // cmp dword ptr [esi + 0x214], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x214u)), ebx, f);
L_0040b91a:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040b920:  // cmp dword ptr [esi + 0x228], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x228u)), ebx, f);
L_0040b926:  // jne 0x40bdf7
    if (!f.zf) goto L_0040bdf7;
L_0040b92c:  // cmp dword ptr [esi + 0x22c], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x22cu)), ebx, f);
L_0040b932:  // jne 0x40bdf7
    if (!f.zf) goto L_0040bdf7;
L_0040b938:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040b93a:  // je 0x40b948
    if (f.zf) goto L_0040b948;
L_0040b93c:  // cmp dword ptr [eax + 0x114], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x114u)), ebx, f);
L_0040b942:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040b948:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0040b94a:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040b950:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0040b952:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_0040b959:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040b95a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040b95c:  // call dword ptr [eax + 0x168]
    t0 = M32((uint32_t)(eax + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b962u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b962:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_0040b969:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_0040b96c:  // fld dword ptr [esp + 0xa4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa4u)));
L_0040b973:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_0040b976:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0040b97d:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_0040b97f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040b981:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040b983:  // fst dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
L_0040b987:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0040b989:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0040b98d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0040b98f:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0040b993:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040b995:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040b997:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0040b999:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040b99b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040b99d:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0040b99f:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0040b9a1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040b9a3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0040b9a7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040b9a9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040b9ab:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040b9ad:  // call dword ptr [edx + 0x16c]
    t0 = M32((uint32_t)(edx + 0x16cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b9b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b9b3:  // fmul dword ptr [0x5d85fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85fcu)));
L_0040b9b9:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0040b9bb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040b9bd:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_0040b9c3:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0040b9c7:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040b9cb:  // call dword ptr [eax + 0x1a4]
    t0 = M32((uint32_t)(eax + 0x1a4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040b9d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040b9d1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040b9d3:  // jne 0x40b9e3
    if (!f.zf) goto L_0040b9e3;
L_0040b9d5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040b9d9:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0040b9df:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040b9e3:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0040b9e7:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0040b9eb:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0040b9ef:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040b9f1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040b9f4:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040b9fa:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040b9fe:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0040ba02:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0040ba06:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040ba08:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040ba0b:  // jne 0x40bdf7
    if (!f.zf) goto L_0040bdf7;
L_0040ba11:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0040ba15:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0040ba19:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0040ba1b:  // fchs 
    ST(0) = -ST(0);
L_0040ba1d:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040ba21:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0040ba27:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040ba29:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040ba2c:  // je 0x40ba43
    if (f.zf) goto L_0040ba43;
L_0040ba2e:  // fcom dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
L_0040ba34:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040ba36:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040ba39:  // jne 0x40ba43
    if (!f.zf) goto L_0040ba43;
L_0040ba3b:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040ba41:  // jmp 0x40ba67
    goto L_0040ba67;
L_0040ba43:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040ba47:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_0040ba4d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040ba4f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040ba52:  // jne 0x40ba67
    if (!f.zf) goto L_0040ba67;
L_0040ba54:  // fcom dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
L_0040ba5a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040ba5c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040ba5f:  // je 0x40ba67
    if (f.zf) goto L_0040ba67;
L_0040ba61:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040ba67:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040ba6b:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0040ba6d:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0040ba71:  // fchs 
    ST(0) = -ST(0);
L_0040ba73:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040ba77:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040ba79:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040ba7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040ba7e:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0040ba84:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040ba86:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040ba89:  // jne 0x40baa2
    if (!f.zf) goto L_0040baa2;
L_0040ba8b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0040ba8f:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_0040ba91:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0040ba95:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040ba97:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040ba9b:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040baa0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040baa0:  // jmp 0x40baaa
    goto L_0040baaa;
L_0040baa2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040baa4:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0040baaa:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_0040baae:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040bab2:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0040bab8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040baba:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040babd:  // je 0x40bade
    if (f.zf) goto L_0040bade;
L_0040babf:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bac3:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_0040bac9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bacb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bace:  // jne 0x40bade
    if (!f.zf) goto L_0040bade;
L_0040bad0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bad2:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bad6:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040badc:  // jmp 0x40bb0c
    goto L_0040bb0c;
L_0040bade:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040bae2:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_0040bae8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040baea:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040baed:  // jne 0x40bb0c
    if (!f.zf) goto L_0040bb0c;
L_0040baef:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040baf3:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0040baf9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bafb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bafe:  // je 0x40bb0c
    if (f.zf) goto L_0040bb0c;
L_0040bb00:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bb02:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bb06:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040bb0c:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_0040bb10:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0040bb14:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040bb16:  // lea eax, [esp + 0xb0]
    eax = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0040bb1d:  // mov dword ptr [esp + 0x64], ecx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ecx);
L_0040bb21:  // fchs 
    ST(0) = -ST(0);
L_0040bb23:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0040bb25:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0040bb29:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0040bb2b:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0040bb2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040bb2e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040bb30:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040bb34:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bb36:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bb39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bb39:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0040bb3c:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0040bb3f:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0040bb41:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040bb43:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040bb45:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0040bb47:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040bb49:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040bb4b:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0040bb4d:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0040bb4f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040bb51:  // fcomp dword ptr [0x5d8c60]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c60u)));
    lpop(x);
L_0040bb57:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bb59:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bb5b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bb5d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bb60:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bb62:  // je 0x40bb7d
    if (f.zf) goto L_0040bb7d;
L_0040bb64:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0040bb68:  // fcomp dword ptr [0x5d8604]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8604u)));
    lpop(x);
L_0040bb6e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bb70:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bb73:  // jne 0x40bb7d
    if (!f.zf) goto L_0040bb7d;
L_0040bb75:  // fld dword ptr [0x5d8604]
    lpush(x, (long double)F32((uint32_t)(0x5d8604u)));
L_0040bb7b:  // jmp 0x40bb81
    goto L_0040bb81;
L_0040bb7d:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_0040bb81:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040bb85:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0040bb87:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bb89:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bb8c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bb8e:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040bb94:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040bb95:  // lea ecx, [ebp + 0x4e0]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4e0u));
L_0040bb9b:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bba0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bba0:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040bba4:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_0040bba8:  // jmp 0x40bdf7
    goto L_0040bdf7;
L_0040bbad:  // test eax, 0x400000
    t0 = llog<32>(eax & 0x400000u, f);
L_0040bbb2:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040bbb8:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040bbba:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040bbbc:  // call dword ptr [edx + 0x11c]
    t0 = M32((uint32_t)(edx + 0x11cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bbc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bbc2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040bbc4:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040bbca:  // mov eax, dword ptr [esi + 0xec]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xecu)));
L_0040bbd0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040bbd2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040bbd3:  // call 0x4fd3d0
    t0 = 0x004fd3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bbd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bbd8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040bbda:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040bbe0:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_0040bbe4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040bbe6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040bbe7:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bbecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bbec:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0040bbf0:  // fsub dword ptr [edi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8u)));
L_0040bbf3:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0040bbf7:  // fsub dword ptr [edi + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x4u)));
L_0040bbfa:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0040bbfe:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0040bc02:  // fsub dword ptr [edi]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi)));
L_0040bc04:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040bc08:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_0040bc0c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040bc10:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0040bc14:  // fst dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
L_0040bc18:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040bc1a:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0040bc1c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bc20:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0040bc24:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_0040bc28:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040bc2a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040bc2e:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0040bc32:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040bc34:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0040bc38:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0040bc3c:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0040bc3e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bc40:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bc43:  // je 0x40bdf5
    if (f.zf) goto L_0040bdf5;
L_0040bc49:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0040bc4d:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0040bc51:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0040bc53:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bc55:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bc58:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bc5a:  // jne 0x40bdf7
    if (!f.zf) goto L_0040bdf7;
L_0040bc60:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bc64:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040bc68:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0040bc6a:  // fchs 
    ST(0) = -ST(0);
L_0040bc6c:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040bc70:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0040bc76:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bc78:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bc7b:  // je 0x40bc92
    if (f.zf) goto L_0040bc92;
L_0040bc7d:  // fcom dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
L_0040bc83:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bc85:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bc88:  // jne 0x40bc92
    if (!f.zf) goto L_0040bc92;
L_0040bc8a:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040bc90:  // jmp 0x40bcb6
    goto L_0040bcb6;
L_0040bc92:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040bc96:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_0040bc9c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bc9e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bca1:  // jne 0x40bcb6
    if (!f.zf) goto L_0040bcb6;
L_0040bca3:  // fcom dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
L_0040bca9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bcab:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bcae:  // je 0x40bcb6
    if (f.zf) goto L_0040bcb6;
L_0040bcb0:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040bcb6:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0040bcba:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0040bcbc:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0040bcc0:  // fchs 
    ST(0) = -ST(0);
L_0040bcc2:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0040bcc6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bcc8:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bccdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bccd:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0040bcd3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bcd5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bcd8:  // jne 0x40bcf1
    if (!f.zf) goto L_0040bcf1;
L_0040bcda:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0040bcde:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_0040bce0:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0040bce4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bce6:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0040bcea:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bcefu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bcef:  // jmp 0x40bcf9
    goto L_0040bcf9;
L_0040bcf1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bcf3:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0040bcf9:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_0040bcfd:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040bd01:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0040bd07:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bd09:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bd0c:  // je 0x40bd2d
    if (f.zf) goto L_0040bd2d;
L_0040bd0e:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bd12:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_0040bd18:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bd1a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bd1d:  // jne 0x40bd2d
    if (!f.zf) goto L_0040bd2d;
L_0040bd1f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bd21:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bd25:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040bd2b:  // jmp 0x40bd5b
    goto L_0040bd5b;
L_0040bd2d:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0040bd31:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_0040bd37:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bd39:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bd3c:  // jne 0x40bd5b
    if (!f.zf) goto L_0040bd5b;
L_0040bd3e:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bd42:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_0040bd48:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bd4a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bd4d:  // je 0x40bd5b
    if (f.zf) goto L_0040bd5b;
L_0040bd4f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bd51:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040bd55:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_0040bd5b:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_0040bd5f:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0040bd63:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040bd65:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0040bd69:  // lea eax, [esp + 0xc0]
    eax = (uint32_t)((uint32_t)(esp + 0xc0u));
L_0040bd70:  // fchs 
    ST(0) = -ST(0);
L_0040bd72:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0040bd74:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040bd78:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0040bd7a:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0040bd7c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040bd7d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040bd7f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040bd83:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bd85:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bd88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bd88:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0040bd8b:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0040bd8e:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0040bd90:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040bd92:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040bd94:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0040bd96:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040bd98:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040bd9a:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0040bd9c:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0040bd9e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040bda0:  // fcomp dword ptr [0x5d8c60]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c60u)));
    lpop(x);
L_0040bda6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bda8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bdaa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bdac:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bdaf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bdb1:  // je 0x40bdcc
    if (f.zf) goto L_0040bdcc;
L_0040bdb3:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0040bdb7:  // fcomp dword ptr [0x5d8604]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8604u)));
    lpop(x);
L_0040bdbd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bdbf:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040bdc2:  // jne 0x40bdcc
    if (!f.zf) goto L_0040bdcc;
L_0040bdc4:  // fld dword ptr [0x5d8604]
    lpush(x, (long double)F32((uint32_t)(0x5d8604u)));
L_0040bdca:  // jmp 0x40bdd0
    goto L_0040bdd0;
L_0040bdcc:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0040bdd0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040bdd4:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0040bdd6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040bdd8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040bddb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bddd:  // je 0x40bdf7
    if (f.zf) goto L_0040bdf7;
L_0040bddf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040bde0:  // lea ecx, [ebp + 0x4e0]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4e0u));
L_0040bde6:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bdebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bdeb:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040bdef:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_0040bdf3:  // jmp 0x40bdf7
    goto L_0040bdf7;
L_0040bdf5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040bdf7:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0040bdfc:  // call 0x492020
    t0 = 0x00492020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040be01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040be01:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040be03:  // jne 0x40b89d
    if (!f.zf) goto L_0040b89d;
L_0040be09:  // mov eax, dword ptr [ebp + 0x4e0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4e0u)));
L_0040be0f:  // lea esi, [ebp + 0x4e0]
    esi = (uint32_t)((uint32_t)(ebp + 0x4e0u));
L_0040be15:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040be17:  // je 0x40be29
    if (f.zf) goto L_0040be29;
L_0040be19:  // mov ecx, dword ptr [eax + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x34u)));
L_0040be1c:  // test ch, 1
    t0 = llog<8>(((ecx >> 8) & 0xffu) & 0x1u, f);
L_0040be1f:  // je 0x40be29
    if (f.zf) goto L_0040be29;
L_0040be21:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040be22:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040be24:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040be29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040be29:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0040be2b:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0040be2d:  // je 0x40bf51
    if (f.zf) goto L_0040bf51;
L_0040be33:  // test byte ptr [ecx + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x10u, f);
L_0040be37:  // je 0x40be48
    if (f.zf) goto L_0040be48;
L_0040be39:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0040be3b:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_0040be3f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040be40:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040be46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040be46:  // jmp 0x40be52
    goto L_0040be52;
L_0040be48:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0040be4c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040be4d:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040be52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040be52:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0040be54:  // mov ecx, dword ptr [edi + 4]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0040be57:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0040be5a:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_0040be61:  // mov eax, dword ptr [edi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0040be64:  // mov dword ptr [esp + 0x84], ecx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ecx);
L_0040be6b:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0040be6f:  // mov dword ptr [esp + 0x88], edx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edx);
L_0040be76:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0040be7a:  // mov dword ptr [esp + 0x8c], eax
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(eax);
L_0040be81:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0040be85:  // mov dword ptr [esp + 0x90], ecx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(ecx);
L_0040be8c:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0040be90:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_0040be98:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_0040bea0:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_0040bea8:  // mov dword ptr [esp + 0x94], edx
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(edx);
L_0040beaf:  // mov dword ptr [esp + 0x98], eax
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(eax);
L_0040beb6:  // mov dword ptr [esp + 0x9c], ecx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(ecx);
L_0040bebd:  // mov dword ptr [esp + 0x6c], 0x5d8bfc
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x5d8bfcu);
L_0040bec5:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0040bec8:  // lea edx, [esp + 0x44]
    edx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0040becc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040becd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040becf:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0040bed1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040bed3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040bed5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040bed6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040bed7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0040bed8:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_0040bedb:  // lea eax, [esp + 0xc0]
    eax = (uint32_t)((uint32_t)(esp + 0xc0u));
L_0040bee2:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0040bee4:  // mov dword ptr [esp + 0x84], esp
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(esp);
L_0040beeb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040beec:  // mov dword ptr [esp + 0x130], ebx
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(ebx);
L_0040bef3:  // mov dword ptr [esp + 0x9c], ebx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(ebx);
L_0040befa:  // mov dword ptr [esp + 0xa0], esi
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(esi);
L_0040bf01:  // mov dword ptr [esp + 0xa4], ebx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ebx);
L_0040bf08:  // mov dword ptr [esp + 0xa8], 0xbf800000
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0xbf800000u);
L_0040bf13:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bf18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bf18:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_0040bf1d:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bf22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bf22:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0040bf25:  // jne 0x40bf3e
    if (!f.zf) goto L_0040bf3e;
L_0040bf27:  // mov eax, dword ptr [ebp + 0x4e0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4e0u)));
L_0040bf2d:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0040bf31:  // lea ecx, [ebp + 0x4e0]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4e0u));
L_0040bf37:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0040bf39:  // je 0x40bf4a
    if (f.zf) goto L_0040bf4a;
L_0040bf3b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040bf3c:  // jmp 0x40bf45
    goto L_0040bf45;
L_0040bf3e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040bf3f:  // lea ecx, [ebp + 0x4e0]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4e0u));
L_0040bf45:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bf4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bf4a:  // mov dword ptr [esp + 0xd8], esi
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(esi);
L_0040bf51:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0040bf57:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bf5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bf5c:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0040bf61:  // jns 0x40bf6a
    if (!f.sf) goto L_0040bf6a;
L_0040bf63:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0040bf64:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0040bf69:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0040bf6a:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0040bf6e:  // mov ecx, dword ptr [esp + 0xe0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xe0u)));
L_0040bf75:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_0040bf79:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040bf7a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040bf7b:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0040bf7f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040bf80:  // fmul dword ptr [0x5d8c5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c5cu)));
L_0040bf86:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040bf87:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0040bf88:  // push 0x1773
    t0 = 0x1773u; esp -= 4; M32(esp) = t0;
L_0040bf8d:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_0040bf92:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_0040bf98:  // fadd dword ptr [0x5d8604]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8604u)));
L_0040bf9e:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0040bfa2:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040bfa7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040bfa7:  // mov ecx, dword ptr [esp + 0xd0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_0040bfae:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0040bfaf:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0040bfb0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0040bfb1:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0040bfb8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0040bfb9:  // add esp, 0xcc
    t0 = ladd<32>(esp, 0xccu, f);
    esp = (uint32_t)(t0);
L_0040bfbf:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0040b6d0, 0040b6d0)
