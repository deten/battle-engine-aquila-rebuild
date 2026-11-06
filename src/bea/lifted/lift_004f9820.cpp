// lifted from 004f9820 (vslot0, 376 bytes, 122 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f9820(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f9820;
L_004f9820:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f9823:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9824:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f9828:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9829:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f982b:  // movsx eax, word ptr [ebx + 4]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebx + 0x4u))));
L_004f982f:  // add eax, 0xfffff05f
    t0 = ladd<32>(eax, 0xfffff05fu, f);
    eax = (uint32_t)(t0);
L_004f9834:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004f9837:  // ja 0x4f9988
    if ((!f.cf && !f.zf)) goto L_004f9988;
L_004f983d:  // jmp dword ptr [eax*4 + 0x4f9998]
    t0 = M32((uint32_t)(eax * 4u + 0x4f9998u));
    switch (t0) {
    case 0x004f9844u: goto L_004f9844;
    case 0x004f9854u: goto L_004f9854;
    case 0x004f98a8u: goto L_004f98a8;
    case 0x004f9972u: goto L_004f9972;
    case 0x004f9988u: goto L_004f9988;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004f9844:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9845:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9847:  // call 0x4fb280
    t0 = 0x004fb280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f984cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f984c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f984d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f984e:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f9851:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f9854:  // mov eax, dword ptr [esi + 0x218]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x218u)));
L_004f985a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f985c:  // jle 0x4f9896
    if ((f.zf || f.sf != f.of)) goto L_004f9896;
L_004f985e:  // mov ecx, dword ptr [esi + 0x21c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x21cu)));
L_004f9864:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9865:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004f9867:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9869:  // mov dword ptr [esi + 0x218], eax
    M32((uint32_t)(esi + 0x218u)) = (uint32_t)(eax);
L_004f986f:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004f9873:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9875:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f9876:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9877:  // push 0xfa5
    t0 = 0xfa5u; esp -= 4; M32(esp) = t0;
L_004f987c:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004f9881:  // mov dword ptr [esp + 0x34], 0xbf800000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0xbf800000u);
L_004f9889:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f988eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f988e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f988f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f9890:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f9893:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f9896:  // mov dword ptr [esi + 0x218], 0
    M32((uint32_t)(esi + 0x218u)) = (uint32_t)(0x0u);
L_004f98a0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f98a1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f98a2:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f98a5:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f98a8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f98a9:  // mov dword ptr [esi + 0x110], 0
    M32((uint32_t)(esi + 0x110u)) = (uint32_t)(0x0u);
L_004f98b3:  // mov edi, 0x2c4
    edi = (uint32_t)(0x2c4u);
L_004f98b8:  // mov eax, dword ptr [edi + 0x8a9a78]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8a9a78u)));
L_004f98be:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f98c0:  // je 0x4f9913
    if (f.zf) goto L_004f9913;
L_004f98c2:  // mov ecx, dword ptr [edi + 0x8a9a98]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8a9a98u)));
L_004f98c8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004f98ca:  // je 0x4f9913
    if (f.zf) goto L_004f9913;
L_004f98cc:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004f98ce:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_004f98d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f98d3:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f98d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f98d5:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004f98d8:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004f98da:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004f98dd:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004f98e0:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004f98e3:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004f98e6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004f98e8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004f98ea:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004f98ec:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004f98ee:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f98f0:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004f98f2:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004f98f4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004f98f6:  // fcomp dword ptr [0x5dfb70]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dfb70u)));
    lpop(x);
L_004f98fc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f98fe:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f9900:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f9902:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f9905:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f9907:  // je 0x4f9913
    if (f.zf) goto L_004f9913;
L_004f9909:  // mov dword ptr [esi + 0x110], 1
    M32((uint32_t)(esi + 0x110u)) = (uint32_t)(0x1u);
L_004f9913:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_004f9916:  // cmp edi, 0x2cc
    t0 = lsub<32>(edi, 0x2ccu, f);
L_004f991c:  // jl 0x4f98b8
    if ((f.sf != f.of)) goto L_004f98b8;
L_004f991e:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004f9924:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9929u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9929:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004f992e:  // jns 0x4f9937
    if (!f.sf) goto L_004f9937;
L_004f9930:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f9931:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004f9936:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f9937:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004f993b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f993c:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004f9940:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9942:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f9944:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f9945:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004f9949:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004f994f:  // push 0xfa3
    t0 = 0xfa3u; esp -= 4; M32(esp) = t0;
L_004f9954:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f9955:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004f995a:  // fadd dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004f9960:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004f9964:  // call 0x44b2d0
    t0 = 0x0044b2d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9969u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9969:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f996a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f996b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f996c:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f996f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f9972:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f9974:  // call 0x4fd230
    t0 = 0x004fd230u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9979u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9979:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f997b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f997d:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9980u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9980:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f9981:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f9982:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f9985:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004f9988:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f9989:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f998b:  // call 0x4019e0
    t0 = 0x004019e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f9990u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f9990:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f9991:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f9992:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f9995:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f9820, 004f9820)
