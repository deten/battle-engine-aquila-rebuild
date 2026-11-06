// lifted from 00541650 (FUN_00541650, 285 bytes, 83 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00541650(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00541650;
L_00541650:  // sub esp, 0x84
    t0 = lsub<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_00541656:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00541657:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00541658:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0054165a:  // push 0x6507e0
    t0 = 0x6507e0u; esp -= 4; M32(esp) = t0;
L_0054165f:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00541664u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00541664:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00541667:  // mov ecx, 0x8a9810
    ecx = (uint32_t)(0x8a9810u);
L_0054166c:  // call 0x528d90
    t0 = 0x00528d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00541671u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00541671:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00541673:  // je 0x54169c
    if (f.zf) goto L_0054169c;
L_00541675:  // push 0x6507c4
    t0 = 0x6507c4u; esp -= 4; M32(esp) = t0;
L_0054167a:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054167fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054167f:  // mov esi, dword ptr [0x5d8154]
    esi = (uint32_t)(M32((uint32_t)(0x5d8154u)));
L_00541685:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00541688:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0054168a:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054168cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054168c:  // mov ecx, 0x8a9810
    ecx = (uint32_t)(0x8a9810u);
L_00541691:  // call 0x528d90
    t0 = 0x00528d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00541696u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00541696:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00541698:  // jne 0x541688
    if (!f.zf) goto L_00541688;
L_0054169a:  // jmp 0x5416a5
    goto L_005416a5;
L_0054169c:  // mov al, byte ptr [0x8a982c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x8a982cu))) & 0xffu);
L_005416a1:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005416a3:  // je 0x5416ac
    if (f.zf) goto L_005416ac;
L_005416a5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_005416a7:  // call 0x541430
    t0 = 0x00541430u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005416acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005416ac:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005416ad:  // mov ecx, 0x8a9810
    ecx = (uint32_t)(0x8a9810u);
L_005416b2:  // mov byte ptr [0x8a97d0], 0
    M8((uint32_t)(0x8a97d0u)) = (uint8_t)(0x0u);
L_005416b9:  // call 0x528da0
    t0 = 0x00528da0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005416beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005416be:  // lea esi, [ebp + 0xc]
    esi = (uint32_t)((uint32_t)(ebp + 0xcu));
L_005416c1:  // mov edi, 2
    edi = (uint32_t)(0x2u);
L_005416c6:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_005416c8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_005416ca:  // je 0x5416d8
    if (f.zf) goto L_005416d8;
L_005416cc:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_005416ce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005416d0:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005416d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005416d2:  // mov dword ptr [esi], 0
    M32((uint32_t)(esi)) = (uint32_t)(0x0u);
L_005416d8:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_005416db:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_005416dc:  // jne 0x5416c6
    if (!f.zf) goto L_005416c6;
L_005416de:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_005416e1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005416e2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005416e4:  // je 0x541746
    if (f.zf) goto L_00541746;
L_005416e6:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005416ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005416eb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005416ec:  // call dword ptr [0x5d8334]
    t0 = M32((uint32_t)(0x5d8334u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005416f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005416f2:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005416f6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005416f8:  // je 0x54173c
    if (f.zf) goto L_0054173c;
L_005416fa:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005416fe:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_00541706:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_0054170a:  // fild qword ptr [esp + 8]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x8u)));
L_0054170e:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_00541712:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_0054171a:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_00541720:  // fidiv dword ptr [esp + 8]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00541724:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00541728:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0054172c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0054172d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0054172e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054172f:  // push 0x650784
    t0 = 0x650784u; esp -= 4; M32(esp) = t0;
L_00541734:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00541739u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00541739:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0054173c:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0054173f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00541740:  // call dword ptr [0x5d8330]
    t0 = M32((uint32_t)(0x5d8330u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00541746u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00541746:  // mov ecx, 0x8a9810
    ecx = (uint32_t)(0x8a9810u);
L_0054174b:  // mov dword ptr [ebp + 8], 0
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(0x0u);
L_00541752:  // call 0x528dc0
    t0 = 0x00528dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00541757u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00541757:  // push 0x629e10
    t0 = 0x629e10u; esp -= 4; M32(esp) = t0;
L_0054175c:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00541761u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00541761:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00541764:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00541765:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00541766:  // add esp, 0x84
    t0 = ladd<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_0054176c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00541650, 00541650)
