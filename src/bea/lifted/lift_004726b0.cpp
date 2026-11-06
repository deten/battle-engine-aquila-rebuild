// lifted from 004726b0 (FUN_004726b0, 480 bytes, 145 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004726b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004726b0;
L_004726b0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004726b2:  // push 0x5d2a0a
    t0 = 0x5d2a0au; esp -= 4; M32(esp) = t0;
L_004726b7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004726bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004726be:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004726c5:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004726c8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004726c9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004726ca:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004726cb:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004726d0:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004726d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004726d5:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004726d9:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004726db:  // mov dword ptr [esp + 0x14], 0x5dbc10
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x5dbc10u);
L_004726e3:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_004726e7:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_004726eb:  // push 0x11be
    t0 = 0x11beu; esp -= 4; M32(esp) = t0;
L_004726f0:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_004726f5:  // push 0x27
    t0 = 0x27u; esp -= 4; M32(esp) = t0;
L_004726f7:  // push 0x178
    t0 = 0x178u; esp -= 4; M32(esp) = t0;
L_004726fc:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00472701:  // mov dword ptr [esp + 0x38], ebx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebx);
L_00472705:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047270au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047270a:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0047270e:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00472710:  // mov byte ptr [esp + 0x28], 1
    M8((uint32_t)(esp + 0x28u)) = (uint8_t)(0x1u);
L_00472715:  // je 0x47272a
    if (f.zf) goto L_0047272a;
L_00472717:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472719:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0047271d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047271e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047271f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00472721:  // call 0x5145f0
    t0 = 0x005145f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472726u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472726:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00472728:  // jmp 0x47272c
    goto L_0047272c;
L_0047272a:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0047272c:  // push 0x11bf
    t0 = 0x11bfu; esp -= 4; M32(esp) = t0;
L_00472731:  // push 0x62bba4
    t0 = 0x62bba4u; esp -= 4; M32(esp) = t0;
L_00472736:  // push 0x27
    t0 = 0x27u; esp -= 4; M32(esp) = t0;
L_00472738:  // push 0x178
    t0 = 0x178u; esp -= 4; M32(esp) = t0;
L_0047273d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00472742:  // mov byte ptr [esp + 0x38], bl
    M8((uint32_t)(esp + 0x38u)) = (uint8_t)((ebx & 0xffu));
L_00472746:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047274bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047274b:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0047274f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00472751:  // mov byte ptr [esp + 0x28], 2
    M8((uint32_t)(esp + 0x28u)) = (uint8_t)(0x2u);
L_00472756:  // je 0x47276c
    if (f.zf) goto L_0047276c;
L_00472758:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047275a:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0047275e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472760:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00472761:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00472763:  // call 0x5145f0
    t0 = 0x005145f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472768u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472768:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0047276a:  // jmp 0x47276e
    goto L_0047276e;
L_0047276c:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0047276e:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00472770:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00472771:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00472773:  // mov byte ptr [esp + 0x2c], bl
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)((ebx & 0xffu));
L_00472777:  // call dword ptr [eax + 8]
    t0 = M32((uint32_t)(eax + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047277au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047277a:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047277c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047277e:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472781u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472781:  // mov eax, dword ptr [0x662dcc]
    eax = (uint32_t)(M32((uint32_t)(0x662dccu)));
L_00472786:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00472788:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0047278a:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0047278e:  // je 0x47279d
    if (f.zf) goto L_0047279d;
L_00472790:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00472791:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472793:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_00472798:  // call 0x4bb8c0
    t0 = 0x004bb8c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047279du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047279d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004727a2:  // call 0x515880
    t0 = 0x00515880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727a7:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004727a9:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004727ab:  // call dword ptr [eax + 8]
    t0 = M32((uint32_t)(eax + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727ae:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004727b0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004727b2:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727b5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004727ba:  // call 0x5158c0
    t0 = 0x005158c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727bf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004727c1:  // je 0x47282e
    if (f.zf) goto L_0047282e;
L_004727c3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004727c4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004727c9:  // call 0x515910
    t0 = 0x00515910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727ce:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004727cf:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_004727d4:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727d9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004727da:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004727db:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004727e0:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727e5:  // push 0xff
    t0 = 0xffu; esp -= 4; M32(esp) = t0;
L_004727ea:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004727ef:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004727f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004727f4:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_004727f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004727f9:  // mov ecx, 0x897a88
    ecx = (uint32_t)(0x897a88u);
L_004727fe:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00472801:  // call 0x51a030
    t0 = 0x0051a030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472806u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472806:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00472808:  // jne 0x47280f
    if (!f.zf) goto L_0047280f;
L_0047280a:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_0047280f:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_00472814:  // call 0x4bb530
    t0 = 0x004bb530u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472819u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472819:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047281e:  // call 0x5158e0
    t0 = 0x005158e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472823u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472823:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00472824:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00472829:  // call 0x4d2580
    t0 = 0x004d2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047282eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047282e:  // or ebp, dword ptr [esp + 0x20]
    t0 = llog<32>(ebp | M32((uint32_t)(esp + 0x20u)), f);
    ebp = (uint32_t)(t0);
L_00472832:  // je 0x47279d
    if (f.zf) goto L_0047279d;
L_00472838:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0047283c:  // call 0x4bacb0
    t0 = 0x004bacb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472841u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472841:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_00472843:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00472844:  // je 0x47284e
    if (f.zf) goto L_0047284e;
L_00472846:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00472848:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047284a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0047284c:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047284eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047284e:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00472850:  // je 0x47285a
    if (f.zf) goto L_0047285a;
L_00472852:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00472854:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472856:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00472858:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047285au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047285a:  // mov eax, dword ptr [0x662dcc]
    eax = (uint32_t)(M32((uint32_t)(0x662dccu)));
L_0047285f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00472860:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00472861:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00472863:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00472864:  // je 0x472870
    if (f.zf) goto L_00472870;
L_00472866:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_0047286b:  // call 0x4bb490
    t0 = 0x004bb490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472870u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472870:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_00472874:  // mov dword ptr [esp + 0x1c], 0xffffffff
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xffffffffu);
L_0047287c:  // call 0x4bac40
    t0 = 0x004bac40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472881u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472881:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00472885:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0047288c:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0047288f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004726b0, 004726b0)
