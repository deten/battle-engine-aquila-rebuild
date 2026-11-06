// lifted from 00553960 (FUN_00553960, 2059 bytes, 591 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00553960(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00553960;
L_00553960:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00553961:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_00553963:  // and esp, 0xfffffff8
    t0 = llog<32>(esp & 0xfffffff8u, f);
    esp = (uint32_t)(t0);
L_00553966:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00553969:  // mov al, byte ptr [0x89d680]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x89d680u))) & 0xffu);
L_0055396e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0055396f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00553970:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00553972:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00553973:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00553974:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00553976:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0055397a:  // jne 0x554163
    if (!f.zf) goto L_00554163;
L_00553980:  // mov al, byte ptr [ebx + 0x704]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x704u))) & 0xffu);
L_00553986:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00553988:  // je 0x554163
    if (f.zf) goto L_00554163;
L_0055398e:  // mov ecx, 0x9c7c58
    ecx = (uint32_t)(0x9c7c58u);
L_00553993:  // call 0x527dd0
    t0 = 0x00527dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553998u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553998:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0055399a:  // je 0x554148
    if (f.zf) goto L_00554148;
L_005539a0:  // mov eax, dword ptr [0x9c7c7c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7c7cu)));
L_005539a5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005539a7:  // je 0x554148
    if (f.zf) goto L_00554148;
L_005539ad:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005539b2:  // push 0x83d248
    t0 = 0x83d248u; esp -= 4; M32(esp) = t0;
L_005539b7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005539b8:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005539ba:  // call dword ptr [ecx + 0xc4]
    t0 = M32((uint32_t)(ecx + 0xc4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005539c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005539c0:  // mov al, byte ptr [0x9c7c55]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x9c7c55u))) & 0xffu);
L_005539c5:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005539c7:  // je 0x5539cd
    if (f.zf) goto L_005539cd;
L_005539c9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005539cb:  // jmp 0x5539ea
    goto L_005539ea;
L_005539cd:  // mov eax, dword ptr [0x9c7c8c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_005539d2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005539d4:  // je 0x5539e8
    if (f.zf) goto L_005539e8;
L_005539d6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005539d8:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_005539da:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005539df:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005539e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005539e4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_005539e6:  // jmp 0x5539f8
    goto L_005539f8;
L_005539e8:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_005539ea:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_005539ec:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005539f1:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005539f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005539f6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005539f8:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_005539fa:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005539ff:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a04:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553a06:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_00553a08:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a0d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a12:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553a14:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_00553a16:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a1b:  // mov byte ptr [0x9c68ad], 0
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x0u);
L_00553a22:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00553a29:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00553a30:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00553a37:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a3c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553a3e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553a40:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553a42:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a47:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a4c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553a4e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553a50:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553a52:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a57:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a5c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553a5e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553a60:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553a62:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a67:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a6c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553a6e:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00553a70:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553a72:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a77:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a7c:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00553a7e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00553a80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553a82:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a87:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a8c:  // push 0xff808080
    t0 = 0xff808080u; esp -= 4; M32(esp) = t0;
L_00553a91:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_00553a93:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553a98:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553a9du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553a9d:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00553aa0:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_00553aa8:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00553aac:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00553aae:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00553ab1:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00553ab6:  // mov esi, 0x9c7c90
    esi = (uint32_t)(0x9c7c90u);
L_00553abb:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00553abd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00553abf:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_00553ac7:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_00553acb:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00553acd:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_00553ad5:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_00553ad9:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00553adc:  // mov ecx, dword ptr [esp + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00553ae0:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00553ae3:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00553ae6:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00553aeb:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553af0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553af0:  // mov eax, dword ptr [0x9c7c8c]
    eax = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_00553af5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00553af7:  // je 0x553b14
    if (f.zf) goto L_00553b14;
L_00553af9:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00553afb:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553afd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553aff:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b04:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b09:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553b0b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553b0d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553b0f:  // jmp 0x553cba
    goto L_00553cba;
L_00553b14:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00553b16:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b18:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553b1a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b1f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b24:  // mov ecx, 0x9c7c58
    ecx = (uint32_t)(0x9c7c58u);
L_00553b29:  // call 0x527dd0
    t0 = 0x00527dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b2e:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00553b31:  // jle 0x553b99
    if ((f.zf || f.sf != f.of)) goto L_00553b99;
L_00553b33:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553b35:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b37:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b39:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b3e:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b43:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553b45:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553b47:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b49:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b4e:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b53:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553b55:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553b57:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b59:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b5e:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b63:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b65:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553b67:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b69:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b6e:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b73:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00553b75:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b77:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b79:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b7e:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b83:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553b85:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00553b87:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b89:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553b8e:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553b93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553b93:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553b95:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00553b97:  // jmp 0x553bad
    goto L_00553bad;
L_00553b99:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b9b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b9d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553b9f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553ba4:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553ba9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553ba9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553bab:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00553bad:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553baf:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553bb4:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553bb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553bb9:  // mov ecx, 0x9c7c58
    ecx = (uint32_t)(0x9c7c58u);
L_00553bbe:  // call 0x527dd0
    t0 = 0x00527dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553bc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553bc3:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00553bc6:  // jle 0x553ca4
    if ((f.zf || f.sf != f.of)) goto L_00553ca4;
L_00553bcc:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553bce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553bd0:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553bd2:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553bd7:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553bdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553bdc:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553bde:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553be0:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553be2:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553be7:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553becu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553bec:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553bee:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553bf0:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553bf2:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553bf7:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553bfcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553bfc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553bfe:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c00:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c02:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c07:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c0c:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00553c0e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553c10:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c12:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c17:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c1c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553c1e:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00553c20:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c22:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c27:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c2c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c2e:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00553c30:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c32:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c37:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c3c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c3e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553c40:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c42:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c47:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c4c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c4e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c50:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c52:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c57:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c5c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c5e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c60:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c62:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c67:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c6c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553c6e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c70:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c72:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c77:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c7c:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00553c7e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553c80:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c82:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c87:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c8c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553c8e:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00553c90:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553c92:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553c97:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553c9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553c9c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553c9e:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_00553ca0:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553ca2:  // jmp 0x553cba
    goto L_00553cba;
L_00553ca4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553ca6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553ca8:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553caa:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553caf:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553cb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553cb4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553cb6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00553cb8:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553cba:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553cbf:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553cc4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553cc4:  // mov eax, dword ptr [ebx + 0x5bc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x5bcu)));
L_00553cca:  // lea edi, [ebx + 0x10c]
    edi = (uint32_t)((uint32_t)(ebx + 0x10cu));
L_00553cd0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00553cd2:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_00553cda:  // jle 0x553faa
    if ((f.zf || f.sf != f.of)) goto L_00553faa;
L_00553ce0:  // lea edx, [ebx + 0x640]
    edx = (uint32_t)((uint32_t)(ebx + 0x640u));
L_00553ce6:  // mov esi, 0x9c7b90
    esi = (uint32_t)(0x9c7b90u);
L_00553ceb:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00553cef:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00553cf3:  // cmp dword ptr [eax], 0
    t0 = lsub<32>(M32((uint32_t)(eax)), 0x0u, f);
L_00553cf6:  // je 0x553f96
    if (f.zf) goto L_00553f96;
L_00553cfc:  // cmp dword ptr [edi], 0
    t0 = lsub<32>(M32((uint32_t)(edi)), 0x0u, f);
L_00553cff:  // je 0x553f6c
    if (f.zf) goto L_00553f6c;
L_00553d05:  // lea ecx, [edi + 0x10]
    ecx = (uint32_t)((uint32_t)(edi + 0x10u));
L_00553d08:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00553d0d:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_00553d0f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00553d11:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00553d15:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00553d18:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_00553d1c:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00553d1f:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_00553d23:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00553d26:  // mov ecx, dword ptr [edi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_00553d29:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00553d2d:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00553d31:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00553d35:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_00553d37:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00553d3c:  // mov dword ptr [0x628268], 0
    M32((uint32_t)(0x628268u)) = (uint32_t)(0x0u);
L_00553d46:  // mov dword ptr [0x62825c], 0
    M32((uint32_t)(0x62825cu)) = (uint32_t)(0x0u);
L_00553d50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553d51:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00553d57:  // fst dword ptr [0x628258]
    F32((uint32_t)(0x628258u)) = lf32(ST(0));
L_00553d5d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00553d5f:  // fchs 
    ST(0) = -ST(0);
L_00553d61:  // fstp dword ptr [0x62826c]
    F32((uint32_t)(0x62826cu)) = lf32(ST(0));
    lpop(x);
L_00553d67:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00553d6b:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00553d6f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00553d71:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00553d75:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00553d79:  // fchs 
    ST(0) = -ST(0);
L_00553d7b:  // fsub dword ptr [esp + 0x40]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x40u)));
L_00553d7f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00553d81:  // fchs 
    ST(0) = -ST(0);
L_00553d83:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00553d87:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00553d89:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00553d8d:  // fadd dword ptr [0x5e5144]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e5144u)));
L_00553d93:  // fstp dword ptr [0x628278]
    F32((uint32_t)(0x628278u)) = lf32(ST(0));
    lpop(x);
L_00553d99:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00553d9d:  // fsub dword ptr [0x5e5140]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e5140u)));
L_00553da3:  // fstp dword ptr [0x62827c]
    F32((uint32_t)(0x62827cu)) = lf32(ST(0));
    lpop(x);
L_00553da9:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00553dab:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553db1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553db1:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00553db5:  // fadd dword ptr [0x5e5140]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e5140u)));
L_00553dbb:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00553dc0:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00553dc5:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_00553dc7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553dc8:  // fstp dword ptr [0x628278]
    F32((uint32_t)(0x628278u)) = lf32(ST(0));
    lpop(x);
L_00553dce:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00553dd2:  // fadd dword ptr [0x5e5144]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e5144u)));
L_00553dd8:  // fstp dword ptr [0x62827c]
    F32((uint32_t)(0x62827cu)) = lf32(ST(0));
    lpop(x);
L_00553dde:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00553de0:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553de6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553de6:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00553dea:  // fsub dword ptr [0x5e5144]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e5144u)));
L_00553df0:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00553df5:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00553dfa:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_00553dfc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553dfd:  // fstp dword ptr [0x628278]
    F32((uint32_t)(0x628278u)) = lf32(ST(0));
    lpop(x);
L_00553e03:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00553e07:  // fadd dword ptr [0x5e5140]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e5140u)));
L_00553e0d:  // fstp dword ptr [0x62827c]
    F32((uint32_t)(0x62827cu)) = lf32(ST(0));
    lpop(x);
L_00553e13:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00553e15:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553e1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553e1b:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00553e1f:  // fsub dword ptr [0x5e5140]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e5140u)));
L_00553e25:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00553e2a:  // push 0x628258
    t0 = 0x628258u; esp -= 4; M32(esp) = t0;
L_00553e2f:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00553e31:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553e32:  // fstp dword ptr [0x628278]
    F32((uint32_t)(0x628278u)) = lf32(ST(0));
    lpop(x);
L_00553e38:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00553e3c:  // fsub dword ptr [0x5e5144]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e5144u)));
L_00553e42:  // fstp dword ptr [0x62827c]
    F32((uint32_t)(0x62827cu)) = lf32(ST(0));
    lpop(x);
L_00553e48:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00553e4a:  // call dword ptr [ecx + 0xb0]
    t0 = M32((uint32_t)(ecx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553e50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553e50:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00553e52:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553e57:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00553e5a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553e5b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553e5d:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553e62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553e62:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00553e64:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00553e67:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553e6c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00553e6d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553e6f:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553e74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553e74:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00553e76:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00553e79:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00553e7a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553e7c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553e81:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553e86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553e86:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00553e88:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553e8d:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00553e90:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553e91:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553e93:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553e98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553e98:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00553e9c:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_00553ea0:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00553ea3:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00553ea6:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553eabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553eab:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00553eaf:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00553eb3:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00553eb7:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00553ebb:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00553ebe:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553ec3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553ec3:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00553ec7:  // mov ebx, dword ptr [esp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00553ecb:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00553ecf:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00553ed3:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00553ed9:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00553edc:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553ee1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553ee1:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00553ee5:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00553ee9:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00553eed:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00553ef1:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00553ef5:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00553efb:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00553efe:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553f03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553f03:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00553f05:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00553f08:  // mov cl, byte ptr [edi + 7]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x7u))) & 0xffu);
L_00553f0b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00553f0d:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00553f10:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00553f12:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00553f15:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00553f19:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00553f1d:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00553f1f:  // mov ecx, dword ptr [0x9c7c8c]
    ecx = (uint32_t)(M32((uint32_t)(0x9c7c8cu)));
L_00553f25:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00553f29:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00553f2b:  // je 0x553f30
    if (f.zf) goto L_00553f30;
L_00553f2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553f2e:  // jmp 0x553f36
    goto L_00553f36;
L_00553f30:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00553f33:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00553f35:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00553f36:  // push 0x3c
    t0 = 0x3cu; esp -= 4; M32(esp) = t0;
L_00553f38:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553f3d:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553f42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553f42:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00553f46:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00553f4a:  // mov ecx, dword ptr [0x89c9b0]
    ecx = (uint32_t)(M32((uint32_t)(0x89c9b0u)));
L_00553f50:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00553f51:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00553f52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00553f53:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00553f54:  // call 0x546900
    t0 = 0x00546900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553f59u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553f59:  // mov ecx, 0x9c7c58
    ecx = (uint32_t)(0x9c7c58u);
L_00553f5e:  // call 0x527dd0
    t0 = 0x00527dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553f63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553f63:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00553f66:  // jl 0x553faa
    if ((f.sf != f.of)) goto L_00553faa;
L_00553f68:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00553f6c:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00553f70:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00553f74:  // mov ecx, dword ptr [ebx + 0x5bc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x5bcu)));
L_00553f7a:  // add edi, 0x20
    t0 = ladd<32>(edi, 0x20u, f);
    edi = (uint32_t)(t0);
L_00553f7d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00553f7e:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_00553f81:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00553f84:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00553f86:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00553f8a:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_00553f8e:  // jl 0x553cef
    if ((f.sf != f.of)) goto L_00553cef;
L_00553f94:  // jmp 0x553faa
    goto L_00553faa;
L_00553f96:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_00553f9b:  // call 0x4d1710
    t0 = 0x004d1710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553fa0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553fa0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00553fa3:  // mov byte ptr [ebx + 0x704], 0
    M8((uint32_t)(ebx + 0x704u)) = (uint8_t)(0x0u);
L_00553faa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553fac:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553fae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553fb0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553fb5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553fbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553fba:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00553fbc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fbe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00553fc0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553fc5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553fcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553fca:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fcc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fd0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553fd5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553fdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553fda:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fdc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fde:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00553fe0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553fe5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553feau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553fea:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fec:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553fee:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00553ff0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00553ff5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00553ffau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00553ffa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00553ffc:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00553ffe:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00554000:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554005:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055400au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055400a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0055400c:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_0055400e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00554010:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554015:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055401au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055401a:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0055401c:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_0055401e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00554020:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554025:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055402au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055402a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055402c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0055402e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00554030:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554035:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055403au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055403a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055403c:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0055403e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00554040:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554045:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055404au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055404a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055404c:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0055404e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00554050:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554055:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055405au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055405a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055405c:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0055405e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00554060:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554065:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055406au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055406a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0055406c:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0055406e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00554070:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554075:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055407au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055407a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0055407c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0055407e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00554080:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554085:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055408au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055408a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0055408c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0055408e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00554090:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554095:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0055409au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0055409a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0055409c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0055409e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540a0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005540a5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005540aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005540aa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540ac:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005540ae:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540b0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005540b5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005540bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005540ba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540bc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540be:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005540c0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005540c5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005540cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005540ca:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540cc:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005540ce:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005540d0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005540d5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005540dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005540da:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540dc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540de:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005540e0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005540e5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005540eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005540ea:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005540ec:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_005540ee:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_005540f0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005540f5:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005540fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005540fa:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_005540fc:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_005540fe:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554103:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554108u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554108:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0055410a:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0055410c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00554111:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554116u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554116:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00554118:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_0055411a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0055411f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554124u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554124:  // mov byte ptr [0x9c68ad], 1
    M8((uint32_t)(0x9c68adu)) = (uint8_t)(0x1u);
L_0055412b:  // mov byte ptr [0x9c6910], 1
    M8((uint32_t)(0x9c6910u)) = (uint8_t)(0x1u);
L_00554132:  // mov byte ptr [0x9c68ac], 1
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x1u);
L_00554139:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00554140:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00554141:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00554142:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00554143:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00554144:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_00554146:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00554147:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00554148:  // push 0xe7
    t0 = 0xe7u; esp -= 4; M32(esp) = t0;
L_0055414d:  // mov byte ptr [ebx + 0x704], 0
    M8((uint32_t)(ebx + 0x704u)) = (uint8_t)(0x0u);
L_00554154:  // mov byte ptr [ebx + 0x706], 1
    M8((uint32_t)(ebx + 0x706u)) = (uint8_t)(0x1u);
L_0055415b:  // call 0x4d1710
    t0 = 0x004d1710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00554160u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00554160:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00554163:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00554164:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00554165:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00554166:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00554167:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_00554169:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0055416a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00553960, 00553960)
