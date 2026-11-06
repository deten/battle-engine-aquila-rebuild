// lifted from 005528b0 (FUN_005528b0, 4270 bytes, 911 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005528b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005528b0;
L_005528b0:  // sub esp, 0x30c
    t0 = lsub<32>(esp, 0x30cu, f);
    esp = (uint32_t)(t0);
L_005528b6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005528b7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005528b8:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_005528ba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005528bb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005528bc:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005528c1:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_005528c5:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005528cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005528ca:  // fcom dword ptr [0x9c7cd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x9c7cd0u)));
L_005528d0:  // mov dword ptr [0x652230], 1
    M32((uint32_t)(0x652230u)) = (uint32_t)(0x1u);
L_005528da:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005528dc:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_005528df:  // jne 0x552926
    if (!f.zf) goto L_00552926;
L_005528e1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005528e3:  // fsub dword ptr [0x9c7cd0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x9c7cd0u)));
L_005528e9:  // fcom dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
L_005528ef:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005528f1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005528f4:  // je 0x552924
    if (f.zf) goto L_00552924;
L_005528f6:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_005528fc:  // fcom dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
L_00552902:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00552904:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00552907:  // jne 0x552924
    if (!f.zf) goto L_00552924;
L_00552909:  // fistp qword ptr [esp + 0x164]
    M64((uint32_t)(esp + 0x164u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00552910:  // mov ax, word ptr [esp + 0x164]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x164u))) & 0xffffu);
L_00552918:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_0055291d:  // mov dword ptr [0x652230], eax
    M32((uint32_t)(0x652230u)) = (uint32_t)(eax);
L_00552922:  // jmp 0x552926
    goto L_00552926;
L_00552924:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00552926:  // mov al, byte ptr [0x89d680]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89d680u))) & 0xffu);
L_0055292b:  // fstp dword ptr [0x9c7cd0]
    F32((uint32_t)(0x9c7cd0u)) = lf32(ST(0));
    lpop(x);
L_00552931:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00552933:  // jne 0x553953
    if (!f.zf) goto L_00553953;
L_00552939:  // mov al, byte ptr [ebp + 0x704]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x704u))) & 0xffu);
L_0055293f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00552941:  // je 0x553953
    if (f.zf) goto L_00553953;
L_00552947:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_0055294c:  // call 0x51a270
    t0 = 0x0051a270u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552951u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552951:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00552953:  // mov dword ptr [0x704e48], 4
    M32((uint32_t)(0x704e48u)) = (uint32_t)(0x4u);
L_0055295d:  // call 0x552740
    t0 = 0x00552740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552962u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552962:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00552964:  // call 0x552800
    t0 = 0x00552800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552969u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552969:  // mov al, byte ptr [0x89d680]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89d680u))) & 0xffu);
L_0055296e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00552970:  // jne 0x552999
    if (!f.zf) goto L_00552999;
L_00552972:  // mov ecx, dword ptr [ebp + 0x5bc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x5bcu)));
L_00552978:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0055297a:  // je 0x552999
    if (f.zf) goto L_00552999;
L_0055297c:  // lea eax, [ebp + 0x110]
    eax = (uint32_t)((uint32_t)(ebp + 0x110u));
L_00552982:  // cmp byte ptr [eax + 2], 1
    t0 = lsub<8>(M8((uint32_t)(eax + 0x2u)), 0x1u, f);
L_00552986:  // jne 0x552993
    if (!f.zf) goto L_00552993;
L_00552988:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0055298a:  // mov byte ptr [eax + 1], 1
    M8((uint32_t)(eax + 0x1u)) = (uint8_t)(0x1u);
L_0055298e:  // add dl, 0xfe
    t0 = ladd<8>((edx & 0xffu), 0xfeu, f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00552991:  // mov byte ptr [eax], dl
    M8((uint32_t)(eax)) = (uint8_t)((edx & 0xffu));
L_00552993:  // add eax, 0x20
    t0 = ladd<32>(eax, 0x20u, f);
    eax = (uint32_t)(t0);
L_00552996:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00552997:  // jne 0x552982
    if (!f.zf) goto L_00552982;
L_00552999:  // mov eax, dword ptr [0x9c7c8c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_0055299e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_005529a0:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_005529a2:  // jne 0x5529bf
    if (!f.zf) goto L_005529bf;
L_005529a4:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_005529a6:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_005529a8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005529ad:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005529b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005529b2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005529b3:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_005529b5:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005529ba:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005529bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005529bf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005529c1:  // mov byte ptr [eax + 0x9c68a0], 0
    M8((uint32_t)(eax + 0x9c68a0u)) = (uint8_t)(0x0u);
L_005529c8:  // mov byte ptr [eax + 0x9c6904], 1
    M8((uint32_t)(eax + 0x9c6904u)) = (uint8_t)(0x1u);
L_005529cf:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_005529d0:  // cmp eax, 8
    t0 = lsub<32>(eax, 0x8u, f);
L_005529d3:  // jl 0x5529c1
    if ((f.sf != f.of)) goto L_005529c1;
L_005529d5:  // mov eax, dword ptr [0x9c7c8c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_005529da:  // mov dword ptr [0x9c68a8], 0xffffffff
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(0xffffffffu);
L_005529e4:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_005529e6:  // jne 0x5529ee
    if (!f.zf) goto L_005529ee;
L_005529e8:  // mov dword ptr [0x9c68a8], ebx
    M32((uint32_t)(0x9c68a8u)) = (uint32_t)(ebx);
L_005529ee:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_005529f3:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_005529f8:  // lea edi, [esp + 0x25c]
    edi = (uint32_t)((uint32_t)(esp + 0x25cu));
L_005529ff:  // mov byte ptr [0x9c690c], 1
    M8((uint32_t)(0x9c690cu)) = (uint8_t)(0x1u);
L_00552a06:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_00552a0d:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00552a14:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00552a19:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00552a1d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00552a1f:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00552a24:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_00552a29:  // lea edi, [esp + 0x29c]
    edi = (uint32_t)((uint32_t)(esp + 0x29cu));
L_00552a30:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00552a31:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00552a33:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00552a38:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00552a3d:  // lea edi, [esp + 0x2e0]
    edi = (uint32_t)((uint32_t)(esp + 0x2e0u));
L_00552a44:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00552a45:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00552a47:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00552a49:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552a4a:  // call dword ptr [ecx + 0x98]
    t0 = M32((uint32_t)(ecx + 0x98u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552a50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552a50:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00552a52:  // jl 0x552a6b
    if ((f.sf != f.of)) goto L_00552a6b;
L_00552a54:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00552a59:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00552a5d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00552a5e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552a5f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00552a61:  // call dword ptr [ecx + 0xa0]
    t0 = M32((uint32_t)(ecx + 0xa0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552a67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552a67:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00552a69:  // jge 0x552a91
    if ((f.sf == f.of)) goto L_00552a91;
L_00552a6b:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_00552a70:  // mov byte ptr [ebp + 0x704], 0
    M8((uint32_t)(ebp + 0x704u)) = (uint8_t)(0x0u);
L_00552a77:  // mov byte ptr [ebp + 0x706], 1
    M8((uint32_t)(ebp + 0x706u)) = (uint8_t)(0x1u);
L_00552a7e:  // call 0x4d1710
    t0 = 0x004d1710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552a83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552a83:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00552a86:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00552a87:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00552a88:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00552a89:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00552a8a:  // add esp, 0x30c
    t0 = ladd<32>(esp, 0x30cu, f);
    esp = (uint32_t)(t0);
L_00552a90:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00552a91:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00552a96:  // lea esi, [esp + 0x1dc]
    esi = (uint32_t)((uint32_t)(esp + 0x1dcu));
L_00552a9d:  // mov edi, 0x9c6914
    edi = (uint32_t)(0x9c6914u);
L_00552aa2:  // mov dword ptr [esp + 0x1dc], 0x3f800000
    M32((uint32_t)(esp + 0x1dcu)) = (uint32_t)(0x3f800000u);
L_00552aad:  // mov dword ptr [esp + 0x1e0], 0
    M32((uint32_t)(esp + 0x1e0u)) = (uint32_t)(0x0u);
L_00552ab8:  // mov dword ptr [esp + 0x1e4], 0
    M32((uint32_t)(esp + 0x1e4u)) = (uint32_t)(0x0u);
L_00552ac3:  // mov dword ptr [esp + 0x1e8], 0
    M32((uint32_t)(esp + 0x1e8u)) = (uint32_t)(0x0u);
L_00552ace:  // mov dword ptr [esp + 0x1ec], 0
    M32((uint32_t)(esp + 0x1ecu)) = (uint32_t)(0x0u);
L_00552ad9:  // mov dword ptr [esp + 0x1f0], 0x3f800000
    M32((uint32_t)(esp + 0x1f0u)) = (uint32_t)(0x3f800000u);
L_00552ae4:  // mov dword ptr [esp + 0x1f4], 0
    M32((uint32_t)(esp + 0x1f4u)) = (uint32_t)(0x0u);
L_00552aef:  // mov dword ptr [esp + 0x1f8], 0
    M32((uint32_t)(esp + 0x1f8u)) = (uint32_t)(0x0u);
L_00552afa:  // mov dword ptr [esp + 0x1fc], 0
    M32((uint32_t)(esp + 0x1fcu)) = (uint32_t)(0x0u);
L_00552b05:  // mov dword ptr [esp + 0x200], 0
    M32((uint32_t)(esp + 0x200u)) = (uint32_t)(0x0u);
L_00552b10:  // mov dword ptr [esp + 0x204], 0x3f800000
    M32((uint32_t)(esp + 0x204u)) = (uint32_t)(0x3f800000u);
L_00552b1b:  // mov dword ptr [esp + 0x208], 0
    M32((uint32_t)(esp + 0x208u)) = (uint32_t)(0x0u);
L_00552b26:  // mov dword ptr [esp + 0x20c], 0
    M32((uint32_t)(esp + 0x20cu)) = (uint32_t)(0x0u);
L_00552b31:  // mov dword ptr [esp + 0x210], 0
    M32((uint32_t)(esp + 0x210u)) = (uint32_t)(0x0u);
L_00552b3c:  // mov dword ptr [esp + 0x214], 0
    M32((uint32_t)(esp + 0x214u)) = (uint32_t)(0x0u);
L_00552b47:  // mov dword ptr [esp + 0x218], 0x3f800000
    M32((uint32_t)(esp + 0x218u)) = (uint32_t)(0x3f800000u);
L_00552b52:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00552b54:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00552b56:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_00552b58:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00552b5d:  // mov byte ptr [0x9c73e8], 1
    M8((uint32_t)(0x9c73e8u)) = (uint8_t)(0x1u);
L_00552b64:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552b69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552b69:  // mov eax, dword ptr [0x89ce4c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_00552b6e:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_00552b74:  // mov ecx, dword ptr [eax*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89c9a4u)));
L_00552b7b:  // lea eax, [esp + 0x23c]
    eax = (uint32_t)((uint32_t)(esp + 0x23cu));
L_00552b82:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00552b84:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552b85:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00552b89:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552b8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552b8b:  // mov eax, dword ptr [ebp + 0x5bc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x5bcu)));
L_00552b91:  // lea edi, [ebp + 0x10c]
    edi = (uint32_t)((uint32_t)(ebp + 0x10cu));
L_00552b97:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00552b99:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00552b9d:  // mov dword ptr [esp + 0x4c], ebx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ebx);
L_00552ba1:  // jle 0x553820
    if ((f.zf || f.sf != f.of)) goto L_00553820;
L_00552ba7:  // lea ecx, [ebp + 0x640]
    ecx = (uint32_t)((uint32_t)(ebp + 0x640u));
L_00552bad:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00552bb1:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00552bb5:  // cmp dword ptr [edx], 0
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x0u, f);
L_00552bb8:  // je 0x55384a
    if (f.zf) goto L_0055384a;
L_00552bbe:  // mov esi, dword ptr [edi]
    esi = (uint32_t)(M32((uint32_t)(edi)));
L_00552bc0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00552bc2:  // mov dword ptr [esp + 0x164], esi
    M32((uint32_t)(esp + 0x164u)) = (uint32_t)(esi);
L_00552bc9:  // je 0x5537f7
    if (f.zf) goto L_005537f7;
L_00552bcf:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00552bd2:  // add esi, 8
    t0 = ladd<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_00552bd5:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00552bd9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00552bda:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00552bdc:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552bdeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552bde:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00552be0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00552be2:  // call dword ptr [edx + 0x54]
    t0 = M32((uint32_t)(edx + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552be5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552be5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00552be7:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00552beb:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00552bf0:  // mov dword ptr [esp + 0x90], esi
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(esi);
L_00552bf7:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552bfcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552bfc:  // fcom dword ptr [esp + 0x48]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x48u)));
L_00552c00:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00552c02:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00552c05:  // jne 0x552c0d
    if (!f.zf) goto L_00552c0d;
L_00552c07:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00552c09:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00552c0d:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00552c11:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00552c13:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00552c17:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00552c1b:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00552c1f:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00552c23:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_00552c27:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00552c2b:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00552c2f:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00552c33:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00552c39:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00552c3b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00552c3e:  // je 0x552c62
    if (f.zf) goto L_00552c62;
L_00552c40:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00552c44:  // fmul dword ptr [ebp + 0x5a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5a4u)));
L_00552c4a:  // fadd dword ptr [esp + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x50u)));
L_00552c4e:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00552c52:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00552c56:  // fmul dword ptr [ebp + 0x5a8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5a8u)));
L_00552c5c:  // fadd dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00552c60:  // jmp 0x552c66
    goto L_00552c66;
L_00552c62:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00552c66:  // fld dword ptr [ebp + 0x5a4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x5a4u)));
L_00552c6c:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_00552c6f:  // lea eax, [edi + 0x10]
    eax = (uint32_t)((uint32_t)(edi + 0x10u));
L_00552c72:  // fsubr dword ptr [esp + 0x38]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x38u))) - (ST(0));
L_00552c76:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00552c7a:  // fld dword ptr [ebp + 0x5a8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x5a8u)));
L_00552c80:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_00552c83:  // mov esi, dword ptr [esp + 0x38]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00552c87:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_00552c89:  // fsubr st(1)
    ST(0) = (ST(1)) - (ST(0));
L_00552c8b:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00552c8f:  // mov esi, dword ptr [esp + 0x3c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00552c93:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00552c95:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00552c99:  // fsub dword ptr [esp + 0x23c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x23cu)));
L_00552ca0:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_00552ca3:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00552ca6:  // fstp dword ptr [esp + 0x1cc]
    F32((uint32_t)(esp + 0x1ccu)) = lf32(ST(0));
    lpop(x);
L_00552cad:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00552cb1:  // fsub dword ptr [esp + 0x240]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x240u)));
L_00552cb8:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00552cba:  // fsub dword ptr [esp + 0x244]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x244u)));
L_00552cc1:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00552cc4:  // mov eax, 0x80
    eax = (uint32_t)(0x80u);
L_00552cc9:  // fst dword ptr [esp + 0x1d4]
    F32((uint32_t)(esp + 0x1d4u)) = lf32(ST(0));
L_00552cd0:  // fld dword ptr [esp + 0x1cc]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1ccu)));
L_00552cd7:  // fmul dword ptr [esp + 0x1cc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1ccu)));
L_00552cde:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00552ce0:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00552ce2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00552ce4:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00552ce6:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00552ce8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00552cea:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00552cec:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00552cee:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00552cf0:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00552cf4:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00552cfa:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00552cfc:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00552d00:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00552d04:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00552d06:  // jns 0x552d0c
    if (!f.sf) goto L_00552d0c;
L_00552d08:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00552d0a:  // jmp 0x552d18
    goto L_00552d18;
L_00552d0c:  // cmp eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
L_00552d11:  // jle 0x552d18
    if ((f.zf || f.sf != f.of)) goto L_00552d18;
L_00552d13:  // mov eax, 0x80
    eax = (uint32_t)(0x80u);
L_00552d18:  // movsx edx, byte ptr [edi + 4]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edi + 0x4u))));
L_00552d1c:  // imul edx, eax
    t0 = limul32(edx, eax, f);
    edx = (uint32_t)(t0);
L_00552d1f:  // mov al, byte ptr [edi + 8]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x8u))) & 0xffu);
L_00552d22:  // sar edx, 5
    t0 = lsar<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_00552d25:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00552d27:  // mov byte ptr [edi + 7], dl
    M8((uint32_t)(edi + 0x7u)) = (uint8_t)((edx & 0xffu));
L_00552d2a:  // jne 0x5537f4
    if (!f.zf) goto L_005537f4;
L_00552d30:  // mov ecx, 0x9c7c58
    ecx = (uint32_t)(0x9c7c58u);
L_00552d35:  // call 0x527dd0
    t0 = 0x00527dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552d3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552d3a:  // mov ecx, dword ptr [0x9c7c8c]
    ecx = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_00552d40:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00552d41:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00552d43:  // je 0x552d49
    if (f.zf) goto L_00552d49;
L_00552d45:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00552d47:  // jmp 0x552d6a
    goto L_00552d6a;
L_00552d49:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00552d4b:  // mov edx, 0xff
    edx = (uint32_t)(0xffu);
L_00552d50:  // mov cl, byte ptr [edi + 7]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x7u))) & 0xffu);
L_00552d53:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00552d55:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00552d57:  // sar edx, cl
    t0 = lsar<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_00552d59:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00552d5b:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00552d5e:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00552d60:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00552d63:  // lea ebx, [eax + edx - 0x1000000]
    ebx = (uint32_t)((uint32_t)(eax + edx + 0xff000000u));
L_00552d6a:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00552d6e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00552d70:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00552d73:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00552d77:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00552d78:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00552d7a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00552d7c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552d7d:  // call dword ptr [ecx + 0x48]
    t0 = M32((uint32_t)(ecx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552d80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552d80:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00552d82:  // jl 0x5537f0
    if ((f.sf != f.of)) goto L_005537f0;
L_00552d88:  // mov eax, dword ptr [0x9c7c8c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_00552d8d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00552d8f:  // je 0x552dc6
    if (f.zf) goto L_00552dc6;
L_00552d91:  // mov esi, dword ptr [0x888a50]
    esi = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00552d97:  // mov eax, dword ptr [ebp + 0x6c0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x6c0u)));
L_00552d9d:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00552da1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552da2:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00552da4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00552da5:  // call dword ptr [ecx + 0x9c]
    t0 = M32((uint32_t)(ecx + 0x9cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552dabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552dab:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00552dad:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00552daf:  // jge 0x552dc1
    if ((f.sf == f.of)) goto L_00552dc1;
L_00552db1:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00552db3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552db4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00552db6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00552db7:  // call dword ptr [edx + 0x94]
    t0 = M32((uint32_t)(edx + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552dbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552dbd:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00552dbf:  // jmp 0x552dfd
    goto L_00552dfd;
L_00552dc1:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00552dc3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552dc4:  // jmp 0x552df4
    goto L_00552df4;
L_00552dc6:  // mov esi, dword ptr [0x888a50]
    esi = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00552dcc:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00552dd0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00552dd2:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00552dd3:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00552dd5:  // call dword ptr [ecx + 0x9c]
    t0 = M32((uint32_t)(ecx + 0x9cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552ddbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552ddb:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00552ddd:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00552ddf:  // jge 0x552df1
    if ((f.sf == f.of)) goto L_00552df1;
L_00552de1:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00552de3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00552de4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00552de6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00552de7:  // call dword ptr [edx + 0x94]
    t0 = M32((uint32_t)(edx + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552dedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552ded:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00552def:  // jmp 0x552dfd
    goto L_00552dfd;
L_00552df1:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00552df3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00552df4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00552df6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00552df7:  // call dword ptr [eax + 0x94]
    t0 = M32((uint32_t)(eax + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552dfdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552dfd:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00552dff:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00552e03:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552e04:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00552e06:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552e09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552e09:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00552e0b:  // jl 0x5537e8
    if ((f.sf != f.of)) goto L_005537e8;
L_00552e11:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00552e16:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552e17:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00552e19:  // call dword ptr [edx + 0xa4]
    t0 = M32((uint32_t)(edx + 0xa4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552e1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552e1f:  // mov eax, dword ptr [0x9c7c8c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_00552e24:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00552e26:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00552e28:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00552e2d:  // je 0x552e45
    if (f.zf) goto L_00552e45;
L_00552e2f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00552e31:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552e32:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00552e37:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00552e38:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00552e3a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552e3b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552e3c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552e3d:  // call dword ptr [ecx + 0xac]
    t0 = M32((uint32_t)(ecx + 0xacu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552e43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552e43:  // jmp 0x552e59
    goto L_00552e59;
L_00552e45:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00552e47:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552e48:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00552e4d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00552e4e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00552e50:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552e51:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552e52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552e53:  // call dword ptr [edx + 0xac]
    t0 = M32((uint32_t)(edx + 0xacu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552e59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552e59:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00552e5b:  // jl 0x5537da
    if ((f.sf != f.of)) goto L_005537da;
L_00552e61:  // cmp dword ptr [0x9c7c8c], ebp
    t0 = lsub<32>(M32((uint32_t)(0x9c7c8cu)), ebp, f);
L_00552e67:  // je 0x553255
    if (f.zf) goto L_00553255;
L_00552e6d:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_00552e71:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00552e73:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00552e74:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_00552e79:  // call 0x51a380
    t0 = 0x0051a380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552e7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552e7e:  // cmp ax, 0xffff
    t0 = lsub<16>((eax & 0xffffu), 0xffffu, f);
L_00552e82:  // je 0x553255
    if (f.zf) goto L_00553255;
L_00552e88:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00552e89:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00552e8b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00552e90:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552e95u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552e95:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00552e97:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00552e99:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00552e9e:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00552ea3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00552ea3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00552ea5:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00552ea9:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00552eac:  // cmp eax, 0x118
    t0 = lsub<32>(eax, 0x118u, f);
L_00552eb1:  // mov dword ptr [ecx + eax - 0xc], ebp
    M32((uint32_t)(ecx + eax + 0xfffffff4u)) = (uint32_t)(ebp);
L_00552eb5:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00552eb9:  // mov dword ptr [edx + eax - 8], ebp
    M32((uint32_t)(edx + eax + 0xfffffff8u)) = (uint32_t)(ebp);
L_00552ebd:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00552ec1:  // mov dword ptr [ecx + eax - 4], ebp
    M32((uint32_t)(ecx + eax + 0xfffffffcu)) = (uint32_t)(ebp);
L_00552ec5:  // jl 0x552ea5
    if ((f.sf != f.of)) goto L_00552ea5;
L_00552ec7:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00552ecb:  // mov dword ptr [esp + 0x16c], 0
    M32((uint32_t)(esp + 0x16cu)) = (uint32_t)(0x0u);
L_00552ed6:  // mov eax, dword ptr [esp + 0x16c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x16cu)));
L_00552edd:  // mov dword ptr [esp + 0x170], 0
    M32((uint32_t)(esp + 0x170u)) = (uint32_t)(0x0u);
L_00552ee8:  // mov ecx, dword ptr [esp + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x170u)));
L_00552eef:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00552ef1:  // mov dword ptr [esp + 0x174], 0
    M32((uint32_t)(esp + 0x174u)) = (uint32_t)(0x0u);
L_00552efc:  // mov eax, dword ptr [esp + 0x174]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x174u)));
L_00552f03:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00552f06:  // mov dword ptr [esp + 0x178], 0x3f800000
    M32((uint32_t)(esp + 0x178u)) = (uint32_t)(0x3f800000u);
L_00552f11:  // mov ecx, dword ptr [esp + 0x178]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x178u)));
L_00552f18:  // mov dword ptr [esp + 0xa4], 0x40000000
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(0x40000000u);
L_00552f23:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00552f26:  // mov eax, dword ptr [esp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_00552f2d:  // mov dword ptr [esp + 0xa8], 0x40000000
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0x40000000u);
L_00552f38:  // mov dword ptr [esp + 0xac], 0
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0x0u);
L_00552f43:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00552f46:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00552f4a:  // mov ecx, dword ptr [esp + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00552f51:  // add edx, 0x1c
    t0 = ladd<32>(edx, 0x1cu, f);
    edx = (uint32_t)(t0);
L_00552f54:  // mov dword ptr [esp + 0xb0], 0x3f800000
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(0x3f800000u);
L_00552f5f:  // mov dword ptr [esp + 0x1ac], 0x42800000
    M32((uint32_t)(esp + 0x1acu)) = (uint32_t)(0x42800000u);
L_00552f6a:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00552f6c:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_00552f73:  // mov dword ptr [esp + 0x1b0], 0
    M32((uint32_t)(esp + 0x1b0u)) = (uint32_t)(0x0u);
L_00552f7e:  // mov dword ptr [esp + 0x1b4], 0
    M32((uint32_t)(esp + 0x1b4u)) = (uint32_t)(0x0u);
L_00552f89:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00552f8c:  // mov ecx, dword ptr [esp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_00552f93:  // mov dword ptr [esp + 0x1b8], 0x3f800000
    M32((uint32_t)(esp + 0x1b8u)) = (uint32_t)(0x3f800000u);
L_00552f9e:  // mov dword ptr [esp + 0xc4], 0x42780000
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(0x42780000u);
L_00552fa9:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00552fac:  // mov eax, dword ptr [esp + 0x1ac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1acu)));
L_00552fb3:  // mov dword ptr [esp + 0xc8], 0x40000000
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(0x40000000u);
L_00552fbe:  // mov dword ptr [esp + 0xcc], 0
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(0x0u);
L_00552fc9:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00552fcc:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00552fd0:  // mov ecx, dword ptr [esp + 0x1b0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1b0u)));
L_00552fd7:  // add edx, 0x38
    t0 = ladd<32>(edx, 0x38u, f);
    edx = (uint32_t)(t0);
L_00552fda:  // mov dword ptr [esp + 0xd0], 0x3f800000
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(0x3f800000u);
L_00552fe5:  // mov dword ptr [esp + 0x154], 0x42800000
    M32((uint32_t)(esp + 0x154u)) = (uint32_t)(0x42800000u);
L_00552ff0:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00552ff2:  // mov eax, dword ptr [esp + 0x1b4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1b4u)));
L_00552ff9:  // mov dword ptr [esp + 0x158], 0x42800000
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(0x42800000u);
L_00553004:  // mov dword ptr [esp + 0x15c], 0
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(0x0u);
L_0055300f:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553012:  // mov ecx, dword ptr [esp + 0x1b8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1b8u)));
L_00553019:  // mov dword ptr [esp + 0x160], 0x3f800000
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(0x3f800000u);
L_00553024:  // mov dword ptr [esp + 0xe4], 0x42780000
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(0x42780000u);
L_0055302f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553032:  // mov eax, dword ptr [esp + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_00553039:  // mov dword ptr [esp + 0xe8], 0x42780000
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(0x42780000u);
L_00553044:  // mov dword ptr [esp + 0xec], 0
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(0x0u);
L_0055304f:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553052:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00553056:  // mov ecx, dword ptr [esp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_0055305d:  // add edx, 0x54
    t0 = ladd<32>(edx, 0x54u, f);
    edx = (uint32_t)(t0);
L_00553060:  // mov dword ptr [esp + 0xf0], 0x3f800000
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(0x3f800000u);
L_0055306b:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055306d:  // mov eax, dword ptr [esp + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_00553074:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553077:  // mov ecx, dword ptr [esp + 0xd0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_0055307e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553081:  // mov eax, dword ptr [esp + 0x154]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x154u)));
L_00553088:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0055308b:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0055308f:  // mov ecx, dword ptr [esp + 0x158]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x158u)));
L_00553096:  // add edx, 0x70
    t0 = ladd<32>(edx, 0x70u, f);
    edx = (uint32_t)(t0);
L_00553099:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055309b:  // mov eax, dword ptr [esp + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_005530a2:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_005530a5:  // mov ecx, dword ptr [esp + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_005530ac:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_005530af:  // mov eax, dword ptr [esp + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xe4u)));
L_005530b6:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005530b9:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005530bd:  // mov ecx, dword ptr [esp + 0xe8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_005530c4:  // add edx, 0x8c
    t0 = ladd<32>(edx, 0x8cu, f);
    edx = (uint32_t)(t0);
L_005530ca:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_005530cc:  // mov eax, dword ptr [esp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_005530d3:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_005530d6:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_005530d9:  // mov ecx, dword ptr [esp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_005530e0:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_005530e8:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_005530ec:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005530ef:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005530f3:  // mov dword ptr [esp + 0x74], 0x42800000
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x42800000u);
L_005530fb:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_005530ff:  // add edx, 0xa8
    t0 = ladd<32>(edx, 0xa8u, f);
    edx = (uint32_t)(t0);
L_00553105:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_0055310d:  // mov dword ptr [esp + 0x7c], 0x3f800000
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x3f800000u);
L_00553115:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00553117:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0055311b:  // mov dword ptr [esp + 0x104], 0x40000000
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(0x40000000u);
L_00553126:  // mov dword ptr [esp + 0x108], 0x42780000
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(0x42780000u);
L_00553131:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553134:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00553138:  // mov dword ptr [esp + 0x10c], 0
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(0x0u);
L_00553143:  // mov dword ptr [esp + 0x110], 0x3f800000
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(0x3f800000u);
L_0055314e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553151:  // mov eax, dword ptr [esp + 0x104]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x104u)));
L_00553158:  // mov dword ptr [esp + 0x17c], 0
    M32((uint32_t)(esp + 0x17cu)) = (uint32_t)(0x0u);
L_00553163:  // mov dword ptr [esp + 0x180], 0
    M32((uint32_t)(esp + 0x180u)) = (uint32_t)(0x0u);
L_0055316e:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553171:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00553175:  // mov ecx, dword ptr [esp + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_0055317c:  // add edx, 0xc4
    t0 = ladd<32>(edx, 0xc4u, f);
    edx = (uint32_t)(t0);
L_00553182:  // mov dword ptr [esp + 0x184], 0
    M32((uint32_t)(esp + 0x184u)) = (uint32_t)(0x0u);
L_0055318d:  // mov dword ptr [esp + 0x188], 0x3f800000
    M32((uint32_t)(esp + 0x188u)) = (uint32_t)(0x3f800000u);
L_00553198:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055319a:  // mov eax, dword ptr [esp + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10cu)));
L_005531a1:  // mov dword ptr [esp + 0x124], 0x40000000
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(0x40000000u);
L_005531ac:  // mov dword ptr [esp + 0x128], 0x40000000
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(0x40000000u);
L_005531b7:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_005531ba:  // mov ecx, dword ptr [esp + 0x110]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x110u)));
L_005531c1:  // mov dword ptr [esp + 0x12c], 0
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(0x0u);
L_005531cc:  // mov dword ptr [esp + 0x130], 0x3f800000
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(0x3f800000u);
L_005531d7:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_005531da:  // mov eax, dword ptr [esp + 0x17c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x17cu)));
L_005531e1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005531e2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005531e3:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005531e6:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005531ea:  // mov ecx, dword ptr [esp + 0x188]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x188u)));
L_005531f1:  // add edx, 0xe0
    t0 = ladd<32>(edx, 0xe0u, f);
    edx = (uint32_t)(t0);
L_005531f7:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_005531f9:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_00553200:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553203:  // mov ecx, dword ptr [esp + 0x190]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_0055320a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0055320d:  // mov eax, dword ptr [esp + 0x12c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x12cu)));
L_00553214:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553217:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0055321b:  // mov ecx, dword ptr [esp + 0x130]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x130u)));
L_00553222:  // add edx, 0xfc
    t0 = ladd<32>(edx, 0xfcu, f);
    edx = (uint32_t)(t0);
L_00553228:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055322a:  // mov eax, dword ptr [esp + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x134u)));
L_00553231:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553234:  // mov ecx, dword ptr [esp + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x138u)));
L_0055323b:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0055323e:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553241:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553246:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055324bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055324b:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_00553250:  // call 0x51a6a0
    t0 = 0x0051a6a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553255u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553255:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0055325c:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00553260:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_00553262:  // fstp dword ptr [esp + 0x19c]
    F32((uint32_t)(esp + 0x19cu)) = lf32(ST(0));
    lpop(x);
L_00553269:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0055326d:  // fadd dword ptr [ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x4u)));
L_00553270:  // fstp dword ptr [esp + 0x1a0]
    F32((uint32_t)(esp + 0x1a0u)) = lf32(ST(0));
    lpop(x);
L_00553277:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0055327b:  // fadd dword ptr [ecx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x8u)));
L_0055327e:  // fstp dword ptr [esp + 0x1a4]
    F32((uint32_t)(esp + 0x1a4u)) = lf32(ST(0));
    lpop(x);
L_00553285:  // fld dword ptr [ecx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x10u)));
L_00553288:  // fcom dword ptr [ecx + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x14u)));
L_0055328b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0055328d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00553290:  // je 0x553297
    if (f.zf) goto L_00553297;
L_00553292:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00553294:  // fld dword ptr [ecx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x14u)));
L_00553297:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0055329b:  // fld dword ptr [edx + 0x5ac]
    lpush(x, (long double)F32((uint32_t)(edx + 0x5acu)));
L_005532a1:  // fmul dword ptr [ecx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x18u)));
L_005532a4:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005532a8:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_005532aa:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_005532ae:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005532b2:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_005532b5:  // mov al, byte ptr [0x89d680]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89d680u))) & 0xffu);
L_005532ba:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005532bc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005532be:  // jne 0x5533d5
    if (!f.zf) goto L_005533d5;
L_005532c4:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005532c8:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_005532cd:  // mov esi, 0x9c7c14
    esi = (uint32_t)(0x9c7c14u);
L_005532d2:  // mov edi, 0x9c6994
    edi = (uint32_t)(0x9c6994u);
L_005532d7:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005532d9:  // mov eax, edx
    eax = (uint32_t)(edx);
L_005532db:  // mov dword ptr [esp + 0x234], edx
    M32((uint32_t)(esp + 0x234u)) = (uint32_t)(edx);
L_005532e2:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_005532e4:  // mov dword ptr [esp + 0x250], eax
    M32((uint32_t)(esp + 0x250u)) = (uint32_t)(eax);
L_005532eb:  // lea edx, [esp + 0x22c]
    edx = (uint32_t)((uint32_t)(esp + 0x22cu));
L_005532f2:  // mov dword ptr [esp + 0x21c], ecx
    M32((uint32_t)(esp + 0x21cu)) = (uint32_t)(ecx);
L_005532f9:  // lea eax, [esp + 0x24c]
    eax = (uint32_t)((uint32_t)(esp + 0x24cu));
L_00553300:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00553301:  // lea ecx, [esp + 0x220]
    ecx = (uint32_t)((uint32_t)(esp + 0x220u));
L_00553308:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553309:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055330a:  // lea ecx, [esp + 0x1e8]
    ecx = (uint32_t)((uint32_t)(esp + 0x1e8u));
L_00553311:  // mov byte ptr [0x9c73ea], 1
    M8((uint32_t)(0x9c73eau)) = (uint8_t)(0x1u);
L_00553318:  // mov dword ptr [esp + 0x238], 0
    M32((uint32_t)(esp + 0x238u)) = (uint32_t)(0x0u);
L_00553323:  // mov dword ptr [esp + 0x23c], 0
    M32((uint32_t)(esp + 0x23cu)) = (uint32_t)(0x0u);
L_0055332e:  // mov dword ptr [esp + 0x258], 0
    M32((uint32_t)(esp + 0x258u)) = (uint32_t)(0x0u);
L_00553339:  // mov dword ptr [esp + 0x260], 0
    M32((uint32_t)(esp + 0x260u)) = (uint32_t)(0x0u);
L_00553344:  // mov dword ptr [esp + 0x22c], 0
    M32((uint32_t)(esp + 0x22cu)) = (uint32_t)(0x0u);
L_0055334f:  // mov dword ptr [esp + 0x230], 0
    M32((uint32_t)(esp + 0x230u)) = (uint32_t)(0x0u);
L_0055335a:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055335fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055335f:  // fld dword ptr [esp + 0x1a4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1a4u)));
L_00553366:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_0055336a:  // mov ecx, dword ptr [esp + 0x1a4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1a4u)));
L_00553371:  // mov edx, dword ptr [esp + 0x19c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x19cu)));
L_00553378:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_0055337c:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_00553380:  // mov eax, dword ptr [esp + 0x1a0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1a0u)));
L_00553387:  // mov edx, dword ptr [esp + 0x1a8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1a8u)));
L_0055338e:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_00553392:  // fld dword ptr [0x9c7af4]
    lpush(x, (long double)F32((uint32_t)(0x9c7af4u)));
L_00553398:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0055339c:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_005533a0:  // lea eax, [esp + 0x60]
    eax = (uint32_t)((uint32_t)(esp + 0x60u));
L_005533a4:  // lea ecx, [esp + 0x1dc]
    ecx = (uint32_t)((uint32_t)(esp + 0x1dcu));
L_005533ab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005533ac:  // fadd dword ptr [esp + 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x64u)));
L_005533b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005533b1:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_005533b6:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_005533ba:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_005533be:  // fld dword ptr [0x9c7af8]
    lpush(x, (long double)F32((uint32_t)(0x9c7af8u)));
L_005533c4:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_005533c8:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_005533cc:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_005533d0:  // call 0x550be0
    t0 = 0x00550be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005533d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005533d5:  // mov ecx, dword ptr [esp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x164u)));
L_005533dc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_005533dd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_005533df:  // call dword ptr [edx + 0x90]
    t0 = M32((uint32_t)(edx + 0x90u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005533e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005533e5:  // cmp dword ptr [0x9c7c8c], ebp
    t0 = lsub<32>(M32((uint32_t)(0x9c7c8cu)), ebp, f);
L_005533eb:  // jne 0x5537da
    if (!f.zf) goto L_005537da;
L_005533f1:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_005533f5:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_005533f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005533f8:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_005533fd:  // call 0x51a380
    t0 = 0x0051a380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553402u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553402:  // cmp ax, 0xffff
    t0 = lsub<16>((eax & 0xffffu), 0xffffu, f);
L_00553406:  // je 0x5537da
    if (f.zf) goto L_005537da;
L_0055340c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0055340e:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00553412:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00553415:  // cmp eax, 0x118
    t0 = lsub<32>(eax, 0x118u, f);
L_0055341a:  // mov dword ptr [ecx + eax - 0xc], 0xffffffff
    M32((uint32_t)(ecx + eax + 0xfffffff4u)) = (uint32_t)(0xffffffffu);
L_00553422:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00553426:  // mov dword ptr [edx + eax - 8], ebp
    M32((uint32_t)(edx + eax + 0xfffffff8u)) = (uint32_t)(ebp);
L_0055342a:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0055342e:  // mov dword ptr [ecx + eax - 4], ebp
    M32((uint32_t)(ecx + eax + 0xfffffffcu)) = (uint32_t)(ebp);
L_00553432:  // jl 0x55340e
    if ((f.sf != f.of)) goto L_0055340e;
L_00553434:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00553438:  // mov dword ptr [esp + 0x144], 0
    M32((uint32_t)(esp + 0x144u)) = (uint32_t)(0x0u);
L_00553443:  // mov eax, dword ptr [esp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x144u)));
L_0055344a:  // mov dword ptr [esp + 0x148], 0
    M32((uint32_t)(esp + 0x148u)) = (uint32_t)(0x0u);
L_00553455:  // mov ecx, dword ptr [esp + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x148u)));
L_0055345c:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055345e:  // mov dword ptr [esp + 0x14c], 0
    M32((uint32_t)(esp + 0x14cu)) = (uint32_t)(0x0u);
L_00553469:  // mov eax, dword ptr [esp + 0x14c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14cu)));
L_00553470:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553473:  // mov dword ptr [esp + 0x150], 0x3f800000
    M32((uint32_t)(esp + 0x150u)) = (uint32_t)(0x3f800000u);
L_0055347e:  // mov ecx, dword ptr [esp + 0x150]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x150u)));
L_00553485:  // mov dword ptr [esp + 0x1bc], 0x40000000
    M32((uint32_t)(esp + 0x1bcu)) = (uint32_t)(0x40000000u);
L_00553490:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553493:  // mov eax, dword ptr [esp + 0x1bc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1bcu)));
L_0055349a:  // mov dword ptr [esp + 0x1c0], 0x40000000
    M32((uint32_t)(esp + 0x1c0u)) = (uint32_t)(0x40000000u);
L_005534a5:  // mov dword ptr [esp + 0x1c4], 0
    M32((uint32_t)(esp + 0x1c4u)) = (uint32_t)(0x0u);
L_005534b0:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005534b3:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005534b7:  // mov ecx, dword ptr [esp + 0x1c0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1c0u)));
L_005534be:  // add edx, 0x1c
    t0 = ladd<32>(edx, 0x1cu, f);
    edx = (uint32_t)(t0);
L_005534c1:  // mov dword ptr [esp + 0x1c8], 0x3f800000
    M32((uint32_t)(esp + 0x1c8u)) = (uint32_t)(0x3f800000u);
L_005534cc:  // mov dword ptr [esp + 0x18c], 0x42800000
    M32((uint32_t)(esp + 0x18cu)) = (uint32_t)(0x42800000u);
L_005534d7:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_005534d9:  // mov eax, dword ptr [esp + 0x1c4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1c4u)));
L_005534e0:  // mov dword ptr [esp + 0x190], 0
    M32((uint32_t)(esp + 0x190u)) = (uint32_t)(0x0u);
L_005534eb:  // mov dword ptr [esp + 0x194], 0
    M32((uint32_t)(esp + 0x194u)) = (uint32_t)(0x0u);
L_005534f6:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_005534f9:  // mov ecx, dword ptr [esp + 0x1c8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1c8u)));
L_00553500:  // mov dword ptr [esp + 0x198], 0x3f800000
    M32((uint32_t)(esp + 0x198u)) = (uint32_t)(0x3f800000u);
L_0055350b:  // mov dword ptr [esp + 0x80], 0x42780000
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x42780000u);
L_00553516:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553519:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_00553520:  // mov dword ptr [esp + 0x84], 0x40000000
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x40000000u);
L_0055352b:  // mov dword ptr [esp + 0x88], 0
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0x0u);
L_00553536:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553539:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0055353d:  // mov ecx, dword ptr [esp + 0x190]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_00553544:  // add edx, 0x38
    t0 = ladd<32>(edx, 0x38u, f);
    edx = (uint32_t)(t0);
L_00553547:  // mov dword ptr [esp + 0x8c], 0x3f800000
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(0x3f800000u);
L_00553552:  // mov dword ptr [esp + 0x94], 0x42800000
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0x42800000u);
L_0055355d:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055355f:  // mov eax, dword ptr [esp + 0x194]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_00553566:  // mov dword ptr [esp + 0x98], 0x42800000
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(0x42800000u);
L_00553571:  // mov dword ptr [esp + 0x9c], 0
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0x0u);
L_0055357c:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0055357f:  // mov ecx, dword ptr [esp + 0x198]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_00553586:  // mov dword ptr [esp + 0xa0], 0x3f800000
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0x3f800000u);
L_00553591:  // mov dword ptr [esp + 0xb4], 0x42780000
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(0x42780000u);
L_0055359c:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0055359f:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_005535a6:  // mov dword ptr [esp + 0xb8], 0x42780000
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(0x42780000u);
L_005535b1:  // mov dword ptr [esp + 0xbc], 0
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(0x0u);
L_005535bc:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005535bf:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005535c3:  // mov ecx, dword ptr [esp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_005535ca:  // add edx, 0x54
    t0 = ladd<32>(edx, 0x54u, f);
    edx = (uint32_t)(t0);
L_005535cd:  // mov dword ptr [esp + 0xc0], 0x3f800000
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(0x3f800000u);
L_005535d8:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_005535da:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_005535e1:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_005535e4:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_005535eb:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_005535ee:  // mov eax, dword ptr [esp + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_005535f5:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005535f8:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005535fc:  // mov ecx, dword ptr [esp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_00553603:  // add edx, 0x70
    t0 = ladd<32>(edx, 0x70u, f);
    edx = (uint32_t)(t0);
L_00553606:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00553608:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_0055360f:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553612:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00553619:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0055361c:  // mov eax, dword ptr [esp + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_00553623:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553626:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0055362a:  // mov ecx, dword ptr [esp + 0xb8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_00553631:  // add edx, 0x8c
    t0 = ladd<32>(edx, 0x8cu, f);
    edx = (uint32_t)(t0);
L_00553637:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00553639:  // mov eax, dword ptr [esp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_00553640:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553643:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553646:  // mov ecx, dword ptr [esp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0055364d:  // mov dword ptr [esp + 0xd4], 0
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(0x0u);
L_00553658:  // mov eax, dword ptr [esp + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xd4u)));
L_0055365f:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553662:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00553666:  // mov dword ptr [esp + 0xd8], 0x42800000
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(0x42800000u);
L_00553671:  // mov ecx, dword ptr [esp + 0xd8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_00553678:  // add edx, 0xa8
    t0 = ladd<32>(edx, 0xa8u, f);
    edx = (uint32_t)(t0);
L_0055367e:  // mov dword ptr [esp + 0xdc], 0
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(0x0u);
L_00553689:  // mov dword ptr [esp + 0xe0], 0x3f800000
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(0x3f800000u);
L_00553694:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00553696:  // mov eax, dword ptr [esp + 0xdc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xdcu)));
L_0055369d:  // mov dword ptr [esp + 0xf4], 0x40000000
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(0x40000000u);
L_005536a8:  // mov dword ptr [esp + 0xf8], 0x42780000
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(0x42780000u);
L_005536b3:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_005536b6:  // mov ecx, dword ptr [esp + 0xe0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xe0u)));
L_005536bd:  // mov dword ptr [esp + 0xfc], 0
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(0x0u);
L_005536c8:  // mov dword ptr [esp + 0x100], 0x3f800000
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(0x3f800000u);
L_005536d3:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_005536d6:  // mov eax, dword ptr [esp + 0xf4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_005536dd:  // mov dword ptr [esp + 0x114], 0
    M32((uint32_t)(esp + 0x114u)) = (uint32_t)(0x0u);
L_005536e8:  // mov dword ptr [esp + 0x118], 0
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(0x0u);
L_005536f3:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005536f6:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005536fa:  // mov ecx, dword ptr [esp + 0xf8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_00553701:  // add edx, 0xc4
    t0 = ladd<32>(edx, 0xc4u, f);
    edx = (uint32_t)(t0);
L_00553707:  // mov dword ptr [esp + 0x11c], 0
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(0x0u);
L_00553712:  // mov dword ptr [esp + 0x120], 0x3f800000
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(0x3f800000u);
L_0055371d:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055371f:  // mov eax, dword ptr [esp + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xfcu)));
L_00553726:  // mov dword ptr [esp + 0x134], 0x40000000
    M32((uint32_t)(esp + 0x134u)) = (uint32_t)(0x40000000u);
L_00553731:  // mov dword ptr [esp + 0x138], 0x40000000
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(0x40000000u);
L_0055373c:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0055373f:  // mov ecx, dword ptr [esp + 0x100]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x100u)));
L_00553746:  // mov dword ptr [esp + 0x13c], 0
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(0x0u);
L_00553751:  // mov dword ptr [esp + 0x140], 0x3f800000
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(0x3f800000u);
L_0055375c:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0055375f:  // mov eax, dword ptr [esp + 0x114]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x114u)));
L_00553766:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00553767:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00553768:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0055376b:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0055376f:  // mov ecx, dword ptr [esp + 0x120]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x120u)));
L_00553776:  // add edx, 0xe0
    t0 = ladd<32>(edx, 0xe0u, f);
    edx = (uint32_t)(t0);
L_0055377c:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0055377e:  // mov eax, dword ptr [esp + 0x124]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_00553785:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553788:  // mov ecx, dword ptr [esp + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x128u)));
L_0055378f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553792:  // mov eax, dword ptr [esp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x13cu)));
L_00553799:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0055379c:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005537a0:  // mov ecx, dword ptr [esp + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_005537a7:  // add edx, 0xfc
    t0 = ladd<32>(edx, 0xfcu, f);
    edx = (uint32_t)(t0);
L_005537ad:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_005537af:  // mov eax, dword ptr [esp + 0x144]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x144u)));
L_005537b6:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_005537b9:  // mov ecx, dword ptr [esp + 0x148]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x148u)));
L_005537c0:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_005537c3:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_005537c6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005537cb:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005537d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005537d0:  // mov ecx, 0x897a98
    ecx = (uint32_t)(0x897a98u);
L_005537d5:  // call 0x51a6a0
    t0 = 0x0051a6a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005537dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005537da:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005537df:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005537e0:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005537e2:  // call dword ptr [edx + 0xa8]
    t0 = M32((uint32_t)(edx + 0xa8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005537e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005537e8:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005537ec:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005537f0:  // mov byte ptr [edi + 8], 2
    M8((uint32_t)(edi + 0x8u)) = (uint8_t)(0x2u);
L_005537f4:  // dec byte ptr [edi + 8]
    t0 = ldec<8>(M8((uint32_t)(edi + 0x8u)), f);
    M8((uint32_t)(edi + 0x8u)) = (uint8_t)(t0);
L_005537f7:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_005537fb:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_005537ff:  // mov ecx, dword ptr [ebp + 0x5bc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x5bcu)));
L_00553805:  // add edi, 0x20
    t0 = ladd<32>(edi, 0x20u, f);
    edi = (uint32_t)(t0);
L_00553808:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00553809:  // add edx, 4
    t0 = ladd<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0055380c:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0055380e:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00553812:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_00553816:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0055381a:  // jl 0x552bb1
    if ((f.sf != f.of)) goto L_00552bb1;
L_00553820:  // mov esi, dword ptr [0x888a50]
    esi = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00553826:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0055382a:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0055382e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055382f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00553831:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00553832:  // call dword ptr [eax + 0x9c]
    t0 = M32((uint32_t)(eax + 0x9cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553838u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553838:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0055383a:  // jge 0x553869
    if ((f.sf == f.of)) goto L_00553869;
L_0055383c:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0055383e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055383f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553841:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00553842:  // call dword ptr [edx + 0x94]
    t0 = M32((uint32_t)(edx + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553848u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553848:  // jmp 0x553875
    goto L_00553875;
L_0055384a:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_0055384f:  // mov byte ptr [ebp + 0x704], 0
    M8((uint32_t)(ebp + 0x704u)) = (uint8_t)(0x0u);
L_00553856:  // call 0x4d1710
    t0 = 0x004d1710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055385bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055385b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0055385e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0055385f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00553860:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00553861:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00553862:  // add esp, 0x30c
    t0 = ladd<32>(esp, 0x30cu, f);
    esp = (uint32_t)(t0);
L_00553868:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00553869:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0055386b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0055386c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055386e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0055386f:  // call dword ptr [eax + 0x94]
    t0 = M32((uint32_t)(eax + 0x94u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553875u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553875:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00553879:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055387a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0055387c:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055387fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055387f:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00553883:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553884:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00553886:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553889u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553889:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0055388e:  // lea esi, [esp + 0x25c]
    esi = (uint32_t)((uint32_t)(esp + 0x25cu));
L_00553895:  // mov edi, 0x9c6954
    edi = (uint32_t)(0x9c6954u);
L_0055389a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0055389c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0055389e:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_005538a3:  // lea esi, [esp + 0x2a0]
    esi = (uint32_t)((uint32_t)(esp + 0x2a0u));
L_005538aa:  // mov edi, 0x9c6994
    edi = (uint32_t)(0x9c6994u);
L_005538af:  // mov byte ptr [0x9c73e9], 1
    M8((uint32_t)(0x9c73e9u)) = (uint8_t)(0x1u);
L_005538b6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005538b8:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_005538bd:  // lea esi, [esp + 0x2e0]
    esi = (uint32_t)((uint32_t)(esp + 0x2e0u));
L_005538c4:  // mov edi, 0x9c6914
    edi = (uint32_t)(0x9c6914u);
L_005538c9:  // mov byte ptr [0x9c73ea], 1
    M8((uint32_t)(0x9c73eau)) = (uint8_t)(0x1u);
L_005538d0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005538d2:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_005538d4:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005538d9:  // mov byte ptr [0x9c73e8], 1
    M8((uint32_t)(0x9c73e8u)) = (uint8_t)(0x1u);
L_005538e0:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005538e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005538e5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005538e7:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_005538e9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005538ee:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005538f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005538f3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005538f5:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_005538f7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005538fc:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553901u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553901:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00553903:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_00553905:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0055390a:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055390fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055390f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00553911:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553913:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553915:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0055391a:  // mov byte ptr [0x9c68ac], 1
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x1u);
L_00553921:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00553928:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055392du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055392d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0055392f:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_00553931:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553936:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055393bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055393b:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_00553942:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00553949:  // mov dword ptr [0x704e48], 0
    M32((uint32_t)(0x704e48u)) = (uint32_t)(0x0u);
L_00553953:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00553954:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00553955:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00553956:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00553957:  // add esp, 0x30c
    t0 = ladd<32>(esp, 0x30cu, f);
    esp = (uint32_t)(t0);
L_0055395d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005528b0, 005528b0)
