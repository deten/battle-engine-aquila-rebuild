// lifted from 004c3440 (vslot7, 358 bytes, 124 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c3440(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c3440;
L_004c3440:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c3441:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c3443:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c3444:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004c3448:  // mov eax, dword ptr [esi + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_004c344b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c344d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c344e:  // push 0xd
    t0 = 0xdu; esp -= 4; M32(esp) = t0;
L_004c3450:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3455u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3455:  // mov eax, dword ptr [esi + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x5cu)));
L_004c3458:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c345a:  // je 0x4c3466
    if (f.zf) goto L_004c3466;
L_004c345c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c345d:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_004c345f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3461:  // call 0x4f5d10
    t0 = 0x004f5d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3466u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3466:  // mov ecx, dword ptr [esi + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_004c3469:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c346a:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_004c346c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c346e:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3473u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3473:  // mov edx, dword ptr [esi + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x6cu)));
L_004c3476:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3478:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3479:  // push 0x47
    t0 = 0x47u; esp -= 4; M32(esp) = t0;
L_004c347b:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3480u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3480:  // mov eax, dword ptr [esi + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_004c3483:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3485:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c3486:  // push 0x49
    t0 = 0x49u; esp -= 4; M32(esp) = t0;
L_004c3488:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c348du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c348d:  // mov ecx, dword ptr [esi + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x68u)));
L_004c3490:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3491:  // push 0x48
    t0 = 0x48u; esp -= 4; M32(esp) = t0;
L_004c3493:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3495:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c349au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c349a:  // mov edx, dword ptr [esi + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004c349d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c349f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c34a0:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004c34a2:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c34a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c34a7:  // mov eax, dword ptr [esi + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x78u)));
L_004c34aa:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c34ac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c34ad:  // push 0x4a
    t0 = 0x4au; esp -= 4; M32(esp) = t0;
L_004c34af:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c34b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c34b4:  // mov ecx, dword ptr [esi + 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004c34b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c34b8:  // push 0x4b
    t0 = 0x4bu; esp -= 4; M32(esp) = t0;
L_004c34ba:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c34bc:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c34c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c34c1:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004c34c7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c34c9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c34ca:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004c34cc:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c34d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c34d1:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004c34d7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c34d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c34da:  // push 0x1b
    t0 = 0x1bu; esp -= 4; M32(esp) = t0;
L_004c34dc:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c34e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c34e1:  // mov ecx, dword ptr [esi + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x88u)));
L_004c34e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c34e8:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_004c34ea:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c34ec:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c34f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c34f1:  // mov edx, dword ptr [esi + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_004c34f7:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c34f9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c34fa:  // push 0x4d
    t0 = 0x4du; esp -= 4; M32(esp) = t0;
L_004c34fc:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3501u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3501:  // mov eax, dword ptr [esi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004c3507:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3509:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c350a:  // push 0x3f
    t0 = 0x3fu; esp -= 4; M32(esp) = t0;
L_004c350c:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3511u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3511:  // mov ecx, dword ptr [esi + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x94u)));
L_004c3517:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3518:  // push 0x67
    t0 = 0x67u; esp -= 4; M32(esp) = t0;
L_004c351a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c351c:  // call 0x4f5d50
    t0 = 0x004f5d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3521u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3521:  // mov edx, dword ptr [esi + 0x98]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x98u)));
L_004c3527:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3529:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c352a:  // push 0x22
    t0 = 0x22u; esp -= 4; M32(esp) = t0;
L_004c352c:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3531u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3531:  // mov eax, dword ptr [esi + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x9cu)));
L_004c3537:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3539:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c353a:  // push 0x4e
    t0 = 0x4eu; esp -= 4; M32(esp) = t0;
L_004c353c:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3541u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3541:  // mov ecx, dword ptr [esi + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004c3547:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3548:  // push 0x4f
    t0 = 0x4fu; esp -= 4; M32(esp) = t0;
L_004c354a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c354c:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3551u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3551:  // mov edx, dword ptr [esi + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004c3557:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c3558:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_004c355a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c355c:  // call 0x4f5cd0
    t0 = 0x004f5cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3561u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3561:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004c3567:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3569:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c356a:  // push 0x51
    t0 = 0x51u; esp -= 4; M32(esp) = t0;
L_004c356c:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3571u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3571:  // lea ecx, [esi + 0xac]
    ecx = (uint32_t)((uint32_t)(esi + 0xacu));
L_004c3577:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c3578:  // push 0x52
    t0 = 0x52u; esp -= 4; M32(esp) = t0;
L_004c357a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c357c:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3581u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3581:  // lea edx, [esi + 0xb4]
    edx = (uint32_t)((uint32_t)(esi + 0xb4u));
L_004c3587:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3589:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c358a:  // push 0x53
    t0 = 0x53u; esp -= 4; M32(esp) = t0;
L_004c358c:  // call 0x4f5dc0
    t0 = 0x004f5dc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c3591u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c3591:  // mov eax, dword ptr [esi + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xbcu)));
L_004c3597:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004c3599:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c359a:  // push 0x54
    t0 = 0x54u; esp -= 4; M32(esp) = t0;
L_004c359c:  // call 0x4f5c90
    t0 = 0x004f5c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004c35a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004c35a1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004c35a2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004c35a3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004c3440, 004c3440)
