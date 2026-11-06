// lifted from 004d0810 (FUN_004d0810, 1325 bytes, 377 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d0810(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d0810;
L_004d0810:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004d0816:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004d0818:  // push 0x5d4632
    t0 = 0x5d4632u; esp -= 4; M32(esp) = t0;
L_004d081d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d081e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004d0825:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d0826:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d0827:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d0828:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d082a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d082b:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d082f:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004d0832:  // mov dword ptr [esi + 0x38], eax
    M32((uint32_t)(esi + 0x38u)) = (uint32_t)(eax);
L_004d0835:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004d0838:  // cmp eax, 0x3fc4f9
    t0 = lsub<32>(eax, 0x3fc4f9u, f);
L_004d083d:  // jg 0x4d0bf4
    if ((!f.zf && f.sf == f.of)) goto L_004d0bf4;
L_004d0843:  // je 0x4d0b61
    if (f.zf) goto L_004d0b61;
L_004d0849:  // cmp eax, 0xcada9
    t0 = lsub<32>(eax, 0xcada9u, f);
L_004d084e:  // jg 0x4d0b19
    if ((!f.zf && f.sf == f.of)) goto L_004d0b19;
L_004d0854:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004d0856:  // cmp eax, 0xcada9
    t0 = lsub<32>(eax, 0xcada9u, f);
L_004d085b:  // je 0x4d08ec
    if (f.zf) goto L_004d08ec;
L_004d0861:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d0863:  // je 0x4d08b8
    if (f.zf) goto L_004d08b8;
L_004d0865:  // cmp eax, 0x6f9da
    t0 = lsub<32>(eax, 0x6f9dau, f);
L_004d086a:  // je 0x4d0877
    if (f.zf) goto L_004d0877;
L_004d086c:  // cmp eax, 0x7a211
    t0 = lsub<32>(eax, 0x7a211u, f);
L_004d0871:  // je 0x4d08ec
    if (f.zf) goto L_004d08ec;
L_004d0873:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0875:  // jmp 0x4d089b
    goto L_004d089b;
L_004d0877:  // cmp dword ptr [esi + 0x24], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x24u)), 0x1u, f);
L_004d087b:  // jne 0x4d0886
    if (!f.zf) goto L_004d0886;
L_004d087d:  // call 0x4d0de0
    t0 = 0x004d0de0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0882u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0882:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d0884:  // jne 0x4d08a3
    if (!f.zf) goto L_004d08a3;
L_004d0886:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d0887:  // lea ecx, [esi + 0x14]
    ecx = (uint32_t)((uint32_t)(esi + 0x14u));
L_004d088a:  // mov dword ptr [esi + 0x24], ebx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ebx);
L_004d088d:  // call 0x4e5c90
    t0 = 0x004e5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0892u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0892:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0894:  // call 0x4a4630
    t0 = 0x004a4630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0899u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0899:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004d089b:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d08a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d08a0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004d08a3:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d08a7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d08a8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d08a9:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d08aa:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004d08b1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d08b2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004d08b5:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d08b8:  // mov ecx, dword ptr [ecx + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004d08bb:  // lea eax, [ecx - 1]
    eax = (uint32_t)((uint32_t)(ecx + 0xffffffffu));
L_004d08be:  // cmp eax, 0x4e
    t0 = lsub<32>(eax, 0x4eu, f);
L_004d08c1:  // ja 0x4d0d36
    if ((!f.cf && !f.zf)) goto L_004d0d36;
L_004d08c7:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004d08c9:  // mov cl, byte ptr [eax + 0x4d0d54]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x4d0d54u))) & 0xffu);
L_004d08cf:  // jmp dword ptr [ecx*4 + 0x4d0d40]
    t0 = M32((uint32_t)(ecx * 4u + 0x4d0d40u));
    switch (t0) {
    case 0x004d08a3u: goto L_004d08a3;
    case 0x004d08d6u: goto L_004d08d6;
    case 0x004d08e1u: goto L_004d08e1;
    case 0x004d0c1eu: goto L_004d0c1e;
    case 0x004d0d36u: goto L_004d0d36;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004d08d6:  // mov edx, dword ptr [esi + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004d08d9:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_004d08dc:  // jmp 0x4d0c22
    goto L_004d0c22;
L_004d08e1:  // mov edx, dword ptr [esi + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004d08e4:  // add edx, 3
    t0 = ladd<32>(edx, 0x3u, f);
    edx = (uint32_t)(t0);
L_004d08e7:  // jmp 0x4d0c22
    goto L_004d0c22;
L_004d08ec:  // push 0x661
    t0 = 0x661u; esp -= 4; M32(esp) = t0;
L_004d08f1:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004d08f6:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004d08fb:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_004d08fd:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d0902:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0907u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0907:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d0909:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_004d090d:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004d090f:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_004d0913:  // je 0x4d096d
    if (f.zf) goto L_004d096d;
L_004d0915:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d0917:  // call 0x4d0e40
    t0 = 0x004d0e40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d091cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d091c:  // push 0xb000c000
    t0 = 0xb000c000u; esp -= 4; M32(esp) = t0;
L_004d0921:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0923:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_004d0928:  // push 0x43a00000
    t0 = 0x43a00000u; esp -= 4; M32(esp) = t0;
L_004d092d:  // push 0x77780
    t0 = 0x77780u; esp -= 4; M32(esp) = t0;
L_004d0932:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004d0937:  // mov byte ptr [esp + 0x2c], 1
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)(0x1u);
L_004d093c:  // lea ebp, [edi + 0xc]
    ebp = (uint32_t)((uint32_t)(edi + 0xcu));
L_004d093f:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0944u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0944:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d0945:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d0947:  // call 0x4a4e10
    t0 = 0x004a4e10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d094cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d094c:  // lea ecx, [edi + 0x3c]
    ecx = (uint32_t)((uint32_t)(edi + 0x3cu));
L_004d094f:  // mov byte ptr [esp + 0x18], 2
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x2u);
L_004d0954:  // call 0x505d00
    t0 = 0x00505d00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0959u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0959:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d095b:  // mov byte ptr [esp + 0x18], 3
    M8((uint32_t)(esp + 0x18u)) = (uint8_t)(0x3u);
L_004d0960:  // mov dword ptr [edi], 0x5de71c
    M32((uint32_t)(edi)) = (uint32_t)(0x5de71cu);
L_004d0966:  // call 0x4a4730
    t0 = 0x004a4730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d096bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d096b:  // jmp 0x4d096f
    goto L_004d096f;
L_004d096d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d096f:  // push 0x662
    t0 = 0x662u; esp -= 4; M32(esp) = t0;
L_004d0974:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004d0979:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004d097e:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004d0980:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d0985:  // mov dword ptr [esp + 0x28], 0xffffffff
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xffffffffu);
L_004d098d:  // mov dword ptr [esi + 8], edi
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edi);
L_004d0990:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0995u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0995:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d0997:  // je 0x4d09c5
    if (f.zf) goto L_004d09c5;
L_004d0999:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004d09a0:  // mov dword ptr [eax + 8], 0x378d6
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x378d6u);
L_004d09a7:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004d09aa:  // mov dword ptr [eax + 0x10], 1
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(0x1u);
L_004d09b1:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004d09b8:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004d09bb:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004d09c1:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004d09c3:  // jmp 0x4d09c7
    goto L_004d09c7;
L_004d09c5:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004d09c7:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d09ca:  // push 0x8f2
    t0 = 0x8f2u; esp -= 4; M32(esp) = t0;
L_004d09cf:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004d09d4:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004d09d9:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_004d09db:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d09e0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d09e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d09e5:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004d09e9:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d09eb:  // mov dword ptr [esp + 0x18], 4
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x4u);
L_004d09f3:  // je 0x4d0a05
    if (f.zf) goto L_004d0a05;
L_004d09f5:  // push 0x7d1
    t0 = 0x7d1u; esp -= 4; M32(esp) = t0;
L_004d09fa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d09fb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d09fc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d09fe:  // call 0x4d0db0
    t0 = 0x004d0db0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0a03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0a03:  // jmp 0x4d0a07
    goto L_004d0a07;
L_004d0a05:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d0a07:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d0a08:  // lea ecx, [edi + 0x3c]
    ecx = (uint32_t)((uint32_t)(edi + 0x3cu));
L_004d0a0b:  // mov dword ptr [esp + 0x1c], 0xffffffff
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xffffffffu);
L_004d0a13:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0a18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0a18:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d0a19:  // lea ecx, [edi + 0xc]
    ecx = (uint32_t)((uint32_t)(edi + 0xcu));
L_004d0a1c:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0a21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0a21:  // push 0x663
    t0 = 0x663u; esp -= 4; M32(esp) = t0;
L_004d0a26:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004d0a2b:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004d0a30:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004d0a32:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d0a37:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0a3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0a3c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d0a3e:  // je 0x4d0a6c
    if (f.zf) goto L_004d0a6c;
L_004d0a40:  // mov dword ptr [eax + 4], 3
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(0x3u);
L_004d0a47:  // mov dword ptr [eax + 8], 0x50cf2
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(0x50cf2u);
L_004d0a4e:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004d0a51:  // mov dword ptr [eax + 0x10], 1
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(0x1u);
L_004d0a58:  // mov dword ptr [eax + 0x14], 0xffd6d6d6
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(0xffd6d6d6u);
L_004d0a5f:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004d0a62:  // mov dword ptr [eax], 0x5db440
    M32((uint32_t)(eax)) = (uint32_t)(0x5db440u);
L_004d0a68:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004d0a6a:  // jmp 0x4d0a6e
    goto L_004d0a6e;
L_004d0a6c:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004d0a6e:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d0a71:  // push 0x8f2
    t0 = 0x8f2u; esp -= 4; M32(esp) = t0;
L_004d0a76:  // push 0x6314dc
    t0 = 0x6314dcu; esp -= 4; M32(esp) = t0;
L_004d0a7b:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004d0a80:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_004d0a82:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d0a87:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0a8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0a8c:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004d0a90:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004d0a92:  // mov dword ptr [esp + 0x18], 5
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x5u);
L_004d0a9a:  // je 0x4d0aac
    if (f.zf) goto L_004d0aac;
L_004d0a9c:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_004d0aa1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d0aa2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d0aa3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0aa5:  // call 0x4d0db0
    t0 = 0x004d0db0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0aaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0aaa:  // jmp 0x4d0aae
    goto L_004d0aae;
L_004d0aac:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d0aae:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d0aaf:  // lea ecx, [edi + 0x3c]
    ecx = (uint32_t)((uint32_t)(edi + 0x3cu));
L_004d0ab2:  // mov dword ptr [esp + 0x1c], 0xffffffff
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xffffffffu);
L_004d0aba:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0abfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0abf:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d0ac0:  // lea ecx, [edi + 0xc]
    ecx = (uint32_t)((uint32_t)(edi + 0xcu));
L_004d0ac3:  // call 0x4a4670
    t0 = 0x004a4670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0ac8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0ac8:  // mov ebp, dword ptr [esi + 8]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d0acb:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d0acd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0ace:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0ad3:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0ad8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0ad8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d0ada:  // je 0x4d0b05
    if (f.zf) goto L_004d0b05;
L_004d0adc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0add:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0ae2:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0ae7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0ae7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0ae9:  // call 0x42e4b0
    t0 = 0x0042e4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0aeeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0aee:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004d0af0:  // jne 0x4d0b05
    if (!f.zf) goto L_004d0b05;
L_004d0af2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d0af3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0af4:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0af9:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0afeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0afe:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0b00:  // call 0x42e610
    t0 = 0x0042e610u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0b05u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0b05:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004d0b06:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_004d0b09:  // jl 0x4d0acd
    if ((f.sf != f.of)) goto L_004d0acd;
L_004d0b0b:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d0b0e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0b10:  // mov byte ptr [edx + 8], 1
    M8((uint32_t)(edx + 0x8u)) = (uint8_t)(0x1u);
L_004d0b14:  // jmp 0x4d089b
    goto L_004d089b;
L_004d0b19:  // cmp eax, 0x148fe9
    t0 = lsub<32>(eax, 0x148fe9u, f);
L_004d0b1e:  // je 0x4d0b46
    if (f.zf) goto L_004d0b46;
L_004d0b20:  // cmp eax, 0x226f16
    t0 = lsub<32>(eax, 0x226f16u, f);
L_004d0b25:  // jne 0x4d0d36
    if (!f.zf) goto L_004d0d36;
L_004d0b2b:  // mov dword ptr [ecx + 8], 0x148fe9
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(0x148fe9u);
L_004d0b32:  // mov ecx, dword ptr [0x8a9d3c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d3cu)));
L_004d0b38:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0b3a:  // call 0x4d3020
    t0 = 0x004d3020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0b3fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0b3f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0b41:  // jmp 0x4d089b
    goto L_004d089b;
L_004d0b46:  // mov dword ptr [ecx + 8], 0x226f16
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(0x226f16u);
L_004d0b4d:  // mov ecx, dword ptr [0x8a9d3c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d3cu)));
L_004d0b53:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d0b55:  // call 0x4d3020
    t0 = 0x004d3020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0b5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0b5a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0b5c:  // jmp 0x4d089b
    goto L_004d089b;
L_004d0b61:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004d0b63:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004d0b68:  // mov dword ptr [esi + 0x10], ebx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(ebx);
L_004d0b6b:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0b70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0b70:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d0b73:  // fstp dword ptr [esi + 0x30]
    F32((uint32_t)(esi + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004d0b76:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004d0b78:  // je 0x4d0b84
    if (f.zf) goto L_004d0b84;
L_004d0b7a:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d0b7c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0b7e:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0b81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0b81:  // mov dword ptr [esi + 8], ebx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ebx);
L_004d0b84:  // mov ecx, dword ptr [esi + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x3cu)));
L_004d0b87:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004d0b89:  // je 0x4d0b95
    if (f.zf) goto L_004d0b95;
L_004d0b8b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d0b8d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0b8f:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0b92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0b92:  // mov dword ptr [esi + 0x3c], ebx
    M32((uint32_t)(esi + 0x3cu)) = (uint32_t)(ebx);
L_004d0b95:  // mov dword ptr [esi + 0x48], 1
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(0x1u);
L_004d0b9c:  // mov ebp, dword ptr [0x8a9d94]
    ebp = (uint32_t)(M32((uint32_t)(0x8a9d94u)));
L_004d0ba2:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d0ba4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0ba5:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0baa:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0bafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0baf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d0bb1:  // je 0x4d0bdc
    if (f.zf) goto L_004d0bdc;
L_004d0bb3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0bb4:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0bb9:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0bbeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0bbe:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0bc0:  // call 0x42e4b0
    t0 = 0x0042e4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0bc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0bc5:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004d0bc7:  // jne 0x4d0bdc
    if (!f.zf) goto L_004d0bdc;
L_004d0bc9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d0bca:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0bcb:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0bd0:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0bd5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0bd5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0bd7:  // call 0x42e610
    t0 = 0x0042e610u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0bdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0bdc:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004d0bdd:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_004d0be0:  // jl 0x4d0ba4
    if ((f.sf != f.of)) goto L_004d0ba4;
L_004d0be2:  // mov ecx, dword ptr [0x8a9d94]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d94u)));
L_004d0be8:  // call 0x48ff90
    t0 = 0x0048ff90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0bedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0bed:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0bef:  // jmp 0x4d089b
    goto L_004d089b;
L_004d0bf4:  // cmp eax, 0x939ef4
    t0 = lsub<32>(eax, 0x939ef4u, f);
L_004d0bf9:  // jg 0x4d0c94
    if ((!f.zf && f.sf == f.of)) goto L_004d0c94;
L_004d0bff:  // je 0x4d08a3
    if (f.zf) goto L_004d08a3;
L_004d0c05:  // cmp eax, 0x41d6e9
    t0 = lsub<32>(eax, 0x41d6e9u, f);
L_004d0c0a:  // je 0x4d0c83
    if (f.zf) goto L_004d0c83;
L_004d0c0c:  // cmp eax, 0x437a3e
    t0 = lsub<32>(eax, 0x437a3eu, f);
L_004d0c11:  // je 0x4d0c3e
    if (f.zf) goto L_004d0c3e;
L_004d0c13:  // cmp eax, 0x8251dc
    t0 = lsub<32>(eax, 0x8251dcu, f);
L_004d0c18:  // jne 0x4d0d36
    if (!f.zf) goto L_004d0d36;
L_004d0c1e:  // mov edx, dword ptr [esi + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004d0c21:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004d0c22:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004d0c24:  // lea ecx, [esi + 0x14]
    ecx = (uint32_t)((uint32_t)(esi + 0x14u));
L_004d0c27:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d0c28:  // mov dword ptr [esi + 0x24], edx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(edx);
L_004d0c2b:  // call 0x4e5c90
    t0 = 0x004e5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0c30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0c30:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0c32:  // call 0x4a4630
    t0 = 0x004a4630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0c37u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0c37:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0c39:  // jmp 0x4d089b
    goto L_004d089b;
L_004d0c3e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004d0c40:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004d0c45:  // mov dword ptr [esi + 0x10], ebx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(ebx);
L_004d0c48:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0c4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0c4d:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d0c50:  // fstp dword ptr [esi + 0x30]
    F32((uint32_t)(esi + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004d0c53:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004d0c55:  // je 0x4d0c61
    if (f.zf) goto L_004d0c61;
L_004d0c57:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d0c59:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0c5b:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0c5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0c5e:  // mov dword ptr [esi + 8], ebx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ebx);
L_004d0c61:  // mov ecx, dword ptr [esi + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x3cu)));
L_004d0c64:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004d0c66:  // je 0x4d0c72
    if (f.zf) goto L_004d0c72;
L_004d0c68:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d0c6a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0c6c:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0c6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0c6f:  // mov dword ptr [esi + 0x3c], ebx
    M32((uint32_t)(esi + 0x3cu)) = (uint32_t)(ebx);
L_004d0c72:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004d0c77:  // mov dword ptr [esi + 0x48], eax
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(eax);
L_004d0c7a:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_004d0c7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d0c7e:  // jmp 0x4d089b
    goto L_004d089b;
L_004d0c83:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004d0c87:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d0c89:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d0c8a:  // call 0x4d06e0
    t0 = 0x004d06e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0c8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0c8f:  // jmp 0x4d0899
    goto L_004d0899;
L_004d0c94:  // cmp eax, 0x9d5a3f
    t0 = lsub<32>(eax, 0x9d5a3fu, f);
L_004d0c99:  // je 0x4d08a3
    if (f.zf) goto L_004d08a3;
L_004d0c9f:  // cmp eax, 0x1f08cea
    t0 = lsub<32>(eax, 0x1f08ceau, f);
L_004d0ca4:  // jne 0x4d0d36
    if (!f.zf) goto L_004d0d36;
L_004d0caa:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004d0cac:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004d0cb1:  // mov dword ptr [esi + 0x10], ebx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(ebx);
L_004d0cb4:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0cb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0cb9:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d0cbc:  // fstp dword ptr [esi + 0x30]
    F32((uint32_t)(esi + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004d0cbf:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004d0cc1:  // je 0x4d0ccd
    if (f.zf) goto L_004d0ccd;
L_004d0cc3:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d0cc5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0cc7:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0ccau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0cca:  // mov dword ptr [esi + 8], ebx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ebx);
L_004d0ccd:  // mov ecx, dword ptr [esi + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x3cu)));
L_004d0cd0:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004d0cd2:  // je 0x4d0cde
    if (f.zf) goto L_004d0cde;
L_004d0cd4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d0cd6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0cd8:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0cdbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0cdb:  // mov dword ptr [esi + 0x3c], ebx
    M32((uint32_t)(esi + 0x3cu)) = (uint32_t)(ebx);
L_004d0cde:  // mov dword ptr [esi + 0x48], 1
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(0x1u);
L_004d0ce5:  // mov ebp, dword ptr [0x8a9d88]
    ebp = (uint32_t)(M32((uint32_t)(0x8a9d88u)));
L_004d0ceb:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d0ced:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0cee:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0cf3:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0cf8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0cf8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d0cfa:  // je 0x4d0d25
    if (f.zf) goto L_004d0d25;
L_004d0cfc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0cfd:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0d02:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0d07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0d07:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0d09:  // call 0x42e4b0
    t0 = 0x0042e4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0d0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0d0e:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004d0d10:  // jne 0x4d0d25
    if (!f.zf) goto L_004d0d25;
L_004d0d12:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d0d13:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d0d14:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d0d19:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0d1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0d1e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d0d20:  // call 0x42e610
    t0 = 0x0042e610u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0d25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0d25:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004d0d26:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_004d0d29:  // jl 0x4d0ced
    if ((f.sf != f.of)) goto L_004d0ced;
L_004d0d2b:  // mov ecx, dword ptr [0x8a9d88]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d88u)));
L_004d0d31:  // call 0x4b9ea0
    t0 = 0x004b9ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d0d36u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d0d36:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d0d38:  // jmp 0x4d089b
    goto L_004d089b;
}

LIFT_FUNCTION(0x004d0810, 004d0810)
