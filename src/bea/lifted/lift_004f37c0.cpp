// lifted from 004f37c0 (FUN_004f37c0, 369 bytes, 112 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f37c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f37c0;
L_004f37c0:  // sub esp, 0x68
    t0 = lsub<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_004f37c3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f37c4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f37c5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f37c6:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004f37c8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f37c9:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f37ce:  // mov eax, dword ptr [ebx + 8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004f37d1:  // mov esi, 0x83d9f0
    esi = (uint32_t)(0x83d9f0u);
L_004f37d6:  // lea edi, [esp + 0x48]
    edi = (uint32_t)((uint32_t)(esp + 0x48u));
L_004f37da:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f37dc:  // lea ecx, [ebx + 8]
    ecx = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004f37df:  // call dword ptr [eax + 0x54]
    t0 = M32((uint32_t)(eax + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f37e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f37e2:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004f37e4:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004f37e6:  // je 0x4f3890
    if (f.zf) goto L_004f3890;
L_004f37ec:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_004f37ef:  // mov edx, dword ptr [ebp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_004f37f2:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004f37f5:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004f37f9:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f37fe:  // lea esi, [esp + 0x78]
    esi = (uint32_t)((uint32_t)(esp + 0x78u));
L_004f3802:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004f3804:  // lea eax, [ebx + 0x1c]
    eax = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004f3807:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f3809:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f380c:  // mov dword ptr [esp + 0x54], edx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(edx);
L_004f3810:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004f3812:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004f3814:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f3816:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f3819:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004f381c:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f381f:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f3822:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f3825:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f3828:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004f382d:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3832u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3832:  // mov eax, dword ptr [0x89ce88]
    eax = (uint32_t)(M32((uint32_t)(0x89ce88u)));
L_004f3837:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f383b:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004f383f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f3840:  // fld dword ptr [ebp + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x18u)));
L_004f3843:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004f3846:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_004f384a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f384f:  // lea esi, [esp + 0x7c]
    esi = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004f3853:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004f3855:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004f3859:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f385b:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004f385f:  // lea edx, [esp + 0x5c]
    edx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004f3863:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f3864:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f3865:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_004f3869:  // push 0xff00ff00
    t0 = 0xff00ff00u; esp -= 4; M32(esp) = t0;
L_004f386e:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004f3873:  // mov dword ptr [esp + 0x58], 0
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x0u);
L_004f387b:  // mov dword ptr [esp + 0x5c], 0
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(0x0u);
L_004f3883:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_004f388b:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3890u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3890:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004f3893:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f3898:  // lea esi, [esp + 0x78]
    esi = (uint32_t)((uint32_t)(esp + 0x78u));
L_004f389c:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004f389e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f38a0:  // lea eax, [ebx + 0x1c]
    eax = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004f38a3:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f38a6:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004f38a8:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004f38aa:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f38ac:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f38af:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004f38b2:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f38b5:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f38b8:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f38bb:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f38be:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004f38c3:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f38c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f38c8:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004f38ca:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004f38cc:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f38cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f38cf:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004f38d1:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004f38d3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f38d5:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f38d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f38d8:  // mov ecx, dword ptr [0x89ce88]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce88u)));
L_004f38de:  // lea esi, [esp + 0x48]
    esi = (uint32_t)((uint32_t)(esp + 0x48u));
L_004f38e2:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_004f38e6:  // fst dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
L_004f38ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f38eb:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004f38f0:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004f38f4:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004f38f7:  // lea edx, [esp + 0x5c]
    edx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004f38fb:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004f38fd:  // lea eax, [esp + 0x6c]
    eax = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004f3901:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004f3903:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f3904:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f3905:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004f3907:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004f390c:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_004f3914:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_004f391c:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_004f3924:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3929u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3929:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f392a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f392b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004f392c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f392d:  // add esp, 0x68
    t0 = ladd<32>(esp, 0x68u, f);
    esp = (uint32_t)(t0);
L_004f3930:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f37c0, 004f37c0)
