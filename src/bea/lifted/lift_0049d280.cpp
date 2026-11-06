// lifted from 0049d280 (FUN_0049d280, 2569 bytes, 658 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0049d280(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0049d280;
L_0049d280:  // sub esp, 0x108
    t0 = lsub<32>(esp, 0x108u, f);
    esp = (uint32_t)(t0);
L_0049d286:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049d287:  // mov ebx, dword ptr [esp + 0x150]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x150u)));
L_0049d28e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0049d28f:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0049d291:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049d292:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049d293:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0049d296:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d298:  // jne 0x49d2a6
    if (!f.zf) goto L_0049d2a6;
L_0049d29a:  // mov eax, dword ptr [ebx + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x128u)));
L_0049d2a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d2a1:  // call 0x49cc40
    t0 = 0x0049cc40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d2a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d2a6:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_0049d2ae:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049d2b2:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0049d2ba:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049d2be:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_0049d2c5:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049d2c9:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0049d2d1:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049d2d5:  // mov dword ptr [esp + 0x9c], edx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edx);
L_0049d2dc:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0049d2e4:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049d2e8:  // mov dword ptr [esp + 0xa4], ecx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ecx);
L_0049d2ef:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0049d2f7:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049d2fb:  // mov dword ptr [esp + 0xa0], eax
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(eax);
L_0049d302:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_0049d30a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049d30e:  // mov dword ptr [esp + 0xa8], edx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(edx);
L_0049d315:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049d319:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0049d31e:  // mov dword ptr [esp + 0xb4], ecx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(ecx);
L_0049d325:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049d327:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049d329:  // lea ecx, [esp + 0x94]
    ecx = (uint32_t)((uint32_t)(esp + 0x94u));
L_0049d330:  // mov byte ptr [esp + 0x1f], 0
    M8((uint32_t)(esp + 0x1fu)) = (uint8_t)(0x0u);
L_0049d335:  // mov byte ptr [esp + 0x1e], 0
    M8((uint32_t)(esp + 0x1eu)) = (uint8_t)(0x0u);
L_0049d33a:  // mov dword ptr [esp + 0xb8], eax
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(eax);
L_0049d341:  // mov dword ptr [esp + 0xc0], edx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(edx);
L_0049d348:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d34du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d34d:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049d34f:  // mov esi, dword ptr [ebp + 8]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049d352:  // mov dword ptr [esp + 0xb8], ecx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(ecx);
L_0049d359:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0049d361:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049d364:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0049d36c:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_0049d373:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0049d37b:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049d37e:  // mov dword ptr [esp + 0x44], esi
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(esi);
L_0049d382:  // mov dword ptr [esp + 0xc0], ecx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(ecx);
L_0049d389:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049d38c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0049d38e:  // mov dword ptr [esp + 0xc4], edx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(edx);
L_0049d395:  // je 0x49d40f
    if (f.zf) goto L_0049d40f;
L_0049d397:  // cmp dword ptr [ebx + 0xb8], 1
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xb8u)), 0x1u, f);
L_0049d39e:  // jle 0x49d40f
    if ((f.zf || f.sf != f.of)) goto L_0049d40f;
L_0049d3a0:  // mov eax, dword ptr [ebx + 0x128]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x128u)));
L_0049d3a6:  // mov ecx, dword ptr [eax + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_0049d3a9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0049d3ab:  // je 0x49d40f
    if (f.zf) goto L_0049d40f;
L_0049d3ad:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049d3af:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049d3b1:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d3b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d3b4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d3b6:  // jl 0x49d40f
    if ((f.sf != f.of)) goto L_0049d40f;
L_0049d3b8:  // mov ecx, dword ptr [ebx + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x128u)));
L_0049d3be:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0049d3c1:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_0049d3c4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049d3c6:  // lea edi, [edx + eax*4]
    edi = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0049d3c9:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0049d3cb:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d3ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d3ce:  // fimul dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(edi + 0x1cu)));
L_0049d3d1:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d3d4:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0049d3d7:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d3dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d3dc:  // mov ecx, dword ptr [edi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x14u)));
L_0049d3df:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049d3e2:  // fistp qword ptr [esp + 0x80]
    M64((uint32_t)(esp + 0x80u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0049d3e9:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_0049d3f0:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0049d3f2:  // mov ecx, dword ptr [ebx + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xc4u)));
L_0049d3f8:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0049d3f9:  // idiv dword ptr [ebx + 0xb8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(ebx + 0xb8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0049d3ff:  // mov dword ptr [esp + 0x80], edx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(edx);
L_0049d406:  // mov dl, byte ptr [ecx + edx]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + edx))) & 0xffu);
L_0049d409:  // mov byte ptr [esp + 0x24], dl
    M8((uint32_t)(esp + 0x24u)) = (uint8_t)((edx & 0xffu));
L_0049d40d:  // jmp 0x49d41f
    goto L_0049d41f;
L_0049d40f:  // mov byte ptr [esp + 0x24], 0
    M8((uint32_t)(esp + 0x24u)) = (uint8_t)(0x0u);
L_0049d414:  // mov dword ptr [esp + 0x80], 0
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x0u);
L_0049d41f:  // cmp ebx, dword ptr [ebp + 0xa4]
    t0 = lsub<32>(ebx, M32((uint32_t)(ebp + 0xa4u)), f);
L_0049d425:  // jne 0x49d44f
    if (!f.zf) goto L_0049d44f;
L_0049d427:  // lea eax, [ebp + 0x30]
    eax = (uint32_t)((uint32_t)(ebp + 0x30u));
L_0049d42a:  // mov byte ptr [esp + 0x12], 1
    M8((uint32_t)(esp + 0x12u)) = (uint8_t)(0x1u);
L_0049d42f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049d431:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0049d435:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049d438:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0049d43c:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049d43f:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0049d443:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049d446:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0049d44a:  // jmp 0x49d766
    goto L_0049d766;
L_0049d44f:  // cmp ebx, dword ptr [ebp + 0xb0]
    t0 = lsub<32>(ebx, M32((uint32_t)(ebp + 0xb0u)), f);
L_0049d455:  // je 0x49d766
    if (f.zf) goto L_0049d766;
L_0049d45b:  // cmp ebx, dword ptr [ebp + 0xa0]
    t0 = lsub<32>(ebx, M32((uint32_t)(ebp + 0xa0u)), f);
L_0049d461:  // jne 0x49d4a5
    if (!f.zf) goto L_0049d4a5;
L_0049d463:  // lea eax, [ebp + 0x40]
    eax = (uint32_t)((uint32_t)(ebp + 0x40u));
L_0049d466:  // lea esi, [ebp + 0x50]
    esi = (uint32_t)((uint32_t)(ebp + 0x50u));
L_0049d469:  // lea edi, [esp + 0x98]
    edi = (uint32_t)((uint32_t)(esp + 0x98u));
L_0049d470:  // mov byte ptr [esp + 0x12], 1
    M8((uint32_t)(esp + 0x12u)) = (uint8_t)(0x1u);
L_0049d475:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049d477:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_0049d47c:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0049d480:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049d483:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0049d487:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049d48a:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0049d48e:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049d493:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049d496:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049d498:  // mov esi, dword ptr [esp + 0x44]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0049d49c:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0049d4a0:  // jmp 0x49d766
    goto L_0049d766;
L_0049d4a5:  // mov ecx, dword ptr [ebp + 0xe8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe8u)));
L_0049d4ab:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049d4ad:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0049d4af:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_0049d4b3:  // jle 0x49d766
    if ((f.zf || f.sf != f.of)) goto L_0049d766;
L_0049d4b9:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0049d4bd:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_0049d4c1:  // mov ecx, dword ptr [ebp + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_0049d4c7:  // cmp ebx, dword ptr [ecx + eax*4]
    t0 = lsub<32>(ebx, M32((uint32_t)(ecx + eax * 4u)), f);
L_0049d4ca:  // jne 0x49d73d
    if (!f.zf) goto L_0049d73d;
L_0049d4d0:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0049d4d6:  // fcos 
    ST(0) = lfcos(ST(0));
L_0049d4d8:  // mov edx, dword ptr [ebp + 0xdc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xdcu)));
L_0049d4de:  // mov esi, dword ptr [esp + 0x48]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0049d4e2:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_0049d4e4:  // mov byte ptr [esp + 0x12], 1
    M8((uint32_t)(esp + 0x12u)) = (uint8_t)(0x1u);
L_0049d4e9:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0049d4eb:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0049d4ef:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0049d4f2:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_0049d4f6:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0049d4f9:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0049d4fd:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0049d500:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0049d504:  // fst dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
L_0049d508:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0049d50e:  // fsin 
    ST(0) = lfsin(ST(0));
L_0049d510:  // fst dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
L_0049d514:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0049d518:  // fld qword ptr [0x5dc478]
    lpush(x, (long double)F64((uint32_t)(0x5dc478u)));
L_0049d51e:  // fcos 
    ST(0) = lfcos(ST(0));
L_0049d520:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0049d524:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0049d528:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0049d52c:  // fld qword ptr [0x5dc478]
    lpush(x, (long double)F64((uint32_t)(0x5dc478u)));
L_0049d532:  // fsin 
    ST(0) = lfsin(ST(0));
L_0049d534:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0049d538:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0049d53c:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_0049d540:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0049d544:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_0049d548:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0049d54a:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0049d54e:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0049d550:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0049d554:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0049d556:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0049d55a:  // fchs 
    ST(0) = -ST(0);
L_0049d55c:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_0049d560:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0049d564:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_0049d568:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0049d56c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0049d570:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_0049d574:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0049d578:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0049d57c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d57e:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_0049d582:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0049d586:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0049d58a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0049d58c:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_0049d590:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d592:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_0049d596:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049d598:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_0049d59c:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_0049d5a0:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0049d5a4:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0049d5a8:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0049d5ac:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_0049d5b0:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0049d5b2:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_0049d5b6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049d5b8:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_0049d5bc:  // fchs 
    ST(0) = -ST(0);
L_0049d5be:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_0049d5c2:  // mov esi, dword ptr [ebp + 0xe0]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xe0u)));
L_0049d5c8:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0049d5cc:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_0049d5d0:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0049d5d2:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_0049d5d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d5da:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d5db:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0049d5e2:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0049d5e6:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_0049d5e9:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_0049d5ed:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_0049d5f0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d5f2:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0049d5f6:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_0049d5f9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d5fb:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_0049d602:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0049d606:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_0049d609:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0049d60d:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_0049d610:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d612:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0049d616:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_0049d619:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d61b:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_0049d622:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0049d626:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_0049d629:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_0049d630:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_0049d633:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d635:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0049d639:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_0049d63c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d63e:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_0049d645:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_0049d64c:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_0049d64f:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0049d653:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_0049d656:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d658:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0049d65c:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_0049d65f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d661:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d664:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0049d668:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_0049d66b:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0049d66f:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_0049d672:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d673:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d675:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0049d679:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_0049d67c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d67e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d681:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_0049d685:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_0049d688:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0049d68c:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_0049d68f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d690:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_0049d697:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d699:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0049d69d:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_0049d6a0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d6a2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d6a5:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d6aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d6aa:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_0049d6ae:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_0049d6b1:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0049d6b5:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_0049d6b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d6b9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d6bb:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0049d6bf:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_0049d6c1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d6c3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d6c4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d6c7:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0049d6cb:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_0049d6ce:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0049d6d2:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_0049d6d4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d6d5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d6d7:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0049d6db:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_0049d6de:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d6e0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d6e3:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0049d6e7:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_0049d6e9:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_0049d6f0:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_0049d6f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d6f4:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_0049d6fb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d6fd:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_0049d701:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_0049d704:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d706:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d709:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d70eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d70e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d70f:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_0049d716:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d71bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d71b:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0049d71f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049d724:  // lea esi, [esp + 0xd8]
    esi = (uint32_t)((uint32_t)(esp + 0xd8u));
L_0049d72b:  // lea edi, [esp + 0x98]
    edi = (uint32_t)((uint32_t)(esp + 0x98u));
L_0049d732:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049d734:  // mov esi, dword ptr [esp + 0x44]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0049d738:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_0049d73d:  // mov edi, dword ptr [esp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0049d741:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0049d745:  // mov ecx, dword ptr [ebp + 0xe8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe8u)));
L_0049d74b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049d74c:  // add edi, 0x10
    t0 = ladd<32>(edi, 0x10u, f);
    edi = (uint32_t)(t0);
L_0049d74f:  // add edx, 0x30
    t0 = ladd<32>(edx, 0x30u, f);
    edx = (uint32_t)(t0);
L_0049d752:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0049d754:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_0049d758:  // mov dword ptr [esp + 0x48], edi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edi);
L_0049d75c:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_0049d760:  // jl 0x49d4c1
    if ((f.sf != f.of)) goto L_0049d4c1;
L_0049d766:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0049d768:  // je 0x49da1e
    if (f.zf) goto L_0049da1e;
L_0049d76e:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049d774:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d776:  // jne 0x49d969
    if (!f.zf) goto L_0049d969;
L_0049d77c:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049d77e:  // lea eax, [esp + 0xc8]
    eax = (uint32_t)((uint32_t)(esp + 0xc8u));
L_0049d785:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d786:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049d788:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d78au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d78a:  // fld dword ptr [esp + 0x11c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x11cu)));
L_0049d791:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049d793:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049d795:  // fstp dword ptr [esp + 0x11c]
    F32((uint32_t)(esp + 0x11cu)) = lf32(ST(0));
    lpop(x);
L_0049d79c:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_0049d7a3:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049d7a6:  // fstp dword ptr [esp + 0x120]
    F32((uint32_t)(esp + 0x120u)) = lf32(ST(0));
    lpop(x);
L_0049d7ad:  // fld dword ptr [esp + 0x124]
    lpush(x, (long double)F32((uint32_t)(esp + 0x124u)));
L_0049d7b4:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049d7b7:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_0049d7bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d7bc:  // fstp dword ptr [esp + 0x128]
    F32((uint32_t)(esp + 0x128u)) = lf32(ST(0));
    lpop(x);
L_0049d7c3:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049d7c5:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d7c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d7c8:  // fld dword ptr [esp + 0x154]
    lpush(x, (long double)F32((uint32_t)(esp + 0x154u)));
L_0049d7cf:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049d7d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d7d2:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_0049d7d5:  // fld dword ptr [esp + 0x150]
    lpush(x, (long double)F32((uint32_t)(esp + 0x150u)));
L_0049d7dc:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_0049d7df:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d7e1:  // fld dword ptr [esp + 0x154]
    lpush(x, (long double)F32((uint32_t)(esp + 0x154u)));
L_0049d7e8:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_0049d7eb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d7ed:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d7f0:  // fld dword ptr [esp + 0x150]
    lpush(x, (long double)F32((uint32_t)(esp + 0x150u)));
L_0049d7f7:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_0049d7fa:  // fld dword ptr [esp + 0x154]
    lpush(x, (long double)F32((uint32_t)(esp + 0x154u)));
L_0049d801:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_0049d804:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d805:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d807:  // fld dword ptr [esp + 0x15c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x15cu)));
L_0049d80e:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_0049d811:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d813:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d816:  // fld dword ptr [esp + 0x154]
    lpush(x, (long double)F32((uint32_t)(esp + 0x154u)));
L_0049d81d:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_0049d81f:  // fld dword ptr [esp + 0x158]
    lpush(x, (long double)F32((uint32_t)(esp + 0x158u)));
L_0049d826:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_0049d829:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d82a:  // lea ecx, [esp + 0xd4]
    ecx = (uint32_t)((uint32_t)(esp + 0xd4u));
L_0049d831:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d833:  // fld dword ptr [esp + 0x160]
    lpush(x, (long double)F32((uint32_t)(esp + 0x160u)));
L_0049d83a:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_0049d83d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d83f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d842:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d847u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d847:  // fld dword ptr [esp + 0x144]
    lpush(x, (long double)F32((uint32_t)(esp + 0x144u)));
L_0049d84e:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_0049d851:  // fld dword ptr [esp + 0x13c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x13cu)));
L_0049d858:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_0049d85b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d85c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d85d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d85f:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_0049d866:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_0049d869:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d86b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d86e:  // fld dword ptr [esp + 0x144]
    lpush(x, (long double)F32((uint32_t)(esp + 0x144u)));
L_0049d875:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_0049d878:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_0049d87f:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_0049d882:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d883:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d885:  // fld dword ptr [esp + 0x150]
    lpush(x, (long double)F32((uint32_t)(esp + 0x150u)));
L_0049d88c:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_0049d88f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d891:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d894:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_0049d89b:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_0049d89d:  // fld dword ptr [esp + 0x14c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14cu)));
L_0049d8a4:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_0049d8a7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d8a9:  // fld dword ptr [esp + 0x150]
    lpush(x, (long double)F32((uint32_t)(esp + 0x150u)));
L_0049d8b0:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_0049d8b3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d8b5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d8b6:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_0049d8bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d8c0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d8c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d8c5:  // fld dword ptr [esp + 0x138]
    lpush(x, (long double)F32((uint32_t)(esp + 0x138u)));
L_0049d8cc:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_0049d8cf:  // fld dword ptr [esp + 0x134]
    lpush(x, (long double)F32((uint32_t)(esp + 0x134u)));
L_0049d8d6:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_0049d8d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d8da:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d8db:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d8dd:  // fld dword ptr [esp + 0x138]
    lpush(x, (long double)F32((uint32_t)(esp + 0x138u)));
L_0049d8e4:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_0049d8e7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d8e9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d8ec:  // fld dword ptr [esp + 0x138]
    lpush(x, (long double)F32((uint32_t)(esp + 0x138u)));
L_0049d8f3:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_0049d8f6:  // fld dword ptr [esp + 0x13c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x13cu)));
L_0049d8fd:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_0049d900:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d901:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d903:  // fld dword ptr [esp + 0x144]
    lpush(x, (long double)F32((uint32_t)(esp + 0x144u)));
L_0049d90a:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_0049d90d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d90f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d912:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_0049d919:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_0049d91c:  // fld dword ptr [esp + 0x144]
    lpush(x, (long double)F32((uint32_t)(esp + 0x144u)));
L_0049d923:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_0049d926:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d927:  // lea ecx, [esp + 0x9c]
    ecx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_0049d92e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d930:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_0049d937:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_0049d939:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049d93b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049d93e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d943u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d943:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d944:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_0049d94b:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d950u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d950:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049d955:  // lea esi, [esp + 0xd8]
    esi = (uint32_t)((uint32_t)(esp + 0xd8u));
L_0049d95c:  // lea edi, [esp + 0x12c]
    edi = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049d963:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049d965:  // mov esi, dword ptr [esp + 0x44]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0049d969:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049d96f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049d971:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049d972:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049d974:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d977u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d977:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049d979:  // jne 0x49da1e
    if (!f.zf) goto L_0049da1e;
L_0049d97f:  // mov al, byte ptr [esp + 0x12]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x12u))) & 0xffu);
L_0049d983:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0049d987:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049d989:  // jne 0x49d9ad
    if (!f.zf) goto L_0049d9ad;
L_0049d98b:  // mov edx, dword ptr [ebx + 0xc8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xc8u)));
L_0049d991:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049d993:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_0049d999:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049d99c:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0049d99e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049d99f:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_0049d9a6:  // call 0x41ad10
    t0 = 0x0041ad10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049d9abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049d9ab:  // jmp 0x49d9d9
    goto L_0049d9d9;
L_0049d9ad:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049d9b1:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049d9b5:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049d9b9:  // mov dword ptr [esp + 0x11c], edx
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(edx);
L_0049d9c0:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049d9c4:  // mov dword ptr [esp + 0x120], eax
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(eax);
L_0049d9cb:  // mov dword ptr [esp + 0x124], ecx
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(ecx);
L_0049d9d2:  // mov dword ptr [esp + 0x128], edx
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(edx);
L_0049d9d9:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0049d9dd:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049d9df:  // jne 0x49db18
    if (!f.zf) goto L_0049db18;
L_0049d9e5:  // mov edx, dword ptr [ebx + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0049d9eb:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_0049d9f1:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0049d9f3:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049d9f8:  // lea edi, [esp + 0x12c]
    edi = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049d9ff:  // lea esi, [eax + eax*2]
    esi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049da02:  // lea eax, [esp + 0x12c]
    eax = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049da09:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0049da0c:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0049da0e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049da0f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049da11:  // lea ecx, [esp + 0xdc]
    ecx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_0049da18:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049da19:  // jmp 0x49db03
    goto L_0049db03;
L_0049da1e:  // mov al, byte ptr [esp + 0x12]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x12u))) & 0xffu);
L_0049da22:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0049da26:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049da28:  // jne 0x49da86
    if (!f.zf) goto L_0049da86;
L_0049da2a:  // mov eax, dword ptr [ebx + 0xc8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xc8u)));
L_0049da30:  // mov edx, esi
    edx = (uint32_t)(esi);
L_0049da32:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_0049da38:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049da3f:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049da42:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0049da44:  // lea eax, [esp + 0xc8]
    eax = (uint32_t)((uint32_t)(esp + 0xc8u));
L_0049da4b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049da4c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049da4d:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049da52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049da52:  // fld dword ptr [esp + 0x11c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x11cu)));
L_0049da59:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049da5b:  // fstp dword ptr [esp + 0x11c]
    F32((uint32_t)(esp + 0x11cu)) = lf32(ST(0));
    lpop(x);
L_0049da62:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_0049da69:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049da6c:  // fstp dword ptr [esp + 0x120]
    F32((uint32_t)(esp + 0x120u)) = lf32(ST(0));
    lpop(x);
L_0049da73:  // fld dword ptr [esp + 0x124]
    lpush(x, (long double)F32((uint32_t)(esp + 0x124u)));
L_0049da7a:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049da7d:  // fstp dword ptr [esp + 0x124]
    F32((uint32_t)(esp + 0x124u)) = lf32(ST(0));
    lpop(x);
L_0049da84:  // jmp 0x49dab2
    goto L_0049dab2;
L_0049da86:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0049da8a:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0049da8e:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0049da92:  // mov dword ptr [esp + 0x11c], ecx
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(ecx);
L_0049da99:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0049da9d:  // mov dword ptr [esp + 0x120], edx
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(edx);
L_0049daa4:  // mov dword ptr [esp + 0x124], eax
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(eax);
L_0049daab:  // mov dword ptr [esp + 0x128], ecx
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(ecx);
L_0049dab2:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0049dab6:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049dab8:  // jne 0x49db18
    if (!f.zf) goto L_0049db18;
L_0049daba:  // mov eax, dword ptr [ebx + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x10cu)));
L_0049dac0:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_0049dac6:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049dacd:  // lea edx, [esi + esi*2]
    edx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_0049dad0:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049dad3:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0049dad5:  // lea eax, [esp + 0xd8]
    eax = (uint32_t)((uint32_t)(esp + 0xd8u));
L_0049dadc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049dadd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049dade:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049dae3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049dae3:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049dae8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049daea:  // lea edi, [esp + 0x12c]
    edi = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049daf1:  // lea edx, [esp + 0xd8]
    edx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_0049daf8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049dafa:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049db01:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049db02:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049db03:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_0049db0a:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049db0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049db0f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049db14:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049db16:  // jmp 0x49db24
    goto L_0049db24;
L_0049db18:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049db1d:  // lea esi, [esp + 0x98]
    esi = (uint32_t)((uint32_t)(esp + 0x98u));
L_0049db24:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049db2a:  // mov edx, dword ptr [ebp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_0049db2d:  // lea edi, [esp + 0x12c]
    edi = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049db34:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_0049db3c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049db3e:  // fild dword ptr [esp + 0x80]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x80u)));
L_0049db45:  // mov edi, dword ptr [ebp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049db48:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049db4b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049db4d:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0049db4f:  // add ecx, edi
    t0 = ladd<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_0049db51:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0049db53:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0049db55:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0049db58:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_0049db5b:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0049db5e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0049db61:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0049db64:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0049db67:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049db6d:  // mov edi, dword ptr [ebp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0049db70:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049db75:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049db78:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049db7b:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049db7d:  // add esi, edi
    t0 = ladd<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_0049db7f:  // mov edi, dword ptr [ebp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_0049db82:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_0049db84:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049db86:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049db8c:  // mov edx, dword ptr [ebp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0049db8f:  // mov ecx, dword ptr [ebp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049db92:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0049db95:  // mov edx, dword ptr [eax + edx]
    edx = (uint32_t)(M32((uint32_t)(eax + edx)));
L_0049db98:  // mov dword ptr [ecx + eax], edx
    M32((uint32_t)(ecx + eax)) = (uint32_t)(edx);
L_0049db9b:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049dba1:  // mov esi, dword ptr [ebp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049dba4:  // mov ecx, dword ptr [esp + 0x11c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x11cu)));
L_0049dbab:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049dbae:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0049dbb0:  // lea esi, [esp + 0x12c]
    esi = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0049dbb7:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0049dbb9:  // mov edx, dword ptr [esp + 0x120]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x120u)));
L_0049dbc0:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0049dbc3:  // mov ecx, dword ptr [esp + 0x124]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_0049dbca:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0049dbcd:  // mov edx, dword ptr [esp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x128u)));
L_0049dbd4:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0049dbd7:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049dbdd:  // mov ecx, dword ptr [ebp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0049dbe0:  // lea edi, [eax + eax*2]
    edi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049dbe3:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0049dbe6:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0049dbe8:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049dbed:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049dbef:  // mov eax, dword ptr [ebx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x88u)));
L_0049dbf5:  // mov ecx, dword ptr [ebp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0049dbf8:  // fstp dword ptr [ecx + eax*4]
    F32((uint32_t)(ecx + eax * 4u)) = lf32(ST(0));
    lpop(x);
L_0049dbfb:  // mov eax, dword ptr [ebx + 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_0049dc01:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049dc03:  // jle 0x49dc7c
    if ((f.zf || f.sf != f.of)) goto L_0049dc7c;
L_0049dc05:  // mov edx, dword ptr [esp + 0x164]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x164u)));
L_0049dc0c:  // mov eax, dword ptr [esp + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x160u)));
L_0049dc13:  // mov ecx, dword ptr [ebx + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_0049dc19:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049dc1a:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0049dc1e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049dc1f:  // lea esi, [esp + 0x134]
    esi = (uint32_t)((uint32_t)(esp + 0x134u));
L_0049dc26:  // mov eax, dword ptr [ecx + edx*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + edx * 4u)));
L_0049dc29:  // mov edx, dword ptr [esp + 0x124]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_0049dc30:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049dc31:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049dc36:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_0049dc39:  // mov eax, dword ptr [esp + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x15cu)));
L_0049dc40:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0049dc42:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0049dc45:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049dc47:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0049dc49:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0049dc4b:  // mov edx, dword ptr [esp + 0x170]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x170u)));
L_0049dc52:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0049dc55:  // mov eax, dword ptr [esp + 0x174]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x174u)));
L_0049dc5c:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0049dc5f:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0049dc62:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0049dc64:  // call 0x49d280
    t0 = 0x0049d280u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049dc69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049dc69:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0049dc6d:  // mov ecx, dword ptr [ebx + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x90u)));
L_0049dc73:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049dc74:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0049dc76:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0049dc7a:  // jl 0x49dc05
    if ((f.sf != f.of)) goto L_0049dc05;
L_0049dc7c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0049dc7d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0049dc7e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049dc7f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049dc80:  // add esp, 0x108
    t0 = ladd<32>(esp, 0x108u, f);
    esp = (uint32_t)(t0);
L_0049dc86:  // ret 0x4c
    c->target = M32(esp); esp += 80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0049d280, 0049d280)
