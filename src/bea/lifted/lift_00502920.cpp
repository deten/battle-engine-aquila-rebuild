// lifted from 00502920 (FUN_00502920, 4512 bytes, 1078 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00502920(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00502920;
L_00502920:  // sub esp, 0x520
    t0 = lsub<32>(esp, 0x520u, f);
    esp = (uint32_t)(t0);
L_00502926:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00502927:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00502928:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0050292a:  // lea eax, [esp + 0x328]
    eax = (uint32_t)((uint32_t)(esp + 0x328u));
L_00502931:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00502932:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502933:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00502938:  // call 0x551510
    t0 = 0x00551510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050293du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050293d:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00502942:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00502947:  // lea edi, [esp + 0x22c]
    edi = (uint32_t)((uint32_t)(esp + 0x22cu));
L_0050294e:  // lea edx, [esp + 0x2ec]
    edx = (uint32_t)((uint32_t)(esp + 0x2ecu));
L_00502955:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00502957:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_0050295c:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_00502961:  // lea edi, [esp + 0x36c]
    edi = (uint32_t)((uint32_t)(esp + 0x36cu));
L_00502968:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050296a:  // lea ecx, [esp + 0x22c]
    ecx = (uint32_t)((uint32_t)(esp + 0x22cu));
L_00502971:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00502973:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502974:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00502975:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502976:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050297bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050297b:  // lea eax, [esp + 0x22c]
    eax = (uint32_t)((uint32_t)(esp + 0x22cu));
L_00502982:  // lea ecx, [esp + 0x4ec]
    ecx = (uint32_t)((uint32_t)(esp + 0x4ecu));
L_00502989:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050298a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050298b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050298c:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502991u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502991:  // lea edx, [esp + 0x36c]
    edx = (uint32_t)((uint32_t)(esp + 0x36cu));
L_00502998:  // lea eax, [esp + 0x22c]
    eax = (uint32_t)((uint32_t)(esp + 0x22cu));
L_0050299f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005029a0:  // lea ecx, [esp + 0x4b0]
    ecx = (uint32_t)((uint32_t)(esp + 0x4b0u));
L_005029a7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005029a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005029a9:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005029aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005029ae:  // lea edx, [esp + 0x32c]
    edx = (uint32_t)((uint32_t)(esp + 0x32cu));
L_005029b5:  // lea eax, [esp + 0x4ac]
    eax = (uint32_t)((uint32_t)(esp + 0x4acu));
L_005029bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005029bd:  // lea ecx, [esp + 0x470]
    ecx = (uint32_t)((uint32_t)(esp + 0x470u));
L_005029c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005029c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005029c6:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005029cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005029cb:  // lea edx, [esp + 0x36c]
    edx = (uint32_t)((uint32_t)(esp + 0x36cu));
L_005029d2:  // lea eax, [esp + 0x22c]
    eax = (uint32_t)((uint32_t)(esp + 0x22cu));
L_005029d9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005029da:  // lea ecx, [esp + 0x3b0]
    ecx = (uint32_t)((uint32_t)(esp + 0x3b0u));
L_005029e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005029e2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005029e3:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005029e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005029e8:  // mov edi, dword ptr [0x634420]
    edi = (uint32_t)(M32((uint32_t)(0x634420u)));
L_005029ee:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005029f3:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_005029f7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005029f9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005029fa:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_005029fd:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_00502a01:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_00502a09:  // mov dword ptr [esp + 0x1c], 0x3f000000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x3f000000u);
L_00502a11:  // mov dword ptr [esp + 0x20], 0x40000000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x40000000u);
L_00502a19:  // mov ecx, dword ptr [ecx + edi*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edi * 4u)));
L_00502a1c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00502a1e:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00502a20:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502a21:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502a22:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502a28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502a28:  // mov edi, dword ptr [ebp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x38u)));
L_00502a2b:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_00502a2f:  // mov dword ptr [esp + 0x40], edi
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edi);
L_00502a33:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00502a35:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00502a37:  // je 0x503ab6
    if (f.zf) goto L_00503ab6;
L_00502a3d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00502a3e:  // mov dword ptr [esp + 0x30], esi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(esi);
L_00502a42:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_00502a46:  // mov dword ptr [esp + 0x48], esi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(esi);
L_00502a4a:  // mov dword ptr [esp + 0x4c], esi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(esi);
L_00502a4e:  // cmp eax, dword ptr [0x634264]
    t0 = lsub<32>(eax, M32((uint32_t)(0x634264u)), f);
L_00502a54:  // jne 0x502b0b
    if (!f.zf) goto L_00502b0b;
L_00502a5a:  // lea edx, [esp + 0x3b0]
    edx = (uint32_t)((uint32_t)(esp + 0x3b0u));
L_00502a61:  // lea eax, [esp + 0x270]
    eax = (uint32_t)((uint32_t)(esp + 0x270u));
L_00502a68:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502a69:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502a6a:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502a6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502a6f:  // mov ebx, dword ptr [0x63433c]
    ebx = (uint32_t)(M32((uint32_t)(0x63433cu)));
L_00502a75:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502a7a:  // lea edx, [esp + 0x270]
    edx = (uint32_t)((uint32_t)(esp + 0x270u));
L_00502a81:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502a83:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502a84:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502a87:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502a89:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502a8c:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502a8e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502a8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502a90:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502a96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502a96:  // mov ebx, dword ptr [0x634348]
    ebx = (uint32_t)(M32((uint32_t)(0x634348u)));
L_00502a9c:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502aa1:  // lea edx, [esp + 0x280]
    edx = (uint32_t)((uint32_t)(esp + 0x280u));
L_00502aa8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502aaa:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502aab:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502aae:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502ab0:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502ab3:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502ab5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502ab6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502ab7:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502abdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502abd:  // mov ebx, dword ptr [0x634354]
    ebx = (uint32_t)(M32((uint32_t)(0x634354u)));
L_00502ac3:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502ac8:  // lea edx, [esp + 0x290]
    edx = (uint32_t)((uint32_t)(esp + 0x290u));
L_00502acf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502ad1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502ad2:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502ad5:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502ad7:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502ada:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502adc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502add:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502ade:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502ae4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502ae4:  // mov ebx, dword ptr [0x634360]
    ebx = (uint32_t)(M32((uint32_t)(0x634360u)));
L_00502aea:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502aef:  // lea edx, [esp + 0x2a0]
    edx = (uint32_t)((uint32_t)(esp + 0x2a0u));
L_00502af6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502af8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502af9:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502afc:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502afe:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502b01:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502b03:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b04:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502b05:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502b0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502b0b:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00502b0d:  // mov ecx, dword ptr [0x634270]
    ecx = (uint32_t)(M32((uint32_t)(0x634270u)));
L_00502b13:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00502b15:  // jne 0x502bcc
    if (!f.zf) goto L_00502bcc;
L_00502b1b:  // lea ecx, [esp + 0x330]
    ecx = (uint32_t)((uint32_t)(esp + 0x330u));
L_00502b22:  // lea edx, [esp + 0x1f0]
    edx = (uint32_t)((uint32_t)(esp + 0x1f0u));
L_00502b29:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502b2a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b2b:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502b30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502b30:  // mov ebx, dword ptr [0x634468]
    ebx = (uint32_t)(M32((uint32_t)(0x634468u)));
L_00502b36:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502b3b:  // lea edx, [esp + 0x1f0]
    edx = (uint32_t)((uint32_t)(esp + 0x1f0u));
L_00502b42:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502b44:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b45:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502b48:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502b4a:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502b4d:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502b4f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502b51:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502b57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502b57:  // mov ebx, dword ptr [0x634474]
    ebx = (uint32_t)(M32((uint32_t)(0x634474u)));
L_00502b5d:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502b62:  // lea edx, [esp + 0x200]
    edx = (uint32_t)((uint32_t)(esp + 0x200u));
L_00502b69:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502b6b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b6c:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502b6f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502b71:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502b74:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502b76:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b77:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502b78:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502b7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502b7e:  // mov ebx, dword ptr [0x634480]
    ebx = (uint32_t)(M32((uint32_t)(0x634480u)));
L_00502b84:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502b89:  // lea edx, [esp + 0x210]
    edx = (uint32_t)((uint32_t)(esp + 0x210u));
L_00502b90:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502b92:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b93:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502b96:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502b98:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502b9b:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502b9d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502b9e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502b9f:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502ba5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502ba5:  // mov ebx, dword ptr [0x63448c]
    ebx = (uint32_t)(M32((uint32_t)(0x63448cu)));
L_00502bab:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502bb0:  // lea edx, [esp + 0x220]
    edx = (uint32_t)((uint32_t)(esp + 0x220u));
L_00502bb7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502bb9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502bba:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502bbd:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502bbf:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502bc2:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502bc4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502bc5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502bc6:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502bccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502bcc:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00502bce:  // mov ecx, dword ptr [0x63430c]
    ecx = (uint32_t)(M32((uint32_t)(0x63430cu)));
L_00502bd4:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00502bd6:  // jne 0x502ccc
    if (!f.zf) goto L_00502ccc;
L_00502bdc:  // mov ecx, dword ptr [0x9c68b8]
    ecx = (uint32_t)(M32((uint32_t)(0x9c68b8u)));
L_00502be2:  // mov eax, dword ptr [0x9c68c0]
    eax = (uint32_t)(M32((uint32_t)(0x9c68c0u)));
L_00502be7:  // mov edx, dword ptr [0x9c68bc]
    edx = (uint32_t)(M32((uint32_t)(0x9c68bcu)));
L_00502bed:  // mov dword ptr [esp + 0xfc], ecx
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(ecx);
L_00502bf4:  // mov ecx, dword ptr [0x9c68c4]
    ecx = (uint32_t)(M32((uint32_t)(0x9c68c4u)));
L_00502bfa:  // mov ebx, dword ptr [0x634510]
    ebx = (uint32_t)(M32((uint32_t)(0x634510u)));
L_00502c00:  // mov dword ptr [esp + 0x104], eax
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(eax);
L_00502c07:  // mov dword ptr [esp + 0x108], ecx
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(ecx);
L_00502c0e:  // mov ecx, dword ptr [esp + 0x104]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x104u)));
L_00502c15:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502c17:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00502c1b:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00502c1f:  // mov dword ptr [esp + 0x104], edx
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(edx);
L_00502c26:  // mov edx, dword ptr [esp + 0x100]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x100u)));
L_00502c2d:  // mov eax, dword ptr [esp + 0x104]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x104u)));
L_00502c34:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502c35:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502c38:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00502c3c:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00502c40:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502c45:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_00502c4d:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_00502c50:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00502c52:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00502c54:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502c55:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502c56:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502c5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502c5c:  // lea edx, [esp + 0x470]
    edx = (uint32_t)((uint32_t)(esp + 0x470u));
L_00502c63:  // lea eax, [esp + 0x150]
    eax = (uint32_t)((uint32_t)(esp + 0x150u));
L_00502c6a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502c6b:  // lea ecx, [esp + 0x1e4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1e4u));
L_00502c72:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502c73:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502c74:  // mov dword ptr [esp + 0x15c], 0
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(0x0u);
L_00502c7f:  // mov dword ptr [esp + 0x160], 0
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(0x0u);
L_00502c8a:  // mov dword ptr [esp + 0x164], 0
    M32((uint32_t)(esp + 0x164u)) = (uint32_t)(0x0u);
L_00502c95:  // mov dword ptr [esp + 0x168], 0x3f800000
    M32((uint32_t)(esp + 0x168u)) = (uint32_t)(0x3f800000u);
L_00502ca0:  // call 0x5766a5
    t0 = 0x005766a5u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502ca5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502ca5:  // mov ebx, dword ptr [0x634504]
    ebx = (uint32_t)(M32((uint32_t)(0x634504u)));
L_00502cab:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502cb0:  // lea ecx, [esp + 0x1e0]
    ecx = (uint32_t)((uint32_t)(esp + 0x1e0u));
L_00502cb7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502cb9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502cba:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502cbd:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00502cbf:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_00502cc2:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00502cc4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502cc5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502cc6:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502cccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502ccc:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00502cce:  // mov eax, dword ptr [0x634318]
    eax = (uint32_t)(M32((uint32_t)(0x634318u)));
L_00502cd3:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00502cd5:  // jne 0x502e27
    if (!f.zf) goto L_00502e27;
L_00502cdb:  // fild dword ptr [0x9c68e0]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x9c68e0u)));
L_00502ce1:  // mov eax, dword ptr [0x9c68e4]
    eax = (uint32_t)(M32((uint32_t)(0x9c68e4u)));
L_00502ce6:  // mov dword ptr [esp + 0x130], esi
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(esi);
L_00502ced:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00502cef:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00502cf1:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_00502cf7:  // shr ecx, 0x10
    t0 = lshr<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00502cfa:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_00502d00:  // mov dword ptr [esp + 0x118], esi
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(esi);
L_00502d07:  // mov dword ptr [esp + 0x12c], ecx
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(ecx);
L_00502d0e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00502d10:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00502d14:  // fild qword ptr [esp + 0x12c]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x12cu)));
L_00502d1b:  // shr edx, 8
    t0 = lshr<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00502d1e:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_00502d24:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_00502d2a:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_00502d30:  // mov dword ptr [esp + 0x114], edx
    M32((uint32_t)(esp + 0x114u)) = (uint32_t)(edx);
L_00502d37:  // mov dword ptr [esp + 0x13c], ecx
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(ecx);
L_00502d3e:  // fild qword ptr [esp + 0x114]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x114u)));
L_00502d45:  // mov dword ptr [esp + 0x140], esi
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(esi);
L_00502d4c:  // mov dword ptr [esp + 0x138], esi
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(esi);
L_00502d53:  // shr eax, 0x18
    t0 = lshr<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_00502d56:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_00502d5c:  // mov dword ptr [esp + 0x134], eax
    M32((uint32_t)(esp + 0x134u)) = (uint32_t)(eax);
L_00502d63:  // mov ebx, dword ptr [0x634528]
    ebx = (uint32_t)(M32((uint32_t)(0x634528u)));
L_00502d69:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502d6e:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00502d72:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502d74:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502d75:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00502d79:  // fild qword ptr [esp + 0x144]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x144u)));
L_00502d80:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502d83:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_00502d89:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00502d8d:  // fild qword ptr [esp + 0x13c]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x13cu)));
L_00502d94:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_00502d9a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00502d9e:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00502da2:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00502da4:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00502da8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00502daa:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00502dae:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00502db2:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00502db6:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00502dba:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00502dbe:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00502dc2:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00502dc6:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00502dca:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00502dce:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_00502dd1:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00502dd3:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00502dd5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502dd6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502dd7:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502dddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502ddd:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00502de3:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_00502de7:  // mov ebx, dword ptr [0x63451c]
    ebx = (uint32_t)(M32((uint32_t)(0x63451cu)));
L_00502ded:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502df2:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00502df6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502df8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502df9:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502dfc:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00502e00:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00502e08:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00502e10:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00502e18:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_00502e1b:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00502e1d:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00502e1f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502e20:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502e21:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502e27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502e27:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00502e29:  // mov eax, dword ptr [0x634300]
    eax = (uint32_t)(M32((uint32_t)(0x634300u)));
L_00502e2e:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00502e30:  // jne 0x502eb1
    if (!f.zf) goto L_00502eb1;
L_00502e32:  // mov ecx, dword ptr [0x9c68f0]
    ecx = (uint32_t)(M32((uint32_t)(0x9c68f0u)));
L_00502e38:  // mov edx, dword ptr [0x9c68f4]
    edx = (uint32_t)(M32((uint32_t)(0x9c68f4u)));
L_00502e3e:  // mov eax, dword ptr [0x9c68ec]
    eax = (uint32_t)(M32((uint32_t)(0x9c68ecu)));
L_00502e43:  // mov ebx, dword ptr [0x6344f8]
    ebx = (uint32_t)(M32((uint32_t)(0x6344f8u)));
L_00502e49:  // mov dword ptr [esp + 0xe0], ecx
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(ecx);
L_00502e50:  // mov dword ptr [esp + 0xe4], edx
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(edx);
L_00502e57:  // mov edx, dword ptr [esp + 0xe0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xe0u)));
L_00502e5e:  // mov dword ptr [esp + 0xdc], eax
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(eax);
L_00502e65:  // mov eax, dword ptr [0x9c68f8]
    eax = (uint32_t)(M32((uint32_t)(0x9c68f8u)));
L_00502e6a:  // mov ecx, dword ptr [esp + 0xdc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xdcu)));
L_00502e71:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00502e75:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00502e79:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502e7b:  // mov dword ptr [esp + 0xec], eax
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(eax);
L_00502e82:  // mov eax, dword ptr [esp + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xe8u)));
L_00502e89:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502e8a:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00502e8d:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00502e91:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00502e95:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502e9a:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00502ea2:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00502ea5:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502ea7:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00502ea9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502eaa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502eab:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502eb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502eb1:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00502eb3:  // mov ecx, dword ptr [0x634324]
    ecx = (uint32_t)(M32((uint32_t)(0x634324u)));
L_00502eb9:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00502ebb:  // jne 0x503080
    if (!f.zf) goto L_00503080;
L_00502ec1:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502ec6:  // lea edx, [esp + 0x170]
    edx = (uint32_t)((uint32_t)(esp + 0x170u));
L_00502ecd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502ecf:  // mov dword ptr [esp + 0x174], 0x3eaaaaab
    M32((uint32_t)(esp + 0x174u)) = (uint32_t)(0x3eaaaaabu);
L_00502eda:  // mov dword ptr [esp + 0x178], 0
    M32((uint32_t)(esp + 0x178u)) = (uint32_t)(0x0u);
L_00502ee5:  // mov dword ptr [esp + 0x17c], 0
    M32((uint32_t)(esp + 0x17cu)) = (uint32_t)(0x0u);
L_00502ef0:  // mov dword ptr [esp + 0x180], 0
    M32((uint32_t)(esp + 0x180u)) = (uint32_t)(0x0u);
L_00502efb:  // mov dword ptr [esp + 0x184], 0
    M32((uint32_t)(esp + 0x184u)) = (uint32_t)(0x0u);
L_00502f06:  // mov dword ptr [esp + 0x188], 0x3eaaaaab
    M32((uint32_t)(esp + 0x188u)) = (uint32_t)(0x3eaaaaabu);
L_00502f11:  // mov dword ptr [esp + 0x18c], 0
    M32((uint32_t)(esp + 0x18cu)) = (uint32_t)(0x0u);
L_00502f1c:  // mov dword ptr [esp + 0x190], 0
    M32((uint32_t)(esp + 0x190u)) = (uint32_t)(0x0u);
L_00502f27:  // mov dword ptr [esp + 0x194], 0
    M32((uint32_t)(esp + 0x194u)) = (uint32_t)(0x0u);
L_00502f32:  // mov dword ptr [esp + 0x198], 0
    M32((uint32_t)(esp + 0x198u)) = (uint32_t)(0x0u);
L_00502f3d:  // mov dword ptr [esp + 0x19c], 0x3eaaaaab
    M32((uint32_t)(esp + 0x19cu)) = (uint32_t)(0x3eaaaaabu);
L_00502f48:  // mov dword ptr [esp + 0x1a0], 0
    M32((uint32_t)(esp + 0x1a0u)) = (uint32_t)(0x0u);
L_00502f53:  // mov dword ptr [esp + 0x1a4], 0
    M32((uint32_t)(esp + 0x1a4u)) = (uint32_t)(0x0u);
L_00502f5e:  // mov dword ptr [esp + 0x1a8], 0
    M32((uint32_t)(esp + 0x1a8u)) = (uint32_t)(0x0u);
L_00502f69:  // mov dword ptr [esp + 0x1ac], 0
    M32((uint32_t)(esp + 0x1acu)) = (uint32_t)(0x0u);
L_00502f74:  // mov dword ptr [esp + 0x1b0], 0x3eaaaaab
    M32((uint32_t)(esp + 0x1b0u)) = (uint32_t)(0x3eaaaaabu);
L_00502f7f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502f81:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502f82:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00502f84:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502f85:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502f8bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502f8b:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502f90:  // lea edx, [esp + 0x180]
    edx = (uint32_t)((uint32_t)(esp + 0x180u));
L_00502f97:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502f99:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502f9a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502f9c:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00502f9e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502f9f:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502fa5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502fa5:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502faa:  // lea edx, [esp + 0x190]
    edx = (uint32_t)((uint32_t)(esp + 0x190u));
L_00502fb1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00502fb3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502fb4:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502fb6:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_00502fb8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502fb9:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502fbfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502fbf:  // mov eax, dword ptr [0x9c68cc]
    eax = (uint32_t)(M32((uint32_t)(0x9c68ccu)));
L_00502fc4:  // mov dword ptr [esp + 0x28], esi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(esi);
L_00502fc8:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00502fca:  // jle 0x503080
    if ((f.zf || f.sf != f.of)) goto L_00503080;
L_00502fd0:  // mov ebx, 0xb
    ebx = (uint32_t)(0xbu);
L_00502fd5:  // mov dword ptr [esp + 0x20], 0x9c69d4
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x9c69d4u);
L_00502fdd:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00502fe1:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00502fe6:  // lea edi, [esp + 0x3f0]
    edi = (uint32_t)((uint32_t)(esp + 0x3f0u));
L_00502fed:  // lea eax, [esp + 0x3f0]
    eax = (uint32_t)((uint32_t)(esp + 0x3f0u));
L_00502ff4:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00502ff6:  // lea ecx, [esp + 0x2b0]
    ecx = (uint32_t)((uint32_t)(esp + 0x2b0u));
L_00502ffd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502ffe:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502fff:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503004u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503004:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503009:  // lea ecx, [esp + 0x2b0]
    ecx = (uint32_t)((uint32_t)(esp + 0x2b0u));
L_00503010:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503012:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503013:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00503015:  // lea ecx, [ebx - 1]
    ecx = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_00503018:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503019:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050301a:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503020u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503020:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503025:  // lea ecx, [esp + 0x2c0]
    ecx = (uint32_t)((uint32_t)(esp + 0x2c0u));
L_0050302c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050302e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050302f:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00503031:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00503032:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503033:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503039u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503039:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0050303e:  // lea ecx, [esp + 0x2d0]
    ecx = (uint32_t)((uint32_t)(esp + 0x2d0u));
L_00503045:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503047:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503048:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0050304a:  // lea ecx, [ebx + 1]
    ecx = (uint32_t)((uint32_t)(ebx + 0x1u));
L_0050304d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050304e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050304f:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503055u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503055:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00503059:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0050305d:  // mov ecx, dword ptr [0x9c68cc]
    ecx = (uint32_t)(M32((uint32_t)(0x9c68ccu)));
L_00503063:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00503064:  // add esi, 0x40
    t0 = ladd<32>(esi, 0x40u, f);
    esi = (uint32_t)(t0);
L_00503067:  // add ebx, 3
    t0 = ladd<32>(ebx, 0x3u, f);
    ebx = (uint32_t)(t0);
L_0050306a:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0050306c:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00503070:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_00503074:  // jl 0x502fdd
    if ((f.sf != f.of)) goto L_00502fdd;
L_0050307a:  // mov edi, dword ptr [esp + 0x44]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0050307e:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00503080:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00503082:  // mov ecx, dword ptr [0x6342c4]
    ecx = (uint32_t)(M32((uint32_t)(0x6342c4u)));
L_00503088:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0050308a:  // je 0x503098
    if (f.zf) goto L_00503098;
L_0050308c:  // cmp eax, dword ptr [0x634210]
    t0 = lsub<32>(eax, M32((uint32_t)(0x634210u)), f);
L_00503092:  // jne 0x503141
    if (!f.zf) goto L_00503141;
L_00503098:  // mov eax, dword ptr [0x9c68a8]
    eax = (uint32_t)(M32((uint32_t)(0x9c68a8u)));
L_0050309d:  // mov dword ptr [esp + 0x110], esi
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(esi);
L_005030a4:  // mov edx, eax
    edx = (uint32_t)(eax);
L_005030a6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005030a8:  // shr edx, 0x10
    t0 = lshr<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_005030ab:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_005030b1:  // mov dword ptr [esp + 0x120], esi
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(esi);
L_005030b8:  // mov dword ptr [esp + 0x10c], edx
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(edx);
L_005030bf:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_005030c4:  // fild qword ptr [esp + 0x10c]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x10cu)));
L_005030cb:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_005030ce:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_005030d4:  // mov dword ptr [esp + 0x124], eax
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(eax);
L_005030db:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_005030e1:  // mov dword ptr [esp + 0x11c], ecx
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(ecx);
L_005030e8:  // mov dword ptr [esp + 0x128], esi
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(esi);
L_005030ef:  // mov ebx, dword ptr [0x63445c]
    ebx = (uint32_t)(M32((uint32_t)(0x63445cu)));
L_005030f5:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005030fa:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005030fe:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503100:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00503104:  // fild qword ptr [esp + 0x120]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x120u)));
L_0050310b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050310c:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_0050310f:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_00503117:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_0050311d:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00503121:  // fild qword ptr [esp + 0x12c]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x12cu)));
L_00503128:  // fmul dword ptr [0x5df8fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df8fcu)));
L_0050312e:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00503132:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_00503135:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00503137:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00503139:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050313a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050313b:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503141u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503141:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00503143:  // mov eax, dword ptr [0x634114]
    eax = (uint32_t)(M32((uint32_t)(0x634114u)));
L_00503148:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0050314a:  // jne 0x503190
    if (!f.zf) goto L_00503190;
L_0050314c:  // mov ebx, dword ptr [0x6343cc]
    ebx = (uint32_t)(M32((uint32_t)(0x6343ccu)));
L_00503152:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503157:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050315b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050315d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050315e:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503161:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00503169:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00503171:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00503179:  // mov dword ptr [esp + 0x24], 0x41f00000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x41f00000u);
L_00503181:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00503184:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503186:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00503188:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503189:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050318a:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503190u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503190:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00503192:  // mov ecx, dword ptr [0x634330]
    ecx = (uint32_t)(M32((uint32_t)(0x634330u)));
L_00503198:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0050319a:  // jne 0x503338
    if (!f.zf) goto L_00503338;
L_005031a0:  // mov edx, dword ptr [0x66019c]
    edx = (uint32_t)(M32((uint32_t)(0x66019cu)));
L_005031a6:  // mov ecx, dword ptr [0x660198]
    ecx = (uint32_t)(M32((uint32_t)(0x660198u)));
L_005031ac:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_005031b2:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_005031b6:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_005031ba:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_005031be:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005031c0:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_005031c2:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_005031c6:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_005031ca:  // mov eax, dword ptr [0x6601a0]
    eax = (uint32_t)(M32((uint32_t)(0x6601a0u)));
L_005031cf:  // mov ecx, dword ptr [0x6601a4]
    ecx = (uint32_t)(M32((uint32_t)(0x6601a4u)));
L_005031d5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005031d7:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_005031db:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_005031df:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_005031e5:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_005031e7:  // fst dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
L_005031eb:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_005031f1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005031f3:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_005031f6:  // jne 0x503218
    if (!f.zf) goto L_00503218;
L_005031f8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005031fa:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00503200:  // fdiv dword ptr [esp + 0x28]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x28u)));
L_00503204:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00503206:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_0050320a:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0050320e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00503210:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_00503214:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00503218:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0050321c:  // fchs 
    ST(0) = -ST(0);
L_0050321e:  // fstp dword ptr [esp + 0x160]
    F32((uint32_t)(esp + 0x160u)) = lf32(ST(0));
    lpop(x);
L_00503225:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00503229:  // fchs 
    ST(0) = -ST(0);
L_0050322b:  // fstp dword ptr [esp + 0x164]
    F32((uint32_t)(esp + 0x164u)) = lf32(ST(0));
    lpop(x);
L_00503232:  // lea edx, [esp + 0x2f0]
    edx = (uint32_t)((uint32_t)(esp + 0x2f0u));
L_00503239:  // lea eax, [esp + 0x160]
    eax = (uint32_t)((uint32_t)(esp + 0x160u));
L_00503240:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503241:  // lea ecx, [esp + 0x1c4]
    ecx = (uint32_t)((uint32_t)(esp + 0x1c4u));
L_00503248:  // fchs 
    ST(0) = -ST(0);
L_0050324a:  // fstp dword ptr [esp + 0x16c]
    F32((uint32_t)(esp + 0x16cu)) = lf32(ST(0));
    lpop(x);
L_00503251:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503252:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503253:  // mov dword ptr [esp + 0x178], 0
    M32((uint32_t)(esp + 0x178u)) = (uint32_t)(0x0u);
L_0050325e:  // call 0x5766a5
    t0 = 0x005766a5u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503263u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503263:  // mov ecx, dword ptr [esp + 0x1c8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1c8u)));
L_0050326a:  // mov edx, dword ptr [esp + 0x1c0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1c0u)));
L_00503271:  // mov eax, dword ptr [esp + 0x1c4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1c4u)));
L_00503278:  // mov ebx, dword ptr [0x63454c]
    ebx = (uint32_t)(M32((uint32_t)(0x63454cu)));
L_0050327e:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00503282:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503286:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503288:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503289:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_0050328c:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00503290:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00503294:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503299:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_005032a1:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_005032a4:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005032a6:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_005032a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005032a9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005032aa:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005032b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005032b0:  // mov ebx, dword ptr [0x634534]
    ebx = (uint32_t)(M32((uint32_t)(0x634534u)));
L_005032b6:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005032bb:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005032bf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005032c1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005032c2:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_005032c5:  // mov dword ptr [esp + 0x18], 0x40800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x40800000u);
L_005032cd:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_005032d5:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_005032dd:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_005032e5:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_005032e8:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_005032ea:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_005032ec:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005032ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005032ee:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005032f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005032f4:  // mov ebx, dword ptr [0x634540]
    ebx = (uint32_t)(M32((uint32_t)(0x634540u)));
L_005032fa:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005032ff:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503303:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503305:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503306:  // mov ecx, dword ptr [ebp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503309:  // mov dword ptr [esp + 0x18], 0x3f4ccccd
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f4ccccdu);
L_00503311:  // mov dword ptr [esp + 0x1c], 0x3f4ccccd
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x3f4ccccdu);
L_00503319:  // mov dword ptr [esp + 0x20], 0x3f4ccccd
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3f4ccccdu);
L_00503321:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_00503329:  // mov ecx, dword ptr [ecx + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_0050332c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0050332e:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_00503330:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503331:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503332:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503338u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503338:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0050333a:  // mov ecx, dword ptr [0x63418c]
    ecx = (uint32_t)(M32((uint32_t)(0x63418cu)));
L_00503340:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00503342:  // je 0x503358
    if (f.zf) goto L_00503358;
L_00503344:  // cmp eax, dword ptr [0x634198]
    t0 = lsub<32>(eax, M32((uint32_t)(0x634198u)), f);
L_0050334a:  // je 0x503358
    if (f.zf) goto L_00503358;
L_0050334c:  // cmp eax, dword ptr [0x6341a4]
    t0 = lsub<32>(eax, M32((uint32_t)(0x6341a4u)), f);
L_00503352:  // jne 0x50379c
    if (!f.zf) goto L_0050379c;
L_00503358:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0050335c:  // mov al, byte ptr [edi + 0x9c68a0]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x9c68a0u))) & 0xffu);
L_00503362:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00503364:  // jne 0x503375
    if (!f.zf) goto L_00503375;
L_00503366:  // mov al, byte ptr [edi + 0x9c68a1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x9c68a1u))) & 0xffu);
L_0050336c:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0050336d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0050336f:  // je 0x503366
    if (f.zf) goto L_00503366;
L_00503371:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_00503375:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00503376:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00503377:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00503378:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_0050337f:  // mov dword ptr [esp + 0x6c], esi
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(esi);
L_00503383:  // mov dword ptr [esp + 0x80], 0
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x0u);
L_0050338e:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_00503399:  // mov dword ptr [esp + 0x88], 0
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0x0u);
L_005033a4:  // mov dword ptr [esp + 0x90], 0
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(0x0u);
L_005033af:  // mov dword ptr [esp + 0x94], 0
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0x0u);
L_005033ba:  // mov dword ptr [esp + 0x98], 0
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(0x0u);
L_005033c5:  // mov dword ptr [esp + 0x9c], 0
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0x0u);
L_005033d0:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_005033d8:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_005033e0:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_005033e8:  // mov dword ptr [esp + 0xa0], 0
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0x0u);
L_005033f3:  // mov dword ptr [esp + 0xa4], 0
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(0x0u);
L_005033fe:  // mov dword ptr [esp + 0xa8], 0
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(0x0u);
L_00503409:  // mov dword ptr [esp + 0xac], 0
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0x0u);
L_00503414:  // mov dword ptr [esp + 0xb0], 0
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(0x0u);
L_0050341f:  // mov dword ptr [esp + 0xb4], 0
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(0x0u);
L_0050342a:  // call 0x44a5f0
    t0 = 0x0044a5f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050342fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050342f:  // lea edx, [edi + edi*2]
    edx = (uint32_t)((uint32_t)(edi + edi * 2u));
L_00503432:  // mov ecx, 0x17
    ecx = (uint32_t)(0x17u);
L_00503437:  // shl edx, 3
    t0 = lshl<32>(edx, 0x3u, f);
    edx = (uint32_t)(t0);
L_0050343a:  // sub edx, edi
    t0 = lsub<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_0050343c:  // lea edi, [esp + 0x60]
    edi = (uint32_t)((uint32_t)(esp + 0x60u));
L_00503440:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503442:  // mov dword ptr [esp + 0x20], 0x3f800000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3f800000u);
L_0050344a:  // lea esi, [edx*4 + 0x9c65c0]
    esi = (uint32_t)((uint32_t)(edx * 4u + 0x9c65c0u));
L_00503451:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00503453:  // mov edx, dword ptr [esp + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0050345a:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00503461:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_00503468:  // mov esi, dword ptr [0x6343f0]
    esi = (uint32_t)(M32((uint32_t)(0x6343f0u)));
L_0050346e:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00503472:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00503476:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503477:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_0050347a:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0050347e:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503483:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00503487:  // mov edx, dword ptr [edx + esi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + esi * 4u)));
L_0050348a:  // mov esi, dword ptr [esp + 0x54]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0050348e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503490:  // mov edx, dword ptr [edx + esi]
    edx = (uint32_t)(M32((uint32_t)(edx + esi)));
L_00503493:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503494:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503495:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050349bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050349b:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0050349f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005034a1:  // je 0x5034cf
    if (f.zf) goto L_005034cf;
L_005034a3:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005034a6:  // jne 0x5034ca
    if (!f.zf) goto L_005034ca;
L_005034a8:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_005034ac:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_005034b0:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_005034b4:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_005034b8:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_005034bc:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_005034c0:  // mov dword ptr [esp + 0x40], 0x3f800000
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x3f800000u);
L_005034c8:  // jmp 0x5034f5
    goto L_005034f5;
L_005034ca:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_005034cd:  // jne 0x5034f5
    if (!f.zf) goto L_005034f5;
L_005034cf:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_005034d3:  // fchs 
    ST(0) = -ST(0);
L_005034d5:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_005034d9:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_005034dd:  // fchs 
    ST(0) = -ST(0);
L_005034df:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_005034e3:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_005034e7:  // fchs 
    ST(0) = -ST(0);
L_005034e9:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_005034ed:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_005034f5:  // lea eax, [esp + 0x2f0]
    eax = (uint32_t)((uint32_t)(esp + 0x2f0u));
L_005034fc:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00503500:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503501:  // lea edx, [esp + 0xc0]
    edx = (uint32_t)((uint32_t)(esp + 0xc0u));
L_00503508:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503509:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050350a:  // call 0x5766a5
    t0 = 0x005766a5u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050350fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050350f:  // mov eax, dword ptr [esp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_00503516:  // mov ecx, dword ptr [esp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0050351d:  // mov edx, dword ptr [esp + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_00503524:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00503528:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0050352c:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_00503530:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00503532:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00503536:  // mov dword ptr [esp + 0x1c], 0x3f800000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x3f800000u);
L_0050353e:  // jne 0x503560
    if (!f.zf) goto L_00503560;
L_00503540:  // mov esi, dword ptr [0x634390]
    esi = (uint32_t)(M32((uint32_t)(0x634390u)));
L_00503546:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0050354b:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050354f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503551:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503553:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503554:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503557:  // mov edx, dword ptr [edx + esi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + esi * 4u)));
L_0050355a:  // mov esi, dword ptr [esp + 0x50]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0050355e:  // jmp 0x5035ac
    goto L_005035ac;
L_00503560:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00503563:  // jne 0x503585
    if (!f.zf) goto L_00503585;
L_00503565:  // mov esi, dword ptr [0x63439c]
    esi = (uint32_t)(M32((uint32_t)(0x63439cu)));
L_0050356b:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503570:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503574:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503576:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503578:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503579:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_0050357c:  // mov edx, dword ptr [edx + esi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + esi * 4u)));
L_0050357f:  // mov esi, dword ptr [esp + 0x38]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00503583:  // jmp 0x5035ac
    goto L_005035ac;
L_00503585:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00503588:  // jne 0x5036f9
    if (!f.zf) goto L_005036f9;
L_0050358e:  // mov esi, dword ptr [0x634444]
    esi = (uint32_t)(M32((uint32_t)(0x634444u)));
L_00503594:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503599:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050359d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050359f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005035a1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005035a2:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_005035a5:  // mov edx, dword ptr [edx + esi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + esi * 4u)));
L_005035a8:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005035ac:  // mov edx, dword ptr [edx + esi]
    edx = (uint32_t)(M32((uint32_t)(edx + esi)));
L_005035af:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005035b0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005035b1:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005035b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005035b7:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_005035bb:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_005035be:  // jne 0x5036f9
    if (!f.zf) goto L_005036f9;
L_005035c4:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_005035cb:  // mov ecx, dword ptr [esp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_005035d2:  // mov edx, dword ptr [esp + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_005035d9:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_005035dd:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_005035e1:  // lea eax, [esp + 0x2f0]
    eax = (uint32_t)((uint32_t)(esp + 0x2f0u));
L_005035e8:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_005035ec:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_005035f0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005035f1:  // lea edx, [esp + 0xc0]
    edx = (uint32_t)((uint32_t)(esp + 0xc0u));
L_005035f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005035f9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005035fa:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_00503602:  // call 0x5766a5
    t0 = 0x005766a5u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503607u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503607:  // mov edx, dword ptr [esp + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_0050360e:  // mov eax, dword ptr [esp + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_00503615:  // mov ecx, dword ptr [esp + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_0050361c:  // mov esi, dword ptr [0x634414]
    esi = (uint32_t)(M32((uint32_t)(0x634414u)));
L_00503622:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00503626:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050362a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050362c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050362d:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503630:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00503634:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503639:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0050363d:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_00503645:  // mov edx, dword ptr [edx + esi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + esi * 4u)));
L_00503648:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0050364c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0050364e:  // mov edx, dword ptr [edx + esi]
    edx = (uint32_t)(M32((uint32_t)(edx + esi)));
L_00503651:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503652:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503653:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503659u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503659:  // mov edx, dword ptr [esp + 0xa8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00503660:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_00503667:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0050366e:  // mov edi, dword ptr [0x63442c]
    edi = (uint32_t)(M32((uint32_t)(0x63442cu)));
L_00503674:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00503678:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050367c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050367e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050367f:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503682:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00503686:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0050368b:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0050368f:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_00503697:  // mov edx, dword ptr [edx + edi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + edi * 4u)));
L_0050369a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0050369c:  // mov edx, dword ptr [edx + esi]
    edx = (uint32_t)(M32((uint32_t)(edx + esi)));
L_0050369f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005036a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005036a1:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005036a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005036a7:  // mov edx, dword ptr [esp + 0x9c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_005036ae:  // mov eax, dword ptr [esp + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_005036b5:  // mov ecx, dword ptr [esp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_005036bc:  // mov edi, dword ptr [0x634438]
    edi = (uint32_t)(M32((uint32_t)(0x634438u)));
L_005036c2:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_005036c6:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005036ca:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005036cc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005036cd:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_005036d0:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_005036d4:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_005036d9:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_005036dd:  // mov dword ptr [esp + 0x24], 0x3f800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3f800000u);
L_005036e5:  // mov edx, dword ptr [edx + edi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + edi * 4u)));
L_005036e8:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005036ea:  // mov edx, dword ptr [edx + esi]
    edx = (uint32_t)(M32((uint32_t)(edx + esi)));
L_005036ed:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005036ee:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005036ef:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005036f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005036f5:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_005036f9:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_005036fc:  // jne 0x503761
    if (!f.zf) goto L_00503761;
L_005036fe:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_00503705:  // fmul dword ptr [esp + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x90u)));
L_0050370c:  // mov esi, dword ptr [0x6343a8]
    esi = (uint32_t)(M32((uint32_t)(0x6343a8u)));
L_00503712:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503716:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0050371b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050371d:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_00503723:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503724:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503727:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0050372f:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_00503737:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0050373d:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00503745:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00503749:  // mov edx, dword ptr [edx + esi*4]
    edx = (uint32_t)(M32((uint32_t)(edx + esi * 4u)));
L_0050374c:  // mov esi, dword ptr [esp + 0x38]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00503750:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503752:  // mov edx, dword ptr [edx + esi]
    edx = (uint32_t)(M32((uint32_t)(edx + esi)));
L_00503755:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503756:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503757:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050375du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050375d:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00503761:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00503763:  // jne 0x50376c
    if (!f.zf) goto L_0050376c;
L_00503765:  // add dword ptr [esp + 0x48], 4
    t0 = ladd<32>(M32((uint32_t)(esp + 0x48u)), 0x4u, f);
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(t0);
L_0050376a:  // jmp 0x503782
    goto L_00503782;
L_0050376c:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0050376f:  // jne 0x503778
    if (!f.zf) goto L_00503778;
L_00503771:  // add dword ptr [esp + 0x30], 4
    t0 = ladd<32>(M32((uint32_t)(esp + 0x30u)), 0x4u, f);
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(t0);
L_00503776:  // jmp 0x503782
    goto L_00503782;
L_00503778:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0050377b:  // jne 0x503782
    if (!f.zf) goto L_00503782;
L_0050377d:  // add dword ptr [esp + 0x2c], 4
    t0 = ladd<32>(M32((uint32_t)(esp + 0x2cu)), 0x4u, f);
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(t0);
L_00503782:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00503786:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050378a:  // mov edi, dword ptr [esp + 0x44]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0050378e:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0050378f:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00503792:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00503796:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_0050379a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0050379c:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0050379e:  // mov ecx, dword ptr [0x634174]
    ecx = (uint32_t)(M32((uint32_t)(0x634174u)));
L_005037a4:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_005037a6:  // jne 0x503823
    if (!f.zf) goto L_00503823;
L_005037a8:  // lea ecx, [esp + 0x3b0]
    ecx = (uint32_t)((uint32_t)(esp + 0x3b0u));
L_005037af:  // lea edx, [esp + 0x430]
    edx = (uint32_t)((uint32_t)(esp + 0x430u));
L_005037b6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005037b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005037b8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005037b9:  // mov dword ptr [esp + 0x150], 0
    M32((uint32_t)(esp + 0x150u)) = (uint32_t)(0x0u);
L_005037c4:  // mov dword ptr [esp + 0x154], 0
    M32((uint32_t)(esp + 0x154u)) = (uint32_t)(0x0u);
L_005037cf:  // mov dword ptr [esp + 0x158], 0
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(0x0u);
L_005037da:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005037dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005037df:  // lea eax, [esp + 0x430]
    eax = (uint32_t)((uint32_t)(esp + 0x430u));
L_005037e6:  // lea ecx, [esp + 0x144]
    ecx = (uint32_t)((uint32_t)(esp + 0x144u));
L_005037ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005037ee:  // lea edx, [esp + 0x1d4]
    edx = (uint32_t)((uint32_t)(esp + 0x1d4u));
L_005037f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005037f6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005037f7:  // call 0x57600b
    t0 = 0x0057600bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005037fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005037fc:  // mov ebx, dword ptr [0x634408]
    ebx = (uint32_t)(M32((uint32_t)(0x634408u)));
L_00503802:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503807:  // lea edx, [esp + 0x1d0]
    edx = (uint32_t)((uint32_t)(esp + 0x1d0u));
L_0050380e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503810:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503811:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503814:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503816:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00503819:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0050381b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050381c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050381d:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503823u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503823:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00503825:  // mov ecx, dword ptr [0x634294]
    ecx = (uint32_t)(M32((uint32_t)(0x634294u)));
L_0050382b:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0050382d:  // jne 0x50387d
    if (!f.zf) goto L_0050387d;
L_0050382f:  // fld dword ptr [0x9c73dc]
    lpush(x, (long double)F32((uint32_t)(0x9c73dcu)));
L_00503835:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00503839:  // fld dword ptr [0x9c73e0]
    lpush(x, (long double)F32((uint32_t)(0x9c73e0u)));
L_0050383f:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00503843:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00503847:  // mov ebx, dword ptr [0x6344bc]
    ebx = (uint32_t)(M32((uint32_t)(0x6344bcu)));
L_0050384d:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503852:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503856:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503858:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0050385e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050385f:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503862:  // mov dword ptr [esp + 0x24], 0x437f0000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x437f0000u);
L_0050386a:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0050386e:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00503871:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503873:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00503875:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503876:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503877:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050387du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050387d:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0050387f:  // mov ecx, dword ptr [0x6342a0]
    ecx = (uint32_t)(M32((uint32_t)(0x6342a0u)));
L_00503885:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00503887:  // jne 0x5038cf
    if (!f.zf) goto L_005038cf;
L_00503889:  // fld dword ptr [0x9c68b0]
    lpush(x, (long double)F32((uint32_t)(0x9c68b0u)));
L_0050388f:  // mov ebx, dword ptr [0x6344bc]
    ebx = (uint32_t)(M32((uint32_t)(0x6344bcu)));
L_00503895:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0050389a:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050389e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005038a0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005038a1:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_005038a4:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_005038a8:  // mov dword ptr [esp + 0x1c], 0x402df84d
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x402df84du);
L_005038b0:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_005038b8:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_005038c0:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_005038c3:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005038c5:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_005038c7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005038c8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005038c9:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005038cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005038cf:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_005038d1:  // mov ecx, dword ptr [0x6342f4]
    ecx = (uint32_t)(M32((uint32_t)(0x6342f4u)));
L_005038d7:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_005038d9:  // jne 0x503aa3
    if (!f.zf) goto L_00503aa3;
L_005038df:  // mov ecx, dword ptr [0x89ce4c]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_005038e5:  // lea eax, [esp + 0x1b0]
    eax = (uint32_t)((uint32_t)(esp + 0x1b0u));
L_005038ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005038ed:  // mov ecx, dword ptr [ecx*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x89c9a4u)));
L_005038f4:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_005038f6:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005038f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005038f8:  // mov edx, dword ptr [esp + 0x1b4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1b4u)));
L_005038ff:  // mov ecx, dword ptr [esp + 0x1b0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1b0u)));
L_00503906:  // mov eax, dword ptr [esp + 0x1b8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1b8u)));
L_0050390d:  // mov ebx, dword ptr [0x6344c8]
    ebx = (uint32_t)(M32((uint32_t)(0x6344c8u)));
L_00503913:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00503917:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0050391b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050391d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050391e:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503921:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00503925:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00503929:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0050392e:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00503936:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00503939:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0050393b:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0050393d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050393e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050393f:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503945u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503945:  // fld dword ptr [0x6321a0]
    lpush(x, (long double)F32((uint32_t)(0x6321a0u)));
L_0050394b:  // fcomp dword ptr [0x5d85cc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ccu)));
    lpop(x);
L_00503951:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00503953:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00503956:  // jne 0x503979
    if (!f.zf) goto L_00503979;
L_00503958:  // mov al, byte ptr [0x83cd58]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x83cd58u))) & 0xffu);
L_0050395d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0050395f:  // jne 0x503979
    if (!f.zf) goto L_00503979;
L_00503961:  // fld dword ptr [0x6321a0]
    lpush(x, (long double)F32((uint32_t)(0x6321a0u)));
L_00503967:  // fsub dword ptr [0x5d85cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ccu)));
L_0050396d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0050396f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00503971:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00503975:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00503977:  // jmp 0x503981
    goto L_00503981;
L_00503979:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00503981:  // mov ebx, dword ptr [0x6344d4]
    ebx = (uint32_t)(M32((uint32_t)(0x6344d4u)));
L_00503987:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0050398c:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503990:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503992:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503993:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503996:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503998:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_0050399b:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_0050399d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050399e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050399f:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005039a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005039a5:  // mov ecx, dword ptr [0x9c73f8]
    ecx = (uint32_t)(M32((uint32_t)(0x9c73f8u)));
L_005039ab:  // mov edx, dword ptr [0x9c73fc]
    edx = (uint32_t)(M32((uint32_t)(0x9c73fcu)));
L_005039b1:  // mov eax, dword ptr [0x9c73f4]
    eax = (uint32_t)(M32((uint32_t)(0x9c73f4u)));
L_005039b6:  // mov ebx, dword ptr [0x6344e0]
    ebx = (uint32_t)(M32((uint32_t)(0x6344e0u)));
L_005039bc:  // mov dword ptr [esp + 0xd0], ecx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(ecx);
L_005039c3:  // mov dword ptr [esp + 0xd4], edx
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(edx);
L_005039ca:  // mov edx, dword ptr [esp + 0xd0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_005039d1:  // mov dword ptr [esp + 0xcc], eax
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(eax);
L_005039d8:  // mov eax, dword ptr [0x9c7400]
    eax = (uint32_t)(M32((uint32_t)(0x9c7400u)));
L_005039dd:  // mov ecx, dword ptr [esp + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xccu)));
L_005039e4:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_005039e8:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005039ec:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005039ee:  // mov dword ptr [esp + 0xdc], eax
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(eax);
L_005039f5:  // mov eax, dword ptr [esp + 0xd8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xd8u)));
L_005039fc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005039fd:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503a00:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00503a04:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00503a08:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503a0d:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00503a15:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00503a18:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503a1a:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00503a1c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503a1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503a1e:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503a24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503a24:  // mov ecx, dword ptr [0x9c7408]
    ecx = (uint32_t)(M32((uint32_t)(0x9c7408u)));
L_00503a2a:  // mov edx, dword ptr [0x9c740c]
    edx = (uint32_t)(M32((uint32_t)(0x9c740cu)));
L_00503a30:  // mov eax, dword ptr [0x9c7404]
    eax = (uint32_t)(M32((uint32_t)(0x9c7404u)));
L_00503a35:  // mov ebx, dword ptr [0x6344ec]
    ebx = (uint32_t)(M32((uint32_t)(0x6344ecu)));
L_00503a3b:  // mov dword ptr [esp + 0xf0], ecx
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(ecx);
L_00503a42:  // mov dword ptr [esp + 0xf4], edx
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(edx);
L_00503a49:  // mov edx, dword ptr [esp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_00503a50:  // mov dword ptr [esp + 0xec], eax
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(eax);
L_00503a57:  // mov eax, dword ptr [0x9c7410]
    eax = (uint32_t)(M32((uint32_t)(0x9c7410u)));
L_00503a5c:  // mov ecx, dword ptr [esp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_00503a63:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00503a67:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00503a6b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00503a6d:  // mov dword ptr [esp + 0xfc], eax
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(eax);
L_00503a74:  // mov eax, dword ptr [esp + 0xf8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_00503a7b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503a7c:  // mov edx, dword ptr [ebp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x40u)));
L_00503a7f:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00503a83:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00503a87:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00503a8c:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00503a94:  // mov edx, dword ptr [edx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_00503a97:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00503a99:  // mov edx, dword ptr [edx]
    edx = (uint32_t)(M32((uint32_t)(edx)));
L_00503a9b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503a9c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503a9d:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00503aa3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00503aa3:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00503aa6:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_00503aa9:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00503aab:  // mov dword ptr [esp + 0x44], edi
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edi);
L_00503aaf:  // jne 0x502a4e
    if (!f.zf) goto L_00502a4e;
L_00503ab5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00503ab6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00503ab7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00503ab8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00503ab9:  // add esp, 0x520
    t0 = ladd<32>(esp, 0x520u, f);
    esp = (uint32_t)(t0);
L_00503abf:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00502920, 00502920)
