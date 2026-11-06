// lifted from 004f34a0 (vslot9, 301 bytes, 106 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f34a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f34a0;
L_004f34a0:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f34a3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f34a4:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f34a8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f34a9:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f34ab:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004f34ae:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f34b0:  // jne 0x4f34bb
    if (!f.zf) goto L_004f34bb;
L_004f34b2:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004f34b4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f34b5:  // call dword ptr [eax + 0x88]
    t0 = M32((uint32_t)(eax + 0x88u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f34bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f34bb:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f34bd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f34be:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f34c0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f34c2:  // call dword ptr [edx + 0x98]
    t0 = M32((uint32_t)(edx + 0x98u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f34c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f34c8:  // lea edi, [esi + 0x1c]
    edi = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004f34cb:  // lea eax, [ebx + 4]
    eax = (uint32_t)((uint32_t)(ebx + 0x4u));
L_004f34ce:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004f34d0:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004f34d2:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f34d4:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f34d7:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004f34da:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f34dd:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f34e0:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f34e2:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f34e5:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f34e8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f34ea:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f34f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f34f0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f34f2:  // je 0x4f353b
    if (f.zf) goto L_004f353b;
L_004f34f4:  // mov edx, edi
    edx = (uint32_t)(edi);
L_004f34f6:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004f34fb:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3500u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3500:  // fcom dword ptr [esi + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x24u)));
L_004f3503:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f3505:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f3508:  // je 0x4f3539
    if (f.zf) goto L_004f3539;
L_004f350a:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004f350c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004f350e:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_004f3512:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f3515:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004f3519:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004f351c:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004f3520:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004f3524:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004f3527:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004f3529:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f352d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f352e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f3530:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004f3534:  // call dword ptr [eax + 0x50]
    t0 = M32((uint32_t)(eax + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3537u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3537:  // jmp 0x4f353b
    goto L_004f353b;
L_004f3539:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f353b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f353d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f353f:  // call dword ptr [edx + 0xc4]
    t0 = M32((uint32_t)(edx + 0xc4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3545u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3545:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f3547:  // jne 0x4f3560
    if (!f.zf) goto L_004f3560;
L_004f3549:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004f354f:  // fcom dword ptr [esi + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x24u)));
L_004f3552:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f3554:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004f3557:  // je 0x4f355e
    if (f.zf) goto L_004f355e;
L_004f3559:  // fstp dword ptr [esi + 0x24]
    F32((uint32_t)(esi + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004f355c:  // jmp 0x4f3560
    goto L_004f3560;
L_004f355e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f3560:  // test byte ptr [esi + 0x2c], 2
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x2u, f);
L_004f3564:  // je 0x4f359a
    if (f.zf) goto L_004f359a;
L_004f3566:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004f356c:  // lea ecx, [esi + 0xc]
    ecx = (uint32_t)((uint32_t)(esi + 0xcu));
L_004f356f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f3570:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f3571:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f3572:  // call 0x492ba0
    t0 = 0x00492ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3577u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3577:  // cmp dword ptr [esi + 0x18], 3
    t0 = lsub<32>(M32((uint32_t)(esi + 0x18u)), 0x3u, f);
L_004f357b:  // jge 0x4f358c
    if ((f.sf == f.of)) goto L_004f358c;
L_004f357d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f357e:  // mov ecx, 0x855170
    ecx = (uint32_t)(0x855170u);
L_004f3583:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f3588u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f3588:  // or byte ptr [esi + 0x2c], 0x40
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) | 0x40u, f);
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)(t0);
L_004f358c:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f358e:  // lea eax, [ebx + 0x68]
    eax = (uint32_t)((uint32_t)(ebx + 0x68u));
L_004f3591:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f3592:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f3594:  // call dword ptr [edx + 0x8c]
    t0 = M32((uint32_t)(edx + 0x8cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f359au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f359a:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004f359d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f359e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f35a0:  // je 0x4f35a9
    if (f.zf) goto L_004f35a9;
L_004f35a2:  // or dword ptr [esi + 0x34], 0x800000
    t0 = llog<32>(M32((uint32_t)(esi + 0x34u)) | 0x800000u, f);
    M32((uint32_t)(esi + 0x34u)) = (uint32_t)(t0);
L_004f35a9:  // mov eax, dword ptr [ebx + 0x3ac]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x3acu)));
L_004f35af:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f35b1:  // jne 0x4f35ba
    if (!f.zf) goto L_004f35ba;
L_004f35b3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f35b5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f35b7:  // call dword ptr [edx + 0x5c]
    t0 = M32((uint32_t)(edx + 0x5cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f35bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f35ba:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f35bb:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_004f35c0:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f35c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f35c5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f35c6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f35c7:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f35ca:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f34a0, 004f34a0)
