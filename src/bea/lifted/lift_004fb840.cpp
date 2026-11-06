// lifted from 004fb840 (FUN_004fb840, 1099 bytes, 317 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fb840(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fb840;
L_004fb840:  // sub esp, 0x54
    t0 = lsub<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_004fb843:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fb844:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fb845:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004fb847:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fb848:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fb849:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004fb84d:  // lea eax, [ebp + 0x17c]
    eax = (uint32_t)((uint32_t)(ebp + 0x17cu));
L_004fb853:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004fb857:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb85cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb85c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb85e:  // je 0x4fb87c
    if (f.zf) goto L_004fb87c;
L_004fb860:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004fb862:  // call 0x50a290
    t0 = 0x0050a290u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb867u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb867:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb869:  // jne 0x4fbc81
    if (!f.zf) goto L_004fbc81;
L_004fb86f:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004fb873:  // call 0x409780
    t0 = 0x00409780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb878u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb878:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb87a:  // jne 0x4fb860
    if (!f.zf) goto L_004fb860;
L_004fb87c:  // mov esi, dword ptr [esp + 0x68]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004fb880:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fb882:  // je 0x4fbc81
    if (f.zf) goto L_004fbc81;
L_004fb888:  // lea ecx, [ebp + 0x144]
    ecx = (uint32_t)((uint32_t)(ebp + 0x144u));
L_004fb88e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb890:  // mov dword ptr [ebp + 0x140], 0
    M32((uint32_t)(ebp + 0x140u)) = (uint32_t)(0x0u);
L_004fb89a:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb89fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb89f:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004fb8a2:  // fsub dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_004fb8a5:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004fb8a8:  // add esi, 0x1c
    t0 = ladd<32>(esi, 0x1cu, f);
    esi = (uint32_t)(t0);
L_004fb8ab:  // lea ebx, [ebp + 0x18c]
    ebx = (uint32_t)((uint32_t)(ebp + 0x18cu));
L_004fb8b1:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004fb8b4:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004fb8b7:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004fb8ba:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004fb8be:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fb8c0:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_004fb8c2:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fb8c4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004fb8c6:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004fb8ca:  // mov dword ptr [esp + 0x30], ebx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebx);
L_004fb8ce:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_004fb8d0:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004fb8d4:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004fb8d8:  // mov dword ptr [esp + 0x18], 0xbf800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0xbf800000u);
L_004fb8e0:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_004fb8e2:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fb8e4:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004fb8e6:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fb8e8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fb8ea:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004fb8ee:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb8f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb8f3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004fb8f5:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004fb8f7:  // je 0x4fba3f
    if (f.zf) goto L_004fba3f;
L_004fb8fd:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fb900:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb902:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004fb904:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb90au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb90a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb90c:  // je 0x4fb91a
    if (f.zf) goto L_004fb91a;
L_004fb90e:  // mov ecx, dword ptr [edi + 0x3d0]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3d0u)));
L_004fb914:  // test byte ptr [ecx + 0x14], 2
    t0 = llog<8>(M8((uint32_t)(ecx + 0x14u)) & 0x2u, f);
L_004fb918:  // jne 0x4fb957
    if (!f.zf) goto L_004fb957;
L_004fb91a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb91c:  // call 0x401fa0
    t0 = 0x00401fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb921u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb921:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb923:  // je 0x4fb931
    if (f.zf) goto L_004fb931;
L_004fb925:  // mov edx, dword ptr [edi + 0x3d0]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x3d0u)));
L_004fb92b:  // test byte ptr [edx + 0x14], 1
    t0 = llog<8>(M8((uint32_t)(edx + 0x14u)) & 0x1u, f);
L_004fb92f:  // jne 0x4fb957
    if (!f.zf) goto L_004fb957;
L_004fb931:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fb934:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb936:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb93cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb93c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb93e:  // jne 0x4fb95c
    if (!f.zf) goto L_004fb95c;
L_004fb940:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb942:  // call 0x401fa0
    t0 = 0x00401fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb947u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb947:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb949:  // jne 0x4fb95c
    if (!f.zf) goto L_004fb95c;
L_004fb94b:  // mov ecx, dword ptr [edi + 0x3d0]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3d0u)));
L_004fb951:  // test byte ptr [ecx + 0x14], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x14u)) & 0x4u, f);
L_004fb955:  // je 0x4fb95c
    if (f.zf) goto L_004fb95c;
L_004fb957:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004fb95c:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004fb960:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004fb962:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004fb963:  // call 0x4e4480
    t0 = 0x004e4480u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb968u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb968:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb96a:  // je 0x4fba20
    if (f.zf) goto L_004fba20;
L_004fb970:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fb972:  // je 0x4fba20
    if (f.zf) goto L_004fba20;
L_004fb978:  // mov ecx, dword ptr [edi + 0x3d0]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x3d0u)));
L_004fb97e:  // fld dword ptr [ecx + 0x2c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x2cu)));
L_004fb981:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004fb985:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fb987:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fb98a:  // je 0x4fb9a4
    if (f.zf) goto L_004fb9a4;
L_004fb98c:  // fld dword ptr [ecx + 0x30]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x30u)));
L_004fb98f:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004fb993:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fb995:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fb998:  // jne 0x4fb9a4
    if (!f.zf) goto L_004fb9a4;
L_004fb99a:  // mov dword ptr [esp + 0x10], 0x49742400
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x49742400u);
L_004fb9a2:  // jmp 0x4fb9af
    goto L_004fb9af;
L_004fb9a4:  // fld dword ptr [ecx + 0x30]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x30u)));
L_004fb9a7:  // fsubr dword ptr [esp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x14u))) - (ST(0));
L_004fb9ab:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004fb9af:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004fb9b1:  // call 0x4e43d0
    t0 = 0x004e43d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb9b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb9b6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb9b8:  // je 0x4fb9fd
    if (f.zf) goto L_004fb9fd;
L_004fb9ba:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004fb9be:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_004fb9c2:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb9c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb9c7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb9c9:  // je 0x4fb9ef
    if (f.zf) goto L_004fb9ef;
L_004fb9cb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004fb9cd:  // call 0x4e4420
    t0 = 0x004e4420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb9d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb9d2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb9d4:  // jne 0x4fb9fd
    if (!f.zf) goto L_004fb9fd;
L_004fb9d6:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004fb9da:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004fb9dd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb9df:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004fb9e3:  // je 0x4fb9e9
    if (f.zf) goto L_004fb9e9;
L_004fb9e5:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004fb9e7:  // jmp 0x4fb9eb
    goto L_004fb9eb;
L_004fb9e9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fb9eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb9ed:  // jne 0x4fb9cb
    if (!f.zf) goto L_004fb9cb;
L_004fb9ef:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fb9f3:  // fadd dword ptr [0x5db290]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db290u)));
L_004fb9f9:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004fb9fd:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fba01:  // fcomp dword ptr [esp + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x18u)));
    lpop(x);
L_004fba05:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fba07:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fba0a:  // jne 0x4fba20
    if (!f.zf) goto L_004fba20;
L_004fba0c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fba0d:  // lea ecx, [ebp + 0x144]
    ecx = (uint32_t)((uint32_t)(ebp + 0x144u));
L_004fba13:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fba18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fba18:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fba1c:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004fba20:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004fba24:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004fba27:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fba29:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004fba2d:  // je 0x4fba33
    if (f.zf) goto L_004fba33;
L_004fba2f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004fba31:  // jmp 0x4fba35
    goto L_004fba35;
L_004fba33:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fba35:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fba37:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004fba39:  // jne 0x4fb8fd
    if (!f.zf) goto L_004fb8fd;
L_004fba3f:  // mov edi, dword ptr [ebp + 0x17c]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x17cu)));
L_004fba45:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004fba47:  // je 0x4fba4d
    if (f.zf) goto L_004fba4d;
L_004fba49:  // mov esi, dword ptr [edi]
    esi = (uint32_t)(M32((uint32_t)(edi)));
L_004fba4b:  // jmp 0x4fba4f
    goto L_004fba4f;
L_004fba4d:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004fba4f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fba51:  // je 0x4fbc81
    if (f.zf) goto L_004fbc81;
L_004fba57:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004fba5b:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004fba5f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fba61:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fba62:  // call 0x50a0b0
    t0 = 0x0050a0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fba67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fba67:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fba69:  // je 0x4fbc6c
    if (f.zf) goto L_004fbc6c;
L_004fba6f:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004fba73:  // lea edx, [ecx + 0x1c]
    edx = (uint32_t)((uint32_t)(ecx + 0x1cu));
L_004fba76:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004fba7b:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fba80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fba80:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004fba86:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004fba88:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fba8a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fba8d:  // je 0x4fba97
    if (f.zf) goto L_004fba97;
L_004fba8f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fba91:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004fba97:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004fba9b:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004fbaa1:  // fsub dword ptr [edx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edx + 0x24u)));
L_004fbaa4:  // fld dword ptr [ecx + 0x6c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x6cu)));
L_004fbaa7:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fbaa9:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004fbaab:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbaad:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fbab0:  // jne 0x4fbc6a
    if (!f.zf) goto L_004fbc6a;
L_004fbab6:  // fld dword ptr [ecx + 0x70]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x70u)));
L_004fbab9:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004fbabb:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004fbabd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbabf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fbac2:  // je 0x4fbc6c
    if (f.zf) goto L_004fbc6c;
L_004fbac8:  // mov eax, dword ptr [edx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x34u)));
L_004fbacb:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004fbad3:  // test eax, 0x80000
    t0 = llog<32>(eax & 0x80000u, f);
L_004fbad8:  // je 0x4fbaf2
    if (f.zf) goto L_004fbaf2;
L_004fbada:  // push 0x80000
    t0 = 0x80000u; esp -= 4; M32(esp) = t0;
L_004fbadf:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fbae1:  // call 0x50a0d0
    t0 = 0x0050a0d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbae6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbae6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbae8:  // je 0x4fbaf2
    if (f.zf) goto L_004fbaf2;
L_004fbaea:  // mov dword ptr [esp + 0x10], 0x49f42400
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x49f42400u);
L_004fbaf2:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fbaf5:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_004fbafd:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004fbb01:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004fbb03:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_004fbb0b:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004fbb0f:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004fbb11:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_004fbb19:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004fbb1d:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004fbb20:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fbb22:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004fbb25:  // mov dword ptr [edx + 0xc], ebx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ebx);
L_004fbb28:  // call 0x5096a0
    t0 = 0x005096a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbb2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbb2d:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004fbb31:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbb33:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fbb36:  // jne 0x4fbb84
    if (!f.zf) goto L_004fbb84;
L_004fbb38:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fbb3b:  // mov dword ptr [esp + 0x44], 0
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x0u);
L_004fbb43:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004fbb47:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004fbb49:  // mov dword ptr [esp + 0x48], 0
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x0u);
L_004fbb51:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004fbb55:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004fbb57:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_004fbb5f:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004fbb63:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004fbb66:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004fbb6a:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004fbb6d:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004fbb70:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fbb72:  // call 0x5096a0
    t0 = 0x005096a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbb77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbb77:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_004fbb7b:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004fbb7f:  // jmp 0x4fbc21
    goto L_004fbc21;
L_004fbb84:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fbb87:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_004fbb8f:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004fbb93:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004fbb95:  // mov dword ptr [esp + 0x58], 0
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x0u);
L_004fbb9d:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004fbba1:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004fbba3:  // mov dword ptr [esp + 0x5c], 0
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(0x0u);
L_004fbbab:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004fbbaf:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004fbbb2:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004fbbb6:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004fbbb9:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004fbbbc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fbbbe:  // call 0x5099a0
    t0 = 0x005099a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbbc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbbc3:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004fbbc7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbbc9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fbbcc:  // je 0x4fbc17
    if (f.zf) goto L_004fbc17;
L_004fbbce:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fbbd1:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_004fbbd9:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004fbbdd:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004fbbdf:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_004fbbe7:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004fbbeb:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004fbbed:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_004fbbf5:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004fbbf9:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004fbbfc:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004fbc00:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004fbc03:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004fbc06:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fbc08:  // call 0x5099a0
    t0 = 0x005099a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbc0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbc0d:  // fsubr dword ptr [esp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x14u))) - (ST(0));
L_004fbc11:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004fbc15:  // jmp 0x4fbc21
    goto L_004fbc21;
L_004fbc17:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fbc1b:  // fadd dword ptr [0x5db290]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db290u)));
L_004fbc21:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004fbc25:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fbc27:  // call 0x509f70
    t0 = 0x00509f70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbc2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbc2c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fbc2e:  // je 0x4fbc3e
    if (f.zf) goto L_004fbc3e;
L_004fbc30:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fbc34:  // fadd dword ptr [0x5db290]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db290u)));
L_004fbc3a:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004fbc3e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fbc42:  // fcomp dword ptr [esp + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x18u)));
    lpop(x);
L_004fbc46:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fbc48:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fbc4b:  // jne 0x4fbc6c
    if (!f.zf) goto L_004fbc6c;
L_004fbc4d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fbc4f:  // lea ecx, [ebp + 0x144]
    ecx = (uint32_t)((uint32_t)(ebp + 0x144u));
L_004fbc55:  // mov dword ptr [ebp + 0x140], esi
    M32((uint32_t)(ebp + 0x140u)) = (uint32_t)(esi);
L_004fbc5b:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fbc60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fbc60:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fbc64:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004fbc68:  // jmp 0x4fbc6c
    goto L_004fbc6c;
L_004fbc6a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fbc6c:  // mov edi, dword ptr [edi + 4]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_004fbc6f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004fbc71:  // je 0x4fbc77
    if (f.zf) goto L_004fbc77;
L_004fbc73:  // mov esi, dword ptr [edi]
    esi = (uint32_t)(M32((uint32_t)(edi)));
L_004fbc75:  // jmp 0x4fbc79
    goto L_004fbc79;
L_004fbc77:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004fbc79:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fbc7b:  // jne 0x4fba5b
    if (!f.zf) goto L_004fba5b;
L_004fbc81:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fbc82:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fbc83:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fbc84:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fbc85:  // add esp, 0x54
    t0 = ladd<32>(esp, 0x54u, f);
    esp = (uint32_t)(t0);
L_004fbc88:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004fb840, 004fb840)
