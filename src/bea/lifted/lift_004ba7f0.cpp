// lifted from 004ba7f0 (vslot117, 405 bytes, 120 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ba7f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ba7f0;
L_004ba7f0:  // sub esp, 0x3dc
    t0 = lsub<32>(esp, 0x3dcu, f);
    esp = (uint32_t)(t0);
L_004ba7f6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ba7f7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ba7f8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ba7f9:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004ba7fb:  // call 0x4fcfe0
    t0 = 0x004fcfe0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba800u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba800:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ba802:  // call 0x4fcfa0
    t0 = 0x004fcfa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba807u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba807:  // mov ecx, dword ptr [esi + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004ba80a:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ba80c:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004ba80e:  // je 0x4ba826
    if (f.zf) goto L_004ba826;
L_004ba810:  // call 0x5337e0
    t0 = 0x005337e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba815u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba815:  // mov ecx, dword ptr [esi + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004ba818:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004ba81a:  // je 0x4ba823
    if (f.zf) goto L_004ba823;
L_004ba81c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004ba81e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ba820:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba823u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba823:  // mov dword ptr [esi + 0x74], edi
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(edi);
L_004ba826:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004ba82c:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004ba82e:  // je 0x4ba94f
    if (f.zf) goto L_004ba94f;
L_004ba834:  // mov eax, dword ptr [eax + 0xe8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xe8u)));
L_004ba83a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ba83b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ba83c:  // call 0x50ff10
    t0 = 0x0050ff10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba841u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba841:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004ba844:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004ba848:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004ba84a:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba84fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba84f:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004ba855:  // mov dword ptr [esp + 0x14], 0x5d8c80
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x5d8c80u);
L_004ba85d:  // mov dword ptr [esp + 0x3d0], edi
    M32((uint32_t)(esp + 0x3d0u)) = (uint32_t)(edi);
L_004ba864:  // mov dword ptr [esp + 0x3d4], edi
    M32((uint32_t)(esp + 0x3d4u)) = (uint32_t)(edi);
L_004ba86b:  // mov dword ptr [esp + 0x3d8], edi
    M32((uint32_t)(esp + 0x3d8u)) = (uint32_t)(edi);
L_004ba872:  // mov dword ptr [esp + 0x3dc], edi
    M32((uint32_t)(esp + 0x3dcu)) = (uint32_t)(edi);
L_004ba879:  // mov dword ptr [esp + 0x3e0], edi
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(edi);
L_004ba880:  // mov dword ptr [esp + 0x3e8], edi
    M32((uint32_t)(esp + 0x3e8u)) = (uint32_t)(edi);
L_004ba887:  // mov dword ptr [esp + 0x3e4], edi
    M32((uint32_t)(esp + 0x3e4u)) = (uint32_t)(edi);
L_004ba88e:  // mov ebx, dword ptr [ecx + 0xe8]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0xe8u)));
L_004ba894:  // mov ecx, dword ptr [0x8553f8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004ba89a:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004ba89c:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004ba89e:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004ba8a0:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004ba8a3:  // je 0x4ba8a9
    if (f.zf) goto L_004ba8a9;
L_004ba8a5:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004ba8a7:  // jmp 0x4ba8ab
    goto L_004ba8ab;
L_004ba8a9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ba8ab:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004ba8ad:  // je 0x4ba8d1
    if (f.zf) goto L_004ba8d1;
L_004ba8af:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_004ba8b1:  // je 0x4ba8d3
    if (f.zf) goto L_004ba8d3;
L_004ba8b3:  // mov ecx, dword ptr [0x8553f8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004ba8b9:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004ba8ba:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004ba8bd:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004ba8c0:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004ba8c2:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004ba8c5:  // je 0x4ba8cb
    if (f.zf) goto L_004ba8cb;
L_004ba8c7:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004ba8c9:  // jmp 0x4ba8cd
    goto L_004ba8cd;
L_004ba8cb:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ba8cd:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004ba8cf:  // jne 0x4ba8af
    if (!f.zf) goto L_004ba8af;
L_004ba8d1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ba8d3:  // mov ecx, dword ptr [esi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_004ba8d9:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004ba8db:  // mov dword ptr [esp + 0xb4], ecx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(ecx);
L_004ba8e2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ba8e4:  // mov dword ptr [esp + 0x3d0], eax
    M32((uint32_t)(esp + 0x3d0u)) = (uint32_t)(eax);
L_004ba8eb:  // mov dword ptr [esp + 0x3d8], esi
    M32((uint32_t)(esp + 0x3d8u)) = (uint32_t)(esi);
L_004ba8f2:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba8f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba8f8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ba8fa:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ba8fb:  // je 0x4ba90a
    if (f.zf) goto L_004ba90a;
L_004ba8fd:  // mov dword ptr [esp + 0x3d0], 1
    M32((uint32_t)(esp + 0x3d0u)) = (uint32_t)(0x1u);
L_004ba908:  // jmp 0x4ba91f
    goto L_004ba91f;
L_004ba90a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ba90c:  // call 0x401fa0
    t0 = 0x00401fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba911u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba911:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ba913:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004ba915:  // and eax, 2
    t0 = llog<32>(eax & 0x2u, f);
    eax = (uint32_t)(t0);
L_004ba918:  // mov dword ptr [esp + 0x3d0], eax
    M32((uint32_t)(esp + 0x3d0u)) = (uint32_t)(eax);
L_004ba91f:  // cmp ebp, edi
    t0 = lsub<32>(ebp, edi, f);
L_004ba921:  // je 0x4ba94f
    if (f.zf) goto L_004ba94f;
L_004ba923:  // lea eax, [esi + 0x1c]
    eax = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004ba926:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004ba929:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004ba92d:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004ba930:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004ba934:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ba937:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004ba93b:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004ba93f:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004ba942:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ba943:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004ba947:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004ba94a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ba94c:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba94fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba94f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004ba951:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ba953:  // call dword ptr [edx + 0x1c0]
    t0 = M32((uint32_t)(edx + 0x1c0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba959u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba959:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004ba95f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ba960:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ba961:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004ba965:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ba966:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ba967:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ba968:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004ba96c:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_004ba971:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004ba976:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ba97bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ba97b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ba97c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ba97d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ba97e:  // add esp, 0x3dc
    t0 = ladd<32>(esp, 0x3dcu, f);
    esp = (uint32_t)(t0);
L_004ba984:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004ba7f0, 004ba7f0)
