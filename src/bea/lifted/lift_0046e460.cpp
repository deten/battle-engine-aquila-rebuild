// lifted from 0046e460 (FUN_0046e460, 1196 bytes, 325 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0046e460(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0046e460;
L_0046e460:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0046e462:  // push 0x5d2958
    t0 = 0x5d2958u; esp -= 4; M32(esp) = t0;
L_0046e467:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0046e46d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e46e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0046e475:  // sub esp, 0x3c
    t0 = lsub<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0046e478:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e479:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0046e47a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0046e47b:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0046e47d:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0046e481:  // call 0x491900
    t0 = 0x00491900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e486u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e486:  // fld dword ptr [esi + 0x3ac]
    lpush(x, (long double)F32((uint32_t)(esi + 0x3acu)));
L_0046e48c:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_0046e492:  // mov eax, dword ptr [esi + 0x2a0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2a0u)));
L_0046e498:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0046e49a:  // cmp eax, 0x351
    t0 = lsub<32>(eax, 0x351u, f);
L_0046e49f:  // mov dword ptr [esp + 0x50], ebx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ebx);
L_0046e4a3:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_0046e4a9:  // fmul dword ptr [0x5d8ba8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8ba8u)));
L_0046e4af:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0046e4b3:  // jle 0x46e4bc
    if ((f.zf || f.sf != f.of)) goto L_0046e4bc;
L_0046e4b5:  // cmp eax, 0x384
    t0 = lsub<32>(eax, 0x384u, f);
L_0046e4ba:  // jl 0x46e4f9
    if ((f.sf != f.of)) goto L_0046e4f9;
L_0046e4bc:  // cmp dword ptr [0x9c648c], ebx
    t0 = lsub<32>(M32((uint32_t)(0x9c648cu)), ebx, f);
L_0046e4c2:  // je 0x46e4f9
    if (f.zf) goto L_0046e4f9;
L_0046e4c4:  // mov eax, dword ptr [0x89c9b0]
    eax = (uint32_t)(M32((uint32_t)(0x89c9b0u)));
L_0046e4c9:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046e4cb:  // je 0x46e4f9
    if (f.zf) goto L_0046e4f9;
L_0046e4cd:  // cmp dword ptr [eax + 0x14], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x14u)), ebx, f);
L_0046e4d0:  // je 0x46e4f9
    if (f.zf) goto L_0046e4f9;
L_0046e4d2:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0046e4d8:  // jne 0x46e4f9
    if (!f.zf) goto L_0046e4f9;
L_0046e4da:  // mov eax, dword ptr [eax + 0x14]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_0046e4dd:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0046e4e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e4e2:  // call 0x546220
    t0 = 0x00546220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e4e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e4e7:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0046e4e9:  // je 0x46e4f9
    if (f.zf) goto L_0046e4f9;
L_0046e4eb:  // mov byte ptr [0x89d680], 1
    M8((uint32_t)(0x89d680u)) = (uint8_t)(0x1u);
L_0046e4f2:  // mov byte ptr [0x83cd58], 1
    M8((uint32_t)(0x83cd58u)) = (uint8_t)(0x1u);
L_0046e4f9:  // cmp dword ptr [esi + 0x38c], 0xbf800000
    t0 = lsub<32>(M32((uint32_t)(esi + 0x38cu)), 0xbf800000u, f);
L_0046e503:  // je 0x46e517
    if (f.zf) goto L_0046e517;
L_0046e505:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0046e509:  // fsub dword ptr [esi + 0x38c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x38cu)));
L_0046e50f:  // fstp dword ptr [esi + 0x388]
    F32((uint32_t)(esi + 0x388u)) = lf32(ST(0));
    lpop(x);
L_0046e515:  // jmp 0x46e521
    goto L_0046e521;
L_0046e517:  // mov dword ptr [esi + 0x388], 0x3f800000
    M32((uint32_t)(esi + 0x388u)) = (uint32_t)(0x3f800000u);
L_0046e521:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0046e525:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0046e529:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0046e52b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046e52d:  // sete dl
    edx = (edx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_0046e530:  // mov dword ptr [esi + 0x38c], ecx
    M32((uint32_t)(esi + 0x38cu)) = (uint32_t)(ecx);
L_0046e536:  // mov ebp, edx
    ebp = (uint32_t)(edx);
L_0046e538:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0046e53e:  // je 0x46e54a
    if (f.zf) goto L_0046e54a;
L_0046e540:  // mov dword ptr [esp + 0x30], 0x100
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x100u);
L_0046e548:  // jmp 0x46e558
    goto L_0046e558;
L_0046e54a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0046e54f:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e554u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e554:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0046e558:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0046e55e:  // je 0x46e56a
    if (f.zf) goto L_0046e56a;
L_0046e560:  // mov dword ptr [esp + 0x34], 0x100
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x100u);
L_0046e568:  // jmp 0x46e578
    goto L_0046e578;
L_0046e56a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0046e56f:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e574u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e574:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0046e578:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0046e57b:  // mov eax, dword ptr [esi + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x40u)));
L_0046e57e:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0046e57f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0046e581:  // mov dword ptr [esp + 0x38], ebx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebx);
L_0046e585:  // mov dword ptr [esp + 0x3c], ebx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebx);
L_0046e589:  // mov dword ptr [esp + 0x40], 0
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x0u);
L_0046e591:  // mov dword ptr [esp + 0x44], 0x3f800000
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x3f800000u);
L_0046e599:  // mov dword ptr [esi + 0x14], ecx
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(ecx);
L_0046e59c:  // mov dword ptr [esi + 0x390], ebp
    M32((uint32_t)(esi + 0x390u)) = (uint32_t)(ebp);
L_0046e5a2:  // jne 0x46e5ad
    if (!f.zf) goto L_0046e5ad;
L_0046e5a4:  // mov eax, dword ptr [esi + 0x29c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x29cu)));
L_0046e5aa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e5ab:  // jmp 0x46e5af
    goto L_0046e5af;
L_0046e5ad:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e5af:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e5b4:  // call 0x528b50
    t0 = 0x00528b50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e5b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e5b9:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0046e5bd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e5be:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e5c3:  // call 0x53e220
    t0 = 0x0053e220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e5c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e5c8:  // cmp dword ptr [esi + 0x300], 0xff
    t0 = lsub<32>(M32((uint32_t)(esi + 0x300u)), 0xffu, f);
L_0046e5d2:  // je 0x46e888
    if (f.zf) goto L_0046e888;
L_0046e5d8:  // mov eax, dword ptr [esi + 0x29c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x29cu)));
L_0046e5de:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0046e5e1:  // je 0x46e820
    if (f.zf) goto L_0046e820;
L_0046e5e7:  // cmp dword ptr [esi + 0x40], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x40u)), ebx, f);
L_0046e5ea:  // jne 0x46e820
    if (!f.zf) goto L_0046e820;
L_0046e5f0:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0046e5f3:  // jne 0x46e6e3
    if (!f.zf) goto L_0046e6e3;
L_0046e5f9:  // cmp byte ptr [esi + 0x38], bl
    t0 = lsub<8>(M8((uint32_t)(esi + 0x38u)), (ebx & 0xffu), f);
L_0046e5fc:  // je 0x46e611
    if (f.zf) goto L_0046e611;
L_0046e5fe:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e602:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046e606:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0046e60a:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e60b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e60d:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e60f:  // jmp 0x46e622
    goto L_0046e622;
L_0046e611:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e615:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e616:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e618:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e61a:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0046e61e:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046e622:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0046e626:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0046e62a:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0046e62e:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_0046e636:  // mov dword ptr [esp + 0x2c], 0x3f800000
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x3f800000u);
L_0046e63e:  // call 0x42d420
    t0 = 0x0042d420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e643u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e643:  // mov ecx, dword ptr [esi + 0x2a4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2a4u)));
L_0046e649:  // mov ecx, dword ptr [ecx + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_0046e64c:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0046e64e:  // je 0x46e655
    if (f.zf) goto L_0046e655;
L_0046e650:  // call 0x407540
    t0 = 0x00407540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e655u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e655:  // mov edx, dword ptr [esi + 0x2a8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x2a8u)));
L_0046e65b:  // mov ecx, dword ptr [edx + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x1cu)));
L_0046e65e:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0046e660:  // je 0x46e667
    if (f.zf) goto L_0046e667;
L_0046e662:  // call 0x407540
    t0 = 0x00407540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e667u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e667:  // mov eax, dword ptr [esi + 0x2a4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2a4u)));
L_0046e66d:  // mov ecx, dword ptr [esi + 0x2c4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2c4u)));
L_0046e673:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e674:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0046e678:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e679:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e67a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e67b:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e680:  // call 0x44a020
    t0 = 0x0044a020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e685u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e685:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e686:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e68b:  // call 0x53e2e0
    t0 = 0x0053e2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e690u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e690:  // cmp byte ptr [esi + 0x38], bl
    t0 = lsub<8>(M8((uint32_t)(esi + 0x38u)), (ebx & 0xffu), f);
L_0046e693:  // je 0x46e6aa
    if (f.zf) goto L_0046e6aa;
L_0046e695:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046e699:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0046e69d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e69e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e6a0:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e6a2:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0046e6a4:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_0046e6a8:  // jmp 0x46e6bd
    goto L_0046e6bd;
L_0046e6aa:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e6ae:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046e6b2:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e6b3:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e6b5:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e6b7:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0046e6b9:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0046e6bd:  // mov eax, dword ptr [esi + 0x2a8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2a8u)));
L_0046e6c3:  // mov ecx, dword ptr [esi + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2c8u)));
L_0046e6c9:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0046e6cd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e6ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046e6cf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e6d0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e6d2:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e6d7:  // call 0x44a020
    t0 = 0x0044a020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e6dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e6dc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e6de:  // jmp 0x46e87e
    goto L_0046e87e;
L_0046e6e3:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0046e6e6:  // je 0x46e6f1
    if (f.zf) goto L_0046e6f1;
L_0046e6e8:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_0046e6eb:  // jne 0x46e888
    if (!f.zf) goto L_0046e888;
L_0046e6f1:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e6f5:  // mov ecx, dword ptr [esi + 0x2c4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2c4u)));
L_0046e6fb:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e6fc:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e6fe:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0046e702:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e704:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0046e708:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046e70c:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e70d:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e70f:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0046e713:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e715:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0046e719:  // mov eax, dword ptr [esi + 0x2a4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2a4u)));
L_0046e71f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e720:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0046e724:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e725:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e726:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e727:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e72c:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_0046e734:  // mov dword ptr [esp + 0x3c], 0x3f800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x3f800000u);
L_0046e73c:  // call 0x44a020
    t0 = 0x0044a020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e741u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e741:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e742:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e747:  // call 0x53e2e0
    t0 = 0x0053e2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e74cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e74c:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e750:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046e754:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e755:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e757:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0046e75b:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e75d:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0046e75f:  // mov eax, dword ptr [esi + 0x2a8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2a8u)));
L_0046e765:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0046e769:  // mov ecx, dword ptr [esi + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2c8u)));
L_0046e76f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e770:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046e771:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e772:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e774:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e779:  // call 0x44a020
    t0 = 0x0044a020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e77eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e77e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0046e780:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e785:  // call 0x53e2e0
    t0 = 0x0053e2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e78au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e78a:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e78e:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0046e792:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e793:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e795:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046e799:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e79b:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_0046e79d:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0046e79f:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046e7a3:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0046e7a7:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e7a8:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e7aa:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e7ac:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0046e7ae:  // mov eax, dword ptr [esi + 0x2ac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2acu)));
L_0046e7b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e7b5:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0046e7b9:  // mov ecx, dword ptr [esi + 0x2cc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2ccu)));
L_0046e7bf:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0046e7c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e7c4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e7c5:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0046e7c7:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e7cc:  // call 0x44a020
    t0 = 0x0044a020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e7d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e7d1:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0046e7d3:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e7d8:  // call 0x53e2e0
    t0 = 0x0053e2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e7ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e7dd:  // cmp dword ptr [esi + 0x29c], 4
    t0 = lsub<32>(M32((uint32_t)(esi + 0x29cu)), 0x4u, f);
L_0046e7e4:  // jne 0x46e888
    if (!f.zf) goto L_0046e888;
L_0046e7ea:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e7ee:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0046e7f2:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0046e7f3:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0046e7f5:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0046e7f9:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0046e7fb:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0046e7fd:  // mov eax, dword ptr [esi + 0x2b0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2b0u)));
L_0046e803:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0046e807:  // mov ecx, dword ptr [esi + 0x2d0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2d0u)));
L_0046e80d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e80e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046e80f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e810:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0046e812:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e817:  // call 0x44a020
    t0 = 0x0044a020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e81cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e81c:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0046e81e:  // jmp 0x46e87e
    goto L_0046e87e;
L_0046e820:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0046e824:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0046e828:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0046e82c:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0046e830:  // mov dword ptr [esp + 0x20], ebx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebx);
L_0046e834:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0046e838:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_0046e840:  // mov dword ptr [esp + 0x2c], 0x3f800000
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x3f800000u);
L_0046e848:  // call 0x42d420
    t0 = 0x0042d420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e84du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e84d:  // mov edx, dword ptr [esi + 0x2a4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x2a4u)));
L_0046e853:  // mov ecx, dword ptr [edx + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x1cu)));
L_0046e856:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0046e858:  // je 0x46e85f
    if (f.zf) goto L_0046e85f;
L_0046e85a:  // call 0x407540
    t0 = 0x00407540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e85fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e85f:  // mov eax, dword ptr [esi + 0x2a4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2a4u)));
L_0046e865:  // mov ecx, dword ptr [esi + 0x2c4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2c4u)));
L_0046e86b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e86c:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0046e870:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e871:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e872:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e873:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e878:  // call 0x44a020
    t0 = 0x0044a020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e87du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e87d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e87e:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e883:  // call 0x53e2e0
    t0 = 0x0053e2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e888u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e888:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0046e88c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0046e88d:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0046e892:  // call 0x53ecc0
    t0 = 0x0053ecc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e897u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e897:  // mov edx, dword ptr [esi + 0x2b4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x2b4u)));
L_0046e89d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e89e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0046e89f:  // push 0x89cdd8
    t0 = 0x89cdd8u; esp -= 4; M32(esp) = t0;
L_0046e8a4:  // mov ecx, 0x89be50
    ecx = (uint32_t)(0x89be50u);
L_0046e8a9:  // call 0x527990
    t0 = 0x00527990u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e8aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e8ae:  // mov eax, dword ptr [esi + 0x2b8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2b8u)));
L_0046e8b4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0046e8b5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0046e8b6:  // push 0x89cdf0
    t0 = 0x89cdf0u; esp -= 4; M32(esp) = t0;
L_0046e8bb:  // mov ecx, 0x89be5c
    ecx = (uint32_t)(0x89be5cu);
L_0046e8c0:  // call 0x527990
    t0 = 0x00527990u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e8c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e8c5:  // cmp byte ptr [0x89d680], bl
    t0 = lsub<8>(M8((uint32_t)(0x89d680u)), (ebx & 0xffu), f);
L_0046e8cb:  // je 0x46e8e7
    if (f.zf) goto L_0046e8e7;
L_0046e8cd:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0046e8d1:  // mov byte ptr [0x89d680], bl
    M8((uint32_t)(0x89d680u)) = (uint8_t)((ebx & 0xffu));
L_0046e8d7:  // mov byte ptr [0x83cd58], bl
    M8((uint32_t)(0x83cd58u)) = (uint8_t)((ebx & 0xffu));
L_0046e8dd:  // call 0x5463f0
    t0 = 0x005463f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e8e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e8e2:  // jmp 0x46e538
    goto L_0046e538;
L_0046e8e7:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0046e8eb:  // mov dword ptr [esp + 0x50], 0xffffffff
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0xffffffffu);
L_0046e8f3:  // call 0x546460
    t0 = 0x00546460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0046e8f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0046e8f8:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0046e8fc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046e8fd:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046e8fe:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046e8ff:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0046e906:  // add esp, 0x48
    t0 = ladd<32>(esp, 0x48u, f);
    esp = (uint32_t)(t0);
L_0046e909:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0046e460, 0046e460)
