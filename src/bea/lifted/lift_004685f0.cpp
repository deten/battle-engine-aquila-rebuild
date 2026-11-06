// lifted from 004685f0 (vslot6, 271 bytes, 72 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004685f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004685f0;
L_004685f0:  // sub esp, 0x44
    t0 = lsub<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_004685f3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004685f8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004685f9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004685fa:  // call 0x5158c0
    t0 = 0x005158c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004685ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004685ff:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00468601:  // je 0x4686f7
    if (f.zf) goto L_004686f7;
L_00468607:  // fld dword ptr [0x89cdd0]
    lpush(x, (long double)F32((uint32_t)(0x89cdd0u)));
L_0046860d:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_00468611:  // fmul dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00468617:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0046861b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046861c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0046861f:  // fld dword ptr [0x89cdd0]
    lpush(x, (long double)F32((uint32_t)(0x89cdd0u)));
L_00468625:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00468626:  // push 0x442f0000
    t0 = 0x442f0000u; esp -= 4; M32(esp) = t0;
L_0046862b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046862c:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00468631:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00468634:  // call 0x550b10
    t0 = 0x00550b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468639u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468639:  // mov edx, dword ptr [0x89d760]
    edx = (uint32_t)(M32((uint32_t)(0x89d760u)));
L_0046863f:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00468643:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00468644:  // mov ecx, 0x89d760
    ecx = (uint32_t)(0x89d760u);
L_00468649:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046864bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046864b:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0046864f:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_00468654:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00468655:  // push 0x89d760
    t0 = 0x89d760u; esp -= 4; M32(esp) = t0;
L_0046865a:  // call 0x449ef0
    t0 = 0x00449ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046865fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046865f:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00468663:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00468667:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00468668:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00468669:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0046866e:  // call 0x550be0
    t0 = 0x00550be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00468673u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00468673:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00468676:  // mov edx, dword ptr [0x679b34]
    edx = (uint32_t)(M32((uint32_t)(0x679b34u)));
L_0046867c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00468681:  // mov esi, 0x679b00
    esi = (uint32_t)(0x679b00u);
L_00468686:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00468688:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0046868b:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0046868d:  // mov ecx, dword ptr [0x679b30]
    ecx = (uint32_t)(M32((uint32_t)(0x679b30u)));
L_00468693:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00468695:  // mov dword ptr [0x704e48], 0
    M32((uint32_t)(0x704e48u)) = (uint32_t)(0x0u);
L_0046869f:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004686a1:  // mov ecx, dword ptr [0x679b38]
    ecx = (uint32_t)(M32((uint32_t)(0x679b38u)));
L_004686a7:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004686aa:  // mov edx, dword ptr [0x679b3c]
    edx = (uint32_t)(M32((uint32_t)(0x679b3cu)));
L_004686b0:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004686b3:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004686b8:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004686bb:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004686c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004686c0:  // mov eax, dword ptr [0x89ce4c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_004686c5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004686c7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004686c9:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_004686ce:  // mov dword ptr [eax*4 + 0x89c9a4], 0x89d760
    M32((uint32_t)(eax * 4u + 0x89c9a4u)) = (uint32_t)(0x89d760u);
L_004686d9:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_004686e0:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_004686e7:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004686ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004686ec:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004686f1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004686f2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004686f3:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_004686f6:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004686f7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004686f8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004686fa:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004686fb:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_004686fe:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004685f0, 004685f0)
