// lifted from 004cde60 (FUN_004cde60, 4201 bytes, 1185 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cde60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cde60;
L_004cde60:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004cde62:  // push 0x5d458f
    t0 = 0x5d458fu; esp -= 4; M32(esp) = t0;
L_004cde67:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004cde6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cde6e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004cde75:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004cde78:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004cde79:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cde7a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cde7b:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004cde7d:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004cde81:  // call 0x466120
    t0 = 0x00466120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cde86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cde86:  // mov dword ptr [esi], 0x5dc72c
    M32((uint32_t)(esi)) = (uint32_t)(0x5dc72cu);
L_004cde8c:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004cde8e:  // lea ecx, [esi + 0x14]
    ecx = (uint32_t)((uint32_t)(esi + 0x14u));
L_004cde91:  // mov dword ptr [esp + 0x28], ebx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebx);
L_004cde95:  // mov dword ptr [esi + 0x10], ebx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(ebx);
L_004cde98:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004cde9c:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdea1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdea1:  // mov al, byte ptr [esp + 0x30]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x30u))) & 0xffu);
L_004cdea5:  // mov dword ptr [esi + 0x24], ebx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ebx);
L_004cdea8:  // mov dword ptr [esi + 0x30], 0xbf800000
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(0xbf800000u);
L_004cdeaf:  // mov dword ptr [esi], 0x5de6fc
    M32((uint32_t)(esi)) = (uint32_t)(0x5de6fcu);
L_004cdeb5:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_004cdeb7:  // mov byte ptr [esp + 0x28], 1
    M8((uint32_t)(esp + 0x28u)) = (uint8_t)(0x1u);
L_004cdebc:  // mov byte ptr [0x82b4e8], al
    M8((uint32_t)(0x82b4e8u)) = (uint8_t)((eax & 0xffu));
L_004cdec1:  // mov dword ptr [esp + 0xc], 0x43960000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x43960000u);
L_004cdec9:  // jne 0x4cded3
    if (!f.zf) goto L_004cded3;
L_004cdecb:  // mov dword ptr [esp + 0xc], 0x43700000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x43700000u);
L_004cded3:  // push 0x539
    t0 = 0x539u; esp -= 4; M32(esp) = t0;
L_004cded8:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cdedd:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cdee2:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004cdee4:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cdee9:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdeeeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdeee:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cdef0:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_004cdef4:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cdef6:  // mov byte ptr [esp + 0x28], 2
    M8((uint32_t)(esp + 0x28u)) = (uint8_t)(0x2u);
L_004cdefb:  // je 0x4cdf28
    if (f.zf) goto L_004cdf28;
L_004cdefd:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004cdf01:  // push 0xb0000000
    t0 = 0xb0000000u; esp -= 4; M32(esp) = t0;
L_004cdf06:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004cdf07:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cdf08:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_004cdf0d:  // push 0x130ed7
    t0 = 0x130ed7u; esp -= 4; M32(esp) = t0;
L_004cdf12:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004cdf17:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdf1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdf1c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cdf1d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cdf1f:  // call 0x4a45c0
    t0 = 0x004a45c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdf24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdf24:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cdf26:  // jmp 0x4cdf2a
    goto L_004cdf2a;
L_004cdf28:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004cdf2a:  // mov al, byte ptr [esp + 0x30]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x30u))) & 0xffu);
L_004cdf2e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cdf2f:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_004cdf31:  // mov byte ptr [esp + 0x2c], 1
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1u);
L_004cdf36:  // mov edi, 0xffd6d6d6
    edi = (uint32_t)(0xffd6d6d6u);
L_004cdf3b:  // jne 0x4ce036
    if (!f.zf) goto L_004ce036;
L_004cdf41:  // push 0x53d
    t0 = 0x53du; esp -= 4; M32(esp) = t0;
L_004cdf46:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cdf4b:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cdf50:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004cdf52:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cdf57:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdf5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdf5c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cdf5e:  // je 0x4cdf87
    if (f.zf) goto L_004cdf87;
L_004cdf60:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004cdf65:  // mov dword ptr [eax + 4], 2
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x2u);
L_004cdf6c:  // mov dword ptr [eax + 8], 0x41d6e9
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x41d6e9u);
L_004cdf73:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004cdf76:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004cdf79:  // mov dword ptr [eax + 0x14], edi
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(edi);
L_004cdf7c:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004cdf7f:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004cdf85:  // jmp 0x4cdf8e
    goto L_004cdf8e;
L_004cdf87:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cdf89:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004cdf8e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cdf8f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cdf91:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdf96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdf96:  // push 0x53e
    t0 = 0x53eu; esp -= 4; M32(esp) = t0;
L_004cdf9b:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cdfa0:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cdfa5:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004cdfa7:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cdfac:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdfb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdfb1:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cdfb3:  // je 0x4cdfd7
    if (f.zf) goto L_004cdfd7;
L_004cdfb5:  // mov dword ptr [eax + 4], 2
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x2u);
L_004cdfbc:  // mov dword ptr [eax + 8], 0x1f08cea
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x1f08ceau);
L_004cdfc3:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004cdfc6:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004cdfc9:  // mov dword ptr [eax + 0x14], edi
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(edi);
L_004cdfcc:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004cdfcf:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004cdfd5:  // jmp 0x4cdfd9
    goto L_004cdfd9;
L_004cdfd7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cdfd9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cdfda:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cdfdc:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdfe1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdfe1:  // push 0x53f
    t0 = 0x53fu; esp -= 4; M32(esp) = t0;
L_004cdfe6:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cdfeb:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cdff0:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004cdff2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cdff7:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cdffcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cdffc:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cdffe:  // je 0x4ce02a
    if (f.zf) goto L_004ce02a;
L_004ce000:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce001:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce003:  // mov dword ptr [eax + 4], 2
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x2u);
L_004ce00a:  // mov dword ptr [eax + 8], 0x3fc4f9
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x3fc4f9u);
L_004ce011:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce014:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce017:  // mov dword ptr [eax + 0x14], edi
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(edi);
L_004ce01a:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004ce01d:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ce023:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce028u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce028:  // jmp 0x4ce03b
    goto L_004ce03b;
L_004ce02a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce02c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce02e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce02f:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce034u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce034:  // jmp 0x4ce03b
    goto L_004ce03b;
L_004ce036:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004ce03b:  // push 0x542
    t0 = 0x542u; esp -= 4; M32(esp) = t0;
L_004ce040:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce045:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce04a:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce04c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce051:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce056u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce056:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce058:  // je 0x4ce07d
    if (f.zf) goto L_004ce07d;
L_004ce05a:  // mov edi, 3
    edi = (uint32_t)(0x3u);
L_004ce05f:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ce062:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004ce065:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce068:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce06b:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce072:  // mov dword ptr [eax + 0x18], edi
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(edi);
L_004ce075:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ce07b:  // jmp 0x4ce084
    goto L_004ce084;
L_004ce07d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce07f:  // mov edi, 3
    edi = (uint32_t)(0x3u);
L_004ce084:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce085:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce087:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce08cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce08c:  // push 0x543
    t0 = 0x543u; esp -= 4; M32(esp) = t0;
L_004ce091:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce096:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce09b:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce09d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce0a2:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce0a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce0a7:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce0a9:  // je 0x4ce0c9
    if (f.zf) goto L_004ce0c9;
L_004ce0ab:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004ce0ae:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ce0b1:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce0b4:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce0b7:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce0be:  // mov dword ptr [eax + 0x18], ebp
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebp);
L_004ce0c1:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ce0c7:  // jmp 0x4ce0cb
    goto L_004ce0cb;
L_004ce0c9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce0cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce0cc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce0ce:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce0d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce0d3:  // push 0x544
    t0 = 0x544u; esp -= 4; M32(esp) = t0;
L_004ce0d8:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce0dd:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce0e2:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce0e4:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce0e9:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce0eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce0ee:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce0f0:  // je 0x4ce114
    if (f.zf) goto L_004ce114;
L_004ce0f2:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004ce0f5:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ce0f8:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce0fb:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce0fe:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce105:  // mov dword ptr [eax + 0x18], 2
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(0x2u);
L_004ce10c:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ce112:  // jmp 0x4ce116
    goto L_004ce116;
L_004ce114:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce116:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce117:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce119:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce11eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce11e:  // cmp byte ptr [esp + 0x34], bl
    t0 = lsub<8>(M8((uint32_t)(esp + 0x34u)), (ebx & 0xffu), f);
L_004ce122:  // je 0x4ce153
    if (f.zf) goto L_004ce153;
L_004ce124:  // push 0x549
    t0 = 0x549u; esp -= 4; M32(esp) = t0;
L_004ce129:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce12e:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce133:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce135:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce13a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce13fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce13f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce141:  // je 0x4ce1e7
    if (f.zf) goto L_004ce1e7;
L_004ce147:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_004ce14a:  // mov dword ptr [eax + 8], 0x437a3e
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x437a3eu);
L_004ce151:  // jmp 0x4ce1cf
    goto L_004ce1cf;
L_004ce153:  // push 0x54e
    t0 = 0x54eu; esp -= 4; M32(esp) = t0;
L_004ce158:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce15d:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce162:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce164:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce169:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce16eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce16e:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce170:  // je 0x4ce198
    if (f.zf) goto L_004ce198;
L_004ce172:  // mov dword ptr [eax + 4], 2
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x2u);
L_004ce179:  // mov dword ptr [eax + 8], 0xcada9
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0xcada9u);
L_004ce180:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce183:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce186:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce18d:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004ce190:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ce196:  // jmp 0x4ce19a
    goto L_004ce19a;
L_004ce198:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce19a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce19b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce19d:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce1a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce1a2:  // push 0x54f
    t0 = 0x54fu; esp -= 4; M32(esp) = t0;
L_004ce1a7:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce1ac:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce1b1:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce1b3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce1b8:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce1bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce1bd:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce1bf:  // je 0x4ce1e7
    if (f.zf) goto L_004ce1e7;
L_004ce1c1:  // mov dword ptr [eax + 4], 2
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x2u);
L_004ce1c8:  // mov dword ptr [eax + 8], 0x7a211
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x7a211u);
L_004ce1cf:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce1d2:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce1d5:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce1dc:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004ce1df:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ce1e5:  // jmp 0x4ce1e9
    goto L_004ce1e9;
L_004ce1e7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce1e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce1ea:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce1ec:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce1f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce1f1:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ce1f5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ce1f6:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce1fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce1fb:  // push 0x558
    t0 = 0x558u; esp -= 4; M32(esp) = t0;
L_004ce200:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce205:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce20a:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004ce20c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce211:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce216u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce216:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004ce218:  // mov dword ptr [esp + 0x34], esi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(esi);
L_004ce21c:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004ce21e:  // mov byte ptr [esp + 0x2c], 3
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x3u);
L_004ce223:  // je 0x4ce24b
    if (f.zf) goto L_004ce24b;
L_004ce225:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ce229:  // push 0xb0000000
    t0 = 0xb0000000u; esp -= 4; M32(esp) = t0;
L_004ce22e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce22f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ce230:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_004ce235:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce237:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce23cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce23c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004ce23f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce241:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce242:  // call 0x4a45c0
    t0 = 0x004a45c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce247u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce247:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004ce249:  // jmp 0x4ce24d
    goto L_004ce24d;
L_004ce24b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ce24d:  // push 0x55d
    t0 = 0x55du; esp -= 4; M32(esp) = t0;
L_004ce252:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce257:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce25c:  // push 0x38
    t0 = 0x38u; esp -= 4; M32(esp) = t0;
L_004ce25e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce263:  // mov byte ptr [esp + 0x3c], 1
    M8((uint32_t)(esp + 0x3cu)) = (uint8_t)(0x1u);
L_004ce268:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce26du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce26d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004ce26f:  // mov dword ptr [esp + 0x34], esi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(esi);
L_004ce273:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004ce275:  // mov byte ptr [esp + 0x2c], 4
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x4u);
L_004ce27a:  // je 0x4ce2b5
    if (f.zf) goto L_004ce2b5;
L_004ce27c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce27d:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004ce27f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce280:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce281:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce283:  // push 0x4e
    t0 = 0x4eu; esp -= 4; M32(esp) = t0;
L_004ce285:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce287:  // call 0x4a3630
    t0 = 0x004a3630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce28cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce28c:  // mov dword ptr [esi], 0x5de6b8
    M32((uint32_t)(esi)) = (uint32_t)(0x5de6b8u);
L_004ce292:  // fld dword ptr [0x6254f4]
    lpush(x, (long double)F32((uint32_t)(0x6254f4u)));
L_004ce298:  // fmul dword ptr [0x5d8608]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8608u)));
L_004ce29e:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004ce2a4:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ce2a8:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ce2ac:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ce2ad:  // mov dword ptr [esi + 0x24], eax
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(eax);
L_004ce2b0:  // mov dword ptr [esi + 0x28], eax
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(eax);
L_004ce2b3:  // jmp 0x4ce2b7
    goto L_004ce2b7;
L_004ce2b5:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004ce2b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ce2b8:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce2ba:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce2bf:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce2c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce2c4:  // push 0x562
    t0 = 0x562u; esp -= 4; M32(esp) = t0;
L_004ce2c9:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce2ce:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce2d3:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce2d5:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce2da:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce2dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce2df:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004ce2e1:  // mov dword ptr [esp + 0x34], esi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(esi);
L_004ce2e5:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004ce2e7:  // mov byte ptr [esp + 0x2c], 5
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x5u);
L_004ce2ec:  // je 0x4ce305
    if (f.zf) goto L_004ce305;
L_004ce2ee:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce2ef:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce2f1:  // push 0xef
    t0 = 0xefu; esp -= 4; M32(esp) = t0;
L_004ce2f6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce2f8:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce2fdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce2fd:  // mov dword ptr [esi], 0x5de66c
    M32((uint32_t)(esi)) = (uint32_t)(0x5de66cu);
L_004ce303:  // jmp 0x4ce307
    goto L_004ce307;
L_004ce305:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004ce307:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ce308:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce30a:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce30f:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce314u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce314:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce316:  // mov ecx, 0x8a1374
    ecx = (uint32_t)(0x8a1374u);
L_004ce31b:  // call 0x465490
    t0 = 0x00465490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce320u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce320:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ce322:  // je 0x4ce3ae
    if (f.zf) goto L_004ce3ae;
L_004ce328:  // cmp dword ptr [0x662ab4], ebp
    t0 = lsub<32>(M32((uint32_t)(0x662ab4u)), ebp, f);
L_004ce32e:  // jne 0x4ce35f
    if (!f.zf) goto L_004ce35f;
L_004ce330:  // push 0x568
    t0 = 0x568u; esp -= 4; M32(esp) = t0;
L_004ce335:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce33a:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce33f:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce341:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce346:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce34bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce34b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce34d:  // je 0x4ce3a4
    if (f.zf) goto L_004ce3a4;
L_004ce34f:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004ce356:  // mov dword ptr [eax + 8], 0x148fe9
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x148fe9u);
L_004ce35d:  // jmp 0x4ce38c
    goto L_004ce38c;
L_004ce35f:  // push 0x56c
    t0 = 0x56cu; esp -= 4; M32(esp) = t0;
L_004ce364:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce369:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce36e:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce370:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce375:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce37au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce37a:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce37c:  // je 0x4ce3a4
    if (f.zf) goto L_004ce3a4;
L_004ce37e:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004ce385:  // mov dword ptr [eax + 8], 0x226f16
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x226f16u);
L_004ce38c:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce38f:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce392:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce399:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004ce39c:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ce3a2:  // jmp 0x4ce3a6
    goto L_004ce3a6;
L_004ce3a4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce3a6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce3a7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce3a9:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce3aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce3ae:  // push 0x570
    t0 = 0x570u; esp -= 4; M32(esp) = t0;
L_004ce3b3:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce3b8:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce3bd:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004ce3bf:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce3c4:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce3c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce3c9:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004ce3cd:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce3cf:  // mov byte ptr [esp + 0x2c], 6
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x6u);
L_004ce3d4:  // je 0x4ce3df
    if (f.zf) goto L_004ce3df;
L_004ce3d6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004ce3d8:  // call 0x453970
    t0 = 0x00453970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce3ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce3dd:  // jmp 0x4ce3e1
    goto L_004ce3e1;
L_004ce3df:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce3e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce3e2:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce3e4:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce3e9:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce3eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce3ee:  // push 0x572
    t0 = 0x572u; esp -= 4; M32(esp) = t0;
L_004ce3f3:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce3f8:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce3fd:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004ce3ff:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce404:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce409u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce409:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce40b:  // mov esi, 0x5d
    esi = (uint32_t)(0x5du);
L_004ce410:  // je 0x4ce437
    if (f.zf) goto L_004ce437;
L_004ce412:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004ce419:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ce41c:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce41f:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce422:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce429:  // mov dword ptr [eax + 0x18], esi
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(esi);
L_004ce42c:  // mov dword ptr [eax], 0x5de630
    M32((uint32_t)(eax)) = (uint32_t)(0x5de630u);
L_004ce432:  // mov dword ptr [eax + 0x1c], ebx
    M32((uint32_t)(eax + 0x1cu)) = (uint32_t)(ebx);
L_004ce435:  // jmp 0x4ce439
    goto L_004ce439;
L_004ce437:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce439:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce43a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce43c:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce441u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce441:  // push 0x573
    t0 = 0x573u; esp -= 4; M32(esp) = t0;
L_004ce446:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce44b:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce450:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004ce452:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce457:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce45cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce45c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce45e:  // je 0x4ce485
    if (f.zf) goto L_004ce485;
L_004ce460:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004ce467:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ce46a:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce46d:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce470:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce477:  // mov dword ptr [eax + 0x18], esi
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(esi);
L_004ce47a:  // mov dword ptr [eax], 0x5de630
    M32((uint32_t)(eax)) = (uint32_t)(0x5de630u);
L_004ce480:  // mov dword ptr [eax + 0x1c], ebp
    M32((uint32_t)(eax + 0x1cu)) = (uint32_t)(ebp);
L_004ce483:  // jmp 0x4ce487
    goto L_004ce487;
L_004ce485:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce487:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce488:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce48a:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce48fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce48f:  // push 0x574
    t0 = 0x574u; esp -= 4; M32(esp) = t0;
L_004ce494:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce499:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce49e:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004ce4a0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce4a5:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce4aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce4aa:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce4ac:  // je 0x4ce4d7
    if (f.zf) goto L_004ce4d7;
L_004ce4ae:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004ce4b5:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ce4b8:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce4bb:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce4be:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce4c5:  // mov dword ptr [eax + 0x18], esi
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(esi);
L_004ce4c8:  // mov dword ptr [eax], 0x5de630
    M32((uint32_t)(eax)) = (uint32_t)(0x5de630u);
L_004ce4ce:  // mov dword ptr [eax + 0x1c], 2
    M32((uint32_t)(eax + 0x1cu)) = (uint32_t)(0x2u);
L_004ce4d5:  // jmp 0x4ce4d9
    goto L_004ce4d9;
L_004ce4d7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce4d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce4da:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce4dc:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce4e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce4e1:  // push 0x575
    t0 = 0x575u; esp -= 4; M32(esp) = t0;
L_004ce4e6:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce4eb:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce4f0:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004ce4f2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce4f7:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce4fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce4fc:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce4fe:  // je 0x4ce526
    if (f.zf) goto L_004ce526;
L_004ce500:  // mov ecx, 3
    ecx = (uint32_t)(0x3u);
L_004ce505:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ce508:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004ce50b:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce50e:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce511:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce518:  // mov dword ptr [eax + 0x18], esi
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(esi);
L_004ce51b:  // mov dword ptr [eax], 0x5de630
    M32((uint32_t)(eax)) = (uint32_t)(0x5de630u);
L_004ce521:  // mov dword ptr [eax + 0x1c], ecx
    M32((uint32_t)(eax + 0x1cu)) = (uint32_t)(ecx);
L_004ce524:  // jmp 0x4ce528
    goto L_004ce528;
L_004ce526:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce528:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce529:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce52b:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce530u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce530:  // push 0x577
    t0 = 0x577u; esp -= 4; M32(esp) = t0;
L_004ce535:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce53a:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce53f:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ce541:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce546:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce54bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce54b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ce54d:  // je 0x4ce575
    if (f.zf) goto L_004ce575;
L_004ce54f:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004ce556:  // mov dword ptr [eax + 8], 0x6f9da
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x6f9dau);
L_004ce55d:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ce560:  // mov dword ptr [eax + 0x10], ebp
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ebp);
L_004ce563:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ce56a:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004ce56d:  // mov dword ptr [eax], 0x5de5f4
    M32((uint32_t)(eax)) = (uint32_t)(0x5de5f4u);
L_004ce573:  // jmp 0x4ce577
    goto L_004ce577;
L_004ce575:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce577:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce578:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce57a:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce57fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce57f:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ce583:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ce584:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce589u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce589:  // push 0x57d
    t0 = 0x57du; esp -= 4; M32(esp) = t0;
L_004ce58e:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce593:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce598:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004ce59a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce59f:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce5a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce5a4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004ce5a6:  // mov dword ptr [esp + 0x34], esi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(esi);
L_004ce5aa:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004ce5ac:  // mov byte ptr [esp + 0x2c], 7
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x7u);
L_004ce5b1:  // je 0x4ce5d9
    if (f.zf) goto L_004ce5d9;
L_004ce5b3:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ce5b7:  // push 0xb0000000
    t0 = 0xb0000000u; esp -= 4; M32(esp) = t0;
L_004ce5bc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce5bd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ce5be:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_004ce5c3:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004ce5c5:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce5cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce5ca:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004ce5cd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce5cf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce5d0:  // call 0x4a45c0
    t0 = 0x004a45c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce5d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce5d5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004ce5d7:  // jmp 0x4ce5db
    goto L_004ce5db;
L_004ce5d9:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004ce5db:  // push 0x580
    t0 = 0x580u; esp -= 4; M32(esp) = t0;
L_004ce5e0:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce5e5:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce5ea:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce5ec:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce5f1:  // mov byte ptr [esp + 0x3c], 1
    M8((uint32_t)(esp + 0x3cu)) = (uint8_t)(0x1u);
L_004ce5f6:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce5fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce5fb:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004ce5fd:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004ce601:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004ce603:  // mov byte ptr [esp + 0x2c], 8
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x8u);
L_004ce608:  // je 0x4ce621
    if (f.zf) goto L_004ce621;
L_004ce60a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce60b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce60d:  // push 0xf7
    t0 = 0xf7u; esp -= 4; M32(esp) = t0;
L_004ce612:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce614:  // call 0x4a3b60
    t0 = 0x004a3b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce619u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce619:  // mov dword ptr [edi], 0x5de5a8
    M32((uint32_t)(edi)) = (uint32_t)(0x5de5a8u);
L_004ce61f:  // jmp 0x4ce623
    goto L_004ce623;
L_004ce621:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ce623:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ce624:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce626:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce62b:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce630u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce630:  // push 0x583
    t0 = 0x583u; esp -= 4; M32(esp) = t0;
L_004ce635:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce63a:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce63f:  // push 0x58
    t0 = 0x58u; esp -= 4; M32(esp) = t0;
L_004ce641:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce646:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce64bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce64b:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004ce64d:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004ce651:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004ce653:  // mov byte ptr [esp + 0x2c], 9
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x9u);
L_004ce658:  // je 0x4ce6c9
    if (f.zf) goto L_004ce6c9;
L_004ce65a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce65b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce65d:  // push 0xdf
    t0 = 0xdfu; esp -= 4; M32(esp) = t0;
L_004ce662:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ce664:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce669u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce669:  // mov dword ptr [edi], 0x5de55c
    M32((uint32_t)(edi)) = (uint32_t)(0x5de55cu);
L_004ce66f:  // mov dword ptr [edi + 0x28], ebx
    M32((uint32_t)(edi + 0x28u)) = (uint32_t)(ebx);
L_004ce672:  // mov dword ptr [edi + 0x2c], ebx
    M32((uint32_t)(edi + 0x2cu)) = (uint32_t)(ebx);
L_004ce675:  // mov dword ptr [edi + 0x30], ebx
    M32((uint32_t)(edi + 0x30u)) = (uint32_t)(ebx);
L_004ce678:  // mov dword ptr [edi + 0x34], ebx
    M32((uint32_t)(edi + 0x34u)) = (uint32_t)(ebx);
L_004ce67b:  // mov dword ptr [edi + 0x38], ebx
    M32((uint32_t)(edi + 0x38u)) = (uint32_t)(ebx);
L_004ce67e:  // mov dword ptr [edi + 0x3c], ebx
    M32((uint32_t)(edi + 0x3cu)) = (uint32_t)(ebx);
L_004ce681:  // mov dword ptr [edi + 0x40], ebx
    M32((uint32_t)(edi + 0x40u)) = (uint32_t)(ebx);
L_004ce684:  // mov dword ptr [edi + 0x44], ebx
    M32((uint32_t)(edi + 0x44u)) = (uint32_t)(ebx);
L_004ce687:  // mov dword ptr [edi + 0x48], ebx
    M32((uint32_t)(edi + 0x48u)) = (uint32_t)(ebx);
L_004ce68a:  // cmp dword ptr [0x89c07c], ebx
    t0 = lsub<32>(M32((uint32_t)(0x89c07cu)), ebx, f);
L_004ce690:  // je 0x4ce697
    if (f.zf) goto L_004ce697;
L_004ce692:  // mov dword ptr [edi + 0x4c], ebp
    M32((uint32_t)(edi + 0x4cu)) = (uint32_t)(ebp);
L_004ce695:  // jmp 0x4ce69a
    goto L_004ce69a;
L_004ce697:  // mov dword ptr [edi + 0x4c], ebx
    M32((uint32_t)(edi + 0x4cu)) = (uint32_t)(ebx);
L_004ce69a:  // mov eax, dword ptr [0x8aa96c]
    eax = (uint32_t)(M32((uint32_t)(0x8aa96cu)));
L_004ce69f:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_004ce6a4:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004ce6a6:  // jge 0x4ce6b0
    if ((f.sf == f.of)) goto L_004ce6b0;
L_004ce6a8:  // mov dword ptr [edi + 0x50], ebx
    M32((uint32_t)(edi + 0x50u)) = (uint32_t)(ebx);
L_004ce6ab:  // mov dword ptr [edi + 0x54], ebx
    M32((uint32_t)(edi + 0x54u)) = (uint32_t)(ebx);
L_004ce6ae:  // jmp 0x4ce6cb
    goto L_004ce6cb;
L_004ce6b0:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_004ce6b3:  // jge 0x4ce6bd
    if ((f.sf == f.of)) goto L_004ce6bd;
L_004ce6b5:  // mov dword ptr [edi + 0x50], ebx
    M32((uint32_t)(edi + 0x50u)) = (uint32_t)(ebx);
L_004ce6b8:  // mov dword ptr [edi + 0x54], ecx
    M32((uint32_t)(edi + 0x54u)) = (uint32_t)(ecx);
L_004ce6bb:  // jmp 0x4ce6cb
    goto L_004ce6cb;
L_004ce6bd:  // mov dword ptr [edi + 0x50], ecx
    M32((uint32_t)(edi + 0x50u)) = (uint32_t)(ecx);
L_004ce6c0:  // mov dword ptr [edi + 0x54], 5
    M32((uint32_t)(edi + 0x54u)) = (uint32_t)(0x5u);
L_004ce6c7:  // jmp 0x4ce6cb
    goto L_004ce6cb;
L_004ce6c9:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ce6cb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ce6cc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce6ce:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce6d3:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce6d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce6d8:  // push 0x587
    t0 = 0x587u; esp -= 4; M32(esp) = t0;
L_004ce6dd:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce6e2:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce6e7:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce6e9:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce6ee:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce6f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce6f3:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce6f5:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce6f9:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce6fb:  // mov byte ptr [esp + 0x2c], 0xa
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0xau);
L_004ce700:  // je 0x4ce718
    if (f.zf) goto L_004ce718;
L_004ce702:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ce704:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce706:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004ce708:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce70a:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce70fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce70f:  // mov dword ptr [ebp], 0x5de510
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de510u);
L_004ce716:  // jmp 0x4ce71a
    goto L_004ce71a;
L_004ce718:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce71a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce71b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce71d:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce722:  // mov dword ptr [edi + 0x28], ebp
    M32((uint32_t)(edi + 0x28u)) = (uint32_t)(ebp);
L_004ce725:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce72au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce72a:  // push 0x588
    t0 = 0x588u; esp -= 4; M32(esp) = t0;
L_004ce72f:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce734:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce739:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce73b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce740:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce745u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce745:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce747:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce74b:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce74d:  // mov byte ptr [esp + 0x2c], 0xb
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0xbu);
L_004ce752:  // je 0x4ce769
    if (f.zf) goto L_004ce769;
L_004ce754:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce755:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce757:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_004ce759:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce75b:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce760u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce760:  // mov dword ptr [ebp], 0x5de4c4
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de4c4u);
L_004ce767:  // jmp 0x4ce76b
    goto L_004ce76b;
L_004ce769:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce76b:  // mov dword ptr [0x82b48c], ebp
    M32((uint32_t)(0x82b48cu)) = (uint32_t)(ebp);
L_004ce771:  // mov dword ptr [edi + 0x2c], ebp
    M32((uint32_t)(edi + 0x2cu)) = (uint32_t)(ebp);
L_004ce774:  // mov eax, dword ptr [0x82b48c]
    eax = (uint32_t)(M32((uint32_t)(0x82b48cu)));
L_004ce779:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce77b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce77c:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce781:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce786u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce786:  // push 0x589
    t0 = 0x589u; esp -= 4; M32(esp) = t0;
L_004ce78b:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce790:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce795:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce797:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce79c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce7a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce7a1:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce7a3:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce7a7:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce7a9:  // mov byte ptr [esp + 0x2c], 0xc
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0xcu);
L_004ce7ae:  // je 0x4ce7c5
    if (f.zf) goto L_004ce7c5;
L_004ce7b0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce7b1:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce7b3:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_004ce7b5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce7b7:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce7bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce7bc:  // mov dword ptr [ebp], 0x5de478
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de478u);
L_004ce7c3:  // jmp 0x4ce7c7
    goto L_004ce7c7;
L_004ce7c5:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce7c7:  // mov dword ptr [0x82b488], ebp
    M32((uint32_t)(0x82b488u)) = (uint32_t)(ebp);
L_004ce7cd:  // mov dword ptr [edi + 0x30], ebp
    M32((uint32_t)(edi + 0x30u)) = (uint32_t)(ebp);
L_004ce7d0:  // mov ecx, dword ptr [0x82b488]
    ecx = (uint32_t)(M32((uint32_t)(0x82b488u)));
L_004ce7d6:  // mov byte ptr [esp + 0x2c], 1
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1u);
L_004ce7db:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ce7dc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce7de:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce7e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce7e3:  // push 0x58a
    t0 = 0x58au; esp -= 4; M32(esp) = t0;
L_004ce7e8:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce7ed:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce7f2:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce7f4:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce7f9:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce7feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce7fe:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce800:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce804:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce806:  // mov byte ptr [esp + 0x2c], 0xd
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0xdu);
L_004ce80b:  // je 0x4ce822
    if (f.zf) goto L_004ce822;
L_004ce80d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce80e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce810:  // push 0x26
    t0 = 0x26u; esp -= 4; M32(esp) = t0;
L_004ce812:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce814:  // call 0x4a3b60
    t0 = 0x004a3b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce819u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce819:  // mov dword ptr [ebp], 0x5de42c
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de42cu);
L_004ce820:  // jmp 0x4ce824
    goto L_004ce824;
L_004ce822:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce824:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce825:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce827:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce82c:  // mov dword ptr [edi + 0x34], ebp
    M32((uint32_t)(edi + 0x34u)) = (uint32_t)(ebp);
L_004ce82f:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce834u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce834:  // push 0x58d
    t0 = 0x58du; esp -= 4; M32(esp) = t0;
L_004ce839:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce83e:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce843:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce845:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce84a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce84fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce84f:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce851:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce855:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce857:  // mov byte ptr [esp + 0x2c], 0xe
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0xeu);
L_004ce85c:  // je 0x4ce877
    if (f.zf) goto L_004ce877;
L_004ce85e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ce860:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce862:  // push 0xde
    t0 = 0xdeu; esp -= 4; M32(esp) = t0;
L_004ce867:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce869:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce86eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce86e:  // mov dword ptr [ebp], 0x5de3e0
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de3e0u);
L_004ce875:  // jmp 0x4ce879
    goto L_004ce879;
L_004ce877:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce879:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce87a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce87c:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce881:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce886u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce886:  // cmp dword ptr [0x89c0ac], ebx
    t0 = lsub<32>(M32((uint32_t)(0x89c0acu)), ebx, f);
L_004ce88c:  // je 0x4ce8df
    if (f.zf) goto L_004ce8df;
L_004ce88e:  // push 0x593
    t0 = 0x593u; esp -= 4; M32(esp) = t0;
L_004ce893:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce898:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce89d:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce89f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce8a4:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce8a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce8a9:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce8ab:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce8af:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce8b1:  // mov byte ptr [esp + 0x2c], 0xf
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0xfu);
L_004ce8b6:  // je 0x4ce8d0
    if (f.zf) goto L_004ce8d0;
L_004ce8b8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce8b9:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce8bb:  // push 0xeb
    t0 = 0xebu; esp -= 4; M32(esp) = t0;
L_004ce8c0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce8c2:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce8c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce8c7:  // mov dword ptr [ebp], 0x5de394
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de394u);
L_004ce8ce:  // jmp 0x4ce8d2
    goto L_004ce8d2;
L_004ce8d0:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce8d2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce8d3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce8d5:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce8da:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce8dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce8df:  // push 0x596
    t0 = 0x596u; esp -= 4; M32(esp) = t0;
L_004ce8e4:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce8e9:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce8ee:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce8f0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce8f5:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce8fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce8fa:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce8fc:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce900:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce902:  // mov byte ptr [esp + 0x2c], 0x10
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x10u);
L_004ce907:  // je 0x4ce921
    if (f.zf) goto L_004ce921;
L_004ce909:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ce90b:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce90d:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004ce90f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce911:  // call 0x4a3b60
    t0 = 0x004a3b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce916u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce916:  // mov dword ptr [ebp], 0x5de348
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de348u);
L_004ce91d:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004ce91f:  // jmp 0x4ce923
    goto L_004ce923;
L_004ce921:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ce923:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ce924:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce926:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce92b:  // mov dword ptr [edi + 0x38], eax
    M32((uint32_t)(edi + 0x38u)) = (uint32_t)(eax);
L_004ce92e:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce933u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce933:  // push 0x597
    t0 = 0x597u; esp -= 4; M32(esp) = t0;
L_004ce938:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce93d:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce942:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce944:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce949:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce94eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce94e:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce950:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce954:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce956:  // mov byte ptr [esp + 0x2c], 0x11
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x11u);
L_004ce95b:  // je 0x4ce972
    if (f.zf) goto L_004ce972;
L_004ce95d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ce95e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce960:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004ce962:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce964:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce969u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce969:  // mov dword ptr [ebp], 0x5de2fc
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de2fcu);
L_004ce970:  // jmp 0x4ce974
    goto L_004ce974;
L_004ce972:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce974:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce975:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce977:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce97c:  // mov dword ptr [edi + 0x3c], ebp
    M32((uint32_t)(edi + 0x3cu)) = (uint32_t)(ebp);
L_004ce97f:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce984u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce984:  // push 0x598
    t0 = 0x598u; esp -= 4; M32(esp) = t0;
L_004ce989:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce98e:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce993:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce995:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce99a:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce99fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce99f:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce9a1:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce9a5:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce9a7:  // mov byte ptr [esp + 0x2c], 0x12
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x12u);
L_004ce9ac:  // je 0x4ce9c4
    if (f.zf) goto L_004ce9c4;
L_004ce9ae:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ce9b0:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ce9b2:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_004ce9b4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ce9b6:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce9bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce9bb:  // mov dword ptr [ebp], 0x5de2b0
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de2b0u);
L_004ce9c2:  // jmp 0x4ce9c6
    goto L_004ce9c6;
L_004ce9c4:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ce9c6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ce9c7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ce9c9:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ce9ce:  // mov dword ptr [edi + 0x40], ebp
    M32((uint32_t)(edi + 0x40u)) = (uint32_t)(ebp);
L_004ce9d1:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce9d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce9d6:  // push 0x599
    t0 = 0x599u; esp -= 4; M32(esp) = t0;
L_004ce9db:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ce9e0:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ce9e5:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ce9e7:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ce9ec:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ce9f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ce9f1:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ce9f3:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004ce9f7:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ce9f9:  // mov byte ptr [esp + 0x2c], 0x13
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x13u);
L_004ce9fe:  // je 0x4cea16
    if (f.zf) goto L_004cea16;
L_004cea00:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cea02:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004cea04:  // push 0x1d
    t0 = 0x1du; esp -= 4; M32(esp) = t0;
L_004cea06:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004cea08:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cea0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cea0d:  // mov dword ptr [ebp], 0x5de260
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de260u);
L_004cea14:  // jmp 0x4cea18
    goto L_004cea18;
L_004cea16:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004cea18:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cea19:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cea1b:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004cea20:  // mov dword ptr [edi + 0x44], ebp
    M32((uint32_t)(edi + 0x44u)) = (uint32_t)(ebp);
L_004cea23:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cea28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cea28:  // push 0x59a
    t0 = 0x59au; esp -= 4; M32(esp) = t0;
L_004cea2d:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cea32:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cea37:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004cea39:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cea3e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cea43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cea43:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004cea45:  // mov dword ptr [esp + 0x34], ebp
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebp);
L_004cea49:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004cea4b:  // mov byte ptr [esp + 0x2c], 0x14
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x14u);
L_004cea50:  // je 0x4cea6b
    if (f.zf) goto L_004cea6b;
L_004cea52:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cea54:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004cea56:  // push 0xd3
    t0 = 0xd3u; esp -= 4; M32(esp) = t0;
L_004cea5b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004cea5d:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cea62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cea62:  // mov dword ptr [ebp], 0x5de214
    M32((uint32_t)(ebp)) = (uint32_t)(0x5de214u);
L_004cea69:  // jmp 0x4cea6d
    goto L_004cea6d;
L_004cea6b:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004cea6d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cea6e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cea70:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004cea75:  // mov dword ptr [edi + 0x48], ebp
    M32((uint32_t)(edi + 0x48u)) = (uint32_t)(ebp);
L_004cea78:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cea7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cea7d:  // push 0x59c
    t0 = 0x59cu; esp -= 4; M32(esp) = t0;
L_004cea82:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cea87:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cea8c:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004cea8e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cea93:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cea98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cea98:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004cea9c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cea9e:  // mov byte ptr [esp + 0x2c], 0x15
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x15u);
L_004ceaa3:  // je 0x4ceaaf
    if (f.zf) goto L_004ceaaf;
L_004ceaa5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ceaa6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004ceaa8:  // call 0x4a4250
    t0 = 0x004a4250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceaadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceaad:  // jmp 0x4ceab1
    goto L_004ceab1;
L_004ceaaf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ceab1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ceab2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ceab4:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ceab9:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceabeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceabe:  // mov ecx, dword ptr [0x82b48c]
    ecx = (uint32_t)(M32((uint32_t)(0x82b48cu)));
L_004ceac4:  // mov edi, dword ptr [ecx]
    edi = (uint32_t)(M32((uint32_t)(ecx)));
L_004ceac6:  // call dword ptr [edi + 0x3c]
    t0 = M32((uint32_t)(edi + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceac9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceac9:  // mov ecx, dword ptr [0x82b48c]
    ecx = (uint32_t)(M32((uint32_t)(0x82b48cu)));
L_004ceacf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cead0:  // call dword ptr [edi + 0x38]
    t0 = M32((uint32_t)(edi + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cead3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cead3:  // call 0x4dd770
    t0 = 0x004dd770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cead8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cead8:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_004ceada:  // je 0x4ceafd
    if (f.zf) goto L_004ceafd;
L_004ceadc:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ceadd:  // je 0x4ceaee
    if (f.zf) goto L_004ceaee;
L_004ceadf:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ceae0:  // jne 0x4ceb09
    if (!f.zf) goto L_004ceb09;
L_004ceae2:  // mov ecx, dword ptr [0x82b488]
    ecx = (uint32_t)(M32((uint32_t)(0x82b488u)));
L_004ceae8:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004ceaea:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ceaec:  // jmp 0x4ceb06
    goto L_004ceb06;
L_004ceaee:  // mov ecx, dword ptr [0x82b488]
    ecx = (uint32_t)(M32((uint32_t)(0x82b488u)));
L_004ceaf4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ceaf6:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004ceaf8:  // call dword ptr [eax + 0x38]
    t0 = M32((uint32_t)(eax + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceafbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceafb:  // jmp 0x4ceb09
    goto L_004ceb09;
L_004ceafd:  // mov ecx, dword ptr [0x82b488]
    ecx = (uint32_t)(M32((uint32_t)(0x82b488u)));
L_004ceb03:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ceb04:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004ceb06:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceb09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceb09:  // push 0x5a1
    t0 = 0x5a1u; esp -= 4; M32(esp) = t0;
L_004ceb0e:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ceb13:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ceb18:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004ceb1a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ceb1f:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceb24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceb24:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ceb26:  // je 0x4ceb52
    if (f.zf) goto L_004ceb52;
L_004ceb28:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004ceb2f:  // mov dword ptr [eax + 8], 0x6f9da
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x6f9dau);
L_004ceb36:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004ceb39:  // mov dword ptr [eax + 0x10], 1
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(0x1u);
L_004ceb40:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004ceb47:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004ceb4a:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004ceb50:  // jmp 0x4ceb54
    goto L_004ceb54;
L_004ceb52:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ceb54:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ceb55:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ceb57:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceb5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceb5c:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ceb60:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ceb61:  // lea ecx, [ebp + 0x14]
    ecx = (uint32_t)((uint32_t)(ebp + 0x14u));
L_004ceb64:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceb69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceb69:  // push 0x5a8
    t0 = 0x5a8u; esp -= 4; M32(esp) = t0;
L_004ceb6e:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ceb73:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ceb78:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004ceb7a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ceb7f:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceb84u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceb84:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004ceb86:  // mov dword ptr [esp + 0x34], esi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(esi);
L_004ceb8a:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004ceb8c:  // mov byte ptr [esp + 0x2c], 0x16
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x16u);
L_004ceb91:  // je 0x4cebb9
    if (f.zf) goto L_004cebb9;
L_004ceb93:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ceb97:  // push 0xb0000000
    t0 = 0xb0000000u; esp -= 4; M32(esp) = t0;
L_004ceb9c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ceb9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ceb9e:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_004ceba3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ceba5:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cebaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cebaa:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004cebad:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cebaf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cebb0:  // call 0x4a45c0
    t0 = 0x004a45c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cebb5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cebb5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cebb7:  // jmp 0x4cebbb
    goto L_004cebbb;
L_004cebb9:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004cebbb:  // push 0x5aa
    t0 = 0x5aau; esp -= 4; M32(esp) = t0;
L_004cebc0:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cebc5:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cebca:  // push 0x38
    t0 = 0x38u; esp -= 4; M32(esp) = t0;
L_004cebcc:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cebd1:  // mov byte ptr [esp + 0x3c], 1
    M8((uint32_t)(esp + 0x3cu)) = (uint8_t)(0x1u);
L_004cebd6:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cebdbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cebdb:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004cebdf:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cebe1:  // mov byte ptr [esp + 0x2c], 0x17
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x17u);
L_004cebe6:  // je 0x4cec0a
    if (f.zf) goto L_004cec0a;
L_004cebe8:  // mov ecx, dword ptr [0x662aac]
    ecx = (uint32_t)(M32((uint32_t)(0x662aacu)));
L_004cebee:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cebf0:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004cebf2:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004cebf4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cebf5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004cebf6:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004cebfa:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004cebfc:  // push 0x9d5a3f
    t0 = 0x9d5a3fu; esp -= 4; M32(esp) = t0;
L_004cec01:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cec03:  // call 0x4a3510
    t0 = 0x004a3510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cec08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cec08:  // jmp 0x4cec0c
    goto L_004cec0c;
L_004cec0a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cec0c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cec0d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cec0f:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004cec14:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cec19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cec19:  // push 0x5ab
    t0 = 0x5abu; esp -= 4; M32(esp) = t0;
L_004cec1e:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cec23:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cec28:  // push 0x38
    t0 = 0x38u; esp -= 4; M32(esp) = t0;
L_004cec2a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cec2f:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cec34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cec34:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004cec38:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cec3a:  // mov byte ptr [esp + 0x2c], 0x18
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x18u);
L_004cec3f:  // je 0x4cec63
    if (f.zf) goto L_004cec63;
L_004cec41:  // mov ecx, dword ptr [0x662ab0]
    ecx = (uint32_t)(M32((uint32_t)(0x662ab0u)));
L_004cec47:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cec49:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004cec4b:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004cec4d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cec4e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004cec4f:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004cec53:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004cec55:  // push 0x939ef4
    t0 = 0x939ef4u; esp -= 4; M32(esp) = t0;
L_004cec5a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cec5c:  // call 0x4a3510
    t0 = 0x004a3510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cec61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cec61:  // jmp 0x4cec65
    goto L_004cec65;
L_004cec63:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cec65:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cec66:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cec68:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004cec6d:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cec72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cec72:  // push 0x5ac
    t0 = 0x5acu; esp -= 4; M32(esp) = t0;
L_004cec77:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cec7c:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cec81:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004cec83:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cec88:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cec8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cec8d:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004cec8f:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004cec93:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004cec95:  // mov byte ptr [esp + 0x2c], 0x19
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x19u);
L_004cec9a:  // je 0x4cecb0
    if (f.zf) goto L_004cecb0;
L_004cec9c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004cec9d:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004cec9f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ceca1:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ceca3:  // call 0x4a3b60
    t0 = 0x004a3b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ceca8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ceca8:  // mov dword ptr [edi], 0x5de1c8
    M32((uint32_t)(edi)) = (uint32_t)(0x5de1c8u);
L_004cecae:  // jmp 0x4cecb2
    goto L_004cecb2;
L_004cecb0:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004cecb2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cecb3:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cecb5:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004cecba:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cecbfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cecbf:  // push 0x5ad
    t0 = 0x5adu; esp -= 4; M32(esp) = t0;
L_004cecc4:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cecc9:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cecce:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004cecd0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cecd5:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cecdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cecda:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004cecdc:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004cece0:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004cece2:  // mov byte ptr [esp + 0x2c], 0x1a
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1au);
L_004cece7:  // je 0x4cecfe
    if (f.zf) goto L_004cecfe;
L_004cece9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ceceb:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ceced:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_004cecef:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004cecf1:  // call 0x4a3b60
    t0 = 0x004a3b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cecf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cecf6:  // mov dword ptr [edi], 0x5de17c
    M32((uint32_t)(edi)) = (uint32_t)(0x5de17cu);
L_004cecfc:  // jmp 0x4ced00
    goto L_004ced00;
L_004cecfe:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ced00:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ced01:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ced03:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ced08:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ced0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ced0d:  // push 0x5ae
    t0 = 0x5aeu; esp -= 4; M32(esp) = t0;
L_004ced12:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ced17:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ced1c:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ced1e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ced23:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ced28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ced28:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004ced2a:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004ced2e:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004ced30:  // mov byte ptr [esp + 0x2c], 0x1b
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1bu);
L_004ced35:  // je 0x4ced4f
    if (f.zf) goto L_004ced4f;
L_004ced37:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ced39:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ced3b:  // push 0xd8
    t0 = 0xd8u; esp -= 4; M32(esp) = t0;
L_004ced40:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ced42:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ced47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ced47:  // mov dword ptr [edi], 0x5de130
    M32((uint32_t)(edi)) = (uint32_t)(0x5de130u);
L_004ced4d:  // jmp 0x4ced51
    goto L_004ced51;
L_004ced4f:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ced51:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ced52:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ced54:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ced59:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ced5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ced5e:  // push 0x5b1
    t0 = 0x5b1u; esp -= 4; M32(esp) = t0;
L_004ced63:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004ced68:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ced6d:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004ced6f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ced74:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ced79u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ced79:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004ced7b:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004ced7f:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004ced81:  // mov byte ptr [esp + 0x2c], 0x1c
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1cu);
L_004ced86:  // je 0x4ced9d
    if (f.zf) goto L_004ced9d;
L_004ced88:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ced8a:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004ced8c:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_004ced8e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ced90:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ced95u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ced95:  // mov dword ptr [edi], 0x5de0e4
    M32((uint32_t)(edi)) = (uint32_t)(0x5de0e4u);
L_004ced9b:  // jmp 0x4ced9f
    goto L_004ced9f;
L_004ced9d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ced9f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ceda0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ceda2:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004ceda7:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cedacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cedac:  // push 0x5b3
    t0 = 0x5b3u; esp -= 4; M32(esp) = t0;
L_004cedb1:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cedb6:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cedbb:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004cedbd:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cedc2:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cedc7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cedc7:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004cedc9:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004cedcd:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004cedcf:  // mov byte ptr [esp + 0x2c], 0x1d
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1du);
L_004cedd4:  // je 0x4cedeb
    if (f.zf) goto L_004cedeb;
L_004cedd6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cedd8:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004cedda:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004ceddc:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004cedde:  // call 0x4a3b10
    t0 = 0x004a3b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cede3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cede3:  // mov dword ptr [edi], 0x5de098
    M32((uint32_t)(edi)) = (uint32_t)(0x5de098u);
L_004cede9:  // jmp 0x4ceded
    goto L_004ceded;
L_004cedeb:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ceded:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cedee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cedf0:  // mov byte ptr [esp + 0x30], 1
    M8((uint32_t)(esp + 0x30u)) = (uint8_t)(0x1u);
L_004cedf5:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cedfau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cedfa:  // push 0x5b5
    t0 = 0x5b5u; esp -= 4; M32(esp) = t0;
L_004cedff:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cee04:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cee09:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004cee0b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cee10:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cee15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cee15:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004cee19:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cee1b:  // mov byte ptr [esp + 0x2c], 0x1e
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1eu);
L_004cee20:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cee21:  // je 0x4cee2d
    if (f.zf) goto L_004cee2d;
L_004cee23:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cee24:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cee26:  // call 0x4a4250
    t0 = 0x004a4250u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cee2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cee2b:  // jmp 0x4cee2f
    goto L_004cee2f;
L_004cee2d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cee2f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cee30:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cee32:  // mov byte ptr [esp + 0x2c], 1
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1u);
L_004cee37:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cee3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cee3c:  // push 0x5b6
    t0 = 0x5b6u; esp -= 4; M32(esp) = t0;
L_004cee41:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004cee46:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004cee4b:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004cee4d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cee52:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cee57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cee57:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cee59:  // je 0x4cee85
    if (f.zf) goto L_004cee85;
L_004cee5b:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004cee62:  // mov dword ptr [eax + 8], 0x6f9da
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x6f9dau);
L_004cee69:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004cee6c:  // mov dword ptr [eax + 0x10], 1
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(0x1u);
L_004cee73:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004cee7a:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004cee7d:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004cee83:  // jmp 0x4cee87
    goto L_004cee87;
L_004cee85:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cee87:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cee88:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cee8a:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cee8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cee8f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cee90:  // lea ecx, [ebp + 0x14]
    ecx = (uint32_t)((uint32_t)(ebp + 0x14u));
L_004cee93:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cee98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cee98:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004cee9c:  // mov dword ptr [ebp + 0x40], ebx
    M32((uint32_t)(ebp + 0x40u)) = (uint32_t)(ebx);
L_004cee9f:  // mov dword ptr [ebp + 0x44], ebx
    M32((uint32_t)(ebp + 0x44u)) = (uint32_t)(ebx);
L_004ceea2:  // mov dword ptr [0x82b490], ebx
    M32((uint32_t)(0x82b490u)) = (uint32_t)(ebx);
L_004ceea8:  // mov dword ptr [ebp + 0x38], ebx
    M32((uint32_t)(ebp + 0x38u)) = (uint32_t)(ebx);
L_004ceeab:  // mov dword ptr [ebp + 8], ebx
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(ebx);
L_004ceeae:  // mov dword ptr [ebp + 0x3c], ebx
    M32((uint32_t)(ebp + 0x3cu)) = (uint32_t)(ebx);
L_004ceeb1:  // mov dword ptr [ebp + 0x48], ebx
    M32((uint32_t)(ebp + 0x48u)) = (uint32_t)(ebx);
L_004ceeb4:  // mov dword ptr [ebp + 0x34], ebx
    M32((uint32_t)(ebp + 0x34u)) = (uint32_t)(ebx);
L_004ceeb7:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004ceeb9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ceeba:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ceebb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ceebc:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004ceec3:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004ceec6:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004cde60, 004cde60)
