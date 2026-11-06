// lifted from 004f0630 (vslot9, 304 bytes, 74 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f0630(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f0630;
L_004f0630:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f0633:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f0634:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f0638:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004f0639:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004f063e:  // mov eax, dword ptr [ebx + 0x3bc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x3bcu)));
L_004f0644:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f0645:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f0646:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004f0648:  // mov dword ptr [eax + 0x1a0], ebp
    M32((uint32_t)(eax + 0x1a0u)) = (uint32_t)(ebp);
L_004f064e:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004f0650:  // mov eax, 0x3fe90fdb
    eax = (uint32_t)(0x3fe90fdbu);
L_004f0655:  // mov dword ptr [esi + 0x2c4], edi
    M32((uint32_t)(esi + 0x2c4u)) = (uint32_t)(edi);
L_004f065b:  // mov dword ptr [esi + 0x2c8], eax
    M32((uint32_t)(esi + 0x2c8u)) = (uint32_t)(eax);
L_004f0661:  // mov dword ptr [esi + 0x2cc], edi
    M32((uint32_t)(esi + 0x2ccu)) = (uint32_t)(edi);
L_004f0667:  // mov dword ptr [esi + 0x2d0], eax
    M32((uint32_t)(esi + 0x2d0u)) = (uint32_t)(eax);
L_004f066d:  // mov dword ptr [esi + 0x30c], edi
    M32((uint32_t)(esi + 0x30cu)) = (uint32_t)(edi);
L_004f0673:  // mov ecx, dword ptr [ebx + 0x3bc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x3bcu)));
L_004f0679:  // push 0x632cb8
    t0 = 0x632cb8u; esp -= 4; M32(esp) = t0;
L_004f067e:  // mov edx, dword ptr [ecx + 0xb0]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xb0u)));
L_004f0684:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f0685:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f068au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f068a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f068d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004f068f:  // jne 0x4f0697
    if (!f.zf) goto L_004f0697;
L_004f0691:  // mov dword ptr [esi + 0x30c], ebp
    M32((uint32_t)(esi + 0x30cu)) = (uint32_t)(ebp);
L_004f0697:  // cmp dword ptr [esi + 0x30c], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x30cu)), edi, f);
L_004f069d:  // je 0x4f06a7
    if (f.zf) goto L_004f06a7;
L_004f069f:  // fld dword ptr [0x5dbe34]
    lpush(x, (long double)F32((uint32_t)(0x5dbe34u)));
L_004f06a5:  // jmp 0x4f06ad
    goto L_004f06ad;
L_004f06a7:  // fld dword ptr [0x5df464]
    lpush(x, (long double)F32((uint32_t)(0x5df464u)));
L_004f06ad:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004f06b1:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004f06b5:  // lea eax, [esi + 0x2d4]
    eax = (uint32_t)((uint32_t)(esi + 0x2d4u));
L_004f06bb:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004f06c3:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004f06c5:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004f06c9:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f06cd:  // mov dword ptr [ebp], eax
    M32((uint32_t)(ebp)) = (uint32_t)(eax);
L_004f06d0:  // mov dword ptr [esp + 0x18], 0x3e800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3e800000u);
L_004f06d8:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f06dc:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004f06e4:  // mov dword ptr [ebp + 4], ecx
    M32((uint32_t)(ebp + 0x4u)) = (uint32_t)(ecx);
L_004f06e7:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004f06ef:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004f06f7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f06f8:  // mov dword ptr [ebp + 8], edx
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(edx);
L_004f06fb:  // mov dword ptr [esi + 0x308], 0
    M32((uint32_t)(esi + 0x308u)) = (uint32_t)(0x0u);
L_004f0705:  // mov dword ptr [ebp + 0xc], edi
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(edi);
L_004f0708:  // lea ebp, [esi + 0x2e4]
    ebp = (uint32_t)((uint32_t)(esi + 0x2e4u));
L_004f070e:  // mov dword ptr [esi + 0x2e4], eax
    M32((uint32_t)(esi + 0x2e4u)) = (uint32_t)(eax);
L_004f0714:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004f0718:  // mov dword ptr [ebp + 4], ecx
    M32((uint32_t)(ebp + 0x4u)) = (uint32_t)(ecx);
L_004f071b:  // lea ecx, [esi + 0x2f4]
    ecx = (uint32_t)((uint32_t)(esi + 0x2f4u));
L_004f0721:  // mov dword ptr [ebp + 8], edx
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(edx);
L_004f0724:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004f0728:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004f072a:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004f072e:  // mov dword ptr [ebp + 0xc], edi
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(edi);
L_004f0731:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004f0734:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004f0738:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004f073b:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004f073e:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004f0743:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f0745:  // mov dword ptr [esi + 0x2c0], eax
    M32((uint32_t)(esi + 0x2c0u)) = (uint32_t)(eax);
L_004f074b:  // mov dword ptr [esi + 0x304], eax
    M32((uint32_t)(esi + 0x304u)) = (uint32_t)(eax);
L_004f0751:  // call 0x427b80
    t0 = 0x00427b80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f0756u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f0756:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f0757:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f0758:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004f0759:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f075a:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004f075d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f0630, 004f0630)
