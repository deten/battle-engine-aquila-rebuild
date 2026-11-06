// lifted from 004f27f0 (FUN_004f27f0, 464 bytes, 137 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f27f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f27f0;
L_004f27f0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004f27f6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004f27f8:  // push 0x5d513c
    t0 = 0x5d513cu; esp -= 4; M32(esp) = t0;
L_004f27fd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f27fe:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004f2805:  // sub esp, 0x204
    t0 = lsub<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_004f280b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f280c:  // mov ebx, dword ptr [esp + 0x218]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x218u)));
L_004f2813:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f2814:  // mov ebp, dword ptr [esp + 0x220]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x220u)));
L_004f281b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f281c:  // mov esi, dword ptr [0x83d9b0]
    esi = (uint32_t)(M32((uint32_t)(0x83d9b0u)));
L_004f2822:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f2823:  // mov edi, dword ptr [esp + 0x230]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x230u)));
L_004f282a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f282c:  // je 0x4f2895
    if (f.zf) goto L_004f2895;
L_004f282e:  // lea eax, [esi + 8]
    eax = (uint32_t)((uint32_t)(esi + 0x8u));
L_004f2831:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f2832:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f2833:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f2838u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f2838:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f283b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f283d:  // jne 0x4f288b
    if (!f.zf) goto L_004f288b;
L_004f283f:  // cmp ebp, dword ptr [esi + 0xa8]
    t0 = lsub<32>(ebp, M32((uint32_t)(esi + 0xa8u)), f);
L_004f2845:  // je 0x4f284b
    if (f.zf) goto L_004f284b;
L_004f2847:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f2849:  // jne 0x4f288b
    if (!f.zf) goto L_004f288b;
L_004f284b:  // mov eax, dword ptr [esi + 0x148]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x148u)));
L_004f2851:  // cmp edi, -1
    t0 = lsub<32>(edi, 0xffffffffu, f);
L_004f2854:  // jne 0x4f2861
    if (!f.zf) goto L_004f2861;
L_004f2856:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004f2859:  // je 0x4f2958
    if (f.zf) goto L_004f2958;
L_004f285f:  // jmp 0x4f2869
    goto L_004f2869;
L_004f2861:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004f2863:  // je 0x4f2958
    if (f.zf) goto L_004f2958;
L_004f2869:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f286a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f286b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f286c:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004f2870:  // push 0x632f38
    t0 = 0x632f38u; esp -= 4; M32(esp) = t0;
L_004f2875:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f2876:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f287bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f287b:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004f287e:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004f2882:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f2883:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f2888u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f2888:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f288b:  // mov esi, dword ptr [esi + 0xa0]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004f2891:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004f2893:  // jne 0x4f282e
    if (!f.zf) goto L_004f282e;
L_004f2895:  // mov al, byte ptr [0x662f3c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x662f3cu))) & 0xffu);
L_004f289a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004f289c:  // jne 0x4f28b4
    if (!f.zf) goto L_004f28b4;
L_004f289e:  // mov eax, dword ptr [0x662dd4]
    eax = (uint32_t)(M32((uint32_t)(0x662dd4u)));
L_004f28a3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f28a5:  // jne 0x4f28b4
    if (!f.zf) goto L_004f28b4;
L_004f28a7:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004f28a9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f28aa:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004f28af:  // call 0x42c750
    t0 = 0x0042c750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f28b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f28b4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f28b5:  // lea eax, [esp + 0x118]
    eax = (uint32_t)((uint32_t)(esp + 0x118u));
L_004f28bc:  // push 0x632f10
    t0 = 0x632f10u; esp -= 4; M32(esp) = t0;
L_004f28c1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f28c2:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f28c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f28c7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f28ca:  // lea ecx, [esp + 0x114]
    ecx = (uint32_t)((uint32_t)(esp + 0x114u));
L_004f28d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f28d2:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f28d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f28d7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f28da:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f28df:  // push 0x98
    t0 = 0x98u; esp -= 4; M32(esp) = t0;
L_004f28e4:  // push 0x632ef0
    t0 = 0x632ef0u; esp -= 4; M32(esp) = t0;
L_004f28e9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004f28eb:  // push 0x158
    t0 = 0x158u; esp -= 4; M32(esp) = t0;
L_004f28f0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f28f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f28f5:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004f28f9:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004f28fb:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004f28fd:  // mov dword ptr [esp + 0x21c], esi
    M32((uint32_t)(esp + 0x21cu)) = (uint32_t)(esi);
L_004f2904:  // je 0x4f290f
    if (f.zf) goto L_004f290f;
L_004f2906:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004f2908:  // call 0x556cc0
    t0 = 0x00556cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f290du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f290d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004f290f:  // mov eax, dword ptr [esp + 0x238]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x238u)));
L_004f2916:  // mov ecx, dword ptr [esp + 0x22c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x22cu)));
L_004f291d:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f291f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f2920:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f2921:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f2922:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f2923:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f2924:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f2926:  // mov dword ptr [esp + 0x230], 0xffffffff
    M32((uint32_t)(esp + 0x230u)) = (uint32_t)(0xffffffffu);
L_004f2931:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f2934u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f2934:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f2936:  // je 0x4f2969
    if (f.zf) goto L_004f2969;
L_004f2938:  // mov eax, dword ptr [0x83d9b8]
    eax = (uint32_t)(M32((uint32_t)(0x83d9b8u)));
L_004f293d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f293f:  // je 0x4f2954
    if (f.zf) goto L_004f2954;
L_004f2941:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f2942:  // push 0x632ec0
    t0 = 0x632ec0u; esp -= 4; M32(esp) = t0;
L_004f2947:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004f294c:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f2951u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f2951:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f2954:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004f2956:  // jmp 0x4f29a7
    goto L_004f29a7;
L_004f2958:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004f295e:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f295f:  // mov dword ptr [esi + 0xa4], eax
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(eax);
L_004f2965:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004f2967:  // jmp 0x4f29a7
    goto L_004f29a7;
L_004f2969:  // mov ecx, dword ptr [esi + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004f296f:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004f2970:  // mov dword ptr [esi + 0xa4], ecx
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(ecx);
L_004f2976:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f2978:  // call 0x556f50
    t0 = 0x00556f50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f297du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f297d:  // mov eax, dword ptr [esp + 0x234]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x234u)));
L_004f2984:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f2986:  // je 0x4f29a5
    if (f.zf) goto L_004f29a5;
L_004f2988:  // mov eax, dword ptr [0x83d9b4]
    eax = (uint32_t)(M32((uint32_t)(0x83d9b4u)));
L_004f298d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f298f:  // je 0x4f29a7
    if (f.zf) goto L_004f29a7;
L_004f2991:  // mov ecx, dword ptr [eax + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xa4u)));
L_004f2997:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004f2998:  // mov dword ptr [eax + 0xa4], ecx
    M32((uint32_t)(eax + 0xa4u)) = (uint32_t)(ecx);
L_004f299e:  // mov eax, dword ptr [0x83d9b4]
    eax = (uint32_t)(M32((uint32_t)(0x83d9b4u)));
L_004f29a3:  // jmp 0x4f29a7
    goto L_004f29a7;
L_004f29a5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004f29a7:  // mov ecx, dword ptr [esp + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x214u)));
L_004f29ae:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f29af:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f29b0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004f29b1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f29b2:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004f29b9:  // add esp, 0x210
    t0 = ladd<32>(esp, 0x210u, f);
    esp = (uint32_t)(t0);
L_004f29bf:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004f27f0, 004f27f0)
