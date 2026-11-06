// lifted from 004b0800 (FUN_004b0800, 1020 bytes, 290 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b0800(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b0800;
L_004b0800:  // sub esp, 0x108
    t0 = lsub<32>(esp, 0x108u, f);
    esp = (uint32_t)(t0);
L_004b0806:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b0807:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004b0809:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b080a:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004b080c:  // mov eax, dword ptr [ebx + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_004b0812:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b0813:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b0815:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b0816:  // jle 0x4b0864
    if ((f.zf || f.sf != f.of)) goto L_004b0864;
L_004b0818:  // mov eax, dword ptr [ebx + 0x94]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_004b081e:  // mov eax, dword ptr [eax + ebp*4]
    eax = (uint32_t)(M32((uint32_t)(eax + ebp * 4u)));
L_004b0821:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b0823:  // je 0x4b0859
    if (f.zf) goto L_004b0859;
L_004b0825:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b0826:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b082b:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004b082e:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_004b0830:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004b0832:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b0835:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b0837:  // lea ecx, [ebx + 0x60]
    ecx = (uint32_t)((uint32_t)(ebx + 0x60u));
L_004b083a:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004b083c:  // mov esi, dword ptr [ecx]
    esi = (uint32_t)(M32((uint32_t)(ecx)));
L_004b083e:  // mov dword ptr [edx], esi
    M32((uint32_t)(edx)) = (uint32_t)(esi);
L_004b0840:  // mov esi, dword ptr [ecx + 4]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004b0843:  // mov dword ptr [edx + 4], esi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(esi);
L_004b0846:  // mov esi, dword ptr [ecx + 8]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004b0849:  // mov dword ptr [edx + 8], esi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(esi);
L_004b084c:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004b084f:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b0852:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004b0854:  // call 0x4b0800
    t0 = 0x004b0800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0859u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0859:  // mov eax, dword ptr [ebx + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_004b085f:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004b0860:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004b0862:  // jl 0x4b0818
    if ((f.sf != f.of)) goto L_004b0818;
L_004b0864:  // fld dword ptr [ebx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x60u)));
L_004b0867:  // fsub dword ptr [esp + 0x11c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x11cu)));
L_004b086e:  // mov edx, dword ptr [esp + 0x154]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x154u)));
L_004b0875:  // mov eax, dword ptr [esp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x144u)));
L_004b087c:  // mov ecx, dword ptr [esp + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x134u)));
L_004b0883:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b0884:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0885:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0886:  // fstp dword ptr [ebx + 0x60]
    F32((uint32_t)(ebx + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004b0889:  // fld dword ptr [ebx + 0x64]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x64u)));
L_004b088c:  // fsub dword ptr [esp + 0x12c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x12cu)));
L_004b0893:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004b0897:  // fstp dword ptr [ebx + 0x64]
    F32((uint32_t)(ebx + 0x64u)) = lf32(ST(0));
    lpop(x);
L_004b089a:  // fld dword ptr [ebx + 0x68]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x68u)));
L_004b089d:  // fsub dword ptr [esp + 0x130]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x130u)));
L_004b08a4:  // fstp dword ptr [ebx + 0x68]
    F32((uint32_t)(ebx + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004b08a7:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b08acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b08ac:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004b08b0:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_004b08b4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b08b5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b08b6:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_004b08bd:  // call 0x4b0c00
    t0 = 0x004b0c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b08c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b08c2:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004b08c6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b08c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b08c8:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_004b08cf:  // call 0x4aa3f0
    t0 = 0x004aa3f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b08d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b08d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b08d5:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004b08d9:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b08deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b08de:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004b08e2:  // fmul dword ptr [ebx + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x64u)));
L_004b08e5:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b08e9:  // fmul dword ptr [ebx + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x68u)));
L_004b08ec:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b08ee:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b08f2:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004b08f5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b08f7:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004b08fb:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004b08ff:  // fmul dword ptr [ebx + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x64u)));
L_004b0902:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b0906:  // fmul dword ptr [ebx + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x68u)));
L_004b0909:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b090d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b090f:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b0913:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004b0916:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0918:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004b091c:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b0920:  // fmul dword ptr [ebx + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x64u)));
L_004b0923:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b0927:  // fmul dword ptr [ebx + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x68u)));
L_004b092a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b092e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0930:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b0934:  // fmul dword ptr [ebx + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x60u)));
L_004b0937:  // mov dword ptr [ebx + 0x60], edx
    M32((uint32_t)(ebx + 0x60u)) = (uint32_t)(edx);
L_004b093a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b093e:  // mov dword ptr [ebx + 0x64], eax
    M32((uint32_t)(ebx + 0x64u)) = (uint32_t)(eax);
L_004b0941:  // mov eax, dword ptr [esp + 0x154]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x154u)));
L_004b0948:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b094a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b094b:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004b094f:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b0953:  // mov dword ptr [ebx + 0x68], ecx
    M32((uint32_t)(ebx + 0x68u)) = (uint32_t)(ecx);
L_004b0956:  // mov ecx, dword ptr [esp + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x148u)));
L_004b095d:  // mov dword ptr [ebx + 0x6c], edx
    M32((uint32_t)(ebx + 0x6cu)) = (uint32_t)(edx);
L_004b0960:  // mov edx, dword ptr [esp + 0x138]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x138u)));
L_004b0967:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0968:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b0969:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004b096d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0972u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0972:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004b0976:  // lea ecx, [esp + 0x68]
    ecx = (uint32_t)((uint32_t)(esp + 0x68u));
L_004b097a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b097b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b097c:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_004b0983:  // call 0x4b0c00
    t0 = 0x004b0c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0988u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0988:  // lea edx, [esp + 0x5c]
    edx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004b098c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b098d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b098e:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_004b0995:  // call 0x4aa3f0
    t0 = 0x004aa3f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b099au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b099a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b099b:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004b099f:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b09a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b09a4:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_004b09a8:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_004b09af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b09b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b09b1:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b09b3:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b09b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b09b8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b09ba:  // mov eax, dword ptr [ebx + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xbcu)));
L_004b09c0:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004b09c2:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b09c7:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_004b09c9:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004b09cb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b09cd:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_004b09d1:  // jle 0x4b0bef
    if ((f.zf || f.sf != f.of)) goto L_004b0bef;
L_004b09d7:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_004b09db:  // mov eax, dword ptr [esp + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_004b09e2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b09e4:  // je 0x4b0a3d
    if (f.zf) goto L_004b0a3d;
L_004b09e6:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b09ea:  // mov ecx, dword ptr [eax + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xbcu)));
L_004b09f0:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_004b09f2:  // jne 0x4b0a3d
    if (!f.zf) goto L_004b0a3d;
L_004b09f4:  // mov esi, dword ptr [eax + 0x10c]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x10cu)));
L_004b09fa:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b09fe:  // mov eax, dword ptr [eax + 0xc8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xc8u)));
L_004b0a04:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_004b0a06:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b0a0b:  // lea edi, [esp + 0x12c]
    edi = (uint32_t)((uint32_t)(esp + 0x12cu));
L_004b0a12:  // add eax, ebp
    t0 = ladd<32>(eax, ebp, f);
    eax = (uint32_t)(t0);
L_004b0a14:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b0a16:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004b0a18:  // mov dword ptr [esp + 0x11c], ecx
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(ecx);
L_004b0a1f:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b0a22:  // mov dword ptr [esp + 0x120], edx
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(edx);
L_004b0a29:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b0a2c:  // mov dword ptr [esp + 0x124], ecx
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(ecx);
L_004b0a33:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b0a36:  // mov dword ptr [esp + 0x128], edx
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(edx);
L_004b0a3d:  // mov edx, dword ptr [ebx + 0xc8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xc8u)));
L_004b0a43:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004b0a45:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b0a47:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004b0a49:  // fsub dword ptr [esp + 0x11c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x11cu)));
L_004b0a50:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004b0a52:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004b0a55:  // fsub dword ptr [esp + 0x120]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x120u)));
L_004b0a5c:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004b0a5f:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004b0a62:  // fsub dword ptr [esp + 0x124]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x124u)));
L_004b0a69:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004b0a6c:  // mov eax, dword ptr [esp + 0x154]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x154u)));
L_004b0a73:  // mov ecx, dword ptr [esp + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x144u)));
L_004b0a7a:  // mov edx, dword ptr [esp + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x134u)));
L_004b0a81:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0a82:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0a83:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b0a84:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004b0a88:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0a8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0a8d:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_004b0a91:  // lea ecx, [esp + 0x68]
    ecx = (uint32_t)((uint32_t)(esp + 0x68u));
L_004b0a95:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0a96:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0a97:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_004b0a9e:  // call 0x4b0c00
    t0 = 0x004b0c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0aa3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0aa3:  // lea edx, [esp + 0x7c]
    edx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004b0aa7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0aa8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b0aa9:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_004b0ab0:  // call 0x4aa3f0
    t0 = 0x004aa3f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0ab5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0ab5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0ab6:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004b0aba:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0abfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0abf:  // mov esi, dword ptr [ebx + 0xc8]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xc8u)));
L_004b0ac5:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004b0ac7:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b0acb:  // fmul dword ptr [eax + esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x4u)));
L_004b0acf:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b0ad3:  // fmul dword ptr [eax + esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + esi + 0x8u)));
L_004b0ad7:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004b0ad9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0ada:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0adc:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b0ae0:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b0ae2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0ae4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b0ae7:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b0aeb:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b0aee:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004b0af2:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b0af5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0af6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0af8:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b0afc:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b0afe:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0b00:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b0b03:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b0b07:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b0b0a:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b0b0e:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b0b11:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0b12:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004b0b16:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0b18:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b0b1c:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b0b1e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b0b20:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b0b23:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0b28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0b28:  // mov esi, dword ptr [ebx + 0xc8]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xc8u)));
L_004b0b2e:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004b0b30:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004b0b32:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b0b36:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b0b38:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b0b3c:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004b0b3f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b0b43:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b0b46:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b0b4a:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_004b0b51:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b0b54:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_004b0b5b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0b5c:  // call 0x4b0c20
    t0 = 0x004b0c20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0b61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0b61:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_004b0b68:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0b69:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0b6a:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_004b0b71:  // call 0x4b0c00
    t0 = 0x004b0c00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0b76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0b76:  // lea edx, [esp + 0xdc]
    edx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_004b0b7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0b7e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b0b7f:  // lea ecx, [esp + 0x138]
    ecx = (uint32_t)((uint32_t)(esp + 0x138u));
L_004b0b86:  // call 0x4aa3f0
    t0 = 0x004aa3f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0b8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0b8b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0b8c:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_004b0b93:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0b98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0b98:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_004b0b9e:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b0ba2:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004b0ba4:  // lea ecx, [esp + 0xe8]
    ecx = (uint32_t)((uint32_t)(esp + 0xe8u));
L_004b0bab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b0bac:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b0bad:  // lea ecx, [esp + 0xb0]
    ecx = (uint32_t)((uint32_t)(esp + 0xb0u));
L_004b0bb4:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0bb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0bb9:  // mov edi, dword ptr [ebx + 0x10c]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_004b0bbf:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b0bc3:  // add edi, esi
    t0 = ladd<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_004b0bc5:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b0bca:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b0bcc:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b0bd0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b0bd2:  // mov ecx, dword ptr [ebx + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xbcu)));
L_004b0bd8:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b0bd9:  // add ebp, 0x10
    t0 = ladd<32>(ebp, 0x10u, f);
    ebp = (uint32_t)(t0);
L_004b0bdc:  // add edx, 0x30
    t0 = ladd<32>(edx, 0x30u, f);
    edx = (uint32_t)(t0);
L_004b0bdf:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004b0be1:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004b0be5:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004b0be9:  // jl 0x4b09db
    if ((f.sf != f.of)) goto L_004b09db;
L_004b0bef:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b0bf0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b0bf1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b0bf2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b0bf3:  // add esp, 0x108
    t0 = ladd<32>(esp, 0x108u, f);
    esp = (uint32_t)(t0);
L_004b0bf9:  // ret 0x44
    c->target = M32(esp); esp += 72u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b0800, 004b0800)
