// lifted from 004714c0 (FUN_004714c0, 3425 bytes, 941 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004714c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004714c0;
L_004714c0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004714c1:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_004714c3:  // and esp, 0xfffffff8
    t0 = llog<32>(esp & 0xfffffff8u, f);
    esp = (uint32_t)(t0);
L_004714c6:  // mov eax, 0x24a0
    eax = (uint32_t)(0x24a0u);
L_004714cb:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004714d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004714d0:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_004714d5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004714d6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004714d7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004714d8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004714d9:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004714db:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004714dd:  // jne 0x47158b
    if (!f.zf) goto L_0047158b;
L_004714e3:  // mov al, byte ptr [0x679ec1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x679ec1u))) & 0xffu);
L_004714e8:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004714ea:  // jne 0x47158b
    if (!f.zf) goto L_0047158b;
L_004714f0:  // mov al, byte ptr [0x662f3e]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x662f3eu))) & 0xffu);
L_004714f5:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004714f7:  // je 0x4715a7
    if (f.zf) goto L_004715a7;
L_004714fd:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_004714ff:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471504:  // call 0x515980
    t0 = 0x00515980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471509u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471509:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047150b:  // je 0x4715a7
    if (f.zf) goto L_004715a7;
L_00471511:  // mov eax, dword ptr [0x679fa0]
    eax = (uint32_t)(M32((uint32_t)(0x679fa0u)));
L_00471516:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471518:  // jne 0x471530
    if (!f.zf) goto L_00471530;
L_0047151a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047151c:  // push 0x62c624
    t0 = 0x62c624u; esp -= 4; M32(esp) = t0;
L_00471521:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471526u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471526:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00471529:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047152a:  // call dword ptr [0x5d81c8]
    t0 = M32((uint32_t)(0x5d81c8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471530u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471530:  // mov eax, dword ptr [0x679fa0]
    eax = (uint32_t)(M32((uint32_t)(0x679fa0u)));
L_00471535:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471539:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047153a:  // push 0x62c610
    t0 = 0x62c610u; esp -= 4; M32(esp) = t0;
L_0047153f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471540:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471545u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471545:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00471549:  // push 0x62c60c
    t0 = 0x62c60cu; esp -= 4; M32(esp) = t0;
L_0047154e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047154f:  // call 0x55e490
    t0 = 0x0055e490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471554u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471554:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00471557:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471559:  // je 0x471571
    if (f.zf) goto L_00471571;
L_0047155b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047155c:  // call 0x55e4a3
    t0 = 0x0055e4a3u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471561u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471561:  // mov eax, dword ptr [0x679fa0]
    eax = (uint32_t)(M32((uint32_t)(0x679fa0u)));
L_00471566:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00471569:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047156a:  // mov dword ptr [0x679fa0], eax
    M32((uint32_t)(0x679fa0u)) = (uint32_t)(eax);
L_0047156f:  // jmp 0x471530
    goto L_00471530;
L_00471571:  // mov eax, dword ptr [0x679fa0]
    eax = (uint32_t)(M32((uint32_t)(0x679fa0u)));
L_00471576:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471578:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00471579:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047157a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0047157f:  // mov dword ptr [0x679fa0], eax
    M32((uint32_t)(0x679fa0u)) = (uint32_t)(eax);
L_00471584:  // call 0x5134a0
    t0 = 0x005134a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471589u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471589:  // jmp 0x4715a7
    goto L_004715a7;
L_0047158b:  // push 0x42
    t0 = 0x42u; esp -= 4; M32(esp) = t0;
L_0047158d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471592:  // call 0x515980
    t0 = 0x00515980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471597u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471597:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471599:  // je 0x4715a7
    if (f.zf) goto L_004715a7;
L_0047159b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047159d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047159f:  // call 0x441b10
    t0 = 0x00441b10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004715a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004715a4:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004715a7:  // mov eax, dword ptr [0x679f9c]
    eax = (uint32_t)(M32((uint32_t)(0x679f9cu)));
L_004715ac:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004715ad:  // cmp eax, 0x64
    t0 = lsub<32>(eax, 0x64u, f);
L_004715b0:  // mov dword ptr [0x679f9c], eax
    M32((uint32_t)(0x679f9cu)) = (uint32_t)(eax);
L_004715b5:  // jle 0x471614
    if ((f.zf || f.sf != f.of)) goto L_00471614;
L_004715b7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004715bc:  // call 0x515950
    t0 = 0x00515950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004715c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004715c1:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004715c4:  // lea eax, [esp + 0x78]
    eax = (uint32_t)((uint32_t)(esp + 0x78u));
L_004715c8:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004715cb:  // push 0x62c5fc
    t0 = 0x62c5fcu; esp -= 4; M32(esp) = t0;
L_004715d0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004715d1:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004715d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004715d6:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004715d9:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004715dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004715de:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004715e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004715e3:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_004715e8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004715eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004715ed:  // jne 0x4715f8
    if (!f.zf) goto L_004715f8;
L_004715ef:  // mov al, byte ptr [0x679ec1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x679ec1u))) & 0xffu);
L_004715f4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004715f6:  // je 0x47160a
    if (f.zf) goto L_0047160a;
L_004715f8:  // lea edx, [esp + 0x70]
    edx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004715fc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004715fd:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00471602:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471607u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471607:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0047160a:  // mov dword ptr [0x679f9c], 0
    M32((uint32_t)(0x679f9cu)) = (uint32_t)(0x0u);
L_00471614:  // mov eax, dword ptr [0x662dd0]
    eax = (uint32_t)(M32((uint32_t)(0x662dd0u)));
L_00471619:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047161b:  // je 0x47174c
    if (f.zf) goto L_0047174c;
L_00471621:  // mov eax, dword ptr [0x85509c]
    eax = (uint32_t)(M32((uint32_t)(0x85509cu)));
L_00471626:  // mov ecx, dword ptr [0x672fe8]
    ecx = (uint32_t)(M32((uint32_t)(0x672fe8u)));
L_0047162c:  // mov edx, dword ptr [0x83cde8]
    edx = (uint32_t)(M32((uint32_t)(0x83cde8u)));
L_00471632:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471633:  // mov eax, dword ptr [0x672fe0]
    eax = (uint32_t)(M32((uint32_t)(0x672fe0u)));
L_00471638:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471639:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_0047163f:  // mov ecx, dword ptr [edi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_00471642:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00471643:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471644:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00471647:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0047164a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047164b:  // push 0x62c5a0
    t0 = 0x62c5a0u; esp -= 4; M32(esp) = t0;
L_00471650:  // push 0x66ffc8
    t0 = 0x66ffc8u; esp -= 4; M32(esp) = t0;
L_00471655:  // call 0x472240
    t0 = 0x00472240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047165au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047165a:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0047165d:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00471660:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471662:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471667:  // je 0x47167b
    if (f.zf) goto L_0047167b;
L_00471669:  // call 0x515950
    t0 = 0x00515950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047166eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047166e:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00471671:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00471674:  // push 0x62c580
    t0 = 0x62c580u; esp -= 4; M32(esp) = t0;
L_00471679:  // jmp 0x47168b
    goto L_0047168b;
L_0047167b:  // call 0x515950
    t0 = 0x00515950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471680u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471680:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00471683:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00471686:  // push 0x62c570
    t0 = 0x62c570u; esp -= 4; M32(esp) = t0;
L_0047168b:  // push 0x66ffc8
    t0 = 0x66ffc8u; esp -= 4; M32(esp) = t0;
L_00471690:  // call 0x472240
    t0 = 0x00472240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471695u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471695:  // mov eax, dword ptr [edi + 0x2a4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x2a4u)));
L_0047169b:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047169e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004716a0:  // je 0x47175e
    if (f.zf) goto L_0047175e;
L_004716a6:  // mov ecx, dword ptr [eax + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_004716a9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004716ab:  // je 0x4716cb
    if (f.zf) goto L_004716cb;
L_004716ad:  // mov edx, dword ptr [edi + 0xf4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xf4u)));
L_004716b3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004716b4:  // push 0x62c558
    t0 = 0x62c558u; esp -= 4; M32(esp) = t0;
L_004716b9:  // push 0x66ffc8
    t0 = 0x66ffc8u; esp -= 4; M32(esp) = t0;
L_004716be:  // call 0x472240
    t0 = 0x00472240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004716c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004716c3:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004716c6:  // jmp 0x47175e
    goto L_0047175e;
L_004716cb:  // mov esi, dword ptr [eax + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x1cu)));
L_004716ce:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004716d0:  // je 0x47175e
    if (f.zf) goto L_0047175e;
L_004716d6:  // mov eax, dword ptr [edi + 0xf4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xf4u)));
L_004716dc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004716de:  // fld dword ptr [esi + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esi + 0xfcu)));
L_004716e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004716e5:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004716e8:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004716eb:  // call 0x4f99f0
    t0 = 0x004f99f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004716f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004716f0:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004716f3:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004716f6:  // push 0x62c52c
    t0 = 0x62c52cu; esp -= 4; M32(esp) = t0;
L_004716fb:  // push 0x66ffc8
    t0 = 0x66ffc8u; esp -= 4; M32(esp) = t0;
L_00471700:  // call 0x472240
    t0 = 0x00472240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471705u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471705:  // mov eax, dword ptr [esi + 0x2fc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2fcu)));
L_0047170b:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0047170e:  // fld dword ptr [esi + 0x2f8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x2f8u)));
L_00471714:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471716:  // je 0x471732
    if (f.zf) goto L_00471732;
L_00471718:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0047171b:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0047171e:  // push 0x62c50c
    t0 = 0x62c50cu; esp -= 4; M32(esp) = t0;
L_00471723:  // push 0x66ffc8
    t0 = 0x66ffc8u; esp -= 4; M32(esp) = t0;
L_00471728:  // call 0x472240
    t0 = 0x00472240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047172du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047172d:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00471730:  // jmp 0x47175e
    goto L_0047175e;
L_00471732:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00471735:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_00471738:  // push 0x62c4f8
    t0 = 0x62c4f8u; esp -= 4; M32(esp) = t0;
L_0047173d:  // push 0x66ffc8
    t0 = 0x66ffc8u; esp -= 4; M32(esp) = t0;
L_00471742:  // call 0x472240
    t0 = 0x00472240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471747u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471747:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047174a:  // jmp 0x47175e
    goto L_0047175e;
L_0047174c:  // push 0x624624
    t0 = 0x624624u; esp -= 4; M32(esp) = t0;
L_00471751:  // push 0x66ffc8
    t0 = 0x66ffc8u; esp -= 4; M32(esp) = t0;
L_00471756:  // call 0x472240
    t0 = 0x00472240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047175bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047175b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0047175e:  // mov eax, dword ptr [edi + 0x9d0]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x9d0u)));
L_00471764:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471766:  // je 0x47179d
    if (f.zf) goto L_0047179d;
L_00471768:  // mov esi, dword ptr [edi + 0x2c4]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x2c4u)));
L_0047176e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00471770:  // je 0x47179d
    if (f.zf) goto L_0047179d;
L_00471772:  // mov eax, dword ptr [edi + 0x2a4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x2a4u)));
L_00471778:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047177a:  // je 0x47179d
    if (f.zf) goto L_0047179d;
L_0047177c:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0047177e:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471782:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471783:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00471785:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471787u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471787:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00471789:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_0047178d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047178e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00471790:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471793u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471793:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471794:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00471798:  // call 0x44adb0
    t0 = 0x0044adb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047179du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047179d:  // mov al, byte ptr [0x679ec0]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x679ec0u))) & 0xffu);
L_004717a2:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004717a4:  // je 0x47181d
    if (f.zf) goto L_0047181d;
L_004717a6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004717ab:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004717b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004717b0:  // fld qword ptr [0x5db488]
    lpush(x, (long double)F64((uint32_t)(0x5db488u)));
L_004717b6:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004717bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004717bb:  // fcomp dword ptr [0x5dbbf8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbbf8u)));
    lpop(x);
L_004717c1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004717c3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004717c6:  // je 0x47181d
    if (f.zf) goto L_0047181d;
L_004717c8:  // mov eax, dword ptr [0x662df4]
    eax = (uint32_t)(M32((uint32_t)(0x662df4u)));
L_004717cd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004717cf:  // je 0x4717dd
    if (f.zf) goto L_004717dd;
L_004717d1:  // push 0x62ba48
    t0 = 0x62ba48u; esp -= 4; M32(esp) = t0;
L_004717d6:  // push 0x679ed4
    t0 = 0x679ed4u; esp -= 4; M32(esp) = t0;
L_004717db:  // jmp 0x4717e7
    goto L_004717e7;
L_004717dd:  // push 0x62baac
    t0 = 0x62baacu; esp -= 4; M32(esp) = t0;
L_004717e2:  // push 0x679f38
    t0 = 0x679f38u; esp -= 4; M32(esp) = t0;
L_004717e7:  // call 0x472270
    t0 = 0x00472270u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004717ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004717ec:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004717ef:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004717f4:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004717f9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004717fe:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471800:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471802:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471803:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471805:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_0047180a:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_0047180f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471811:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471816u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471816:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471818:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047181du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047181d:  // mov ecx, 0x66f580
    ecx = (uint32_t)(0x66f580u);
L_00471822:  // mov dword ptr [0x6726d8], 0x66ffc8
    M32((uint32_t)(0x6726d8u)) = (uint32_t)(0x66ffc8u);
L_0047182c:  // call 0x4419e0
    t0 = 0x004419e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471831u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471831:  // mov eax, dword ptr [edi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x28u)));
L_00471834:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00471837:  // jle 0x472219
    if ((f.zf || f.sf != f.of)) goto L_00472219;
L_0047183d:  // cmp eax, 9
    t0 = lsub<32>(eax, 0x9u, f);
L_00471840:  // jge 0x472219
    if ((f.sf == f.of)) goto L_00472219;
L_00471846:  // fld dword ptr [edi + 0x48]
    lpush(x, (long double)F32((uint32_t)(edi + 0x48u)));
L_00471849:  // fcomp dword ptr [0x5dbc08]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc08u)));
    lpop(x);
L_0047184f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00471851:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00471854:  // jne 0x472219
    if (!f.zf) goto L_00472219;
L_0047185a:  // mov byte ptr [0x679b40], 1
    M8((uint32_t)(0x679b40u)) = (uint8_t)(0x1u);
L_00471861:  // mov eax, dword ptr [edi + 0x394]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x394u)));
L_00471867:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471869:  // mov esi, 0x10
    esi = (uint32_t)(0x10u);
L_0047186e:  // mov ebp, 0xa0
    ebp = (uint32_t)(0xa0u);
L_00471873:  // je 0x47187f
    if (f.zf) goto L_0047187f;
L_00471875:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_0047187a:  // mov ebp, 0xff
    ebp = (uint32_t)(0xffu);
L_0047187f:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471884:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471889u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471889:  // fcom dword ptr [0x679fa4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x679fa4u)));
L_0047188f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00471891:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00471894:  // jne 0x4718c7
    if (!f.zf) goto L_004718c7;
L_00471896:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00471898:  // fsub dword ptr [0x679fa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x679fa4u)));
L_0047189e:  // fcom dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
L_004718a4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004718a6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004718a9:  // je 0x4718c5
    if (f.zf) goto L_004718c5;
L_004718ab:  // fmul dword ptr [0x5d8ba8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8ba8u)));
L_004718b1:  // fistp qword ptr [esp + 0x14]
    M64((uint32_t)(esp + 0x14u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004718b5:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004718b9:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004718bc:  // jle 0x4718c7
    if ((f.zf || f.sf != f.of)) goto L_004718c7;
L_004718be:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_004718c1:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004718c3:  // jmp 0x4718c7
    goto L_004718c7;
L_004718c5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004718c7:  // fstp dword ptr [0x679fa4]
    F32((uint32_t)(0x679fa4u)) = lf32(ST(0));
    lpop(x);
L_004718cd:  // mov ecx, dword ptr [edi + 0x300]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x300u)));
L_004718d3:  // add ecx, esi
    t0 = ladd<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_004718d5:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004718d7:  // mov dword ptr [edi + 0x300], ecx
    M32((uint32_t)(edi + 0x300u)) = (uint32_t)(ecx);
L_004718dd:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004718df:  // jle 0x4718e7
    if ((f.zf || f.sf != f.of)) goto L_004718e7;
L_004718e1:  // mov dword ptr [edi + 0x300], ebp
    M32((uint32_t)(edi + 0x300u)) = (uint32_t)(ebp);
L_004718e7:  // mov esi, dword ptr [edi + 0x300]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x300u)));
L_004718ed:  // mov eax, dword ptr [edi + 0x9d0]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x9d0u)));
L_004718f3:  // shl esi, 0x18
    t0 = lshl<32>(esi, 0x18u, f);
    esi = (uint32_t)(t0);
L_004718f6:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004718f9:  // jne 0x4718fd
    if (!f.zf) goto L_004718fd;
L_004718fb:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004718fd:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00471904:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0047190b:  // cmp dword ptr [edi + 0x28], 6
    t0 = lsub<32>(M32((uint32_t)(edi + 0x28u)), 0x6u, f);
L_0047190f:  // jne 0x471a31
    if (!f.zf) goto L_00471a31;
L_00471915:  // mov ecx, dword ptr [0x8aa650]
    ecx = (uint32_t)(M32((uint32_t)(0x8aa650u)));
L_0047191b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047191d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471922:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471924:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471926:  // push 0x41020000
    t0 = 0x41020000u; esp -= 4; M32(esp) = t0;
L_0047192b:  // push 0x412a0000
    t0 = 0x412a0000u; esp -= 4; M32(esp) = t0;
L_00471930:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471931:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471932:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00471937:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_0047193c:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471941:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471946u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471946:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00471949:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0047194d:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471952:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00471953:  // push 0x88b6ab
    t0 = 0x88b6abu; esp -= 4; M32(esp) = t0;
L_00471958:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047195du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047195d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047195e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471960:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471965:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047196au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047196a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047196c:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471971u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471971:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471976:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047197b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047197d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047197f:  // push 0x88b6ab
    t0 = 0x88b6abu; esp -= 4; M32(esp) = t0;
L_00471984:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471989:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047198eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047198e:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471992:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471993:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471995:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_0047199a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047199b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004719a1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004719a6:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_004719ac:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004719af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004719b1:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004719b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004719b6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004719b8:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004719bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004719bd:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004719c1:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004719c6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004719c7:  // push 0x3f3384
    t0 = 0x3f3384u; esp -= 4; M32(esp) = t0;
L_004719cc:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004719d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004719d1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004719d2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004719d4:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004719d9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004719deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004719de:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004719e0:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004719e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004719e5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004719ea:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004719ef:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004719f1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004719f3:  // push 0x3f3384
    t0 = 0x3f3384u; esp -= 4; M32(esp) = t0;
L_004719f8:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004719fd:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471a02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471a02:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471a06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471a07:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471a09:  // push 0x43750000
    t0 = 0x43750000u; esp -= 4; M32(esp) = t0;
L_00471a0e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471a0f:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00471a15:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471a1a:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00471a20:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471a23:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471a25:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471a2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471a2a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471a2c:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471a31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471a31:  // cmp dword ptr [edi + 0x28], 7
    t0 = lsub<32>(M32((uint32_t)(edi + 0x28u)), 0x7u, f);
L_00471a35:  // jne 0x471b57
    if (!f.zf) goto L_00471b57;
L_00471a3b:  // mov ecx, dword ptr [0x8aa650]
    ecx = (uint32_t)(M32((uint32_t)(0x8aa650u)));
L_00471a41:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471a43:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471a48:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471a4a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471a4c:  // push 0x41020000
    t0 = 0x41020000u; esp -= 4; M32(esp) = t0;
L_00471a51:  // push 0x412a0000
    t0 = 0x412a0000u; esp -= 4; M32(esp) = t0;
L_00471a56:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471a57:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471a58:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00471a5d:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471a62:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471a67:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471a6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471a6c:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00471a6f:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471a73:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471a78:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00471a79:  // push 0x3f3384
    t0 = 0x3f3384u; esp -= 4; M32(esp) = t0;
L_00471a7e:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471a83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471a83:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471a84:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471a86:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471a8b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471a90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471a90:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471a92:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471a97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471a97:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471a9c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471aa1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471aa3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471aa5:  // push 0x3f3384
    t0 = 0x3f3384u; esp -= 4; M32(esp) = t0;
L_00471aaa:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471aaf:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471ab4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471ab4:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471ab8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471ab9:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471abb:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_00471ac0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471ac1:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00471ac7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471acc:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00471ad2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471ad5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471ad7:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471adcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471adc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471ade:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471ae3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471ae3:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471ae7:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471aec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471aed:  // push 0x88b6ab
    t0 = 0x88b6abu; esp -= 4; M32(esp) = t0;
L_00471af2:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471af7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471af7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471af8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471afa:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471aff:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471b04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471b04:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471b06:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471b0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471b0b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471b10:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471b15:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471b17:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471b19:  // push 0x88b6ab
    t0 = 0x88b6abu; esp -= 4; M32(esp) = t0;
L_00471b1e:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471b23:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471b28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471b28:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471b2c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471b2d:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471b2f:  // push 0x43750000
    t0 = 0x43750000u; esp -= 4; M32(esp) = t0;
L_00471b34:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471b35:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00471b3b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471b40:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00471b46:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471b49:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471b4b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471b50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471b50:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471b52:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471b57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471b57:  // cmp dword ptr [edi + 0x28], 8
    t0 = lsub<32>(M32((uint32_t)(edi + 0x28u)), 0x8u, f);
L_00471b5b:  // jne 0x471c7d
    if (!f.zf) goto L_00471c7d;
L_00471b61:  // mov ecx, dword ptr [0x8aa650]
    ecx = (uint32_t)(M32((uint32_t)(0x8aa650u)));
L_00471b67:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471b69:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471b6e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471b70:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471b72:  // push 0x41020000
    t0 = 0x41020000u; esp -= 4; M32(esp) = t0;
L_00471b77:  // push 0x412a0000
    t0 = 0x412a0000u; esp -= 4; M32(esp) = t0;
L_00471b7c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471b7d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471b7e:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00471b83:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471b88:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471b8d:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471b92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471b92:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00471b95:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471b99:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471b9e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00471b9f:  // push 0xb9c85
    t0 = 0xb9c85u; esp -= 4; M32(esp) = t0;
L_00471ba4:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471ba9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471ba9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471baa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471bac:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471bb1:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471bb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471bb6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471bb8:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471bbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471bbd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471bc2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471bc7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471bc9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471bcb:  // push 0x3f3384
    t0 = 0x3f3384u; esp -= 4; M32(esp) = t0;
L_00471bd0:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471bd5:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471bdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471bda:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471bde:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471bdf:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471be1:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_00471be6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471be7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00471bed:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471bf2:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00471bf8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471bfb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471bfd:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c02:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471c04:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c09:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471c0d:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471c12:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471c13:  // push 0xb9c85
    t0 = 0xb9c85u; esp -= 4; M32(esp) = t0;
L_00471c18:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471c1e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471c20:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471c25:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c2a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471c2c:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c31:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471c36:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471c3b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471c3d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471c3f:  // push 0x88b6ab
    t0 = 0x88b6abu; esp -= 4; M32(esp) = t0;
L_00471c44:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471c49:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c4eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c4e:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471c52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471c53:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471c55:  // push 0x43750000
    t0 = 0x43750000u; esp -= 4; M32(esp) = t0;
L_00471c5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471c5b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00471c61:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471c66:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00471c6c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471c6f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471c71:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c76:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471c78:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471c7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471c7d:  // mov eax, dword ptr [edi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x28u)));
L_00471c80:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_00471c83:  // je 0x471c8e
    if (f.zf) goto L_00471c8e;
L_00471c85:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_00471c88:  // jne 0x472204
    if (!f.zf) goto L_00472204;
L_00471c8e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471c90:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471c95:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00471c9c:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00471ca3:  // mov eax, dword ptr [edi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x28u)));
L_00471ca6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471ca8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471caa:  // push 0x41020000
    t0 = 0x41020000u; esp -= 4; M32(esp) = t0;
L_00471caf:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_00471cb2:  // push 0x412a0000
    t0 = 0x412a0000u; esp -= 4; M32(esp) = t0;
L_00471cb7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471cb8:  // jne 0x471d2b
    if (!f.zf) goto L_00471d2b;
L_00471cba:  // mov ecx, dword ptr [0x8aa650]
    ecx = (uint32_t)(M32((uint32_t)(0x8aa650u)));
L_00471cc0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471cc1:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00471cc6:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471ccb:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471cd0:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471cd5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471cd5:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00471cd8:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471cdc:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471ce1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00471ce2:  // push 0x88b6ab
    t0 = 0x88b6abu; esp -= 4; M32(esp) = t0;
L_00471ce7:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471cecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471cec:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471ced:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471cef:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471cf4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471cf9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471cf9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471cfb:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471d00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471d00:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471d05:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471d0a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471d0c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471d0e:  // push 0x88b6ab
    t0 = 0x88b6abu; esp -= 4; M32(esp) = t0;
L_00471d13:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471d18:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471d1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471d1d:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471d21:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471d22:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471d24:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_00471d29:  // jmp 0x471d99
    goto L_00471d99;
L_00471d2b:  // mov eax, dword ptr [0x8aa650]
    eax = (uint32_t)(M32((uint32_t)(0x8aa650u)));
L_00471d30:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471d31:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00471d36:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471d3b:  // push 0xc1200000
    t0 = 0xc1200000u; esp -= 4; M32(esp) = t0;
L_00471d40:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471d45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471d45:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00471d48:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_00471d4c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471d4d:  // push 0x3f3384
    t0 = 0x3f3384u; esp -= 4; M32(esp) = t0;
L_00471d52:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471d57:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471d5cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471d5c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471d5d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471d5f:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471d64:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471d69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471d69:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471d6b:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471d70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471d70:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471d75:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471d7a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471d7c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471d7e:  // push 0x3f3384
    t0 = 0x3f3384u; esp -= 4; M32(esp) = t0;
L_00471d83:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471d88:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471d8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471d8d:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00471d91:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471d92:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471d94:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_00471d99:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00471d9f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471da0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471da5:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00471dab:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471dae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471db0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471db5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471db5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471db7:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471dbcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471dbc:  // mov eax, dword ptr [edi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x28u)));
L_00471dbf:  // mov dword ptr [esp + 0x10], 0x5a
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x5au);
L_00471dc7:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_00471dca:  // jne 0x471eaf
    if (!f.zf) goto L_00471eaf;
L_00471dd0:  // mov edi, dword ptr [edi + 0x114]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x114u)));
L_00471dd6:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00471dd8:  // jne 0x471e0f
    if (!f.zf) goto L_00471e0f;
L_00471dda:  // lea edx, [esp + 0x170]
    edx = (uint32_t)((uint32_t)(esp + 0x170u));
L_00471de1:  // push 0x62c4d4
    t0 = 0x62c4d4u; esp -= 4; M32(esp) = t0;
L_00471de6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00471de7:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471decu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471dec:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00471def:  // lea eax, [esp + 0x170]
    eax = (uint32_t)((uint32_t)(esp + 0x170u));
L_00471df6:  // push 0x43fa0000
    t0 = 0x43fa0000u; esp -= 4; M32(esp) = t0;
L_00471dfb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471dfc:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e01:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00471e04:  // lea ecx, [esp + 0x574]
    ecx = (uint32_t)((uint32_t)(esp + 0x574u));
L_00471e0b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471e0c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471e0d:  // jmp 0x471e28
    goto L_00471e28;
L_00471e0f:  // push 0x43fa0000
    t0 = 0x43fa0000u; esp -= 4; M32(esp) = t0;
L_00471e14:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00471e15:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471e1a:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e1f:  // lea edx, [esp + 0x574]
    edx = (uint32_t)((uint32_t)(esp + 0x574u));
L_00471e26:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471e27:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00471e28:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00471e2a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471e2f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e34:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471e36:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e3b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00471e3d:  // jle 0x471eaa
    if ((f.zf || f.sf != f.of)) goto L_00471eaa;
L_00471e3f:  // lea esi, [esp + 0x570]
    esi = (uint32_t)((uint32_t)(esp + 0x570u));
L_00471e46:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00471e48:  // mov ebx, 0x10
    ebx = (uint32_t)(0x10u);
L_00471e4d:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00471e51:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471e56:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471e57:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471e58:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00471e5a:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e5f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471e61:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e66:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00471e6a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471e6f:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471e74:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471e76:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471e78:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471e79:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471e7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471e7c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471e81:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471e84:  // push 0x42820000
    t0 = 0x42820000u; esp -= 4; M32(esp) = t0;
L_00471e89:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00471e8b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e90:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471e92:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471e97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471e97:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00471e9b:  // add esi, 0xc8
    t0 = ladd<32>(esi, 0xc8u, f);
    esi = (uint32_t)(t0);
L_00471ea1:  // add edx, ebx
    t0 = ladd<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_00471ea3:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00471ea4:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00471ea8:  // jne 0x471e4d
    if (!f.zf) goto L_00471e4d;
L_00471eaa:  // add dword ptr [esp + 0x10], 0x14
    t0 = ladd<32>(M32((uint32_t)(esp + 0x10u)), 0x14u, f);
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(t0);
L_00471eaf:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00471eb1:  // mov edi, 0x8a9ae4
    edi = (uint32_t)(0x8a9ae4u);
L_00471eb6:  // mov dword ptr [esp + 0x14], 0xa
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xau);
L_00471ebe:  // mov ebx, 0x142
    ebx = (uint32_t)(0x142u);
L_00471ec3:  // cmp dword ptr [edi], 0
    t0 = lsub<32>(M32((uint32_t)(edi)), 0x0u, f);
L_00471ec6:  // je 0x471ff3
    if (f.zf) goto L_00471ff3;
L_00471ecc:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00471ece:  // jne 0x471f21
    if (!f.zf) goto L_00471f21;
L_00471ed0:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471ed5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471eda:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00471edb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00471edc:  // push 0xcd8bc48f
    t0 = 0xcd8bc48fu; esp -= 4; M32(esp) = t0;
L_00471ee1:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471ee6:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471eebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471eeb:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00471eef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471ef0:  // push 0xffffa040
    t0 = 0xffffa040u; esp -= 4; M32(esp) = t0;
L_00471ef5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471ef6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471efb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471efe:  // push 0x42820000
    t0 = 0x42820000u; esp -= 4; M32(esp) = t0;
L_00471f03:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00471f05:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471f0au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471f0a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471f0c:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471f11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471f11:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00471f15:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_00471f1a:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00471f1d:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00471f21:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00471f24:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471f29:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471f2a:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471f2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471f2f:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00471f33:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00471f35:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471f36:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471f37:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00471f39:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471f3e:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471f43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471f43:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471f45:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471f4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471f4a:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00471f4e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471f53:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471f58:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471f5a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471f5c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00471f5d:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00471f5f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471f60:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471f65:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471f68:  // push 0x42820000
    t0 = 0x42820000u; esp -= 4; M32(esp) = t0;
L_00471f6d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00471f6f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471f74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471f74:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471f76:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471f7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471f7b:  // cmp dword ptr [esp + 0x34], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x34u)), ebx, f);
L_00471f7f:  // jle 0x471f86
    if ((f.zf || f.sf != f.of)) goto L_00471f86;
L_00471f81:  // add dword ptr [esp + 0x10], 0x10
    t0 = ladd<32>(M32((uint32_t)(esp + 0x10u)), 0x10u, f);
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(t0);
L_00471f86:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_00471f88:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00471f8a:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00471f8d:  // push 0x3905856
    t0 = 0x3905856u; esp -= 4; M32(esp) = t0;
L_00471f92:  // sete dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_00471f95:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471f9a:  // mov esi, edx
    esi = (uint32_t)(edx);
L_00471f9c:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471fa1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471fa1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00471fa3:  // mov ecx, 0xffff1f1f
    ecx = (uint32_t)(0xffff1f1fu);
L_00471fa8:  // je 0x471fbe
    if (f.zf) goto L_00471fbe;
L_00471faa:  // push 0xe848ac
    t0 = 0xe848acu; esp -= 4; M32(esp) = t0;
L_00471faf:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00471fb4:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471fb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471fb9:  // mov ecx, 0xff10ff1f
    ecx = (uint32_t)(0xff10ff1fu);
L_00471fbe:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00471fc2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471fc7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00471fcc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471fce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00471fd0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00471fd1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471fd2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00471fd3:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00471fd8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00471fdb:  // push 0x43c58000
    t0 = 0x43c58000u; esp -= 4; M32(esp) = t0;
L_00471fe0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00471fe2:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471fe7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471fe7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00471fe9:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00471feeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00471fee:  // add dword ptr [esp + 0x10], 0x10
    t0 = ladd<32>(M32((uint32_t)(esp + 0x10u)), 0x10u, f);
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(t0);
L_00471ff3:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00471ff7:  // add edi, 8
    t0 = ladd<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00471ffa:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00471ffb:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00471fff:  // jne 0x471ec3
    if (!f.zf) goto L_00471ec3;
L_00472005:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00472007:  // je 0x47200e
    if (f.zf) goto L_0047200e;
L_00472009:  // add dword ptr [esp + 0x10], 8
    t0 = ladd<32>(M32((uint32_t)(esp + 0x10u)), 0x8u, f);
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(t0);
L_0047200e:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00472010:  // mov edi, 0x8a9b34
    edi = (uint32_t)(0x8a9b34u);
L_00472015:  // mov ebx, 0xa
    ebx = (uint32_t)(0xau);
L_0047201a:  // cmp dword ptr [edi], 0
    t0 = lsub<32>(M32((uint32_t)(edi)), 0x0u, f);
L_0047201d:  // je 0x472155
    if (f.zf) goto L_00472155;
L_00472023:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00472025:  // jne 0x472078
    if (!f.zf) goto L_00472078;
L_00472027:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047202c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00472031:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00472032:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00472033:  // push 0x2a53e6c7
    t0 = 0x2a53e6c7u; esp -= 4; M32(esp) = t0;
L_00472038:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0047203d:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472042u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472042:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00472046:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00472047:  // push 0xffffa040
    t0 = 0xffffa040u; esp -= 4; M32(esp) = t0;
L_0047204c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047204d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00472052:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00472055:  // push 0x42820000
    t0 = 0x42820000u; esp -= 4; M32(esp) = t0;
L_0047205a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0047205c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472061u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472061:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00472063:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472068u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472068:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047206c:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_00472071:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_00472074:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00472078:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0047207b:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00472080:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00472081:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472086u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472086:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00472088:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_0047208c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047208d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047208e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472090:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00472095:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047209au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047209a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047209c:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004720a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004720a1:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004720a5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004720aa:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004720af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004720b1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004720b3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004720b4:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004720b6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004720b7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004720bc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004720bf:  // push 0x42820000
    t0 = 0x42820000u; esp -= 4; M32(esp) = t0;
L_004720c4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004720c6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004720cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004720cb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004720cd:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004720d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004720d2:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_004720d6:  // fcomp dword ptr [0x5dbc04]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc04u)));
    lpop(x);
L_004720dc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004720de:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004720e1:  // jne 0x4720e8
    if (!f.zf) goto L_004720e8;
L_004720e3:  // add dword ptr [esp + 0x10], 0x10
    t0 = ladd<32>(M32((uint32_t)(esp + 0x10u)), 0x10u, f);
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(t0);
L_004720e8:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004720ea:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004720ec:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_004720ef:  // push 0x3905856
    t0 = 0x3905856u; esp -= 4; M32(esp) = t0;
L_004720f4:  // sete cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_004720f7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004720f9:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004720fe:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472103u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472103:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00472105:  // mov ecx, 0xffff1f1f
    ecx = (uint32_t)(0xffff1f1fu);
L_0047210a:  // je 0x472120
    if (f.zf) goto L_00472120;
L_0047210c:  // push 0xe848ac
    t0 = 0xe848acu; esp -= 4; M32(esp) = t0;
L_00472111:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00472116:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047211bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047211b:  // mov ecx, 0xff10ff1f
    ecx = (uint32_t)(0xff10ff1fu);
L_00472120:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00472124:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00472129:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047212e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472130:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472132:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00472133:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472134:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00472135:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047213a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047213d:  // push 0x43c58000
    t0 = 0x43c58000u; esp -= 4; M32(esp) = t0;
L_00472142:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00472144:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472149u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472149:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047214b:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472150u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472150:  // add dword ptr [esp + 0x10], 0x10
    t0 = ladd<32>(M32((uint32_t)(esp + 0x10u)), 0x10u, f);
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(t0);
L_00472155:  // add edi, 8
    t0 = ladd<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00472158:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00472159:  // jne 0x47201a
    if (!f.zf) goto L_0047201a;
L_0047215f:  // mov eax, dword ptr [0x83d448]
    eax = (uint32_t)(M32((uint32_t)(0x83d448u)));
L_00472164:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00472166:  // jne 0x472204
    if (!f.zf) goto L_00472204;
L_0047216c:  // mov dword ptr [esp + 0x14], 0x43340000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x43340000u);
L_00472174:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00472178:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0047217a:  // cmp edi, 5
    t0 = lsub<32>(edi, 0x5u, f);
L_0047217d:  // ja 0x4721ba
    if ((!f.cf && !f.zf)) goto L_004721ba;
L_0047217f:  // jmp dword ptr [edi*4 + 0x472224]
    t0 = M32((uint32_t)(edi * 4u + 0x472224u));
    switch (t0) {
    case 0x00472186u: goto L_00472186;
    case 0x0047218du: goto L_0047218d;
    case 0x00472194u: goto L_00472194;
    case 0x0047219bu: goto L_0047219b;
    case 0x004721a2u: goto L_004721a2;
    case 0x004721a9u: goto L_004721a9;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00472186:  // push 0x253be35a
    t0 = 0x253be35au; esp -= 4; M32(esp) = t0;
L_0047218b:  // jmp 0x4721ae
    goto L_004721ae;
L_0047218d:  // push 0x895ddea
    t0 = 0x895ddeau; esp -= 4; M32(esp) = t0;
L_00472192:  // jmp 0x4721ae
    goto L_004721ae;
L_00472194:  // push 0x4470092c
    t0 = 0x4470092cu; esp -= 4; M32(esp) = t0;
L_00472199:  // jmp 0x4721ae
    goto L_004721ae;
L_0047219b:  // push 0x93b838
    t0 = 0x93b838u; esp -= 4; M32(esp) = t0;
L_004721a0:  // jmp 0x4721ae
    goto L_004721ae;
L_004721a2:  // push 0x9c124
    t0 = 0x9c124u; esp -= 4; M32(esp) = t0;
L_004721a7:  // jmp 0x4721ae
    goto L_004721ae;
L_004721a9:  // push 0x619683
    t0 = 0x619683u; esp -= 4; M32(esp) = t0;
L_004721ae:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004721b3:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004721b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004721b8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004721ba:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004721be:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004721c3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004721c4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004721c5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004721c7:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004721ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004721cc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004721ce:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004721d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004721d3:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_004721d7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004721db:  // fsub dword ptr [0x5d85cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ccu)));
L_004721e1:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004721e3:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004721e5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004721e7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004721ea:  // jne 0x4721f8
    if (!f.zf) goto L_004721f8;
L_004721ec:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004721f2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004721f6:  // jmp 0x4721fa
    goto L_004721fa;
L_004721f8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004721fa:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004721fb:  // cmp edi, 6
    t0 = lsub<32>(edi, 0x6u, f);
L_004721fe:  // jl 0x47217a
    if ((f.sf != f.of)) goto L_0047217a;
L_00472204:  // mov byte ptr [0x9c68ac], 1
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x1u);
L_0047220b:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00472212:  // mov byte ptr [0x679b40], 0
    M8((uint32_t)(0x679b40u)) = (uint8_t)(0x0u);
L_00472219:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047221a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047221b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047221c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047221d:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_0047221f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00472220:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004714c0, 004714c0)
