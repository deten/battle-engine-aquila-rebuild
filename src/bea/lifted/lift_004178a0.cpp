// lifted from 004178a0 (vslot66, 254 bytes, 73 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004178a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004178a0;
L_004178a0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004178a1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004178a3:  // call 0x4fa800
    t0 = 0x004fa800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004178a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004178a8:  // mov eax, dword ptr [esi + 0x254]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x254u)));
L_004178ae:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004178b0:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004178b3:  // jne 0x41792e
    if (!f.zf) goto L_0041792e;
L_004178b5:  // call 0x4fd7a0
    t0 = 0x004fd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004178bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004178ba:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004178bc:  // jne 0x41791a
    if (!f.zf) goto L_0041791a;
L_004178be:  // fld dword ptr [esi + 0x25c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x25cu)));
L_004178c4:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004178ca:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004178cc:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004178cf:  // je 0x417941
    if (f.zf) goto L_00417941;
L_004178d1:  // cmp dword ptr [esi + 0x254], 2
    t0 = lsub<32>(M32((uint32_t)(esi + 0x254u)), 0x2u, f);
L_004178d8:  // jne 0x417941
    if (!f.zf) goto L_00417941;
L_004178da:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004178dd:  // push 0x623b80
    t0 = 0x623b80u; esp -= 4; M32(esp) = t0;
L_004178e2:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004178e4:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004178e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004178e7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004178e9:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004178eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004178ee:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004178f1:  // jne 0x4178ff
    if (!f.zf) goto L_004178ff;
L_004178f3:  // mov dword ptr [esi + 0x254], 3
    M32((uint32_t)(esi + 0x254u)) = (uint32_t)(0x3u);
L_004178fd:  // jmp 0x417941
    goto L_00417941;
L_004178ff:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00417901:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417903:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00417905:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00417906:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417908:  // mov dword ptr [esi + 0x254], 1
    M32((uint32_t)(esi + 0x254u)) = (uint32_t)(0x1u);
L_00417912:  // call dword ptr [edx + 0xf0]
    t0 = M32((uint32_t)(edx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417918u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417918:  // jmp 0x417941
    goto L_00417941;
L_0041791a:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00417920:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_00417926:  // fstp dword ptr [esi + 0x25c]
    F32((uint32_t)(esi + 0x25cu)) = lf32(ST(0));
    lpop(x);
L_0041792c:  // jmp 0x417941
    goto L_00417941;
L_0041792e:  // call 0x4fd7a0
    t0 = 0x004fd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417933u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417933:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00417935:  // je 0x417941
    if (f.zf) goto L_00417941;
L_00417937:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00417939:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041793b:  // call dword ptr [eax + 0x1cc]
    t0 = M32((uint32_t)(eax + 0x1ccu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417941u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417941:  // mov eax, dword ptr [esi + 0x260]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x260u)));
L_00417947:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00417949:  // je 0x41799c
    if (f.zf) goto L_0041799c;
L_0041794b:  // cmp dword ptr [esi + 0x264], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x264u)), 0x1u, f);
L_00417952:  // jne 0x41799c
    if (!f.zf) goto L_0041799c;
L_00417954:  // fld dword ptr [esi + 0x268]
    lpush(x, (long double)F32((uint32_t)(esi + 0x268u)));
L_0041795a:  // fadd dword ptr [0x5d85d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d4u)));
L_00417960:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00417966:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00417968:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0041796b:  // je 0x41799c
    if (f.zf) goto L_0041799c;
L_0041796d:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00417970:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00417971:  // mov ebp, dword ptr [esi]
    ebp = (uint32_t)(M32((uint32_t)(esi)));
L_00417973:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417975:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00417977:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00417979:  // push 0x623b74
    t0 = 0x623b74u; esp -= 4; M32(esp) = t0;
L_0041797e:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417981u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417981:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00417983:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417988u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417988:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00417989:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041798b:  // call dword ptr [ebp + 0xf0]
    t0 = M32((uint32_t)(ebp + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417991u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417991:  // mov dword ptr [esi + 0x264], 2
    M32((uint32_t)(esi + 0x264u)) = (uint32_t)(0x2u);
L_0041799b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041799c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041799d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004178a0, 004178a0)
