// lifted from 004037a0 (vslot40, 688 bytes, 203 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004037a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004037a0;
L_004037a0:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004037a4:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004037a7:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004037ab:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004037ac:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004037ad:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004037af:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004037b0:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004037b4:  // mov edi, dword ptr [esp + 0x54]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004037b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004037b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004037ba:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004037bb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004037bc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004037be:  // call 0x4f9a90
    t0 = 0x004f9a90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004037c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004037c3:  // fld dword ptr [esi + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esi + 0xf8u)));
L_004037c9:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004037cf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004037d1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004037d4:  // je 0x403a47
    if (f.zf) goto L_00403a47;
L_004037da:  // test byte ptr [esi + 0x2c], 1
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x1u, f);
L_004037de:  // jne 0x403a47
    if (!f.zf) goto L_00403a47;
L_004037e4:  // mov eax, dword ptr [esi + 0x258]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x258u)));
L_004037ea:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004037ec:  // jne 0x403a47
    if (!f.zf) goto L_00403a47;
L_004037f2:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004037f8:  // mov dword ptr [esi + 0x258], 0
    M32((uint32_t)(esi + 0x258u)) = (uint32_t)(0x0u);
L_00403802:  // mov ecx, dword ptr [eax + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_00403805:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00403807:  // je 0x403a47
    if (f.zf) goto L_00403a47;
L_0040380d:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0040380f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00403811:  // je 0x40382e
    if (f.zf) goto L_0040382e;
L_00403813:  // test byte ptr [edi + 0x34], 4
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x4u, f);
L_00403817:  // je 0x40382e
    if (f.zf) goto L_0040382e;
L_00403819:  // mov eax, dword ptr [edi + 0xec]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xecu)));
L_0040381f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403821:  // je 0x40382e
    if (f.zf) goto L_0040382e;
L_00403823:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_00403827:  // je 0x40382e
    if (f.zf) goto L_0040382e;
L_00403829:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_0040382e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00403830:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00403834:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00403838:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_0040383d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040383e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040383f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00403840:  // push 0x19
    t0 = 0x19u; esp -= 4; M32(esp) = t0;
L_00403842:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00403844:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040384au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040384a:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0040384e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00403854:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403856:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00403859:  // je 0x40387d
    if (f.zf) goto L_0040387d;
L_0040385b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0040385f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00403865:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403867:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0040386a:  // je 0x40387d
    if (f.zf) goto L_0040387d;
L_0040386c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00403870:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00403876:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403878:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0040387b:  // jne 0x40388d
    if (!f.zf) goto L_0040388d;
L_0040387d:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0040387f:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00403883:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00403887:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00403888:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00403889:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040388a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040388b:  // jmp 0x403840
    goto L_00403840;
L_0040388d:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0040388e:  // je 0x403a47
    if (f.zf) goto L_00403a47;
L_00403894:  // cmp edi, 1
    t0 = lsub<32>(edi, 0x1u, f);
L_00403897:  // jne 0x4038a1
    if (!f.zf) goto L_004038a1;
L_00403899:  // mov dword ptr [esi + 0x258], edi
    M32((uint32_t)(esi + 0x258u)) = (uint32_t)(edi);
L_0040389f:  // jmp 0x4038b7
    goto L_004038b7;
L_004038a1:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004038a7:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004038acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004038ac:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004038ad:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004038ae:  // idiv edi
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)edi; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_004038b0:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004038b1:  // mov dword ptr [esi + 0x258], edx
    M32((uint32_t)(esi + 0x258u)) = (uint32_t)(edx);
L_004038b7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004038b9:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004038bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004038be:  // mov eax, dword ptr [esi + 0x258]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x258u)));
L_004038c4:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004038c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004038c9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004038ca:  // push 0x19
    t0 = 0x19u; esp -= 4; M32(esp) = t0;
L_004038cc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004038ce:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004038d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004038d4:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004038d8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004038de:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004038e0:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004038e3:  // je 0x40390b
    if (f.zf) goto L_0040390b;
L_004038e5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004038e9:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004038ef:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004038f1:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004038f4:  // je 0x40390b
    if (f.zf) goto L_0040390b;
L_004038f6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004038fa:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00403900:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403902:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00403905:  // jne 0x403a47
    if (!f.zf) goto L_00403a47;
L_0040390b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040390c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0040390e:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00403911:  // mov dword ptr [esi + 0x254], 0
    M32((uint32_t)(esi + 0x254u)) = (uint32_t)(0x0u);
L_0040391b:  // mov edx, dword ptr [0x6600e0]
    edx = (uint32_t)(M32((uint32_t)(0x6600e0u)));
L_00403921:  // mov eax, dword ptr [0x6600e4]
    eax = (uint32_t)(M32((uint32_t)(0x6600e4u)));
L_00403926:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00403928:  // lea edi, [esi + 0x250]
    edi = (uint32_t)((uint32_t)(esi + 0x250u));
L_0040392e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040392f:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00403931:  // mov edx, dword ptr [0x6600e8]
    edx = (uint32_t)(M32((uint32_t)(0x6600e8u)));
L_00403937:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0040393a:  // mov eax, dword ptr [0x6600ec]
    eax = (uint32_t)(M32((uint32_t)(0x6600ecu)));
L_0040393f:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00403942:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00403945:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_0040394b:  // mov edx, dword ptr [ecx + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x10u)));
L_0040394e:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00403953:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00403954:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403959u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403959:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0040395c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0040395e:  // je 0x403a47
    if (f.zf) goto L_00403a47;
L_00403964:  // cmp dword ptr [eax + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(eax + 0x48u)), 0x461c4000u, f);
L_0040396b:  // jne 0x4039f5
    if (!f.zf) goto L_004039f5;
L_00403971:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00403975:  // lea ecx, [eax + 0x80]
    ecx = (uint32_t)((uint32_t)(eax + 0x80u));
L_0040397b:  // mov dword ptr [eax + 0x80], edx
    M32((uint32_t)(eax + 0x80u)) = (uint32_t)(edx);
L_00403981:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00403985:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00403988:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0040398c:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0040398f:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00403993:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_00403996:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0040399a:  // lea ecx, [eax + 0x40]
    ecx = (uint32_t)((uint32_t)(eax + 0x40u));
L_0040399d:  // mov dword ptr [eax + 0x40], edx
    M32((uint32_t)(eax + 0x40u)) = (uint32_t)(edx);
L_004039a0:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004039a4:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004039a7:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004039ab:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004039ae:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004039b2:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004039b5:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004039b9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004039bb:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004039bd:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004039c1:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004039c4:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004039c8:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004039cb:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004039cf:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004039d2:  // mov ecx, dword ptr [eax + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_004039d8:  // cmp ecx, 0xbf800000
    t0 = lsub<32>(ecx, 0xbf800000u, f);
L_004039de:  // je 0x403a47
    if (f.zf) goto L_00403a47;
L_004039e0:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004039e6:  // mov dword ptr [eax + 0xac], ecx
    M32((uint32_t)(eax + 0xacu)) = (uint32_t)(ecx);
L_004039ec:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004039ed:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004039ee:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004039ef:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004039f2:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004039f5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004039f7:  // lea edx, [eax + 0x40]
    edx = (uint32_t)((uint32_t)(eax + 0x40u));
L_004039fa:  // mov esi, dword ptr [ecx]
    esi = (uint32_t)(M32((uint32_t)(ecx)));
L_004039fc:  // mov dword ptr [edx], esi
    M32((uint32_t)(edx)) = (uint32_t)(esi);
L_004039fe:  // mov esi, dword ptr [ecx + 4]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00403a01:  // mov dword ptr [edx + 4], esi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(esi);
L_00403a04:  // mov esi, dword ptr [ecx + 8]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00403a07:  // mov dword ptr [edx + 8], esi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(esi);
L_00403a0a:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00403a0d:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00403a10:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00403a14:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00403a16:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_00403a18:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00403a1c:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00403a1f:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00403a23:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00403a26:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00403a2a:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00403a2d:  // mov ecx, dword ptr [eax + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_00403a33:  // cmp ecx, 0xbf800000
    t0 = lsub<32>(ecx, 0xbf800000u, f);
L_00403a39:  // je 0x403a47
    if (f.zf) goto L_00403a47;
L_00403a3b:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00403a41:  // mov dword ptr [eax + 0xac], edx
    M32((uint32_t)(eax + 0xacu)) = (uint32_t)(edx);
L_00403a47:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00403a48:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00403a49:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00403a4a:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_00403a4d:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004037a0, 004037a0)
