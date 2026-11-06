// lifted from 004c07f0 (vslot7, 329 bytes, 114 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c07f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c07f0;
L_004c07f0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c07f1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c07f3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c07f4:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c07f8:  // lea eax, [esi + 0x5c]
    eax = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c07fb:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c07fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c07fe:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004c0800:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0805u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0805:  // mov ecx, dword ptr [esi + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c0808:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c0809:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_004c080b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c080d:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0812u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0812:  // mov edx, dword ptr [esi + 0x70]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_004c0815:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c0817:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c0818:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_004c081a:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c081fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c081f:  // mov eax, dword ptr [esi + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004c0822:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c0824:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c0825:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_004c0827:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c082cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c082c:  // mov ecx, dword ptr [esi + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c082f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c0830:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004c0832:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c0834:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0839u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0839:  // mov edx, dword ptr [esi + 0x88]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x88u)));
L_004c083f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c0841:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c0842:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_004c0844:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0849u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0849:  // mov eax, dword ptr [esi + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6cu)));
L_004c084c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c084e:  // je 0x4c085a
    if (f.zf) goto L_004c085a;
L_004c0850:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c0851:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_004c0853:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c0855:  // call 0x4f5d10
    t0 = 0x004f5d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c085au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c085a:  // mov eax, dword ptr [esi + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_004c085d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c085f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c0860:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_004c0862:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0867u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0867:  // mov ecx, dword ptr [esi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c086a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c086b:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004c086d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c086f:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0874u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0874:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c087a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c087c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c087d:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_004c087f:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0884u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0884:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004c088a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c088c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c088d:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004c088f:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0894:  // mov ecx, dword ptr [esi + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004c089a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c089b:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_004c089d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c089f:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c08a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c08a4:  // mov edx, dword ptr [esi + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004c08aa:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c08ac:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c08ad:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004c08af:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c08b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c08b4:  // mov eax, dword ptr [esi + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x94u)));
L_004c08ba:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c08bc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c08bd:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004c08bf:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c08c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c08c4:  // mov ecx, dword ptr [esi + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c08ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c08cb:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_004c08cd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c08cf:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c08d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c08d4:  // mov edx, dword ptr [esi + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004c08da:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c08dc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c08dd:  // push 0x11
    t0 = 0x11u; esp -= 4; M32(esp) = t0;
L_004c08df:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c08e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c08e4:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004c08ea:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c08ec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c08ed:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_004c08ef:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c08f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c08f4:  // mov ecx, dword ptr [esi + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xb0u)));
L_004c08fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c08fb:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004c08fd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c08ff:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0904u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0904:  // mov edx, dword ptr [esi + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004c090a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c090c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c090d:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004c090f:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0914u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0914:  // lea eax, [esi + 0x98]
    eax = (uint32_t)((uint32_t)(esi + 0x98u));
L_004c091a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c091c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c091d:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_004c091f:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0924u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0924:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004c092a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c092b:  // push 0x19
    t0 = 0x19u; esp -= 4; M32(esp) = t0;
L_004c092d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c092f:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c0934u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c0934:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c0935:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c0936:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c07f0, 004c07f0)
