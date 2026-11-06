// lifted from 0053f880 (FUN_0053f880, 638 bytes, 187 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053f880(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053f880;
L_0053f880:  // sub esp, 0x78
    t0 = lsub<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0053f883:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053f884:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053f885:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053f886:  // mov edi, dword ptr [0x889010]
    edi = (uint32_t)(M32((uint32_t)(0x889010u)));
L_0053f88c:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0053f88e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053f890:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053f892:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0053f894:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053f896:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053f897:  // lea eax, [esi + 0x5c]
    eax = (uint32_t)((uint32_t)(esi + 0x5cu));
L_0053f89a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053f89c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f89d:  // mov dword ptr [0x889010], 1
    M32((uint32_t)(0x889010u)) = (uint32_t)(0x1u);
L_0053f8a7:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f8acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f8ac:  // mov dword ptr [esi + 0x170], eax
    M32((uint32_t)(esi + 0x170u)) = (uint32_t)(eax);
L_0053f8b2:  // mov dword ptr [0x889010], edi
    M32((uint32_t)(0x889010u)) = (uint32_t)(edi);
L_0053f8b8:  // mov ecx, dword ptr [esi + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_0053f8be:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0053f8c1:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0053f8c3:  // je 0x53faf7
    if (f.zf) goto L_0053faf7;
L_0053f8c9:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f8ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f8ce:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f8d0:  // je 0x53faf7
    if (f.zf) goto L_0053faf7;
L_0053f8d6:  // mov ecx, dword ptr [esi + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_0053f8dc:  // mov edx, dword ptr [ecx + 0xac]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_0053f8e2:  // mov dword ptr [esi + 0x160], edx
    M32((uint32_t)(esi + 0x160u)) = (uint32_t)(edx);
L_0053f8e8:  // movsx eax, word ptr [ecx + 0xb0]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ecx + 0xb0u))));
L_0053f8ef:  // mov dword ptr [esi + 0x164], eax
    M32((uint32_t)(esi + 0x164u)) = (uint32_t)(eax);
L_0053f8f5:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f8fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f8fa:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053f8fc:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0053f900:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053f901:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053f902:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f903:  // call dword ptr [ecx + 0x44]
    t0 = M32((uint32_t)(ecx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f906u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f906:  // mov ecx, dword ptr [esi + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_0053f90c:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f911u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f911:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053f913:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053f914:  // lea edx, [esp + 0x28]
    edx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0053f918:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053f919:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053f91a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053f91b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053f91c:  // call dword ptr [ecx + 0x4c]
    t0 = M32((uint32_t)(ecx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053f91fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053f91f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053f921:  // jl 0x53faf7
    if ((f.sf != f.of)) goto L_0053faf7;
L_0053f927:  // mov eax, dword ptr [esi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_0053f92d:  // mov ecx, dword ptr [esi + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x54u)));
L_0053f930:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0053f936:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0053f93a:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_0053f93e:  // fild qword ptr [esp + 0x18]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x18u)));
L_0053f942:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053f943:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0053f947:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0053f94b:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0053f94f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0053f953:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0053f957:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_0053f95d:  // mov dword ptr [esp + 0x34], ebx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebx);
L_0053f961:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0053f963:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0053f967:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0053f96b:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0053f96f:  // lea edi, [ecx + edx - 1]
    edi = (uint32_t)((uint32_t)(ecx + edx + 0xffffffffu));
L_0053f973:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053f974:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0053f975:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_0053f977:  // fild qword ptr [esp + 0x30]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x30u)));
L_0053f97b:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0053f97f:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0053f983:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0053f987:  // jge 0x53f98b
    if ((f.sf == f.of)) goto L_0053f98b;
L_0053f989:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0053f98b:  // cmp edi, edx
    t0 = lsub<32>(edi, edx, f);
L_0053f98d:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0053f991:  // jl 0x53f9d9
    if ((f.sf != f.of)) goto L_0053f9d9;
L_0053f993:  // cmp dword ptr [esp + 0x14], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x14u)), ebx, f);
L_0053f997:  // jne 0x53f9d9
    if (!f.zf) goto L_0053f9d9;
L_0053f999:  // lea eax, [ecx + ebp - 1]
    eax = (uint32_t)((uint32_t)(ecx + ebp + 0xffffffffu));
L_0053f99d:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_0053f99f:  // jge 0x53f9d4
    if ((f.sf == f.of)) goto L_0053f9d4;
L_0053f9a1:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053f9a5:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0053f9a9:  // imul ecx, ebp
    t0 = limul32(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0053f9ac:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0053f9ae:  // sub eax, ebp
    t0 = lsub<32>(eax, ebp, f);
    eax = (uint32_t)(t0);
L_0053f9b0:  // lea ecx, [ebx + edi*4]
    ecx = (uint32_t)((uint32_t)(ebx + edi * 4u));
L_0053f9b3:  // mov ebx, dword ptr [ecx]
    ebx = (uint32_t)(M32((uint32_t)(ecx)));
L_0053f9b5:  // shr ebx, 0x18
    t0 = lshr<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_0053f9b8:  // cmp bl, 0x10
    t0 = lsub<8>((ebx & 0xffu), 0x10u, f);
L_0053f9bb:  // jbe 0x53f9c5
    if ((f.cf || f.zf)) goto L_0053f9c5;
L_0053f9bd:  // mov dword ptr [esp + 0x14], 1
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x1u);
L_0053f9c5:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0053f9c9:  // add ecx, ebx
    t0 = ladd<32>(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_0053f9cb:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0053f9cc:  // jne 0x53f9b3
    if (!f.zf) goto L_0053f9b3;
L_0053f9ce:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053f9d2:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0053f9d4:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0053f9d5:  // cmp edi, edx
    t0 = lsub<32>(edi, edx, f);
L_0053f9d7:  // jge 0x53f993
    if ((f.sf == f.of)) goto L_0053f993;
L_0053f9d9:  // sub edi, edx
    t0 = lsub<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_0053f9db:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053f9df:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_0053f9e2:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_0053f9e4:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0053f9e8:  // jne 0x53f9f0
    if (!f.zf) goto L_0053f9f0;
L_0053f9ea:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0053f9ec:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0053f9f0:  // lea eax, [edx + 0x18]
    eax = (uint32_t)((uint32_t)(edx + 0x18u));
L_0053f9f3:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0053f9f5:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0053f9f8:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0053f9fb:  // fst dword ptr [eax + esi]
    F32((uint32_t)(eax + esi)) = lf32(ST(0));
L_0053f9fe:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0053fa02:  // lea eax, [ecx + esi]
    eax = (uint32_t)((uint32_t)(ecx + esi));
L_0053fa05:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053fa09:  // mov dword ptr [esp + 0x3c], ebx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebx);
L_0053fa0d:  // mov dword ptr [esp + 0x44], ebx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebx);
L_0053fa11:  // mov dword ptr [eax + 0x184], ecx
    M32((uint32_t)(eax + 0x184u)) = (uint32_t)(ecx);
L_0053fa17:  // mov ecx, dword ptr [esi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_0053fa1d:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0053fa21:  // mov dword ptr [esp + 0x4c], ebx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ebx);
L_0053fa25:  // fidiv dword ptr [esp + 0x38]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x38u)));
L_0053fa29:  // mov dword ptr [esp + 0x54], ebx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ebx);
L_0053fa2d:  // mov dword ptr [esp + 0x5c], ebx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ebx);
L_0053fa31:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0053fa33:  // fstp dword ptr [eax + 0x188]
    F32((uint32_t)(eax + 0x188u)) = lf32(ST(0));
    lpop(x);
L_0053fa39:  // mov ecx, dword ptr [esi + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x54u)));
L_0053fa3c:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_0053fa40:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_0053fa46:  // fild qword ptr [esp + 0x40]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x40u)));
L_0053fa4a:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_0053fa4e:  // fidiv dword ptr [esp + 0x48]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_0053fa52:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_0053fa56:  // fstp dword ptr [eax + 0x18c]
    F32((uint32_t)(eax + 0x18cu)) = lf32(ST(0));
    lpop(x);
L_0053fa5c:  // mov ecx, dword ptr [esi + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x54u)));
L_0053fa5f:  // mov eax, dword ptr [esi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_0053fa65:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_0053fa69:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_0053fa6d:  // fild qword ptr [esp + 0x50]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x50u)));
L_0053fa71:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0053fa75:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0053fa79:  // fild qword ptr [esp + 0x58]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x58u)));
L_0053fa7d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0053fa81:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0053fa85:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_0053fa89:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053fa8b:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0053fa91:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0053fa93:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0053fa96:  // jne 0x53fabe
    if (!f.zf) goto L_0053fabe;
L_0053fa98:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_0053fa9e:  // mov dword ptr [esp + 0x64], ebx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ebx);
L_0053faa2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053faa4:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0053faaa:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_0053faae:  // fild qword ptr [esp + 0x60]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x60u)));
L_0053fab2:  // fdivr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) / (ST(0));
L_0053fab6:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_0053faba:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0053fabe:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0053fabf:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0053fac3:  // cmp word ptr [edx*2 + 0x5db5fc], bx
    t0 = lsub<16>(M16((uint32_t)(edx * 2u + 0x5db5fcu)), (ebx & 0xffffu), f);
L_0053facb:  // je 0x53fae2
    if (f.zf) goto L_0053fae2;
L_0053facd:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053fad1:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0053fad7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0053fad9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0053fadc:  // jne 0x53f953
    if (!f.zf) goto L_0053f953;
L_0053fae2:  // mov ecx, dword ptr [esi + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x170u)));
L_0053fae8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053faea:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053faefu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053faef:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053faf1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053faf2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053faf3:  // call dword ptr [ecx + 0x50]
    t0 = M32((uint32_t)(ecx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053faf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053faf6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053faf7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053faf8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053faf9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053fafa:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0053fafd:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053f880, 0053f880)
