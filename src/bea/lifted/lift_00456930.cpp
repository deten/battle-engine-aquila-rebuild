// lifted from 00456930 (vslot2, 1029 bytes, 305 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00456930(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00456930;
L_00456930:  // mov eax, dword ptr [0x677614]
    eax = (uint32_t)(M32((uint32_t)(0x677614u)));
L_00456935:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00456938:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045693a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045693b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045693c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045693d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045693e:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00456940:  // je 0x45696f
    if (f.zf) goto L_0045696f;
L_00456942:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_00456947:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00456949:  // je 0x456cca
    if (f.zf) goto L_00456cca;
L_0045694f:  // mov eax, dword ptr [0x629138]
    eax = (uint32_t)(M32((uint32_t)(0x629138u)));
L_00456954:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00456955:  // mov dword ptr [0x629138], eax
    M32((uint32_t)(0x629138u)) = (uint32_t)(eax);
L_0045695a:  // jne 0x456cca
    if (!f.zf) goto L_00456cca;
L_00456960:  // mov dword ptr [0x677614], 0
    M32((uint32_t)(0x677614u)) = (uint32_t)(0x0u);
L_0045696a:  // jmp 0x456cca
    goto L_00456cca;
L_0045696f:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00456973:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00456975:  // jne 0x456cca
    if (!f.zf) goto L_00456cca;
L_0045697b:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_00456980:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00456982:  // je 0x4569a2
    if (f.zf) goto L_004569a2;
L_00456984:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00456987:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_0045698d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045698f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00456992:  // jne 0x4569a2
    if (!f.zf) goto L_004569a2;
L_00456994:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00456996:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045699b:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_0045699d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0045699f:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004569a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004569a2:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004569a5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004569a7:  // je 0x456b27
    if (f.zf) goto L_00456b27;
L_004569ad:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004569b0:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004569b2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004569b4:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004569b8:  // jle 0x456ab2
    if ((f.zf || f.sf != f.of)) goto L_00456ab2;
L_004569be:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004569c0:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004569c3:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004569c5:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004569c7:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004569cd:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004569cf:  // mov edi, dword ptr [esi + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004569d2:  // mov ebx, dword ptr [esi + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004569d5:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004569d7:  // lea ecx, [edi + ecx*8]
    ecx = (uint32_t)((uint32_t)(edi + ecx * 8u));
L_004569da:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_004569dc:  // mov ecx, dword ptr [ecx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004569df:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004569e1:  // je 0x456a9b
    if (f.zf) goto L_00456a9b;
L_004569e7:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004569ee:  // jne 0x456a50
    if (!f.zf) goto L_00456a50;
L_004569f0:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004569f2:  // lea edi, [ecx + 0x80]
    edi = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004569f8:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_004569fa:  // mov dword ptr [edi], ebp
    M32((uint32_t)(edi)) = (uint32_t)(ebp);
L_004569fc:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004569ff:  // mov dword ptr [edi + 4], ebp
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebp);
L_00456a02:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00456a05:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_00456a08:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00456a0b:  // mov dword ptr [edi + 0xc], ebx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ebx);
L_00456a0e:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00456a10:  // lea edi, [ecx + 0x40]
    edi = (uint32_t)((uint32_t)(ecx + 0x40u));
L_00456a13:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_00456a15:  // mov dword ptr [edi], ebp
    M32((uint32_t)(edi)) = (uint32_t)(ebp);
L_00456a17:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00456a1a:  // mov dword ptr [edi + 4], ebp
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebp);
L_00456a1d:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00456a20:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_00456a23:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00456a26:  // mov dword ptr [edi + 0xc], ebx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ebx);
L_00456a29:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_00456a2b:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00456a2d:  // mov dword ptr [edi], ebx
    M32((uint32_t)(edi)) = (uint32_t)(ebx);
L_00456a2f:  // mov ebx, dword ptr [eax + 4]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00456a32:  // mov dword ptr [edi + 4], ebx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebx);
L_00456a35:  // mov ebx, dword ptr [eax + 8]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00456a38:  // mov dword ptr [edi + 8], ebx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebx);
L_00456a3b:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00456a3e:  // mov dword ptr [edi + 0xc], eax
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(eax);
L_00456a41:  // mov eax, dword ptr [ecx + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_00456a47:  // cmp eax, 0xbf800000
    t0 = lsub<32>(eax, 0xbf800000u, f);
L_00456a4c:  // je 0x456a9b
    if (f.zf) goto L_00456a9b;
L_00456a4e:  // jmp 0x456a90
    goto L_00456a90;
L_00456a50:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00456a52:  // lea edi, [ecx + 0x40]
    edi = (uint32_t)((uint32_t)(ecx + 0x40u));
L_00456a55:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_00456a57:  // mov dword ptr [edi], ebp
    M32((uint32_t)(edi)) = (uint32_t)(ebp);
L_00456a59:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00456a5c:  // mov dword ptr [edi + 4], ebp
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebp);
L_00456a5f:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00456a62:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_00456a65:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00456a68:  // mov dword ptr [edi + 0xc], ebx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ebx);
L_00456a6b:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_00456a6d:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00456a6f:  // mov dword ptr [edi], ebx
    M32((uint32_t)(edi)) = (uint32_t)(ebx);
L_00456a71:  // mov ebx, dword ptr [eax + 4]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00456a74:  // mov dword ptr [edi + 4], ebx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebx);
L_00456a77:  // mov ebx, dword ptr [eax + 8]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00456a7a:  // mov dword ptr [edi + 8], ebx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebx);
L_00456a7d:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00456a80:  // mov dword ptr [edi + 0xc], eax
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(eax);
L_00456a83:  // mov eax, dword ptr [ecx + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_00456a89:  // cmp eax, 0xbf800000
    t0 = lsub<32>(eax, 0xbf800000u, f);
L_00456a8e:  // je 0x456a9b
    if (f.zf) goto L_00456a9b;
L_00456a90:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00456a95:  // mov dword ptr [ecx + 0xac], eax
    M32((uint32_t)(ecx + 0xacu)) = (uint32_t)(eax);
L_00456a9b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00456a9f:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00456aa2:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00456aa3:  // add edx, 0x10
    t0 = ladd<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_00456aa6:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00456aa8:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00456aac:  // jl 0x4569c0
    if ((f.sf != f.of)) goto L_004569c0;
L_00456ab2:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_00456ab5:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00456ab7:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00456ab9:  // je 0x456b27
    if (f.zf) goto L_00456b27;
L_00456abb:  // cmp dword ptr [esi + 0x10], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x10u)), edi, f);
L_00456abe:  // jle 0x456b27
    if ((f.zf || f.sf != f.of)) goto L_00456b27;
L_00456ac0:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00456ac3:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_00456ac5:  // fcomp dword ptr [0x5db498]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db498u)));
    lpop(x);
L_00456acb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456acd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00456ad0:  // jne 0x456b27
    if (!f.zf) goto L_00456b27;
L_00456ad2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00456ad3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00456ad5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00456ad6:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00456ad8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00456ad9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00456adb:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00456ae0:  // mov dword ptr [esi + 0x14], edi
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(edi);
L_00456ae3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456ae8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456ae8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456ae9:  // push 0x37416e9
    t0 = 0x37416e9u; esp -= 4; M32(esp) = t0;
L_00456aee:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00456af3:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456af8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456af8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00456af9:  // push 0x3c23d70a
    t0 = 0x3c23d70au; esp -= 4; M32(esp) = t0;
L_00456afe:  // push 0x43af0000
    t0 = 0x43af0000u; esp -= 4; M32(esp) = t0;
L_00456b03:  // push 0x43870000
    t0 = 0x43870000u; esp -= 4; M32(esp) = t0;
L_00456b08:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_00456b0d:  // mov ecx, 0x675688
    ecx = (uint32_t)(0x675688u);
L_00456b12:  // call 0x44d390
    t0 = 0x0044d390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456b17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456b17:  // mov dword ptr [0x677630], 0xfffffffe
    M32((uint32_t)(0x677630u)) = (uint32_t)(0xfffffffeu);
L_00456b21:  // mov dword ptr [0x677634], edi
    M32((uint32_t)(0x677634u)) = (uint32_t)(edi);
L_00456b27:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00456b2c:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456b31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456b31:  // fcomp dword ptr [esi + 0x1c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x1cu)));
    lpop(x);
L_00456b34:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456b36:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00456b39:  // je 0x456b42
    if (f.zf) goto L_00456b42;
L_00456b3b:  // push 0x629170
    t0 = 0x629170u; esp -= 4; M32(esp) = t0;
L_00456b40:  // jmp 0x456b47
    goto L_00456b47;
L_00456b42:  // push 0x629160
    t0 = 0x629160u; esp -= 4; M32(esp) = t0;
L_00456b47:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00456b4c:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456b51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456b51:  // mov edx, dword ptr [esi + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00456b54:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00456b58:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00456b5b:  // mov dword ptr [esp + 0x10], 0xc0400000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xc0400000u);
L_00456b63:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00456b65:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00456b6d:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_00456b75:  // jge 0x456cca
    if ((f.sf == f.of)) goto L_00456cca;
L_00456b7b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00456b80:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456b85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456b85:  // fcomp dword ptr [esi + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x18u)));
    lpop(x);
L_00456b88:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456b8a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00456b8d:  // jne 0x456cca
    if (!f.zf) goto L_00456cca;
L_00456b93:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00456b96:  // mov edi, dword ptr [esi + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00456b99:  // mov ebx, dword ptr [esp + 0x14]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00456b9d:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00456ba1:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00456ba4:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00456ba6:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00456baa:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00456bae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456bb0:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_00456bb2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00456bb4:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00456bb7:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_00456bba:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00456bbc:  // mov dword ptr [eax + 8], ebp
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebp);
L_00456bbf:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_00456bc2:  // mov eax, dword ptr [0x677db0]
    eax = (uint32_t)(M32((uint32_t)(0x677db0u)));
L_00456bc7:  // mov ecx, dword ptr [0x677db4]
    ecx = (uint32_t)(M32((uint32_t)(0x677db4u)));
L_00456bcd:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00456bcf:  // mov eax, dword ptr [0x677db8]
    eax = (uint32_t)(M32((uint32_t)(0x677db8u)));
L_00456bd4:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00456bd7:  // mov ecx, dword ptr [0x677dbc]
    ecx = (uint32_t)(M32((uint32_t)(0x677dbcu)));
L_00456bdd:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00456be0:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00456be3:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00456be6:  // mov edx, dword ptr [esi + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00456be9:  // lea ecx, [eax + edx*8]
    ecx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_00456bec:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00456bf0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00456bf1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00456bf2:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00456bf7:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456bfcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456bfc:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00456bff:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00456c02:  // lea eax, [ecx + eax*8]
    eax = (uint32_t)((uint32_t)(ecx + eax * 8u));
L_00456c05:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00456c08:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00456c0a:  // je 0x456cb0
    if (f.zf) goto L_00456cb0;
L_00456c10:  // cmp dword ptr [eax + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(eax + 0x48u)), 0x461c4000u, f);
L_00456c17:  // jne 0x456c66
    if (!f.zf) goto L_00456c66;
L_00456c19:  // lea edx, [eax + 0x80]
    edx = (uint32_t)((uint32_t)(eax + 0x80u));
L_00456c1f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00456c23:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_00456c25:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_00456c28:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_00456c2b:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00456c2e:  // lea edx, [eax + 0x40]
    edx = (uint32_t)((uint32_t)(eax + 0x40u));
L_00456c31:  // mov dword ptr [eax + 0x40], edi
    M32((uint32_t)(eax + 0x40u)) = (uint32_t)(edi);
L_00456c34:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_00456c37:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_00456c3a:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00456c3d:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00456c3f:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_00456c41:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_00456c44:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_00456c47:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00456c4a:  // mov ecx, dword ptr [eax + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_00456c50:  // cmp ecx, 0xbf800000
    t0 = lsub<32>(ecx, 0xbf800000u, f);
L_00456c56:  // je 0x456cb0
    if (f.zf) goto L_00456cb0;
L_00456c58:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00456c5e:  // mov dword ptr [eax + 0xac], ecx
    M32((uint32_t)(eax + 0xacu)) = (uint32_t)(ecx);
L_00456c64:  // jmp 0x456cb0
    goto L_00456cb0;
L_00456c66:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00456c68:  // lea edx, [eax + 0x40]
    edx = (uint32_t)((uint32_t)(eax + 0x40u));
L_00456c6b:  // mov ebp, dword ptr [ecx]
    ebp = (uint32_t)(M32((uint32_t)(ecx)));
L_00456c6d:  // mov dword ptr [edx], ebp
    M32((uint32_t)(edx)) = (uint32_t)(ebp);
L_00456c6f:  // mov ebp, dword ptr [ecx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00456c72:  // mov dword ptr [edx + 4], ebp
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebp);
L_00456c75:  // mov ebp, dword ptr [ecx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00456c78:  // mov dword ptr [edx + 8], ebp
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebp);
L_00456c7b:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00456c7e:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00456c81:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00456c85:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00456c87:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_00456c89:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_00456c8c:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00456c8f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00456c93:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00456c96:  // mov ecx, dword ptr [eax + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_00456c9c:  // cmp ecx, 0xbf800000
    t0 = lsub<32>(ecx, 0xbf800000u, f);
L_00456ca2:  // je 0x456cb0
    if (f.zf) goto L_00456cb0;
L_00456ca4:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00456caa:  // mov dword ptr [eax + 0xac], edx
    M32((uint32_t)(eax + 0xacu)) = (uint32_t)(edx);
L_00456cb0:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00456cb3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00456cb8:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00456cb9:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_00456cbc:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00456cc1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00456cc1:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00456cc7:  // fstp dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00456cca:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00456ccd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00456cd3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456cd5:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00456cd8:  // je 0x456cfb
    if (f.zf) goto L_00456cfb;
L_00456cda:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00456cdd:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00456ce0:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00456ce3:  // fld dword ptr [eax + ecx - 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + ecx + 0xfffffff0u)));
L_00456ce7:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00456ced:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456cef:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00456cf2:  // jne 0x456cfb
    if (!f.zf) goto L_00456cfb;
L_00456cf4:  // mov dword ptr [esi + 8], 0x3a83126f
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(0x3a83126fu);
L_00456cfb:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00456cfe:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00456d04:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456d06:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00456d09:  // jne 0x456d2b
    if (!f.zf) goto L_00456d2b;
L_00456d0b:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_00456d0e:  // fadd dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cb8u)));
L_00456d14:  // fst dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
L_00456d17:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00456d1d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00456d1f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00456d22:  // jne 0x456d2b
    if (!f.zf) goto L_00456d2b;
L_00456d24:  // mov dword ptr [esi + 8], 0x3f800000
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(0x3f800000u);
L_00456d2b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00456d2c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00456d2d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00456d2e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00456d2f:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00456d32:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00456930, 00456930)
