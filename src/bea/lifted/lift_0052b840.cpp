// lifted from 0052b840 (FUN_0052b840, 526 bytes, 152 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0052b840(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0052b840;
L_0052b840:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b843:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052b844:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0052b845:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052b846:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0052b848:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052b849:  // mov ecx, dword ptr [esi + 0x32e40]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x32e40u)));
L_0052b84f:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052b852:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0052b855:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0052b857:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0052b85a:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0052b85d:  // lea ebx, [esi + eax*4 + 4]
    ebx = (uint32_t)((uint32_t)(esi + eax * 4u + 0x4u));
L_0052b861:  // mov eax, dword ptr [esi + eax*4 + 0x516c]
    eax = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x516cu)));
L_0052b868:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0052b86b:  // lea ecx, [eax + ecx*8]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 8u));
L_0052b86e:  // lea edx, [ecx + ecx*2]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052b871:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0052b874:  // lea edi, [ebx + eax*8 + 0x460]
    edi = (uint32_t)((uint32_t)(ebx + eax * 8u + 0x460u));
L_0052b87b:  // mov eax, dword ptr [ebx + eax*8 + 0x13b0]
    eax = (uint32_t)(M32((uint32_t)(ebx + eax * 8u + 0x13b0u)));
L_0052b882:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0052b885:  // mov eax, dword ptr [esi + 0x32e44]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e44u)));
L_0052b88b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b88d:  // lea ebp, [edi + ecx*8 + 0x140]
    ebp = (uint32_t)((uint32_t)(edi + ecx * 8u + 0x140u));
L_0052b894:  // jne 0x52b8b1
    if (!f.zf) goto L_0052b8b1;
L_0052b896:  // mov ecx, dword ptr [edi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x138u)));
L_0052b89c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052b89e:  // jne 0x52b8b1
    if (!f.zf) goto L_0052b8b1;
L_0052b8a0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052b8a2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052b8a4:  // call 0x52ba50
    t0 = 0x0052ba50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b8a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b8a9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052b8aa:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052b8ab:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052b8ac:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052b8ad:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b8b0:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0052b8b1:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0052b8b3:  // mov dword ptr [esi + 0x32e4c], 0
    M32((uint32_t)(esi + 0x32e4cu)) = (uint32_t)(0x0u);
L_0052b8bd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b8bf:  // sete dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_0052b8c2:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0052b8c4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052b8c6:  // mov dword ptr [esi + 0x32e44], eax
    M32((uint32_t)(esi + 0x32e44u)) = (uint32_t)(eax);
L_0052b8cc:  // mov dword ptr [edi + 0xf54], eax
    M32((uint32_t)(edi + 0xf54u)) = (uint32_t)(eax);
L_0052b8d2:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0052b8d4:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b8d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b8d6:  // mov ecx, dword ptr [edi + 0xf54]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xf54u)));
L_0052b8dc:  // mov dword ptr [esi + 0x32e78], ecx
    M32((uint32_t)(esi + 0x32e78u)) = (uint32_t)(ecx);
L_0052b8e2:  // mov edx, dword ptr [edi + 0xf58]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xf58u)));
L_0052b8e8:  // mov ecx, dword ptr [esi + 0x32e94]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x32e94u)));
L_0052b8ee:  // mov dword ptr [esi + 0x32e68], edx
    M32((uint32_t)(esi + 0x32e68u)) = (uint32_t)(edx);
L_0052b8f4:  // mov eax, dword ptr [ebp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0052b8f7:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052b8f9:  // mov dword ptr [esi + 0x32e80], eax
    M32((uint32_t)(esi + 0x32e80u)) = (uint32_t)(eax);
L_0052b8ff:  // mov eax, dword ptr [esi + 0x32e44]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e44u)));
L_0052b905:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052b907:  // mov dword ptr [esi + 0x32e74], ecx
    M32((uint32_t)(esi + 0x32e74u)) = (uint32_t)(ecx);
L_0052b90d:  // je 0x52b950
    if (f.zf) goto L_0052b950;
L_0052b90f:  // mov edx, dword ptr [esi + 0x33014]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x33014u)));
L_0052b915:  // mov ebp, dword ptr [esi + 0x3300c]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x3300cu)));
L_0052b91b:  // mov eax, dword ptr [esi + 0x33018]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x33018u)));
L_0052b921:  // mov ecx, dword ptr [esi + 0x33010]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x33010u)));
L_0052b927:  // sub edx, ebp
    t0 = lsub<32>(edx, ebp, f);
    edx = (uint32_t)(t0);
L_0052b929:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0052b92b:  // mov dword ptr [esi + 0x32e58], edx
    M32((uint32_t)(esi + 0x32e58u)) = (uint32_t)(edx);
L_0052b931:  // mov dword ptr [esi + 0x32e5c], eax
    M32((uint32_t)(esi + 0x32e5cu)) = (uint32_t)(eax);
L_0052b937:  // mov ecx, dword ptr [ebx + 0x458]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x458u)));
L_0052b93d:  // mov dword ptr [esi + 0x32e8c], edi
    M32((uint32_t)(esi + 0x32e8cu)) = (uint32_t)(edi);
L_0052b943:  // mov dword ptr [esi + 0x32e60], ecx
    M32((uint32_t)(esi + 0x32e60u)) = (uint32_t)(ecx);
L_0052b949:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_0052b94e:  // jmp 0x52b976
    goto L_0052b976;
L_0052b950:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0052b953:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_0052b958:  // mov dword ptr [esi + 0x32e58], edx
    M32((uint32_t)(esi + 0x32e58u)) = (uint32_t)(edx);
L_0052b95e:  // mov eax, dword ptr [ebp + 4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_0052b961:  // mov dword ptr [esi + 0x32e5c], eax
    M32((uint32_t)(esi + 0x32e5cu)) = (uint32_t)(eax);
L_0052b967:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0052b96a:  // mov dword ptr [esi + 0x32e60], ecx
    M32((uint32_t)(esi + 0x32e60u)) = (uint32_t)(ecx);
L_0052b970:  // mov dword ptr [esi + 0x32e8c], ebx
    M32((uint32_t)(esi + 0x32e8cu)) = (uint32_t)(ebx);
L_0052b976:  // mov eax, dword ptr [0x82b484]
    eax = (uint32_t)(M32((uint32_t)(0x82b484u)));
L_0052b97b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052b97c:  // je 0x52b995
    if (f.zf) goto L_0052b995;
L_0052b97e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052b97f:  // je 0x52b989
    if (f.zf) goto L_0052b989;
L_0052b981:  // fld dword ptr [0x5e4af0]
    lpush(x, (long double)F32((uint32_t)(0x5e4af0u)));
L_0052b987:  // jmp 0x52b99b
    goto L_0052b99b;
L_0052b989:  // mov dword ptr [esi + 0x32e90], 0x3f800000
    M32((uint32_t)(esi + 0x32e90u)) = (uint32_t)(0x3f800000u);
L_0052b993:  // jmp 0x52b9c9
    goto L_0052b9c9;
L_0052b995:  // fld dword ptr [0x5e4aec]
    lpush(x, (long double)F32((uint32_t)(0x5e4aecu)));
L_0052b99b:  // mov edx, dword ptr [esi + 0x32e5c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x32e5cu)));
L_0052b9a1:  // mov eax, dword ptr [esi + 0x32e58]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e58u)));
L_0052b9a7:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0052b9ab:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0052b9af:  // fild qword ptr [esp + 0x10]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x10u)));
L_0052b9b3:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0052b9b7:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_0052b9bb:  // fidiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0052b9bf:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0052b9c1:  // fstp dword ptr [esi + 0x32e90]
    F32((uint32_t)(esi + 0x32e90u)) = lf32(ST(0));
    lpop(x);
L_0052b9c7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0052b9c9:  // mov edx, dword ptr [esi + 0x32e84]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x32e84u)));
L_0052b9cf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052b9d1:  // or edx, ebx
    t0 = llog<32>(edx | ebx, f);
    edx = (uint32_t)(t0);
L_0052b9d3:  // mov dword ptr [esi + 0x32e84], edx
    M32((uint32_t)(esi + 0x32e84u)) = (uint32_t)(edx);
L_0052b9d9:  // call 0x52b760
    t0 = 0x0052b760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b9deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b9de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b9e0:  // mov eax, dword ptr [esi + 0x32e44]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e44u)));
L_0052b9e6:  // jge 0x52ba09
    if ((f.sf == f.of)) goto L_0052ba09;
L_0052b9e8:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052b9ea:  // je 0x52b9fc
    if (f.zf) goto L_0052b9fc;
L_0052b9ec:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052b9ed:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052b9ef:  // call 0x52ba50
    t0 = 0x0052ba50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b9f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b9f4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052b9f5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052b9f6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052b9f7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052b9f8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b9fb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0052b9fc:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052b9fd:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052b9fe:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052b9ff:  // mov eax, 0x80004005
    eax = (uint32_t)(0x80004005u);
L_0052ba04:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052ba05:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052ba08:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0052ba09:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052ba0b:  // je 0x52ba3e
    if (f.zf) goto L_0052ba3e;
L_0052ba0d:  // mov eax, dword ptr [esi + 0x33000]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x33000u)));
L_0052ba13:  // mov edx, dword ptr [esi + 0x33008]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x33008u)));
L_0052ba19:  // mov ecx, dword ptr [esi + 0x32ffc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x32ffcu)));
L_0052ba1f:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0052ba21:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_0052ba23:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052ba24:  // mov edx, dword ptr [esi + 0x33004]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x33004u)));
L_0052ba2a:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0052ba2c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052ba2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052ba2e:  // mov eax, dword ptr [esi + 0x32e94]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e94u)));
L_0052ba34:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052ba35:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_0052ba37:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052ba38:  // call dword ptr [0x5d82c8]
    t0 = M32((uint32_t)(0x5d82c8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052ba3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052ba3e:  // mov dword ptr [esi + 0x32e4c], ebx
    M32((uint32_t)(esi + 0x32e4cu)) = (uint32_t)(ebx);
L_0052ba44:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052ba45:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052ba46:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052ba47:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052ba49:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052ba4a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052ba4d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0052b840, 0052b840)
